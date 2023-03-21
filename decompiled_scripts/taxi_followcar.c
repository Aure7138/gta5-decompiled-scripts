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
	uLocal_77 = unk_0x8FB19B229BCF8953();
	uLocal_78 = unk_0x355073A98A8FF72A();
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
	if (unk_0x76BF814AB8D4CAB8(67))
	{
		func_450(2);
		func_446();
	}
	unk_0x955FF17089AF6072(1);
	func_432();
	while (true)
	{
		if (unk_0x31F12808DC47A9E5(Local_423.f_2))
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
	uParam0->f_2 = unk_0x18F7BE9ACB7D08F4();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x18F7BE9ACB7D08F4());
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x18F7BE9ACB7D08F4());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
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

void func_8()
{
	if (func_431(&Local_423))
	{
		func_430(&Local_423);
		if (unk_0xE769D9B5158D0F11(Local_853.f_4))
		{
			unk_0x40D517D991458154(&(Local_853.f_4));
		}
		if (func_429(&Local_423, 0))
		{
			func_427();
		}
	}
	else
	{
		func_426(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_392(&Local_423, &uLocal_1125);
			func_391(&Local_423);
			func_390(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_389(&Local_423))
			{
				func_358();
			}
			else
			{
				func_349(&Local_423, "Taxi Not Driveable", func_357(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !iLocal_905)
		{
			func_337();
		}
		if (iLocal_907)
		{
			unk_0x3FA15AFD13DBAD3E(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_313(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_310();
				func_309(&Local_423, 16, 4f, 0);
				func_307(&Local_423, Local_916, Local_919, "TaxiKeyla", iLocal_886, 41.1334f, 15f);
				func_306(&Local_423);
				func_305(&Local_423, 1);
				break;
			
			case 1:
				if (func_303())
				{
					func_302();
					func_282();
					func_281(&(Local_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_280(&Local_423, &Local_409);
					func_279(&Local_423);
					unk_0x3B4B46A2A779D56E(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_305(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_274(&Local_423, 1))
				{
					if (!unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
					{
						unk_0xDEA702F2138E0B35(Local_423.f_3, 0, 0, 1, 0);
						unk_0xDEA702F2138E0B35(Local_423.f_3, 2, 1, 2, 0);
						unk_0xDEA702F2138E0B35(Local_423.f_3, 3, 0, 2, 0);
						unk_0xDEA702F2138E0B35(Local_423.f_3, 4, 1, 3, 0);
						unk_0xDEA702F2138E0B35(Local_423.f_3, 8, 1, 0, 0);
					}
					func_273(&Local_423, 1, 0);
					unk_0x48E76A4B7B58B77A("TAXI_Escapee", &(Local_853.f_30));
					unk_0xFB5F4D76105A21B5(255, Local_853.f_30, Local_423.f_413);
					unk_0xFB5F4D76105A21B5(255, Local_853.f_30, joaat("player"));
					unk_0x9E1C273D1197BF71(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_305(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_254(&Local_423, 0, 1109393408))
				{
					func_253();
					func_305(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_252(&Local_423))
				{
					func_248(&Local_423, 9, 1, 0, 0);
					func_247(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_246();
					func_245(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_305(&Local_423, 17);
				}
				if (unk_0xC4B84EB67F78C1F0(Local_423.f_4, 0))
				{
					if (!unk_0x88B79D32B518C327(Local_423.f_2, Local_423.f_4, 0))
					{
						func_243(&Local_423);
						func_305(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_242(&Local_423, &(Local_423.f_9));
				if (!unk_0x31F12808DC47A9E5(Local_853.f_3))
				{
					if (func_241())
					{
						func_240(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_239(&Local_423, &Local_853);
				}
				if (func_213(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0x2FE1B4B7B46EF996(Local_423.f_9))
					{
						unk_0x63EECA6600F1090E(Local_423.f_9, 0);
					}
					unk_0x40D517D991458154(&(Local_423.f_9));
					func_305(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_206())
				{
					if (!func_205())
					{
						func_248(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_305(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_239(&Local_423, &Local_853);
				func_204();
				if (func_203(Local_853.f_2, Local_853.f_3))
				{
					func_202(&Local_423, 2, 0);
					unk_0x81FEEF99C1D28A28(Local_853.f_2, 1);
					unk_0x273FE09AE985A00A(Local_853.f_2, 6, 1);
					unk_0x273FE09AE985A00A(Local_853.f_2, 17, 1);
					func_273(&Local_423, 1, 0);
					Local_853.f_5 = unk_0x0A088F357EF627CA(Local_853.f_3);
					Local_853.f_15 = unk_0x5719E0F2FB0A1A07(Local_853.f_3);
					Local_853.f_16 = unk_0xF03A285147EEA7E5(Local_853.f_3);
					func_309(&Local_423, 13, 0f, 0);
					func_309(&Local_423, 20, 0f, 0);
					unk_0x3E965E42EA49AF68(Local_946, Local_949);
					uLocal_894 = unk_0x1701E0E6A11D6B65(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x9A8BE560E024CAB0(0);
					func_305(&Local_423, 13);
				}
				break;
			
			case 13:
				func_204();
				func_239(&Local_423, &Local_853);
				func_242(&Local_423, &(Local_853.f_4));
				if (func_201(&Local_423))
				{
					if (func_200(Local_853.f_2, Local_853.f_4))
					{
						func_248(&Local_423, 51, 1, 0, 0);
						func_305(&Local_423, 25);
					}
					func_196(&Local_423);
					func_193(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_154())
					{
						if (unk_0x9E4337320976991E(Local_853.f_3))
						{
							unk_0xF2106D7D1A77DBA8(Local_853.f_3);
							unk_0xFD32699B58C2E7EF(0, "taxi_oj_fc3");
						}
						func_152(&uLocal_45, 0, 0);
						func_151();
						func_305(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_150())
				{
					if (func_129())
					{
						func_305(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_128(&Local_423, &(Local_423.f_43));
				if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
				{
					if ((unk_0x8673F2F1802ADEF7(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0x2A72627520A107B5(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
						{
							unk_0x267F7A2DFDFFB077(iLocal_890);
							unk_0x990FFD4FB6ADD630(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_248(&Local_423, 37, 1, 0, 0);
						func_305(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_128(&Local_423, &(Local_423.f_43));
				func_127(&Local_423, Local_853.f_2, 1, 1);
				func_127(&Local_423, iLocal_890, 0, 0);
				func_242(&Local_423, &(Local_423.f_9));
				if (unk_0xE769D9B5158D0F11(Local_853.f_4))
				{
					unk_0x40D517D991458154(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0xE769D9B5158D0F11(Local_423.f_9))
				{
					Local_423.f_9 = func_125(Local_423.f_17, 1);
				}
				if (unk_0xC4B84EB67F78C1F0(Local_423.f_4, 0))
				{
					if (unk_0x88B79D32B518C327(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0x8673F2F1802ADEF7(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x11BBEE2752B9D0C8(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x11BBEE2752B9D0C8(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
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
							func_305(&Local_423, 22);
						}
					}
				}
				break;
			
			case 22:
				func_127(&Local_423, Local_853.f_2, 0, 1);
				func_127(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x0FAE113CE72ED842(Local_423.f_3))
				{
					if (unk_0xC4B84EB67F78C1F0(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_121(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0x40D517D991458154(&(Local_423.f_9));
								func_305(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0xE769D9B5158D0F11(Local_423.f_9))
							{
								Local_423.f_9 = func_125(Local_423.f_17, 1);
							}
							if (func_213(&Local_423, 8f, 1097859072, 1117782016) || func_121(&Local_423, 1, 1084227584))
							{
								unk_0x40D517D991458154(&(Local_423.f_9));
								func_305(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_127(&Local_423, Local_853.f_2, 0, 1);
				func_127(&Local_423, iLocal_890, 0, 0);
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					func_248(&Local_423, 37, 1, 0, 0);
					func_305(&Local_423, 27);
				}
				break;
			
			case 27:
				func_127(&Local_423, Local_853.f_2, 0, 1);
				func_127(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x0FAE113CE72ED842(Local_423.f_3))
				{
					if (unk_0xE769D9B5158D0F11(Local_853.f_4))
					{
						unk_0x40D517D991458154(&(Local_853.f_4));
					}
					unk_0x9A279C737383BE86("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_120(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_118(&Local_423);
					func_114(&Local_423);
					func_113(&Local_423);
					func_305(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x9A279C737383BE86("TAXI_OBJ_DRIVE");
				if (func_80(&Local_423, &uLocal_1132))
				{
					func_54(&Local_423);
					func_305(&Local_423, 28);
				}
				break;
			
			case 28:
				if (iLocal_905 || iLocal_904)
				{
					func_305(&Local_423, 30);
				}
				break;
			
			case 30:
				unk_0x9A279C737383BE86("TAXI_OBJ_DRIVE");
				if ((!unk_0x0FAE113CE72ED842(Local_423.f_3) && unk_0x1B843A60307EECA4(iLocal_890, Local_423.f_3, 1)) && unk_0x1B843A60307EECA4(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_51(1, &Local_423, 1);
						func_446();
					}
					else
					{
						iLocal_421 = unk_0x953153CFE1324F48(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0xC4B84EB67F78C1F0(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0x5A96E2A522F78DFB(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0x0FAE113CE72ED842(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0xE5AF0A904F86D5A5(5, Local_940, 1, 0f, &uLocal_895, 0, 0))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_49(Local_940, 1) > 100f || func_47(Local_423.f_3, unk_0x18F7BE9ACB7D08F4()) > 100f)
				{
					func_51(1, &Local_423, 1);
					func_446();
				}
				else if ((unk_0x0FAE113CE72ED842(Local_423.f_3) || unk_0x1B843A60307EECA4(iLocal_890, unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x1B843A60307EECA4(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (!unk_0x0FAE113CE72ED842(Local_423.f_3))
					{
						unk_0x40E2910BAF39B1C7(Local_423.f_3, 1);
						unk_0x267F7A2DFDFFB077(Local_423.f_3);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x9908B4382DC81484(0, 2000);
						unk_0x03088152F371C16F(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(Local_423.f_3, 1);
					}
					if (!unk_0x0FAE113CE72ED842(iLocal_890))
					{
						unk_0x40E2910BAF39B1C7(iLocal_890, 1);
						unk_0x267F7A2DFDFFB077(iLocal_890);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x9908B4382DC81484(0, 1000);
						unk_0x03088152F371C16F(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(iLocal_890, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(iLocal_890, 1);
					}
					if (!unk_0x0FAE113CE72ED842(Local_853.f_2))
					{
						unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						if (bLocal_908)
						{
							unk_0xB5746603774C4C9D(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x73E31FC09D8359DB(0, 500);
						unk_0x03088152F371C16F(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(Local_853.f_2, 1);
					}
					func_51(1, &Local_423, 1);
					func_446();
				}
				else if ((iLocal_904 && !func_205()) && (unk_0x5AFB8ED811F05E4D() - iLocal_900) > 500)
				{
					if (!unk_0x0FAE113CE72ED842(Local_423.f_3))
					{
						unk_0x40E2910BAF39B1C7(Local_423.f_3, 1);
						unk_0x267F7A2DFDFFB077(Local_423.f_3);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x7F978F7D92B78559(0, unk_0x18F7BE9ACB7D08F4(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(Local_423.f_3, 1);
					}
					if (!unk_0x0FAE113CE72ED842(iLocal_890))
					{
						unk_0x40E2910BAF39B1C7(iLocal_890, 1);
						unk_0x267F7A2DFDFFB077(iLocal_890);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x9908B4382DC81484(0, 1000);
						unk_0x03088152F371C16F(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(iLocal_890, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(iLocal_890, 1);
					}
					if (!unk_0x0FAE113CE72ED842(Local_853.f_2))
					{
						unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
						unk_0x267F7A2DFDFFB077(Local_853.f_2);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x73E31FC09D8359DB(0, 500);
						unk_0x03088152F371C16F(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0x10F31830C95ED2E5(Local_853.f_2, 1);
					}
					func_9(&Local_423, 1);
					func_446();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)
{
	func_430(uParam0);
	if (func_205())
	{
		func_45();
	}
	func_43();
	unk_0x08FC50794202A47C();
	unk_0xEFF1F12403847394(1);
	func_40(0);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		unk_0xE58E53D56F33BF17(uParam0->f_4, 0);
		unk_0x84854164769BB257(uParam0->f_4);
		unk_0xF584C5576016093C(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_245(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 1);
	if (func_32())
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_22(0, 1, 1, 0);
	unk_0x77B57B2BB7F3EA0A(1);
	unk_0x4A3AD9384F0AAEA0(1);
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		unk_0x9A8BE560E024CAB0(1);
	}
	if (func_21(Global_104551.f_19067, 4))
	{
		func_19(&(Global_104551.f_19067), 4);
		unk_0x116D235ABEF5CE46(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x334F1DD67B2EC86A("gestures@m@standing@casual");
	unk_0x334F1DD67B2EC86A("oddjobs@taxi@");
	unk_0x334F1DD67B2EC86A("oddjobs@towingcome_here");
	if (unk_0xA1C84586015AE5DB())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0xA126D857D0E10968(unk_0x0A91D180DDC7A1B8()))
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0x0690219D4566637A(unk_0xF2DB717A73826179((func_10(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_11(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0xE0C4A595CD61B7F2(&uVar0))
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
	unk_0x7886AA7E3680A3D4(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
			{
				unk_0x456E65E2EDE3381E(uParam0->f_3);
			}
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
			unk_0xFB5F4D76105A21B5(255, uParam0->f_413, joaat("player"));
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xDBE64C5761554FBF(&(uParam0->f_3));
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
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_31(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_30())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_31(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_27(unk_0x8CFC7D6E1DA5D304())) && !func_24(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_23())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_27(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_23()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
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

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x2102D86657DB9A09(unk_0x0A91D180DDC7A1B8()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
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
		unk_0x3B4B46A2A779D56E(Var0, Var3, iParam3, 1);
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
	if (Global_14615)
	{
		func_41(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_30())
	{
		Global_14453.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
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
		if (Global_89907[iVar0 /*17*/] && !Global_89907[iVar0 /*17*/].f_1)
		{
			if (Global_89907[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89907[iVar0 /*17*/].f_5 != 88 && Global_89907[iVar0 /*17*/].f_5 != 89) && Global_89907[iVar0 /*17*/].f_5 != 92)
				{
					func_44(Global_89907[iVar0 /*17*/].f_5, 1);
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
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_45()
{
	Global_14622 = 0;
	func_46();
}

void func_46()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
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

float func_49(struct<3> Param0, int iParam3)
{
	return func_50(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), Param0, iParam3);
}

float func_50(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), Param1, iParam4);
}

void func_51(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0x0FAE113CE72ED842(uParam1->f_3))
		{
			unk_0x764AFC5A3A16C2B0(uParam1->f_3, 317, 1);
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
			Global_104551.f_19067.f_22[0]++;
			func_53("Fares Completed ++ = ", Global_104551.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104551.f_19067.f_22[1]++;
			func_53("Fares Failed ++ = ", Global_104551.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104551.f_19067.f_22[2]++;
			func_53("Fares Accepted ++ ", Global_104551.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104551.f_19067.f_22[3]++;
			func_53("Fares Expired ++ ", Global_104551.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104551.f_19067.f_22[13]++;
			func_53("Passengers run ++ = ", Global_104551.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104551.f_19067.f_22[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_104551.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104551.f_19067.f_22[4])
				{
					Global_104551.f_19067.f_22[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_104551.f_19067.f_22[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_104551.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104551.f_19067.f_22[5] = (Global_104551.f_19067.f_22[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_104551.f_19067.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_104551.f_19067.f_22[6]++;
			}
			else
			{
				Global_104551.f_19067.f_22[6] = (Global_104551.f_19067.f_22[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_104551.f_19067.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_104551.f_19067.f_22[7] = (Global_104551.f_19067.f_22[7] + iParam1);
			}
			else
			{
				Global_104551.f_19067.f_22[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_104551.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104551.f_19067.f_22[8]++;
			func_53("Taxis wrecked ++ = ", Global_104551.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104551.f_19067.f_22[9]++;
			func_53("Horn Honked ++ = ", Global_104551.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104551.f_19067.f_22[10] = (Global_104551.f_19067.f_22[10] + iParam1);
			func_53("Total Money Earned = ", Global_104551.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104551.f_19067.f_22[11] = (Global_104551.f_19067.f_22[11] + iParam1);
			func_53("Total Tips Earned = ", Global_104551.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104551.f_19067.f_22[12])
			{
				Global_104551.f_19067.f_22[12] = iParam1;
				func_53("New Highest Tip = ", Global_104551.f_19067.f_22[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_104551.f_19067.f_22[12]);
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
		func_450(1);
		func_66(15, 1);
	}
	func_64(&(Global_104551.f_19067), 1024);
	if (!func_21(Global_104551.f_19067, 64))
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_60(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_59() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_58(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_59()
{
	return Global_25233;
}

int func_60(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 78)
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
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_77(&Global_4267379))
	{
		if (func_75(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_68(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
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
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	return (*uParam0)[iParam1] == 78;
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
	func_73(uParam0, (Global_4267378 - 0.5f));
}

void func_72(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_73(var uParam0, float fParam1)
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

float func_74(var uParam0)
{
	return uParam0->f_80;
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
	return uParam0->f_79 == 1;
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
	return Global_35859 == iParam0;
}

int func_80(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_205() && func_111(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				}
				func_110(uParam0);
				func_19(&(Global_104551.f_19067), 4096);
				func_107(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_109(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x929C3CBA660376D5(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_106(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_100(uParam1, 0))
			{
				func_81(uParam0);
				func_309(uParam0, 0, 0, 0);
				func_106(0);
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
		func_82(func_98(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
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
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0);
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
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
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_85(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_61(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_88() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_88() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_87(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_90(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_91(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_88() /*12062*/].f_7637.f_10, iParam0);
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_93(iParam0, iParam1);
	uVar2 = func_92(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_94(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_60(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_66(27, 1);
	return 1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_98()
{
	func_99();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_99()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_4(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_3(unk_0x18F7BE9ACB7D08F4());
			if (func_5(iVar0) && (!func_79(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_5(Global_104551.f_2353.f_539.f_4301))
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

int func_100(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_104(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_104(&(uParam0->f_5));
				func_103(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_102(&(uParam0->f_5)) > 0.33f)
			{
				func_101(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_102(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_104(&(uParam0->f_5));
			func_103(uParam0, 1051260355);
		}
		else if (func_102(&(uParam0->f_5)) > 0.33f)
		{
			func_101(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_101(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_102(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_103(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SHARD_ANIM_OUT");
	unk_0x22DD5585E00B80C3(uParam0->f_9);
	unk_0x954263F3D07BEFC2(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_104(var uParam0)
{
	func_105(uParam0, 0f);
}

void func_105(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_106(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_107(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, func_108());
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0x70A9E4720D71C2D5(iParam9);
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59(sParam7);
	unk_0x3A12001DBF78DC62(uParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0xBEFD1ED9B6BE5127(uParam6);
	unk_0x3A12001DBF78DC62(uParam5);
	unk_0x3A12001DBF78DC62(iParam4);
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
	func_104(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_108()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_109(var uParam0)
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

void func_110(var uParam0)
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
		if (unk_0xB03A1684359C50A1(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_111(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_112(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_102(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_112(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_104(uParam0);
	}
}

void func_113(var uParam0)
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

void func_114(var uParam0)
{
	func_116();
	unk_0x08FC50794202A47C();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_248(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_248(uParam0, 103, 1, 0, 0);
		}
		func_115(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_248(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_248(uParam0, 102, 1, 0, 0);
	}
	func_309(uParam0, 16, 4f, 0);
}

void func_115(int iParam0)
{
	Global_103261.f_221 = iParam0;
}

void func_116()
{
	Global_14622 = 0;
	func_117();
}

void func_117()
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

void func_118(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_119(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_52(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_52(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_119(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xD2A9C3F486236CC5(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_121(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_124();
				return 1;
			}
			else if (func_122(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 256);
				}
				else
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 0);
				}
			}
			unk_0x0D984C74D0E76505(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_123(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, uParam1, iParam2, iParam4);
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

void func_123(int iParam0)
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

void func_124()
{
	if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	}
}

var func_125(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_126(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_126(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_127(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
			{
				if (unk_0x422DF8890E5A5CBB(iParam1))
				{
					if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()))
					{
						if (Local_423.f_109 == 0)
						{
							func_349(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x0FAE113CE72ED842(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
				{
					unk_0x267F7A2DFDFFB077(iLocal_890);
					unk_0x9603FB72C3126396(iLocal_890, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					unk_0x10F31830C95ED2E5(iLocal_890, 1);
				}
				func_349(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
				{
					unk_0x267F7A2DFDFFB077(Local_853.f_2);
					unk_0x9603FB72C3126396(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					unk_0x10F31830C95ED2E5(Local_853.f_2, 1);
				}
				func_349(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((unk_0x4F653234AAF19B1C(iParam1, joaat("weapon_stungun"), 0) || unk_0x4F653234AAF19B1C(iParam1, 0, 2)) || unk_0x4F653234AAF19B1C(iParam1, 0, 1))
			{
				if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
				{
					unk_0x267F7A2DFDFFB077(iLocal_890);
					unk_0x9603FB72C3126396(iLocal_890, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					unk_0x10F31830C95ED2E5(iLocal_890, 1);
				}
				if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
				{
					unk_0x267F7A2DFDFFB077(Local_853.f_2);
					unk_0x9603FB72C3126396(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					unk_0x10F31830C95ED2E5(Local_853.f_2, 1);
				}
				func_349(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
			}
		}
	}
}

void func_128(var uParam0, var uParam1)
{
	unk_0x205C6BBC993A91EA(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_129()
{
	struct<3> Var0;
	
	func_149();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_145(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_890))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_890))
		{
			Var0 = { unk_0x761660F5CE986DC4(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_144(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x5AFB8ED811F05E4D();
				func_142(&uLocal_1082);
				func_141(&Local_1052, -1, 1);
				func_245(Local_958, 0, 15f);
				func_245(Local_961, 0, 15f);
				func_140(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_139();
				func_309(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_138("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_111(&Local_423, 19) > 0.5f)
			{
				func_137(0, 0, 1);
				unk_0xE54597236B7D8C63(Local_958, 30f, 0, 0, 0, 0, 0, 0);
				unk_0xE54597236B7D8C63(Local_961, 30f, 0, 0, 0, 0, 0, 0);
				unk_0xE6B6928D4EED07B1(Local_958, 30f, 0);
				unk_0xE6B6928D4EED07B1(Local_961, 30f, 0);
				func_135(Local_958, 1114636288, 1);
				func_135(Local_961, 1114636288, 1);
				unk_0x3B4B46A2A779D56E(Local_946, Local_949, 0, 1);
				func_248(&Local_423, 35, 1, 1, 0);
				unk_0xF6910B463A17E809(Local_423.f_0, func_134(0));
				unk_0xA5D79F87520FD826(Local_423.f_0, func_133(0), 2);
				unk_0x2A2BB8210FB20081(Local_423.f_0, 44.5167f);
				unk_0x24144CB94D75CE91(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x2C535610856B3F4D(Local_423.f_0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
				{
					unk_0x990FFD4FB6ADD630(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(Local_853.f_3, fLocal_971);
					if (unk_0x7D3AEF70D815DB1B(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0xEB6A2CF968C0FF37(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
					{
						unk_0xAF7956D9C892AC2E(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_309(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_111(&Local_423, 19) > 5f)
			{
				func_309(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_111(&Local_423, 19) > 4.7f)
			{
				if (func_132())
				{
					if (!iLocal_915)
					{
						unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
						unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
			{
				unk_0x990FFD4FB6ADD630(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(Local_853.f_3, fLocal_974);
				unk_0xF2106D7D1A77DBA8(Local_853.f_3);
			}
			func_309(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0xC4B84EB67F78C1F0(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0x8359CF51370FC969(800);
				unk_0xA3F41A1968319181(0);
				unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
				{
					unk_0x990FFD4FB6ADD630(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(Local_853.f_3, fLocal_974);
					unk_0xF2106D7D1A77DBA8(Local_853.f_3);
					if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
					{
						unk_0xD9FCA20C1C5553F7(Local_853.f_2);
						unk_0x990FFD4FB6ADD630(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0xB88121FF8A34A66F(Local_853.f_2, -49.27436f);
					}
				}
				unk_0x13AD763DBD687842(Local_423.f_0, 0);
				unk_0x13AD763DBD687842(uLocal_422, 0);
				func_130(1, 1, 1);
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				while (!unk_0xC8AB6A5E6C1E6613())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_202(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_130(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x77B57B2BB7F3EA0A(1);
		unk_0x4A3AD9384F0AAEA0(1);
	}
	func_131(23, 0);
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

int func_132()
{
	if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_133(int iParam0)
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

Vector3 func_134(int iParam0)
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

void func_135(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0x84E44FF69EA2920B(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_37(Var1, func_136(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_37(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0x9E1C273D1197BF71(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x52756EBA46F4FA41(Var7, Var4, 1);
	}
}

float func_136(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, iParam0);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x65A28A348055034B(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 15f);
	}
	unk_0xC7321FA901D43FA2(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0);
	unk_0x77B57B2BB7F3EA0A(0);
	unk_0x4A3AD9384F0AAEA0(0);
	func_131(23, 1);
}

void func_138(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x5AFB8ED811F05E4D() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x5AFB8ED811F05E4D();
}

void func_139()
{
	var uVar0;
	
	iLocal_890 = unk_0x364B87C5C64BD100(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0x5138AB657A24E657(iLocal_890, 5);
	unk_0xDEA702F2138E0B35(iLocal_890, 3, 1, 2, 0);
	unk_0xDEA702F2138E0B35(iLocal_890, 4, 0, 1, 0);
	unk_0xDEA702F2138E0B35(iLocal_890, 2, 1, 2, 0);
	unk_0x764AFC5A3A16C2B0(iLocal_890, 20, 1);
	func_7(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
	{
		unk_0xB88121FF8A34A66F(iLocal_890, fLocal_970);
		unk_0x56C7B20E11B37066(&uVar0);
		unk_0xC8BEB049F3BFC0AB(&uVar0);
		unk_0x73E31FC09D8359DB(0, 2500);
		unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0xAF87F3F74F2AC3C9(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0xAFDA7B8F83B2CA58(uVar0);
		unk_0x73F69DD57B7E92A9(iLocal_890, uVar0);
		unk_0x56C7B20E11B37066(&uVar0);
	}
}

void func_140(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		*uParam0 = unk_0x2F192286DA6346A2(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)
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

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
		iVar0++;
	}
	unk_0x08FC50794202A47C();
	func_45();
}

var func_143()
{
	var uVar0;
	
	return uVar0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
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

int func_145(int iParam0)
{
	if (func_148() && unk_0x5AFB8ED811F05E4D() >= iParam0 + 1000)
	{
		unk_0xFF91FEC6E57575E4(500);
		while (!unk_0xEC0ECEF2AF3FDA8D())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_146();
		return 1;
	}
	return 0;
}

void func_146()
{
	Global_14622 = 0;
	func_147();
}

void func_147()
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

int func_148()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	if (func_34())
	{
		unk_0x983D86B7F4F283B8("appInternet");
	}
	if (func_33())
	{
		unk_0x983D86B7F4F283B8("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_150()
{
	if (!unk_0xEDFE27D1AEA0EA7F(iLocal_887))
	{
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("MOVE_DUCK_FOR_COVER"))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_151()
{
	unk_0x9016574B77A748EE(iLocal_887);
	unk_0x831CD0FBFB26EC7E("MOVE_DUCK_FOR_COVER");
	unk_0x831CD0FBFB26EC7E(&cLocal_980);
	unk_0x831CD0FBFB26EC7E(&cLocal_996);
	unk_0x831CD0FBFB26EC7E(&cLocal_1012);
	unk_0x831CD0FBFB26EC7E(&cLocal_1028);
}

void func_152(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(iParam2);
		unk_0x605B63B87CCF606F("FocusIn");
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x9A8BE560E024CAB0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(uParam0->f_3))
	{
		if (func_153(uParam0->f_3))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (func_153(sVar0))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
}

bool func_153(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

int func_154()
{
	if (func_111(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_182(&Local_423, &Local_853, (unk_0x5AFB8ED811F05E4D() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
	{
		if (unk_0xC4B84EB67F78C1F0(Local_423.f_4, 0))
		{
			if (unk_0x11BBEE2752B9D0C8(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0x7F8DAED41E5794FC(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_155(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_128(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
			{
				if (!unk_0xCD9EC66924076C1B(Local_853.f_3) && IntToFloat((unk_0x5AFB8ED811F05E4D() - iLocal_975)) > unk_0x67850BC9BA9CE7A8(120, "txm_fc_h1_"))
				{
					unk_0x0F36ED260B9B4408(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_156(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_156(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_157(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_157(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x76AF8AC551A53D4C())
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xE0C4A595CD61B7F2(iVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_153(iVar0))
	{
		func_181();
	}
	if (func_180(iParam1) && unk_0xBF0517F7142EEB5B(iParam1))
	{
		iVar1 = 0;
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			unk_0xD8FED54465FFD16D(unk_0x6DE4035D8BAB73B4(iParam1));
			unk_0x1834FEB33AA9A42E(unk_0x6DE4035D8BAB73B4(iParam1), 1);
			if (unk_0xC5581857956555AD(unk_0x6DE4035D8BAB73B4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x978B4E1292EBBE41(iParam1))
		{
			unk_0x537FF9DF0013B635(unk_0x00ABCA0241A97143(iParam1));
			if (unk_0x95AB6E5C406E24CB(unk_0x00ABCA0241A97143(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam1))
		{
			unk_0x33385B2D899D1FC3(unk_0x466780B966EA4B56(iParam1));
			if (unk_0xFAA49DBF76CAA296(unk_0x466780B966EA4B56(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x76AF8AC551A53D4C())
		{
			if (func_175(uParam0, bParam7, bParam9, 0))
			{
				func_172(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_162(iVar0))
				{
					if ((unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0)) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if ((iVar1 && !unk_0x622E10ED992CEB95()) && uParam8)
						{
							if (!func_153(iVar0))
							{
								func_161(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
								{
									func_160(1);
								}
							}
						}
					}
				}
			}
			else if (func_162(iVar0))
			{
				if (unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0))
				{
					if (((unk_0x3AAE8FF7FB37F69E(iParam1) && iVar1) && !unk_0x622E10ED992CEB95()) && uParam8)
					{
						if (!func_153(iVar0))
						{
							func_161(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
							{
								func_160(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE0C4A595CD61B7F2(sParam5))
			{
				if (func_153(sParam5))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
				{
					func_152(uParam0, iVar0, 1);
				}
			}
			if (!func_175(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_159(uParam0))
				{
					func_158(uParam0);
				}
			}
		}
	}
	else
	{
		func_152(uParam0, iVar0, 0);
	}
}

void func_158(var uParam0)
{
	if (func_180(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0x9A8BE560E024CAB0(1);
		unk_0xBC3C2A3068412290(0);
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		unk_0x605B63B87CCF606F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_159(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x5AFB8ED811F05E4D()
		{
			return 1;
		}
	}
	return 0;
}

int func_160(bool bParam0)
{
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104551.f_10019.f_100++;
			}
			return Global_104551.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104551.f_10019.f_101++;
			}
			return Global_104551.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104551.f_10019.f_102++;
			}
			return Global_104551.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_161(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_162(char* sParam0)
{
	if (!func_163(1, 1, 0))
	{
		if ((!unk_0xFAFFA408239A026B(sParam0) && func_153(sParam0)) || func_153("CMN_HINT"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return 0;
	}
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (func_160(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_171())
	{
		return 0;
	}
	if (unk_0x91A08229665C71F1())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53082)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				return 0;
			}
			if (unk_0xE368D11FD9469808())
			{
				return 0;
			}
		}
	}
	if ((func_170() || func_169(Global_1646129.f_138609)) || func_168())
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if ((unk_0xF8DAA7AB81AFC008(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), func_167(unk_0x18F7BE9ACB7D08F4(), 0)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("apc") && func_167(unk_0x18F7BE9ACB7D08F4(), 0) != -1)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("akula") && func_167(unk_0x18F7BE9ACB7D08F4(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_164(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)
{
	if (iParam0 != func_166())
	{
		if (func_165(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_165(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
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

int func_166()
{
	return -1;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
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

var func_168()
{
	return Global_2447128.f_16;
}

bool func_169(int iParam0)
{
	return iParam0 == 51;
}

var func_170()
{
	return Global_2447128.f_15;
}

bool func_171()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

void func_172(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316746 == 1)
	{
		return;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		func_152(uParam0, 0, 0);
	}
	if (func_38(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			iVar0 = unk_0x6DE4035D8BAB73B4(iParam1);
			if (!unk_0x657B649BA2AD3582(iVar0, 0))
			{
				if (unk_0xEE1E09882FA264CA(iVar0))
				{
					if (!func_173())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xC1A23BED641FA58E(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x9A8BE560E024CAB0(0);
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
	unk_0x211B8384E5838644(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), iParam1, -1, iVar3, iVar4);
	unk_0x9575CEFF222148A6("FocusIn", 0, 0);
	unk_0x64D773F3BE6DC50A("HINT_CAM_SCENE");
	unk_0x929C3CBA660376D5(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_173()
{
	return func_174(unk_0x8CFC7D6E1DA5D304());
}

int func_174(int iParam0)
{
	if (unk_0x4F69FBD64CDF125B(unk_0x6604E096142B4B55(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_159(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (!func_179(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (!func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_178(bParam1, bParam2, bParam3) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_159(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_163(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_181();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_163(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_163(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				unk_0x9A8BE560E024CAB0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_163(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_163(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				unk_0x9A8BE560E024CAB0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0x978B4E1292EBBE41(iParam0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xB6C2454233C8F532(iParam0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_181()
{
	unk_0xD2A9C3F486236CC5(&Global_2324, 4);
}

void func_182(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
	{
		if (unk_0x1B843A60307EECA4(uParam1->f_2, unk_0x18F7BE9ACB7D08F4(), 0))
		{
			func_349(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_349(uParam0, "Followee died", 13);
	}
	if ((unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0 && unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0)) && !unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
	{
		unk_0x8A58BE5F8F3F4E69(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x10F31830C95ED2E5(uParam1->f_2, 1);
		func_349(uParam0, "Player went wanted", 4);
	}
	func_191(uParam0, uParam1);
	if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (bParam3)
		{
			if (func_190(&(uParam1->f_3)))
			{
				unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_189(&(uParam1->f_3)))
			{
				unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam1->f_3, 1), func_188(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_187(&(uParam1->f_3)))
			{
				unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0x5719E0F2FB0A1A07(uParam1->f_3) < uParam1->f_15 || unk_0x1B843A60307EECA4(uParam1->f_3, unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0xF03A285147EEA7E5(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x1B843A60307EECA4(uParam1->f_3, unk_0x18F7BE9ACB7D08F4(), 0))
			{
				func_349(uParam0, "Taxi shot up the car", 12);
			}
			if (func_111(uParam0, 13) > 5f)
			{
				func_186(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0x5719E0F2FB0A1A07(uParam1->f_3);
				uParam1->f_5 = unk_0x0A088F357EF627CA(uParam1->f_3);
				uParam1->f_16 = unk_0xF03A285147EEA7E5(uParam1->f_3);
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_248(uParam0, 143, 0, 0, 0);
				func_349(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_185(&(uParam0->f_409), unk_0x761660F5CE986DC4(uParam0->f_4, 1), unk_0x761660F5CE986DC4(uParam1->f_3, 1), 0) == -1 && func_48(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_111(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_309(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
						{
							unk_0x8A58BE5F8F3F4E69(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x10F31830C95ED2E5(uParam1->f_2, 1);
						}
						func_349(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_184(uParam0, 6, 1);
					}
					else
					{
						func_184(uParam0, 1, 1);
					}
					func_248(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xAAB9BF2904B9E7CE(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_309(uParam0, 8, 0, 0);
			}
			else if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_248(uParam0, 143, 0, 0, 0);
				func_349(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_48(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_190(&(uParam1->f_3))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < 13f && func_187(&(uParam1->f_3)))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < func_188(&(uParam1->f_3)) && func_189(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_183(uParam0, 21))
			{
				if ((unk_0xAAB9BF2904B9E7CE(uParam0->f_4, uParam1->f_3, 17) && func_111(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_309(uParam0, 8, 0, 0);
					if (!func_183(uParam0, 21))
					{
						func_309(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_205())
						{
							if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
							{
								unk_0x8A58BE5F8F3F4E69(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x10F31830C95ED2E5(uParam1->f_2, 1);
							}
							func_349(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_184(uParam0, 3, 1);
					}
					else
					{
						func_184(uParam0, 2, 1);
					}
					if (func_48(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_205())
						{
							func_248(uParam0, 143, 0, 0, 0);
							func_45();
							if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
							{
								unk_0x8A58BE5F8F3F4E69(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x10F31830C95ED2E5(uParam1->f_2, 1);
							}
							func_349(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_248(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0x5719E0F2FB0A1A07(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_183(uParam0, 21))
			{
				func_202(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_309(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xAAB9BF2904B9E7CE(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_309(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_184(uParam0, 8, 1);
					func_248(uParam0, 13, 1, 0, 0);
					func_309(uParam0, 8, 0, 0);
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
					if (func_111(uParam0, 8) > 15f && !func_205())
					{
						func_184(uParam0, 9, 1);
						func_248(uParam0, 13, 1, 0, 0);
						func_309(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_183(var uParam0, int iParam1)
{
	return func_13(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_184(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_185(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_186(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_205())
		{
			func_273(uParam0, 0, 1);
			if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam1->f_2, 0))
			{
				unk_0x8A58BE5F8F3F4E69(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x10F31830C95ED2E5(uParam1->f_2, 1);
			}
			func_349(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_146();
		}
	}
	else
	{
		func_309(uParam0, 13, 0, 0);
		unk_0xA3F48AA4B6323A62(uParam1->f_3);
		func_184(uParam0, 10, 1);
		func_273(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_187(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		if (unk_0xF00EF9585E7FAC26(*uParam0) || unk_0x2A72627520A107B5(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_188(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		fVar1 = unk_0x2A72627520A107B5(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_189(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		if (unk_0x2A72627520A107B5(*uParam0) >= 4f && unk_0x2A72627520A107B5(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		if (unk_0x2A72627520A107B5(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_191(var uParam0, var uParam1)
{
	if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_48(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_192(uParam0) == 13)
				{
					func_116();
				}
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_192(uParam0) == 13)
				{
					func_116();
				}
			}
		}
	}
}

int func_192(var uParam0)
{
	return uParam0->f_416;
}

void func_193(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_205())
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (func_50(iParam0, Param1, 1) < fParam4)
			{
				if (func_195(uParam5))
				{
					func_194(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_194(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_195(var uParam0)
{
	return *uParam0 == 0;
}

void func_196(var uParam0)
{
	if (func_199(uParam0))
	{
		func_197(uParam0);
	}
}

void func_197(var uParam0)
{
	if (unk_0x278E531440F0A177() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFE4CC02D61DA2398();
			func_202(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_111(uParam0, 20) > 3f)
				{
					func_248(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_248(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_248(uParam0, 85, 1, 0, 0);
						func_202(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_111(uParam0, 20) > 8f)
				{
					func_248(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_183(uParam0, 22))
				{
					func_198(uParam0, 22);
				}
			}
			if (func_183(uParam0, 22) && func_111(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_248(uParam0, 84, 1, 0, 0);
						func_202(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_248(uParam0, 85, 1, 0, 0);
						func_202(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_198(var uParam0, int iParam1)
{
	func_112(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_199(var uParam0)
{
	return uParam0->f_120;
}

int func_200(int iParam0, var uParam1)
{
	if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
	{
		if (unk_0x0FAE113CE72ED842(iParam0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
				{
					unk_0x7A7F48A495EAC394(unk_0x0A91D180DDC7A1B8(), 1, 0);
					unk_0xE223A1A4864F355C(unk_0x0A91D180DDC7A1B8(), 0);
					if (unk_0xE769D9B5158D0F11(uParam1))
					{
						unk_0x40D517D991458154(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			return 1;
		}
	}
	return 0;
}

void func_202(var uParam0, int iParam1, bool bParam2)
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
			func_101(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_101(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_203(int iParam0, int iParam1)
{
	if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_204()
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
	unk_0xEA3ACC77B4C2040A(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_205()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	func_149();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_145(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_144(1, 1, 1))
			{
				iLocal_897 = unk_0x5AFB8ED811F05E4D();
				func_137(256, 0, 1);
				func_142(&uLocal_1082);
				func_141(&Local_1052, 2, 0);
				if (func_212(&Local_853, Local_934, fLocal_973))
				{
					unk_0x9E1C273D1197BF71(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_140(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_248(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_111(&Local_423, 19) > 3f)
			{
				if (!unk_0x0FAE113CE72ED842(Local_853.f_2))
				{
					unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
					unk_0x267F7A2DFDFFB077(Local_853.f_2);
					if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
					{
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0xFDBDFC454E44A5BF(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0xB5746603774C4C9D(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
						unk_0xA2B45B1D3EE42178(Local_853.f_3, 1);
					}
				}
				unk_0x00D6A93F33EF5EE4(unk_0x18F7BE9ACB7D08F4(), Local_423.f_17);
				unk_0xF6910B463A17E809(Local_423.f_0, func_211(0));
				unk_0xA5D79F87520FD826(Local_423.f_0, func_210(0), 2);
				unk_0x2A2BB8210FB20081(Local_423.f_0, 17.2f);
				unk_0x24144CB94D75CE91(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x2C535610856B3F4D(Local_423.f_0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				func_309(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0xF6910B463A17E809(uLocal_422, func_211(4));
			unk_0xA5D79F87520FD826(uLocal_422, func_210(0), 2);
			unk_0x2A2BB8210FB20081(uLocal_422, 17.2f);
			unk_0x24144CB94D75CE91(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0x544D4FC2BDA00B32(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_309(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_111(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_192(&Local_423) > 10)
				{
					func_207();
				}
				iLocal_912 = 1;
			}
			if (func_111(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0xF6910B463A17E809(Local_423.f_0, func_211(2));
				unk_0xEEBA7A992DA7B65A(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0x2A2BB8210FB20081(Local_423.f_0, 35f);
				unk_0x24144CB94D75CE91(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x2C535610856B3F4D(Local_423.f_0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				func_309(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0xF6910B463A17E809(uLocal_422, func_211(2));
			unk_0xEEBA7A992DA7B65A(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0x2A2BB8210FB20081(uLocal_422, 45f);
			unk_0x24144CB94D75CE91(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0x544D4FC2BDA00B32(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_309(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0) && !unk_0x74C2FE037DFC8B4A(Local_853.f_3, 0))
			{
				if (!unk_0x657B649BA2AD3582(Local_853.f_2, 0))
				{
					unk_0x8D77EFA08616AD64(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0xFBD899EB9A2EF7F4(Local_853.f_3, 10f);
				func_104(&(Local_853.f_27));
				func_309(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_207();
				}
			}
			break;
		
		case 11:
			if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
			{
			}
			if (unk_0x0DDC3D6589A9421A(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0xB3CE7CCA48611094(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_111(&Local_423, 19) > 4f)
			{
				unk_0x8359CF51370FC969(800);
				unk_0xA3F41A1968319181(0);
				unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				func_104(&(Local_853.f_27));
				unk_0x13AD763DBD687842(Local_423.f_0, 0);
				unk_0x13AD763DBD687842(uLocal_422, 0);
				func_130(1, 1, 1);
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				func_202(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_111(&Local_423, 19) > 3.7f)
			{
				if (func_132())
				{
					if (!iLocal_914)
					{
						unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
						unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
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

void func_207()
{
	bLocal_901 = true;
	if (!unk_0x0FAE113CE72ED842(Local_853.f_2))
	{
		if (unk_0xC4B84EB67F78C1F0(Local_853.f_3, 0))
		{
			if (unk_0x88B79D32B518C327(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0x990FFD4FB6ADD630(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0x641E77554763EF06(Local_853.f_2, Local_853.f_30);
				unk_0x273FE09AE985A00A(Local_853.f_2, 1, 1);
				unk_0x273FE09AE985A00A(Local_853.f_2, 6, 0);
				unk_0x273FE09AE985A00A(Local_853.f_2, 17, 0);
				unk_0x273FE09AE985A00A(Local_853.f_2, 3, 0);
				unk_0x067F16ECAED88B7F(Local_853.f_2, 500f);
				unk_0x7D40DD402BF99FB7(Local_853.f_2, 500f);
				unk_0x53415CF5D71C48A6(Local_853.f_2, 500f);
				unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
				unk_0xC74F690FB603E9C5(Local_853.f_3, 500);
				unk_0xC74F690FB603E9C5(Local_853.f_2, 500);
				unk_0x503DF1366BC3493D(Local_853.f_3, 1, 1);
				unk_0x503DF1366BC3493D(Local_853.f_2, 1, 1);
				if (!unk_0xE769D9B5158D0F11(Local_853.f_4))
				{
					Local_853.f_4 = func_208(Local_853.f_3, 0, 0);
				}
				unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
				unk_0xF81720737A9C0B6E(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0x157DAF86FA806735(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
}

int func_208(int iParam0, bool bParam1, bool bParam2)
{
	return func_209(iParam0, !bParam1, bParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_126(unk_0x44243F2E2F58B8E3(), 1f, 1f));
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
		unk_0x0590222010A36CE4(uVar0, func_126(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_126(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_210(int iParam0)
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

Vector3 func_211(int iParam0)
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

int func_212(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0x31F12808DC47A9E5(uParam0->f_2))
	{
		uParam0->f_2 = unk_0x364B87C5C64BD100(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_7(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x2F51E4FCC3B20959(uParam0->f_2, "TaxiJames");
	if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
	{
		unk_0x764AFC5A3A16C2B0(iLocal_890, 20, 1);
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_2, 0))
	{
		unk_0xDEA702F2138E0B35(uParam0->f_2, 0, 1, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_2, 3, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_2, 4, 0, 1, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_2, 8, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_2, 11, 0, 1, 0);
		unk_0x641E77554763EF06(uParam0->f_2, uParam0->f_30);
		unk_0x273FE09AE985A00A(uParam0->f_2, 1, 1);
		unk_0x273FE09AE985A00A(uParam0->f_2, 6, 1);
		unk_0x273FE09AE985A00A(uParam0->f_2, 17, 1);
		unk_0x273FE09AE985A00A(uParam0->f_2, 3, 0);
		unk_0x067F16ECAED88B7F(uParam0->f_2, 300f);
		unk_0x7D40DD402BF99FB7(uParam0->f_2, 300f);
		unk_0x53415CF5D71C48A6(uParam0->f_2, 300f);
		unk_0x40E2910BAF39B1C7(uParam0->f_2, 1);
	}
	return 1;
}

int func_213(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5()) && !unk_0xBC13F084F3B1B544()) && !unk_0xEC0ECEF2AF3FDA8D()) && !uParam0->f_142)
	{
		if (func_225(uParam0))
		{
			func_128(uParam0, &(uParam0->f_43));
			func_220(uParam0);
			func_219(uParam0);
			func_196(uParam0);
			func_218(uParam0, fParam2, fParam3);
			func_216(uParam0);
			return func_214(uParam0, iParam1);
		}
	}
	return 0;
}

int func_214(var uParam0, int iParam1)
{
	if (func_63(uParam0) == 2)
	{
		if (unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_215(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_144(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
		{
			return func_121(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_144(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
	{
		return func_121(uParam0, 1, iParam1);
	}
	return 0;
}

float func_215(int iParam0, struct<3> Param1, int iParam4)
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

void func_216(var uParam0)
{
	float fVar0;
	
	if ((func_217(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
	{
		if ((unk_0x5AFB8ED811F05E4D() - iLocal_97) >= 10000)
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
			iLocal_97 = unk_0x5AFB8ED811F05E4D();
		}
		if (iLocal_96 >= 2 && !func_205())
		{
			func_248(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x5AFB8ED811F05E4D() % 4000) < 50)
		{
			if (!func_217(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_217(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_218(var uParam0, float fParam1, float fParam2)
{
	if (func_217(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0xF00EF9585E7FAC26(uParam0->f_4) || unk_0x2A72627520A107B5(uParam0->f_4) < 3f) && func_201(uParam0))
		{
			if (!func_183(uParam0, 2))
			{
				func_198(uParam0, 2);
			}
			else if (func_217(uParam0))
			{
				if (func_111(uParam0, 2) > fParam1 && !func_183(uParam0, 14))
				{
					if (func_34())
					{
						func_248(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_248(uParam0, 48, 1, 0, 0);
					}
					func_309(uParam0, 2, 0, 0);
					if (func_183(uParam0, 10))
					{
						func_309(uParam0, 10, 0, 0);
					}
				}
				if (!func_183(uParam0, 3))
				{
					func_309(uParam0, 3, 0, 0);
				}
				else if (func_111(uParam0, 3) >= fParam2)
				{
					func_202(uParam0, 3, 0);
					func_349(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_183(uParam0, 2))
			{
				func_202(uParam0, 2, 0);
			}
			if (func_183(uParam0, 3))
			{
				func_202(uParam0, 3, 0);
			}
		}
	}
}

void func_219(var uParam0)
{
	if (unk_0xB652E7D7A4FA5349(unk_0x0A91D180DDC7A1B8()) && !func_21(uParam0->f_44, 2))
	{
		func_64(&(uParam0->f_44), 2);
	}
	else if (!unk_0xB652E7D7A4FA5349(unk_0x0A91D180DDC7A1B8()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_52(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_248(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_220(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					if (func_111(uParam0, 9) > 1f)
					{
						func_224(uParam0, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
						if (uParam0->f_410 != 22)
						{
							func_248(uParam0, 50, 1, 1, 0);
						}
						func_309(uParam0, 9, 0, 0);
						if (unk_0xE769D9B5158D0F11(uParam0->f_9))
						{
							unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
							unk_0x63EECA6600F1090E(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_205() && func_111(uParam0, 9) > 4f)
				{
					func_248(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_223("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_248(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), func_222(uParam0)))
				{
					func_224(uParam0, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
					func_52(6, 0);
				}
				if (!func_221(uParam0))
				{
					if (!unk_0x85FDEF76CDBAD589())
					{
						if (func_111(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_248(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					if (func_223("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x08FC50794202A47C();
					}
					if (unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_205())
				{
					if (uParam0->f_410 != 22)
					{
						func_248(uParam0, 53, 1, 0, 1);
					}
					func_52(7, func_222(uParam0));
					func_224(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_205())
				{
					func_202(uParam0, 9, 0);
					func_309(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_221(var uParam0)
{
	return uParam0->f_110;
}

int func_222(var uParam0)
{
	return uParam0->f_106;
}

bool func_223(char* sParam0, int iParam1, int iParam2)
{
	unk_0x096CAD0A8332D384(sParam0);
	if (iParam1 == 1)
	{
		unk_0xBEFD1ED9B6BE5127(iParam2);
	}
	return unk_0x45CD208BAEE25DF4();
}

void func_224(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_225(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (!unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1) && !unk_0xDB5E52F2078862CA(uParam0->f_3))
			{
				func_349(uParam0, "Passenger left car.", 9);
			}
			else if (func_235(uParam0))
			{
				if (func_223("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x9A279C737383BE86("TAXI_OBJ_PICKUP");
				}
				if (unk_0xC8AB6A5E6C1E6613())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
				{
				}
				func_226(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_226(var uParam0, bool bParam1)
{
	func_234(uParam0, uParam0->f_3);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_183(uParam0, 14))
			{
				if (func_205())
				{
					func_233(1);
				}
				func_184(uParam0, 11, 1);
				func_228(uParam0, 1);
				func_309(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_217(uParam0))
				{
					if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
					{
					}
					if (unk_0x657B649BA2AD3582(uParam0->f_2, 0))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							func_309(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_349(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (func_227(uParam0->f_4, 1) > 40f)
					{
						func_349(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_349(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_227(int iParam0, int iParam1)
{
	return func_48(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), iParam0, iParam1);
}

void func_228(var uParam0, bool bParam1)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
				unk_0x63EECA6600F1090E(uParam0->f_8, 0);
				func_232(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
				unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				unk_0x08FC50794202A47C();
				if (func_217(uParam0))
				{
					func_248(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_232(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_229(uParam0, 0, 0);
		}
		else if (unk_0xE769D9B5158D0F11(uParam0->f_10))
		{
			unk_0x40D517D991458154(&(uParam0->f_10));
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
				unk_0x63EECA6600F1090E(uParam0->f_8, 1);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
					unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
					unk_0x63EECA6600F1090E(uParam0->f_9, 1);
				}
			}
			unk_0x08FC50794202A47C();
		}
	}
}

void func_229(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_430(uParam0);
	}
	if (!unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		uParam0->f_10 = func_209(uParam0->f_4, 1, 0);
		unk_0x61C2EC67C90074E5(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x63EECA6600F1090E(uParam0->f_10, 1);
		func_230(uParam0);
		if (bParam2)
		{
			unk_0x08FC50794202A47C();
			func_248(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_230(var uParam0)
{
	func_309(uParam0, 14, 0, 0);
	func_231();
}

void func_231()
{
	int iVar0;
	
	iVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_232(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x08FC50794202A47C();
		func_248(uParam0, iParam3, 1, 0, 0);
		func_64(uParam1, iParam2);
	}
}

void func_233(int iParam0)
{
	Global_16767 = iParam0;
}

void func_234(var uParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (!unk_0x0FAE113CE72ED842(iParam1))
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				if ((unk_0x4F653234AAF19B1C(iParam1, joaat("weapon_stungun"), 0) || unk_0x4F653234AAF19B1C(iParam1, 0, 2)) || unk_0x4F653234AAF19B1C(iParam1, 0, 1))
				{
					func_349(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
			}
		}
	}
}

int func_235(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_183(uParam0, 14))
			{
				func_236(uParam0);
			}
			func_228(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_236(var uParam0)
{
	func_202(uParam0, 14, 0);
	func_202(uParam0, 15, 0);
	func_238();
	if (func_237())
	{
		func_233(0);
	}
}

int func_237()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	var uVar0;
	
	uVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_239(var uParam0, var uParam1)
{
	func_127(uParam0, uParam1->f_2, 1, 1);
	if (unk_0xC4B84EB67F78C1F0(uParam1->f_3, 0))
	{
		if (unk_0x1B843A60307EECA4(uParam1->f_3, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (!func_205())
			{
				func_349(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_146();
			}
		}
	}
	else if (!func_205())
	{
		func_349(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_146();
	}
}

int func_240(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0x3064CCF56C6C32BC(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1, 0);
	unk_0x116D235ABEF5CE46(uParam0->f_1, 1);
	unk_0x419C9117019F2E5A(uParam0->f_1);
	uLocal_417[0] = unk_0x3064CCF56C6C32BC(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1, 0);
	uLocal_417[1] = unk_0x3064CCF56C6C32BC(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1, 0);
	uLocal_417[2] = unk_0x3064CCF56C6C32BC(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1, 0);
	unk_0xA2B45B1D3EE42178(uLocal_417[0], 2);
	unk_0xA2B45B1D3EE42178(uLocal_417[1], 2);
	unk_0xA2B45B1D3EE42178(uLocal_417[2], 2);
	unk_0x1C4B08C81FA52071(uLocal_417[0], "BRAVEST");
	unk_0x1C4B08C81FA52071(uLocal_417[1], "BOLDEST");
	unk_0x1C4B08C81FA52071(uLocal_417[2], "BADDEST");
	unk_0x874004759C4BE8DC(uParam0->f_3, 800);
	unk_0x1C4B08C81FA52071(uParam0->f_3, "PUSSYWAG");
	unk_0x4D8AAF889D588F4D(uParam0->f_3, 1);
	unk_0x5B8B17345AD1581B(uParam0->f_3, 1);
	uParam0->f_15 = unk_0x5719E0F2FB0A1A07(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0xDC633118188196B0(uParam0->f_3, 1);
	func_245(Local_423.f_14, 1, 1114636288);
	func_245(Local_958, 1, 15f);
	func_245(Local_961, 1, 15f);
	unk_0xA2B45B1D3EE42178(uParam0->f_3, 2);
	return 1;
}

int func_241()
{
	if (!unk_0xEDFE27D1AEA0EA7F(Local_853.f_0))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xEDFE27D1AEA0EA7F(Local_853.f_1))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xEDFE27D1AEA0EA7F(iLocal_888))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xEDFE27D1AEA0EA7F(iLocal_889))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x53500A7D168BF5F6(120, "txm_fc_h1_"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x53500A7D168BF5F6(0, "taxi_oj_fc3"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x9BE1DFFE71D3D3DA(&cLocal_976))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_242(var uParam0, var uParam1)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_183(uParam0, 14))
			{
				if (unk_0xE769D9B5158D0F11(*uParam1) && unk_0x62FE0DE30E64B492(*uParam1) > 0)
				{
					unk_0x1DB03C7D3DC49006(*uParam1, 0);
				}
				func_229(uParam0, 0, 0);
				func_248(uParam0, 2, 1, 0, 0);
			}
			else if (func_111(uParam0, 14) > 20f)
			{
				func_349(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_183(uParam0, 14))
			{
				func_309(uParam0, 2, 0, 0);
				func_236(uParam0);
			}
			if (unk_0xE769D9B5158D0F11(uParam0->f_10))
			{
				unk_0x40D517D991458154(&(uParam0->f_10));
			}
			if ((unk_0xE769D9B5158D0F11(*uParam1) && unk_0x62FE0DE30E64B492(*uParam1) < 255) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
			{
				unk_0x1DB03C7D3DC49006(*uParam1, 255);
				unk_0x63EECA6600F1090E(*uParam1, 1);
			}
		}
	}
}

void func_243(var uParam0)
{
	func_244(uParam0, 1000);
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xD9FCA20C1C5553F7(uParam0->f_3);
		unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
	}
	func_146();
	func_236(uParam0);
}

void func_244(var uParam0, int iParam1)
{
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xF5F744EF9F4DB21E(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
	}
}

void func_245(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x9E1C273D1197BF71(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x52756EBA46F4FA41(Var0, Var3, 1);
		unk_0xEE0B7B5DD68BDE7A();
	}
}

void func_246()
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

void func_247(var uParam0)
{
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	func_244(uParam0, 1000);
}

void func_248(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_309(uParam0, 16, 4f, 0);
		if (func_249(uParam0))
		{
			func_45();
		}
	}
	func_273(uParam0, iParam2, bParam3);
}

int func_249(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_205())
	{
		Var6 = { func_251() };
		if (!unk_0xFAFFA408239A026B(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_250(&Var0);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_250(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
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

int func_252(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if ((unk_0xDB5E52F2078862CA(uParam0->f_3) && (unk_0x5AFB8ED811F05E4D() - iLocal_89) > 500) || unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_253()
{
	unk_0x9016574B77A748EE(Local_853.f_0);
	unk_0x9016574B77A748EE(Local_853.f_1);
	unk_0x9016574B77A748EE(iLocal_888);
	unk_0x9016574B77A748EE(iLocal_889);
	unk_0xAE5F484E08487A0F(120, "txm_fc_h1_");
	unk_0xAE5F484E08487A0F(0, "taxi_oj_fc3");
	unk_0x556D5BBBB0AC3BCB(&cLocal_976);
	unk_0x831CD0FBFB26EC7E("veh@truck@ds@base");
}

int func_254(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
			{
			}
			func_226(uParam0, 1);
			if (func_32())
			{
				unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
			}
			if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xD9FCA20C1C5553F7(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), 0))
		{
			func_271(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x56C7B20E11B37066(&uVar3);
				unk_0xC8BEB049F3BFC0AB(&uVar3);
				unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
				unk_0xAFDA7B8F83B2CA58(uVar3);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_183(uParam0, 14))
			{
				func_236(uParam0);
				func_228(uParam0, 0);
			}
			if (func_183(uParam0, 9))
			{
				func_202(uParam0, 9, 0);
				unk_0x08FC50794202A47C();
				if (unk_0xE769D9B5158D0F11(uParam0->f_8))
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
					unk_0x63EECA6600F1090E(uParam0->f_8, 1);
				}
			}
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x2A72627520A107B5(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_270(uParam0, uParam0->f_3) > 300f)
				{
					func_349(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 || ((func_48(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 20f && func_215(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_215(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_267(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_266(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_265(uParam0->f_4, uParam0->f_3);
								iVar0 = func_264(uParam0, &iVar1);
								if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
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
										unk_0x5941F8B2A813BBA8(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x5941F8B2A813BBA8(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
											{
												unk_0x5941F8B2A813BBA8(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x267F7A2DFDFFB077(uParam0->f_3);
							unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_201(uParam0))
							{
								unk_0x267F7A2DFDFFB077(uParam0->f_3);
							}
							else if (((unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0) && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 7) && func_270(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x56C7B20E11B37066(&(uParam0->f_243));
								unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
								unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
								unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x700F262B92196AB4(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_48(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_263(uParam0, 1))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_349(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_262(uParam0->f_4))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_349(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_260(uParam0);
						if (func_270(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_256(uParam0))
								{
									func_255(uParam0);
									iLocal_89 = unk_0x5AFB8ED811F05E4D();
									unk_0x764AFC5A3A16C2B0(uParam0->f_3, 26, 1);
									func_202(uParam0, 5, 0);
									unk_0x49704B3BB3A3F2E7();
									unk_0x205C6BBC993A91EA(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xC1EC3CD3D3C6690B(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_255(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
}

int func_256(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_138("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		func_149();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_145(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_121(uParam0, 0, 1084227584) && func_144(1, 1, 1))
			{
				if (func_263(uParam0, 1))
				{
					iLocal_88 = unk_0x5AFB8ED811F05E4D();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_349(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_265(uParam0->f_4, uParam0->f_3);
				iVar9 = func_264(uParam0, &iVar10);
				if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
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
						unk_0x5941F8B2A813BBA8(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x5941F8B2A813BBA8(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
						{
							unk_0x5941F8B2A813BBA8(iVar9, 0, 4096);
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
			iVar12 = func_185(&(uParam0->f_409), unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0), 1);
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
				func_137(0, 0, 1);
				unk_0xE6B6928D4EED07B1(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 3f, 0);
				unk_0x5E791DD328BCDC42(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 25f, 0);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_116();
				func_273(uParam0, 0, 0);
				Var13 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
				unk_0x990FFD4FB6ADD630(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uParam0->f_3, func_258(uParam0));
				func_140(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xF6910B463A17E809(*uParam0, unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0));
				unk_0xEEBA7A992DA7B65A(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x2C535610856B3F4D(*uParam0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				unk_0x8F2E6C470A0005D4(uParam0->f_3, 0, 0);
				unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_138("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
				{
					unk_0x8D77EFA08616AD64(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xFC8F21F2629FD98F(uParam0->f_4, func_257(uParam0->f_7), 1);
				}
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				unk_0x13AD763DBD687842(*uParam0, 0);
				unk_0x13AD763DBD687842(uParam0->f_1, 0);
				unk_0xA3F41A1968319181(0);
				unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				unk_0x8359CF51370FC969(800);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_116();
				func_273(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5())
			{
				func_130(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			unk_0x13AD763DBD687842(*uParam0, 0);
			unk_0x13AD763DBD687842(uParam0->f_1, 0);
			unk_0xA3F41A1968319181(0);
			unk_0x4CCECEB2EA5D6A82(0, 1065353216);
			func_130(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (unk_0xDB5E52F2078862CA(uParam0->f_3) || unk_0x657B649BA2AD3582(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 0)
				{
					unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)
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

float func_258(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_259(unk_0x761660F5CE986DC4(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_259(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x7F21F40674579303((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_260(var uParam0)
{
	var uVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (func_227(uParam0->f_3, 1) > 30f || func_261(uParam0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, -1794415470) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) == 1)
				{
					unk_0x56C7B20E11B37066(&uVar0);
					unk_0xC8BEB049F3BFC0AB(&uVar0);
					unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
					unk_0xB5746603774C4C9D(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xAFDA7B8F83B2CA58(uVar0);
					unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
					func_349(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_261(var uParam0)
{
	if ((unk_0x2A72627520A107B5(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || unk_0xA8CA97883F68F589(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x9308517E4356A987(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xEA44DF1A202A5946(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 3))
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

int func_263(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x31F12808DC47A9E5(iVar0[iVar4]))
			{
				if (unk_0x74C2FE037DFC8B4A(iVar0[iVar4], 0))
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
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_264(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		if (unk_0x31F12808DC47A9E5(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xE4752B503DF3FEC0(iParam0);
	Var0 = { unk_0xCC9FF9C751023D2A(iParam0, unk_0x761660F5CE986DC4(iParam1, 1)) };
	if (unk_0x4F69FBD64CDF125B(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_266(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3) && func_227(uParam0->f_3, 1) < fParam2)
		{
			if (!func_183(uParam0, 5))
			{
				func_309(uParam0, 5, 0, 0);
			}
		}
		else if (func_183(uParam0, 5))
		{
			func_202(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && unk_0x2A72627520A107B5(uParam0->f_4) < fParam4) && !unk_0xD76674575E7BA743(uParam0->f_3)) || func_227(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_267(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x79CEF243729F54F9(uParam0->f_4, iVar18) };
		Var6 = { unk_0xCC9FF9C751023D2A(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
	Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x33DBF622738C10E9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_48(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x36E1A96E1D63ED91((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x96011BB04BED3CD0(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xA3F56DCC3ACBDEC5(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0)
			{
				unk_0x56C7B20E11B37066(&(uParam0->f_243));
				unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x8F251305F4CAD788(uParam0->f_243, 1);
				unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x08FC50794202A47C();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_248(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_268(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x6016A20BFEAEFE11(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x700F262B92196AB4(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_268(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, uParam2, func_269(iParam3), 0);
}

int func_269(int iParam0)
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

float func_270(var uParam0, int iParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (func_201(uParam0))
		{
			return func_48(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_271(var uParam0)
{
	func_234(uParam0, uParam0->f_3);
	if (func_201(uParam0))
	{
		if (func_183(uParam0, 14))
		{
			func_236(uParam0);
			if (unk_0xE769D9B5158D0F11(uParam0->f_10))
			{
				unk_0x40D517D991458154(&(uParam0->f_10));
			}
		}
	}
	if (!func_183(uParam0, 9))
	{
		if (unk_0xE769D9B5158D0F11(uParam0->f_8))
		{
			unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
			unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		}
		func_309(uParam0, 9, 0, 0);
		func_272("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_272(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

void func_273(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_309(uParam0, 16, 4f, 0);
		unk_0x08FC50794202A47C();
	}
}

int func_274(var uParam0, int iParam1)
{
	if (!unk_0x9F22E45F3CF7EACA(2))
	{
		return 0;
	}
	func_278(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()) && !func_21(uParam0->f_44, 256))
			{
				func_64(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				func_248(uParam0, 135, 1, 0, 1);
				func_64(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_277(uParam0, iParam1))
	{
		if (func_227(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
				func_248(uParam0, 133, 1, 0, 1);
				func_64(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x0FAE113CE72ED842(uParam0->f_3) || unk_0x3ECC58F70B51B88E(uParam0->f_3)) || func_227(uParam0->f_3, 1) > 400f)
		{
			func_349(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x5AD687C3474F04B4(uParam0->f_2, 0);
		unk_0xE58E53D56F33BF17(uParam0->f_4, 1);
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x2859D31D18BD568A(uParam0->f_4);
			func_275(uParam0);
			func_52(2, 0);
			bLocal_94 = true;
			func_112(&uLocal_90);
			return 1;
		}
		else
		{
			func_349(uParam0, "No Taxi", 21);
			func_161("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_275(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (func_276())
		{
		}
	}
}

int func_276()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_277(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				iVar1 = unk_0x4F69FBD64CDF125B(iVar0);
				bVar2 = func_262(iVar0);
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
				if (unk_0x881022B41FD53CD6(iVar1))
				{
					if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xE4752B503DF3FEC0(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_161("TX_VIP_DMGD", -1);
							if (func_153("TX_VIP_DMGD"))
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
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_161("TX_VIP_CAR", -1);
							if (func_153("TX_VIP_CAR"))
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
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_161("TX_VIP_SMALL", -1);
							if (func_153("TX_VIP_SMALL"))
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

void func_278(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		uVar0 = iParam0;
		unk_0x7B7CECD66CFA2F8F(8, &uVar0, 1, 1);
	}
	else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x096B0E6C117BD7BF(8, &cVar1);
	}
}

void func_279(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_280(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x62148293B793073B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x62148293B793073B(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_281(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_282()
{
	Local_343.f_0 = 0;
	func_299(46975, 46950, 1);
	func_299(46711, 46687, 1);
	func_299(46625, 46600, 1);
	func_299(46528, 46504, 1);
	func_299(46394, 46373, 1);
	func_299(46320, 46295, 1);
	func_299(46153, 46129, 1);
}

int func_283(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_284(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_286(uParam0->f_4))
		{
			func_285(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_286(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_287(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_288(var uParam0)
{
	if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		if (func_289(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_290(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_285(uParam0, 11);
	return 1;
}

int func_291(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (unk_0xE1F715CDDC50FD7F(uParam0->f_4) && !unk_0x19160618B3657F0E(uParam0->f_4))
		{
			if (!func_183(uParam0, 25))
			{
				func_309(uParam0, 25, 0, 0);
			}
			else if (func_111(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_183(uParam0, 25))
		{
			func_202(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_293(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0x17D9B02D2AC9770A(uParam0->f_4))
		{
			if (unk_0x08438F954B83E80B(uParam0->f_4, 0, 40000) || unk_0x08438F954B83E80B(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_295(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
			{
				if (func_289(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_296(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_297(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_298(uParam0->f_4))
		{
			func_285(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) == 0f)
	{
		if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_299(int iParam0, int iParam1, bool bParam2)
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

int func_300(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_349(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_301(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if ((unk_0x0FAE113CE72ED842(uParam0->f_3) || unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0)) || unk_0x25A40FAC128F45B0(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_302()
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

int func_303()
{
	if (!unk_0xEDFE27D1AEA0EA7F(iLocal_886))
	{
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_304(&iLocal_896, 0))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_304(int iParam0, bool bParam1)
{
	if (!unk_0xEDFE27D1AEA0EA7F(func_18()))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x028356968FDD2DF2("gestures@m@standing@casual"))
		{
			func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@taxi@"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@towingcome_here"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("misscommon@response"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x9F22E45F3CF7EACA(2))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_305(var uParam0, int iParam1)
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

int func_306(var uParam0)
{
	if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
	{
		uParam0->f_8 = func_208(uParam0->f_3, 0, 0);
		unk_0x14172FEAD9C1EA26(1, 0);
		unk_0x63EECA6600F1090E(uParam0->f_8, 1);
		unk_0x61C2EC67C90074E5(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x6016A20BFEAEFE11(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 4);
	}
	return 1;
}

int func_307(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		func_308(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0xE6B6928D4EED07B1(uParam0->f_14, 2f, 0);
		func_245(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xC0AF3316B9E3D71B(uParam0->f_11);
		}
		else if (unk_0x31F12808DC47A9E5(Global_103261.f_225[0]))
		{
			uParam0->f_3 = Global_103261.f_225[0];
			unk_0x337F2213526139E0(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x364B87C5C64BD100(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x2F51E4FCC3B20959(uParam0->f_3, sParam7);
		unk_0xB05E48165A6F6058(uParam0->f_3, 112, 1);
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			unk_0xC74F690FB603E9C5(uParam0->f_3, 250);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 32, 0);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 104, 1);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 177, 1);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 116, 0);
			unk_0x48E76A4B7B58B77A("TAXI_Passenger", &(uParam0->f_413));
			unk_0xFB5F4D76105A21B5(1, uParam0->f_413, joaat("player"));
			unk_0xFB5F4D76105A21B5(2, uParam0->f_413, joaat("COP"));
			unk_0x641E77554763EF06(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_308(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x1ABF7AC8776154B1(Param1, 20f, 5f, 0);
}

void func_309(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_105(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_104(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_105(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_310()
{
	unk_0x9016574B77A748EE(iLocal_886);
	func_312(0);
	uLocal_1132 = func_311();
	unk_0x831CD0FBFB26EC7E("gestures@m@standing@casual");
}

var func_311()
{
	return unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
}

void func_312(bool bParam0)
{
	unk_0x9016574B77A748EE(func_18());
	if (bParam0)
	{
		unk_0x831CD0FBFB26EC7E("gestures@m@standing@casual");
	}
	unk_0x831CD0FBFB26EC7E("oddjobs@taxi@");
	unk_0x831CD0FBFB26EC7E("oddjobs@towingcome_here");
	unk_0x831CD0FBFB26EC7E("misscommon@response");
	unk_0x8E058779F430F4D7("TAXI", 2);
	if (!func_21(Global_104551.f_19067, 128))
	{
		func_64(&(Global_104551.f_19067), 128);
	}
}

void func_313(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_248(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_248(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_309(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_248(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_248(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_309(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!func_205())
			{
				if (uParam0->f_112)
				{
					func_248(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_248(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_309(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_13(&(Local_190[5 /*10*/].f_6)))
		{
			func_112(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_336(uParam0))
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_335(uParam0, 1);
				func_333(5, uParam0);
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_13(&(Local_190[0 /*10*/].f_6)))
		{
			func_112(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_331(uParam0))
			{
				func_335(uParam0, 1);
				func_333(0, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_13(&(Local_190[1 /*10*/].f_6)))
		{
			func_112(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_335(uParam0, 1);
				func_333(1, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x0A088F357EF627CA(uParam0->f_4);
				func_112(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_102(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_329(uParam0))
			{
				func_335(uParam0, 1);
				func_333(8, uParam0);
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_13(&(Local_190[6 /*10*/].f_6)))
		{
			func_112(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_328(uParam0))
			{
				func_335(uParam0, 1);
				func_333(6, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_13(&(Local_190[4 /*10*/].f_6)))
		{
			func_112(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_327(uParam0))
			{
				func_335(uParam0, 1);
				func_333(4, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_13(&(Local_190[7 /*10*/].f_6)))
		{
			func_112(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_326(uParam0))
			{
				func_333(7, uParam0);
				func_335(uParam0, 1);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_13(&(Local_190[9 /*10*/].f_6)))
		{
			func_112(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
		}
		else if (func_102(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_325(uParam0))
			{
				func_335(uParam0, 1);
				func_333(9, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_13(&(Local_190[13 /*10*/].f_6)))
		{
			func_112(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_319(uParam0))
			{
				func_335(uParam0, 1);
				func_333(13, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_6)))
		{
			func_112(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_318(uParam0))
			{
				func_335(uParam0, 1);
				func_333(14, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_13(&(Local_190[11 /*10*/].f_6)))
		{
			func_112(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_317(uParam0))
			{
				func_335(uParam0, 1);
				func_333(11, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_13(&(Local_190[12 /*10*/].f_6)))
		{
			func_112(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_102(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				func_335(uParam0, 1);
				func_333(12, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_190[2 /*10*/].f_6)))
		{
			func_315(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_102(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_314(uParam0))
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_335(uParam0, 1);
				func_333(2, uParam0);
				func_332(uParam0);
			}
		}
	}
}

int func_314(var uParam0)
{
	float fVar0;
	
	if (!unk_0x0FAE113CE72ED842(uParam0->f_2))
	{
		if ((!unk_0x647522908459DE3C(uParam0->f_2) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_112(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_102(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_101(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_101(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_315(var uParam0, float fParam1)
{
	if (!func_13(uParam0))
	{
		func_105(uParam0, fParam1);
	}
}

int func_316(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[12 /*10*/].f_3)))
			{
				func_112(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 2.5f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[11 /*10*/].f_3)))
			{
				func_112(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_102(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x36E1A96E1D63ED91(uLocal_342) - unk_0x36E1A96E1D63ED91(Var0.f_0)) < 0f)
			{
				func_101(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_102(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_101(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	if (((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x31F12808DC47A9E5(uParam0->f_5))
			{
				if ((unk_0x2A72627520A107B5(uParam0->f_4) > 15f && func_48(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x74C2FE037DFC8B4A(uParam0->f_5, 0) && !unk_0x74B8CA477787A438(uParam0->f_5, -1, 0)))
				{
					func_112(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_102(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_48(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_101(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_102(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_101(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_101(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	if (((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_320(uParam0->f_4) && unk_0x2A72627520A107B5(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_190[13 /*10*/].f_3)))
			{
				func_112(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_320(int iParam0)
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
	
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x476830DD71AB24D5(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_324((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_323(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_321(unk_0x761660F5CE986DC4(iParam0, 1), Var15, Var18, Var21);
}

int func_321(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_324(Param6 - Param3) };
	Var3 = { func_324(Param9 - Param3) };
	fVar6 = func_322(Param0, Var0);
	fVar7 = func_322(Param3, Var0);
	fVar8 = func_322(Param6, Var0);
	fVar9 = func_322(Param0, Var3);
	fVar10 = func_322(Param3, Var3);
	fVar11 = func_322(Param9, Var3);
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

float func_322(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_323(struct<3> Param0, int iParam3)
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

Vector3 func_324(struct<3> Param0)
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

int func_325(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0xA8CA97883F68F589(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= -145f || unk_0x9E5922B97DC397E0(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= 35f && unk_0x9E5922B97DC397E0(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_327(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC132DB93814AA1EB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[4 /*10*/].f_3)))
			{
				func_112(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_101(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_328(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x69C5769F62E2EDCB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[6 /*10*/].f_3)))
			{
				func_112(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_101(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x5BEDB1779AE301BA(uParam0->f_4))
		{
			iVar0 = unk_0x0A088F357EF627CA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA3F48AA4B6323A62(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, 72, 1, 0, 1);
				}
				func_101(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 3f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[1 /*10*/].f_3)))
			{
				func_112(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_101(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_331(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x19160618B3657F0E(uParam0->f_4) && unk_0x2409C4B1759B2661(uParam0->f_4))
		{
			if (!func_13(&(Local_190[0 /*10*/].f_3)))
			{
				func_112(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_101(&(Local_190[0 /*10*/].f_3));
				func_104(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_104(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_309(uParam0, 10, 0f, 1);
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
}

void func_333(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_334(uParam1, iParam0);
	func_101(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_334(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_335(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_336(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x2A72627520A107B5(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_190[5 /*10*/].f_3)))
			{
				func_112(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_102(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_101(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_337()
{
	struct<3> Var0;
	
	func_138("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x1B843A60307EECA4(Local_423.f_3, unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x1B843A60307EECA4(iLocal_890, unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x1B843A60307EECA4(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
	{
		if (unk_0x1B843A60307EECA4(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_227(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_205())
			{
				func_340(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x89955D5A0644F92C(Local_423.f_3, unk_0x18F7BE9ACB7D08F4(), -1, 0);
				iLocal_900 = unk_0x5AFB8ED811F05E4D();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_146();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0) && !unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0)) && !unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
			{
				unk_0x48E76A4B7B58B77A("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0x773D11D22FA84F6D(Local_423.f_3);
				unk_0xFB5F4D76105A21B5(255, Local_853.f_30, iLocal_893);
				unk_0xFB5F4D76105A21B5(255, Local_853.f_30, iLocal_892);
				unk_0x641E77554763EF06(Local_853.f_2, Local_853.f_30);
				unk_0x641E77554763EF06(iLocal_890, iLocal_893);
				unk_0x40E2910BAF39B1C7(Local_853.f_2, 1);
				unk_0x273FE09AE985A00A(Local_853.f_2, 17, 1);
				unk_0x874004759C4BE8DC(Local_853.f_2, 130);
				unk_0xB2A4C6D6B4409A15(Local_853.f_2, 1);
				unk_0x07C41718268FCB31(Local_853.f_2, 1);
				unk_0x267F7A2DFDFFB077(Local_853.f_2);
				unk_0x40E2910BAF39B1C7(iLocal_890, 1);
				unk_0x273FE09AE985A00A(iLocal_890, 17, 1);
				unk_0x874004759C4BE8DC(iLocal_890, 130);
				unk_0xB2A4C6D6B4409A15(iLocal_890, 1);
				unk_0x07C41718268FCB31(iLocal_890, 1);
				unk_0x267F7A2DFDFFB077(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0) && !unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0)) && !unk_0x74C2FE037DFC8B4A(iLocal_890, 0)) && !unk_0x74C2FE037DFC8B4A(Local_853.f_3, 0))
			{
				unk_0x56C7B20E11B37066(&uLocal_414);
				unk_0xC8BEB049F3BFC0AB(&uLocal_414);
				unk_0x8F467CFC5FBBCE77(0, iLocal_890, 0);
				unk_0xB5746603774C4C9D(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_414);
				unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
				unk_0x56C7B20E11B37066(&uLocal_414);
				unk_0x56C7B20E11B37066(&uLocal_415);
				unk_0xC8BEB049F3BFC0AB(&uLocal_415);
				unk_0x8F467CFC5FBBCE77(0, Local_853.f_2, 0);
				unk_0xB5746603774C4C9D(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_415);
				unk_0x73F69DD57B7E92A9(iLocal_890, uLocal_415);
				unk_0x56C7B20E11B37066(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0x74C2FE037DFC8B4A(iLocal_890, 0) && !unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
				{
					unk_0x641E77554763EF06(Local_423.f_3, iLocal_892);
					unk_0x40E2910BAF39B1C7(Local_423.f_3, 1);
					unk_0x273FE09AE985A00A(Local_423.f_3, 13, 1);
					unk_0xE54D36F901A54378(Local_423.f_3, 100);
					unk_0x9D02030EF7A1C310(Local_423.f_3, 100);
					unk_0x874004759C4BE8DC(Local_423.f_3, 105);
					unk_0x267F7A2DFDFFB077(Local_423.f_3);
					unk_0x56C7B20E11B37066(&uLocal_416);
					unk_0xC8BEB049F3BFC0AB(&uLocal_416);
					unk_0x73E31FC09D8359DB(0, 5000);
					func_339(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0x394F5D18B411ECAD(0, func_338(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0x7F978F7D92B78559(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xAFDA7B8F83B2CA58(uLocal_416);
					unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_416);
					unk_0x56C7B20E11B37066(&uLocal_416);
					iLocal_902 = 1;
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 256);
					unk_0x7D154B840BD03D00(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0x0FAE113CE72ED842(Local_853.f_2) && !unk_0x0FAE113CE72ED842(iLocal_890))
				{
					if (func_227(Local_853.f_2, 1) < 2f || func_227(iLocal_890, 1) < 2f)
					{
						unk_0x267F7A2DFDFFB077(Local_853.f_2);
						unk_0x267F7A2DFDFFB077(iLocal_890);
						unk_0x6016A20BFEAEFE11(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 4);
						unk_0x56C7B20E11B37066(&uLocal_414);
						unk_0xC8BEB049F3BFC0AB(&uLocal_414);
						unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_414);
						unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
						unk_0x6016A20BFEAEFE11(iLocal_890, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 4);
						unk_0x56C7B20E11B37066(&uLocal_415);
						unk_0xC8BEB049F3BFC0AB(&uLocal_415);
						unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0xAFDA7B8F83B2CA58(uLocal_415);
						unk_0x73F69DD57B7E92A9(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0x0FAE113CE72ED842(Local_853.f_2))
					{
					}
					else
					{
						unk_0x267F7A2DFDFFB077(Local_853.f_2);
						unk_0x9603FB72C3126396(Local_853.f_2, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					}
					if (unk_0x0FAE113CE72ED842(iLocal_890))
					{
					}
					else
					{
						unk_0x267F7A2DFDFFB077(iLocal_890);
						unk_0x9603FB72C3126396(iLocal_890, unk_0x18F7BE9ACB7D08F4(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_138("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(Local_423.f_3, 242628503) == 1)
				{
					if (unk_0x461DEB4775BA9DC1(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			}
			if (((!unk_0x0FAE113CE72ED842(iLocal_890) && unk_0x20BE2EAD83953A78(iLocal_890)) && !unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0)) && !bLocal_908)
			{
				unk_0x6016A20BFEAEFE11(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0x56C7B20E11B37066(&uLocal_414);
				unk_0xC8BEB049F3BFC0AB(&uLocal_414);
				unk_0x73E31FC09D8359DB(0, 500);
				unk_0xB5746603774C4C9D(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x8F467CFC5FBBCE77(0, Local_423.f_3, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_414);
				unk_0x73F69DD57B7E92A9(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0) && !unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
			{
				if (unk_0x461DEB4775BA9DC1(Local_423.f_3) > 2)
				{
					func_248(&Local_423, 58, 1, 0, 0);
					unk_0x56C7B20E11B37066(&uLocal_416);
					unk_0xC8BEB049F3BFC0AB(&uLocal_416);
					unk_0x81D9C52E2A8DA464(0);
					unk_0x89955D5A0644F92C(0, Local_853.f_2, 2000, 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_416);
					unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_138("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0x74C2FE037DFC8B4A(iLocal_890, 0))
			{
				if (!unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
				{
					if (!unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
					{
						unk_0x56C7B20E11B37066(&uLocal_415);
						unk_0xC8BEB049F3BFC0AB(&uLocal_415);
						unk_0x394F5D18B411ECAD(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x89955D5A0644F92C(0, Local_853.f_2, -1, 1);
						unk_0xAFDA7B8F83B2CA58(uLocal_415);
						unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_138("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_205())
			{
				if (!unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0) && !unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0))
				{
					unk_0x7F978F7D92B78559(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_138("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0x74C2FE037DFC8B4A(Local_853.f_2, 0) && !unk_0x74C2FE037DFC8B4A(Local_423.f_3, 0))
			{
				Var0 = { unk_0x761660F5CE986DC4(Local_853.f_2, 0) };
				unk_0xC8BEB049F3BFC0AB(&uLocal_416);
				unk_0x769D0AED8DB447AD(0, Var0, 1000, 0, 0);
				unk_0xC880243A9C5321F2(0, 0);
				unk_0x73E31FC09D8359DB(0, 500);
				unk_0x03088152F371C16F(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_416);
				unk_0x73F69DD57B7E92A9(Local_423.f_3, uLocal_416);
				unk_0x56C7B20E11B37066(&uLocal_416);
				unk_0x10F31830C95ED2E5(Local_423.f_3, 1);
				iLocal_905 = 1;
			}
			break;
	}
}

Vector3 func_338(int iParam0)
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

void func_339(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) < unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(0, uParam0->f_4, 131584);
			}
			else if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) >= unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0xD7A975DB04C06BA4(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_340(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_341(sParam2, iParam3, 0);
}

int func_341(char* sParam0, int iParam1, bool bParam2)
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
					func_147();
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
		if (func_347(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_346();
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
				func_345();
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
				if (func_344())
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
			if (func_30())
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
			func_343();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_342();
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
		func_147();
	}
	return 0;
}

void func_342()
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

void func_343()
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

int func_344()
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

void func_345()
{
	if (func_79(14))
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
		Global_14453 = func_98();
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

void func_346()
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

bool func_347(int iParam0, int iParam1)
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_349(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_146();
	func_450(2);
	Var0 = { func_356() };
	if ((!unk_0xFAFFA408239A026B(&Var0) && func_205()) && !unk_0x9D39145AD645E383(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x08FC50794202A47C();
		unk_0xEFF1F12403847394(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!func_217(uParam0))
			{
				if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_309(uParam0, 3, 0, 0);
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
				func_354(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_217(uParam0))
			{
				if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
				{
					func_351(uParam0, 4096, 0);
				}
				else
				{
					func_351(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_354(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_354(uParam0, &Var0);
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
				func_354(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_354(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_354(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
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
				func_354(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_351(uParam0, 0, 0);
			func_354(uParam0, &Var0);
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
				func_354(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_354(uParam0, &Var0);
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
				func_354(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_350(&Var0);
			func_340(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_354(uParam0, &Var0);
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
					func_354(uParam0, &Var0);
				}
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_268(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_309(uParam0, 3, 0f, 1);
	}
}

void func_350(char* sParam0)
{
	switch (func_3(unk_0x18F7BE9ACB7D08F4()))
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

void func_351(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
		unk_0xA3F48AA4B6323A62(uParam0->f_3);
		unk_0x470C9634914699C0(uParam0->f_3, 3, 0);
		unk_0x273FE09AE985A00A(uParam0->f_3, 17, 1);
		unk_0x267F7A2DFDFFB077(uParam0->f_3);
		if ((func_50(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_353(uParam0->f_29)) && !bParam2)
		{
			func_352(uParam0);
		}
		else
		{
			unk_0x470C9634914699C0(uParam0->f_3, 1024, 1);
			unk_0x470C9634914699C0(uParam0->f_3, 131072, 1);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
			}
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

void func_352(var uParam0)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 84.9058f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 68.3138f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x56C7B20E11B37066(&uVar0);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, 0);
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xA303A4837FBB8DDE(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x37B842A4CEC2630C(0, 1);
				unk_0xA303A4837FBB8DDE(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x8A32C8BCE5987E9B(0, 151.7794f, 0);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 20000);
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xB6B12179F5BB7520(uParam0->f_29, 15f, 1))
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

int func_353(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_354(var uParam0, char* sParam1)
{
	if (func_355(uParam0))
	{
		func_340(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_355(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_48(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 40f && !unk_0xD76674575E7BA743(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_356()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		if (iVar6 > -1)
		{
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_357(var uParam0)
{
	return uParam0->f_118;
}

void func_358()
{
	func_388(&Local_423);
	if (func_387(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_386(&Local_423))
					{
						if (func_385("TAXI_OBJ_FTC1") || unk_0xE769D9B5158D0F11(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_192(&Local_423) != 10)
						{
							func_248(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_192(&Local_423) > 10 && func_192(&Local_423) != 15) && !func_386(&Local_423))
				{
					func_248(&Local_423, 15, 1, 0, 0);
					func_198(&Local_423, 7);
				}
				break;
			}
	}
	func_359(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_359(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_367(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_183(uParam0, 2))
	{
		if (func_366(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x5AFB8ED811F05E4D() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_365(uParam0))
				{
					uParam2->f_7 = { func_364(uParam1) };
					func_340(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_205())
				{
					uParam2->f_13 = { func_251() };
					if (unk_0x9D39145AD645E383(&(uParam2->f_13), &(uParam2->f_7)))
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
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_221(uParam0))
				{
					if (func_205())
					{
						func_309(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_361() };
						if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_205())
				{
					uParam2->f_19 = { func_356() };
				}
				else
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_183(uParam0, 14) && !func_205()) && !func_221(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					func_309(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_205())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!unk_0xFAFFA408239A026B(&(uParam2->f_1)))
						{
							func_360(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_205())
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_360(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_341(sParam2, iParam4, 0);
}

struct<6> func_361()
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

void func_362(var uParam0)
{
	int iVar0;
	
	iVar0 = func_363(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_64(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
	}
}

int func_363(var uParam0)
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

struct<6> func_364(var uParam0)
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

int func_365(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_223("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_223("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_223("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_223("TX_OBJ_GYB_DO", 0, 0) || func_223("TAXI_OBJ_GYB", 0, 0)) || func_223("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_223("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_223("TX_OBJ_CYI_DO", 0, 0) || func_223("TAXI_OBJ_CYI_01", 0, 0)) || func_223("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_223("TX_OBJ_GYN_DO", 0, 0) || func_223("TAXI_OBJ_GYN", 0, 0)) || func_223("TAXI_OBJ_GYN_TG", 0, 0)) || func_223("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_223("TAXI_OBJ_CC1", 0, 0) || func_223("TAXI_OBJ_CC2", 0, 0)) || func_223("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_223("TAXI_OBJ_FTC1", 0, 0) || func_223("TAXI_OBJ_FTC2", 0, 0)) || func_223("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_223("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_223("TAXI_OBJ_GETRUN", 0, 0) || func_223("TAXI_OBJ_DRIVE", 0, 0)) || func_223("TAXI_OBJ_RETURN", 0, 0)) || func_223("TAXI_OBJ_POL", 0, 0)) || func_223("TAXI_OBJ_RUNOUT", 0, 0)) || func_223("TAXI_OBJ_POL", 0, 0));
}

int func_366(var uParam0)
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

void func_367(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_365(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_183(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_192(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_382(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_205())
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
						func_381(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_378(uParam0, Var0, func_380(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				func_232(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					func_233(1);
					if (uParam0->f_411 == 9)
					{
						func_272("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_272("TAXI_VIP_RETURN", 7500, 1);
					}
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
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
					func_381(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_268(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > func_126(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_205()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_192(uParam0))
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
				func_381(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_382(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_340(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_248(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_309(uParam0, 16, 0, 0);
				func_248(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_384(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_381(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_309(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_272("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_272("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
				}
				func_248(uParam0, 10, 1, 0, 0);
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
				func_250(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_268(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
				}
				func_248(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_377(uParam0, 33554432, Var0, "", 1, 8);
				func_309(uParam0, 16, 0, 0);
				func_248(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_205())
				{
					func_376(uParam0, 0);
					func_64(&(uParam0->f_44), 4);
					func_309(uParam0, 16, 0, 0);
					func_248(uParam0, 13, 0, 0, 0);
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
				func_250(&Var0);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_250(&Var0);
					}
					func_374(Var0, uParam1);
					func_64(&(uParam0->f_81), 67108864);
					func_309(uParam0, 16, 0, 0);
					func_309(uParam0, 11, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_111(uParam0, 11) > uParam0->f_36)
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
							func_250(&Var0);
						}
					}
					func_374(Var0, uParam1);
					func_309(uParam0, 11, 0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
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
					func_250(&Var0);
				}
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
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
				func_250(&Var0);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
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
				func_250(&Var0);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_250(&Var0);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				func_64(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 1, 0, 8);
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
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
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
					func_373(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_373(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_374(Var0, uParam1);
				func_382(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 6, 0f, 1);
				func_273(uParam0, 0, 0);
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
					func_373(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_373(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_374(Var0, uParam1);
				func_382(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 6, 0f, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 12:
				func_272("TAXI_OBJ_GYB", 3500, 1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_272("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_272("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_272("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
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
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_272("TAXI_OBJ_CYI_01", 7500, 1);
					func_64(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_250(&Var0);
				func_374(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_250(&Var0);
				func_374(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_250(&Var0);
				func_374(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 33:
				func_272("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_250(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_374(Var0, uParam1);
						}
						else
						{
							func_381(uParam0, &Var0, 0, 0, 8);
						}
						func_64(&(uParam0->f_82), 8192);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_250(&Var0);
					func_381(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_250(&Var0);
					func_381(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 46, 1, 0, 0);
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
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_273(uParam0, 0, 0);
				break;
			
			case 139:
				func_272("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_248(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 120);
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
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 100);
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
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_272("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_273(uParam0, 0, 0);
				func_248(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_205())
				{
					func_272("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_273(uParam0, 0, 0);
					func_248(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_272("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_273(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_372(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_372(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_382(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
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
				func_381(uParam0, &Var0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_382(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_382(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_382(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_382(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_372(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_372(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_372(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_382(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_371(uParam0))
				{
					func_378(uParam0, Var0, func_380(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_268(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_384(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_340(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_384(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_384(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_382(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_309(uParam0, 16, 0, 0);
				}
				func_273(uParam0, 0, 0);
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
						func_250(&Var0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_250(&Var0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_250(&Var0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_309(uParam0, 16, 0, 0);
				}
				func_382(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_377(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_377(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_382(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_377(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_377(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_382(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_370(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_370(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_370(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_273(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_384(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_382(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_377(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_377(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_371(uParam0))
				{
					func_378(uParam0, Var0, func_380(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_268(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_309(uParam0, 16, 0, 0);
				}
				func_382(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_205())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_381(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_378(uParam0, Var0, func_380(uParam0, 65));
					func_273(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_205())
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
					func_381(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_378(uParam0, Var0, func_380(uParam0, 66));
					func_273(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_205())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								func_382(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								func_382(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_384(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_382(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_309(uParam0, 16, 0, 0);
								func_273(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_381(uParam0, &Var0, 0, 0, 8);
									func_309(uParam0, 16, 0, 0);
									func_309(uParam0, 11, 0, 0);
									func_273(uParam0, 0, 0);
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
									func_250(&Var0);
									func_381(uParam0, &Var0, 0, 0, 8);
									func_309(uParam0, 16, 0, 0);
									func_309(uParam0, 11, 0, 0);
									func_273(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_381(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_248(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_382(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_370(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_370(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_370(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_273(uParam0, 0, 0);
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
				func_384(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_268(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_309(uParam0, 16, 0, 0);
				func_382(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_371(uParam0))
				{
					func_378(uParam0, Var0, func_380(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_268(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_369(uParam0, Var0, 8);
				}
				func_382(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_64(&(uParam0->f_83), 1024);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_64(&(uParam0->f_83), 2048);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_64(&(uParam0->f_83), 4096);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_250(&Var0);
					func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_370(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_370(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_382(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 52, 1, 0, 0);
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
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_268(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_371(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_381(uParam0, &Var0, 0, 0, 8);
						func_248(uParam0, 52, 1, 0, 0);
						func_309(uParam0, 16, 0, 0);
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
						func_381(uParam0, &Var0, 0, 0, 8);
						func_309(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_384(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_382(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_309(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					func_272("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_377(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_377(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_377(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_382(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_368(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_368(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_382(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 100:
				func_272("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_273(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_250(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_250(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &Var0, 0, 0, 8);
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
					func_250(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
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
						func_250(&Var0);
						func_374(Var0, uParam1);
						func_64(&(uParam0->f_82), 65536);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_250(&Var0);
						func_374(Var0, uParam1);
						func_64(&(uParam0->f_82), 131072);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
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
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_384(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_250(&Var0);
					func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_381(uParam0, &Var0, 0, 0, 8);
				}
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_374(Var0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_384(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_248(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_64(&(uParam0->f_81), 2097152);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_250(&Var0);
				func_374(Var0, uParam1);
				func_64(&(uParam0->f_81), 67108864);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_377(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_268(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_248(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_377(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_248(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_272("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_273(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_377(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
						{
							func_268(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_377(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_248(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_272("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_273(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_377(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 88:
				func_272("TAXI_TIEFLEE", 7500, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_272("TAXI_OBJ_CYI_1B", 7500, 1);
					func_64(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_273(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_250(&Var0);
				func_381(uParam0, &Var0, 0, 0, 8);
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
				func_381(uParam0, &Var0, 0, 0, 8);
				func_273(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_381(uParam0, &Var0, 0, 0, 8);
				func_273(uParam0, 0, 0);
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
				func_381(uParam0, &Var0, 0, 0, 8);
				func_273(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_381(uParam0, &Var0, 1, 0, 8);
				func_248(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_272("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_248(uParam0, 0, 0, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			}
	}
}

void func_368(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_250(&Param2);
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_369(var uParam0, struct<6> Param1, int iParam7)
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
		StringIntConCat(&cVar0, unk_0x61E9B3BFA06B017B(1, 3), 24);
	}
	func_383(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_309(uParam0, 16, 0, 0);
}

void func_370(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_250(&Param2);
		}
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_371(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_372(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_64(&(uParam0->f_81), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_340(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_373(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_250(sParam2);
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

void func_374(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_375(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_64(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_375(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xFAFFA408239A026B(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_376(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_272("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_272("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_272("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_272("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_272("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_272("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_272("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_272("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_272("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_272("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_272("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_272("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_377(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_81), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_250(&Param2);
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_378(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_309(uParam0, 16, 0, 0);
	func_309(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
	{
		unk_0x410B23415DE0EFFE(uParam0->f_3, &cParam1, func_379(uParam0));
	}
}

char* func_379(var uParam0)
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

char* func_380(var uParam0, int iParam1)
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

int func_381(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_309(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_309(uParam0, 17, 0f, 1);
	}
	func_273(uParam0, iParam2, 0);
	return func_340(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_382(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_383(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_341(sParam2, iParam4, 0);
}

void func_384(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_250(sParam2);
				}
				else
				{
					func_250(sParam2);
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

int func_385(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (func_223(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(var uParam0)
{
	if (func_205())
	{
		return 1;
	}
	if (func_183(uParam0, 17))
	{
		return 1;
	}
	if (func_183(uParam0, 14))
	{
		return 1;
	}
	if (func_221(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_387(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_183(uParam0, 9));
}

void func_388(var uParam0)
{
	if (func_183(uParam0, 17))
	{
		if (!func_183(uParam0, 14))
		{
			if (!func_221(uParam0))
			{
				if (!func_205())
				{
					func_202(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_389(var uParam0)
{
	return uParam0->f_117;
}

void func_390(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xFAFFA408239A026B(&(uParam0->f_124)) && func_205())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_205())
				{
					StringCopy(&(uParam0->f_124), func_143(), 24);
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

void func_391(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_289(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_289(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_289(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_65(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x5AFB8ED811F05E4D();
							}
						}
						else
						{
							func_20(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_289(Local_343.f_1[iVar0 /*4*/], 4) && !func_289(Local_343.f_1[iVar0 /*4*/], 8))
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
			func_349(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_392(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_183(uParam0, 27))
	{
		func_198(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_111(uParam0, 27) > 5f)
	{
		if (func_419(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_309(uParam0, 27, 0, 0);
			func_309(uParam0, 10, 0, 0);
			func_417(uParam0, &uVar0, uParam1);
		}
		func_414(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_393(uParam0);
	}
	if ((((!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && (unk_0x5400DC5FAEBF30F0(*uParam0) && !unk_0xEFEFF8C622C1C559(*uParam0))) && (unk_0x5400DC5FAEBF30F0(uParam0->f_1) && !unk_0xEFEFF8C622C1C559(uParam0->f_1))) && !unk_0xC45919BF593ACF15()) && !func_205())
	{
		if (func_111(uParam0, 26) > 10f)
		{
			func_202(uParam0, 26, 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	else if (func_183(uParam0, 26))
	{
		func_202(uParam0, 26, 0);
	}
	return 0;
}

void func_393(var uParam0)
{
	if (!func_413(uParam0->f_429))
	{
		uParam0->f_429 = func_412();
		func_403(&(uParam0->f_429), 0, 0, unk_0x61E9B3BFA06B017B(4, 7), 0, 0, 0);
	}
	else if (func_394(uParam0->f_429))
	{
		func_349(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_394(int iParam0)
{
	return func_395(func_412(), iParam0);
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_413(iParam1) || !func_413(iParam0))
	{
		return 1;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_400(iParam0);
	iVar1 = func_400(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	iVar1 = func_399(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_397(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_398(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_399(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_400(int iParam0)
{
	return iParam0 & 15;
}

var func_401(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_402(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_402(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_401(*uParam0);
	iVar1 = func_400(*uParam0);
	iVar2 = func_399(*uParam0);
	iVar3 = func_398(*uParam0);
	iVar4 = func_397(*uParam0);
	iVar5 = func_396(*uParam0);
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
	iVar6 = func_411(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_411(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_404(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_404(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_410(uParam0, iParam1);
	func_409(uParam0, iParam2);
	func_408(uParam0, iParam3);
	func_407(uParam0, iParam5);
	func_406(uParam0, iParam4);
	func_405(uParam0, iParam6);
}

void func_405(var uParam0, int iParam1)
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

void func_406(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_400(*uParam0);
	iVar1 = func_401(*uParam0);
	if (iParam1 < 1 || iParam1 > func_411(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_407(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_408(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_409(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_410(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_411(int iParam0, int iParam1)
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

int func_412()
{
	var uVar0;
	
	func_410(&uVar0, unk_0xB093145A4ED05C87());
	func_409(&uVar0, unk_0x4BF279EB036481A0());
	func_408(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_406(&uVar0, unk_0x518720E0DE404FFC());
	func_407(&uVar0, unk_0x5E3E9A684A609866());
	func_405(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

int func_413(int iParam0)
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
	iVar0 = func_396(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_397(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_398(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_401(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_400(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_399(iParam0);
	if (iVar5 < 1 || iVar5 > func_411(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_414(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_416()) && !func_201(uParam0)) || ((uParam0->f_411 != 9 && func_277(uParam0, 1)) && !func_201(uParam0)))
		{
			uVar0 = func_415(uParam0->f_4);
			unk_0xE13BCCF275C3DEAF(&uVar0);
			uParam0->f_4 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0x337F2213526139E0(uParam0->f_4, 1, 0);
			func_236(uParam0);
			func_228(uParam0, 0);
		}
	}
}

var func_415(var uParam0)
{
	return uParam0;
}

int func_416()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x0665EB554F07889E(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_417(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_418(uParam0, 0, 1))
			{
				func_349(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_418(uParam0, 0, 4))
			{
				func_349(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_418(uParam0, 0, 8))
			{
				func_349(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_418(uParam0, 1, 1))
			{
				func_349(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_418(uParam0, 0, 1))
			{
				func_349(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_217(uParam0))
			{
				func_349(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_418(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_248(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_248(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_419(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x18F7BE9ACB7D08F4();
	if (!unk_0x74C2FE037DFC8B4A(iVar0, 0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_425(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_423(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_422(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_420(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_420(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (iParam7 && unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x0A088F357EF627CA(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x0A088F357EF627CA(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar0, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x422DF8890E5A5CBB(iParam0))
			{
				if (unk_0x6D26723515A59351(iParam0) == unk_0x18F7BE9ACB7D08F4())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x8673F2F1802ADEF7(iParam0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFAF0B14C4EABEC60(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x4DF63D23F735EE44(iParam0))
		{
			return 1;
		}
	}
	if (func_421(unk_0x18F7BE9ACB7D08F4(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x0B90D19A63676F41(iParam0) && func_227(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x657B649BA2AD3582(iParam0, 0))
		{
			if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), unk_0x5AD687C3474F04B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), iParam0))
		{
			return 1;
		}
		if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam1, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xAADA5865C8BFAE94(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 1), unk_0x761660F5CE986DC4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_422(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9381BBF272130ED6(uParam0, 4))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0) && !unk_0x11879DABC3CC8D46(iParam0))
		{
			if (unk_0x8673F2F1802ADEF7(uParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	if (unk_0x70832328F090DD95(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x4114A6218866E595(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9381BBF272130ED6(uParam0, 2))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0))
		{
			if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x657B649BA2AD3582(unk_0x6DE4035D8BAB73B4(iParam1), 0))
			{
				iVar3 = unk_0x5AD687C3474F04B4(unk_0x6DE4035D8BAB73B4(iParam1), 0);
			}
			if (unk_0xEEDFFBA2DC1CCDB0(iParam0) || func_424(iVar3))
			{
				if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xAB3BDB14DC75494C((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam0, -1, 0) != 0)
			{
				if (unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_48(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 40f)
						{
							if (unk_0x8E085EFABAAA911F(unk_0x8CFC7D6E1DA5D304(), &uVar1))
							{
								if ((unk_0x978B4E1292EBBE41(uVar1) && unk_0x00ABCA0241A97143(iVar1) == iParam0) || (unk_0xB6C2454233C8F532(iVar1) && unk_0x6DE4035D8BAB73B4(iVar1) == unk_0x4983F8C51A0C0AF3(iParam0, -1, 0)))
								{
									if ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && unk_0x02EA7C5633421A0F(0, 24)) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x02EA7C5633421A0F(0, 69)))
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

int func_425(int iParam0, var uParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
		{
			if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 90f))
				{
					if (func_227(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x5AFB8ED811F05E4D();
						}
						else if ((unk_0x5AFB8ED811F05E4D() - uParam1->f_1) > uParam1->f_3)
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

void func_426(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (func_50(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xE54597236B7D8C63(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_64(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_427()
{
	func_428(&Local_423);
	func_450(2);
	func_446();
}

void func_428(var uParam0)
{
	func_51(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_450(2);
	}
}

int func_429(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_205() && func_111(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
			{
				if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_289(uParam0->f_85, 32))
					{
						if (!unk_0xF00EF9585E7FAC26(uParam0->f_4))
						{
							func_351(uParam0, 4160, 0);
						}
						else
						{
							func_351(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_351(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_351(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_351(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
	{
	}
	return 0;
}

void func_430(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_9))
	{
		unk_0x40D517D991458154(&(uParam0->f_9));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		unk_0x40D517D991458154(&(uParam0->f_10));
	}
}

int func_431(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_432()
{
	func_435(&Local_423, 8);
	Local_423.f_410 = 0;
	func_434(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { Local_925 };
	Local_423.f_34 = 95.93f;
	func_433(&Local_423, &Local_853);
	Local_853.f_0 = joaat("s_m_m_doctor_01");
	Local_853.f_1 = joaat("bison");
}

void func_433(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_104551.f_19067.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_434(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_435(var uParam0, int iParam1)
{
	func_445(1);
	func_238();
	func_6(&(uParam0->f_244));
	func_444(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_104551.f_19067, 4))
	{
		func_64(&(Global_104551.f_19067), 4);
	}
	func_439(uParam0);
	func_437(uParam0);
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	uParam0->f_102 = (func_436(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x8E058779F430F4D7("TAXI", 2);
}

int func_436(int iParam0)
{
	return Global_104551.f_19067.f_39[iParam0];
}

void func_437(var uParam0)
{
	switch (func_63(uParam0))
	{
		case 0:
			func_438(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_438(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_438(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_438(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_438(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_438(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_438(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_438(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_438(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_438(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_438(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_439(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_443(uParam0, 3);
			func_442(uParam0, 14);
			break;
		
		case 1:
			func_443(uParam0, 14);
			func_442(uParam0, 8);
			break;
		
		case 2:
			func_443(uParam0, 8);
			func_442(uParam0, 7);
			break;
		
		case 3:
			func_443(uParam0, 15);
			func_442(uParam0, 6);
			break;
		
		case 4:
			func_443(uParam0, 0);
			func_442(uParam0, 3);
			break;
		
		case 5:
			func_443(uParam0, 6);
			func_442(uParam0, 7);
			break;
		
		case 6:
			func_443(uParam0, 8);
			func_442(uParam0, 15);
			break;
		
		case 7:
			func_443(uParam0, 8);
			func_442(uParam0, 14);
			break;
		
		case 8:
			func_443(uParam0, 7);
			func_442(uParam0, 15);
			break;
		
		case 9:
			func_443(uParam0, unk_0x61E9B3BFA06B017B(0, 17));
			iVar0 = func_441((uParam0->f_418.f_2 + unk_0x61E9B3BFA06B017B(1, 17)), 0, 16);
			func_442(uParam0, iVar0);
			func_440(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_440(var uParam0)
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

int func_441(int iParam0, int iParam1, int iParam2)
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

void func_442(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_443(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_444(var uParam0)
{
	uParam0->f_2 = unk_0x18F7BE9ACB7D08F4();
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
	func_202(uParam0, 32, 0);
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103607, unk_0xFCA64981FEF7C913(), 24);
		Global_103601 = 1;
	}
	else
	{
		StringCopy(&Global_103607, "NULL", 24);
		Global_103601 = 0;
	}
}

void func_446()
{
	unk_0x3B4B46A2A779D56E(Local_928, Local_931, 1, 1);
	unk_0x3B4B46A2A779D56E(Local_946, Local_949, 1, 1);
	func_135(Local_958, 60f, 0);
	func_135(Local_961, 60f, 0);
	unk_0xEE0B7B5DD68BDE7A();
	unk_0x7E1D02126DA8A751(uLocal_894, 0);
	unk_0x174D10140C6EDAA7(iLocal_893);
	unk_0x174D10140C6EDAA7(iLocal_892);
	unk_0x8E7D27D1F47D1D08(&cLocal_976);
	func_245(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_449();
	func_448();
	func_447();
	unk_0x116D235ABEF5CE46(Local_853.f_1, 0);
	func_152(&uLocal_45, 0, 0);
	unk_0x810C5D6462DD69E6();
}

void func_447()
{
	unk_0x419C9117019F2E5A(iLocal_887);
	unk_0x334F1DD67B2EC86A("MOVE_DUCK_FOR_COVER");
	unk_0x334F1DD67B2EC86A(&cLocal_980);
	unk_0x334F1DD67B2EC86A(&cLocal_996);
	unk_0x334F1DD67B2EC86A(&cLocal_1012);
	unk_0x334F1DD67B2EC86A(&cLocal_1028);
}

void func_448()
{
	unk_0x419C9117019F2E5A(Local_853.f_0);
	unk_0x419C9117019F2E5A(Local_853.f_1);
	unk_0x419C9117019F2E5A(iLocal_888);
	unk_0x419C9117019F2E5A(iLocal_889);
	unk_0x8E7D27D1F47D1D08(&cLocal_976);
	unk_0x334F1DD67B2EC86A("veh@truck@ds@base");
}

void func_449()
{
	unk_0x419C9117019F2E5A(iLocal_886);
	unk_0x334F1DD67B2EC86A("gestures@m@standing@casual");
}

void func_450(int iParam0)
{
	Global_103261.f_22 = iParam0;
}

