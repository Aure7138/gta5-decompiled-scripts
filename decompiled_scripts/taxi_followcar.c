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
	uLocal_77 = unk_0x8CC13B3BF7A9890A();
	uLocal_78 = unk_0x2A3612A4B836469E();
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
	if (unk_0x96CFB880BAC634CE(67))
	{
		func_462(2);
		func_458();
	}
	unk_0x925970A93719CADE(1);
	func_444();
	while (true)
	{
		if (unk_0xFC8BFE4B41177C22(Local_423.f_2))
		{
			func_9();
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
	uParam0->f_2 = unk_0x4A8C381C258A124D();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x4A8C381C258A124D());
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
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
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
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x4A8C381C258A124D());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_9()
{
	if (func_443(&Local_423))
	{
		func_442(&Local_423);
		if (unk_0xC450B06E5AAA0985(Local_853.f_4))
		{
			unk_0xFE54B8568B2ABD12(&(Local_853.f_4));
		}
		if (func_441(&Local_423, 0))
		{
			func_439();
		}
	}
	else
	{
		func_438(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_404(&Local_423, &uLocal_1125);
			func_403(&Local_423);
			func_402(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_401(&Local_423))
			{
				func_370();
			}
			else
			{
				func_361(&Local_423, "Taxi Not Driveable", func_369(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !iLocal_905)
		{
			func_345();
		}
		if (iLocal_907)
		{
			unk_0xA0265306DFF63938(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_321(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_318();
				func_317(&Local_423, 16, 4f, 0);
				func_315(&Local_423, Local_916, Local_919, "TaxiKeyla", iLocal_886, 41.1334f, 15f);
				func_314(&Local_423);
				func_313(&Local_423, 1);
				break;
			
			case 1:
				if (func_311())
				{
					func_310();
					func_290();
					func_289(&(Local_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_288(&Local_423, &Local_409);
					func_287(&Local_423);
					unk_0xA63572E348CC4CFB(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_313(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_280(&Local_423, 1))
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
					{
						unk_0xD1C578C204015E1F(Local_423.f_3, 0, 0, 1, 0);
						unk_0xD1C578C204015E1F(Local_423.f_3, 2, 1, 2, 0);
						unk_0xD1C578C204015E1F(Local_423.f_3, 3, 0, 2, 0);
						unk_0xD1C578C204015E1F(Local_423.f_3, 4, 1, 3, 0);
						unk_0xD1C578C204015E1F(Local_423.f_3, 8, 1, 0, 0);
					}
					func_279(&Local_423, 1, 0);
					unk_0x06CD913C241C765E("TAXI_Escapee", &(Local_853.f_30));
					unk_0xD414C47AFF81382A(255, Local_853.f_30, Local_423.f_413);
					unk_0xD414C47AFF81382A(255, Local_853.f_30, joaat("player"));
					unk_0xD1B0AF388B711EBC(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_313(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_260(&Local_423, 0, 1109393408))
				{
					func_259();
					func_313(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_258(&Local_423))
				{
					func_254(&Local_423, 9, 1, 0, 0);
					func_253(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_252();
					func_251(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_313(&Local_423, 17);
				}
				if (unk_0xD9F5E1FEFD1329E4(Local_423.f_4, 0))
				{
					if (!unk_0xCECDBB848D53DEB2(Local_423.f_2, Local_423.f_4, 0))
					{
						func_249(&Local_423);
						func_313(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_248(&Local_423, &(Local_423.f_9));
				if (!unk_0xFC8BFE4B41177C22(Local_853.f_3))
				{
					if (func_247())
					{
						func_246(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_245(&Local_423, &Local_853);
				}
				if (func_219(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0x6308A5C1C94EABC0(Local_423.f_9))
					{
						unk_0xBC64B805EE071A37(Local_423.f_9, 0);
					}
					unk_0xFE54B8568B2ABD12(&(Local_423.f_9));
					func_313(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_212())
				{
					if (!func_211())
					{
						func_254(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_313(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_245(&Local_423, &Local_853);
				func_210();
				if (func_209(Local_853.f_2, Local_853.f_3))
				{
					func_208(&Local_423, 2, 0);
					unk_0x9C18DF7FC19D843C(Local_853.f_2, 1);
					unk_0xBE8796DB2B90A437(Local_853.f_2, 6, 1);
					unk_0xBE8796DB2B90A437(Local_853.f_2, 17, 1);
					func_279(&Local_423, 1, 0);
					Local_853.f_5 = unk_0x8D91ADE44AC79BC9(Local_853.f_3);
					Local_853.f_15 = unk_0x4C7724D572378B05(Local_853.f_3);
					Local_853.f_16 = unk_0x31B58D7972181BFA(Local_853.f_3);
					func_317(&Local_423, 13, 0f, 0);
					func_317(&Local_423, 20, 0f, 0);
					unk_0x89C4F1335B4A6633(Local_946, Local_949);
					uLocal_894 = unk_0xA7B0B03284E7503C(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x0A0A06C514052E80(0);
					func_313(&Local_423, 13);
				}
				break;
			
			case 13:
				func_210();
				func_245(&Local_423, &Local_853);
				func_248(&Local_423, &(Local_853.f_4));
				if (func_207(&Local_423))
				{
					if (func_206(Local_853.f_2, Local_853.f_4))
					{
						func_254(&Local_423, 51, 1, 0, 0);
						func_313(&Local_423, 25);
					}
					func_202(&Local_423);
					func_199(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_159())
					{
						if (unk_0xD99C77F6466B9C48(Local_853.f_3))
						{
							unk_0x1D2DAF2A41FFC4A0(Local_853.f_3);
							unk_0x7821F942CAEEBEE1(0, "taxi_oj_fc3");
						}
						func_157(&uLocal_45, 0, 0);
						func_156();
						func_313(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_155())
				{
					if (func_134())
					{
						func_313(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_133(&Local_423, &(Local_423.f_43));
				if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
				{
					if ((unk_0x65FFA94B82A71741(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0xDF93B3CFAC96698F(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
						{
							unk_0x974022927CB47E68(iLocal_890);
							unk_0xB2BD5837A8D3CEDA(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_254(&Local_423, 37, 1, 0, 0);
						func_313(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_133(&Local_423, &(Local_423.f_43));
				func_132(&Local_423, Local_853.f_2, 1, 1);
				func_132(&Local_423, iLocal_890, 0, 0);
				func_248(&Local_423, &(Local_423.f_9));
				if (unk_0xC450B06E5AAA0985(Local_853.f_4))
				{
					unk_0xFE54B8568B2ABD12(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0xC450B06E5AAA0985(Local_423.f_9))
				{
					Local_423.f_9 = func_130(Local_423.f_17, 1);
				}
				if (unk_0xD9F5E1FEFD1329E4(Local_423.f_4, 0))
				{
					if (unk_0xCECDBB848D53DEB2(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0x65FFA94B82A71741(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x5105BE70DEF1F5FB(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x5105BE70DEF1F5FB(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
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
							func_313(&Local_423, 22);
						}
					}
				}
				break;
			
			case 22:
				func_132(&Local_423, Local_853.f_2, 0, 1);
				func_132(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x4FAFF4BCB7633475(Local_423.f_3))
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_126(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0xFE54B8568B2ABD12(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0xC450B06E5AAA0985(Local_423.f_9))
							{
								Local_423.f_9 = func_130(Local_423.f_17, 1);
							}
							if (func_219(&Local_423, 8f, 1097859072, 1117782016) || func_126(&Local_423, 1, 1084227584))
							{
								unk_0xFE54B8568B2ABD12(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_132(&Local_423, Local_853.f_2, 0, 1);
				func_132(&Local_423, iLocal_890, 0, 0);
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					func_254(&Local_423, 37, 1, 0, 0);
					func_313(&Local_423, 27);
				}
				break;
			
			case 27:
				func_132(&Local_423, Local_853.f_2, 0, 1);
				func_132(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x4FAFF4BCB7633475(Local_423.f_3))
				{
					if (unk_0xC450B06E5AAA0985(Local_853.f_4))
					{
						unk_0xFE54B8568B2ABD12(&(Local_853.f_4));
					}
					unk_0x4E8E15513E171E54("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_125(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_123(&Local_423);
					func_119(&Local_423);
					func_118(&Local_423);
					func_313(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x4E8E15513E171E54("TAXI_OBJ_DRIVE");
				if (func_83(&Local_423, &uLocal_1132))
				{
					func_57(&Local_423);
					func_313(&Local_423, 28);
				}
				break;
			
			case 28:
				if (iLocal_905 || iLocal_904)
				{
					func_313(&Local_423, 30);
				}
				break;
			
			case 30:
				unk_0x4E8E15513E171E54("TAXI_OBJ_DRIVE");
				if ((!unk_0x4FAFF4BCB7633475(Local_423.f_3) && unk_0x9B3D4335E0EDB0BE(iLocal_890, Local_423.f_3, 1)) && unk_0x9B3D4335E0EDB0BE(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_54(1, &Local_423, 1);
						func_458();
					}
					else
					{
						iLocal_421 = unk_0x66D94742BB3D032F(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0xD9F5E1FEFD1329E4(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0xFA4D35AD36BDA1FE(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0x4FAFF4BCB7633475(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0x70DA4F87B396F9F9(5, Local_940, 1, 0f, &uLocal_895, 0, 0))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_52(Local_940, 1) > 100f || func_50(Local_423.f_3, unk_0x4A8C381C258A124D()) > 100f)
				{
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((unk_0x4FAFF4BCB7633475(Local_423.f_3) || unk_0x9B3D4335E0EDB0BE(iLocal_890, unk_0x4A8C381C258A124D(), 1)) || unk_0x9B3D4335E0EDB0BE(Local_853.f_2, unk_0x4A8C381C258A124D(), 1))
				{
					if (!unk_0x4FAFF4BCB7633475(Local_423.f_3))
					{
						unk_0xAAA71DD7E9059338(Local_423.f_3, 1);
						unk_0x974022927CB47E68(Local_423.f_3);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0xAFC7A89C990C4339(0, 2000);
						unk_0xFD251F92B546F389(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(Local_423.f_3, 1);
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_890))
					{
						unk_0xAAA71DD7E9059338(iLocal_890, 1);
						unk_0x974022927CB47E68(iLocal_890);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0xAFC7A89C990C4339(0, 1000);
						unk_0xFD251F92B546F389(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(iLocal_890, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(iLocal_890, 1);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_853.f_2))
					{
						unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						if (bLocal_908)
						{
							unk_0x10425721983AE158(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x0FD8B5F4BB15CD71(0, 500);
						unk_0xFD251F92B546F389(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(Local_853.f_2, 1);
					}
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((iLocal_904 && !func_211()) && (unk_0x1DD05E817C89C737() - iLocal_900) > 500)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_423.f_3))
					{
						unk_0xAAA71DD7E9059338(Local_423.f_3, 1);
						unk_0x974022927CB47E68(Local_423.f_3);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0xE84EF4129A44CCA3(0, unk_0x4A8C381C258A124D(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(Local_423.f_3, 1);
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_890))
					{
						unk_0xAAA71DD7E9059338(iLocal_890, 1);
						unk_0x974022927CB47E68(iLocal_890);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0xAFC7A89C990C4339(0, 1000);
						unk_0xFD251F92B546F389(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(iLocal_890, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(iLocal_890, 1);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_853.f_2))
					{
						unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
						unk_0x974022927CB47E68(Local_853.f_2);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0x0FD8B5F4BB15CD71(0, 500);
						unk_0xFD251F92B546F389(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0x44FB298D6382876D(Local_853.f_2, 1);
					}
					func_10(&Local_423, 1);
					func_458();
				}
				break;
			}
	}
}

void func_10(var uParam0, bool bParam1)
{
	func_442(uParam0);
	if (func_211())
	{
		func_48();
	}
	func_46();
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	func_41(0);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		unk_0x5FE0938FDE9B0958(uParam0->f_4, 0);
		unk_0xB7BDF91BE073DCFB(uParam0->f_4);
		unk_0xD27458C016741B0C(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_251(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
	if (func_33())
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_23(0, 1, 1, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x0A0A06C514052E80(1);
	}
	if (func_22(Global_113648.f_19099, 4))
	{
		func_20(&(Global_113648.f_19099), 4);
		unk_0xCCA6D8A84EE8C88A(func_19(), 0);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0x268BE77F77533D03("gestures@m@standing@casual");
	unk_0x268BE77F77533D03("oddjobs@taxi@");
	unk_0x268BE77F77533D03("oddjobs@towingcome_here");
	if (unk_0x261E3728EE56B3AC())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0xE916D57851F785AB(unk_0xB6B621402486C3E4()))
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x60642EDE690B1018(unk_0xF2DB717A73826179((func_11(&uLocal_90) * 1000f)), 12, 0);
}

float func_11(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_13(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_15(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0xFF692AB7350A74D7(&uVar0))
		{
		}
	}
}

struct<8> func_16(int iParam0)
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

void func_17(var uParam0)
{
	unk_0x1B3217FCFCCC3FCF(uParam0->f_51[0]);
}

void func_18(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (!unk_0x7F420695E3F776FB(uParam0->f_3, 0))
			{
				unk_0x61BB4B7411E1DF82(uParam0->f_3);
			}
			unk_0xAAA71DD7E9059338(uParam0->f_3, 0);
			unk_0xD414C47AFF81382A(255, uParam0->f_413, joaat("player"));
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xF09E30AF1B8FB379(&(uParam0->f_3));
		}
	}
}

int func_19()
{
	return joaat("taxi");
}

void func_20(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_32(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_31())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_32(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_28(unk_0x259BE71D8A81D4FA())) && !func_25(unk_0x259BE71D8A81D4FA(), 0)) && !func_24()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_28(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_24()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
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
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return BitTest(Global_2621446, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0x206A708429803A39(unk_0xB6B621402486C3E4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		unk_0xA63572E348CC4CFB(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_38(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

bool func_39(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_40()
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 30);
	}
	if (!func_31())
	{
		Global_20383.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20320);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20311);
		}
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return BitTest(Global_1962996, 5);
}

bool func_45()
{
	return BitTest(Global_1962996, 19);
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97614[iVar0 /*17*/] && !Global_97614[iVar0 /*17*/].f_1)
		{
			if (Global_97614[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97614[iVar0 /*17*/].f_5 != 88 && Global_97614[iVar0 /*17*/].f_5 != 89) && Global_97614[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

void func_48()
{
	Global_20591 = 0;
	func_49();
}

void func_49()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

float func_50(int iParam0, int iParam1)
{
	return func_51(iParam0, iParam1, 1);
}

float func_51(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var3 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var3, iParam2);
}

float func_52(struct<3> Param0, int iParam3)
{
	return func_53(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), Param0, iParam3);
}

float func_53(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam4);
}

void func_54(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!unk_0x4FAFF4BCB7633475(uParam1->f_3))
		{
			unk_0x0428AFDCAA63B06E(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_55(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113648.f_19099.f_22[0]++;
			func_56("Fares Completed ++ = ", Global_113648.f_19099.f_22[0]);
			break;
		
		case 1:
			Global_113648.f_19099.f_22[1]++;
			func_56("Fares Failed ++ = ", Global_113648.f_19099.f_22[1]);
			break;
		
		case 2:
			Global_113648.f_19099.f_22[2]++;
			func_56("Fares Accepted ++ ", Global_113648.f_19099.f_22[2]);
			break;
		
		case 3:
			Global_113648.f_19099.f_22[3]++;
			func_56("Fares Expired ++ ", Global_113648.f_19099.f_22[3]);
			break;
		
		case 13:
			Global_113648.f_19099.f_22[13]++;
			func_56("Passengers run ++ = ", Global_113648.f_19099.f_22[13]);
			break;
		
		case 14:
			Global_113648.f_19099.f_22[14]++;
			func_56("Passenger Forced to Pay ++ = ", Global_113648.f_19099.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113648.f_19099.f_22[4])
				{
					Global_113648.f_19099.f_22[4] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_113648.f_19099.f_22[4]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_113648.f_19099.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113648.f_19099.f_22[5] = (Global_113648.f_19099.f_22[5] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_113648.f_19099.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113648.f_19099.f_22[6]++;
			}
			else
			{
				Global_113648.f_19099.f_22[6] = (Global_113648.f_19099.f_22[6] + iParam1);
			}
			func_56("Wanted Levels ++ = ", Global_113648.f_19099.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113648.f_19099.f_22[7] = (Global_113648.f_19099.f_22[7] + iParam1);
			}
			else
			{
				Global_113648.f_19099.f_22[7]++;
			}
			func_56("Wanted Levels Lost = ", Global_113648.f_19099.f_22[7]);
			break;
		
		case 8:
			Global_113648.f_19099.f_22[8]++;
			func_56("Taxis wrecked ++ = ", Global_113648.f_19099.f_22[8]);
			break;
		
		case 9:
			Global_113648.f_19099.f_22[9]++;
			func_56("Horn Honked ++ = ", Global_113648.f_19099.f_22[9]);
			break;
		
		case 10:
			Global_113648.f_19099.f_22[10] = (Global_113648.f_19099.f_22[10] + iParam1);
			func_56("Total Money Earned = ", Global_113648.f_19099.f_22[10]);
			break;
		
		case 11:
			Global_113648.f_19099.f_22[11] = (Global_113648.f_19099.f_22[11] + iParam1);
			func_56("Total Tips Earned = ", Global_113648.f_19099.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113648.f_19099.f_22[12])
			{
				Global_113648.f_19099.f_22[12] = iParam1;
				func_56("New Highest Tip = ", Global_113648.f_19099.f_22[12]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_113648.f_19099.f_22[12]);
			}
			break;
	}
}

void func_56(char* sParam0, int iParam1)
{
}

void func_57(var uParam0)
{
	func_55(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_462(1);
		func_69(15, 1);
	}
	func_67(&(Global_113648.f_19099), 1024);
	if (!func_22(Global_113648.f_19099, 64))
	{
		func_58(func_65(func_66(uParam0)), 0, 0);
	}
}

void func_58(int iParam0, int iParam1, int iParam2)
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
		func_64((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_59();
	}
}

void func_59()
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
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0x8DD7F37773EBD5B9(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x1164A75E490C27B6(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x1164A75E490C27B6(joaat("num_missions_available"), Global_113367, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x4F8678C02360C3D2(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x1164A75E490C27B6(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x1164A75E490C27B6(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_63(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_62() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_60();
				}
			}
		}
	}
}

int func_60()
{
	if (func_61(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_61(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_62()
{
	return Global_32163;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_65(int iParam0)
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

int func_66(var uParam0)
{
	return uParam0->f_411;
}

void func_67(var uParam0, int iParam1)
{
	func_68(uParam0, iParam1);
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_70(iParam0, iParam1);
}

int func_70(int iParam0, int iParam1)
{
	if (func_82(14) && !func_81(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_80(&Global_4542597))
	{
		if (func_78(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_71(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return 0;
	}
	if (func_78(uParam0, iParam1))
	{
		return 0;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	func_74(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_72(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_72(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return 0;
	}
	if (func_78(uParam0, iParam1))
	{
		return 0;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_73(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_73(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_74(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_75(uParam0, iVar0);
		iVar0++;
	}
	func_76(uParam0, (Global_4542596 - 0.5f));
}

void func_75(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_76(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_77(var uParam0)
{
	return uParam0->f_80;
}

bool func_78(var uParam0, int iParam1)
{
	return func_79(uParam0, iParam1) != -1;
}

int func_79(var uParam0, int iParam1)
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

bool func_80(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_81(int iParam0)
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

bool func_82(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_83(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_211() && func_116(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				}
				func_115(uParam0);
				func_20(&(Global_113648.f_19099), 4096);
				func_112(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_114(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xBF3D28CA44F3BE2D(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_111(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_105(uParam1, 0))
			{
				func_84(uParam0);
				func_317(uParam0, 0, 0, 0);
				func_111(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_85(func_103(), 21, iVar0, 0, 0);
		func_55(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0) == 3)
	{
		return;
	}
	if (func_102(iParam0) == 4)
	{
		return;
	}
	func_86(func_102(iParam0), 1, iParam1, iParam2, 0);
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
		unk_0xDF7F16323520B858(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x1164A75E490C27B6(iVar1, iVar0, 1);
	}
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
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
					func_100(99, 1);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_98(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_95(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
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
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_95(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_95(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_94(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_100(95, iParam3);
					break;
				
				case 1:
					func_100(97, iParam3);
					break;
				
				case 2:
					func_100(96, iParam3);
					break;
			}
			func_100(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
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
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_88(iParam0);
	if (Global_43257 == 15)
	{
		func_87(0);
	}
	return 1;
}

void func_87(bool bParam0)
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
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x1164A75E490C27B6(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x1164A75E490C27B6(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_89(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_64(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_64(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_64(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_64(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_92(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_92(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_92(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_92(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_92(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_92(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_91() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_91() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_90(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_90(bool bParam0)
{
	switch (bParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_91()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_93(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2804741 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804741 = 1;
		}
	}
	return iVar0;
}

void func_94(int iParam0)
{
	func_100(93, iParam0);
	func_100(29, iParam0);
	func_100(30, iParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_97(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_97(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_97(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_97(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_96(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_96(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_96(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_96(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_96(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_96(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_91() /*5568*/].f_681.f_10, iParam0);
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_93(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_97(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_98(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_63(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_69(27, 1);
	return 1;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_101()
{
	int iVar0;
	
	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_102(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_103()
{
	func_104();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_104()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_4(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_3(unk_0x4A8C381C258A124D());
			if (func_6(iVar0) && (!func_82(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_6(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

int func_105(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_2)))
	{
		func_109(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x875A214D5EBCA509(2, 201) || uParam0->f_8)
		{
			if (!func_14(&(uParam0->f_5)))
			{
				func_109(&(uParam0->f_5));
				func_108(uParam0, 1051260355);
			}
		}
		if (func_14(&(uParam0->f_5)))
		{
			if (func_107(&(uParam0->f_5)) > 0.33f)
			{
				func_106(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_107(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_14(&(uParam0->f_5)))
		{
			func_109(&(uParam0->f_5));
			func_108(uParam0, 1051260355);
		}
		else if (func_107(&(uParam0->f_5)) > 0.33f)
		{
			func_106(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_107(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_108(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x330108B080A2132F(uParam0->f_9);
	unk_0x74BF156C860580D4(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_109(var uParam0)
{
	func_110(uParam0, 0f);
}

void func_110(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_111(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_112(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x88F483FBD433696A(*uParam0, func_113());
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(iParam9);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB(sParam7);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0xACF853FB3F6EA7D4(uParam6);
	unk_0x511D14ED2DA887E1(uParam5);
	unk_0x511D14ED2DA887E1(iParam4);
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
	func_109(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_113()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_114(var uParam0)
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

void func_115(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_55(11, uParam0->f_56);
	func_55(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_116(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_117(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_107(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_117(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_109(uParam0);
	}
}

void func_118(var uParam0)
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
	if (!func_22(uParam0->f_55, 1))
	{
		func_67(&(uParam0->f_55), 1);
	}
}

void func_119(var uParam0)
{
	func_121();
	unk_0x406CBCEA35499884();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_254(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_254(uParam0, 103, 1, 0, 0);
		}
		func_120(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_254(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_254(uParam0, 102, 1, 0, 0);
	}
	func_317(uParam0, 16, 4f, 0);
}

void func_120(int iParam0)
{
	Global_112358.f_221 = iParam0;
}

void func_121()
{
	Global_20591 = 0;
	func_122();
}

void func_122()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_22736 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

void func_123(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_124(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_55(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_55(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_124(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_126(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_129();
				return 1;
			}
			else if (func_127(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, 256);
				}
				else
				{
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, 0);
				}
			}
			unk_0xE456FB21FF21AE99(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_127(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam5)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
	func_128(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_29) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_128(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_129()
{
	if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
	{
		unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	}
}

var func_130(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_131(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam3);
	return uVar0;
}

float func_131(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_132(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
			{
				if (unk_0xA6534E6C7AE314D6(iParam1))
				{
					if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
					{
						if (Local_423.f_109 == 0)
						{
							func_361(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x4FAFF4BCB7633475(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
				{
					unk_0x974022927CB47E68(iLocal_890);
					unk_0xD844F5E50DAB6FF7(iLocal_890, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					unk_0x44FB298D6382876D(iLocal_890, 1);
				}
				func_361(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
				{
					unk_0x974022927CB47E68(Local_853.f_2);
					unk_0xD844F5E50DAB6FF7(Local_853.f_2, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					unk_0x44FB298D6382876D(Local_853.f_2, 1);
				}
				func_361(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
		{
			if ((unk_0x690AB6F5DB2A3A54(iParam1, joaat("weapon_stungun"), 0) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 2)) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 1))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
				{
					unk_0x974022927CB47E68(iLocal_890);
					unk_0xD844F5E50DAB6FF7(iLocal_890, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					unk_0x44FB298D6382876D(iLocal_890, 1);
				}
				if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
				{
					unk_0x974022927CB47E68(Local_853.f_2);
					unk_0xD844F5E50DAB6FF7(Local_853.f_2, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					unk_0x44FB298D6382876D(Local_853.f_2, 1);
				}
				func_361(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
			}
		}
	}
}

void func_133(var uParam0, var uParam1)
{
	unk_0x2F0966A034F5ADC6(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_134()
{
	struct<3> Var0;
	
	func_154();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_150(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_890))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_890))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_149(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x1DD05E817C89C737();
				func_147(&uLocal_1082);
				func_146(&Local_1052, -1, 1);
				func_251(Local_958, 0, 15f);
				func_251(Local_961, 0, 15f);
				func_145(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_144();
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_143("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_116(&Local_423, 19) > 0.5f)
			{
				func_142(0, 0, 1);
				unk_0x60040CDD28AA1BC3(Local_958, 30f, 0, 0, 0, 0, 0, 0, 0);
				unk_0x60040CDD28AA1BC3(Local_961, 30f, 0, 0, 0, 0, 0, 0, 0);
				unk_0x55F7AC4B2B875901(Local_958, 30f, 0);
				unk_0x55F7AC4B2B875901(Local_961, 30f, 0);
				func_140(Local_958, 1114636288, 1);
				func_140(Local_961, 1114636288, 1);
				unk_0xA63572E348CC4CFB(Local_946, Local_949, 0, 1);
				func_254(&Local_423, 35, 1, 1, 0);
				unk_0x1761457F86AD0EE2(Local_423.f_0, func_139(0));
				unk_0x5E5CEC33463AD803(Local_423.f_0, func_138(0), 2);
				unk_0x58BDA5D9262F5D30(Local_423.f_0, 44.5167f);
				unk_0x2A09425009DAD0F5(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x4CBC5D1BC117616B(Local_423.f_0, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
				{
					unk_0xB2BD5837A8D3CEDA(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(Local_853.f_3, fLocal_971);
					if (unk_0xC283DA397F6D065D(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0x653B8254D6830E88(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
					{
						unk_0x43E9B2BD3668B432(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_116(&Local_423, 19) > 5f)
			{
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_116(&Local_423, 19) > 4.7f)
			{
				if (func_137())
				{
					if (!iLocal_915)
					{
						unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
			{
				unk_0xB2BD5837A8D3CEDA(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_853.f_3, fLocal_974);
				unk_0x1D2DAF2A41FFC4A0(Local_853.f_3);
			}
			func_317(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0xD9F5E1FEFD1329E4(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0x10B228D2FDB7AF16(800);
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
				{
					unk_0xB2BD5837A8D3CEDA(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(Local_853.f_3, fLocal_974);
					unk_0x1D2DAF2A41FFC4A0(Local_853.f_3);
					if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
					{
						unk_0x19626F992DC71FB9(Local_853.f_2);
						unk_0xB2BD5837A8D3CEDA(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(Local_853.f_2, -49.27436f);
					}
				}
				unk_0x85E6A1E36B5E2E4D(Local_423.f_0, 0);
				unk_0x85E6A1E36B5E2E4D(uLocal_422, 0);
				func_135(1, 1, 1);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				while (!unk_0x9390801B06EE998F())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_208(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_135(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_23(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
	}
	func_136(23, 0);
}

void func_136(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_32412, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_32412, iParam0);
	}
}

int func_137()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)
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

Vector3 func_139(int iParam0)
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

void func_140(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0x813ADF2A2A03F440(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_38(Var1, func_141(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_38(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0xD1B0AF388B711EBC(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x33B6B083EA6305A5(Var7, Var4, 1);
	}
}

float func_141(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_136(23, 1);
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1DD05E817C89C737() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1DD05E817C89C737();
}

void func_144()
{
	var uVar0;
	
	iLocal_890 = unk_0xB1DBFEB95C0EFB88(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0x36A20106D0B42723(iLocal_890, 5);
	unk_0xD1C578C204015E1F(iLocal_890, 3, 1, 2, 0);
	unk_0xD1C578C204015E1F(iLocal_890, 4, 0, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_890, 2, 1, 2, 0);
	unk_0x0428AFDCAA63B06E(iLocal_890, 20, 1);
	func_8(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
	{
		unk_0x5C96CEA06531AB03(iLocal_890, fLocal_970);
		unk_0xD0557B139A542F12(&uVar0);
		unk_0xB5396F1FB088FE38(&uVar0);
		unk_0x0FD8B5F4BB15CD71(0, 2500);
		unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0x30FAA55EAF29F9BE(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0x93C0674FC00824D0(uVar0);
		unk_0x4BD42B0527065BB6(iLocal_890, uVar0);
		unk_0xD0557B139A542F12(&uVar0);
	}
}

void func_145(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x78411E34CF90EA8C(*uParam0))
	{
		*uParam0 = unk_0x96A32328480B485C(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_146(var uParam0, int iParam1, bool bParam2)
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

void func_147(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_148(), 24);
		iVar0++;
	}
	unk_0x406CBCEA35499884();
	func_48();
}

var func_148()
{
	var uVar0;
	
	return uVar0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0.95f || unk_0x032CEF99C0D59B73(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0)
{
	if (func_153() && unk_0x1DD05E817C89C737() >= iParam0 + 1000)
	{
		unk_0x8F72AF14CE5AACE4(500);
		while (!unk_0x15CCE8886267624F())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_41(0);
		func_151();
		return 1;
	}
	return 0;
}

void func_151()
{
	Global_20591 = 0;
	func_152();
}

void func_152()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

int func_153()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_154()
{
	if (func_35())
	{
		unk_0xD13237BC328B938E("appInternet");
	}
	if (func_34())
	{
		unk_0xD13237BC328B938E("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

int func_155()
{
	if (!unk_0x6252BC0DD8A320DB(iLocal_887))
	{
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("MOVE_DUCK_FOR_COVER"))
	{
		func_143("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_156()
{
	unk_0xEC9DAA34BBB4658C(iLocal_887);
	unk_0x80813AC549A1E8AE("MOVE_DUCK_FOR_COVER");
	unk_0x80813AC549A1E8AE(&cLocal_980);
	unk_0x80813AC549A1E8AE(&cLocal_996);
	unk_0x80813AC549A1E8AE(&cLocal_1012);
	unk_0x80813AC549A1E8AE(&cLocal_1028);
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2793046.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_158(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_158(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_158(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_159()
{
	if (func_116(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_188(&Local_423, &Local_853, (unk_0x1DD05E817C89C737() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(Local_423.f_4, 0))
		{
			if (unk_0x5105BE70DEF1F5FB(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0xE5EE5C9DDF05D925(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_160(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_133(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
			{
				if (!unk_0x050D073F91C5243C(Local_853.f_3) && IntToFloat((unk_0x1DD05E817C89C737() - iLocal_975)) > unk_0xE2E30D829A6B8F9E(120, "txm_fc_h1_"))
				{
					unk_0xCF6CC9EA0D2EFE23(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_160(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_161(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_161(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_162(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_162(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_158(iVar0))
	{
		func_187();
	}
	if (func_186(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_181(uParam0, bParam7, bParam9, 0))
			{
				func_178(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_167(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam8)
						{
							if (!func_158(iVar0))
							{
								func_166(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_165(1);
								}
							}
						}
					}
				}
			}
			else if (func_167(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam8)
					{
						if (!func_158(iVar0))
						{
							func_166(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam5))
			{
				if (func_158(sParam5))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_157(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_157(uParam0, iVar0, 1);
				}
			}
			if (!func_181(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
				{
					func_163(uParam0);
				}
			}
		}
	}
	else
	{
		func_157(uParam0, iVar0, 0);
	}
}

void func_163(var uParam0)
{
	if (func_186(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_164(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_165(bool bParam0)
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_166(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_167(char* sParam0)
{
	if (!func_168(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_158(sParam0)) || func_158("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_165(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_176() || func_175(Global_4718592.f_166301)) || func_174())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_173(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_172(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_169(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_169(int iParam0)
{
	if (iParam0 != func_171())
	{
		if (func_170(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_170(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_170(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	return -1;
}

int func_172(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
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
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
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

var func_174()
{
	return Global_2683864.f_19;
}

bool func_175(int iParam0)
{
	return iParam0 == 51;
}

var func_176()
{
	return Global_2683864.f_18;
}

bool func_177()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

void func_178(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		func_157(uParam0, 0, 0);
	}
	if (func_39(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_179())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
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
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_179()
{
	return func_180(unk_0x259BE71D8A81D4FA());
}

int func_180(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_185(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_164(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_185(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
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
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_184(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_184(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_185(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_183(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_164(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_168(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_187();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_182(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_183(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_184(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_168(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 4);
}

void func_188(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(uParam1->f_2, unk_0x4A8C381C258A124D(), 0))
		{
			func_361(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_361(uParam0, "Followee died", 13);
	}
	if ((unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 && unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0)) && !unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
	{
		unk_0xB3DA477F44309390(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x44FB298D6382876D(uParam1->f_2, 1);
		func_361(uParam0, "Player went wanted", 4);
	}
	func_197(uParam0, uParam1);
	if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (bParam3)
		{
			if (func_196(&(uParam1->f_3)))
			{
				unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_195(&(uParam1->f_3)))
			{
				unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam1->f_3, 1), func_194(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_193(&(uParam1->f_3)))
			{
				unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0x4C7724D572378B05(uParam1->f_3) < uParam1->f_15 || unk_0x9B3D4335E0EDB0BE(uParam1->f_3, unk_0x4A8C381C258A124D(), 1)) || unk_0x31B58D7972181BFA(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x9B3D4335E0EDB0BE(uParam1->f_3, unk_0x4A8C381C258A124D(), 0))
			{
				func_361(uParam0, "Taxi shot up the car", 12);
			}
			if (func_116(uParam0, 13) > 5f)
			{
				func_192(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0x4C7724D572378B05(uParam1->f_3);
				uParam1->f_5 = unk_0x8D91ADE44AC79BC9(uParam1->f_3);
				uParam1->f_16 = unk_0x31B58D7972181BFA(uParam1->f_3);
			}
		}
		if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_254(uParam0, 143, 0, 0, 0);
				func_361(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_191(&(uParam0->f_409), unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), unk_0xD1A6A821F5AC81DB(uParam1->f_3, 1), 0) == -1 && func_51(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_116(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_317(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
						{
							unk_0xB3DA477F44309390(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x44FB298D6382876D(uParam1->f_2, 1);
						}
						func_361(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(uParam0, 6, 1);
					}
					else
					{
						func_190(uParam0, 1, 1);
					}
					func_254(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xAD915B5E38F323E5(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_317(uParam0, 8, 0, 0);
			}
			else if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_254(uParam0, 143, 0, 0, 0);
				func_361(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_51(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_196(&(uParam1->f_3))) || (func_51(uParam0->f_4, uParam1->f_3, 1) < 13f && func_193(&(uParam1->f_3)))) || (func_51(uParam0->f_4, uParam1->f_3, 1) < func_194(&(uParam1->f_3)) && func_195(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_189(uParam0, 21))
			{
				if ((unk_0xAD915B5E38F323E5(uParam0->f_4, uParam1->f_3, 17) && func_116(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_317(uParam0, 8, 0, 0);
					if (!func_189(uParam0, 21))
					{
						func_317(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_211())
						{
							if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
							{
								unk_0xB3DA477F44309390(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x44FB298D6382876D(uParam1->f_2, 1);
							}
							func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_151();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(uParam0, 3, 1);
					}
					else
					{
						func_190(uParam0, 2, 1);
					}
					if (func_51(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_211())
						{
							func_254(uParam0, 143, 0, 0, 0);
							func_48();
							if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
							{
								unk_0xB3DA477F44309390(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x44FB298D6382876D(uParam1->f_2, 1);
							}
							func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_151();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_254(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0x4C7724D572378B05(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_189(uParam0, 21))
			{
				func_208(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_51(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_317(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_51(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xAD915B5E38F323E5(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_317(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_190(uParam0, 8, 1);
					func_254(uParam0, 13, 1, 0, 0);
					func_317(uParam0, 8, 0, 0);
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
					if (func_116(uParam0, 8) > 15f && !func_211())
					{
						func_190(uParam0, 9, 1);
						func_254(uParam0, 13, 1, 0, 0);
						func_317(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_189(var uParam0, int iParam1)
{
	return func_14(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_190(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_191(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x120E577522852984(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_192(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_211())
		{
			func_279(uParam0, 0, 1);
			if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam1->f_2, 0))
			{
				unk_0xB3DA477F44309390(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x44FB298D6382876D(uParam1->f_2, 1);
			}
			func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_151();
		}
	}
	else
	{
		func_317(uParam0, 13, 0, 0);
		unk_0xE4DC7B3DD712372B(uParam1->f_3);
		func_190(uParam0, 10, 1);
		func_279(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_193(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		if (unk_0x1CE980E99A2A6FB6(*uParam0) || unk_0xDF93B3CFAC96698F(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_194(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		fVar1 = unk_0xDF93B3CFAC96698F(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_195(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		if (unk_0xDF93B3CFAC96698F(*uParam0) >= 4f && unk_0xDF93B3CFAC96698F(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_196(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		if (unk_0xDF93B3CFAC96698F(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(var uParam0, var uParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_51(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_198(uParam0) == 13)
				{
					func_121();
				}
			}
		}
		if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_198(uParam0) == 13)
				{
					func_121();
				}
			}
		}
	}
}

int func_198(var uParam0)
{
	return uParam0->f_416;
}

void func_199(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_211())
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_53(iParam0, Param1, 1) < fParam4)
			{
				if (func_201(uParam5))
				{
					func_200(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_201(var uParam0)
{
	return *uParam0 == 0;
}

void func_202(var uParam0)
{
	if (func_205(uParam0))
	{
		func_203(uParam0);
	}
}

void func_203(var uParam0)
{
	if (unk_0xC47E3FF56898A28B() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xE1799BB6E4C1CDFB();
			func_208(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_116(uParam0, 20) > 3f)
				{
					func_254(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_116(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_254(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_116(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_254(uParam0, 85, 1, 0, 0);
						func_208(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_116(uParam0, 20) > 8f)
				{
					func_254(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_189(uParam0, 22))
				{
					func_204(uParam0, 22);
				}
			}
			if (func_189(uParam0, 22) && func_116(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_254(uParam0, 84, 1, 0, 0);
						func_208(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_254(uParam0, 85, 1, 0, 0);
						func_208(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_204(var uParam0, int iParam1)
{
	func_117(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_205(var uParam0)
{
	return uParam0->f_120;
}

int func_206(int iParam0, var uParam1)
{
	if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
	{
		if (unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
				{
					unk_0xE20A252886E4FE1D(unk_0xB6B621402486C3E4(), 1, 0);
					unk_0x42C9A22D6724F283(unk_0xB6B621402486C3E4(), 0);
					if (unk_0xC450B06E5AAA0985(uParam1))
					{
						unk_0xFE54B8568B2ABD12(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_207(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			return 1;
		}
	}
	return 0;
}

void func_208(var uParam0, int iParam1, bool bParam2)
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
			func_106(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_106(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_209(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_210()
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
	unk_0x693ACD1AA0BDB375(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_211()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	func_154();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_150(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_149(1, 1, 1))
			{
				iLocal_897 = unk_0x1DD05E817C89C737();
				func_142(256, 0, 1);
				func_147(&uLocal_1082);
				func_146(&Local_1052, 2, 0);
				if (func_218(&Local_853, Local_934, fLocal_973))
				{
					unk_0xD1B0AF388B711EBC(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_145(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_254(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_116(&Local_423, 19) > 3f)
			{
				if (!unk_0x4FAFF4BCB7633475(Local_853.f_2))
				{
					unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
					unk_0x974022927CB47E68(Local_853.f_2);
					if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
					{
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0xEBA229B2E0BB05E0(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0x10425721983AE158(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
						unk_0x0B74F181ADFC39BF(Local_853.f_3, 1);
					}
				}
				unk_0x2B083B6FDD0231F9(unk_0x4A8C381C258A124D(), Local_423.f_17);
				unk_0x1761457F86AD0EE2(Local_423.f_0, func_217(0));
				unk_0x5E5CEC33463AD803(Local_423.f_0, func_216(0), 2);
				unk_0x58BDA5D9262F5D30(Local_423.f_0, 17.2f);
				unk_0x2A09425009DAD0F5(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x4CBC5D1BC117616B(Local_423.f_0, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0x96A32328480B485C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0x1761457F86AD0EE2(uLocal_422, func_217(4));
			unk_0x5E5CEC33463AD803(uLocal_422, func_216(0), 2);
			unk_0x58BDA5D9262F5D30(uLocal_422, 17.2f);
			unk_0x2A09425009DAD0F5(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0xB56F35D8A770F80F(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_116(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_198(&Local_423) > 10)
				{
					func_213();
				}
				iLocal_912 = 1;
			}
			if (func_116(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0x1761457F86AD0EE2(Local_423.f_0, func_217(2));
				unk_0xD6B4D02A102485DC(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0x58BDA5D9262F5D30(Local_423.f_0, 35f);
				unk_0x2A09425009DAD0F5(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x4CBC5D1BC117616B(Local_423.f_0, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0x1761457F86AD0EE2(uLocal_422, func_217(2));
			unk_0xD6B4D02A102485DC(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0x58BDA5D9262F5D30(uLocal_422, 45f);
			unk_0x2A09425009DAD0F5(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0xB56F35D8A770F80F(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0) && !unk_0x1C2F771CDC87A3A5(Local_853.f_3, 0))
			{
				if (!unk_0x7F420695E3F776FB(Local_853.f_2, 0))
				{
					unk_0x73CAFD2038E812B3(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0x93C337B66C95C99B(Local_853.f_3, 10f);
				func_109(&(Local_853.f_27));
				func_317(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_213();
				}
			}
			break;
		
		case 11:
			if ((unk_0x1DD05E817C89C737() % 1000) < 50)
			{
			}
			if (unk_0xE10356B235A70E70(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0x1F3E4227575DF103(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_116(&Local_423, 19) > 4f)
			{
				unk_0x10B228D2FDB7AF16(800);
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				func_109(&(Local_853.f_27));
				unk_0x85E6A1E36B5E2E4D(Local_423.f_0, 0);
				unk_0x85E6A1E36B5E2E4D(uLocal_422, 0);
				func_135(1, 1, 1);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				func_208(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_116(&Local_423, 19) > 3.7f)
			{
				if (func_137())
				{
					if (!iLocal_914)
					{
						unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
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

void func_213()
{
	bLocal_901 = true;
	if (!unk_0x4FAFF4BCB7633475(Local_853.f_2))
	{
		if (unk_0xD9F5E1FEFD1329E4(Local_853.f_3, 0))
		{
			if (unk_0xCECDBB848D53DEB2(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0xB2BD5837A8D3CEDA(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0x3CEA1FD137ACE2D9(Local_853.f_2, Local_853.f_30);
				unk_0xBE8796DB2B90A437(Local_853.f_2, 1, 1);
				unk_0xBE8796DB2B90A437(Local_853.f_2, 6, 0);
				unk_0xBE8796DB2B90A437(Local_853.f_2, 17, 0);
				unk_0xBE8796DB2B90A437(Local_853.f_2, 3, 0);
				unk_0x25DBF9F9C6BDFFEA(Local_853.f_2, 500f);
				unk_0x35365D1E3ADB7109(Local_853.f_2, 500f);
				unk_0xC45887CFF81A1950(Local_853.f_2, 500f);
				unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
				unk_0xF88FC425EC7D675D(Local_853.f_3, 500);
				unk_0xF88FC425EC7D675D(Local_853.f_2, 500);
				unk_0x788F35D395511DFE(Local_853.f_3, 1, 1);
				unk_0x788F35D395511DFE(Local_853.f_2, 1, 1);
				if (!unk_0xC450B06E5AAA0985(Local_853.f_4))
				{
					Local_853.f_4 = func_214(Local_853.f_3, 0, 0);
				}
				unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
				unk_0x88556DA0593A0748(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0x206AB1458FD9522F(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x1DD05E817C89C737();
			}
		}
	}
}

int func_214(int iParam0, bool bParam1, bool bParam2)
{
	return func_215(iParam0, !bParam1, bParam2);
}

int func_215(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_131(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_131(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_131(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_216(int iParam0)
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

Vector3 func_217(int iParam0)
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

int func_218(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_2))
	{
		uParam0->f_2 = unk_0xB1DBFEB95C0EFB88(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_8(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x397CF4F4C8B17365(uParam0->f_2, "TaxiJames");
	if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
	{
		unk_0x0428AFDCAA63B06E(iLocal_890, 20, 1);
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_2, 0))
	{
		unk_0xD1C578C204015E1F(uParam0->f_2, 0, 1, 0, 0);
		unk_0xD1C578C204015E1F(uParam0->f_2, 3, 0, 0, 0);
		unk_0xD1C578C204015E1F(uParam0->f_2, 4, 0, 1, 0);
		unk_0xD1C578C204015E1F(uParam0->f_2, 8, 0, 0, 0);
		unk_0xD1C578C204015E1F(uParam0->f_2, 11, 0, 1, 0);
		unk_0x3CEA1FD137ACE2D9(uParam0->f_2, uParam0->f_30);
		unk_0xBE8796DB2B90A437(uParam0->f_2, 1, 1);
		unk_0xBE8796DB2B90A437(uParam0->f_2, 6, 1);
		unk_0xBE8796DB2B90A437(uParam0->f_2, 17, 1);
		unk_0xBE8796DB2B90A437(uParam0->f_2, 3, 0);
		unk_0x25DBF9F9C6BDFFEA(uParam0->f_2, 300f);
		unk_0x35365D1E3ADB7109(uParam0->f_2, 300f);
		unk_0xC45887CFF81A1950(uParam0->f_2, 300f);
		unk_0xAAA71DD7E9059338(uParam0->f_2, 1);
	}
	return 1;
}

int func_219(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69()) && !unk_0x78ABC1D11B34F324()) && !unk_0x15CCE8886267624F()) && !uParam0->f_142)
	{
		if (func_231(uParam0))
		{
			func_133(uParam0, &(uParam0->f_43));
			func_226(uParam0);
			func_225(uParam0);
			func_202(uParam0);
			func_224(uParam0, fParam2, fParam3);
			func_222(uParam0);
			return func_220(uParam0, iParam1);
		}
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
{
	if (func_66(uParam0) == 2)
	{
		if (unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_221(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_149(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			return func_126(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_149(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
	{
		return func_126(uParam0, 1, iParam1);
	}
	return 0;
}

float func_221(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam4);
}

void func_222(var uParam0)
{
	float fVar0;
	
	if ((func_223(uParam0) && func_22(uParam0->f_81, 67108864)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
	{
		if ((unk_0x1DD05E817C89C737() - iLocal_97) >= 10000)
		{
			fVar0 = func_52(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x1DD05E817C89C737();
		}
		if (iLocal_96 >= 2 && !func_211())
		{
			func_254(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x1DD05E817C89C737() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x1DD05E817C89C737() % 4000) < 50)
		{
			if (!func_223(uParam0))
			{
			}
			if (!func_22(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_223(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(var uParam0, float fParam1, float fParam2)
{
	if (func_223(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((unk_0x1CE980E99A2A6FB6(uParam0->f_4) || unk_0xDF93B3CFAC96698F(uParam0->f_4) < 3f) && func_207(uParam0))
		{
			if (!func_189(uParam0, 2))
			{
				func_204(uParam0, 2);
			}
			else if (func_223(uParam0))
			{
				if (func_116(uParam0, 2) > fParam1 && !func_189(uParam0, 14))
				{
					if (func_35())
					{
						func_254(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_254(uParam0, 48, 1, 0, 0);
					}
					func_317(uParam0, 2, 0, 0);
					if (func_189(uParam0, 10))
					{
						func_317(uParam0, 10, 0, 0);
					}
				}
				if (!func_189(uParam0, 3))
				{
					func_317(uParam0, 3, 0, 0);
				}
				else if (func_116(uParam0, 3) >= fParam2)
				{
					func_208(uParam0, 3, 0);
					func_361(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_189(uParam0, 2))
			{
				func_208(uParam0, 2, 0);
			}
			if (func_189(uParam0, 3))
			{
				func_208(uParam0, 3, 0);
			}
		}
	}
}

void func_225(var uParam0)
{
	if (unk_0x692665178199313C(unk_0xB6B621402486C3E4()) && !func_22(uParam0->f_44, 2))
	{
		func_67(&(uParam0->f_44), 2);
	}
	else if (!unk_0x692665178199313C(unk_0xB6B621402486C3E4()) && func_22(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_55(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_254(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_226(var uParam0)
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					if (func_116(uParam0, 9) > 1f)
					{
						func_230(uParam0, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
						if (uParam0->f_410 != 22)
						{
							func_254(uParam0, 50, 1, 1, 0);
						}
						func_317(uParam0, 9, 0, 0);
						if (unk_0xC450B06E5AAA0985(uParam0->f_9))
						{
							unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
							unk_0xBC64B805EE071A37(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_211() && func_116(uParam0, 9) > 4f)
				{
					func_254(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_229("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_254(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), func_228(uParam0)))
				{
					func_230(uParam0, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
					func_55(6, 0);
				}
				if (!func_227(uParam0))
				{
					if (!unk_0x1F9EB85925C3ECD7())
					{
						if (func_116(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_254(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					if (func_229("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x406CBCEA35499884();
					}
					if (unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_211())
				{
					if (uParam0->f_410 != 22)
					{
						func_254(uParam0, 53, 1, 0, 1);
					}
					func_55(7, func_228(uParam0));
					func_230(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_211())
				{
					func_208(uParam0, 9, 0);
					func_317(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_227(var uParam0)
{
	return uParam0->f_110;
}

int func_228(var uParam0)
{
	return uParam0->f_106;
}

bool func_229(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_230(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_231(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (!unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_3))
			{
				func_361(uParam0, "Passenger left car.", 9);
			}
			else if (func_241(uParam0))
			{
				if (func_229("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x4E8E15513E171E54("TAXI_OBJ_PICKUP");
				}
				if (unk_0x9390801B06EE998F())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x1DD05E817C89C737() % 1000) < 50)
				{
				}
				func_232(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)
{
	func_240(uParam0, uParam0->f_3);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_189(uParam0, 14))
			{
				if (func_211())
				{
					func_239(1);
				}
				func_190(uParam0, 11, 1);
				func_234(uParam0, 1);
				func_317(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_223(uParam0))
				{
					if ((unk_0x1DD05E817C89C737() % 1000) < 50)
					{
					}
					if (unk_0x7F420695E3F776FB(uParam0->f_2, 0))
					{
						if (func_116(uParam0, 15) > 5f)
						{
							func_317(uParam0, 15, 0f, 1);
						}
					}
					if (func_116(uParam0, 14) > 20f)
					{
						func_361(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_116(uParam0, 14) > 20f)
				{
					if (func_233(uParam0->f_4, 1) > 40f)
					{
						func_361(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_361(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_233(int iParam0, int iParam1)
{
	return func_51(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

void func_234(var uParam0, bool bParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_8))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
				unk_0xBC64B805EE071A37(uParam0->f_8, 0);
				func_238(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xC450B06E5AAA0985(uParam0->f_9))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
				unk_0xBC64B805EE071A37(uParam0->f_9, 0);
				unk_0x406CBCEA35499884();
				if (func_223(uParam0))
				{
					func_254(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_238(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_235(uParam0, 0, 0);
		}
		else if (unk_0xC450B06E5AAA0985(uParam0->f_10))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			if (unk_0xC450B06E5AAA0985(uParam0->f_8))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_8, 255);
				unk_0xBC64B805EE071A37(uParam0->f_8, 1);
			}
			else if (unk_0xC450B06E5AAA0985(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
					unk_0xBC64B805EE071A37(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
					unk_0xBC64B805EE071A37(uParam0->f_9, 1);
				}
			}
			unk_0x406CBCEA35499884();
		}
	}
}

void func_235(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_442(uParam0);
	}
	if (!unk_0xC450B06E5AAA0985(uParam0->f_10))
	{
		uParam0->f_10 = func_215(uParam0->f_4, 1, 0);
		unk_0x594D5D0D7071B0DE(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xBC64B805EE071A37(uParam0->f_10, 1);
		func_236(uParam0);
		if (bParam2)
		{
			unk_0x406CBCEA35499884();
			func_254(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_236(var uParam0)
{
	func_317(uParam0, 14, 0, 0);
	func_237();
}

void func_237()
{
	int iVar0;
	
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_238(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x406CBCEA35499884();
		func_254(uParam0, iParam3, 1, 0, 0);
		func_67(uParam1, iParam2);
	}
}

void func_239(int iParam0)
{
	Global_22736 = iParam0;
}

void func_240(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam1))
		{
			if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
			{
				if ((unk_0x690AB6F5DB2A3A54(iParam1, joaat("weapon_stungun"), 0) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 2)) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 1))
				{
					func_361(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
			}
		}
	}
}

int func_241(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_189(uParam0, 14))
			{
				func_242(uParam0);
			}
			func_234(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0)
{
	func_208(uParam0, 14, 0);
	func_208(uParam0, 15, 0);
	func_244();
	if (func_243())
	{
		func_239(0);
	}
}

int func_243()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_244()
{
	var uVar0;
	
	uVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_245(var uParam0, var uParam1)
{
	func_132(uParam0, uParam1->f_2, 1, 1);
	if (unk_0xD9F5E1FEFD1329E4(uParam1->f_3, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(uParam1->f_3, unk_0x4A8C381C258A124D(), 1))
		{
			if (!func_211())
			{
				func_361(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_151();
			}
		}
	}
	else if (!func_211())
	{
		func_361(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_151();
	}
}

int func_246(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0x5779387E956077A6(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1, 0);
	unk_0xCCA6D8A84EE8C88A(uParam0->f_1, 1);
	unk_0x55098D9E9AD58806(uParam0->f_1);
	uLocal_417[0] = unk_0x5779387E956077A6(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1, 0);
	uLocal_417[1] = unk_0x5779387E956077A6(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1, 0);
	uLocal_417[2] = unk_0x5779387E956077A6(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1, 0);
	unk_0x0B74F181ADFC39BF(uLocal_417[0], 2);
	unk_0x0B74F181ADFC39BF(uLocal_417[1], 2);
	unk_0x0B74F181ADFC39BF(uLocal_417[2], 2);
	unk_0x3FEAE59CDE6D3946(uLocal_417[0], "BRAVEST");
	unk_0x3FEAE59CDE6D3946(uLocal_417[1], "BOLDEST");
	unk_0x3FEAE59CDE6D3946(uLocal_417[2], "BADDEST");
	unk_0xD25E9BDC14A0B649(uParam0->f_3, 800, 0);
	unk_0x3FEAE59CDE6D3946(uParam0->f_3, "PUSSYWAG");
	unk_0x3B1F6012B676860B(uParam0->f_3, 1);
	unk_0xD45558BDBDE86734(uParam0->f_3, 1);
	uParam0->f_15 = unk_0x4C7724D572378B05(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x1F7539C841C2A71F(uParam0->f_3, 1);
	func_251(Local_423.f_14, 1, 1114636288);
	func_251(Local_958, 1, 15f);
	func_251(Local_961, 1, 15f);
	unk_0x0B74F181ADFC39BF(uParam0->f_3, 2);
	return 1;
}

int func_247()
{
	if (!unk_0x6252BC0DD8A320DB(Local_853.f_0))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_853.f_1))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(iLocal_888))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(iLocal_889))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x266D9DB5FCE4003B(120, "txm_fc_h1_"))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x266D9DB5FCE4003B(0, "taxi_oj_fc3"))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xA08EEC7306CF6198(&cLocal_976))
	{
		func_143("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_248(var uParam0, var uParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_189(uParam0, 14))
			{
				if (unk_0xC450B06E5AAA0985(*uParam1) && unk_0xF03FBAFA0284124E(*uParam1) > 0)
				{
					unk_0xF42EBD7CD0682A8B(*uParam1, 0);
				}
				func_235(uParam0, 0, 0);
				func_254(uParam0, 2, 1, 0, 0);
			}
			else if (func_116(uParam0, 14) > 20f)
			{
				func_361(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_189(uParam0, 14))
			{
				func_317(uParam0, 2, 0, 0);
				func_242(uParam0);
			}
			if (unk_0xC450B06E5AAA0985(uParam0->f_10))
			{
				unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			}
			if ((unk_0xC450B06E5AAA0985(*uParam1) && unk_0xF03FBAFA0284124E(*uParam1) < 255) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
			{
				unk_0xF42EBD7CD0682A8B(*uParam1, 255);
				unk_0xBC64B805EE071A37(*uParam1, 1);
			}
		}
	}
}

void func_249(var uParam0)
{
	func_250(uParam0, 1000);
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x19626F992DC71FB9(uParam0->f_3);
		unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
	}
	func_151();
	func_242(uParam0);
}

void func_250(var uParam0, int iParam1)
{
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xE37AF9002E782BA0(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	}
}

void func_251(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_38(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_38(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xD1B0AF388B711EBC(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x33B6B083EA6305A5(Var0, Var3, 1);
		unk_0x93586F94C370857F();
	}
}

void func_252()
{
	func_67(&(Local_423.f_55), 2);
	func_67(&(Local_423.f_55), 4);
	func_67(&(Local_423.f_55), 16);
	func_67(&(Local_423.f_55), 64);
	func_67(&(Local_423.f_55), 256);
	func_67(&(Local_423.f_55), 512);
	func_67(&(Local_423.f_55), 1024);
	func_67(&(Local_423.f_55), 2048);
	func_67(&(Local_423.f_55), 1073741824);
	func_67(&(Local_423.f_55), 8388608);
	func_67(&(Local_423.f_55), 33554432);
	func_67(&(Local_423.f_55), 16777216);
	func_67(&(Local_423.f_55), 4096);
	func_67(&(Local_423.f_100), 8);
	func_67(&(Local_423.f_100), 2048);
	func_67(&(Local_423.f_100), 256);
	func_67(&uLocal_1125, 2);
}

void func_253(var uParam0)
{
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	func_250(uParam0, 1000);
}

void func_254(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_317(uParam0, 16, 4f, 0);
		if (func_255(uParam0))
		{
			func_48();
		}
	}
	func_279(uParam0, iParam2, bParam3);
}

int func_255(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_211())
	{
		Var6 = { func_257() };
		if (!unk_0xD6F9DEE4765092A9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x1B79E937E91F40C3(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_256(&Var0);
			if (unk_0x1B79E937E91F40C3(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_256(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_257()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_258(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if ((unk_0x9D6DF8F3584AAC2B(uParam0->f_3) && (unk_0x1DD05E817C89C737() - iLocal_89) > 500) || unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_259()
{
	unk_0xEC9DAA34BBB4658C(Local_853.f_0);
	unk_0xEC9DAA34BBB4658C(Local_853.f_1);
	unk_0xEC9DAA34BBB4658C(iLocal_888);
	unk_0xEC9DAA34BBB4658C(iLocal_889);
	unk_0xD772E6694B8472A6(120, "txm_fc_h1_");
	unk_0xD772E6694B8472A6(0, "taxi_oj_fc3");
	unk_0xD04A772C411165F2(&cLocal_976);
	unk_0x80813AC549A1E8AE("veh@truck@ds@base");
}

int func_260(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x1DD05E817C89C737() % 1000) < 50)
			{
			}
			func_232(uParam0, 1);
			if (func_33())
			{
				unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
			}
			if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 1 || unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 0)
			{
				unk_0x19626F992DC71FB9(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), 0))
		{
			func_277(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xD0557B139A542F12(&uVar3);
				unk_0xB5396F1FB088FE38(&uVar3);
				unk_0xA966E518B752B92A(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x0E95B96CFEFE7B61(0, uParam0->f_4, 0);
				unk_0x93C0674FC00824D0(uVar3);
				unk_0x4BD42B0527065BB6(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_189(uParam0, 14))
			{
				func_242(uParam0);
				func_234(uParam0, 0);
			}
			if (func_189(uParam0, 9))
			{
				func_208(uParam0, 9, 0);
				unk_0x406CBCEA35499884();
				if (unk_0xC450B06E5AAA0985(uParam0->f_8))
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_8, 255);
					unk_0xBC64B805EE071A37(uParam0->f_8, 1);
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xDF93B3CFAC96698F(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_276(uParam0, uParam0->f_3) > 300f)
				{
					func_361(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 || ((func_51(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 20f && func_221(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_221(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_273(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_272(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_271(uParam0->f_4, uParam0->f_3);
								iVar0 = func_270(uParam0, &iVar1);
								if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
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
										unk_0x092B9247AF00F5CF(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x092B9247AF00F5CF(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
											{
												unk_0x092B9247AF00F5CF(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x974022927CB47E68(uParam0->f_3);
							unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_207(uParam0))
							{
								unk_0x974022927CB47E68(uParam0->f_3);
							}
							else if (((unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 0) && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 7) && func_276(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xD0557B139A542F12(&(uParam0->f_243));
								unk_0xB5396F1FB088FE38(&(uParam0->f_243));
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x93C0674FC00824D0(uParam0->f_243);
								unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x458AA1A01F53901E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_51(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_269(uParam0, 1))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_268(uParam0->f_4))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_266(uParam0);
						if (func_276(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_262(uParam0))
								{
									func_261(uParam0);
									iLocal_89 = unk_0x1DD05E817C89C737();
									unk_0x0428AFDCAA63B06E(uParam0->f_3, 26, 1);
									func_208(uParam0, 5, 0);
									unk_0xB8A4D35AE2F0B024();
									unk_0x2F0966A034F5ADC6(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD9757FAB956617BA(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_261(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		unk_0xFE54B8568B2ABD12(&(uParam0->f_8));
	}
}

int func_262(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_143("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		func_154();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_150(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_126(uParam0, 0, 1084227584) && func_149(1, 1, 1))
			{
				if (func_269(uParam0, 1))
				{
					iLocal_88 = unk_0x1DD05E817C89C737();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_361(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_271(uParam0->f_4, uParam0->f_3);
				iVar9 = func_270(uParam0, &iVar10);
				if (!unk_0x1C2F771CDC87A3A5(iVar9, 0))
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
						unk_0x092B9247AF00F5CF(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x092B9247AF00F5CF(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x1C2F771CDC87A3A5(iVar9, 0))
						{
							unk_0x092B9247AF00F5CF(iVar9, 0, 4096);
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
			iVar12 = func_191(&(uParam0->f_409), unk_0x0D1381B6E0F3987D(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0D1381B6E0F3987D(uParam0->f_4, Var0), 1);
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
				func_142(0, 0, 1);
				unk_0x55F7AC4B2B875901(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 3f, 0);
				unk_0xBAAB54D57B40765E(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 25f, 0);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_121();
				func_279(uParam0, 0, 0);
				Var13 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, Var6) };
				unk_0xB2BD5837A8D3CEDA(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uParam0->f_3, func_264(uParam0));
				func_145(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x1761457F86AD0EE2(*uParam0, unk_0x0D1381B6E0F3987D(uParam0->f_4, Var0));
				unk_0xD6B4D02A102485DC(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x4CBC5D1BC117616B(*uParam0, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				unk_0xD8ED11B32DF72E0B(uParam0->f_3, 0, 0);
				unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_143("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
			{
				if (!unk_0x7F420695E3F776FB(uParam0->f_3, 0))
				{
					unk_0x73CAFD2038E812B3(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x6515021478088FBC(uParam0->f_4, func_263(uParam0->f_7), 1);
				}
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
				unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				unk_0x10B228D2FDB7AF16(800);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_121();
				func_279(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
			{
				func_135(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
			unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
			unk_0x64BB72494B9DF6DC(0);
			unk_0xD815D4BD1AE9E85A(0, 1065353216);
			func_135(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
			{
				if (unk_0x9D6DF8F3584AAC2B(uParam0->f_3) || unk_0x7F420695E3F776FB(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 0)
				{
					unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_263(int iParam0)
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

float func_264(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_265(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_265(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x97BC40FFA2FFCCD2((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_266(var uParam0)
{
	var uVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (func_233(uParam0->f_3, 1) > 30f || func_267(uParam0))
			{
				if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_enter_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) == 1)
				{
					unk_0xD0557B139A542F12(&uVar0);
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x0E95B96CFEFE7B61(0, uParam0->f_4, 0);
					unk_0x10425721983AE158(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xA966E518B752B92A(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x93C0674FC00824D0(uVar0);
					unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
					func_361(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_267(var uParam0)
{
	if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 3f && func_116(uParam0, 5) > 15f) || unk_0xD1F1A906BA9226BE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x548F6F43A7CB6F45(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xAD830DCD82C63F31(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 3))
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

int func_269(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(iVar0[iVar4]))
			{
				if (unk_0x1C2F771CDC87A3A5(iVar0[iVar4], 0))
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
		if ((unk_0x1DD05E817C89C737() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_270(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 1, 0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 2, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 0, 0);
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x2EEC0612337D20CE(iParam0);
	Var0 = { unk_0xAD8278DAEC2CC059(iParam0, unk_0xD1A6A821F5AC81DB(iParam1, 1)) };
	if (unk_0x4B423FAA24E8ABF0(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_272(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (!unk_0xF6C26AE940C14749(uParam0->f_3) && func_233(uParam0->f_3, 1) < fParam2)
		{
			if (!func_189(uParam0, 5))
			{
				func_317(uParam0, 5, 0, 0);
			}
		}
		else if (func_189(uParam0, 5))
		{
			func_208(uParam0, 5, 0);
		}
		if (((func_116(uParam0, 5) > IntToFloat(iParam1) && unk_0xDF93B3CFAC96698F(uParam0->f_4) < fParam4) && !unk_0xF6C26AE940C14749(uParam0->f_3)) || func_233(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x365DC1E8054AF31A(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x365DC1E8054AF31A(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x75DF72FC74EED046(uParam0->f_4, iVar18) };
		Var6 = { unk_0xAD8278DAEC2CC059(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, Var6) };
	Var3 = { unk_0x0D1381B6E0F3987D(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x9E36887F0AA9DF6D(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xAAA71DD7E9059338(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_51(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x120E577522852984(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x0E7DD1EBCA8D2DE3(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 0)
			{
				unk_0xD0557B139A542F12(&(uParam0->f_243));
				unk_0xB5396F1FB088FE38(&(uParam0->f_243));
				unk_0x10425721983AE158(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
				unk_0xC58DD79B4CA8487F(uParam0->f_243, 1);
				unk_0x93C0674FC00824D0(uParam0->f_243);
				unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x406CBCEA35499884();
			if (uParam0->f_411 != 9)
			{
				if (!func_22(uParam0->f_44, 128))
				{
					func_254(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_274(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x974022927CB47E68(uParam0->f_3);
			unk_0xE67051907958B5EB(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xD0557B139A542F12(&(uParam0->f_243));
			unk_0xB5396F1FB088FE38(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
			unk_0x93C0674FC00824D0(uParam0->f_243);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
			unk_0xD0557B139A542F12(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x458AA1A01F53901E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_274(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, uParam2, func_275(iParam3), 0);
}

int func_275(int iParam0)
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

float func_276(var uParam0, int iParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (func_207(uParam0))
		{
			return func_51(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_277(var uParam0)
{
	func_240(uParam0, uParam0->f_3);
	if (func_207(uParam0))
	{
		if (func_189(uParam0, 14))
		{
			func_242(uParam0);
			if (unk_0xC450B06E5AAA0985(uParam0->f_10))
			{
				unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			}
		}
	}
	if (!func_189(uParam0, 9))
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_8))
		{
			unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
			unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		}
		func_317(uParam0, 9, 0, 0);
		func_278("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_278(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_279(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_317(uParam0, 16, 4f, 0);
		unk_0x406CBCEA35499884();
	}
}

int func_280(var uParam0, int iParam1)
{
	if (!unk_0xDCB78A15E5F495DC(2))
	{
		return 0;
	}
	func_284(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()) && !func_22(uParam0->f_44, 256))
			{
				func_67(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				func_254(uParam0, 135, 1, 0, 1);
				func_67(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_283(uParam0, iParam1))
	{
		if (func_233(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
				func_254(uParam0, 133, 1, 0, 1);
				func_67(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x4FAFF4BCB7633475(uParam0->f_3) || unk_0xCA038E64C65D1F9D(uParam0->f_3)) || func_233(uParam0->f_3, 1) > 400f)
		{
			func_361(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6EF03BE64E058E2F(uParam0->f_2, 0);
		unk_0x5FE0938FDE9B0958(uParam0->f_4, 1);
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x306C263AAEC4A988(uParam0->f_4);
			func_281(uParam0);
			func_55(2, 0);
			bLocal_94 = true;
			func_117(&uLocal_90);
			return 1;
		}
		else
		{
			func_361(uParam0, "No Taxi", 21);
			func_166("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_281(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (func_282())
		{
		}
	}
}

int func_282()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
				bVar2 = func_268(iVar0);
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
				if (unk_0xD3CE8D1E6564B011(iVar1))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x2EEC0612337D20CE(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(uParam0->f_44, 64))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_166("TX_VIP_DMGD", -1);
							if (func_158("TX_VIP_DMGD"))
							{
								func_67(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_44, 32))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_166("TX_VIP_CAR", -1);
							if (func_158("TX_VIP_CAR"))
							{
								func_67(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_44, 16))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_166("TX_VIP_SMALL", -1);
							if (func_158("TX_VIP_SMALL"))
							{
								func_67(&(uParam0->f_44), 16);
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
			func_20(&(uParam0->f_44), 16);
			func_20(&(uParam0->f_44), 64);
			func_20(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_286())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_285())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

var func_285()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_286()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_287(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_288(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_60[iVar0 /*3*/]), true);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x8744D2E3FC95740E(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_289(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()
{
	Local_343.f_0 = 0;
	func_307(45465, 45440, 1);
	func_307(45201, 45177, 1);
	func_307(45115, 45090, 1);
	func_307(45018, 44994, 1);
	func_307(44884, 44863, 1);
	func_307(44810, 44785, 1);
	func_307(44643, 44619, 1);
}

int func_291(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_292(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_294(uParam0->f_4))
		{
			func_293(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_294(int iParam0)
{
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x4C7724D572378B05(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xA24B9FF9863A909D(iParam0, 0, 40000) || unk_0xA24B9FF9863A909D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_295(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_296(var uParam0)
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		if (func_297(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_297(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_298(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, 11);
	return 1;
}

int func_299(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (unk_0x69799E0840A34AFB(uParam0->f_4) && !unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			if (!func_189(uParam0, 25))
			{
				func_317(uParam0, 25, 0, 0);
			}
			else if (func_116(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_189(uParam0, 25))
		{
			func_208(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_301(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (unk_0x67AC1AE8A2697D67(uParam0->f_4))
		{
			if (unk_0xA24B9FF9863A909D(uParam0->f_4, 0, 40000) || unk_0xA24B9FF9863A909D(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_302(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_303(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
			{
				if (func_297(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_304(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_305(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_306(uParam0->f_4))
		{
			func_293(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0)
{
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x4C7724D572378B05(iParam0) == 0f)
	{
		if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xA24B9FF9863A909D(iParam0, 0, 40000) || unk_0xA24B9FF9863A909D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_307(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_68(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_68(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_308(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_309(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		if ((unk_0x4FAFF4BCB7633475(uParam0->f_3) || unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0)) || unk_0x5B702A5D1F2635BE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_310()
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

int func_311()
{
	if (!unk_0x6252BC0DD8A320DB(iLocal_886))
	{
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_312(&iLocal_896, 0))
	{
		func_143("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_312(int iParam0, bool bParam1)
{
	if (!unk_0x6252BC0DD8A320DB(func_19()))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xE100DD4F82A51BDE("gestures@m@standing@casual"))
		{
			func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@taxi@"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@towingcome_here"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("misscommon@response"))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xDCB78A15E5F495DC(2))
	{
		func_143("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_313(var uParam0, int iParam1)
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

int func_314(var uParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
	{
		uParam0->f_8 = func_214(uParam0->f_3, 0, 0);
		unk_0xF3603E8FF037B294(1, 0);
		unk_0xBC64B805EE071A37(uParam0->f_8, 1);
		unk_0x594D5D0D7071B0DE(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xE67051907958B5EB(uParam0->f_3, unk_0x4A8C381C258A124D(), -1, 2048, 4);
	}
	return 1;
}

int func_315(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		func_316(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_37(uParam0->f_14, 0);
		unk_0x55F7AC4B2B875901(uParam0->f_14, 2f, 0);
		func_251(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x7F179394883885FA(uParam0->f_11);
		}
		else if (unk_0xFC8BFE4B41177C22(Global_112358.f_225[0]))
		{
			uParam0->f_3 = Global_112358.f_225[0];
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xB1DBFEB95C0EFB88(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x397CF4F4C8B17365(uParam0->f_3, sParam7);
		unk_0x0FB8E752BCC547A9(uParam0->f_3, 112, 1);
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			unk_0xF88FC425EC7D675D(uParam0->f_3, 250);
			unk_0x0428AFDCAA63B06E(uParam0->f_3, 32, 0);
			unk_0x0428AFDCAA63B06E(uParam0->f_3, 104, 1);
			unk_0x0428AFDCAA63B06E(uParam0->f_3, 177, 1);
			unk_0x0428AFDCAA63B06E(uParam0->f_3, 116, 0);
			unk_0x06CD913C241C765E("TAXI_Passenger", &(uParam0->f_413));
			unk_0xD414C47AFF81382A(1, uParam0->f_413, joaat("player"));
			unk_0xD414C47AFF81382A(2, uParam0->f_413, joaat("COP"));
			unk_0x3CEA1FD137ACE2D9(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x44589DAC2564FF02(Param1, 20f, 5f, 0);
}

void func_317(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_110(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_109(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_110(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_109(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_318()
{
	unk_0xEC9DAA34BBB4658C(iLocal_886);
	func_320(0);
	uLocal_1132 = func_319();
	unk_0x80813AC549A1E8AE("gestures@m@standing@casual");
}

var func_319()
{
	return unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
}

void func_320(bool bParam0)
{
	unk_0xEC9DAA34BBB4658C(func_19());
	if (bParam0)
	{
		unk_0x80813AC549A1E8AE("gestures@m@standing@casual");
	}
	unk_0x80813AC549A1E8AE("oddjobs@taxi@");
	unk_0x80813AC549A1E8AE("oddjobs@towingcome_here");
	unk_0x80813AC549A1E8AE("misscommon@response");
	unk_0xF2CB0224D3BE0B42("TAXI", 2);
	if (!func_22(Global_113648.f_19099, 128))
	{
		func_67(&(Global_113648.f_19099), 128);
	}
}

void func_321(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			if (bParam2)
			{
				if (func_116(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_254(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_254(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_317(uParam0, 10, 0f, 1);
				}
			}
			else if (func_116(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_254(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_254(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_317(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_116(uParam0, 10) > 30f)
		{
			if (!func_211())
			{
				if (uParam0->f_112)
				{
					func_254(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_254(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_317(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_14(&(Local_190[5 /*10*/].f_6)))
		{
			func_117(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_344(uParam0))
			{
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_343(uParam0, 1);
				func_341(5, uParam0);
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_14(&(Local_190[0 /*10*/].f_6)))
		{
			func_117(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_339(uParam0))
			{
				func_343(uParam0, 1);
				func_341(0, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_14(&(Local_190[1 /*10*/].f_6)))
		{
			func_117(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_338(uParam0))
			{
				func_343(uParam0, 1);
				func_341(1, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_14(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8D91ADE44AC79BC9(uParam0->f_4);
				func_117(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_107(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_337(uParam0))
			{
				func_343(uParam0, 1);
				func_341(8, uParam0);
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_14(&(Local_190[6 /*10*/].f_6)))
		{
			func_117(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_336(uParam0))
			{
				func_343(uParam0, 1);
				func_341(6, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_14(&(Local_190[4 /*10*/].f_6)))
		{
			func_117(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_335(uParam0))
			{
				func_343(uParam0, 1);
				func_341(4, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_14(&(Local_190[7 /*10*/].f_6)))
		{
			func_117(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_334(uParam0))
			{
				func_341(7, uParam0);
				func_343(uParam0, 1);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_14(&(Local_190[9 /*10*/].f_6)))
		{
			func_117(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
		}
		else if (func_107(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_333(uParam0))
			{
				func_343(uParam0, 1);
				func_341(9, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_14(&(Local_190[13 /*10*/].f_6)))
		{
			func_117(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_327(uParam0))
			{
				func_343(uParam0, 1);
				func_341(13, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_6)))
		{
			func_117(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_326(uParam0))
			{
				func_343(uParam0, 1);
				func_341(14, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_14(&(Local_190[11 /*10*/].f_6)))
		{
			func_117(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_325(uParam0))
			{
				func_343(uParam0, 1);
				func_341(11, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_14(&(Local_190[12 /*10*/].f_6)))
		{
			func_117(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_343(uParam0, 1);
				func_341(12, uParam0);
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_14(&(Local_190[2 /*10*/].f_6)))
		{
			func_323(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_107(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_343(uParam0, 1);
				func_341(2, uParam0);
				func_340(uParam0);
			}
		}
	}
}

int func_322(var uParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_2))
	{
		if ((!unk_0xD9CCFCDF70474932(uParam0->f_2) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_117(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_107(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_106(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_106(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_323(var uParam0, float fParam1)
{
	if (!func_14(uParam0))
	{
		func_110(uParam0, fParam1);
	}
}

int func_324(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[12 /*10*/].f_3)))
			{
				func_117(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 2.5f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[11 /*10*/].f_3)))
			{
				func_117(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_107(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x1D5CD3EAAA7422B0(uLocal_342) - unk_0x1D5CD3EAAA7422B0(Var0.f_0)) < 0f)
			{
				func_106(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_107(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_106(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	if (((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xFC8BFE4B41177C22(uParam0->f_5))
			{
				if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f && func_51(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0) && !unk_0xC39AE5D390581AD5(uParam0->f_5, -1, 0)))
				{
					func_117(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_107(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_51(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_107(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_327(var uParam0)
{
	if (((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_328(uParam0->f_4) && unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_190[13 /*10*/].f_3)))
			{
				func_117(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_328(int iParam0)
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
	
	unk_0x8B777C12D64DF209(unk_0xD1A6A821F5AC81DB(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x8B777C12D64DF209(unk_0xD1A6A821F5AC81DB(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x2DFF53C2897C7990(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_332((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_331(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_329(unk_0xD1A6A821F5AC81DB(iParam0, 1), Var15, Var18, Var21);
}

int func_329(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_332(Param6 - Param3) };
	Var3 = { func_332(Param9 - Param3) };
	fVar6 = func_330(Param0, Var0);
	fVar7 = func_330(Param3, Var0);
	fVar8 = func_330(Param6, Var0);
	fVar9 = func_330(Param0, Var3);
	fVar10 = func_330(Param3, Var3);
	fVar11 = func_330(Param9, Var3);
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

float func_330(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_331(struct<3> Param0, int iParam3)
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

Vector3 func_332(struct<3> Param0)
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

int func_333(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_334(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (unk_0xD1F1A906BA9226BE(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x5E674CD80769B53A(uParam0->f_4) <= -145f || unk_0x5E674CD80769B53A(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x5E674CD80769B53A(uParam0->f_4) <= 35f && unk_0x5E674CD80769B53A(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_335(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0xAEAB3904F55BB907(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[4 /*10*/].f_3)))
			{
				func_117(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_106(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_336(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0x0A2AACDCE82B8394(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[6 /*10*/].f_3)))
			{
				func_117(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0x14E25ED5E75102C8(uParam0->f_4))
		{
			iVar0 = unk_0x8D91ADE44AC79BC9(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xE4DC7B3DD712372B(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_254(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_254(uParam0, 72, 1, 0, 1);
				}
				func_106(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_338(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 3f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[1 /*10*/].f_3)))
			{
				func_117(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_106(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_339(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xD2A0543EC400E1A5(uParam0->f_4) && unk_0x3F18810075C77D41(uParam0->f_4))
		{
			if (!func_14(&(Local_190[0 /*10*/].f_3)))
			{
				func_117(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_106(&(Local_190[0 /*10*/].f_3));
				func_109(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_340(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_14(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_109(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_317(uParam0, 10, 0f, 1);
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
}

void func_341(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_342(uParam1, iParam0);
	func_106(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_342(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_343(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_344(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xDF93B3CFAC96698F(uParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_190[5 /*10*/].f_3)))
			{
				func_117(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_106(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_345()
{
	struct<3> Var0;
	
	func_143("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x9B3D4335E0EDB0BE(Local_423.f_3, unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_890, unk_0x4A8C381C258A124D(), 1)) || unk_0x9B3D4335E0EDB0BE(Local_853.f_2, unk_0x4A8C381C258A124D(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_233(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_211())
			{
				func_348(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x646DE293036A3499(Local_423.f_3, unk_0x4A8C381C258A124D(), -1, 0);
				iLocal_900 = unk_0x1DD05E817C89C737();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_151();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0) && !unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
			{
				unk_0x06CD913C241C765E("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0x2A661A0285B74A27(Local_423.f_3);
				unk_0xD414C47AFF81382A(255, Local_853.f_30, iLocal_893);
				unk_0xD414C47AFF81382A(255, Local_853.f_30, iLocal_892);
				unk_0x3CEA1FD137ACE2D9(Local_853.f_2, Local_853.f_30);
				unk_0x3CEA1FD137ACE2D9(iLocal_890, iLocal_893);
				unk_0xAAA71DD7E9059338(Local_853.f_2, 1);
				unk_0xBE8796DB2B90A437(Local_853.f_2, 17, 1);
				unk_0xD25E9BDC14A0B649(Local_853.f_2, 130, 0);
				unk_0xE915224DCA36212A(Local_853.f_2, 1);
				unk_0x9E6CC93E007219AC(Local_853.f_2, 1);
				unk_0x974022927CB47E68(Local_853.f_2);
				unk_0xAAA71DD7E9059338(iLocal_890, 1);
				unk_0xBE8796DB2B90A437(iLocal_890, 17, 1);
				unk_0xD25E9BDC14A0B649(iLocal_890, 130, 0);
				unk_0xE915224DCA36212A(iLocal_890, 1);
				unk_0x9E6CC93E007219AC(iLocal_890, 1);
				unk_0x974022927CB47E68(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0) && !unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_890, 0)) && !unk_0x1C2F771CDC87A3A5(Local_853.f_3, 0))
			{
				unk_0xD0557B139A542F12(&uLocal_414);
				unk_0xB5396F1FB088FE38(&uLocal_414);
				unk_0x0E95B96CFEFE7B61(0, iLocal_890, 0);
				unk_0x10425721983AE158(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_414);
				unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
				unk_0xD0557B139A542F12(&uLocal_414);
				unk_0xD0557B139A542F12(&uLocal_415);
				unk_0xB5396F1FB088FE38(&uLocal_415);
				unk_0x0E95B96CFEFE7B61(0, Local_853.f_2, 0);
				unk_0x10425721983AE158(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_415);
				unk_0x4BD42B0527065BB6(iLocal_890, uLocal_415);
				unk_0xD0557B139A542F12(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_890, 0) && !unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
				{
					unk_0x3CEA1FD137ACE2D9(Local_423.f_3, iLocal_892);
					unk_0xAAA71DD7E9059338(Local_423.f_3, 1);
					unk_0xBE8796DB2B90A437(Local_423.f_3, 13, 1);
					unk_0x39256A89E9D7464A(Local_423.f_3, 100);
					unk_0xC652B7E19CE29859(Local_423.f_3, 100);
					unk_0xD25E9BDC14A0B649(Local_423.f_3, 105, 0);
					unk_0x974022927CB47E68(Local_423.f_3);
					unk_0xD0557B139A542F12(&uLocal_416);
					unk_0xB5396F1FB088FE38(&uLocal_416);
					unk_0x0FD8B5F4BB15CD71(0, 5000);
					func_347(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0xA68F93198FAC44EC(0, func_346(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0xE84EF4129A44CCA3(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x93C0674FC00824D0(uLocal_416);
					unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_416);
					unk_0xD0557B139A542F12(&uLocal_416);
					iLocal_902 = 1;
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 256);
					unk_0xB41DEC3AAC1AA107(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0x4FAFF4BCB7633475(Local_853.f_2) && !unk_0x4FAFF4BCB7633475(iLocal_890))
				{
					if (func_233(Local_853.f_2, 1) < 2f || func_233(iLocal_890, 1) < 2f)
					{
						unk_0x974022927CB47E68(Local_853.f_2);
						unk_0x974022927CB47E68(iLocal_890);
						unk_0xE67051907958B5EB(Local_853.f_2, unk_0x4A8C381C258A124D(), -1, 2048, 4);
						unk_0xD0557B139A542F12(&uLocal_414);
						unk_0xB5396F1FB088FE38(&uLocal_414);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x93C0674FC00824D0(uLocal_414);
						unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
						unk_0xE67051907958B5EB(iLocal_890, unk_0x4A8C381C258A124D(), -1, 2048, 4);
						unk_0xD0557B139A542F12(&uLocal_415);
						unk_0xB5396F1FB088FE38(&uLocal_415);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x93C0674FC00824D0(uLocal_415);
						unk_0x4BD42B0527065BB6(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0x4FAFF4BCB7633475(Local_853.f_2))
					{
					}
					else
					{
						unk_0x974022927CB47E68(Local_853.f_2);
						unk_0xD844F5E50DAB6FF7(Local_853.f_2, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					}
					if (unk_0x4FAFF4BCB7633475(iLocal_890))
					{
					}
					else
					{
						unk_0x974022927CB47E68(iLocal_890);
						unk_0xD844F5E50DAB6FF7(iLocal_890, unk_0x4A8C381C258A124D(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_143("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
			{
				if (unk_0x9B5C1660CCDF7189(Local_423.f_3, joaat("script_task_perform_sequence")) == 1)
				{
					if (unk_0x89EC60A4485FD199(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
			if (((!unk_0x4FAFF4BCB7633475(iLocal_890) && unk_0xF76AF9D45D6BDA45(iLocal_890)) && !unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0)) && !bLocal_908)
			{
				unk_0xE67051907958B5EB(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0xD0557B139A542F12(&uLocal_414);
				unk_0xB5396F1FB088FE38(&uLocal_414);
				unk_0x0FD8B5F4BB15CD71(0, 500);
				unk_0x10425721983AE158(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x0E95B96CFEFE7B61(0, Local_423.f_3, 0);
				unk_0x93C0674FC00824D0(uLocal_414);
				unk_0x4BD42B0527065BB6(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0) && !unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
			{
				if (unk_0x89EC60A4485FD199(Local_423.f_3) > 2)
				{
					func_254(&Local_423, 58, 1, 0, 0);
					unk_0xD0557B139A542F12(&uLocal_416);
					unk_0xB5396F1FB088FE38(&uLocal_416);
					unk_0x84B06A81C98DA4B8(0);
					unk_0x646DE293036A3499(0, Local_853.f_2, 2000, 0);
					unk_0x93C0674FC00824D0(uLocal_416);
					unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_143("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0x1C2F771CDC87A3A5(iLocal_890, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
					{
						unk_0xD0557B139A542F12(&uLocal_415);
						unk_0xB5396F1FB088FE38(&uLocal_415);
						unk_0xA68F93198FAC44EC(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x646DE293036A3499(0, Local_853.f_2, -1, 1);
						unk_0x93C0674FC00824D0(uLocal_415);
						unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_143("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_211())
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0) && !unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0))
				{
					unk_0xE84EF4129A44CCA3(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_143("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0x1C2F771CDC87A3A5(Local_853.f_2, 0) && !unk_0x1C2F771CDC87A3A5(Local_423.f_3, 0))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(Local_853.f_2, 0) };
				unk_0xB5396F1FB088FE38(&uLocal_416);
				unk_0xC86A930D894F8CE2(0, Var0, 1000, 0, 0);
				unk_0x71A3A3C67C692798(0, 0);
				unk_0x0FD8B5F4BB15CD71(0, 500);
				unk_0xFD251F92B546F389(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_416);
				unk_0x4BD42B0527065BB6(Local_423.f_3, uLocal_416);
				unk_0xD0557B139A542F12(&uLocal_416);
				unk_0x44FB298D6382876D(Local_423.f_3, 1);
				iLocal_905 = 1;
			}
			break;
	}
}

Vector3 func_346(int iParam0)
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

void func_347(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			Var0 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xED977E2AE2CB16EE(Var0, Param1, 0) < unk_0xED977E2AE2CB16EE(Var3, Param1, 0) && unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x23EB5FC236231892(0, uParam0->f_4, 131584);
			}
			else if (unk_0xED977E2AE2CB16EE(Var0, Param1, 0) >= unk_0xED977E2AE2CB16EE(Var3, Param1, 0) && unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x23EB5FC236231892(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x23EB5FC236231892(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_348(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_349(sParam2, iParam3, 0);
}

int func_349(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_152();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_359(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_358();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, false);
			if (bParam2)
			{
				func_357();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_356())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_355();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_354();
		func_350();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_152();
	}
	return 0;
}

void func_350()
{
	if (!func_351())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_351()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_171())
	{
		return 0;
	}
	if (func_352(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0)
{
	return func_353(iParam0, 20);
}

var func_353(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_354()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_21725 = 1;
}

void func_355()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x8744D2E3FC95740E(&Global_8254, 16);
}

int func_356()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
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

void func_357()
{
	if (func_82(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_103();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

void func_358()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_359(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_361(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_151();
	func_462(2);
	Var0 = { func_368() };
	if ((!unk_0xD6F9DEE4765092A9(&Var0) && func_211()) && !unk_0x1B79E937E91F40C3(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x406CBCEA35499884();
		unk_0x428C32CC68809A35(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (!func_223(uParam0))
			{
				if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_317(uParam0, 3, 0, 0);
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
				func_366(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_223(uParam0))
			{
				if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
				{
					func_363(uParam0, 4096, 0);
				}
				else
				{
					func_363(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_366(uParam0, &Var0);
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
				func_366(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_55(8, 0);
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
				func_366(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_363(uParam0, 0, 0);
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_55(8, 0);
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
				func_366(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_366(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_55(8, 0);
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
				func_366(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_362(&Var0);
			func_348(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_366(uParam0, &Var0);
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
					func_366(uParam0, &Var0);
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_274(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_55(3, 0);
		}
		func_317(uParam0, 3, 0f, 1);
	}
}

void func_362(char* sParam0)
{
	switch (func_3(unk_0x4A8C381C258A124D()))
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

void func_363(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		unk_0xAAA71DD7E9059338(uParam0->f_3, 0);
		unk_0xE4DC7B3DD712372B(uParam0->f_3);
		unk_0x1CA08719184AFC6F(uParam0->f_3, 3, 0);
		unk_0xBE8796DB2B90A437(uParam0->f_3, 17, 1);
		unk_0x974022927CB47E68(uParam0->f_3);
		if ((func_53(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_365(uParam0->f_29)) && !bParam2)
		{
			func_364(uParam0);
		}
		else
		{
			unk_0x1CA08719184AFC6F(uParam0->f_3, 1024, 1);
			unk_0x1CA08719184AFC6F(uParam0->f_3, 131072, 1);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			else
			{
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
			}
			unk_0x96F4A599D1C6F95A(0, 0);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
		unk_0x44FB298D6382876D(uParam0->f_3, 1);
	}
}

void func_364(var uParam0)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x5C96CEA06531AB03(uParam0->f_3, 84.9058f);
				unk_0x44FB298D6382876D(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x5C96CEA06531AB03(uParam0->f_3, 68.3138f);
				unk_0x44FB298D6382876D(uParam0->f_3, 1);
			}
			else
			{
				unk_0x761F56E633460973(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x974022927CB47E68(uParam0->f_3);
			unk_0xD0557B139A542F12(&uVar0);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, 0);
			unk_0x96F4A599D1C6F95A(0, 0);
			unk_0xA966E518B752B92A(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x52210330D36ACD48(0, 1);
				unk_0xA966E518B752B92A(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x2280392018BC0DD3(0, 151.7794f, 0);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 20000);
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			else
			{
				unk_0x10425721983AE158(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x81E5E9AE1379B068(uParam0->f_29, 15f, 1))
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
		unk_0x44FB298D6382876D(uParam0->f_3, 1);
	}
}

int func_365(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, char* sParam1)
{
	if (func_367(uParam0))
	{
		func_348(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_367(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_51(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 40f && !unk_0xF6C26AE940C14749(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_368()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0xE7365CC791D1E4EB();
		iVar6 = (iVar6 + Global_22735);
		if (iVar6 > -1)
		{
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_369(var uParam0)
{
	return uParam0->f_118;
}

void func_370()
{
	func_400(&Local_423);
	if (func_399(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_398(&Local_423))
					{
						if (func_397("TAXI_OBJ_FTC1") || unk_0xC450B06E5AAA0985(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_198(&Local_423) != 10)
						{
							func_254(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_198(&Local_423) > 10 && func_198(&Local_423) != 15) && !func_398(&Local_423))
				{
					func_254(&Local_423, 15, 1, 0, 0);
					func_204(&Local_423, 7);
				}
				break;
			}
	}
	func_371(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_371(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_379(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_189(uParam0, 2))
	{
		if (func_378(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1DD05E817C89C737() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_377(uParam0))
				{
					uParam2->f_7 = { func_376(uParam1) };
					func_348(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_211())
				{
					uParam2->f_13 = { func_257() };
					if (unk_0x1B79E937E91F40C3(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_68(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_227(uParam0))
				{
					if (func_211())
					{
						func_317(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_373() };
						if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_211())
				{
					uParam2->f_19 = { func_368() };
				}
				else
				{
					func_68(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_189(uParam0, 14) && !func_211()) && !func_227(uParam0)) && func_116(uParam0, 18) > 1f)
				{
					func_317(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_211())
				{
					if (func_116(uParam0, 18) > 1f)
					{
						if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1)))
						{
							func_372(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_211())
				{
					func_68(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_372(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_349(sParam2, iParam4, 0);
}

struct<6> func_373()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0xE7365CC791D1E4EB();
		iVar6 = (iVar6 + Global_22735);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x6BA487C862DB8DDF(&(Global_20593[iVar7 /*6*/])))
			{
				return Global_20593[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_20593[iVar8 /*6*/])))
					{
						return Global_20593[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_374(var uParam0)
{
	int iVar0;
	
	iVar0 = func_375(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_67(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_148(), 24);
	}
}

int func_375(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_376(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_67(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_377(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_229("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_229("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_229("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_229("TX_OBJ_GYB_DO", 0, 0) || func_229("TAXI_OBJ_GYB", 0, 0)) || func_229("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_229("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_229("TX_OBJ_CYI_DO", 0, 0) || func_229("TAXI_OBJ_CYI_01", 0, 0)) || func_229("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_229("TX_OBJ_GYN_DO", 0, 0) || func_229("TAXI_OBJ_GYN", 0, 0)) || func_229("TAXI_OBJ_GYN_TG", 0, 0)) || func_229("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_229("TAXI_OBJ_CC1", 0, 0) || func_229("TAXI_OBJ_CC2", 0, 0)) || func_229("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_229("TAXI_OBJ_FTC1", 0, 0) || func_229("TAXI_OBJ_FTC2", 0, 0)) || func_229("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_229("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_229("TAXI_OBJ_GETRUN", 0, 0) || func_229("TAXI_OBJ_DRIVE", 0, 0)) || func_229("TAXI_OBJ_RETURN", 0, 0)) || func_229("TAXI_OBJ_POL", 0, 0)) || func_229("TAXI_OBJ_RUNOUT", 0, 0)) || func_229("TAXI_OBJ_POL", 0, 0));
}

int func_378(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_379(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_377(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_189(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_394(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_211())
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
						func_393(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				func_238(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_116(uParam0, 16) > 1f)
				{
					func_239(1);
					if (uParam0->f_411 == 9)
					{
						func_278("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_278("TAXI_VIP_RETURN", 7500, 1);
					}
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
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
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_274(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_116(uParam0, 16) > func_131(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_211()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
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
				func_393(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_394(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_348(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_254(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_317(uParam0, 16, 0, 0);
				func_254(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_396(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_393(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_317(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_278("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_278("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_130(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_254(uParam0, 10, 1, 0, 0);
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
				func_256(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_274(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_130(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_254(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_389(uParam0, 33554432, Var0, "", 1, 8);
				func_317(uParam0, 16, 0, 0);
				func_254(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_211())
				{
					func_388(uParam0, 0);
					func_67(&(uParam0->f_44), 4);
					func_317(uParam0, 16, 0, 0);
					func_254(uParam0, 13, 0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_116(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_256(&Var0);
					}
					func_386(Var0, uParam1);
					func_67(&(uParam0->f_81), 67108864);
					func_317(uParam0, 16, 0, 0);
					func_317(uParam0, 11, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_116(uParam0, 11) > uParam0->f_36)
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
							func_256(&Var0);
						}
					}
					func_386(Var0, uParam1);
					func_317(uParam0, 11, 0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
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
					func_256(&Var0);
				}
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				func_67(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 1, 0, 8);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
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
					func_385(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_385(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_386(Var0, uParam1);
				func_394(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 6, 0f, 1);
				func_279(uParam0, 0, 0);
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
					func_385(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_385(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_386(Var0, uParam1);
				func_394(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 6, 0f, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 12:
				func_278("TAXI_OBJ_GYB", 3500, 1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_278("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_278("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_278("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_278("TAXI_OBJ_CYI_01", 7500, 1);
					func_67(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 33:
				func_278("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_256(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_386(Var0, uParam1);
						}
						else
						{
							func_393(uParam0, &Var0, 0, 0, 8);
						}
						func_67(&(uParam0->f_82), 8192);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_256(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_256(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 46, 1, 0, 0);
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
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_279(uParam0, 0, 0);
				break;
			
			case 139:
				func_278("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_254(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xC5935DFB3F39785A(0, 120);
				if (!func_22(uParam0->f_82, 268435456))
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
					func_67(&(uParam0->f_82), 268435456);
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
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xC5935DFB3F39785A(0, 100);
				if (!func_22(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_67(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_278("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_279(uParam0, 0, 0);
				func_254(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_211())
				{
					func_278("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_279(uParam0, 0, 0);
					func_254(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_278("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_279(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_384(uParam0, 1, Var0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_384(uParam0, 2, Var0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_394(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_22(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_22(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_67(&(uParam0->f_81), 2097152);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_394(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_384(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_384(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_384(uParam0, 8, Var0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_394(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_274(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_348(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_396(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_396(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_394(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_317(uParam0, 16, 0, 0);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_256(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_389(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_389(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_394(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_389(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_389(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_394(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_382(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_382(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_382(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_279(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_389(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_389(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_274(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_211())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 65));
					func_279(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_211())
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
					func_393(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_390(uParam0, Var0, func_392(uParam0, 66));
					func_279(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_211())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								func_394(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								func_394(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_396(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_394(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_317(uParam0, 16, 0, 0);
								func_279(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_279(uParam0, 0, 0);
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
									func_256(&Var0);
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_279(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_254(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_382(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_382(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_382(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_279(uParam0, 0, 0);
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
				func_396(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_274(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_394(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_274(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_381(uParam0, Var0, 8);
				}
				func_394(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_67(&(uParam0->f_83), 1024);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_67(&(uParam0->f_83), 2048);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_67(&(uParam0->f_83), 4096);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_256(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_382(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_382(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 52, 1, 0, 0);
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
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_274(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_383(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_393(uParam0, &Var0, 0, 0, 8);
						func_254(uParam0, 52, 1, 0, 0);
						func_317(uParam0, 16, 0, 0);
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
						func_393(uParam0, &Var0, 0, 0, 8);
						func_317(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_317(uParam0, 16, 0, 0);
					func_279(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_394(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					func_278("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_389(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_389(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_389(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_394(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_380(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_380(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_394(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 100:
				func_278("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_279(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
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
					func_256(&Var0);
				}
				func_67(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
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
						func_256(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 65536);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_116(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_256(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 131072);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_279(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_67(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_67(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_67(&(uParam0->f_82), 33554432);
				}
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_256(&Var0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_67(&(uParam0->f_81), 2097152);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_256(&Var0);
				func_386(Var0, uParam1);
				func_67(&(uParam0->f_81), 67108864);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_389(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_274(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_254(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_389(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_254(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_278("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_279(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_389(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
						{
							func_274(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_389(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_254(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_278("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_279(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_389(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_279(uParam0, 0, 0);
				break;
			
			case 88:
				func_278("TAXI_TIEFLEE", 7500, 1);
				func_279(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_278("TAXI_OBJ_CYI_1B", 7500, 1);
					func_67(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_279(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_256(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
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
				func_393(uParam0, &Var0, 0, 0, 8);
				func_279(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_393(uParam0, &Var0, 1, 0, 8);
				func_254(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_278("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_254(uParam0, 0, 0, 0, 0);
				func_279(uParam0, 0, 0);
				break;
			}
	}
}

void func_380(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_67(&(uParam0->f_82), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_256(&Param2);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_381(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_67(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_67(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xC5935DFB3F39785A(1, 3), 24);
	}
	func_395(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_317(uParam0, 16, 0, 0);
}

void func_382(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_67(&(uParam0->f_82), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_256(&Param2);
		}
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_383(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_67(&(uParam0->f_81), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_385(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_256(sParam2);
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

void func_386(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_387(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_67(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_387(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD6F9DEE4765092A9(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_388(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_278("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_278("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_278("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_278("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_278("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_278("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_278("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_278("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_278("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_278("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_278("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_278("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_278("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_389(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_67(&(uParam0->f_81), iParam1);
	func_317(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_256(&Param2);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_390(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_317(uParam0, 16, 0, 0);
	func_317(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
	{
		unk_0x695EDD4AD352F831(uParam0->f_3, &cParam1, func_391(uParam0));
	}
}

char* func_391(var uParam0)
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

char* func_392(var uParam0, int iParam1)
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

int func_393(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_317(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_317(uParam0, 17, 0f, 1);
	}
	func_279(uParam0, iParam2, 0);
	return func_348(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_394(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
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
		if (func_22(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
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
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_395(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_349(sParam2, iParam4, 0);
}

void func_396(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_256(sParam2);
				}
				else
				{
					func_256(sParam2);
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

int func_397(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (func_229(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(var uParam0)
{
	if (func_211())
	{
		return 1;
	}
	if (func_189(uParam0, 17))
	{
		return 1;
	}
	if (func_189(uParam0, 14))
	{
		return 1;
	}
	if (func_227(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_399(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_189(uParam0, 9));
}

void func_400(var uParam0)
{
	if (func_189(uParam0, 17))
	{
		if (!func_189(uParam0, 14))
		{
			if (!func_227(uParam0))
			{
				if (!func_211())
				{
					func_208(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_401(var uParam0)
{
	return uParam0->f_117;
}

void func_402(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_124)) && func_211())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_211())
				{
					StringCopy(&(uParam0->f_124), func_148(), 24);
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

void func_403(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_297(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_297(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_297(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_68(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x1DD05E817C89C737();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_297(Local_343.f_1[iVar0 /*4*/], 4) && !func_297(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_68(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_361(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_404(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_189(uParam0, 27))
	{
		func_204(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_116(uParam0, 27) > 5f)
	{
		if (func_431(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_317(uParam0, 27, 0, 0);
			func_317(uParam0, 10, 0, 0);
			func_429(uParam0, &uVar0, uParam1);
		}
		func_426(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_405(uParam0);
	}
	if ((((!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && (unk_0x78411E34CF90EA8C(*uParam0) && !unk_0xBC886554B5888A64(*uParam0))) && (unk_0x78411E34CF90EA8C(uParam0->f_1) && !unk_0xBC886554B5888A64(uParam0->f_1))) && !unk_0xFBA523E6F8ACE541()) && !func_211())
	{
		if (func_116(uParam0, 26) > 10f)
		{
			func_208(uParam0, 26, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		}
	}
	else if (func_189(uParam0, 26))
	{
		func_208(uParam0, 26, 0);
	}
	return 0;
}

void func_405(var uParam0)
{
	if (!func_425(uParam0->f_429))
	{
		uParam0->f_429 = func_424();
		func_415(&(uParam0->f_429), 0, 0, unk_0xC5935DFB3F39785A(4, 7), 0, 0, 0);
	}
	else if (func_406(uParam0->f_429))
	{
		func_361(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_406(int iParam0)
{
	return func_407(func_424(), iParam0);
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_425(iParam1) || !func_425(iParam0))
	{
		return 1;
	}
	iVar0 = func_413(iParam0);
	iVar1 = func_413(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_412(iParam0);
	iVar1 = func_412(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_411(iParam0);
	iVar1 = func_411(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_410(iParam0);
	iVar1 = func_410(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_409(iParam0);
	iVar1 = func_409(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_408(iParam0);
	iVar1 = func_408(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_409(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_410(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_411(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_412(int iParam0)
{
	return iParam0 & 15;
}

var func_413(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_414(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_414(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_413(*uParam0);
	iVar1 = func_412(*uParam0);
	iVar2 = func_411(*uParam0);
	iVar3 = func_410(*uParam0);
	iVar4 = func_409(*uParam0);
	iVar5 = func_408(*uParam0);
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
	iVar6 = func_423(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_423(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_416(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_422(uParam0, iParam1);
	func_421(uParam0, iParam2);
	func_420(uParam0, iParam3);
	func_419(uParam0, iParam5);
	func_418(uParam0, iParam4);
	func_417(uParam0, iParam6);
}

void func_417(var uParam0, int iParam1)
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

void func_418(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_412(*uParam0);
	iVar1 = func_413(*uParam0);
	if (iParam1 < 1 || iParam1 > func_423(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_419(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_420(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_421(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_422(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_423(int iParam0, int iParam1)
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

int func_424()
{
	var uVar0;
	
	func_422(&uVar0, unk_0x4BA5A16068183C5E());
	func_421(&uVar0, unk_0x18E502A71E28968C());
	func_420(&uVar0, unk_0x5295501D0862870D());
	func_418(&uVar0, unk_0xB12880C92EA6EE15());
	func_419(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_417(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

int func_425(int iParam0)
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
	iVar0 = func_408(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_409(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_410(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_413(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_412(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_411(iParam0);
	if (iVar5 < 1 || iVar5 > func_423(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_426(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_428()) && !func_207(uParam0)) || ((uParam0->f_411 != 9 && func_283(uParam0, 1)) && !func_207(uParam0)))
		{
			uVar0 = func_427(uParam0->f_4);
			unk_0x76AD45C3946F87DD(&uVar0);
			uParam0->f_4 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_4, 1, 0);
			func_242(uParam0);
			func_234(uParam0, 0);
		}
	}
}

var func_427(var uParam0)
{
	return uParam0;
}

int func_428()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
				{
					if (unk_0x2E6A27037F1DC473(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_429(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_430(uParam0, 0, 1))
			{
				func_361(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_430(uParam0, 0, 4))
			{
				func_361(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_430(uParam0, 0, 8))
			{
				func_361(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_430(uParam0, 1, 1))
			{
				func_361(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_430(uParam0, 0, 1))
			{
				func_361(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_223(uParam0))
			{
				func_361(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_430(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (!unk_0xF6C26AE940C14749(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_254(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_254(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_431(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_437(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_435(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_434(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_432(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_432(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (iParam7 && unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0xA6534E6C7AE314D6(iParam0))
			{
				if (unk_0xC1089D3918F03D33(iParam0) == unk_0x4A8C381C258A124D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x65FFA94B82A71741(iParam0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x729CB628AF931FC1(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x5BDFCAB88CC62A9B(iParam0))
		{
			return 1;
		}
	}
	if (func_433(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_233(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), unk_0x6EF03BE64E058E2F(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x65F146FF416F109F(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(iParam1, 1)) < 2.5f)
			{
				if (unk_0x3644984C9D7B57EF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_434(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x11552FA9DCB8E126(uParam0, 4))
	{
		if (unk_0x65F146FF416F109F(uParam0) && !unk_0x3C2402675D8FFADA(iParam0))
		{
			if (unk_0x65FFA94B82A71741(uParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_435(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	if (unk_0x398315D0C90DE6F6(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA646A9FF47E2E515(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x11552FA9DCB8E126(uParam0, 2))
	{
		if (unk_0x65F146FF416F109F(uParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x7F420695E3F776FB(unk_0xBD545F8729E9F413(iParam1), 0))
			{
				iVar3 = unk_0x6EF03BE64E058E2F(unk_0xBD545F8729E9F413(iParam1), 0);
			}
			if (unk_0x74CD4FE549433E92(iParam0) || func_436(iVar3))
			{
				if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xE94C7FA27FEB00DD((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_436(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0) != 0)
			{
				if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_51(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
						{
							if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uVar1))
							{
								if ((unk_0x55B80B6E7AB61270(uVar1) && unk_0xE93EDE86BBB66532(iVar1) == iParam0) || (unk_0x0101C509A6E67F99(iVar1) && unk_0xBD545F8729E9F413(iVar1) == unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0)))
								{
									if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x6D05C5731A838CB3(0, 24)) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x6D05C5731A838CB3(0, 69)))
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

int func_437(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_233(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - uParam1->f_1) > uParam1->f_3)
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

void func_438(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (func_53(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x60040CDD28AA1BC3(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0, 0);
				func_67(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_439()
{
	func_440(&Local_423);
	func_462(2);
	func_458();
}

void func_440(var uParam0)
{
	func_54(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_462(2);
	}
}

int func_441(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_211() && func_116(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_66(uParam0) == 0 || func_297(uParam0->f_85, 32))
					{
						if (!unk_0x1CE980E99A2A6FB6(uParam0->f_4))
						{
							func_363(uParam0, 4160, 0);
						}
						else
						{
							func_363(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_363(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_363(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_363(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x1DD05E817C89C737() % 1000) < 50)
	{
	}
	return 0;
}

void func_442(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_8));
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_9))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_9));
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_10))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
	}
}

int func_443(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_444()
{
	func_447(&Local_423, 8);
	Local_423.f_410 = 0;
	func_446(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { Local_925 };
	Local_423.f_34 = 95.93f;
	func_445(&Local_423, &Local_853);
	Local_853.f_0 = joaat("s_m_m_doctor_01");
	Local_853.f_1 = joaat("bison");
}

void func_445(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_113648.f_19099.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = joaat("script_task_vehicle_drive_to_coord");
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_446(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_447(var uParam0, int iParam1)
{
	func_457(1);
	func_244();
	func_7(&(uParam0->f_244));
	func_456(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_113648.f_19099, 4))
	{
		func_67(&(Global_113648.f_19099), 4);
	}
	func_451(uParam0);
	func_449(uParam0);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	uParam0->f_102 = (func_448(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xF2CB0224D3BE0B42("TAXI", 2);
}

int func_448(int iParam0)
{
	return Global_113648.f_19099.f_39[iParam0];
}

void func_449(var uParam0)
{
	switch (func_66(uParam0))
	{
		case 0:
			func_450(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_450(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_450(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_450(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_450(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_450(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_450(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_450(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_450(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_450(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_450(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_451(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_455(uParam0, 3);
			func_454(uParam0, 14);
			break;
		
		case 1:
			func_455(uParam0, 14);
			func_454(uParam0, 8);
			break;
		
		case 2:
			func_455(uParam0, 8);
			func_454(uParam0, 7);
			break;
		
		case 3:
			func_455(uParam0, 15);
			func_454(uParam0, 6);
			break;
		
		case 4:
			func_455(uParam0, 0);
			func_454(uParam0, 3);
			break;
		
		case 5:
			func_455(uParam0, 6);
			func_454(uParam0, 7);
			break;
		
		case 6:
			func_455(uParam0, 8);
			func_454(uParam0, 15);
			break;
		
		case 7:
			func_455(uParam0, 8);
			func_454(uParam0, 14);
			break;
		
		case 8:
			func_455(uParam0, 7);
			func_454(uParam0, 15);
			break;
		
		case 9:
			func_455(uParam0, unk_0xC5935DFB3F39785A(0, 17));
			iVar0 = func_453((uParam0->f_418.f_2 + unk_0xC5935DFB3F39785A(1, 17)), 0, 16);
			func_454(uParam0, iVar0);
			func_452(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_452(var uParam0)
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

int func_453(int iParam0, int iParam1, int iParam2)
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

void func_454(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_455(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_456(var uParam0)
{
	uParam0->f_2 = unk_0x4A8C381C258A124D();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_208(uParam0, 32, 0);
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112704, unk_0x1AF90EB93E0012D6(), 24);
		Global_112698 = 1;
	}
	else
	{
		StringCopy(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}
}

void func_458()
{
	unk_0xA63572E348CC4CFB(Local_928, Local_931, 1, 1);
	unk_0xA63572E348CC4CFB(Local_946, Local_949, 1, 1);
	func_140(Local_958, 60f, 0);
	func_140(Local_961, 60f, 0);
	unk_0x93586F94C370857F();
	unk_0xD7B6A43ACC36D868(uLocal_894, 0);
	unk_0x2B1BDC32466B40A9(iLocal_893);
	unk_0x2B1BDC32466B40A9(iLocal_892);
	unk_0x8943BF9E0F15EDA0(&cLocal_976);
	func_251(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_461();
	func_460();
	func_459();
	unk_0xCCA6D8A84EE8C88A(Local_853.f_1, 0);
	func_157(&uLocal_45, 0, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_459()
{
	unk_0x55098D9E9AD58806(iLocal_887);
	unk_0x268BE77F77533D03("MOVE_DUCK_FOR_COVER");
	unk_0x268BE77F77533D03(&cLocal_980);
	unk_0x268BE77F77533D03(&cLocal_996);
	unk_0x268BE77F77533D03(&cLocal_1012);
	unk_0x268BE77F77533D03(&cLocal_1028);
}

void func_460()
{
	unk_0x55098D9E9AD58806(Local_853.f_0);
	unk_0x55098D9E9AD58806(Local_853.f_1);
	unk_0x55098D9E9AD58806(iLocal_888);
	unk_0x55098D9E9AD58806(iLocal_889);
	unk_0x8943BF9E0F15EDA0(&cLocal_976);
	unk_0x268BE77F77533D03("veh@truck@ds@base");
}

void func_461()
{
	unk_0x55098D9E9AD58806(iLocal_886);
	unk_0x268BE77F77533D03("gestures@m@standing@casual");
}

void func_462(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

