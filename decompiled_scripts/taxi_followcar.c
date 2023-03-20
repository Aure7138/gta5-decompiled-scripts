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
	uLocal_77 = unk_0xEBE67A6803CC2677();
	uLocal_78 = unk_0x0CE068B6E4456899();
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
	if (unk_0x9CEB376419A71A96(67))
	{
		func_438(2);
		func_434();
	}
	unk_0xECB8ED754419899D(1);
	func_420();
	while (true)
	{
		if (unk_0xC1EDB61CE0A4B94E(Local_423.f_2))
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
	uParam0->f_2 = unk_0x06736567F820A39E();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x06736567F820A39E());
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
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x06736567F820A39E());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x06736567F820A39E(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x06736567F820A39E(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x06736567F820A39E(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x06736567F820A39E(), "MICHAEL", 0, 1);
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
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_419(&Local_423))
	{
		func_418(&Local_423);
		if (unk_0xCDB4C4200A9B478A(Local_853.f_4))
		{
			unk_0x2239ED27B231AE2E(&(Local_853.f_4));
		}
		if (func_417(&Local_423, 0))
		{
			func_415();
		}
	}
	else
	{
		func_414(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_380(&Local_423, &uLocal_1125);
			func_379(&Local_423);
			func_378(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_377(&Local_423))
			{
				func_346();
			}
			else
			{
				func_337(&Local_423, "Taxi Not Driveable", func_345(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !iLocal_905)
		{
			func_325();
		}
		if (iLocal_907)
		{
			unk_0x5CBFB57BFCC3866E(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_301(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_298();
				func_297(&Local_423, 16, 4f, 0);
				func_295(&Local_423, Local_916, Local_919, "TaxiKeyla", iLocal_886, 41.1334f, 15f);
				func_294(&Local_423);
				func_293(&Local_423, 1);
				break;
			
			case 1:
				if (func_291())
				{
					func_290();
					func_270();
					func_269(&(Local_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_268(&Local_423, &Local_409);
					func_267(&Local_423);
					unk_0x41BBA77D020A0CEB(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_293(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_262(&Local_423, 1))
				{
					if (!unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
					{
						unk_0x47222A663B914109(Local_423.f_3, 0, 0, 1, 0);
						unk_0x47222A663B914109(Local_423.f_3, 2, 1, 2, 0);
						unk_0x47222A663B914109(Local_423.f_3, 3, 0, 2, 0);
						unk_0x47222A663B914109(Local_423.f_3, 4, 1, 3, 0);
						unk_0x47222A663B914109(Local_423.f_3, 8, 1, 0, 0);
					}
					func_261(&Local_423, 1, 0);
					unk_0x3ECE0E645B1530B3("TAXI_Escapee", &(Local_853.f_30));
					unk_0x054CBFE90FAA6840(255, Local_853.f_30, Local_423.f_413);
					unk_0x054CBFE90FAA6840(255, Local_853.f_30, joaat("player"));
					unk_0xD0AB55C45DC575B3(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_293(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_242(&Local_423, 0, 1109393408))
				{
					func_241();
					func_293(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_240(&Local_423))
				{
					func_236(&Local_423, 9, 1, 0, 0);
					func_235(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_234();
					func_233(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_293(&Local_423, 17);
				}
				if (unk_0x1B6292EA51632C25(Local_423.f_4, 0))
				{
					if (!unk_0x93E49C491856D7AD(Local_423.f_2, Local_423.f_4, 0))
					{
						func_231(&Local_423);
						func_293(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_230(&Local_423, &(Local_423.f_9));
				if (!unk_0xC1EDB61CE0A4B94E(Local_853.f_3))
				{
					if (func_229())
					{
						func_228(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_227(&Local_423, &Local_853);
				}
				if (func_201(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0xF7A235CE474EFED9(Local_423.f_9))
					{
						unk_0xEEF2AFCBBDD180D3(Local_423.f_9, 0);
					}
					unk_0x2239ED27B231AE2E(&(Local_423.f_9));
					func_293(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_194())
				{
					if (!func_193())
					{
						func_236(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_293(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_227(&Local_423, &Local_853);
				func_192();
				if (func_191(Local_853.f_2, Local_853.f_3))
				{
					func_190(&Local_423, 2, 0);
					unk_0xB0D398F03CECE074(Local_853.f_2, 1);
					unk_0xD14E5ED9D5665519(Local_853.f_2, 6, 1);
					unk_0xD14E5ED9D5665519(Local_853.f_2, 17, 1);
					func_261(&Local_423, 1, 0);
					Local_853.f_5 = unk_0x6267527E254067CA(Local_853.f_3);
					Local_853.f_15 = unk_0xA1B16F2399008FCA(Local_853.f_3);
					Local_853.f_16 = unk_0x4B2FB28E87E96C63(Local_853.f_3);
					func_297(&Local_423, 13, 0f, 0);
					func_297(&Local_423, 20, 0f, 0);
					unk_0xAAA48D4004763482(Local_946, Local_949);
					uLocal_894 = unk_0x33189531E55C7E33(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x2246B8E07D62C4EA(0);
					func_293(&Local_423, 13);
				}
				break;
			
			case 13:
				func_192();
				func_227(&Local_423, &Local_853);
				func_230(&Local_423, &(Local_853.f_4));
				if (func_189(&Local_423))
				{
					if (func_188(Local_853.f_2, Local_853.f_4))
					{
						func_236(&Local_423, 51, 1, 0, 0);
						func_293(&Local_423, 25);
					}
					func_184(&Local_423);
					func_181(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_149())
					{
						if (unk_0x8CA9A9AC7D099DC9(Local_853.f_3))
						{
							unk_0xE15D10AA2BA3C64D(Local_853.f_3);
							unk_0x271ED3A59A006150(0, "taxi_oj_fc3");
						}
						func_147(&uLocal_45, 0, 0);
						func_146();
						func_293(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_145())
				{
					if (func_124())
					{
						func_293(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_123(&Local_423, &(Local_423.f_43));
				if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
				{
					if ((unk_0x8853522CEFF93BE9(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0x137B8B7A1CAD742A(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
						{
							unk_0x1F6717C33A02B7AC(iLocal_890);
							unk_0xA9AD2484206C8140(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_236(&Local_423, 37, 1, 0, 0);
						func_293(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_123(&Local_423, &(Local_423.f_43));
				func_122(&Local_423, Local_853.f_2, 1, 1);
				func_122(&Local_423, iLocal_890, 0, 0);
				func_230(&Local_423, &(Local_423.f_9));
				if (unk_0xCDB4C4200A9B478A(Local_853.f_4))
				{
					unk_0x2239ED27B231AE2E(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0xCDB4C4200A9B478A(Local_423.f_9))
				{
					Local_423.f_9 = func_120(Local_423.f_17, 1);
				}
				if (unk_0x1B6292EA51632C25(Local_423.f_4, 0))
				{
					if (unk_0x93E49C491856D7AD(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0x8853522CEFF93BE9(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x923F1BB1676259BF(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x923F1BB1676259BF(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x923F1BB1676259BF(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
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
							func_293(&Local_423, 22);
						}
					}
				}
				break;
			
			case 22:
				func_122(&Local_423, Local_853.f_2, 0, 1);
				func_122(&Local_423, iLocal_890, 0, 0);
				if (!unk_0xCFC04A38F256EE06(Local_423.f_3))
				{
					if (unk_0x1B6292EA51632C25(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_117(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0x2239ED27B231AE2E(&(Local_423.f_9));
								func_293(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0xCDB4C4200A9B478A(Local_423.f_9))
							{
								Local_423.f_9 = func_120(Local_423.f_17, 1);
							}
							if (func_201(&Local_423, 8f, 1097859072, 1117782016) || func_117(&Local_423, 1, 1084227584))
							{
								unk_0x2239ED27B231AE2E(&(Local_423.f_9));
								func_293(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_122(&Local_423, Local_853.f_2, 0, 1);
				func_122(&Local_423, iLocal_890, 0, 0);
				if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1)
				{
					func_236(&Local_423, 37, 1, 0, 0);
					func_293(&Local_423, 27);
				}
				break;
			
			case 27:
				func_122(&Local_423, Local_853.f_2, 0, 1);
				func_122(&Local_423, iLocal_890, 0, 0);
				if (!unk_0xCFC04A38F256EE06(Local_423.f_3))
				{
					if (unk_0xCDB4C4200A9B478A(Local_853.f_4))
					{
						unk_0x2239ED27B231AE2E(&(Local_853.f_4));
					}
					unk_0x49C880E67EA66DDF("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_116(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_114(&Local_423);
					func_110(&Local_423);
					func_109(&Local_423);
					func_293(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x49C880E67EA66DDF("TAXI_OBJ_DRIVE");
				if (func_80(&Local_423, &uLocal_1132))
				{
					func_54(&Local_423);
					func_293(&Local_423, 28);
				}
				break;
			
			case 28:
				if (iLocal_905 || iLocal_904)
				{
					func_293(&Local_423, 30);
				}
				break;
			
			case 30:
				unk_0x49C880E67EA66DDF("TAXI_OBJ_DRIVE");
				if ((!unk_0xCFC04A38F256EE06(Local_423.f_3) && unk_0x1D58D319587D567F(iLocal_890, Local_423.f_3, 1)) && unk_0x1D58D319587D567F(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_51(1, &Local_423, 1);
						func_434();
					}
					else
					{
						iLocal_421 = unk_0x213A13641B1680CB(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0x1B6292EA51632C25(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0x0170B2BC3AFB9430(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0xCFC04A38F256EE06(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0xBD96FB226D1E195C(5, Local_940, 1, 0f, &uLocal_895))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_49(Local_940, 1) > 100f || func_47(Local_423.f_3, unk_0x06736567F820A39E()) > 100f)
				{
					func_51(1, &Local_423, 1);
					func_434();
				}
				else if ((unk_0xCFC04A38F256EE06(Local_423.f_3) || unk_0x1D58D319587D567F(iLocal_890, unk_0x06736567F820A39E(), 1)) || unk_0x1D58D319587D567F(Local_853.f_2, unk_0x06736567F820A39E(), 1))
				{
					if (!unk_0xCFC04A38F256EE06(Local_423.f_3))
					{
						unk_0xBA63517ADBC1E5E3(Local_423.f_3, 1);
						unk_0x1F6717C33A02B7AC(Local_423.f_3);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x366AD87F9FB096E3(0, 2000);
						unk_0x331679E15ACD8EC7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_423.f_3, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(Local_423.f_3, 1);
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_890))
					{
						unk_0xBA63517ADBC1E5E3(iLocal_890, 1);
						unk_0x1F6717C33A02B7AC(iLocal_890);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x366AD87F9FB096E3(0, 1000);
						unk_0x331679E15ACD8EC7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(iLocal_890, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(iLocal_890, 1);
					}
					if (!unk_0xCFC04A38F256EE06(Local_853.f_2))
					{
						unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						if (bLocal_908)
						{
							unk_0x28B5966B12DC5B0F(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x5ADB1DCCE9B5E895(0, 500);
						unk_0x331679E15ACD8EC7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(Local_853.f_2, 1);
					}
					func_51(1, &Local_423, 1);
					func_434();
				}
				else if ((iLocal_904 && !func_193()) && (unk_0x1ADBAAC322D61F73() - iLocal_900) > 500)
				{
					if (!unk_0xCFC04A38F256EE06(Local_423.f_3))
					{
						unk_0xBA63517ADBC1E5E3(Local_423.f_3, 1);
						unk_0x1F6717C33A02B7AC(Local_423.f_3);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x8C4083252905932E(0, unk_0x06736567F820A39E(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_423.f_3, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(Local_423.f_3, 1);
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_890))
					{
						unk_0xBA63517ADBC1E5E3(iLocal_890, 1);
						unk_0x1F6717C33A02B7AC(iLocal_890);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x366AD87F9FB096E3(0, 1000);
						unk_0x331679E15ACD8EC7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(iLocal_890, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(iLocal_890, 1);
					}
					if (!unk_0xCFC04A38F256EE06(Local_853.f_2))
					{
						unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
						unk_0x1F6717C33A02B7AC(Local_853.f_2);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x5ADB1DCCE9B5E895(0, 500);
						unk_0x331679E15ACD8EC7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0x97C5D2BB8E47131D(Local_853.f_2, 1);
					}
					func_9(&Local_423, 1);
					func_434();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)
{
	func_418(uParam0);
	if (func_193())
	{
		func_45();
	}
	func_43();
	unk_0x1AEFC2FB20822515();
	unk_0x310F6B4E168A8F5D(1);
	func_40(0);
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		unk_0x590C7568C3E71544(uParam0->f_4, 0);
		unk_0x4E9000E5E76332B4(uParam0->f_4);
		unk_0x500289229EBC4C29(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_233(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x6553935614875699(unk_0x06736567F820A39E(), 32, 1);
	if (func_32())
	{
		unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
	}
	unk_0xBF56EEBC581190D1(1);
	func_22(0, 1, 1, 0);
	unk_0xC2FFF2F24C49CE3E(1);
	unk_0xEB57C3B228D6B95F(1);
	if (unk_0x97A9CC2DDCDAA0A8(*uParam0))
	{
		unk_0xC2F547D33F9342CC(*uParam0, 0);
		unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
		unk_0x2246B8E07D62C4EA(1);
	}
	if (func_21(Global_101186.f_17863, 4))
	{
		func_19(&(Global_101186.f_17863), 4);
		unk_0x2CC3164B94BF6E73(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x6B09668CBB188BED("gestures@m@standing@casual");
	unk_0x6B09668CBB188BED("oddjobs@taxi@");
	unk_0x6B09668CBB188BED("oddjobs@towingcome_here");
	if (unk_0x2CB436C59D8FC08B())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x6F54F6E4D3F3FD07(unk_0xBC628C78D8ECD5F1()))
	{
		unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 1, 0);
	}
	unk_0x839EC6E89C3E2564(unk_0xF2DB717A73826179((func_10(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_11(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x17CC0D5008835470())
	{
		iVar2 = unk_0x201D90648B2AE3CE();
		return (unk_0xBBDA792448DB5A89(iVar2) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 1);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x60D87DA27F70EBBC(&uVar0))
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
	unk_0x0BE6D001584EFCC6(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_3))
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
		{
			if (!unk_0x0FDFEC0DD29106EE(uParam0->f_3, 0))
			{
				unk_0x4DE16F52A5E7F186(uParam0->f_3);
			}
			unk_0xBA63517ADBC1E5E3(uParam0->f_3, 0);
			unk_0x054CBFE90FAA6840(255, uParam0->f_413, joaat("player"));
			if (unk_0x46E9388908C80483(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xCF392B3BBDE04CED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x46E9388908C80483(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xCF392B3BBDE04CED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x46E9388908C80483(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xCF392B3BBDE04CED(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x46E9388908C80483(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xCF392B3BBDE04CED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x5318F6C4C2B82FA7(&(uParam0->f_3));
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
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_31(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_30())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_31(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_27(unk_0xE0BDAFA1A39552D6())) && !func_24(unk_0xE0BDAFA1A39552D6(), 0)) && !func_23())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_27(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_23()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312747;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && uParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x1EDDA235B077A4A1(unk_0xBC628C78D8ECD5F1()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0x98934607F8D0FB03(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0x98934607F8D0FB03(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_38(Param0, func_39(), 0))
	{
		Var0 = { func_37(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_37(Param0, 1f, 30f, 30f, 10f) };
		unk_0x41BBA77D020A0CEB(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_37(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

bool func_38(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_39()
{
	struct<3> Var0;
	
	return Var0;
}

void func_40(int iParam0)
{
	if (Global_14571)
	{
		func_41(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_30())
	{
		Global_14413.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88576[iVar0 /*17*/] && !Global_88576[iVar0 /*17*/].f_1)
		{
			if (Global_88576[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88576[iVar0 /*17*/].f_5 != 88 && Global_88576[iVar0 /*17*/].f_5 != 89) && Global_88576[iVar0 /*17*/].f_5 != 92)
				{
					func_44(Global_88576[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85628[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85628[iParam0 /*2*/] = 0;
	}
}

void func_45()
{
	Global_14578 = 0;
	func_46();
}

void func_46()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
	}
}

float func_47(int iParam0, int iParam1)
{
	return func_48(iParam0, iParam1, 1);
}

float func_48(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

float func_49(struct<3> Param0, int iParam3)
{
	return func_50(unk_0x44A9253132E1DDE0(unk_0xBC628C78D8ECD5F1()), Param0, iParam3);
}

float func_50(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(iParam0, 1), Param1, iParam4);
}

void func_51(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0xCFC04A38F256EE06(uParam1->f_3))
		{
			unk_0x6553935614875699(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_52(1, 0);
	}
	func_9(uParam1, bParam2);
}

void func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_101186.f_17863.f_22[0]++;
			func_53("Fares Completed ++ = ", Global_101186.f_17863.f_22[0]);
			break;
		
		case 1:
			Global_101186.f_17863.f_22[1]++;
			func_53("Fares Failed ++ = ", Global_101186.f_17863.f_22[1]);
			break;
		
		case 2:
			Global_101186.f_17863.f_22[2]++;
			func_53("Fares Accepted ++ ", Global_101186.f_17863.f_22[2]);
			break;
		
		case 3:
			Global_101186.f_17863.f_22[3]++;
			func_53("Fares Expired ++ ", Global_101186.f_17863.f_22[3]);
			break;
		
		case 13:
			Global_101186.f_17863.f_22[13]++;
			func_53("Passengers run ++ = ", Global_101186.f_17863.f_22[13]);
			break;
		
		case 14:
			Global_101186.f_17863.f_22[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_101186.f_17863.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_101186.f_17863.f_22[4])
				{
					Global_101186.f_17863.f_22[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_101186.f_17863.f_22[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_101186.f_17863.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_101186.f_17863.f_22[5] = (Global_101186.f_17863.f_22[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_101186.f_17863.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_101186.f_17863.f_22[6]++;
			}
			else
			{
				Global_101186.f_17863.f_22[6] = (Global_101186.f_17863.f_22[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_101186.f_17863.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_101186.f_17863.f_22[7] = (Global_101186.f_17863.f_22[7] + iParam1);
			}
			else
			{
				Global_101186.f_17863.f_22[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_101186.f_17863.f_22[7]);
			break;
		
		case 8:
			Global_101186.f_17863.f_22[8]++;
			func_53("Taxis wrecked ++ = ", Global_101186.f_17863.f_22[8]);
			break;
		
		case 9:
			Global_101186.f_17863.f_22[9]++;
			func_53("Horn Honked ++ = ", Global_101186.f_17863.f_22[9]);
			break;
		
		case 10:
			Global_101186.f_17863.f_22[10] = (Global_101186.f_17863.f_22[10] + iParam1);
			func_53("Total Money Earned = ", Global_101186.f_17863.f_22[10]);
			break;
		
		case 11:
			Global_101186.f_17863.f_22[11] = (Global_101186.f_17863.f_22[11] + iParam1);
			func_53("Total Tips Earned = ", Global_101186.f_17863.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_101186.f_17863.f_22[12])
			{
				Global_101186.f_17863.f_22[12] = iParam1;
				func_53("New Highest Tip = ", Global_101186.f_17863.f_22[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_101186.f_17863.f_22[12]);
			}
			break;
	}
}

void func_53(char* sParam0, int iParam1)
{
}

void func_54(var uParam0)
{
	func_52(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_438(1);
		func_66(15, 1);
	}
	func_64(&(Global_101186.f_17863), 1024);
	if (!func_21(Global_101186.f_17863, 64))
	{
		func_55(func_62(func_63(uParam0)), 0, 0);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)
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
		func_61((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101186.f_8960[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101186.f_8960[iParam0 /*12*/].f_6 == 11 || Global_101186.f_8960[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101186.f_8960[iParam0 /*12*/].f_5 = 1;
		Global_101186.f_8960[iParam0 /*12*/].f_10 = iParam1;
		Global_101186.f_8960[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_56();
	}
}

void func_56()
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
	Global_100922 = 0;
	Global_100923 = 0;
	Global_100924 = 0;
	Global_100925 = 0;
	Global_100926 = 0;
	Global_100927 = 0;
	Global_100928 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101186.f_8960.f_3853;
	Global_101186.f_8960.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101186.f_8960[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101186.f_8960[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100922++;
					fVar1 = (fVar1 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100923++;
					fVar2 = (fVar2 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100924++;
					fVar3 = (fVar3 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100925++;
					fVar4 = (fVar4 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100926++;
					fVar5 = (fVar5 + (Global_101186.f_8960[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100927++;
					fVar6 = (fVar6 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100928++;
					fVar7 = (fVar7 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100905 > 0)
	{
		if (Global_100922 == Global_100905)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100906 > 0)
	{
		if (Global_100923 == Global_100906)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100907 > 0)
	{
		if (Global_100924 == Global_100907)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100908 > 0)
	{
		if (Global_100925 == Global_100908)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100909 > 0)
	{
		if (((Global_100926 == Global_100909 || (Global_100909 * 10 / Global_100926) < 41) || Global_100926 > Global_100912) || Global_100926 == Global_100912)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_101186.f_8960.f_3856, 14))
			{
				if (Global_100926 == Global_100909)
				{
					unk_0x1B6939A0FB3A66B3(joaat("num_rndevents_completed"), Global_100909, 0);
					unk_0xE27C8E42A97895CF(&(Global_101186.f_8960.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100910 > 0)
	{
		if (Global_100927 == Global_100910)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100911 > 0)
	{
		if (Global_100928 == Global_100911)
		{
			fVar7 = 5f;
		}
	}
	Global_101186.f_8960.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100926 > Global_100912 || Global_100926 == Global_100912)
	{
		iVar9 = Global_100912;
	}
	else
	{
		iVar9 = Global_100926;
	}
	unk_0x57B5A527FBAC251E(joaat("num_missions_completed"), Global_100922, 1);
	unk_0x57B5A527FBAC251E(joaat("num_missions_available"), Global_100905, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_completed"), Global_100923, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_available"), Global_100906, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_completed"), Global_100924, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_available"), Global_100907, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_completed"), Global_100925, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_available"), Global_100908, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_available"), Global_100912, 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_completed"), (Global_100928 + Global_100927), 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_available"), (Global_100911 + Global_100910), 1);
	Global_100929 = (Global_100922 * 100 / Global_100905);
	Global_100931 = ((Global_100924 + Global_100923) * 100 / (Global_100907 + Global_100906));
	Global_100930 = ((Global_100925 + iVar9) * 100 / (Global_100908 + Global_100912));
	Global_100932 = ((Global_100927 + Global_100928) * 100 / (Global_100910 + Global_100911));
	unk_0x81278411EC120DEA(joaat("total_progress_made"), Global_101186.f_8960.f_3853, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_story_missions"), Global_100929, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_ambient_missions"), Global_100930, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_oddjobs"), Global_100931, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853))
	{
		func_60(13, unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853));
	}
	if (!unk_0xD67AADBB828CC3BE())
	{
		if (!Global_69521)
		{
			if (func_59() == 2 == 0 && !unk_0x17CC0D5008835470())
			{
				if (unk_0x614D6A182129DE96())
				{
					Global_100920 = 0;
				}
				if (!Global_55780)
				{
					func_57();
				}
			}
		}
	}
}

int func_57()
{
	if (func_58(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_58(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

int func_59()
{
	return Global_25152;
}

int func_60(int iParam0, int iParam1)
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
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1DE02059C7818E12((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x962F55EEC297B13E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x1DE02059C7818E12((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x962F55EEC297B13E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x1DE02059C7818E12((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x962F55EEC297B13E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_62(int iParam0)
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

int func_63(var uParam0)
{
	return uParam0->f_411;
}

void func_64(var uParam0, int iParam1)
{
	func_65(uParam0, iParam1);
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_66(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_67(iParam0, iParam1);
}

int func_67(int iParam0, int iParam1)
{
	if (func_79(14) && !func_78(iParam0))
	{
		return 0;
	}
	if (unk_0x3BC5AA36405F01BF(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25398 != 0 && !Global_69521)
	{
		return 0;
	}
	if (func_77(&Global_2568285))
	{
		if (func_75(&Global_2568285, iParam0))
		{
			return 0;
		}
		if (func_68(&Global_2568285, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4B72953FB5C2CF5B(iParam0))
		{
			return 0;
		}
		if (unk_0x3BC5AA36405F01BF(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_68(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	func_71(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_69(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0, iVar0);
		iVar0++;
	}
	func_73(uParam0, (Global_2568284 - 0.5f));
}

void func_72(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_73(var uParam0, float fParam1)
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

float func_74(var uParam0)
{
	return uParam0->f_72;
}

bool func_75(var uParam0, int iParam1)
{
	return func_76(uParam0, iParam1) != -1;
}

int func_76(var uParam0, int iParam1)
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

bool func_77(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_78(int iParam0)
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

bool func_79(int iParam0)
{
	return Global_35742 == iParam0;
}

int func_80(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_193() && func_107(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
				}
				func_106(uParam0);
				func_19(&(Global_101186.f_17863), 4096);
				func_104(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_105(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x962E604CCA53388F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_103(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_97(uParam1, 0))
			{
				func_81(uParam0);
				func_297(uParam0, 0, 0, 0);
				func_103(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_81(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_82(func_95(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_101186.f_32651[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xFF4D252D25F54A29(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x57B5A527FBAC251E(iVar1, iVar0, 1);
	}
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_94();
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
					func_93(99, 1);
					func_92(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_90(5))
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
							func_92(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_90(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_92(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xFC71FD0B03208C77())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_90(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_89(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				
				case 1:
					func_93(97, iParam3);
					break;
				
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
	}
	iVar5 = (Global_52954[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52954[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52954[iVar2] = 2147483647;
				}
				else
				{
					Global_52954[iVar2] = (Global_52954[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_92(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52954[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52954[iVar2];
			Global_52954[iVar2] = (Global_52954[iVar2] - iParam3);
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
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101186.f_25165.f_233[iVar2 /*69*/]++;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_1++;
		if (Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_85(iParam0);
	if (Global_35742 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)
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
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52962[iVar0 /*3*/][0] = Global_101186.f_25165[iVar0];
		Global_52962.f_31[iVar0 /*3*/][0] = Global_101186.f_25165.f_11[iVar0];
		Global_52962.f_62[iVar0 /*3*/][0] = Global_101186.f_25165.f_22[iVar0];
		Global_52962.f_93[iVar0 /*3*/][0] = Global_101186.f_25165.f_33[iVar0];
		Global_52962.f_124[iVar0 /*3*/][0] = Global_101186.f_25165.f_44[iVar0];
		Global_52962.f_155[iVar0 /*3*/][0] = Global_101186.f_25165.f_55[iVar0];
		Global_52962.f_186[iVar0 /*3*/][0] = Global_101186.f_25165.f_66[iVar0];
		Global_52962.f_217[iVar0 /*3*/][0] = Global_101186.f_25165.f_77[iVar0];
		Global_52962.f_248[iVar0 /*3*/][0] = Global_101186.f_25165.f_88[iVar0];
		if (!bParam0)
		{
			Global_52962[iVar0 /*3*/][1] = Global_101186.f_25165[iVar0];
			Global_52962.f_31[iVar0 /*3*/][1] = Global_101186.f_25165.f_11[iVar0];
			Global_52962.f_62[iVar0 /*3*/][1] = Global_101186.f_25165.f_22[iVar0];
			Global_52962.f_93[iVar0 /*3*/][1] = Global_101186.f_25165.f_33[iVar0];
			Global_52962.f_124[iVar0 /*3*/][1] = Global_101186.f_25165.f_44[iVar0];
			Global_52962.f_155[iVar0 /*3*/][1] = Global_101186.f_25165.f_55[iVar0];
			Global_52962.f_186[iVar0 /*3*/][1] = Global_101186.f_25165.f_66[iVar0];
			Global_52962.f_217[iVar0 /*3*/][1] = Global_101186.f_25165.f_77[iVar0];
			Global_52962.f_248[iVar0 /*3*/][1] = Global_101186.f_25165.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52954[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x57B5A527FBAC251E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x57B5A527FBAC251E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x57B5A527FBAC251E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x17CC0D5008835470())
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0) || unk_0x7DA173D4FD42F36B(Global_2097152[func_88() /*10510*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		unk_0x99BCB15F954AF579(&(Global_2097152[func_88() /*10510*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x999E5F6D1B49D87B("COUP_RED");
		unk_0x4C5D86B5B659C953(func_87(iParam0));
		unk_0x850E49B6757F562E(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)
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

int func_88()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_89(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_90(int iParam0)
{
	if (!unk_0x17CC0D5008835470())
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0);
	}
	return unk_0x7DA173D4FD42F36B(Global_2097152[func_88() /*10510*/].f_7704.f_10, iParam0);
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3BC5AA36405F01BF(27))
	{
		return 0;
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFF4D252D25F54A29(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x57B5A527FBAC251E(joaat("num_cash_spent"), iVar1, 1);
		func_60(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_66(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xFF4D252D25F54A29(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x57B5A527FBAC251E(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x17CC0D5008835470())
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/])
	{
		unk_0xFF4D252D25F54A29(Global_51522[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x57B5A527FBAC251E(Global_51522[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_94()
{
	int iVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		unk_0xFF4D252D25F54A29(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52954[0] == iVar0)
		{
			Global_52954[0] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52954[1] == iVar0)
		{
			Global_52954[1] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52954[2] == iVar0)
		{
			Global_52954[2] = iVar0;
		}
	}
}

int func_95()
{
	func_96();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_96()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_4(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_3(unk_0x06736567F820A39E());
			if (func_5(iVar0) && (!func_79(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_5(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

int func_97(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_101(&(uParam0->f_2));
	}
	unk_0x9AD5FF38501E64A6(14);
	unk_0xA5C0BA1772140603(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xD471C64C0898A7BF(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_101(&(uParam0->f_5));
				func_100(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_99(&(uParam0->f_5)) > 0.33f)
			{
				func_98(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_99(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_101(&(uParam0->f_5));
			func_100(uParam0, 1051260355);
		}
		else if (func_99(&(uParam0->f_5)) > 0.33f)
		{
			func_98(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_99(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_100(var uParam0, int iParam1)
{
	unk_0x2B859AD680983623(*uParam0, "SHARD_ANIM_OUT");
	unk_0x7AF283DA3BA078CD(uParam0->f_9);
	unk_0xB62735E5BEC5ABF8(iParam1);
	unk_0xE97F1B22C5E8989F();
}

void func_101(var uParam0)
{
	func_102(uParam0, 0f);
}

void func_102(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - fParam1);
	unk_0xE27C8E42A97895CF(uParam0, 1);
	unk_0x99BCB15F954AF579(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_103(int iParam0)
{
	Global_69781 = iParam0;
	Global_69782 = iParam0;
}

void func_104(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x2B859AD680983623(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x7291E2F821FCFC04("STRING");
	unk_0xD5EA844E0F1947AF(iParam9);
	unk_0x4C5D86B5B659C953(sParam1);
	unk_0xD6360E18957BCDD3();
	unk_0x7291E2F821FCFC04(sParam7);
	unk_0xD92C45283BCDA624(uParam2);
	unk_0xD92C45283BCDA624(uParam3);
	unk_0x4C5D86B5B659C953(uParam6);
	unk_0xD92C45283BCDA624(uParam5);
	unk_0xD92C45283BCDA624(iParam4);
	unk_0xD6360E18957BCDD3();
	unk_0xE97F1B22C5E8989F();
	func_101(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_105(var uParam0)
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

void func_106(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_52(11, uParam0->f_56);
	func_52(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x7DA173D4FD42F36B(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_107(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_108(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_99(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_108(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_101(uParam0);
	}
}

void func_109(var uParam0)
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
		func_64(&(uParam0->f_55), 1);
	}
}

void func_110(var uParam0)
{
	func_112();
	unk_0x1AEFC2FB20822515();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_236(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_236(uParam0, 103, 1, 0, 0);
		}
		func_111(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_236(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_236(uParam0, 102, 1, 0, 0);
	}
	func_297(uParam0, 16, 4f, 0);
}

void func_111(int iParam0)
{
	Global_99898.f_221 = iParam0;
}

void func_112()
{
	Global_14578 = 0;
	func_113();
}

void func_113()
{
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0x0F9FE213495D2609();
		Global_16723 = 0;
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_114(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_115(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_52(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_52(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_115(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xE27C8E42A97895CF(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_117(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x93E49C491856D7AD(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_119();
				return 1;
			}
			else if (func_118(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 0, 256);
				}
				else
				{
					unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 0, 0);
				}
			}
			unk_0x0CAA5F5F1AA634C8(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 73, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam5)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC80D2B3478FFF428(0, 69, 1);
		unk_0xC80D2B3478FFF428(0, 70, 1);
		unk_0xC80D2B3478FFF428(0, 68, 1);
	}
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 138, 1);
	unk_0xC80D2B3478FFF428(0, 136, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
	unk_0xC80D2B3478FFF428(0, 131, 1);
	unk_0xC80D2B3478FFF428(0, 132, 1);
	unk_0xC80D2B3478FFF428(0, 123, 1);
	unk_0xC80D2B3478FFF428(0, 126, 1);
	unk_0xC80D2B3478FFF428(0, 129, 1);
	unk_0xC80D2B3478FFF428(0, 130, 1);
	unk_0xC80D2B3478FFF428(0, 133, 1);
	unk_0xC80D2B3478FFF428(0, 134, 1);
	unk_0xEEB3EB1EAE3ADA8E();
	if ((unk_0x1ADBAAC322D61F73() - Global_29) > 500)
	{
		unk_0xD5739C1C2A4441D5(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1ADBAAC322D61F73();
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xF87C669B882D93C0(unk_0x137B8B7A1CAD742A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_119()
{
	if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
	{
		unk_0xB87E30BB393A29AE(unk_0xE0BDAFA1A39552D6());
	}
}

var func_120(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1232EB8CC16E4E5F(Param0);
	unk_0xC5B281EF0EBC2AA6(uVar0, func_121(unk_0x17CC0D5008835470(), 1f, 1f));
	unk_0xEEF2AFCBBDD180D3(uVar0, iParam3);
	return uVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_122(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
			{
				if (unk_0x681E099FF604FDCE(iParam1))
				{
					if (unk_0x24C87321CFD64D48(unk_0x06736567F820A39E()))
					{
						if (Local_423.f_109 == 0)
						{
							func_337(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0xCFC04A38F256EE06(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
				{
					unk_0x1F6717C33A02B7AC(iLocal_890);
					unk_0xFEDD46326A41DB46(iLocal_890, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					unk_0x97C5D2BB8E47131D(iLocal_890, 1);
				}
				func_337(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
				{
					unk_0x1F6717C33A02B7AC(Local_853.f_2);
					unk_0xFEDD46326A41DB46(Local_853.f_2, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					unk_0x97C5D2BB8E47131D(Local_853.f_2, 1);
				}
				func_337(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0xE5A4C0A15A60DF39(unk_0xE0BDAFA1A39552D6()))
		{
			if ((unk_0x0AE885F6EA46EF04(iParam1, joaat("weapon_stungun"), 0) || unk_0x0AE885F6EA46EF04(iParam1, 0, 2)) || unk_0x0AE885F6EA46EF04(iParam1, 0, 1))
			{
				if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
				{
					unk_0x1F6717C33A02B7AC(iLocal_890);
					unk_0xFEDD46326A41DB46(iLocal_890, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					unk_0x97C5D2BB8E47131D(iLocal_890, 1);
				}
				if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
				{
					unk_0x1F6717C33A02B7AC(Local_853.f_2);
					unk_0xFEDD46326A41DB46(Local_853.f_2, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					unk_0x97C5D2BB8E47131D(Local_853.f_2, 1);
				}
				func_337(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0x47B96DD05EA110BE(unk_0xE0BDAFA1A39552D6());
			}
		}
	}
}

void func_123(var uParam0, var uParam1)
{
	unk_0x2D757F64C9E605F0(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_124()
{
	struct<3> Var0;
	
	func_144();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_140(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_890))
	{
		if (!unk_0xCFC04A38F256EE06(iLocal_890))
		{
			Var0 = { unk_0xF4745590D18D14B8(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_139(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x1ADBAAC322D61F73();
				func_137(&uLocal_1082);
				func_136(&Local_1052, -1, 1);
				func_233(Local_958, 0, 15f);
				func_233(Local_961, 0, 15f);
				func_135(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_134();
				func_297(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_133("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_107(&Local_423, 19) > 0.5f)
			{
				func_132(0, 0, 1);
				unk_0x6C4DEE9BDB093DC6(Local_958, 30f, 0, 0, 0, 0, 0);
				unk_0x6C4DEE9BDB093DC6(Local_961, 30f, 0, 0, 0, 0, 0);
				unk_0x463C4DB5BC64DCA2(Local_958, 30f, 0);
				unk_0x463C4DB5BC64DCA2(Local_961, 30f, 0);
				func_130(Local_958, 1114636288, 1);
				func_130(Local_961, 1114636288, 1);
				unk_0x41BBA77D020A0CEB(Local_946, Local_949, 0, 1);
				func_236(&Local_423, 35, 1, 1, 0);
				unk_0x6F5C374D2816B01C(Local_423.f_0, func_129(0));
				unk_0xAB083A717BDF90F1(Local_423.f_0, func_128(0), 2);
				unk_0x97552B9A3B1A6CC6(Local_423.f_0, 44.5167f);
				unk_0x1CB53231E96DF097(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x78EE57C40B1C74AA(Local_423.f_0, 1);
				unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
				if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
				{
					unk_0xA9AD2484206C8140(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0xEF32567B3A5047F5(Local_853.f_3, fLocal_971);
					if (unk_0xB2CC9814910D458B(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0x3C7CA2EEF089B5A7(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
					{
						unk_0x38A3FCC42E9078F5(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_297(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_107(&Local_423, 19) > 5f)
			{
				func_297(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_107(&Local_423, 19) > 4.7f)
			{
				if (func_127())
				{
					if (!iLocal_915)
					{
						unk_0xD82614F454EB2C8B("CamPushInNeutral", 0, 0);
						unk_0x962E604CCA53388F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
			{
				unk_0xA9AD2484206C8140(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0xEF32567B3A5047F5(Local_853.f_3, fLocal_974);
				unk_0xE15D10AA2BA3C64D(Local_853.f_3);
			}
			func_297(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0x1B6292EA51632C25(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0x8EA2EEF67922F899(800);
				unk_0x086A554C80BC6C5D(0);
				unk_0xA71476EEBE45FF73(0, 1065353216);
				if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
				{
					unk_0xA9AD2484206C8140(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0xEF32567B3A5047F5(Local_853.f_3, fLocal_974);
					unk_0xE15D10AA2BA3C64D(Local_853.f_3);
					if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
					{
						unk_0x66F20C27DFBDFC38(Local_853.f_2);
						unk_0xA9AD2484206C8140(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0xEF32567B3A5047F5(Local_853.f_2, -49.27436f);
					}
				}
				unk_0xC2F547D33F9342CC(Local_423.f_0, 0);
				unk_0xC2F547D33F9342CC(uLocal_422, 0);
				func_125(1, 1, 1);
				unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
				while (!unk_0xDF916BCF4D39E8C2())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_190(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_125(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 1, 0);
	}
	unk_0xBF56EEBC581190D1(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xC2FFF2F24C49CE3E(1);
		unk_0xEB57C3B228D6B95F(1);
	}
	func_126(23, 0);
}

void func_126(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&Global_25396, iParam0);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_25396, iParam0);
	}
}

int func_127()
{
	if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_128(int iParam0)
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

Vector3 func_129(int iParam0)
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

void func_130(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0xFD54561D68B9D057(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_37(Var1, func_131(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_37(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0xD0AB55C45DC575B3(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x68BC92FE5E41018D(Var7, Var4, 1);
	}
}

float func_131(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 0, iParam0);
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0x1D2204CE0D02765E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 15f);
	}
	unk_0xBF56EEBC581190D1(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0);
	unk_0xC2FFF2F24C49CE3E(0);
	unk_0xEB57C3B228D6B95F(0);
	func_126(23, 1);
}

void func_133(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1ADBAAC322D61F73() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1ADBAAC322D61F73();
}

void func_134()
{
	var uVar0;
	
	iLocal_890 = unk_0xB500796AAD639F82(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0xF3EC28ABAC2B6F35(iLocal_890, 5);
	unk_0x47222A663B914109(iLocal_890, 3, 1, 2, 0);
	unk_0x47222A663B914109(iLocal_890, 4, 0, 1, 0);
	unk_0x47222A663B914109(iLocal_890, 2, 1, 2, 0);
	unk_0x6553935614875699(iLocal_890, 20, 1);
	func_7(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
	{
		unk_0xEF32567B3A5047F5(iLocal_890, fLocal_970);
		unk_0xDD1A4EE55D86FE71(&uVar0);
		unk_0xD6763C9F81772BAE(&uVar0);
		unk_0x5ADB1DCCE9B5E895(0, 2500);
		unk_0x28B5966B12DC5B0F(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0x4B09146FC97A26BC(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0x6F275D9063DAF754(uVar0);
		unk_0x457C4844450FF70E(iLocal_890, uVar0);
		unk_0xDD1A4EE55D86FE71(&uVar0);
	}
}

void func_135(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x97A9CC2DDCDAA0A8(*uParam0))
	{
		*uParam0 = unk_0x1BB5D74247ED2C1E(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_136(var uParam0, int iParam1, bool bParam2)
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

void func_137(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_138(), 24);
		iVar0++;
	}
	unk_0x1AEFC2FB20822515();
	func_45();
}

var func_138()
{
	var uVar0;
	
	return uVar0;
}

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x937BE2ED4FE56FFA())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			return 0;
		}
		iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
		if (bParam0)
		{
			if (unk_0xBDA1F5E8A36BFA07(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
			{
				if (unk_0x4321FC7479614822(iVar0, -1) != unk_0x06736567F820A39E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
		{
			if (unk_0x47595E8E5571263C(iVar0) < 0.95f || unk_0x47595E8E5571263C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!unk_0xFAA527C349D56C09(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0)
{
	if (func_143() && unk_0x1ADBAAC322D61F73() >= iParam0 + 1000)
	{
		unk_0xEBA0934AA600C515(500);
		while (!unk_0x4FF34B5B023875E1())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_141();
		return 1;
	}
	return 0;
}

void func_141()
{
	Global_14578 = 0;
	func_142();
}

void func_142()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

int func_143()
{
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (unk_0xD471C64C0898A7BF(0, 18) || unk_0xD471C64C0898A7BF(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	if (func_34())
	{
		unk_0x26D397C2D3E4FE49("appInternet");
	}
	if (func_33())
	{
		unk_0x26D397C2D3E4FE49("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_145()
{
	if (!unk_0x5C9FE32E2FF37989(iLocal_887))
	{
		return 0;
	}
	if (!unk_0x7B43775D6E0D7325("MOVE_DUCK_FOR_COVER"))
	{
		func_133("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_146()
{
	unk_0xBECC89ACB4E5D4ED(iLocal_887);
	unk_0x198E497B820DA913("MOVE_DUCK_FOR_COVER");
	unk_0x198E497B820DA913(&cLocal_980);
	unk_0x198E497B820DA913(&cLocal_996);
	unk_0x198E497B820DA913(&cLocal_1012);
	unk_0x198E497B820DA913(&cLocal_1028);
}

void func_147(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
		{
			return;
		}
	}
	if (unk_0x4C0D45C16561CFBA())
	{
		unk_0xC07D0B27D5ABBE46(iParam2);
		unk_0xBDC149D7C67DBF2E("FocusIn");
		unk_0x8D72E02348CB74D2("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xD82614F454EB2C8B("FocusOut", 0, 0);
			unk_0x962E604CCA53388F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2246B8E07D62C4EA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x60D87DA27F70EBBC(sVar0))
	{
		if (!unk_0x17CC0D5008835470())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x60D87DA27F70EBBC(uParam0->f_3))
	{
		if (func_148(uParam0->f_3))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
	if (!unk_0x60D87DA27F70EBBC(sVar0))
	{
		if (func_148(sVar0))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
}

bool func_148(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

int func_149()
{
	if (func_107(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_170(&Local_423, &Local_853, (unk_0x1ADBAAC322D61F73() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
	{
		if (unk_0x1B6292EA51632C25(Local_423.f_4, 0))
		{
			if (unk_0x923F1BB1676259BF(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0xD5739C1C2A4441D5(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_150(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_123(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
			{
				if (!unk_0xF871F24303F1E6EE(Local_853.f_3) && IntToFloat((unk_0x1ADBAAC322D61F73() - iLocal_975)) > unk_0x3A56D0ABBD758A90(120, "txm_fc_h1_"))
				{
					unk_0xCB0E9D592F2F88FA(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_150(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_151(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_152(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_152(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4C0D45C16561CFBA())
	{
		if (unk_0x1ADBAAC322D61F73() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x60D87DA27F70EBBC(iVar0))
	{
		if (!unk_0x17CC0D5008835470())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_148(iVar0))
	{
		func_169();
	}
	if (func_168(iParam1) && unk_0x666D4D13AC213458(iParam1))
	{
		iVar1 = 0;
		if (unk_0x77CB3F400804EDD1(iParam1))
		{
			unk_0x56898685C45E424B(unk_0x406B8F450D0105AB(iParam1));
			unk_0x29F75EF74CF24F1A(unk_0x406B8F450D0105AB(iParam1), 1);
			if (unk_0x8AEE6D3E2059C808(unk_0x406B8F450D0105AB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xFCBEC4C2079B0872(iParam1))
		{
			unk_0x422538D0C109DC17(unk_0x43AB2E726FCE3BF7(iParam1));
			if (unk_0xD5D290CFF286A197(unk_0x43AB2E726FCE3BF7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x25EBA3BDCAE4CD26(iParam1))
		{
			unk_0x0A616F5DE79114F2(unk_0x9197467AFDAFBDB6(iParam1));
			if (unk_0x335F01273990728E(unk_0x9197467AFDAFBDB6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4C0D45C16561CFBA())
		{
			if (func_163(uParam0, bParam7, bParam9, 0))
			{
				func_160(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_157(iVar0))
				{
					if ((unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0)) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
					{
						if ((iVar1 && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
						{
							if (!func_148(iVar0))
							{
								func_156(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
								{
									func_155(1);
								}
							}
						}
					}
				}
			}
			else if (func_157(iVar0))
			{
				if (unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0))
				{
					if (((unk_0xE72EEEBA742753B0(iParam1) && iVar1) && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
					{
						if (!func_148(iVar0))
						{
							func_156(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
							{
								func_155(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x60D87DA27F70EBBC(sParam5))
			{
				if (func_148(sParam5))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
			{
				if (unk_0xB2EE69B49C21F2E0(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(3) == 3 || unk_0x20EC647BB13B981D(3) == 4)
					{
						func_147(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC32E6148FEFD72AD(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(6) == 3 || unk_0x20EC647BB13B981D(6) == 4)
					{
						func_147(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x06071C128D7E648A(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(4) == 3 || unk_0x20EC647BB13B981D(4) == 4)
					{
						func_147(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF090AA685D55F909(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(5) == 3 || unk_0x20EC647BB13B981D(5) == 4)
					{
						func_147(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC1B8A2E022EFC2C3(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(2) == 3 || unk_0x20EC647BB13B981D(2) == 4)
					{
						func_147(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8997C0D6F8CACEDC() == 3 || unk_0x8997C0D6F8CACEDC() == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			if (!func_163(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_154(uParam0))
				{
					func_153(uParam0);
				}
			}
		}
	}
	else
	{
		func_147(uParam0, iVar0, 0);
	}
}

void func_153(var uParam0)
{
	if (func_168(unk_0x06736567F820A39E()))
	{
		unk_0x9A12E803B1184012(unk_0x06736567F820A39E());
	}
	if (unk_0x4C0D45C16561CFBA())
	{
		unk_0x2246B8E07D62C4EA(1);
		unk_0xC07D0B27D5ABBE46(0);
		unk_0x8D72E02348CB74D2("HINT_CAM_SCENE");
		unk_0xBDC149D7C67DBF2E("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xD82614F454EB2C8B("FocusOut", 0, 0);
			unk_0x962E604CCA53388F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_154(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1ADBAAC322D61F73()
		{
			return 1;
		}
	}
	return 0;
}

int func_155(bool bParam0)
{
	switch (Global_35742)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101186.f_8815.f_100++;
			}
			return Global_101186.f_8815.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101186.f_8815.f_101++;
			}
			return Global_101186.f_8815.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101186.f_8815.f_102++;
			}
			return Global_101186.f_8815.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_156(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

int func_157(char* sParam0)
{
	if (!func_158(1, 1, 0))
	{
		if ((!unk_0x226FA58470A21AEF(sParam0) && func_148(sParam0)) || func_148("CMN_HINT"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return 0;
	}
	switch (Global_35742)
	{
		case 0:
		case 3:
			if (func_155(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_155(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_155(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_158(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xAD79840A082ADD7F())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_159())
	{
		return 0;
	}
	if (unk_0x28E650D9BD8DC870())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (unk_0x98934607F8D0FB03(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52961)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
		{
			if (unk_0xB2EE69B49C21F2E0(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(3) == 3 || unk_0x20EC647BB13B981D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC32E6148FEFD72AD(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(6) == 3 || unk_0x20EC647BB13B981D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x06071C128D7E648A(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(4) == 3 || unk_0x20EC647BB13B981D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF090AA685D55F909(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(5) == 3 || unk_0x20EC647BB13B981D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC1B8A2E022EFC2C3(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(2) == 3 || unk_0x20EC647BB13B981D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8997C0D6F8CACEDC() == 3 || unk_0x8997C0D6F8CACEDC() == 4)
			{
				return 0;
			}
			if (unk_0x18375133AFD06D12())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_159()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

void func_160(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		func_147(uParam0, 0, 0);
	}
	if (func_38(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x77CB3F400804EDD1(iParam1))
		{
			iVar0 = unk_0x406B8F450D0105AB(iParam1);
			if (!unk_0x0FDFEC0DD29106EE(iVar0, 0))
			{
				if (unk_0x4E75E5867592AC01(iVar0))
				{
					if (!func_161())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xFB27C72734065835(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2246B8E07D62C4EA(0);
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
	unk_0x0FE275F91FA13532(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x3195125C126B79C6(unk_0x06736567F820A39E(), iParam1, -1, iVar3, iVar4);
	unk_0xD82614F454EB2C8B("FocusIn", 0, 0);
	unk_0xE491AB346B56AC9F("HINT_CAM_SCENE");
	unk_0x962E604CCA53388F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1ADBAAC322D61F73();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_161()
{
	return func_162(unk_0xE0BDAFA1A39552D6());
}

int func_162(int iParam0)
{
	if (unk_0x79469DA5833EACA8(unk_0x44A9253132E1DDE0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_163(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1ADBAAC322D61F73() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					if (func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_154(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1ADBAAC322D61F73() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
					{
						if (!func_167(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1ADBAAC322D61F73();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
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
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_166(bParam1, bParam2, bParam3) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || unk_0x1DE8FA479639B7F5(unk_0x06736567F820A39E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1ADBAAC322D61F73() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
					{
						if (func_165(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || unk_0x1DE8FA479639B7F5(unk_0x06736567F820A39E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_154(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_158(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_169();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_158(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xC80D2B3478FFF428(0, 140, 1);
			unk_0xC80D2B3478FFF428(0, 80, 1);
			if (unk_0x4EC803EBF471F8D9(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_158(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		unk_0xC80D2B3478FFF428(0, 80, 1);
		if (unk_0xBF6A9D598B3CA6F9())
		{
			if (unk_0x4EC803EBF471F8D9(0, 80))
			{
				unk_0x2246B8E07D62C4EA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_158(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xC80D2B3478FFF428(0, 140, 1);
			unk_0xC80D2B3478FFF428(0, 80, 1);
			if (unk_0x7A4571218C06A722(0, 80) && unk_0x1ADBAAC322D61F73() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_158(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		unk_0xC80D2B3478FFF428(0, 80, 1);
		if (unk_0xBF6A9D598B3CA6F9())
		{
			if (unk_0x7A4571218C06A722(0, 80) && unk_0x1ADBAAC322D61F73() > Global_116)
			{
				unk_0x2246B8E07D62C4EA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (unk_0xFCBEC4C2079B0872(iParam0))
		{
			if (unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x77CB3F400804EDD1(iParam0))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x406B8F450D0105AB(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x25EBA3BDCAE4CD26(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_169()
{
	unk_0xE27C8E42A97895CF(&Global_2284, 4);
}

void func_170(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
	{
		if (unk_0x1D58D319587D567F(uParam1->f_2, unk_0x06736567F820A39E(), 0))
		{
			func_337(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_337(uParam0, "Followee died", 13);
	}
	if ((unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0 && unk_0x1B6292EA51632C25(uParam1->f_3, 0)) && !unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
	{
		unk_0xA151790F58DBF41F(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x97C5D2BB8E47131D(uParam1->f_2, 1);
		func_337(uParam0, "Player went wanted", 4);
	}
	func_179(uParam0, uParam1);
	if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (bParam3)
		{
			if (func_178(&(uParam1->f_3)))
			{
				unk_0xE6634751450D4FD6(unk_0xF4745590D18D14B8(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_177(&(uParam1->f_3)))
			{
				unk_0xE6634751450D4FD6(unk_0xF4745590D18D14B8(uParam1->f_3, 1), func_176(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_175(&(uParam1->f_3)))
			{
				unk_0xE6634751450D4FD6(unk_0xF4745590D18D14B8(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0xA1B16F2399008FCA(uParam1->f_3) < uParam1->f_15 || unk_0x1D58D319587D567F(uParam1->f_3, unk_0x06736567F820A39E(), 1)) || unk_0x4B2FB28E87E96C63(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x1D58D319587D567F(uParam1->f_3, unk_0x06736567F820A39E(), 0))
			{
				func_337(uParam0, "Taxi shot up the car", 12);
			}
			if (func_107(uParam0, 13) > 5f)
			{
				func_174(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0xA1B16F2399008FCA(uParam1->f_3);
				uParam1->f_5 = unk_0x6267527E254067CA(uParam1->f_3);
				uParam1->f_16 = unk_0x4B2FB28E87E96C63(uParam1->f_3);
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_236(uParam0, 143, 0, 0, 0);
				func_337(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_173(&(uParam0->f_409), unk_0xF4745590D18D14B8(uParam0->f_4, 1), unk_0xF4745590D18D14B8(uParam1->f_3, 1), 0) == -1 && func_48(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_107(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_297(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
						{
							unk_0xA151790F58DBF41F(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x97C5D2BB8E47131D(uParam1->f_2, 1);
						}
						func_337(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_172(uParam0, 6, 1);
					}
					else
					{
						func_172(uParam0, 1, 1);
					}
					func_236(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xA382B3D871DD22A4(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_297(uParam0, 8, 0, 0);
			}
			else if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_236(uParam0, 143, 0, 0, 0);
				func_337(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_48(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_178(&(uParam1->f_3))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < 13f && func_175(&(uParam1->f_3)))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < func_176(&(uParam1->f_3)) && func_177(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_171(uParam0, 21))
			{
				if ((unk_0xA382B3D871DD22A4(uParam0->f_4, uParam1->f_3, 17) && func_107(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_297(uParam0, 8, 0, 0);
					if (!func_171(uParam0, 21))
					{
						func_297(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_193())
						{
							if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
							{
								unk_0xA151790F58DBF41F(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x97C5D2BB8E47131D(uParam1->f_2, 1);
							}
							func_337(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_141();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_172(uParam0, 3, 1);
					}
					else
					{
						func_172(uParam0, 2, 1);
					}
					if (func_48(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_193())
						{
							func_236(uParam0, 143, 0, 0, 0);
							func_45();
							if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
							{
								unk_0xA151790F58DBF41F(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x97C5D2BB8E47131D(uParam1->f_2, 1);
							}
							func_337(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_141();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_236(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0xA1B16F2399008FCA(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_171(uParam0, 21))
			{
				func_190(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_297(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xA382B3D871DD22A4(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_297(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_172(uParam0, 8, 1);
					func_236(uParam0, 13, 1, 0, 0);
					func_297(uParam0, 8, 0, 0);
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
					if (func_107(uParam0, 8) > 15f && !func_193())
					{
						func_172(uParam0, 9, 1);
						func_236(uParam0, 13, 1, 0, 0);
						func_297(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_171(var uParam0, int iParam1)
{
	return func_13(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_172(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_173(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x290E65F6C850B833(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x31BBF34543BA157F(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_174(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_193())
		{
			func_261(uParam0, 0, 1);
			if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam1->f_2, 0))
			{
				unk_0xA151790F58DBF41F(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x97C5D2BB8E47131D(uParam1->f_2, 1);
			}
			func_337(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_141();
		}
	}
	else
	{
		func_297(uParam0, 13, 0, 0);
		unk_0xFE26A2643AFB7A3B(uParam1->f_3);
		func_172(uParam0, 10, 1);
		func_261(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_175(var uParam0)
{
	if (unk_0x1B6292EA51632C25(*uParam0, 0))
	{
		if (unk_0x47E7BE316A5F1598(*uParam0) || unk_0x137B8B7A1CAD742A(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_176(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0x1B6292EA51632C25(*uParam0, 0))
	{
		fVar1 = unk_0x137B8B7A1CAD742A(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_177(var uParam0)
{
	if (unk_0x1B6292EA51632C25(*uParam0, 0))
	{
		if (unk_0x137B8B7A1CAD742A(*uParam0) >= 4f && unk_0x137B8B7A1CAD742A(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(var uParam0)
{
	if (unk_0x1B6292EA51632C25(*uParam0, 0))
	{
		if (unk_0x137B8B7A1CAD742A(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0, var uParam1)
{
	if (unk_0x1B6292EA51632C25(uParam1->f_3, 0) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (func_48(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_180(uParam0) == 13)
				{
					func_112();
				}
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_180(uParam0) == 13)
				{
					func_112();
				}
			}
		}
	}
}

int func_180(var uParam0)
{
	return uParam0->f_416;
}

void func_181(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_193())
	{
		if (unk_0x1B6292EA51632C25(iParam0, 0))
		{
			if (func_50(iParam0, Param1, 1) < fParam4)
			{
				if (func_183(uParam5))
				{
					func_182(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_182(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_183(var uParam0)
{
	return *uParam0 == 0;
}

void func_184(var uParam0)
{
	if (func_187(uParam0))
	{
		func_185(uParam0);
	}
}

void func_185(var uParam0)
{
	if (unk_0xFCB75C9242C5C2A4() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xBEF2EC2EEA033AC8();
			func_190(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_107(uParam0, 20) > 3f)
				{
					func_236(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_107(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_236(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_107(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_236(uParam0, 85, 1, 0, 0);
						func_190(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_107(uParam0, 20) > 8f)
				{
					func_236(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_171(uParam0, 22))
				{
					func_186(uParam0, 22);
				}
			}
			if (func_171(uParam0, 22) && func_107(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_236(uParam0, 84, 1, 0, 0);
						func_190(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_236(uParam0, 85, 1, 0, 0);
						func_190(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_186(var uParam0, int iParam1)
{
	func_108(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_187(var uParam0)
{
	return uParam0->f_120;
}

int func_188(int iParam0, var uParam1)
{
	if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1)
	{
		if (unk_0xCFC04A38F256EE06(iParam0))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
				{
					unk_0xD8C6045E402E904C(unk_0xBC628C78D8ECD5F1(), 1, 0);
					unk_0xB9AD37E5A78BA03C(unk_0xBC628C78D8ECD5F1(), 0);
					if (unk_0xCDB4C4200A9B478A(uParam1))
					{
						unk_0x2239ED27B231AE2E(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_189(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x4321FC7479614822(uParam0->f_4, -1) == unk_0x06736567F820A39E())
		{
			return 1;
		}
	}
	return 0;
}

void func_190(var uParam0, int iParam1, bool bParam2)
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
			func_98(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_191(int iParam0, int iParam1)
{
	if (unk_0x1B6292EA51632C25(iParam1, 0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_192()
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
	unk_0x4F9B9416E775992C(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_193()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	func_144();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_140(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_139(1, 1, 1))
			{
				iLocal_897 = unk_0x1ADBAAC322D61F73();
				func_132(256, 0, 1);
				func_137(&uLocal_1082);
				func_136(&Local_1052, 2, 0);
				if (func_200(&Local_853, Local_934, fLocal_973))
				{
					unk_0xD0AB55C45DC575B3(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_135(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_236(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_107(&Local_423, 19) > 3f)
			{
				if (!unk_0xCFC04A38F256EE06(Local_853.f_2))
				{
					unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
					unk_0x1F6717C33A02B7AC(Local_853.f_2);
					if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
					{
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0xEA61E9C6B1D4A33E(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0x28B5966B12DC5B0F(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
						unk_0x818E8D7BA45E01E7(Local_853.f_3, 1);
					}
				}
				unk_0x6856D72AE90292EF(unk_0x06736567F820A39E(), Local_423.f_17);
				unk_0x6F5C374D2816B01C(Local_423.f_0, func_199(0));
				unk_0xAB083A717BDF90F1(Local_423.f_0, func_198(0), 2);
				unk_0x97552B9A3B1A6CC6(Local_423.f_0, 17.2f);
				unk_0x1CB53231E96DF097(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x78EE57C40B1C74AA(Local_423.f_0, 1);
				unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
				func_297(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0x1BB5D74247ED2C1E(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0x6F5C374D2816B01C(uLocal_422, func_199(4));
			unk_0xAB083A717BDF90F1(uLocal_422, func_198(0), 2);
			unk_0x97552B9A3B1A6CC6(uLocal_422, 17.2f);
			unk_0x1CB53231E96DF097(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0x7C63018108DAA00B(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_297(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_107(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_180(&Local_423) > 10)
				{
					func_195();
				}
				iLocal_912 = 1;
			}
			if (func_107(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0x6F5C374D2816B01C(Local_423.f_0, func_199(2));
				unk_0x52E39F7EA886EFC0(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0x97552B9A3B1A6CC6(Local_423.f_0, 35f);
				unk_0x1CB53231E96DF097(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x78EE57C40B1C74AA(Local_423.f_0, 1);
				unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
				func_297(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0x6F5C374D2816B01C(uLocal_422, func_199(2));
			unk_0x52E39F7EA886EFC0(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0x97552B9A3B1A6CC6(uLocal_422, 45f);
			unk_0x1CB53231E96DF097(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0x7C63018108DAA00B(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_297(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0) && !unk_0xBDA1F5E8A36BFA07(Local_853.f_3, 0))
			{
				if (!unk_0x0FDFEC0DD29106EE(Local_853.f_2, 0))
				{
					unk_0xE47DEDA2D353E92B(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0xF503C01D671985ED(Local_853.f_3, 10f);
				func_101(&(Local_853.f_27));
				func_297(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_195();
				}
			}
			break;
		
		case 11:
			if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
			{
			}
			if (unk_0x9DD14F307389ACD8(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0x35E1A0420EEAC98A(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_107(&Local_423, 19) > 4f)
			{
				unk_0x8EA2EEF67922F899(800);
				unk_0x086A554C80BC6C5D(0);
				unk_0xA71476EEBE45FF73(0, 1065353216);
				func_101(&(Local_853.f_27));
				unk_0xC2F547D33F9342CC(Local_423.f_0, 0);
				unk_0xC2F547D33F9342CC(uLocal_422, 0);
				func_125(1, 1, 1);
				unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
				func_190(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_107(&Local_423, 19) > 3.7f)
			{
				if (func_127())
				{
					if (!iLocal_914)
					{
						unk_0xD82614F454EB2C8B("CamPushInNeutral", 0, 0);
						unk_0x962E604CCA53388F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
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

void func_195()
{
	bLocal_901 = true;
	if (!unk_0xCFC04A38F256EE06(Local_853.f_2))
	{
		if (unk_0x1B6292EA51632C25(Local_853.f_3, 0))
		{
			if (unk_0x93E49C491856D7AD(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0xA9AD2484206C8140(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0xDEA5F99894469373(Local_853.f_2, Local_853.f_30);
				unk_0xD14E5ED9D5665519(Local_853.f_2, 1, 1);
				unk_0xD14E5ED9D5665519(Local_853.f_2, 6, 0);
				unk_0xD14E5ED9D5665519(Local_853.f_2, 17, 0);
				unk_0xD14E5ED9D5665519(Local_853.f_2, 3, 0);
				unk_0xB7A88D8620BC1E65(Local_853.f_2, 500f);
				unk_0xB3D3855479591291(Local_853.f_2, 500f);
				unk_0xCEFCF8F286ABEB25(Local_853.f_2, 500f);
				unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
				unk_0x86A805FC25766987(Local_853.f_3, 500);
				unk_0x86A805FC25766987(Local_853.f_2, 500);
				unk_0x215FFA3EE011BA3C(Local_853.f_3, 1);
				unk_0x215FFA3EE011BA3C(Local_853.f_2, 1);
				if (!unk_0xCDB4C4200A9B478A(Local_853.f_4))
				{
					Local_853.f_4 = func_196(Local_853.f_3, 0, 0);
				}
				unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
				unk_0x43B92BA48253ACDE(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0x44C139993A43DE40(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x1ADBAAC322D61F73();
			}
		}
	}
}

int func_196(int iParam0, bool bParam1, bool bParam2)
{
	return func_197(iParam0, !bParam1, bParam2);
}

int func_197(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDB8B533098769F4F(iParam0);
	if (unk_0xFCBEC4C2079B0872(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_121(unk_0x17CC0D5008835470(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF2B74C6AE979DE74(uVar0, bParam1);
		}
		else
		{
			unk_0x8A6C20F61A3C4CFA(uVar0, 2);
		}
	}
	else if (unk_0x77CB3F400804EDD1(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_121(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
		unk_0xF2B74C6AE979DE74(uVar0, bParam1);
	}
	else if (unk_0x25EBA3BDCAE4CD26(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_121(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_198(int iParam0)
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

Vector3 func_199(int iParam0)
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

int func_200(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0xC1EDB61CE0A4B94E(uParam0->f_2))
	{
		uParam0->f_2 = unk_0xB500796AAD639F82(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_7(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x0AB51FD6583D814C(uParam0->f_2, "TaxiJames");
	if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
	{
		unk_0x6553935614875699(iLocal_890, 20, 1);
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_2, 0))
	{
		unk_0x47222A663B914109(uParam0->f_2, 0, 1, 0, 0);
		unk_0x47222A663B914109(uParam0->f_2, 3, 0, 0, 0);
		unk_0x47222A663B914109(uParam0->f_2, 4, 0, 1, 0);
		unk_0x47222A663B914109(uParam0->f_2, 8, 0, 0, 0);
		unk_0x47222A663B914109(uParam0->f_2, 11, 0, 1, 0);
		unk_0xDEA5F99894469373(uParam0->f_2, uParam0->f_30);
		unk_0xD14E5ED9D5665519(uParam0->f_2, 1, 1);
		unk_0xD14E5ED9D5665519(uParam0->f_2, 6, 1);
		unk_0xD14E5ED9D5665519(uParam0->f_2, 17, 1);
		unk_0xD14E5ED9D5665519(uParam0->f_2, 3, 0);
		unk_0xB7A88D8620BC1E65(uParam0->f_2, 300f);
		unk_0xB3D3855479591291(uParam0->f_2, 300f);
		unk_0xCEFCF8F286ABEB25(uParam0->f_2, 300f);
		unk_0xBA63517ADBC1E5E3(uParam0->f_2, 1);
	}
	return 1;
}

int func_201(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xDF916BCF4D39E8C2() && !unk_0xEC708A793EB17979()) && !unk_0x58CFBE8B8644D59B()) && !unk_0x4FF34B5B023875E1()) && !uParam0->f_142)
	{
		if (func_213(uParam0))
		{
			func_123(uParam0, &(uParam0->f_43));
			func_208(uParam0);
			func_207(uParam0);
			func_184(uParam0);
			func_206(uParam0, fParam2, fParam3);
			func_204(uParam0);
			return func_202(uParam0, iParam1);
		}
	}
	return 0;
}

int func_202(var uParam0, int iParam1)
{
	if (func_63(uParam0) == 2)
	{
		if (unk_0x8853522CEFF93BE9(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_203(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1) && func_139(1, 1, 1)) && unk_0x8C491426FB07186E(uParam0->f_4))
		{
			return func_117(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x8853522CEFF93BE9(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1) && func_139(1, 1, 1)) && unk_0x8C491426FB07186E(uParam0->f_4))
	{
		return func_117(uParam0, 1, iParam1);
	}
	return 0;
}

float func_203(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Param1, iParam4);
}

void func_204(var uParam0)
{
	float fVar0;
	
	if ((func_205(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
	{
		if ((unk_0x1ADBAAC322D61F73() - iLocal_97) >= 10000)
		{
			fVar0 = func_49(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x1ADBAAC322D61F73();
		}
		if (iLocal_96 >= 2 && !func_193())
		{
			func_236(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x1ADBAAC322D61F73() % 4000) < 50)
		{
			if (!func_205(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_205(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
		{
			if (unk_0x93E49C491856D7AD(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_206(var uParam0, float fParam1, float fParam2)
{
	if (func_205(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0x47E7BE316A5F1598(uParam0->f_4) || unk_0x137B8B7A1CAD742A(uParam0->f_4) < 3f) && func_189(uParam0))
		{
			if (!func_171(uParam0, 2))
			{
				func_186(uParam0, 2);
			}
			else if (func_205(uParam0))
			{
				if (func_107(uParam0, 2) > fParam1 && !func_171(uParam0, 14))
				{
					if (func_34())
					{
						func_236(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_236(uParam0, 48, 1, 0, 0);
					}
					func_297(uParam0, 2, 0, 0);
					if (func_171(uParam0, 10))
					{
						func_297(uParam0, 10, 0, 0);
					}
				}
				if (!func_171(uParam0, 3))
				{
					func_297(uParam0, 3, 0, 0);
				}
				else if (func_107(uParam0, 3) >= fParam2)
				{
					func_190(uParam0, 3, 0);
					func_337(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_171(uParam0, 2))
			{
				func_190(uParam0, 2, 0);
			}
			if (func_171(uParam0, 3))
			{
				func_190(uParam0, 3, 0);
			}
		}
	}
}

void func_207(var uParam0)
{
	if (unk_0x1CD989DA6E3F1815(unk_0xBC628C78D8ECD5F1()) && !func_21(uParam0->f_44, 2))
	{
		func_64(&(uParam0->f_44), 2);
	}
	else if (!unk_0x1CD989DA6E3F1815(unk_0xBC628C78D8ECD5F1()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_52(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_236(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_208(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) >= 1)
				{
					if (func_107(uParam0, 9) > 1f)
					{
						func_212(uParam0, unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()));
						if (uParam0->f_410 != 22)
						{
							func_236(uParam0, 50, 1, 1, 0);
						}
						func_297(uParam0, 9, 0, 0);
						if (unk_0xCDB4C4200A9B478A(uParam0->f_9))
						{
							unk_0x7535364E752B61AE(uParam0->f_9, 0);
							unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_193() && func_107(uParam0, 9) > 4f)
				{
					func_236(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_211("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_236(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xAA2F2E1D7A88C64E(unk_0xBC628C78D8ECD5F1(), func_210(uParam0)))
				{
					func_212(uParam0, unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()));
					func_52(6, 0);
				}
				if (!func_209(uParam0))
				{
					if (!unk_0x97D4BC3047CEF5DE())
					{
						if (func_107(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_236(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1)
				{
					if (func_211("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x1AEFC2FB20822515();
					}
					if (unk_0xCDB4C4200A9B478A(uParam0->f_9))
					{
						unk_0x7535364E752B61AE(uParam0->f_9, 255);
						unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_193())
				{
					if (uParam0->f_410 != 22)
					{
						func_236(uParam0, 53, 1, 0, 1);
					}
					func_52(7, func_210(uParam0));
					func_212(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_193())
				{
					func_190(uParam0, 9, 0);
					func_297(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_209(var uParam0)
{
	return uParam0->f_110;
}

int func_210(var uParam0)
{
	return uParam0->f_106;
}

bool func_211(char* sParam0, int iParam1, int iParam2)
{
	unk_0xD6574ACDB39AA1DE(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4C5D86B5B659C953(iParam2);
	}
	return unk_0xAB0007E3E71F28E1();
}

void func_212(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_213(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
		{
			if (!unk_0x93E49C491856D7AD(uParam0->f_3, uParam0->f_4, 1) && !unk_0xDA637881D427DB40(uParam0->f_3))
			{
				func_337(uParam0, "Passenger left car.", 9);
			}
			else if (func_223(uParam0))
			{
				if (func_211("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x49C880E67EA66DDF("TAXI_OBJ_PICKUP");
				}
				if (unk_0xDF916BCF4D39E8C2())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
				{
				}
				func_214(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_214(var uParam0, bool bParam1)
{
	func_222(uParam0, uParam0->f_3);
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0x93E49C491856D7AD(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_171(uParam0, 14))
			{
				if (func_193())
				{
					func_221(1);
				}
				func_172(uParam0, 11, 1);
				func_216(uParam0, 1);
				func_297(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_205(uParam0))
				{
					if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
					{
					}
					if (unk_0x0FDFEC0DD29106EE(uParam0->f_2, 0))
					{
						if (func_107(uParam0, 15) > 5f)
						{
							func_297(uParam0, 15, 0f, 1);
						}
					}
					if (func_107(uParam0, 14) > 20f)
					{
						func_337(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_107(uParam0, 14) > 20f)
				{
					if (func_215(uParam0->f_4, 1) > 40f)
					{
						func_337(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_337(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_215(int iParam0, int iParam1)
{
	return func_48(unk_0x44A9253132E1DDE0(unk_0xBC628C78D8ECD5F1()), iParam0, iParam1);
}

void func_216(var uParam0, bool bParam1)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
			{
				unk_0x7535364E752B61AE(uParam0->f_8, 0);
				unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 0);
				func_220(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCDB4C4200A9B478A(uParam0->f_9))
			{
				unk_0x7535364E752B61AE(uParam0->f_9, 0);
				unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 0);
				unk_0x1AEFC2FB20822515();
				if (func_205(uParam0))
				{
					func_236(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_220(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_217(uParam0, 0, 0);
		}
		else if (unk_0xCDB4C4200A9B478A(uParam0->f_10))
		{
			unk_0x2239ED27B231AE2E(&(uParam0->f_10));
			if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
			{
				unk_0x7535364E752B61AE(uParam0->f_8, 255);
				unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 1);
			}
			else if (unk_0xCDB4C4200A9B478A(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7535364E752B61AE(uParam0->f_9, 0);
					unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7535364E752B61AE(uParam0->f_9, 255);
					unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 1);
				}
			}
			unk_0x1AEFC2FB20822515();
		}
	}
}

void func_217(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_418(uParam0);
	}
	if (!unk_0xCDB4C4200A9B478A(uParam0->f_10))
	{
		uParam0->f_10 = func_197(uParam0->f_4, 1, 0);
		unk_0x4BFEA7590F203BDF(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xEEF2AFCBBDD180D3(uParam0->f_10, 1);
		func_218(uParam0);
		if (bParam2)
		{
			unk_0x1AEFC2FB20822515();
			func_236(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_218(var uParam0)
{
	func_297(uParam0, 14, 0, 0);
	func_219();
}

void func_219()
{
	int iVar0;
	
	iVar0 = unk_0xF222904387CE4946();
	if (unk_0x1B6292EA51632C25(iVar0, 0))
	{
		unk_0x65C518355A67952C(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_220(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x1AEFC2FB20822515();
		func_236(uParam0, iParam3, 1, 0, 0);
		func_64(uParam1, iParam2);
	}
}

void func_221(int iParam0)
{
	Global_16723 = iParam0;
}

void func_222(var uParam0, int iParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam1))
	{
		if (!unk_0xCFC04A38F256EE06(iParam1))
		{
			if (unk_0xE5A4C0A15A60DF39(unk_0xE0BDAFA1A39552D6()))
			{
				if ((unk_0x0AE885F6EA46EF04(iParam1, joaat("weapon_stungun"), 0) || unk_0x0AE885F6EA46EF04(iParam1, 0, 2)) || unk_0x0AE885F6EA46EF04(iParam1, 0, 1))
				{
					func_337(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x47B96DD05EA110BE(unk_0xE0BDAFA1A39552D6());
			}
		}
	}
}

int func_223(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x4321FC7479614822(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_171(uParam0, 14))
			{
				func_224(uParam0);
			}
			func_216(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_224(var uParam0)
{
	func_190(uParam0, 14, 0);
	func_190(uParam0, 15, 0);
	func_226();
	if (func_225())
	{
		func_221(0);
	}
}

int func_225()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	var uVar0;
	
	uVar0 = unk_0xF222904387CE4946();
	if (unk_0x1B6292EA51632C25(uVar0, 0))
	{
		unk_0x65C518355A67952C(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_227(var uParam0, var uParam1)
{
	func_122(uParam0, uParam1->f_2, 1, 1);
	if (unk_0x1B6292EA51632C25(uParam1->f_3, 0))
	{
		if (unk_0x1D58D319587D567F(uParam1->f_3, unk_0x06736567F820A39E(), 1))
		{
			if (!func_193())
			{
				func_337(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_141();
			}
		}
	}
	else if (!func_193())
	{
		func_337(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_141();
	}
}

int func_228(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0x75409DE1FC985A9D(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1);
	unk_0x2CC3164B94BF6E73(uParam0->f_1, 1);
	unk_0x0B87AFC0B2EECA19(uParam0->f_1);
	uLocal_417[0] = unk_0x75409DE1FC985A9D(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1);
	uLocal_417[1] = unk_0x75409DE1FC985A9D(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1);
	uLocal_417[2] = unk_0x75409DE1FC985A9D(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1);
	unk_0x818E8D7BA45E01E7(uLocal_417[0], 2);
	unk_0x818E8D7BA45E01E7(uLocal_417[1], 2);
	unk_0x818E8D7BA45E01E7(uLocal_417[2], 2);
	unk_0x2D6C9BA99459C01C(uLocal_417[0], "BRAVEST");
	unk_0x2D6C9BA99459C01C(uLocal_417[1], "BOLDEST");
	unk_0x2D6C9BA99459C01C(uLocal_417[2], "BADDEST");
	unk_0xEC337F42DFBAD859(uParam0->f_3, 800);
	unk_0x2D6C9BA99459C01C(uParam0->f_3, "PUSSYWAG");
	unk_0x057DF4EBCC5E35DD(uParam0->f_3, 1);
	unk_0xA6340A109DB254F9(uParam0->f_3, 1);
	uParam0->f_15 = unk_0xA1B16F2399008FCA(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x1BBC7C4B775BFAAD(uParam0->f_3, 1);
	func_233(Local_423.f_14, 1, 1114636288);
	func_233(Local_958, 1, 15f);
	func_233(Local_961, 1, 15f);
	unk_0x818E8D7BA45E01E7(uParam0->f_3, 2);
	return 1;
}

int func_229()
{
	if (!unk_0x5C9FE32E2FF37989(Local_853.f_0))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5C9FE32E2FF37989(Local_853.f_1))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5C9FE32E2FF37989(iLocal_888))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5C9FE32E2FF37989(iLocal_889))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xD71BD2B3964F6EDA(120, "txm_fc_h1_"))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xD71BD2B3964F6EDA(0, "taxi_oj_fc3"))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x2AC46029737589CC(&cLocal_976))
	{
		func_133("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x7B43775D6E0D7325("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_230(var uParam0, var uParam1)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0x93E49C491856D7AD(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_171(uParam0, 14))
			{
				if (unk_0xCDB4C4200A9B478A(*uParam1) && unk_0x736983525DD90B1D(*uParam1) > 0)
				{
					unk_0x7535364E752B61AE(*uParam1, 0);
				}
				func_217(uParam0, 0, 0);
				func_236(uParam0, 2, 1, 0, 0);
			}
			else if (func_107(uParam0, 14) > 20f)
			{
				func_337(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_171(uParam0, 14))
			{
				func_297(uParam0, 2, 0, 0);
				func_224(uParam0);
			}
			if (unk_0xCDB4C4200A9B478A(uParam0->f_10))
			{
				unk_0x2239ED27B231AE2E(&(uParam0->f_10));
			}
			if ((unk_0xCDB4C4200A9B478A(*uParam1) && unk_0x736983525DD90B1D(*uParam1) < 255) && unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) < 1)
			{
				unk_0x7535364E752B61AE(*uParam1, 255);
				unk_0xEEF2AFCBBDD180D3(*uParam1, 1);
			}
		}
	}
}

void func_231(var uParam0)
{
	func_232(uParam0, 1000);
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		unk_0x66F20C27DFBDFC38(uParam0->f_3);
		unk_0x608A9ECA218C4D24(uParam0->f_3, unk_0x06736567F820A39E(), 0);
	}
	func_141();
	func_224(uParam0);
}

void func_232(var uParam0, int iParam1)
{
	if (unk_0x97A9CC2DDCDAA0A8(*uParam0))
	{
		unk_0xC2F547D33F9342CC(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xA7E1DB47F3F4BCD1(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
	}
}

void func_233(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xD0AB55C45DC575B3(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x68BC92FE5E41018D(Var0, Var3, 1);
		unk_0xFD97B3F2D9A2559A();
	}
}

void func_234()
{
	func_64(&(Local_423.f_55), 2);
	func_64(&(Local_423.f_55), 4);
	func_64(&(Local_423.f_55), 16);
	func_64(&(Local_423.f_55), 64);
	func_64(&(Local_423.f_55), 256);
	func_64(&(Local_423.f_55), 512);
	func_64(&(Local_423.f_55), 1024);
	func_64(&(Local_423.f_55), 2048);
	func_64(&(Local_423.f_55), 1073741824);
	func_64(&(Local_423.f_55), 8388608);
	func_64(&(Local_423.f_55), 33554432);
	func_64(&(Local_423.f_55), 16777216);
	func_64(&(Local_423.f_55), 4096);
	func_64(&(Local_423.f_100), 8);
	func_64(&(Local_423.f_100), 2048);
	func_64(&(Local_423.f_100), 256);
	func_64(&uLocal_1125, 2);
}

void func_235(var uParam0)
{
	unk_0x47B96DD05EA110BE(unk_0xE0BDAFA1A39552D6());
	unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 1, 0);
	func_232(uParam0, 1000);
}

void func_236(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_297(uParam0, 16, 4f, 0);
		if (func_237(uParam0))
		{
			func_45();
		}
	}
	func_261(uParam0, iParam2, bParam3);
}

int func_237(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_193())
	{
		Var6 = { func_239() };
		if (!unk_0x226FA58470A21AEF(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x2F6869889D97DFED(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_238(&Var0);
			if (unk_0x2F6869889D97DFED(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_238(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
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

int func_240(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
		{
			if ((unk_0xDA637881D427DB40(uParam0->f_3) && (unk_0x1ADBAAC322D61F73() - iLocal_89) > 500) || unk_0x93E49C491856D7AD(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_241()
{
	unk_0xBECC89ACB4E5D4ED(Local_853.f_0);
	unk_0xBECC89ACB4E5D4ED(Local_853.f_1);
	unk_0xBECC89ACB4E5D4ED(iLocal_888);
	unk_0xBECC89ACB4E5D4ED(iLocal_889);
	unk_0x59D46EE810784603(120, "txm_fc_h1_");
	unk_0x59D46EE810784603(0, "taxi_oj_fc3");
	unk_0x53CCB63EA1A462EE(&cLocal_976);
	unk_0x198E497B820DA913("veh@truck@ds@base");
}

int func_242(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0x93E49C491856D7AD(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
			{
			}
			func_214(uParam0, 1);
			if (func_32())
			{
				unk_0x4E7DF84FE130E1D6(unk_0xBC628C78D8ECD5F1(), 1, 0);
			}
			if (unk_0xFB900D9EE2ACC400(uParam0->f_3, 2106541073) == 1 || unk_0xFB900D9EE2ACC400(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x66F20C27DFBDFC38(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x608A9ECA218C4D24(uParam0->f_3, unk_0x06736567F820A39E(), 0);
			}
		}
		else if (unk_0xAA2F2E1D7A88C64E(unk_0xBC628C78D8ECD5F1(), 0))
		{
			func_259(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xDD1A4EE55D86FE71(&uVar3);
				unk_0xD6763C9F81772BAE(&uVar3);
				unk_0xDCA5DDD55544BA21(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x608A9ECA218C4D24(0, uParam0->f_4, 0);
				unk_0x6F275D9063DAF754(uVar3);
				unk_0x457C4844450FF70E(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_171(uParam0, 14))
			{
				func_224(uParam0);
				func_216(uParam0, 0);
			}
			if (func_171(uParam0, 9))
			{
				func_190(uParam0, 9, 0);
				unk_0x1AEFC2FB20822515();
				if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
				{
					unk_0x7535364E752B61AE(uParam0->f_8, 255);
					unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 1);
				}
			}
			if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x137B8B7A1CAD742A(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_258(uParam0, uParam0->f_3) > 300f)
				{
					func_337(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 1 || ((func_48(unk_0x06736567F820A39E(), uParam0->f_3, 1) < 20f && func_203(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_203(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_255(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_254(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_253(uParam0->f_4, uParam0->f_3);
								iVar0 = func_252(uParam0, &iVar1);
								if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
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
										unk_0x748A759556B70724(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x748A759556B70724(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xE53003D20DBC318E(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
											{
												unk_0x748A759556B70724(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x1F6717C33A02B7AC(uParam0->f_3);
							unk_0xEA61E9C6B1D4A33E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xE6634751450D4FD6(unk_0xF4745590D18D14B8(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_189(uParam0))
							{
								unk_0x1F6717C33A02B7AC(uParam0->f_3);
							}
							else if (((unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 1 && unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 0) && unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 7) && func_258(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xDD1A4EE55D86FE71(&(uParam0->f_243));
								unk_0xD6763C9F81772BAE(&(uParam0->f_243));
								unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x28B5966B12DC5B0F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x28B5966B12DC5B0F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x6F275D9063DAF754(uParam0->f_243);
								unk_0x457C4844450FF70E(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x46E9388908C80483(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x79035B17711710FE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_48(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_251(uParam0, 1))
								{
									unk_0x66F20C27DFBDFC38(uParam0->f_3);
									func_337(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_250(uParam0->f_4))
								{
									unk_0x66F20C27DFBDFC38(uParam0->f_3);
									func_337(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_248(uParam0);
						if (func_258(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0x93E49C491856D7AD(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_244(uParam0))
								{
									func_243(uParam0);
									iLocal_89 = unk_0x1ADBAAC322D61F73();
									unk_0x6553935614875699(uParam0->f_3, 26, 1);
									func_190(uParam0, 5, 0);
									unk_0xF9F10BC5A11E293A();
									unk_0x2D757F64C9E605F0(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x96CACD00C12AFCD5(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xE6634751450D4FD6(unk_0xF4745590D18D14B8(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_243(var uParam0)
{
	if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
	{
		unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 0);
		unk_0x2239ED27B231AE2E(&(uParam0->f_8));
	}
}

int func_244(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_133("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
	{
		func_144();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_140(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_117(uParam0, 0, 1084227584) && func_139(1, 1, 1))
			{
				if (func_251(uParam0, 1))
				{
					iLocal_88 = unk_0x1ADBAAC322D61F73();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_337(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_253(uParam0->f_4, uParam0->f_3);
				iVar9 = func_252(uParam0, &iVar10);
				if (!unk_0xBDA1F5E8A36BFA07(iVar9, 0))
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
						unk_0x748A759556B70724(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x748A759556B70724(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xE53003D20DBC318E(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xBDA1F5E8A36BFA07(iVar9, 0))
						{
							unk_0x748A759556B70724(iVar9, 0, 4096);
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
			iVar12 = func_173(&(uParam0->f_409), unk_0xF42E2289B33D5C38(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xF42E2289B33D5C38(uParam0->f_4, Var0), 1);
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
				func_132(0, 0, 1);
				unk_0x463C4DB5BC64DCA2(unk_0xF4745590D18D14B8(uParam0->f_4, 1), 3f, 0);
				unk_0xDC13F38B596BD3B0(unk_0xF4745590D18D14B8(uParam0->f_4, 1), 25f, 0);
				unk_0x310F6B4E168A8F5D(1);
				unk_0x1AEFC2FB20822515();
				func_112();
				func_261(uParam0, 0, 0);
				Var13 = { unk_0xF42E2289B33D5C38(uParam0->f_4, Var6) };
				unk_0xA9AD2484206C8140(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xEF32567B3A5047F5(uParam0->f_3, func_246(uParam0));
				func_135(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x6F5C374D2816B01C(*uParam0, unk_0xF42E2289B33D5C38(uParam0->f_4, Var0));
				unk_0x52E39F7EA886EFC0(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x78EE57C40B1C74AA(*uParam0, 1);
				unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
				unk_0xA9FA4149DF18912C(uParam0->f_3, 0, 0);
				unk_0xEA61E9C6B1D4A33E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_133("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
			{
				if (!unk_0x0FDFEC0DD29106EE(uParam0->f_3, 0))
				{
					unk_0xE47DEDA2D353E92B(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x4143B4E35865B291(uParam0->f_4, func_245(uParam0->f_7), 1);
				}
				unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
				unk_0xC2F547D33F9342CC(*uParam0, 0);
				unk_0xC2F547D33F9342CC(uParam0->f_1, 0);
				unk_0x086A554C80BC6C5D(0);
				unk_0xA71476EEBE45FF73(0, 1065353216);
				unk_0x8EA2EEF67922F899(800);
				unk_0x310F6B4E168A8F5D(1);
				unk_0x1AEFC2FB20822515();
				func_112();
				func_261(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xDF916BCF4D39E8C2() && !unk_0xEC708A793EB17979())
			{
				func_125(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
			unk_0xC2F547D33F9342CC(*uParam0, 0);
			unk_0xC2F547D33F9342CC(uParam0->f_1, 0);
			unk_0x086A554C80BC6C5D(0);
			unk_0xA71476EEBE45FF73(0, 1065353216);
			func_125(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0) && !unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
			{
				if (unk_0xDA637881D427DB40(uParam0->f_3) || unk_0x0FDFEC0DD29106EE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xFB900D9EE2ACC400(unk_0x06736567F820A39E(), -1794415470) != 1 && unk_0xFB900D9EE2ACC400(unk_0x06736567F820A39E(), -1794415470) != 0)
				{
					unk_0xEA61E9C6B1D4A33E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_245(int iParam0)
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

float func_246(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xF42E2289B33D5C38(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xF42E2289B33D5C38(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_247(unk_0xF4745590D18D14B8(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_247(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x10BFB9592B558291((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_248(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
		{
			if (func_215(uParam0->f_3, 1) > 30f || func_249(uParam0))
			{
				if (unk_0xFB900D9EE2ACC400(uParam0->f_3, -1794415470) == 1 || unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) == 1)
				{
					unk_0xDD1A4EE55D86FE71(&uVar0);
					unk_0xD6763C9F81772BAE(&uVar0);
					unk_0x608A9ECA218C4D24(0, uParam0->f_4, 0);
					unk_0x28B5966B12DC5B0F(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xDCA5DDD55544BA21(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x6F275D9063DAF754(uVar0);
					unk_0x457C4844450FF70E(uParam0->f_3, uVar0);
					func_337(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_249(var uParam0)
{
	if ((unk_0x137B8B7A1CAD742A(uParam0->f_4) > 3f && func_107(uParam0, 5) > 15f) || unk_0x005CADD5DDB686BE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x80067D81CF30A39F(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x80067D81CF30A39F(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x80067D81CF30A39F(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x80067D81CF30A39F(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xEA39662D9CF7CF75(unk_0x79469DA5833EACA8(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x86B7B352B6FC9D8B(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x86B7B352B6FC9D8B(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x86B7B352B6FC9D8B(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x86B7B352B6FC9D8B(iParam0, 3))
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

int func_251(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x4321FC7479614822(uParam0->f_4, 1);
		iVar0[1] = unk_0x4321FC7479614822(uParam0->f_4, 2);
		iVar0[2] = unk_0x4321FC7479614822(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xC1EDB61CE0A4B94E(iVar0[iVar4]))
			{
				if (unk_0xBDA1F5E8A36BFA07(iVar0[iVar4], 0))
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
		if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_252(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4321FC7479614822(uParam0->f_4, 1);
		if (unk_0xC1EDB61CE0A4B94E(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x4321FC7479614822(uParam0->f_4, 2);
			if (unk_0xC1EDB61CE0A4B94E(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x4321FC7479614822(uParam0->f_4, 0);
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xD6B335B6F8116876(iParam0);
	Var0 = { unk_0xE58515B4F840AB2C(iParam0, unk_0xF4745590D18D14B8(iParam1, 1)) };
	if (unk_0x79469DA5833EACA8(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x79469DA5833EACA8(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xE53003D20DBC318E(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xE53003D20DBC318E(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xE53003D20DBC318E(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xE53003D20DBC318E(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_254(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
	{
		if (!unk_0x8831C606DC492098(uParam0->f_3) && func_215(uParam0->f_3, 1) < fParam2)
		{
			if (!func_171(uParam0, 5))
			{
				func_297(uParam0, 5, 0, 0);
			}
		}
		else if (func_171(uParam0, 5))
		{
			func_190(uParam0, 5, 0);
		}
		if (((func_107(uParam0, 5) > IntToFloat(iParam1) && unk_0x137B8B7A1CAD742A(uParam0->f_4) < fParam4) && !unk_0x8831C606DC492098(uParam0->f_3)) || func_215(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_255(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x2B2E3E2C18EAC4F5(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x2B2E3E2C18EAC4F5(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x309DFDF8C715AF38(uParam0->f_4, iVar18) };
		Var6 = { unk_0xE58515B4F840AB2C(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xF42E2289B33D5C38(uParam0->f_4, Var6) };
	Var3 = { unk_0xF42E2289B33D5C38(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x47AEE72AB11B55A9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xBA63517ADBC1E5E3(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_48(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xF87C669B882D93C0((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x290E65F6C850B833(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x31BBF34543BA157F(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 1 && unk_0xFB900D9EE2ACC400(uParam0->f_3, 242628503) != 0)
			{
				unk_0xDD1A4EE55D86FE71(&(uParam0->f_243));
				unk_0xD6763C9F81772BAE(&(uParam0->f_243));
				unk_0x28B5966B12DC5B0F(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
				unk_0x344E2ACA7B8D1157(uParam0->f_243, 1);
				unk_0x6F275D9063DAF754(uParam0->f_243);
				unk_0x457C4844450FF70E(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x1AEFC2FB20822515();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_236(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_256(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x1F6717C33A02B7AC(uParam0->f_3);
			unk_0x3195125C126B79C6(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xDD1A4EE55D86FE71(&(uParam0->f_243));
			unk_0xD6763C9F81772BAE(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x28B5966B12DC5B0F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x28B5966B12DC5B0F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
			unk_0x6F275D9063DAF754(uParam0->f_243);
			unk_0x457C4844450FF70E(uParam0->f_3, uParam0->f_243);
			unk_0xDD1A4EE55D86FE71(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x46E9388908C80483(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x79035B17711710FE(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_256(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x00BD2542D40FB0C9(uParam0, sParam1, uParam2, func_257(iParam3), 0);
}

int func_257(int iParam0)
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

float func_258(var uParam0, int iParam1)
{
	if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		if (func_189(uParam0))
		{
			return func_48(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_259(var uParam0)
{
	func_222(uParam0, uParam0->f_3);
	if (func_189(uParam0))
	{
		if (func_171(uParam0, 14))
		{
			func_224(uParam0);
			if (unk_0xCDB4C4200A9B478A(uParam0->f_10))
			{
				unk_0x2239ED27B231AE2E(&(uParam0->f_10));
			}
		}
	}
	if (!func_171(uParam0, 9))
	{
		if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
		{
			unk_0x7535364E752B61AE(uParam0->f_8, 0);
			unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 0);
		}
		func_297(uParam0, 9, 0, 0);
		func_260("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_260(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x366FF5AC028F8A66(sParam0);
	unk_0x1C785DE53446A241(iParam1, 1);
}

void func_261(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_297(uParam0, 16, 4f, 0);
		unk_0x1AEFC2FB20822515();
	}
}

int func_262(var uParam0, int iParam1)
{
	if (!unk_0x7710127C9E7C52D8(2))
	{
		return 0;
	}
	func_266(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x24C87321CFD64D48(unk_0x06736567F820A39E()) && !func_21(uParam0->f_44, 256))
			{
				func_64(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
			{
				func_236(uParam0, 135, 1, 0, 1);
				func_64(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_265(uParam0, iParam1))
	{
		if (func_215(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0x608A9ECA218C4D24(uParam0->f_3, unk_0x06736567F820A39E(), 0);
				func_236(uParam0, 133, 1, 0, 1);
				func_64(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xCFC04A38F256EE06(uParam0->f_3) || unk_0x0DA2000F5C8A8ECC(uParam0->f_3)) || func_215(uParam0->f_3, 1) > 400f)
		{
			func_337(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x34E1EF1E8BCD1BFC(uParam0->f_2, 0);
		unk_0x590C7568C3E71544(uParam0->f_4, 1);
		if (unk_0x4321FC7479614822(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0xA05011CDAF5DD6A1(uParam0->f_4);
			func_263(uParam0);
			func_52(2, 0);
			bLocal_94 = true;
			func_108(&uLocal_90);
			return 1;
		}
		else
		{
			func_337(uParam0, "No Taxi", 21);
			func_156("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_263(var uParam0)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
	{
		if (func_264())
		{
		}
	}
}

int func_264()
{
	if (unk_0x7DA173D4FD42F36B(unk_0xA6055C735E3DD877(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			if (unk_0x1B6292EA51632C25(iVar0, 0))
			{
				iVar1 = unk_0x79469DA5833EACA8(iVar0);
				bVar2 = func_250(iVar0);
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
				if (unk_0xEA39662D9CF7CF75(iVar1))
				{
					if (unk_0x4321FC7479614822(iVar0, -1) == unk_0x06736567F820A39E())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xD6B335B6F8116876(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0x7710127C9E7C52D8(2))
						{
							func_156("TX_VIP_DMGD", -1);
							if (func_148("TX_VIP_DMGD"))
							{
								func_64(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						if (unk_0x7710127C9E7C52D8(2))
						{
							func_156("TX_VIP_CAR", -1);
							if (func_148("TX_VIP_CAR"))
							{
								func_64(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						if (unk_0x7710127C9E7C52D8(2))
						{
							func_156("TX_VIP_SMALL", -1);
							if (func_148("TX_VIP_SMALL"))
							{
								func_64(&(uParam0->f_44), 16);
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

void func_266(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		uVar0 = iParam0;
		unk_0xB1AB2AC3722F7760(8, &uVar0, 1, 1);
	}
	else if (unk_0x7E8E236FA7C5423B() || unk_0x8B003E1580113906())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xB21713E7233B6EEA(8, &cVar1);
	}
}

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_268(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x99BCB15F954AF579(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xE27C8E42A97895CF(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x99BCB15F954AF579(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_269(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_270()
{
	Local_343.f_0 = 0;
	func_287(44443, 44418, 1);
	func_287(44179, 44155, 1);
	func_287(44093, 44068, 1);
	func_287(43996, 43972, 1);
	func_287(43862, 43841, 1);
	func_287(43788, 43763, 1);
	func_287(43621, 43597, 1);
}

int func_271(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_272(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_4))
	{
		if (func_274(uParam0->f_4))
		{
			func_273(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_274(int iParam0)
{
	if (!unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA1B16F2399008FCA(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x5B69019B28C95DD8(iParam0, 0, 40000) || unk_0x5B69019B28C95DD8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_276(var uParam0)
{
	if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
	{
		if (func_277(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_277(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_278(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, 11);
	return 1;
}

int func_279(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_4))
	{
		if (unk_0xC774E76B3D78AD45(uParam0->f_4) && !unk_0x8C491426FB07186E(uParam0->f_4))
		{
			if (!func_171(uParam0, 25))
			{
				func_297(uParam0, 25, 0, 0);
			}
			else if (func_107(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_171(uParam0, 25))
		{
			func_190(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_280(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_281(var uParam0)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
	{
		if (unk_0x50FC0E6FE77AD137(uParam0->f_4))
		{
			if (unk_0x5B69019B28C95DD8(uParam0->f_4, 0, 40000) || unk_0x5B69019B28C95DD8(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_283(var uParam0)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_4, 0))
	{
		if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
		{
			if (unk_0x47E7BE316A5F1598(uParam0->f_4))
			{
				if (func_277(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_284(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_285(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_4))
	{
		if (func_286(uParam0->f_4))
		{
			func_273(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_286(int iParam0)
{
	if (!unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA1B16F2399008FCA(iParam0) == 0f)
	{
		if (!unk_0x1B6292EA51632C25(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x5B69019B28C95DD8(iParam0, 0, 40000) || unk_0x5B69019B28C95DD8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_287(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_65(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_65(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_288(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_337(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_289(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_3))
	{
		if ((unk_0xCFC04A38F256EE06(uParam0->f_3) || unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0)) || unk_0x64B7FCF50C031E4A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_290()
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

int func_291()
{
	if (!unk_0x5C9FE32E2FF37989(iLocal_886))
	{
		return 0;
	}
	if (!unk_0x7B43775D6E0D7325("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_292(&iLocal_896, 0))
	{
		func_133("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_292(int iParam0, bool bParam1)
{
	if (!unk_0x5C9FE32E2FF37989(func_18()))
	{
		func_133("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x7B43775D6E0D7325("gestures@m@standing@casual"))
		{
			func_133("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x7B43775D6E0D7325("oddjobs@taxi@"))
	{
		func_133("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x7B43775D6E0D7325("oddjobs@towingcome_here"))
	{
		func_133("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x7B43775D6E0D7325("misscommon@response"))
	{
		func_133("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x7710127C9E7C52D8(2))
	{
		func_133("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_293(var uParam0, int iParam1)
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

int func_294(var uParam0)
{
	if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
	{
		uParam0->f_8 = func_196(uParam0->f_3, 0, 0);
		unk_0xC8BE0F4DC003D128(1, 0);
		unk_0xEEF2AFCBBDD180D3(uParam0->f_8, 1);
		unk_0x4BFEA7590F203BDF(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x3195125C126B79C6(uParam0->f_3, unk_0x06736567F820A39E(), -1, 2048, 4);
	}
	return 1;
}

int func_295(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xC1EDB61CE0A4B94E(uParam0->f_3))
	{
		func_296(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0x463C4DB5BC64DCA2(uParam0->f_14, 2f, 0);
		func_233(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x41FA21F7DD2B1314(uParam0->f_11);
		}
		else if (unk_0xC1EDB61CE0A4B94E(Global_99898.f_225[0]))
		{
			uParam0->f_3 = Global_99898.f_225[0];
			unk_0xB7E6C6AE18F1EDA6(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xB500796AAD639F82(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x0AB51FD6583D814C(uParam0->f_3, sParam7);
		unk_0xE736C729727B547E(uParam0->f_3, 112, 1);
		if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
		{
			unk_0x86A805FC25766987(uParam0->f_3, 250);
			unk_0x6553935614875699(uParam0->f_3, 32, 0);
			unk_0x6553935614875699(uParam0->f_3, 104, 1);
			unk_0x6553935614875699(uParam0->f_3, 177, 1);
			unk_0x6553935614875699(uParam0->f_3, 116, 0);
			unk_0x3ECE0E645B1530B3("TAXI_Passenger", &(uParam0->f_413));
			unk_0x054CBFE90FAA6840(1, uParam0->f_413, joaat("player"));
			unk_0x054CBFE90FAA6840(2, uParam0->f_413, joaat("COP"));
			unk_0xDEA5F99894469373(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_296(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x1EADFC1C30AD6322(Param1, 20f, 5f, 0);
}

void func_297(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_102(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_101(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_102(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_101(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_298()
{
	unk_0xBECC89ACB4E5D4ED(iLocal_886);
	func_300(0);
	uLocal_1132 = func_299();
	unk_0x198E497B820DA913("gestures@m@standing@casual");
}

var func_299()
{
	return unk_0xDDEDAA5105426019("MIDSIZED_MESSAGE");
}

void func_300(bool bParam0)
{
	unk_0xBECC89ACB4E5D4ED(func_18());
	if (bParam0)
	{
		unk_0x198E497B820DA913("gestures@m@standing@casual");
	}
	unk_0x198E497B820DA913("oddjobs@taxi@");
	unk_0x198E497B820DA913("oddjobs@towingcome_here");
	unk_0x198E497B820DA913("misscommon@response");
	unk_0x18DF389F542183A3("TAXI", 2);
	if (!func_21(Global_101186.f_17863, 128))
	{
		func_64(&(Global_101186.f_17863), 128);
	}
}

void func_301(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
		{
			if (bParam2)
			{
				if (func_107(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_236(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_236(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_297(uParam0, 10, 0f, 1);
				}
			}
			else if (func_107(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_236(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_236(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_297(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_107(uParam0, 10) > 30f)
		{
			if (!func_193())
			{
				if (uParam0->f_112)
				{
					func_236(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_236(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_297(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_13(&(Local_190[5 /*10*/].f_6)))
		{
			func_108(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_324(uParam0))
			{
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_323(uParam0, 1);
				func_321(5, uParam0);
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_13(&(Local_190[0 /*10*/].f_6)))
		{
			func_108(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_319(uParam0))
			{
				func_323(uParam0, 1);
				func_321(0, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_13(&(Local_190[1 /*10*/].f_6)))
		{
			func_108(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_318(uParam0))
			{
				func_323(uParam0, 1);
				func_321(1, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xC1EDB61CE0A4B94E(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x6267527E254067CA(uParam0->f_4);
				func_108(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_99(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_317(uParam0))
			{
				func_323(uParam0, 1);
				func_321(8, uParam0);
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_13(&(Local_190[6 /*10*/].f_6)))
		{
			func_108(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				func_323(uParam0, 1);
				func_321(6, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_13(&(Local_190[4 /*10*/].f_6)))
		{
			func_108(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_315(uParam0))
			{
				func_323(uParam0, 1);
				func_321(4, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_13(&(Local_190[7 /*10*/].f_6)))
		{
			func_108(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_314(uParam0))
			{
				func_321(7, uParam0);
				func_323(uParam0, 1);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_13(&(Local_190[9 /*10*/].f_6)))
		{
			func_108(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x47B96DD05EA110BE(unk_0xE0BDAFA1A39552D6());
		}
		else if (func_99(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_313(uParam0))
			{
				func_323(uParam0, 1);
				func_321(9, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_13(&(Local_190[13 /*10*/].f_6)))
		{
			func_108(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_307(uParam0))
			{
				func_323(uParam0, 1);
				func_321(13, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_6)))
		{
			func_108(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_306(uParam0))
			{
				func_323(uParam0, 1);
				func_321(14, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_13(&(Local_190[11 /*10*/].f_6)))
		{
			func_108(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_305(uParam0))
			{
				func_323(uParam0, 1);
				func_321(11, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_13(&(Local_190[12 /*10*/].f_6)))
		{
			func_108(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_99(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_304(uParam0))
			{
				func_323(uParam0, 1);
				func_321(12, uParam0);
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_190[2 /*10*/].f_6)))
		{
			func_303(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_99(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_302(uParam0))
			{
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_323(uParam0, 1);
				func_321(2, uParam0);
				func_320(uParam0);
			}
		}
	}
}

int func_302(var uParam0)
{
	float fVar0;
	
	if (!unk_0xCFC04A38F256EE06(uParam0->f_2))
	{
		if ((!unk_0xFA5F9090FC25138E(uParam0->f_2) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x137B8B7A1CAD742A(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_108(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_99(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x137B8B7A1CAD742A(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_98(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_98(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_303(var uParam0, float fParam1)
{
	if (!func_13(uParam0))
	{
		func_102(uParam0, fParam1);
	}
}

int func_304(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		Var0 = { unk_0x82E56CE9CC97BD87(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[12 /*10*/].f_3)))
			{
				func_108(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x1B6292EA51632C25(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x82E56CE9CC97BD87(uParam0->f_4, 1) };
		if (unk_0xF87C669B882D93C0(Var0.f_0) > 2.5f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[11 /*10*/].f_3)))
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_99(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0xF87C669B882D93C0(uLocal_342) - unk_0xF87C669B882D93C0(Var0.f_0)) < 0f)
			{
				func_98(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_99(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_98(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (((((unk_0x1B6292EA51632C25(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xAA1502685413BDDD(unk_0xF4745590D18D14B8(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xC1EDB61CE0A4B94E(uParam0->f_5))
			{
				if ((unk_0x137B8B7A1CAD742A(uParam0->f_4) > 15f && func_48(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xBDA1F5E8A36BFA07(uParam0->f_5, 0) && !unk_0x5B4FEA5F286F0C8F(uParam0->f_5, -1)))
				{
					func_108(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_99(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_48(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xCCC1EF74C8029770(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_99(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xCCC1EF74C8029770(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_307(var uParam0)
{
	if (((unk_0x1B6292EA51632C25(uParam0->f_4, 0) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_308(uParam0->f_4) && unk_0x137B8B7A1CAD742A(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_190[13 /*10*/].f_3)))
			{
				func_108(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_308(int iParam0)
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
	
	unk_0xEBBD48CB0344518F(unk_0xF4745590D18D14B8(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xEBBD48CB0344518F(unk_0xF4745590D18D14B8(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x03AB5115C256FFAA(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_312((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_311(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_309(unk_0xF4745590D18D14B8(iParam0, 1), Var15, Var18, Var21);
}

int func_309(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_312(Param6 - Param3) };
	Var3 = { func_312(Param9 - Param3) };
	fVar6 = func_310(Param0, Var0);
	fVar7 = func_310(Param3, Var0);
	fVar8 = func_310(Param6, Var0);
	fVar9 = func_310(Param0, Var3);
	fVar10 = func_310(Param3, Var3);
	fVar11 = func_310(Param9, Var3);
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

float func_310(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_311(struct<3> Param0, int iParam3)
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

Vector3 func_312(struct<3> Param0)
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

int func_313(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x4321FC7479614822(uParam0->f_4, -1) == unk_0x06736567F820A39E())
		{
			if (unk_0xE5A4C0A15A60DF39(unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x4321FC7479614822(uParam0->f_4, -1) == unk_0x06736567F820A39E())
		{
			if (unk_0x005CADD5DDB686BE(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xB9AACD8513CB8DBC(uParam0->f_4) <= -145f || unk_0xB9AACD8513CB8DBC(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xB9AACD8513CB8DBC(uParam0->f_4) <= 35f && unk_0xB9AACD8513CB8DBC(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_315(var uParam0)
{
	int iVar0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDCC9BD19327352C5(unk_0xE0BDAFA1A39552D6());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[4 /*10*/].f_3)))
			{
				func_108(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_98(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	int iVar0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		iVar0 = unk_0xEACE35087381D6C3(unk_0xE0BDAFA1A39552D6());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[6 /*10*/].f_3)))
			{
				func_108(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x12A211FE44F856A3(uParam0->f_4))
		{
			iVar0 = unk_0x6267527E254067CA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xFE26A2643AFB7A3B(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_236(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_236(uParam0, 72, 1, 0, 1);
				}
				func_98(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		Var0 = { unk_0x82E56CE9CC97BD87(uParam0->f_4, 1) };
		if (unk_0xF87C669B882D93C0(Var0.f_0) > 3f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[1 /*10*/].f_3)))
			{
				func_108(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_98(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0x8C491426FB07186E(uParam0->f_4) && unk_0x1C3F1A4FF0A66BD0(uParam0->f_4))
		{
			if (!func_13(&(Local_190[0 /*10*/].f_3)))
			{
				func_108(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_98(&(Local_190[0 /*10*/].f_3));
				func_101(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_320(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_101(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_297(uParam0, 10, 0f, 1);
	unk_0x47B96DD05EA110BE(unk_0xE0BDAFA1A39552D6());
}

void func_321(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_322(uParam1, iParam0);
	func_98(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_322(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_324(var uParam0)
{
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (unk_0x137B8B7A1CAD742A(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_190[5 /*10*/].f_3)))
			{
				func_108(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_99(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325()
{
	struct<3> Var0;
	
	func_133("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x1D58D319587D567F(Local_423.f_3, unk_0x06736567F820A39E(), 1) || unk_0x1D58D319587D567F(iLocal_890, unk_0x06736567F820A39E(), 1)) || unk_0x1D58D319587D567F(Local_853.f_2, unk_0x06736567F820A39E(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
	{
		if (unk_0x1D58D319587D567F(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_215(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_193())
			{
				func_328(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0xF0FD829819E2AD88(Local_423.f_3, unk_0x06736567F820A39E(), -1, 0);
				iLocal_900 = unk_0x1ADBAAC322D61F73();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_141();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0) && !unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0)) && !unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
			{
				unk_0x3ECE0E645B1530B3("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0xD53C8BCD41123EE6(Local_423.f_3);
				unk_0x054CBFE90FAA6840(255, Local_853.f_30, iLocal_893);
				unk_0x054CBFE90FAA6840(255, Local_853.f_30, iLocal_892);
				unk_0xDEA5F99894469373(Local_853.f_2, Local_853.f_30);
				unk_0xDEA5F99894469373(iLocal_890, iLocal_893);
				unk_0xBA63517ADBC1E5E3(Local_853.f_2, 1);
				unk_0xD14E5ED9D5665519(Local_853.f_2, 17, 1);
				unk_0xEC337F42DFBAD859(Local_853.f_2, 130);
				unk_0xB8EAAC44A393EDB5(Local_853.f_2, 1);
				unk_0x38DB61894D88F955(Local_853.f_2, 1);
				unk_0x1F6717C33A02B7AC(Local_853.f_2);
				unk_0xBA63517ADBC1E5E3(iLocal_890, 1);
				unk_0xD14E5ED9D5665519(iLocal_890, 17, 1);
				unk_0xEC337F42DFBAD859(iLocal_890, 130);
				unk_0xB8EAAC44A393EDB5(iLocal_890, 1);
				unk_0x38DB61894D88F955(iLocal_890, 1);
				unk_0x1F6717C33A02B7AC(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0) && !unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0)) && !unk_0xBDA1F5E8A36BFA07(iLocal_890, 0)) && !unk_0xBDA1F5E8A36BFA07(Local_853.f_3, 0))
			{
				unk_0xDD1A4EE55D86FE71(&uLocal_414);
				unk_0xD6763C9F81772BAE(&uLocal_414);
				unk_0x608A9ECA218C4D24(0, iLocal_890, 0);
				unk_0x28B5966B12DC5B0F(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x28B5966B12DC5B0F(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x6F275D9063DAF754(uLocal_414);
				unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
				unk_0xDD1A4EE55D86FE71(&uLocal_414);
				unk_0xDD1A4EE55D86FE71(&uLocal_415);
				unk_0xD6763C9F81772BAE(&uLocal_415);
				unk_0x608A9ECA218C4D24(0, Local_853.f_2, 0);
				unk_0x28B5966B12DC5B0F(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x6F275D9063DAF754(uLocal_415);
				unk_0x457C4844450FF70E(iLocal_890, uLocal_415);
				unk_0xDD1A4EE55D86FE71(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0xBDA1F5E8A36BFA07(iLocal_890, 0) && !unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
				{
					unk_0xDEA5F99894469373(Local_423.f_3, iLocal_892);
					unk_0xBA63517ADBC1E5E3(Local_423.f_3, 1);
					unk_0xD14E5ED9D5665519(Local_423.f_3, 13, 1);
					unk_0x75084666BD6D4F73(Local_423.f_3, 100);
					unk_0x49BD4C1B5817C978(Local_423.f_3, 100);
					unk_0xEC337F42DFBAD859(Local_423.f_3, 105);
					unk_0x1F6717C33A02B7AC(Local_423.f_3);
					unk_0xDD1A4EE55D86FE71(&uLocal_416);
					unk_0xD6763C9F81772BAE(&uLocal_416);
					unk_0x5ADB1DCCE9B5E895(0, 5000);
					func_327(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0x74E71CEAB0E72F73(0, func_326(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0x8C4083252905932E(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x6F275D9063DAF754(uLocal_416);
					unk_0x457C4844450FF70E(Local_423.f_3, uLocal_416);
					unk_0xDD1A4EE55D86FE71(&uLocal_416);
					iLocal_902 = 1;
					unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 256);
					unk_0xF0683EF788D4342B(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0xCFC04A38F256EE06(Local_853.f_2) && !unk_0xCFC04A38F256EE06(iLocal_890))
				{
					if (func_215(Local_853.f_2, 1) < 2f || func_215(iLocal_890, 1) < 2f)
					{
						unk_0x1F6717C33A02B7AC(Local_853.f_2);
						unk_0x1F6717C33A02B7AC(iLocal_890);
						unk_0x3195125C126B79C6(Local_853.f_2, unk_0x06736567F820A39E(), -1, 2048, 4);
						unk_0xDD1A4EE55D86FE71(&uLocal_414);
						unk_0xD6763C9F81772BAE(&uLocal_414);
						unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
						unk_0x6F275D9063DAF754(uLocal_414);
						unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
						unk_0x3195125C126B79C6(iLocal_890, unk_0x06736567F820A39E(), -1, 2048, 4);
						unk_0xDD1A4EE55D86FE71(&uLocal_415);
						unk_0xD6763C9F81772BAE(&uLocal_415);
						unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
						unk_0x6F275D9063DAF754(uLocal_415);
						unk_0x457C4844450FF70E(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0xCFC04A38F256EE06(Local_853.f_2))
					{
					}
					else
					{
						unk_0x1F6717C33A02B7AC(Local_853.f_2);
						unk_0xFEDD46326A41DB46(Local_853.f_2, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					}
					if (unk_0xCFC04A38F256EE06(iLocal_890))
					{
					}
					else
					{
						unk_0x1F6717C33A02B7AC(iLocal_890);
						unk_0xFEDD46326A41DB46(iLocal_890, unk_0x06736567F820A39E(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_133("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
			{
				if (unk_0xFB900D9EE2ACC400(Local_423.f_3, 242628503) == 1)
				{
					if (unk_0x3671D4C049138ACF(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
			}
			if (((!unk_0xCFC04A38F256EE06(iLocal_890) && unk_0xA14561E9EE07759B(iLocal_890)) && !unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0)) && !bLocal_908)
			{
				unk_0x3195125C126B79C6(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0xDD1A4EE55D86FE71(&uLocal_414);
				unk_0xD6763C9F81772BAE(&uLocal_414);
				unk_0x5ADB1DCCE9B5E895(0, 500);
				unk_0x28B5966B12DC5B0F(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x28B5966B12DC5B0F(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x608A9ECA218C4D24(0, Local_423.f_3, 0);
				unk_0x6F275D9063DAF754(uLocal_414);
				unk_0x457C4844450FF70E(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0) && !unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
			{
				if (unk_0x3671D4C049138ACF(Local_423.f_3) > 2)
				{
					func_236(&Local_423, 58, 1, 0, 0);
					unk_0xDD1A4EE55D86FE71(&uLocal_416);
					unk_0xD6763C9F81772BAE(&uLocal_416);
					unk_0x9A12E803B1184012(0);
					unk_0xF0FD829819E2AD88(0, Local_853.f_2, 2000, 0);
					unk_0x6F275D9063DAF754(uLocal_416);
					unk_0x457C4844450FF70E(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_133("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0xBDA1F5E8A36BFA07(iLocal_890, 0))
			{
				if (!unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
					{
						unk_0xDD1A4EE55D86FE71(&uLocal_415);
						unk_0xD6763C9F81772BAE(&uLocal_415);
						unk_0x74E71CEAB0E72F73(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0xF0FD829819E2AD88(0, Local_853.f_2, -1, 1);
						unk_0x6F275D9063DAF754(uLocal_415);
						unk_0x457C4844450FF70E(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_133("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_193())
			{
				if (!unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0) && !unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0))
				{
					unk_0x8C4083252905932E(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_133("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0xBDA1F5E8A36BFA07(Local_853.f_2, 0) && !unk_0xBDA1F5E8A36BFA07(Local_423.f_3, 0))
			{
				Var0 = { unk_0xF4745590D18D14B8(Local_853.f_2, 0) };
				unk_0xD6763C9F81772BAE(&uLocal_416);
				unk_0x64A131D888A7A273(0, Var0, 1000, 0, 0);
				unk_0x392CD46D3F5D7B2C(0, 0);
				unk_0x5ADB1DCCE9B5E895(0, 500);
				unk_0x331679E15ACD8EC7(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x6F275D9063DAF754(uLocal_416);
				unk_0x457C4844450FF70E(Local_423.f_3, uLocal_416);
				unk_0xDD1A4EE55D86FE71(&uLocal_416);
				unk_0x97C5D2BB8E47131D(Local_423.f_3, 1);
				iLocal_905 = 1;
			}
			break;
	}
}

Vector3 func_326(int iParam0)
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

void func_327(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
		{
			Var0 = { unk_0xF42E2289B33D5C38(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xF42E2289B33D5C38(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xA1F52EC3ECE1D42E(Var0, Param1, 0) < unk_0xA1F52EC3ECE1D42E(Var3, Param1, 0) && unk_0xE53003D20DBC318E(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x013ABE8887A3A8D4(0, uParam0->f_4, 131584);
			}
			else if (unk_0xA1F52EC3ECE1D42E(Var0, Param1, 0) >= unk_0xA1F52EC3ECE1D42E(Var3, Param1, 0) && unk_0xE53003D20DBC318E(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x013ABE8887A3A8D4(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x013ABE8887A3A8D4(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_328(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_336(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_329(sParam2, iParam3, 0);
}

int func_329(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC48487554D051523(0);
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
					func_142();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_335(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_334();
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
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_333();
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
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_332())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
				}
			}
			if (func_30())
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_331();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_330();
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
		func_142();
	}
	return 0;
}

void func_330()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_331()
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
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_332()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_333()
{
	if (func_79(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
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
		Global_14413 = func_95();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_334()
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

bool func_335(int iParam0, int iParam1)
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
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_336(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_337(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_141();
	func_438(2);
	Var0 = { func_344() };
	if ((!unk_0x226FA58470A21AEF(&Var0) && func_193()) && !unk_0x2F6869889D97DFED(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x1AEFC2FB20822515();
		unk_0x310F6B4E168A8F5D(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
		{
			if (!func_205(uParam0))
			{
				if (unk_0x46E9388908C80483(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xCF392B3BBDE04CED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x46E9388908C80483(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xCF392B3BBDE04CED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x46E9388908C80483(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xCF392B3BBDE04CED(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_297(uParam0, 3, 0, 0);
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
				func_342(uParam0, &Var0);
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_205(uParam0))
			{
				if (unk_0x47E7BE316A5F1598(uParam0->f_4))
				{
					func_339(uParam0, 4096, 0);
				}
				else
				{
					func_339(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_342(uParam0, &Var0);
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
				func_342(uParam0, &Var0);
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_342(uParam0, &Var0);
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_342(uParam0, &Var0);
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_52(8, 0);
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
				func_342(uParam0, &Var0);
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_339(uParam0, 0, 0);
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_52(8, 0);
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
				func_342(uParam0, &Var0);
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_342(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_52(8, 0);
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
				func_342(uParam0, &Var0);
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_338(&Var0);
			func_328(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_342(uParam0, &Var0);
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
					func_342(uParam0, &Var0);
				}
			}
			else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
			{
				func_256(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_297(uParam0, 3, 0f, 1);
	}
}

void func_338(char* sParam0)
{
	switch (func_3(unk_0x06736567F820A39E()))
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

void func_339(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
	{
		unk_0xBA63517ADBC1E5E3(uParam0->f_3, 0);
		unk_0xFE26A2643AFB7A3B(uParam0->f_3);
		unk_0x6E2532A21AB2C125(uParam0->f_3, 3, 0);
		unk_0xD14E5ED9D5665519(uParam0->f_3, 17, 1);
		unk_0x1F6717C33A02B7AC(uParam0->f_3);
		if ((func_50(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_341(uParam0->f_29)) && !bParam2)
		{
			func_340(uParam0);
		}
		else
		{
			unk_0x6E2532A21AB2C125(uParam0->f_3, 1024, 1);
			unk_0x6E2532A21AB2C125(uParam0->f_3, 131072, 1);
			unk_0xD6763C9F81772BAE(&uVar0);
			unk_0x748A759556B70724(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
			}
			else
			{
				unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 1000f, -1, 0, 0);
			}
			unk_0x5EC43F130D852F7B(0, 0);
			unk_0x6F275D9063DAF754(uVar0);
			unk_0x457C4844450FF70E(uParam0->f_3, uVar0);
			unk_0xDD1A4EE55D86FE71(&uVar0);
		}
		unk_0x97C5D2BB8E47131D(uParam0->f_3, 1);
	}
}

void func_340(var uParam0)
{
	var uVar0;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xEF32567B3A5047F5(uParam0->f_3, 84.9058f);
				unk_0x97C5D2BB8E47131D(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xEF32567B3A5047F5(uParam0->f_3, 68.3138f);
				unk_0x97C5D2BB8E47131D(uParam0->f_3, 1);
			}
			else
			{
				unk_0x841E84F12BA2CFC5(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x1F6717C33A02B7AC(uParam0->f_3);
			unk_0xDD1A4EE55D86FE71(&uVar0);
			unk_0xD6763C9F81772BAE(&uVar0);
			unk_0x748A759556B70724(0, 0, 0);
			unk_0x5EC43F130D852F7B(0, 0);
			unk_0xDCA5DDD55544BA21(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xD5FDD0DED35FFF91(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x0C547DF12ECAE3E1(0, 1);
				unk_0xDCA5DDD55544BA21(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x88D1C6255C7A4BE9(0, 151.7794f, 0);
				unk_0xD5FDD0DED35FFF91(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xD937C50CBE3F443D(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xD937C50CBE3F443D(0, uParam0->f_29, 15f, 20000);
				unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
			}
			else
			{
				unk_0x28B5966B12DC5B0F(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x28B5966B12DC5B0F(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xF63E891A722D90B6(uParam0->f_29, 15f, 1))
			{
				unk_0xD937C50CBE3F443D(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
			}
			unk_0x6F275D9063DAF754(uVar0);
			unk_0x457C4844450FF70E(uParam0->f_3, uVar0);
			unk_0xDD1A4EE55D86FE71(&uVar0);
		}
		unk_0x97C5D2BB8E47131D(uParam0->f_3, 1);
	}
}

int func_341(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_342(var uParam0, char* sParam1)
{
	if (func_343(uParam0))
	{
		func_328(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_343(var uParam0)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
	{
		if (func_48(unk_0x06736567F820A39E(), uParam0->f_3, 1) < 40f && !unk_0x8831C606DC492098(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_344()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x1E6B7631898C6301();
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

int func_345(var uParam0)
{
	return uParam0->f_118;
}

void func_346()
{
	func_376(&Local_423);
	if (func_375(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_374(&Local_423))
					{
						if (func_373("TAXI_OBJ_FTC1") || unk_0xCDB4C4200A9B478A(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_180(&Local_423) != 10)
						{
							func_236(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_180(&Local_423) > 10 && func_180(&Local_423) != 15) && !func_374(&Local_423))
				{
					func_236(&Local_423, 15, 1, 0, 0);
					func_186(&Local_423, 7);
				}
				break;
			}
	}
	func_347(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_347(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_355(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_171(uParam0, 2))
	{
		if (func_354(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1ADBAAC322D61F73() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_353(uParam0))
				{
					uParam2->f_7 = { func_352(uParam1) };
					func_328(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_193())
				{
					uParam2->f_13 = { func_239() };
					if (unk_0x2F6869889D97DFED(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_350(uParam1);
					func_297(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_209(uParam0))
				{
					if (func_193())
					{
						func_297(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_349() };
						if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_193())
				{
					uParam2->f_19 = { func_344() };
				}
				else
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_350(uParam1);
					func_297(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_171(uParam0, 14) && !func_193()) && !func_209(uParam0)) && func_107(uParam0, 18) > 1f)
				{
					func_297(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_193())
				{
					if (func_107(uParam0, 18) > 1f)
					{
						if (!unk_0x226FA58470A21AEF(&(uParam2->f_1)))
						{
							func_348(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_193())
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_350(uParam1);
					func_297(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_348(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_336(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_329(sParam2, iParam4, 0);
}

struct<6> func_349()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x1E6B7631898C6301();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xDC1F9F222D09400F(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xDC1F9F222D09400F(&(Global_14580[iVar8 /*6*/])))
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

void func_350(var uParam0)
{
	int iVar0;
	
	iVar0 = func_351(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_64(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_138(), 24);
	}
}

int func_351(var uParam0)
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

struct<6> func_352(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_64(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_353(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_211("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_211("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_211("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_211("TX_OBJ_GYB_DO", 0, 0) || func_211("TAXI_OBJ_GYB", 0, 0)) || func_211("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_211("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_211("TX_OBJ_CYI_DO", 0, 0) || func_211("TAXI_OBJ_CYI_01", 0, 0)) || func_211("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_211("TX_OBJ_GYN_DO", 0, 0) || func_211("TAXI_OBJ_GYN", 0, 0)) || func_211("TAXI_OBJ_GYN_TG", 0, 0)) || func_211("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_211("TAXI_OBJ_CC1", 0, 0) || func_211("TAXI_OBJ_CC2", 0, 0)) || func_211("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_211("TAXI_OBJ_FTC1", 0, 0) || func_211("TAXI_OBJ_FTC2", 0, 0)) || func_211("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_211("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_211("TAXI_OBJ_GETRUN", 0, 0) || func_211("TAXI_OBJ_DRIVE", 0, 0)) || func_211("TAXI_OBJ_RETURN", 0, 0)) || func_211("TAXI_OBJ_POL", 0, 0)) || func_211("TAXI_OBJ_RUNOUT", 0, 0)) || func_211("TAXI_OBJ_POL", 0, 0));
}

int func_354(var uParam0)
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

void func_355(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_353(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_171(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_180(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_370(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_193())
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
						func_369(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_366(uParam0, Var0, func_368(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_297(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				func_220(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_107(uParam0, 16) > 1f)
				{
					func_221(1);
					if (uParam0->f_411 == 9)
					{
						func_260("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_260("TAXI_VIP_RETURN", 7500, 1);
					}
					func_297(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
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
					func_369(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
				{
					func_256(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_107(uParam0, 16) > func_121(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_193()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_180(uParam0))
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
				func_369(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_370(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_328(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_236(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_297(uParam0, 16, 0, 0);
				func_236(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_372(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_369(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_297(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_260("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_260("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCDB4C4200A9B478A(uParam0->f_9))
					{
						uParam0->f_9 = func_120(uParam0->f_17, 1);
					}
					else if (unk_0x736983525DD90B1D(uParam0->f_9) == 0)
					{
						unk_0x7535364E752B61AE(uParam0->f_9, 255);
						unk_0x5FA4E5CEF445F525(uParam0->f_9, uParam0->f_17);
						unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 1);
					}
				}
				func_236(uParam0, 10, 1, 0, 0);
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
				func_238(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_256(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCDB4C4200A9B478A(uParam0->f_9))
					{
						uParam0->f_9 = func_120(uParam0->f_17, 1);
					}
					else if (unk_0x736983525DD90B1D(uParam0->f_9) == 0)
					{
						unk_0x7535364E752B61AE(uParam0->f_9, 255);
						unk_0x5FA4E5CEF445F525(uParam0->f_9, uParam0->f_17);
						unk_0xEEF2AFCBBDD180D3(uParam0->f_9, 1);
					}
				}
				func_236(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_365(uParam0, 33554432, Var0, "", 1, 8);
				func_297(uParam0, 16, 0, 0);
				func_236(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_193())
				{
					func_364(uParam0, 0);
					func_64(&(uParam0->f_44), 4);
					func_297(uParam0, 16, 0, 0);
					func_236(uParam0, 13, 0, 0, 0);
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
				func_238(&Var0);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_107(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_238(&Var0);
					}
					func_362(Var0, uParam1);
					func_64(&(uParam0->f_81), 67108864);
					func_297(uParam0, 16, 0, 0);
					func_297(uParam0, 11, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_107(uParam0, 11) > uParam0->f_36)
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
							func_238(&Var0);
						}
					}
					func_362(Var0, uParam1);
					func_297(uParam0, 11, 0, 0);
					func_297(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
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
					func_238(&Var0);
				}
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
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
				func_238(&Var0);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
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
				func_238(&Var0);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_238(&Var0);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				func_64(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 1, 0, 8);
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
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
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
					func_361(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_361(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_362(Var0, uParam1);
				func_370(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 6, 0f, 1);
				func_261(uParam0, 0, 0);
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
					func_361(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_361(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_362(Var0, uParam1);
				func_370(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 6, 0f, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 12:
				func_260("TAXI_OBJ_GYB", 3500, 1);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_260("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_260("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_260("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
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
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_260("TAXI_OBJ_CYI_01", 7500, 1);
					func_64(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_238(&Var0);
				func_362(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_238(&Var0);
				func_362(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_238(&Var0);
				func_362(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 33:
				func_260("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_107(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_238(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_362(Var0, uParam1);
						}
						else
						{
							func_369(uParam0, &Var0, 0, 0, 8);
						}
						func_64(&(uParam0->f_82), 8192);
						func_297(uParam0, 16, 0, 0);
						func_297(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_238(&Var0);
					func_369(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_238(&Var0);
					func_369(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 46, 1, 0, 0);
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
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_261(uParam0, 0, 0);
				break;
			
			case 139:
				func_260("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_236(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA6055C735E3DD877(0, 120);
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
					func_64(&(uParam0->f_82), 268435456);
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
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA6055C735E3DD877(0, 100);
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
					func_64(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_260("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_261(uParam0, 0, 0);
				func_236(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_193())
				{
					func_260("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_261(uParam0, 0, 0);
					func_236(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_260("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_261(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_360(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_360(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_370(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
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
				func_64(&(uParam0->f_81), 2097152);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_297(uParam0, 16, 0, 0);
				func_370(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_370(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_370(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_370(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_360(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_360(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_360(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_370(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_359(uParam0))
				{
					func_366(uParam0, Var0, func_368(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
					{
						func_256(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_372(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_328(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_372(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_372(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_370(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_297(uParam0, 16, 0, 0);
				}
				func_261(uParam0, 0, 0);
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
						func_238(&Var0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_238(&Var0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_238(&Var0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_297(uParam0, 16, 0, 0);
				}
				func_370(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_365(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_365(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_370(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_365(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_365(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_370(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_358(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_358(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_358(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_370(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_261(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_372(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_370(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_297(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_370(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_370(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_365(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_365(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_359(uParam0))
				{
					func_366(uParam0, Var0, func_368(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
					{
						func_256(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_297(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_297(uParam0, 16, 0, 0);
				}
				func_370(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_193())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_369(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_366(uParam0, Var0, func_368(uParam0, 65));
					func_261(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_193())
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
					func_369(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_366(uParam0, Var0, func_368(uParam0, 66));
					func_261(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_193())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								func_370(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								func_370(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_372(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_370(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_297(uParam0, 16, 0, 0);
								func_261(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_369(uParam0, &Var0, 0, 0, 8);
									func_297(uParam0, 16, 0, 0);
									func_297(uParam0, 11, 0, 0);
									func_261(uParam0, 0, 0);
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
									func_238(&Var0);
									func_369(uParam0, &Var0, 0, 0, 8);
									func_297(uParam0, 16, 0, 0);
									func_297(uParam0, 11, 0, 0);
									func_261(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_369(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_236(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_370(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_358(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_358(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_358(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_261(uParam0, 0, 0);
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
				func_372(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
				{
					func_256(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_297(uParam0, 16, 0, 0);
				func_370(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_359(uParam0))
				{
					func_366(uParam0, Var0, func_368(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
					{
						func_256(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_357(uParam0, Var0, 8);
				}
				func_370(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_64(&(uParam0->f_83), 1024);
					func_297(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_64(&(uParam0->f_83), 2048);
					func_297(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_64(&(uParam0->f_83), 4096);
					func_297(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_238(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_358(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_358(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_370(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 52, 1, 0, 0);
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
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
				{
					func_256(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_359(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_369(uParam0, &Var0, 0, 0, 8);
						func_236(uParam0, 52, 1, 0, 0);
						func_297(uParam0, 16, 0, 0);
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
						func_369(uParam0, &Var0, 0, 0, 8);
						func_297(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_372(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_297(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_370(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_297(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xB0565BA1AD71378E(unk_0xBC628C78D8ECD5F1()) >= 1)
				{
					func_260("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_365(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_365(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_365(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_370(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_356(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_356(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_370(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 100:
				func_260("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_261(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_238(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_238(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_369(uParam0, &Var0, 0, 0, 8);
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
					func_238(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_107(uParam0, 11) > uParam0->f_36)
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
						func_238(&Var0);
						func_362(Var0, uParam1);
						func_64(&(uParam0->f_82), 65536);
						func_297(uParam0, 16, 0, 0);
						func_297(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_107(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_238(&Var0);
						func_362(Var0, uParam1);
						func_64(&(uParam0->f_82), 131072);
						func_297(uParam0, 16, 0, 0);
						func_297(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_64(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_64(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_64(&(uParam0->f_82), 33554432);
				}
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_372(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_238(&Var0);
					func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_369(uParam0, &Var0, 0, 0, 8);
				}
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_362(Var0, uParam1);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_372(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_371(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_64(&(uParam0->f_81), 2097152);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_238(&Var0);
				func_362(Var0, uParam1);
				func_64(&(uParam0->f_81), 67108864);
				func_297(uParam0, 16, 0, 0);
				func_297(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_365(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
					{
						func_256(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_236(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_365(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_236(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_260("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_261(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_365(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
						{
							func_256(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_365(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_236(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_260("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_261(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_297(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_365(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 88:
				func_260("TAXI_TIEFLEE", 7500, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_260("TAXI_OBJ_CYI_1B", 7500, 1);
					func_64(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_261(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_238(&Var0);
				func_369(uParam0, &Var0, 0, 0, 8);
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
				func_369(uParam0, &Var0, 0, 0, 8);
				func_261(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_369(uParam0, &Var0, 0, 0, 8);
				func_261(uParam0, 0, 0);
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
				func_369(uParam0, &Var0, 0, 0, 8);
				func_261(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_369(uParam0, &Var0, 1, 0, 8);
				func_236(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_260("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_236(uParam0, 0, 0, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			}
	}
}

void func_356(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_297(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_238(&Param2);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_357(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_64(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_64(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xA6055C735E3DD877(1, 3), 24);
	}
	func_371(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_297(uParam0, 16, 0, 0);
}

void func_358(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_297(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_238(&Param2);
		}
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_359(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_360(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_64(&(uParam0->f_81), iParam1);
	func_297(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_328(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_361(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_277(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_238(sParam2);
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

void func_362(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_363(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_64(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_363(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x226FA58470A21AEF(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_364(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_260("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_260("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_260("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_260("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_260("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_260("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_260("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_260("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_260("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_260("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_260("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_260("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_260("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_365(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_81), iParam1);
	func_297(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_238(&Param2);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_366(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_297(uParam0, 16, 0, 0);
	func_297(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xCFC04A38F256EE06(uParam0->f_3))
	{
		unk_0xB730AAEE98460658(uParam0->f_3, &cParam1, func_367(uParam0));
	}
}

char* func_367(var uParam0)
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

char* func_368(var uParam0, int iParam1)
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

int func_369(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_297(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_297(uParam0, 17, 0f, 1);
	}
	func_261(uParam0, iParam2, 0);
	return func_328(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_370(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_371(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_336(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_329(sParam2, iParam4, 0);
}

void func_372(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_277(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_238(sParam2);
				}
				else
				{
					func_238(sParam2);
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

int func_373(char* sParam0)
{
	if (!unk_0x60D87DA27F70EBBC(sParam0))
	{
		if (func_211(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_374(var uParam0)
{
	if (func_193())
	{
		return 1;
	}
	if (func_171(uParam0, 17))
	{
		return 1;
	}
	if (func_171(uParam0, 14))
	{
		return 1;
	}
	if (func_209(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_375(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_171(uParam0, 9));
}

void func_376(var uParam0)
{
	if (func_171(uParam0, 17))
	{
		if (!func_171(uParam0, 14))
		{
			if (!func_209(uParam0))
			{
				if (!func_193())
				{
					func_190(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_377(var uParam0)
{
	return uParam0->f_117;
}

void func_378(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x226FA58470A21AEF(&(uParam0->f_124)) && func_193())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_193())
				{
					StringCopy(&(uParam0->f_124), func_138(), 24);
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

void func_379(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xC1EDB61CE0A4B94E(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_277(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_277(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_277(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_65(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x1ADBAAC322D61F73();
							}
						}
						else
						{
							func_20(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_277(Local_343.f_1[iVar0 /*4*/], 4) && !func_277(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_65(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_337(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_380(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_171(uParam0, 27))
	{
		func_186(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_107(uParam0, 27) > 5f)
	{
		if (func_407(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_297(uParam0, 27, 0, 0);
			func_297(uParam0, 10, 0, 0);
			func_405(uParam0, &uVar0, uParam1);
		}
		func_402(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_381(uParam0);
	}
	if ((((!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()) && (unk_0x97A9CC2DDCDAA0A8(*uParam0) && !unk_0x52F602ADFE383505(*uParam0))) && (unk_0x97A9CC2DDCDAA0A8(uParam0->f_1) && !unk_0x52F602ADFE383505(uParam0->f_1))) && !unk_0x74832C64B3ECD28D()) && !func_193())
	{
		if (func_107(uParam0, 26) > 10f)
		{
			func_190(uParam0, 26, 0);
			unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
		}
	}
	else if (func_171(uParam0, 26))
	{
		func_190(uParam0, 26, 0);
	}
	return 0;
}

void func_381(var uParam0)
{
	if (!func_401(uParam0->f_429))
	{
		uParam0->f_429 = func_400();
		func_391(&(uParam0->f_429), 0, 0, unk_0xA6055C735E3DD877(4, 7), 0, 0, 0);
	}
	else if (func_382(uParam0->f_429))
	{
		func_337(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_382(int iParam0)
{
	return func_383(func_400(), iParam0);
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_401(iParam1) || !func_401(iParam0))
	{
		return 1;
	}
	iVar0 = func_389(iParam0);
	iVar1 = func_389(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_384(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_385(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_386(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_387(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_388(int iParam0)
{
	return iParam0 & 15;
}

var func_389(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_390(unk_0x7DA173D4FD42F36B(iParam0, 31), -1, 1)) + 2011;
}

int func_390(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_391(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_389(*uParam0);
	iVar1 = func_388(*uParam0);
	iVar2 = func_387(*uParam0);
	iVar3 = func_386(*uParam0);
	iVar4 = func_385(*uParam0);
	iVar5 = func_384(*uParam0);
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
	iVar6 = func_399(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_399(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_392(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_392(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_398(uParam0, iParam1);
	func_397(uParam0, iParam2);
	func_396(uParam0, iParam3);
	func_395(uParam0, iParam5);
	func_394(uParam0, iParam4);
	func_393(uParam0, iParam6);
}

void func_393(var uParam0, int iParam1)
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

void func_394(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_388(*uParam0);
	iVar1 = func_389(*uParam0);
	if (iParam1 < 1 || iParam1 > func_399(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_396(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_397(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_398(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_399(int iParam0, int iParam1)
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

int func_400()
{
	var uVar0;
	
	func_398(&uVar0, unk_0xF14A94DD5AC25E5A());
	func_397(&uVar0, unk_0x4DD90C24B73F9042());
	func_396(&uVar0, unk_0xEC5C0F25A9A364A0());
	func_394(&uVar0, unk_0xED13857F967C0912());
	func_395(&uVar0, unk_0x39BDC971C31BA81C());
	func_393(&uVar0, unk_0x6EBF2ECA5972D1E7());
	return uVar0;
}

int func_401(int iParam0)
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
	iVar0 = func_384(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_385(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_386(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_389(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_388(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_387(iParam0);
	if (iVar5 < 1 || iVar5 > func_399(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_402(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_404()) && !func_189(uParam0)) || ((uParam0->f_411 != 9 && func_265(uParam0, 1)) && !func_189(uParam0)))
		{
			uVar0 = func_403(uParam0->f_4);
			unk_0x6C430D273FC2EC35(&uVar0);
			uParam0->f_4 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			unk_0xB7E6C6AE18F1EDA6(uParam0->f_4, 1, 0);
			func_224(uParam0);
			func_216(uParam0, 0);
		}
	}
}

var func_403(var uParam0)
{
	return uParam0;
}

int func_404()
{
	int iVar0;
	
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			if (unk_0x1B6292EA51632C25(iVar0, 0))
			{
				if (unk_0x4321FC7479614822(iVar0, -1) == unk_0x06736567F820A39E())
				{
					if (unk_0xD94C5D56986DC6E2(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_405(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_406(uParam0, 0, 1))
			{
				func_337(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_406(uParam0, 0, 4))
			{
				func_337(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_406(uParam0, 0, 8))
			{
				func_337(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_406(uParam0, 1, 1))
			{
				func_337(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_406(uParam0, 0, 1))
			{
				func_337(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_205(uParam0))
			{
				func_337(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_406(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
	{
		if (!unk_0x8831C606DC492098(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_236(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_236(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_407(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x06736567F820A39E();
	if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0) && !unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_413(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_411(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_410(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_408(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_408(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (iParam7 && unk_0x1D58D319587D567F(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x6267527E254067CA(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x6267527E254067CA(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xF222904387CE4946();
		if (!unk_0xBDA1F5E8A36BFA07(uVar0, 0))
		{
			if (unk_0x1D58D319587D567F(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xF222904387CE4946();
		if (!unk_0xBDA1F5E8A36BFA07(uVar1, 0))
		{
			if (unk_0x1D58D319587D567F(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			if (unk_0x681E099FF604FDCE(iParam0))
			{
				if (unk_0xABEE166840E303E7(iParam0) == unk_0x06736567F820A39E())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
		{
			if (unk_0x8853522CEFF93BE9(iParam0, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xE5A4C0A15A60DF39(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFFFE3967793158C3(unk_0x06736567F820A39E()))
	{
		if (unk_0x446121239D48B0E2(iParam0))
		{
			return 1;
		}
	}
	if (func_409(unk_0x06736567F820A39E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9C4162CAC2B459EC(iParam0) && func_215(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
		{
			if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), unk_0x34E1EF1E8BCD1BFC(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), iParam0))
		{
			return 1;
		}
		if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
		{
			if (unk_0x1D58D319587D567F(iParam1, unk_0x06736567F820A39E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x47BF380FF078FA9F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x98D424FE7497139D(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iParam0, 1), unk_0xF4745590D18D14B8(iParam1, 1)) < 2.5f)
			{
				if (unk_0xE722F1A5D8B43C06(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_410(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x09AED05FAA64E81C(uParam0, 4))
	{
		if (unk_0x98D424FE7497139D(uParam0) && !unk_0x82D364243A5848A1(iParam0))
		{
			if (unk_0x8853522CEFF93BE9(uParam1, unk_0xF4745590D18D14B8(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_411(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	if (unk_0xDECA6CE314913AC1(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD8035CA7C181DFA9(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x09AED05FAA64E81C(uParam0, 2))
	{
		if (unk_0x98D424FE7497139D(uParam0))
		{
			if (unk_0x8853522CEFF93BE9(iParam1, unk_0xF4745590D18D14B8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xE722F1A5D8B43C06(unk_0x406B8F450D0105AB(iParam1), iParam0, 120f) && unk_0xA382B3D871DD22A4(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x0FDFEC0DD29106EE(unk_0x406B8F450D0105AB(iParam1), 0))
			{
				iVar3 = unk_0x34E1EF1E8BCD1BFC(unk_0x406B8F450D0105AB(iParam1), 0);
			}
			if (unk_0x973D428626B4A21D(iParam0) || func_412(iVar3))
			{
				if (unk_0x8853522CEFF93BE9(iParam1, unk_0xF4745590D18D14B8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xE722F1A5D8B43C06(unk_0x406B8F450D0105AB(iParam1), iParam0, 120f) && unk_0xA382B3D871DD22A4(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x8CE40F22CEFDEA99((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (unk_0x1B6292EA51632C25(iParam0, 0))
		{
			if (unk_0x4321FC7479614822(iParam0, -1) != 0)
			{
				if (unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_48(unk_0x06736567F820A39E(), iParam0, 1) < 40f)
						{
							if (unk_0xFD400CC34D5746B3(unk_0xE0BDAFA1A39552D6(), &uVar1))
							{
								if ((unk_0xFCBEC4C2079B0872(uVar1) && unk_0x43AB2E726FCE3BF7(iVar1) == iParam0) || (unk_0x77CB3F400804EDD1(iVar1) && unk_0x406B8F450D0105AB(iVar1) == unk_0x4321FC7479614822(iParam0, -1)))
								{
									if ((unk_0x59AD7FDEE8F9BAED(unk_0x06736567F820A39E()) && unk_0xE9F7E89BC2352535(0, 24)) || (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) && unk_0xE9F7E89BC2352535(0, 69)))
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

int func_413(int iParam0, var uParam1)
{
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		if (unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
		{
			if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iParam0) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
			{
				if (unk_0xE722F1A5D8B43C06(iParam0, unk_0x06736567F820A39E(), 90f))
				{
					if (func_215(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1ADBAAC322D61F73();
						}
						else if ((unk_0x1ADBAAC322D61F73() - uParam1->f_1) > uParam1->f_3)
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

void func_414(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
		{
			if (func_50(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x6C4DEE9BDB093DC6(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_64(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_415()
{
	func_416(&Local_423);
	func_438(2);
	func_434();
}

void func_416(var uParam0)
{
	func_51(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_438(2);
	}
}

int func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_193() && func_107(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0->f_3, 0))
		{
			if (unk_0x1B6292EA51632C25(uParam0->f_4, 0))
			{
				if (unk_0x93E49C491856D7AD(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_277(uParam0->f_85, 32))
					{
						if (!unk_0x47E7BE316A5F1598(uParam0->f_4))
						{
							func_339(uParam0, 4160, 0);
						}
						else
						{
							func_339(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_339(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_339(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_339(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x1ADBAAC322D61F73() % 1000) < 50)
	{
	}
	return 0;
}

void func_418(var uParam0)
{
	if (unk_0xCDB4C4200A9B478A(uParam0->f_8))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_8));
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_9))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_9));
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_10))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_10));
	}
}

int func_419(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_420()
{
	func_423(&Local_423, 8);
	Local_423.f_410 = 0;
	func_422(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { Local_925 };
	Local_423.f_34 = 95.93f;
	func_421(&Local_423, &Local_853);
	Local_853.f_0 = joaat("s_m_m_doctor_01");
	Local_853.f_1 = joaat("bison");
}

void func_421(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_101186.f_17863.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_422(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_423(var uParam0, int iParam1)
{
	func_433(1);
	func_226();
	func_6(&(uParam0->f_244));
	func_432(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_101186.f_17863, 4))
	{
		func_64(&(Global_101186.f_17863), 4);
	}
	func_427(uParam0);
	func_425(uParam0);
	unk_0x6553935614875699(unk_0x06736567F820A39E(), 32, 0);
	uParam0->f_102 = (func_424(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x18DF389F542183A3("TAXI", 2);
}

int func_424(int iParam0)
{
	return Global_101186.f_17863.f_39[iParam0];
}

void func_425(var uParam0)
{
	switch (func_63(uParam0))
	{
		case 0:
			func_426(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_426(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_426(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_426(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_426(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_426(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_426(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_426(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_426(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_426(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_426(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_427(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_431(uParam0, 3);
			func_430(uParam0, 14);
			break;
		
		case 1:
			func_431(uParam0, 14);
			func_430(uParam0, 8);
			break;
		
		case 2:
			func_431(uParam0, 8);
			func_430(uParam0, 7);
			break;
		
		case 3:
			func_431(uParam0, 15);
			func_430(uParam0, 6);
			break;
		
		case 4:
			func_431(uParam0, 0);
			func_430(uParam0, 3);
			break;
		
		case 5:
			func_431(uParam0, 6);
			func_430(uParam0, 7);
			break;
		
		case 6:
			func_431(uParam0, 8);
			func_430(uParam0, 15);
			break;
		
		case 7:
			func_431(uParam0, 8);
			func_430(uParam0, 14);
			break;
		
		case 8:
			func_431(uParam0, 7);
			func_430(uParam0, 15);
			break;
		
		case 9:
			func_431(uParam0, unk_0xA6055C735E3DD877(0, 17));
			iVar0 = func_429((uParam0->f_418.f_2 + unk_0xA6055C735E3DD877(1, 17)), 0, 16);
			func_430(uParam0, iVar0);
			func_428(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_428(var uParam0)
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

int func_429(int iParam0, int iParam1, int iParam2)
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

void func_430(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_431(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_432(var uParam0)
{
	uParam0->f_2 = unk_0x06736567F820A39E();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_39() };
	uParam0->f_17 = { func_39() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_190(uParam0, 32, 0);
}

void func_433(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100242, unk_0x47B34031F915C179(), 24);
		Global_100236 = 1;
	}
	else
	{
		StringCopy(&Global_100242, "NULL", 24);
		Global_100236 = 0;
	}
}

void func_434()
{
	unk_0x41BBA77D020A0CEB(Local_928, Local_931, 1, 1);
	unk_0x41BBA77D020A0CEB(Local_946, Local_949, 1, 1);
	func_130(Local_958, 60f, 0);
	func_130(Local_961, 60f, 0);
	unk_0xFD97B3F2D9A2559A();
	unk_0x8659A4920DA95096(uLocal_894, 0);
	unk_0x50C99396AA9E5449(iLocal_893);
	unk_0x50C99396AA9E5449(iLocal_892);
	unk_0x828EA6BAF1847352(&cLocal_976);
	func_233(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_437();
	func_436();
	func_435();
	unk_0x2CC3164B94BF6E73(Local_853.f_1, 0);
	func_147(&uLocal_45, 0, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_435()
{
	unk_0x0B87AFC0B2EECA19(iLocal_887);
	unk_0x6B09668CBB188BED("MOVE_DUCK_FOR_COVER");
	unk_0x6B09668CBB188BED(&cLocal_980);
	unk_0x6B09668CBB188BED(&cLocal_996);
	unk_0x6B09668CBB188BED(&cLocal_1012);
	unk_0x6B09668CBB188BED(&cLocal_1028);
}

void func_436()
{
	unk_0x0B87AFC0B2EECA19(Local_853.f_0);
	unk_0x0B87AFC0B2EECA19(Local_853.f_1);
	unk_0x0B87AFC0B2EECA19(iLocal_888);
	unk_0x0B87AFC0B2EECA19(iLocal_889);
	unk_0x828EA6BAF1847352(&cLocal_976);
	unk_0x6B09668CBB188BED("veh@truck@ds@base");
}

void func_437()
{
	unk_0x0B87AFC0B2EECA19(iLocal_886);
	unk_0x6B09668CBB188BED("gestures@m@standing@casual");
}

void func_438(int iParam0)
{
	Global_99898.f_22 = iParam0;
}

