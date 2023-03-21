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
	uLocal_77 = unk_0x856FCB8D4F6D7FC5();
	uLocal_78 = unk_0x33ED06488116366E();
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
	if (unk_0xD4BE58A7E3E102AC(67))
	{
		func_462(2);
		func_458();
	}
	unk_0x1A41D12A38E6D79F(1);
	func_444();
	while (true)
	{
		if (unk_0xD4B321D9096B01FC(Local_423.f_2))
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
	uParam0->f_2 = unk_0x0FA8183DAD2B3203();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x0FA8183DAD2B3203());
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
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
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
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x0FA8183DAD2B3203());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
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
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_9()
{
	if (func_443(&Local_423))
	{
		func_442(&Local_423);
		if (unk_0x39A01A052D9B5FF0(Local_853.f_4))
		{
			unk_0xAA2276003B2ADF1B(&(Local_853.f_4));
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
			unk_0xAC5263AEA7D6AA8A(0.8f);
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
					unk_0x80BCF42B42433CEB(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_313(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_282(&Local_423, 1))
				{
					if (!unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
					{
						unk_0x0453EBC0FB8D8A80(Local_423.f_3, 0, 0, 1, 0);
						unk_0x0453EBC0FB8D8A80(Local_423.f_3, 2, 1, 2, 0);
						unk_0x0453EBC0FB8D8A80(Local_423.f_3, 3, 0, 2, 0);
						unk_0x0453EBC0FB8D8A80(Local_423.f_3, 4, 1, 3, 0);
						unk_0x0453EBC0FB8D8A80(Local_423.f_3, 8, 1, 0, 0);
					}
					func_281(&Local_423, 1, 0);
					unk_0x8CBD7ED64E4A522F("TAXI_Escapee", &(Local_853.f_30));
					unk_0x9B54A3CCAAB4F5FB(255, Local_853.f_30, Local_423.f_413);
					unk_0x9B54A3CCAAB4F5FB(255, Local_853.f_30, joaat("player"));
					unk_0x2D2E01EF7EFB0DB2(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_313(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_262(&Local_423, 0, 1109393408))
				{
					func_261();
					func_313(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_260(&Local_423))
				{
					func_256(&Local_423, 9, 1, 0, 0);
					func_255(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_254();
					func_253(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_313(&Local_423, 17);
				}
				if (unk_0xD960230552BC4165(Local_423.f_4, 0))
				{
					if (!unk_0x95ED3BD0F52D542A(Local_423.f_2, Local_423.f_4, 0))
					{
						func_251(&Local_423);
						func_313(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_250(&Local_423, &(Local_423.f_9));
				if (!unk_0xD4B321D9096B01FC(Local_853.f_3))
				{
					if (func_249())
					{
						func_248(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_247(&Local_423, &Local_853);
				}
				if (func_221(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0x8DF9292B02F8CB75(Local_423.f_9))
					{
						unk_0x925BD1075D119B45(Local_423.f_9, 0);
					}
					unk_0xAA2276003B2ADF1B(&(Local_423.f_9));
					func_313(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_214())
				{
					if (!func_213())
					{
						func_256(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_313(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_247(&Local_423, &Local_853);
				func_212();
				if (func_211(Local_853.f_2, Local_853.f_3))
				{
					func_210(&Local_423, 2, 0);
					unk_0x0F0FA0BE5DA21793(Local_853.f_2, 1);
					unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 6, 1);
					unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 17, 1);
					func_281(&Local_423, 1, 0);
					Local_853.f_5 = unk_0x35D31BEBAFD53DE6(Local_853.f_3);
					Local_853.f_15 = unk_0xF524E590E8C8C6BE(Local_853.f_3);
					Local_853.f_16 = unk_0x8FA4BFA59CFE52FC(Local_853.f_3);
					func_317(&Local_423, 13, 0f, 0);
					func_317(&Local_423, 20, 0f, 0);
					unk_0xC5F5645D67898993(Local_946, Local_949);
					uLocal_894 = unk_0x740FE9B7B3FE1CE5(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x538F8D7D228037B6(0);
					func_313(&Local_423, 13);
				}
				break;
			
			case 13:
				func_212();
				func_247(&Local_423, &Local_853);
				func_250(&Local_423, &(Local_853.f_4));
				if (func_209(&Local_423))
				{
					if (func_208(Local_853.f_2, Local_853.f_4))
					{
						func_256(&Local_423, 51, 1, 0, 0);
						func_313(&Local_423, 25);
					}
					func_204(&Local_423);
					func_201(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_161())
					{
						if (unk_0x0999855232DBED9E(Local_853.f_3))
						{
							unk_0x82F9D7FF967D63BE(Local_853.f_3);
							unk_0x497FAD093E19504A(0, "taxi_oj_fc3");
						}
						func_159(&uLocal_45, 0, 0);
						func_158();
						func_313(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_157())
				{
					if (func_136())
					{
						func_313(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_135(&Local_423, &(Local_423.f_43));
				if (unk_0xD960230552BC4165(Local_853.f_3, 0))
				{
					if ((unk_0xC49563EAE7AACA6C(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0xB8D4A2BAA78AB950(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0xF4B969E0807E76C7(iLocal_890, 0))
						{
							unk_0xC6612209077465DD(iLocal_890);
							unk_0xCB3446C6A91D1A78(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_256(&Local_423, 37, 1, 0, 0);
						func_313(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_135(&Local_423, &(Local_423.f_43));
				func_134(&Local_423, Local_853.f_2, 1, 1);
				func_134(&Local_423, iLocal_890, 0, 0);
				func_250(&Local_423, &(Local_423.f_9));
				if (unk_0x39A01A052D9B5FF0(Local_853.f_4))
				{
					unk_0xAA2276003B2ADF1B(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0x39A01A052D9B5FF0(Local_423.f_9))
				{
					Local_423.f_9 = func_132(Local_423.f_17, 1);
				}
				if (unk_0xD960230552BC4165(Local_423.f_4, 0))
				{
					if (unk_0x95ED3BD0F52D542A(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0xC49563EAE7AACA6C(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x42A24CB7B8A08E11(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x42A24CB7B8A08E11(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
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
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x2BF5E63466422C38(Local_423.f_3))
				{
					if (unk_0xD960230552BC4165(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_128(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0xAA2276003B2ADF1B(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0x39A01A052D9B5FF0(Local_423.f_9))
							{
								Local_423.f_9 = func_132(Local_423.f_17, 1);
							}
							if (func_221(&Local_423, 8f, 1097859072, 1117782016) || func_128(&Local_423, 1, 1084227584))
							{
								unk_0xAA2276003B2ADF1B(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, iLocal_890, 0, 0);
				if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1)
				{
					func_256(&Local_423, 37, 1, 0, 0);
					func_313(&Local_423, 27);
				}
				break;
			
			case 27:
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x2BF5E63466422C38(Local_423.f_3))
				{
					if (unk_0x39A01A052D9B5FF0(Local_853.f_4))
					{
						unk_0xAA2276003B2ADF1B(&(Local_853.f_4));
					}
					unk_0x38C6C3B6F4074898("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_127(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_125(&Local_423);
					func_121(&Local_423);
					func_120(&Local_423);
					func_313(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x38C6C3B6F4074898("TAXI_OBJ_DRIVE");
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
				unk_0x38C6C3B6F4074898("TAXI_OBJ_DRIVE");
				if ((!unk_0x2BF5E63466422C38(Local_423.f_3) && unk_0x3656B691E303FDE0(iLocal_890, Local_423.f_3, 1)) && unk_0x3656B691E303FDE0(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_54(1, &Local_423, 1);
						func_458();
					}
					else
					{
						iLocal_421 = unk_0xDD5F765EB4E1D209(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0xD960230552BC4165(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0xF5EF9CD228E6C916(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0x2BF5E63466422C38(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0xC65E180790BE1364(5, Local_940, 1, 0f, &uLocal_895, 0, 0))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_52(Local_940, 1) > 100f || func_50(Local_423.f_3, unk_0x0FA8183DAD2B3203()) > 100f)
				{
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((unk_0x2BF5E63466422C38(Local_423.f_3) || unk_0x3656B691E303FDE0(iLocal_890, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3656B691E303FDE0(Local_853.f_2, unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!unk_0x2BF5E63466422C38(Local_423.f_3))
					{
						unk_0xCC94EE23853F38E4(Local_423.f_3, 1);
						unk_0xC6612209077465DD(Local_423.f_3);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x5D865B9E32556997(0, 2000);
						unk_0xAAAD1B054EFBF5A7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(Local_423.f_3, 1);
					}
					if (!unk_0x2BF5E63466422C38(iLocal_890))
					{
						unk_0xCC94EE23853F38E4(iLocal_890, 1);
						unk_0xC6612209077465DD(iLocal_890);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x5D865B9E32556997(0, 1000);
						unk_0xAAAD1B054EFBF5A7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(iLocal_890, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(iLocal_890, 1);
					}
					if (!unk_0x2BF5E63466422C38(Local_853.f_2))
					{
						unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						if (bLocal_908)
						{
							unk_0x5D672CB011E20B28(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x45852AF9448D4F9F(0, 500);
						unk_0xAAAD1B054EFBF5A7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(Local_853.f_2, 1);
					}
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((iLocal_904 && !func_213()) && (unk_0x9B35D07DCD0F0B43() - iLocal_900) > 500)
				{
					if (!unk_0x2BF5E63466422C38(Local_423.f_3))
					{
						unk_0xCC94EE23853F38E4(Local_423.f_3, 1);
						unk_0xC6612209077465DD(Local_423.f_3);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x0E6A028503C7EEE4(0, unk_0x0FA8183DAD2B3203(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(Local_423.f_3, 1);
					}
					if (!unk_0x2BF5E63466422C38(iLocal_890))
					{
						unk_0xCC94EE23853F38E4(iLocal_890, 1);
						unk_0xC6612209077465DD(iLocal_890);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x5D865B9E32556997(0, 1000);
						unk_0xAAAD1B054EFBF5A7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(iLocal_890, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(iLocal_890, 1);
					}
					if (!unk_0x2BF5E63466422C38(Local_853.f_2))
					{
						unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
						unk_0xC6612209077465DD(Local_853.f_2);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x45852AF9448D4F9F(0, 500);
						unk_0xAAAD1B054EFBF5A7(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0x7D81B41B134BD6F2(Local_853.f_2, 1);
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
	if (func_213())
	{
		func_48();
	}
	func_46();
	unk_0x1C9DBC28A851F0A6();
	unk_0x0D23E3918F7AF11B(1);
	func_41(0);
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		unk_0x4BA8ED9D4B9825B8(uParam0->f_4, 0);
		unk_0x1A451F61862120C7(uParam0->f_4);
		unk_0xD758A9D6F733CAE1(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_253(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 1);
	if (func_33())
	{
		unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
	}
	unk_0x0B37569F115E869B(1);
	func_23(0, 1, 1, 0, 0, 0);
	unk_0x4BEE8AE599A4A300(1);
	unk_0x5AC8A91A3FD00B39(1);
	if (unk_0xD2652A8A890B29BA(*uParam0))
	{
		unk_0xDC5BA18043353983(*uParam0, 0);
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		unk_0x538F8D7D228037B6(1);
	}
	if (func_22(Global_111560.f_19092, 4))
	{
		func_20(&(Global_111560.f_19092), 4);
		unk_0x0A43D5D11052D038(func_19(), 0);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0x7D74D6A091150B86("gestures@m@standing@casual");
	unk_0x7D74D6A091150B86("oddjobs@taxi@");
	unk_0x7D74D6A091150B86("oddjobs@towingcome_here");
	if (unk_0x2A983C9CF4EE0D5E())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7A8732CFB5113E77()))
	{
		unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 1, 0);
	}
	unk_0xA53044E03EB181FF(unk_0xF2DB717A73826179((func_11(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_12(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x393E9918BC37548A())
	{
		iVar2 = unk_0x169A8AC9F93C2727();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

void func_15(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0x79FCE4565761C974(&uVar0))
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
	unk_0xDB8F23F72A5CE0AA(uParam0->f_51[0]);
}

void func_18(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0->f_3))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
		{
			if (!unk_0x5294582CE404D3F4(uParam0->f_3, 0))
			{
				unk_0x7D394D4D40B3CDBE(uParam0->f_3);
			}
			unk_0xCC94EE23853F38E4(uParam0->f_3, 0);
			unk_0x9B54A3CCAAB4F5FB(255, uParam0->f_413, joaat("player"));
			if (unk_0xF6FD8019402CF03B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x92A1D522E8613359(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xF6FD8019402CF03B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x92A1D522E8613359(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xF6FD8019402CF03B(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x92A1D522E8613359(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xF6FD8019402CF03B(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x92A1D522E8613359(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x0FFB05DA97E810B5(&(uParam0->f_3));
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

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_32(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_31())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_32(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_28(unk_0x7C7787D2D7139A85())) && !func_25(unk_0x7C7787D2D7139A85(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_28(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_24()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
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
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0xBEA608014975433D(unk_0x7A8732CFB5113E77()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x222F76006659B0EB(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
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
		unk_0x80BCF42B42433CEB(Var0, Var3, iParam3, 1);
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
	if (Global_19664)
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
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_45()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95632[iVar0 /*17*/] && !Global_95632[iVar0 /*17*/].f_1)
		{
			if (Global_95632[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95632[iVar0 /*17*/].f_5 != 88 && Global_95632[iVar0 /*17*/].f_5 != 89) && Global_95632[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_95632[iVar0 /*17*/].f_5, 1);
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
			Global_92684[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92684[iParam0 /*2*/] = 0;
	}
}

void func_48()
{
	Global_19671 = 0;
	func_49();
}

void func_49()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
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
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

float func_52(struct<3> Param0, int iParam3)
{
	return func_53(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), Param0, iParam3);
}

float func_53(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(iParam0, 1), Param1, iParam4);
}

void func_54(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!unk_0x2BF5E63466422C38(uParam1->f_3))
		{
			unk_0x1DB66BD2267055C0(uParam1->f_3, 317, 1);
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
			Global_111560.f_19092.f_22[0]++;
			func_56("Fares Completed ++ = ", Global_111560.f_19092.f_22[0]);
			break;
		
		case 1:
			Global_111560.f_19092.f_22[1]++;
			func_56("Fares Failed ++ = ", Global_111560.f_19092.f_22[1]);
			break;
		
		case 2:
			Global_111560.f_19092.f_22[2]++;
			func_56("Fares Accepted ++ ", Global_111560.f_19092.f_22[2]);
			break;
		
		case 3:
			Global_111560.f_19092.f_22[3]++;
			func_56("Fares Expired ++ ", Global_111560.f_19092.f_22[3]);
			break;
		
		case 13:
			Global_111560.f_19092.f_22[13]++;
			func_56("Passengers run ++ = ", Global_111560.f_19092.f_22[13]);
			break;
		
		case 14:
			Global_111560.f_19092.f_22[14]++;
			func_56("Passenger Forced to Pay ++ = ", Global_111560.f_19092.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111560.f_19092.f_22[4])
				{
					Global_111560.f_19092.f_22[4] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_111560.f_19092.f_22[4]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_111560.f_19092.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_111560.f_19092.f_22[5] = (Global_111560.f_19092.f_22[5] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_111560.f_19092.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_111560.f_19092.f_22[6]++;
			}
			else
			{
				Global_111560.f_19092.f_22[6] = (Global_111560.f_19092.f_22[6] + iParam1);
			}
			func_56("Wanted Levels ++ = ", Global_111560.f_19092.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_111560.f_19092.f_22[7] = (Global_111560.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111560.f_19092.f_22[7]++;
			}
			func_56("Wanted Levels Lost = ", Global_111560.f_19092.f_22[7]);
			break;
		
		case 8:
			Global_111560.f_19092.f_22[8]++;
			func_56("Taxis wrecked ++ = ", Global_111560.f_19092.f_22[8]);
			break;
		
		case 9:
			Global_111560.f_19092.f_22[9]++;
			func_56("Horn Honked ++ = ", Global_111560.f_19092.f_22[9]);
			break;
		
		case 10:
			Global_111560.f_19092.f_22[10] = (Global_111560.f_19092.f_22[10] + iParam1);
			func_56("Total Money Earned = ", Global_111560.f_19092.f_22[10]);
			break;
		
		case 11:
			Global_111560.f_19092.f_22[11] = (Global_111560.f_19092.f_22[11] + iParam1);
			func_56("Total Tips Earned = ", Global_111560.f_19092.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_111560.f_19092.f_22[12])
			{
				Global_111560.f_19092.f_22[12] = iParam1;
				func_56("New Highest Tip = ", Global_111560.f_19092.f_22[12]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_111560.f_19092.f_22[12]);
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
	func_67(&(Global_111560.f_19092), 1024);
	if (!func_22(Global_111560.f_19092, 64))
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
		func_64((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_111283, 0);
					unk_0xA1E7A40E1F56E511(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_111296, 1);
	unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_111279, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_111297, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_111280, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_111298, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_111281, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_111299, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_111282, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_111286, 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_111303, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_111304, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853))
	{
		func_63(13, unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853));
	}
	if (!unk_0x8FA5860B1A123955())
	{
		if (!Global_76577)
		{
			if (func_62() == 2 == 0 && !unk_0x393E9918BC37548A())
			{
				if (unk_0x56BDC2B0945F6D74())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
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
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_61(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_62()
{
	return Global_30736;
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
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
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
	if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_80(&Global_4269915))
	{
		if (func_78(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_71(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xA123C027757634FD(iParam0))
		{
			return 0;
		}
		if (unk_0x17A6988567C0F4A8(iParam0))
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
	
	if (unk_0x17A6988567C0F4A8(iParam1))
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
	
	if (unk_0x17A6988567C0F4A8(iParam1))
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
	func_76(uParam0, (Global_4269914 - 0.5f));
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
	return Global_41396 == iParam0;
}

int func_83(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_213() && func_118(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
				}
				func_117(uParam0);
				func_20(&(Global_111560.f_19092), 4096);
				func_114(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_116(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x9964F5BBD9415AB7(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_113(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_107(uParam1, 0))
			{
				func_84(uParam0);
				func_317(uParam0, 0, 0, 0);
				func_113(0);
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
		func_85(func_105(), 21, iVar0, 0, 0);
		func_55(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0) == 3)
	{
		return;
	}
	if (func_104(iParam0) == 4)
	{
		return;
	}
	func_86(func_104(iParam0), 1, iParam1, iParam2, 0);
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
		unk_0x367DA79FE620711B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x41410A69AD49AFCD(iVar1, iVar0, 1);
	}
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
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
					func_102(99, 1);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_100(0);
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
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_95(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB4D15BCA2CC28DF9())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_95(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
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
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_88(iParam0);
	if (Global_41396 == 15)
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
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_89(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_64(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_64(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_64(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_64(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_92(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_92(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_92(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_92(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_92(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_92(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0) || unk_0xA2BC31158C8CEFD2(Global_2097152[func_91() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		unk_0x3B76114EC84D5812(&(Global_2097152[func_91() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x6C607B5286DEE8D9("COUP_RED");
		unk_0x0AC9F8E1AFCEC860(func_90(iParam0));
		unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_90(int iParam0)
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
		
		default:
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
	iVar0 = Global_2542527[iParam0 /*3*/][func_93(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
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
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

void func_94(int iParam0)
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_95(int iParam0)
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
		return func_97(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_97(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_97(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_97(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x71EC776E812C6A0A();
		iVar1 = func_96(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x71EC776E812C6A0A();
		iVar3 = func_96(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x71EC776E812C6A0A();
		iVar5 = func_96(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x71EC776E812C6A0A();
		iVar7 = func_96(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x71EC776E812C6A0A();
		iVar9 = func_96(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x71EC776E812C6A0A();
		iVar11 = func_96(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0);
	}
	return unk_0xA2BC31158C8CEFD2(Global_2097152[func_91() /*10828*/].f_6168.f_10, iParam0);
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_93(iParam1)];
	if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_99(iParam0, iParam1);
	uVar2 = func_98(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_100(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x17A6988567C0F4A8(27))
	{
		return 0;
	}
	if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
		func_63(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_69(27, 1);
	return 1;
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_103()
{
	int iVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_104(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_105()
{
	func_106();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_106()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_4(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_3(unk_0x0FA8183DAD2B3203());
			if (func_6(iVar0) && (!func_82(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

int func_107(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_2)))
	{
		func_111(&(uParam0->f_2));
	}
	unk_0x0AF55029F939BA65(14);
	unk_0x53F520B89860756C(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x26BB91778477F482(2, 201) || uParam0->f_8)
		{
			if (!func_14(&(uParam0->f_5)))
			{
				func_111(&(uParam0->f_5));
				func_110(uParam0, 1051260355);
			}
		}
		if (func_14(&(uParam0->f_5)))
		{
			if (func_109(&(uParam0->f_5)) > 0.33f)
			{
				func_108(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_109(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_14(&(uParam0->f_5)))
		{
			func_111(&(uParam0->f_5));
			func_110(uParam0, 1051260355);
		}
		else if (func_109(&(uParam0->f_5)) > 0.33f)
		{
			func_108(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_109(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_110(var uParam0, int iParam1)
{
	unk_0xF1BC72CEC2746995(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD02F24F3E2DB263A(uParam0->f_9);
	unk_0xD435957F6275B434(iParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_111(var uParam0)
{
	func_112(uParam0, 0f);
}

void func_112(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - fParam1);
	unk_0xA1E7A40E1F56E511(uParam0, 1);
	unk_0x3B76114EC84D5812(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_113(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

void func_114(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xF1BC72CEC2746995(*uParam0, func_115());
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xEB6F6B8EBD6B6648(iParam9);
	unk_0x0AC9F8E1AFCEC860(sParam1);
	unk_0x81019766FF500CCA();
	unk_0x759AC38FBC6CCA9E(sParam7);
	unk_0x6A8B3CC08A759F44(uParam2);
	unk_0x6A8B3CC08A759F44(uParam3);
	unk_0x0AC9F8E1AFCEC860(uParam6);
	unk_0x6A8B3CC08A759F44(uParam5);
	unk_0x6A8B3CC08A759F44(iParam4);
	unk_0x81019766FF500CCA();
	unk_0xAC7C2DE2DDC7AF03();
	func_111(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_115()
{
	if (unk_0x393E9918BC37548A())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_116(var uParam0)
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

void func_117(var uParam0)
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
		if (unk_0xA2BC31158C8CEFD2(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_118(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_119(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_109(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_119(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_111(uParam0);
	}
}

void func_120(var uParam0)
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

void func_121(var uParam0)
{
	func_123();
	unk_0x1C9DBC28A851F0A6();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_256(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_256(uParam0, 103, 1, 0, 0);
		}
		func_122(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_256(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_256(uParam0, 102, 1, 0, 0);
	}
	func_317(uParam0, 16, 4f, 0);
}

void func_122(int iParam0)
{
	Global_110270.f_221 = iParam0;
}

void func_123()
{
	Global_19671 = 0;
	func_124();
}

void func_124()
{
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0xE4F88BFF8FB3D84C();
		Global_21816 = 0;
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_125(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_126(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_55(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_55(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_126(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xA1E7A40E1F56E511(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_128(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0x95ED3BD0F52D542A(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_131();
				return 1;
			}
			else if (func_129(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 0, 256);
				}
				else
				{
					unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 0, 0);
				}
			}
			unk_0x4882E68445D6E705(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_129(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x572062A62138FBA2(0, 71, 1);
	unk_0x572062A62138FBA2(0, 72, 1);
	unk_0x572062A62138FBA2(0, 76, 1);
	unk_0x572062A62138FBA2(0, 73, 1);
	unk_0x572062A62138FBA2(0, 59, 1);
	unk_0x572062A62138FBA2(0, 60, 1);
	if (bParam5)
	{
		unk_0x572062A62138FBA2(0, 75, 1);
	}
	unk_0x572062A62138FBA2(0, 80, 1);
	if (!bParam6)
	{
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
	}
	unk_0x572062A62138FBA2(0, 74, 1);
	unk_0x572062A62138FBA2(0, 86, 1);
	unk_0x572062A62138FBA2(0, 81, 1);
	unk_0x572062A62138FBA2(0, 82, 1);
	unk_0x572062A62138FBA2(0, 138, 1);
	unk_0x572062A62138FBA2(0, 136, 1);
	unk_0x572062A62138FBA2(0, 114, 1);
	unk_0x572062A62138FBA2(0, 107, 1);
	unk_0x572062A62138FBA2(0, 110, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 87, 1);
	unk_0x572062A62138FBA2(0, 88, 1);
	unk_0x572062A62138FBA2(0, 113, 1);
	unk_0x572062A62138FBA2(0, 115, 1);
	unk_0x572062A62138FBA2(0, 116, 1);
	unk_0x572062A62138FBA2(0, 117, 1);
	unk_0x572062A62138FBA2(0, 118, 1);
	unk_0x572062A62138FBA2(0, 119, 1);
	unk_0x572062A62138FBA2(0, 131, 1);
	unk_0x572062A62138FBA2(0, 132, 1);
	unk_0x572062A62138FBA2(0, 123, 1);
	unk_0x572062A62138FBA2(0, 126, 1);
	unk_0x572062A62138FBA2(0, 129, 1);
	unk_0x572062A62138FBA2(0, 130, 1);
	unk_0x572062A62138FBA2(0, 133, 1);
	unk_0x572062A62138FBA2(0, 134, 1);
	unk_0xCD00E3BA36117D4B();
	func_130(iParam0);
	if ((unk_0x9B35D07DCD0F0B43() - Global_29) > 500)
	{
		unk_0x784753B14715F27F(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9B35D07DCD0F0B43();
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x01CBD71E072E9F33(unk_0xB8D4A2BAA78AB950(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_130(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x270391FCE2D64F64(iParam0))
		{
			if (unk_0x9131E47288B6D66E(iParam0))
			{
				unk_0xDF5180225AFEE790(iParam0, 0);
			}
		}
	}
}

void func_131()
{
	if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
	{
		unk_0x341977E77C118EB1(unk_0x7C7787D2D7139A85());
	}
}

var func_132(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_133(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

float func_133(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_134(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xD4B321D9096B01FC(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iParam1, 0))
			{
				if (unk_0xCFE0D93B7A6809C1(iParam1))
				{
					if (unk_0x57C8B4C1F3339B6E(unk_0x0FA8183DAD2B3203()))
					{
						if (Local_423.f_109 == 0)
						{
							func_361(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x2BF5E63466422C38(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0xF4B969E0807E76C7(iLocal_890, 0))
				{
					unk_0xC6612209077465DD(iLocal_890);
					unk_0xF0E9590A910B74BE(iLocal_890, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					unk_0x7D81B41B134BD6F2(iLocal_890, 1);
				}
				func_361(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
				{
					unk_0xC6612209077465DD(Local_853.f_2);
					unk_0xF0E9590A910B74BE(Local_853.f_2, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					unk_0x7D81B41B134BD6F2(Local_853.f_2, 1);
				}
				func_361(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x3A21AE6BBFD5D62C(unk_0x7C7787D2D7139A85()))
		{
			if ((unk_0x452279D32F3D751E(iParam1, joaat("weapon_stungun"), 0) || unk_0x452279D32F3D751E(iParam1, 0, 2)) || unk_0x452279D32F3D751E(iParam1, 0, 1))
			{
				if (!unk_0xF4B969E0807E76C7(iLocal_890, 0))
				{
					unk_0xC6612209077465DD(iLocal_890);
					unk_0xF0E9590A910B74BE(iLocal_890, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					unk_0x7D81B41B134BD6F2(iLocal_890, 1);
				}
				if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
				{
					unk_0xC6612209077465DD(Local_853.f_2);
					unk_0xF0E9590A910B74BE(Local_853.f_2, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					unk_0x7D81B41B134BD6F2(Local_853.f_2, 1);
				}
				func_361(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xA302865A999478FC(unk_0x7C7787D2D7139A85());
			}
		}
	}
}

void func_135(var uParam0, var uParam1)
{
	unk_0xFEF78C01D647E20F(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_136()
{
	struct<3> Var0;
	
	func_156();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_152(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_890))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_890))
		{
			Var0 = { unk_0xACE5E491FC1B0D37(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_151(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x9B35D07DCD0F0B43();
				func_149(&uLocal_1082);
				func_148(&Local_1052, -1, 1);
				func_253(Local_958, 0, 15f);
				func_253(Local_961, 0, 15f);
				func_147(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_146();
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_145("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_118(&Local_423, 19) > 0.5f)
			{
				func_144(0, 0, 1);
				unk_0x7FB505C34A14BAAA(Local_958, 30f, 0, 0, 0, 0, 0, 0);
				unk_0x7FB505C34A14BAAA(Local_961, 30f, 0, 0, 0, 0, 0, 0);
				unk_0xBB65AAC660EECEA8(Local_958, 30f, 0);
				unk_0xBB65AAC660EECEA8(Local_961, 30f, 0);
				func_142(Local_958, 1114636288, 1);
				func_142(Local_961, 1114636288, 1);
				unk_0x80BCF42B42433CEB(Local_946, Local_949, 0, 1);
				func_256(&Local_423, 35, 1, 1, 0);
				unk_0xF44C160C97CC41EB(Local_423.f_0, func_141(0));
				unk_0x92B8564A1A66EF0A(Local_423.f_0, func_140(0), 2);
				unk_0x494374BCB9580EA5(Local_423.f_0, 44.5167f);
				unk_0x678A9FFAA65D1846(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x0472F75F711AABCE(Local_423.f_0, 1);
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
				if (unk_0xD960230552BC4165(Local_853.f_3, 0))
				{
					unk_0xCB3446C6A91D1A78(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0x5A2B7C446C0CF087(Local_853.f_3, fLocal_971);
					if (unk_0xF0A5D83369919F2C(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0xE43D456C30B53BB2(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
					{
						unk_0x9B9D9C83AC80FFE4(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_118(&Local_423, 19) > 5f)
			{
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_118(&Local_423, 19) > 4.7f)
			{
				if (func_139())
				{
					if (!iLocal_915)
					{
						unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
						unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xD960230552BC4165(Local_853.f_3, 0))
			{
				unk_0xCB3446C6A91D1A78(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(Local_853.f_3, fLocal_974);
				unk_0x82F9D7FF967D63BE(Local_853.f_3);
			}
			func_317(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0xD960230552BC4165(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0xCF33E56642B34516(800);
				unk_0xB489E71A45CDC02F(0);
				unk_0xA291E27354439AE9(0, 1065353216);
				if (unk_0xD960230552BC4165(Local_853.f_3, 0))
				{
					unk_0xCB3446C6A91D1A78(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0x5A2B7C446C0CF087(Local_853.f_3, fLocal_974);
					unk_0x82F9D7FF967D63BE(Local_853.f_3);
					if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
					{
						unk_0x5BBDAD06F405ED2C(Local_853.f_2);
						unk_0xCB3446C6A91D1A78(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0x5A2B7C446C0CF087(Local_853.f_2, -49.27436f);
					}
				}
				unk_0xDC5BA18043353983(Local_423.f_0, 0);
				unk_0xDC5BA18043353983(uLocal_422, 0);
				func_137(1, 1, 1);
				unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
				while (!unk_0xBF28CCACDDFF5346())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_210(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_137(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 1, 0);
	}
	unk_0x0B37569F115E869B(1);
	func_23(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0x4BEE8AE599A4A300(1);
		unk_0x5AC8A91A3FD00B39(1);
	}
	func_138(23, 0);
}

void func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&Global_30981, iParam0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_30981, iParam0);
	}
}

int func_139()
{
	if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
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

Vector3 func_141(int iParam0)
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

void func_142(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0xDD450E3FD2D59C08(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_38(Var1, func_143(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_38(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0x2D2E01EF7EFB0DB2(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x8E4F6615F45C8C6B(Var7, Var4, 1);
	}
}

float func_143(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 0, iParam0);
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		unk_0x585D65227B9F10E9(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 15f);
	}
	unk_0x0B37569F115E869B(iParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0, 0, 0);
	unk_0x4BEE8AE599A4A300(0);
	unk_0x5AC8A91A3FD00B39(0);
	func_138(23, 1);
}

void func_145(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x9B35D07DCD0F0B43() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x9B35D07DCD0F0B43();
}

void func_146()
{
	var uVar0;
	
	iLocal_890 = unk_0xB983F26E7AFB47BF(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0xC6A25B0ED38EAFC6(iLocal_890, 5);
	unk_0x0453EBC0FB8D8A80(iLocal_890, 3, 1, 2, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_890, 4, 0, 1, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_890, 2, 1, 2, 0);
	unk_0x1DB66BD2267055C0(iLocal_890, 20, 1);
	func_8(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0xF4B969E0807E76C7(iLocal_890, 0))
	{
		unk_0x5A2B7C446C0CF087(iLocal_890, fLocal_970);
		unk_0x78829A259A6975CD(&uVar0);
		unk_0xA12E1659DEF57244(&uVar0);
		unk_0x45852AF9448D4F9F(0, 2500);
		unk_0x5D672CB011E20B28(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0x2DA4721F22121754(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0x15A7B753872B3CE3(uVar0);
		unk_0xC544A8E1032AC1CF(iLocal_890, uVar0);
		unk_0x78829A259A6975CD(&uVar0);
	}
}

void func_147(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xD2652A8A890B29BA(*uParam0))
	{
		*uParam0 = unk_0x3715936BB73409D6(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_148(var uParam0, int iParam1, bool bParam2)
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

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_150(), 24);
		iVar0++;
	}
	unk_0x1C9DBC28A851F0A6();
	func_48();
}

var func_150()
{
	var uVar0;
	
	return uVar0;
}

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDE53EA8358302CB4())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (bParam0)
		{
			if (unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) != unk_0x0FA8183DAD2B3203())
				{
					return 0;
				}
			}
		}
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x7BB084963FF20373(iVar0) < 0.95f || unk_0x7BB084963FF20373(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!unk_0xC22C143313E77BB2(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0)
{
	if (func_155() && unk_0x9B35D07DCD0F0B43() >= iParam0 + 1000)
	{
		unk_0x5800A2599806C837(500);
		while (!unk_0x260395BA7F0C83CB())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_41(0);
		func_153();
		return 1;
	}
	return 0;
}

void func_153()
{
	Global_19671 = 0;
	func_154();
}

void func_154()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

int func_155()
{
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (unk_0x26BB91778477F482(0, 18) || unk_0x26BB91778477F482(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_156()
{
	if (func_35())
	{
		unk_0xE9DEB0815374FA4D("appInternet");
	}
	if (func_34())
	{
		unk_0xE9DEB0815374FA4D("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

int func_157()
{
	if (!unk_0x6DF9C43E3CC645BC(iLocal_887))
	{
		return 0;
	}
	if (!unk_0xB25A0D192C6A0A5B("MOVE_DUCK_FOR_COVER"))
	{
		func_145("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_158()
{
	unk_0x6BB2B1818CAE531E(iLocal_887);
	unk_0x36B659209EBDD366("MOVE_DUCK_FOR_COVER");
	unk_0x36B659209EBDD366(&cLocal_980);
	unk_0x36B659209EBDD366(&cLocal_996);
	unk_0x36B659209EBDD366(&cLocal_1012);
	unk_0x36B659209EBDD366(&cLocal_1028);
}

void func_159(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0xAB681892AAC7844A(iParam2);
		unk_0xF530F03252D7AEE0("FocusIn");
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x538F8D7D228037B6(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x79FCE4565761C974(sVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x79FCE4565761C974(uParam0->f_3))
	{
		if (func_160(uParam0->f_3))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
	if (!unk_0x79FCE4565761C974(sVar0))
	{
		if (func_160(sVar0))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
}

bool func_160(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

int func_161()
{
	if (func_118(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_190(&Local_423, &Local_853, (unk_0x9B35D07DCD0F0B43() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0xD960230552BC4165(Local_853.f_3, 0))
	{
		if (unk_0xD960230552BC4165(Local_423.f_4, 0))
		{
			if (unk_0x42A24CB7B8A08E11(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0x784753B14715F27F(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_162(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_135(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
			{
				if (!unk_0x2956D94776C15770(Local_853.f_3) && IntToFloat((unk_0x9B35D07DCD0F0B43() - iLocal_975)) > unk_0x18EFB224B632B2C7(120, "txm_fc_h1_"))
				{
					unk_0xD67C82BBC9A488A6(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_163(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_163(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_164(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_164(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE5409F09171D0BEE())
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x79FCE4565761C974(iVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_160(iVar0))
	{
		func_189();
	}
	if (func_188(iParam1) && unk_0x0975E9E48EA2CC7B(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4625051E51BA911B(iParam1))
		{
			unk_0x82A2F38195C2E953(unk_0x3D464779B732760F(iParam1));
			unk_0x443D0DA3964A4371(unk_0x3D464779B732760F(iParam1), 1);
			if (unk_0x9DEA7CC8D17DB89A(unk_0x3D464779B732760F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x905FBA24E7FA8D23(iParam1))
		{
			unk_0x374DFF939ADCCC9A(unk_0xD05B0DA3866791D0(iParam1));
			if (unk_0x2C7F1A82D57EBB18(unk_0xD05B0DA3866791D0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam1))
		{
			unk_0xA0CB3588697ABD83(unk_0xF0EFBC96AEA7ABA1(iParam1));
			if (unk_0xB12EB2EC44BBAC6B(unk_0xF0EFBC96AEA7ABA1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE5409F09171D0BEE())
		{
			if (func_183(uParam0, bParam7, bParam9, 0))
			{
				func_180(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_169(iVar0))
				{
					if ((unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0)) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((iVar1 && !unk_0x0945988C02AF3025()) && uParam8)
						{
							if (!func_160(iVar0))
							{
								func_168(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
								{
									func_167(1);
								}
							}
						}
					}
				}
			}
			else if (func_169(iVar0))
			{
				if (unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0))
				{
					if (((unk_0x62E95D2FED28E41C(iParam1) && iVar1) && !unk_0x0945988C02AF3025()) && uParam8)
					{
						if (!func_160(iVar0))
						{
							func_168(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
							{
								func_167(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x79FCE4565761C974(sParam5))
			{
				if (func_160(sParam5))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
			{
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
					{
						func_159(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
					{
						func_159(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
					{
						func_159(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
					{
						func_159(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
					{
						func_159(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
				{
					func_159(uParam0, iVar0, 1);
				}
			}
			if (!func_183(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_166(uParam0))
				{
					func_165(uParam0);
				}
			}
		}
	}
	else
	{
		func_159(uParam0, iVar0, 0);
	}
}

void func_165(var uParam0)
{
	if (func_188(unk_0x0FA8183DAD2B3203()))
	{
		unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0x538F8D7D228037B6(1);
		unk_0xAB681892AAC7844A(0);
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		unk_0xF530F03252D7AEE0("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_166(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	return 0;
}

int func_167(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_168(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_169(char* sParam0)
{
	if (!func_170(1, 1, 0))
	{
		if ((!unk_0x9591DE0F00127F2A(sParam0) && func_160(sParam0)) || func_160("CMN_HINT"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_167(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_167(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_167(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_170(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x16587C6F71675106())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
			{
				return 0;
			}
			if (unk_0x9522187D5FDEA6E4())
			{
				return 0;
			}
		}
	}
	if ((func_178() || func_177(Global_4456448.f_190930)) || func_176())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			iVar1 = func_175(unk_0x0FA8183DAD2B3203(), 0);
			if (((unk_0x2068C310844A89D8(iVar0, iVar1) || (unk_0x7F375072508F738F(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x7F375072508F738F(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x7F375072508F738F(iVar0) == joaat("riot2") && iVar1 == 0) && func_174(iVar0, 10)) && unk_0xF05B9E4C6631EA28(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_171(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_171(int iParam0)
{
	if (iParam0 != func_173())
	{
		if (func_172(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_172(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_172(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_173()
{
	return -1;
}

int func_174(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x6AA7F87D45193D03(iParam0) > 0)
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
					if (unk_0x94FA12918F306658(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
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

var func_176()
{
	return Global_2448961.f_17;
}

bool func_177(int iParam0)
{
	return iParam0 == 51;
}

var func_178()
{
	return Global_2448961.f_16;
}

bool func_179()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

void func_180(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		func_159(uParam0, 0, 0);
	}
	if (func_39(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x4625051E51BA911B(iParam1))
		{
			iVar0 = unk_0x3D464779B732760F(iParam1);
			if (!unk_0x5294582CE404D3F4(iVar0, 0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					if (!func_181())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0F81A86FA23D44FA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x538F8D7D228037B6(0);
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
	unk_0xFFFB9D39E6C8D02D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iParam1, -1, iVar3, iVar4);
	unk_0x3E5A3FD805488EB9("FocusIn", 0, 0);
	unk_0x7D17F1A2E0EEDBB9("HINT_CAM_SCENE");
	unk_0x9964F5BBD9415AB7(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_181()
{
	return func_182(unk_0x7C7787D2D7139A85());
}

int func_182(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_183(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_187(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_166(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (!func_187(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_186(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_186(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_186(bParam1, bParam2, bParam3) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_187(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (func_185(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_166(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_170(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_189();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_184(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_186(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_187(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_189()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

void func_190(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
	{
		if (unk_0x3656B691E303FDE0(uParam1->f_2, unk_0x0FA8183DAD2B3203(), 0))
		{
			func_361(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_361(uParam0, "Followee died", 13);
	}
	if ((unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0 && unk_0xD960230552BC4165(uParam1->f_3, 0)) && !unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
	{
		unk_0xF7D74EF517BDB7D0(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x7D81B41B134BD6F2(uParam1->f_2, 1);
		func_361(uParam0, "Player went wanted", 4);
	}
	func_199(uParam0, uParam1);
	if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (bParam3)
		{
			if (func_198(&(uParam1->f_3)))
			{
				unk_0x7E0D08AE541937A1(unk_0xACE5E491FC1B0D37(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_197(&(uParam1->f_3)))
			{
				unk_0x7E0D08AE541937A1(unk_0xACE5E491FC1B0D37(uParam1->f_3, 1), func_196(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_195(&(uParam1->f_3)))
			{
				unk_0x7E0D08AE541937A1(unk_0xACE5E491FC1B0D37(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0xF524E590E8C8C6BE(uParam1->f_3) < uParam1->f_15 || unk_0x3656B691E303FDE0(uParam1->f_3, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x8FA4BFA59CFE52FC(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x3656B691E303FDE0(uParam1->f_3, unk_0x0FA8183DAD2B3203(), 0))
			{
				func_361(uParam0, "Taxi shot up the car", 12);
			}
			if (func_118(uParam0, 13) > 5f)
			{
				func_194(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0xF524E590E8C8C6BE(uParam1->f_3);
				uParam1->f_5 = unk_0x35D31BEBAFD53DE6(uParam1->f_3);
				uParam1->f_16 = unk_0x8FA4BFA59CFE52FC(uParam1->f_3);
			}
		}
		if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_256(uParam0, 143, 0, 0, 0);
				func_361(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_193(&(uParam0->f_409), unk_0xACE5E491FC1B0D37(uParam0->f_4, 1), unk_0xACE5E491FC1B0D37(uParam1->f_3, 1), 0) == -1 && func_51(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_118(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_317(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
						{
							unk_0xF7D74EF517BDB7D0(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x7D81B41B134BD6F2(uParam1->f_2, 1);
						}
						func_361(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_192(uParam0, 6, 1);
					}
					else
					{
						func_192(uParam0, 1, 1);
					}
					func_256(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0x20510084026BC387(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_317(uParam0, 8, 0, 0);
			}
			else if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_256(uParam0, 143, 0, 0, 0);
				func_361(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_51(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_198(&(uParam1->f_3))) || (func_51(uParam0->f_4, uParam1->f_3, 1) < 13f && func_195(&(uParam1->f_3)))) || (func_51(uParam0->f_4, uParam1->f_3, 1) < func_196(&(uParam1->f_3)) && func_197(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_191(uParam0, 21))
			{
				if ((unk_0x20510084026BC387(uParam0->f_4, uParam1->f_3, 17) && func_118(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_317(uParam0, 8, 0, 0);
					if (!func_191(uParam0, 21))
					{
						func_317(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_213())
						{
							if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
							{
								unk_0xF7D74EF517BDB7D0(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x7D81B41B134BD6F2(uParam1->f_2, 1);
							}
							func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_153();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_192(uParam0, 3, 1);
					}
					else
					{
						func_192(uParam0, 2, 1);
					}
					if (func_51(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_213())
						{
							func_256(uParam0, 143, 0, 0, 0);
							func_48();
							if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
							{
								unk_0xF7D74EF517BDB7D0(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x7D81B41B134BD6F2(uParam1->f_2, 1);
							}
							func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_153();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_256(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0xF524E590E8C8C6BE(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_191(uParam0, 21))
			{
				func_210(uParam0, 21, 0);
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
				if (func_51(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0x20510084026BC387(uParam0->f_4, uParam1->f_3, 17))
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
					func_192(uParam0, 8, 1);
					func_256(uParam0, 13, 1, 0, 0);
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
					if (func_118(uParam0, 8) > 15f && !func_213())
					{
						func_192(uParam0, 9, 1);
						func_256(uParam0, 13, 1, 0, 0);
						func_317(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_191(var uParam0, int iParam1)
{
	return func_14(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_193(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xE595A27685A9E166(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x19D3834206AE7960(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_194(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_213())
		{
			func_281(uParam0, 0, 1);
			if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam1->f_2, 0))
			{
				unk_0xF7D74EF517BDB7D0(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x7D81B41B134BD6F2(uParam1->f_2, 1);
			}
			func_361(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_153();
		}
	}
	else
	{
		func_317(uParam0, 13, 0, 0);
		unk_0x7FF38BFB318C1A86(uParam1->f_3);
		func_192(uParam0, 10, 1);
		func_281(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_195(var uParam0)
{
	if (unk_0xD960230552BC4165(*uParam0, 0))
	{
		if (unk_0xACA46879E999E35C(*uParam0) || unk_0xB8D4A2BAA78AB950(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_196(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xD960230552BC4165(*uParam0, 0))
	{
		fVar1 = unk_0xB8D4A2BAA78AB950(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_197(var uParam0)
{
	if (unk_0xD960230552BC4165(*uParam0, 0))
	{
		if (unk_0xB8D4A2BAA78AB950(*uParam0) >= 4f && unk_0xB8D4A2BAA78AB950(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(var uParam0)
{
	if (unk_0xD960230552BC4165(*uParam0, 0))
	{
		if (unk_0xB8D4A2BAA78AB950(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0, var uParam1)
{
	if (unk_0xD960230552BC4165(uParam1->f_3, 0) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (func_51(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_200(uParam0) == 13)
				{
					func_123();
				}
			}
		}
		if (func_51(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_200(uParam0) == 13)
				{
					func_123();
				}
			}
		}
	}
}

int func_200(var uParam0)
{
	return uParam0->f_416;
}

void func_201(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_213())
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (func_53(iParam0, Param1, 1) < fParam4)
			{
				if (func_203(uParam5))
				{
					func_202(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_203(var uParam0)
{
	return *uParam0 == 0;
}

void func_204(var uParam0)
{
	if (func_207(uParam0))
	{
		func_205(uParam0);
	}
}

void func_205(var uParam0)
{
	if (unk_0x9AD5E118EE76CC80() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x3C40E7561F9217C8();
			func_210(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_118(uParam0, 20) > 3f)
				{
					func_256(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_118(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_256(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_118(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_256(uParam0, 85, 1, 0, 0);
						func_210(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_118(uParam0, 20) > 8f)
				{
					func_256(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_191(uParam0, 22))
				{
					func_206(uParam0, 22);
				}
			}
			if (func_191(uParam0, 22) && func_118(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_256(uParam0, 84, 1, 0, 0);
						func_210(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_256(uParam0, 85, 1, 0, 0);
						func_210(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	func_119(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_207(var uParam0)
{
	return uParam0->f_120;
}

int func_208(int iParam0, var uParam1)
{
	if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1)
	{
		if (unk_0x2BF5E63466422C38(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
				{
					unk_0x31EBACD75CD1F9EC(unk_0x7A8732CFB5113E77(), 1, 0);
					unk_0xF1E958D9BB4D1EF6(unk_0x7A8732CFB5113E77(), 0);
					if (unk_0x39A01A052D9B5FF0(uParam1))
					{
						unk_0xAA2276003B2ADF1B(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_209(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0x300C62F79A4441EB(uParam0->f_4, -1, 0) == unk_0x0FA8183DAD2B3203())
		{
			return 1;
		}
	}
	return 0;
}

void func_210(var uParam0, int iParam1, bool bParam2)
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
			func_108(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_108(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_211(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(iParam1, 0))
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()
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
	unk_0x960CDFA3CBFD7760(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_213()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	func_156();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_152(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_151(1, 1, 1))
			{
				iLocal_897 = unk_0x9B35D07DCD0F0B43();
				func_144(256, 0, 1);
				func_149(&uLocal_1082);
				func_148(&Local_1052, 2, 0);
				if (func_220(&Local_853, Local_934, fLocal_973))
				{
					unk_0x2D2E01EF7EFB0DB2(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_147(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_256(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_118(&Local_423, 19) > 3f)
			{
				if (!unk_0x2BF5E63466422C38(Local_853.f_2))
				{
					unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
					unk_0xC6612209077465DD(Local_853.f_2);
					if (unk_0xD960230552BC4165(Local_853.f_3, 0))
					{
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x31A7662B885C7549(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0x5D672CB011E20B28(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
						unk_0x54B5C3A13D3588F0(Local_853.f_3, 1);
					}
				}
				unk_0x61C432330FFEC578(unk_0x0FA8183DAD2B3203(), Local_423.f_17);
				unk_0xF44C160C97CC41EB(Local_423.f_0, func_219(0));
				unk_0x92B8564A1A66EF0A(Local_423.f_0, func_218(0), 2);
				unk_0x494374BCB9580EA5(Local_423.f_0, 17.2f);
				unk_0x678A9FFAA65D1846(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x0472F75F711AABCE(Local_423.f_0, 1);
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0x3715936BB73409D6(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0xF44C160C97CC41EB(uLocal_422, func_219(4));
			unk_0x92B8564A1A66EF0A(uLocal_422, func_218(0), 2);
			unk_0x494374BCB9580EA5(uLocal_422, 17.2f);
			unk_0x678A9FFAA65D1846(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0x479DACF5AA4C6D03(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_118(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_200(&Local_423) > 10)
				{
					func_215();
				}
				iLocal_912 = 1;
			}
			if (func_118(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0xF44C160C97CC41EB(Local_423.f_0, func_219(2));
				unk_0x0620057C4982F1C1(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0x494374BCB9580EA5(Local_423.f_0, 35f);
				unk_0x678A9FFAA65D1846(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x0472F75F711AABCE(Local_423.f_0, 1);
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0xF44C160C97CC41EB(uLocal_422, func_219(2));
			unk_0x0620057C4982F1C1(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0x494374BCB9580EA5(uLocal_422, 45f);
			unk_0x678A9FFAA65D1846(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0x479DACF5AA4C6D03(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0) && !unk_0xF4B969E0807E76C7(Local_853.f_3, 0))
			{
				if (!unk_0x5294582CE404D3F4(Local_853.f_2, 0))
				{
					unk_0xB425E338F85508A5(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0xD32341B4ADEC0821(Local_853.f_3, 10f);
				func_111(&(Local_853.f_27));
				func_317(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_215();
				}
			}
			break;
		
		case 11:
			if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
			{
			}
			if (unk_0x6DBAE8253C1BC686(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0x943904FF52E8C904(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_118(&Local_423, 19) > 4f)
			{
				unk_0xCF33E56642B34516(800);
				unk_0xB489E71A45CDC02F(0);
				unk_0xA291E27354439AE9(0, 1065353216);
				func_111(&(Local_853.f_27));
				unk_0xDC5BA18043353983(Local_423.f_0, 0);
				unk_0xDC5BA18043353983(uLocal_422, 0);
				func_137(1, 1, 1);
				unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
				func_210(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_118(&Local_423, 19) > 3.7f)
			{
				if (func_139())
				{
					if (!iLocal_914)
					{
						unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
						unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
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

void func_215()
{
	bLocal_901 = true;
	if (!unk_0x2BF5E63466422C38(Local_853.f_2))
	{
		if (unk_0xD960230552BC4165(Local_853.f_3, 0))
		{
			if (unk_0x95ED3BD0F52D542A(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0xCB3446C6A91D1A78(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0xDB889DCC8B0139E6(Local_853.f_2, Local_853.f_30);
				unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 1, 1);
				unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 6, 0);
				unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 17, 0);
				unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 3, 0);
				unk_0x1FB49AA1C2C2A2F3(Local_853.f_2, 500f);
				unk_0xF72BBF2E406BE27F(Local_853.f_2, 500f);
				unk_0x5CACB934F4E2EAC7(Local_853.f_2, 500f);
				unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
				unk_0x5C566093AEF7FD18(Local_853.f_3, 500);
				unk_0x5C566093AEF7FD18(Local_853.f_2, 500);
				unk_0xDA778D908FD69EEE(Local_853.f_3, 1, 1);
				unk_0xDA778D908FD69EEE(Local_853.f_2, 1, 1);
				if (!unk_0x39A01A052D9B5FF0(Local_853.f_4))
				{
					Local_853.f_4 = func_216(Local_853.f_3, 0, 0);
				}
				unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
				unk_0x10DFCD426DB9FAB3(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0x0FE2975B0ED2FF4F(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
}

int func_216(int iParam0, bool bParam1, bool bParam2)
{
	return func_217(iParam0, !bParam1, bParam2);
}

int func_217(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_133(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_133(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_133(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_218(int iParam0)
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

Vector3 func_219(int iParam0)
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

int func_220(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0xD4B321D9096B01FC(uParam0->f_2))
	{
		uParam0->f_2 = unk_0xB983F26E7AFB47BF(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_8(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x5A36DB8F38E65BE2(uParam0->f_2, "TaxiJames");
	if (!unk_0xF4B969E0807E76C7(iLocal_890, 0))
	{
		unk_0x1DB66BD2267055C0(iLocal_890, 20, 1);
	}
	if (!unk_0xF4B969E0807E76C7(uParam0->f_2, 0))
	{
		unk_0x0453EBC0FB8D8A80(uParam0->f_2, 0, 1, 0, 0);
		unk_0x0453EBC0FB8D8A80(uParam0->f_2, 3, 0, 0, 0);
		unk_0x0453EBC0FB8D8A80(uParam0->f_2, 4, 0, 1, 0);
		unk_0x0453EBC0FB8D8A80(uParam0->f_2, 8, 0, 0, 0);
		unk_0x0453EBC0FB8D8A80(uParam0->f_2, 11, 0, 1, 0);
		unk_0xDB889DCC8B0139E6(uParam0->f_2, uParam0->f_30);
		unk_0xDEB0AA30ABFDCF48(uParam0->f_2, 1, 1);
		unk_0xDEB0AA30ABFDCF48(uParam0->f_2, 6, 1);
		unk_0xDEB0AA30ABFDCF48(uParam0->f_2, 17, 1);
		unk_0xDEB0AA30ABFDCF48(uParam0->f_2, 3, 0);
		unk_0x1FB49AA1C2C2A2F3(uParam0->f_2, 300f);
		unk_0xF72BBF2E406BE27F(uParam0->f_2, 300f);
		unk_0x5CACB934F4E2EAC7(uParam0->f_2, 300f);
		unk_0xCC94EE23853F38E4(uParam0->f_2, 1);
	}
	return 1;
}

int func_221(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xBF28CCACDDFF5346() && !unk_0xC862E94A8ABC89B8()) && !unk_0xA710300CD13D2877()) && !unk_0x260395BA7F0C83CB()) && !uParam0->f_142)
	{
		if (func_233(uParam0))
		{
			func_135(uParam0, &(uParam0->f_43));
			func_228(uParam0);
			func_227(uParam0);
			func_204(uParam0);
			func_226(uParam0, fParam2, fParam3);
			func_224(uParam0);
			return func_222(uParam0, iParam1);
		}
	}
	return 0;
}

int func_222(var uParam0, int iParam1)
{
	if (func_66(uParam0) == 2)
	{
		if (unk_0xC49563EAE7AACA6C(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_223(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1) && func_151(1, 1, 1)) && unk_0x0514219B96C5A22A(uParam0->f_4))
		{
			return func_128(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xC49563EAE7AACA6C(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1) && func_151(1, 1, 1)) && unk_0x0514219B96C5A22A(uParam0->f_4))
	{
		return func_128(uParam0, 1, iParam1);
	}
	return 0;
}

float func_223(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

void func_224(var uParam0)
{
	float fVar0;
	
	if ((func_225(uParam0) && func_22(uParam0->f_81, 67108864)) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
	{
		if ((unk_0x9B35D07DCD0F0B43() - iLocal_97) >= 10000)
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
			iLocal_97 = unk_0x9B35D07DCD0F0B43();
		}
		if (iLocal_96 >= 2 && !func_213())
		{
			func_256(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x9B35D07DCD0F0B43() % 4000) < 50)
		{
			if (!func_225(uParam0))
			{
			}
			if (!func_22(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_225(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_3))
		{
			if (unk_0x95ED3BD0F52D542A(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_226(var uParam0, float fParam1, float fParam2)
{
	if (func_225(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((unk_0xACA46879E999E35C(uParam0->f_4) || unk_0xB8D4A2BAA78AB950(uParam0->f_4) < 3f) && func_209(uParam0))
		{
			if (!func_191(uParam0, 2))
			{
				func_206(uParam0, 2);
			}
			else if (func_225(uParam0))
			{
				if (func_118(uParam0, 2) > fParam1 && !func_191(uParam0, 14))
				{
					if (func_35())
					{
						func_256(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_256(uParam0, 48, 1, 0, 0);
					}
					func_317(uParam0, 2, 0, 0);
					if (func_191(uParam0, 10))
					{
						func_317(uParam0, 10, 0, 0);
					}
				}
				if (!func_191(uParam0, 3))
				{
					func_317(uParam0, 3, 0, 0);
				}
				else if (func_118(uParam0, 3) >= fParam2)
				{
					func_210(uParam0, 3, 0);
					func_361(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_191(uParam0, 2))
			{
				func_210(uParam0, 2, 0);
			}
			if (func_191(uParam0, 3))
			{
				func_210(uParam0, 3, 0);
			}
		}
	}
}

void func_227(var uParam0)
{
	if (unk_0x4CED1B53390BCAB7(unk_0x7A8732CFB5113E77()) && !func_22(uParam0->f_44, 2))
	{
		func_67(&(uParam0->f_44), 2);
	}
	else if (!unk_0x4CED1B53390BCAB7(unk_0x7A8732CFB5113E77()) && func_22(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_55(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_256(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_228(var uParam0)
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) >= 1)
				{
					if (func_118(uParam0, 9) > 1f)
					{
						func_232(uParam0, unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()));
						if (uParam0->f_410 != 22)
						{
							func_256(uParam0, 50, 1, 1, 0);
						}
						func_317(uParam0, 9, 0, 0);
						if (unk_0x39A01A052D9B5FF0(uParam0->f_9))
						{
							unk_0x9C47809EE2CC69F5(uParam0->f_9, 0);
							unk_0x925BD1075D119B45(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_213() && func_118(uParam0, 9) > 4f)
				{
					func_256(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_231("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_256(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x586E95A1CE46FC21(unk_0x7A8732CFB5113E77(), func_230(uParam0)))
				{
					func_232(uParam0, unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()));
					func_55(6, 0);
				}
				if (!func_229(uParam0))
				{
					if (!unk_0x04C7A9862FF737E9())
					{
						if (func_118(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_256(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1)
				{
					if (func_231("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x1C9DBC28A851F0A6();
					}
					if (unk_0x39A01A052D9B5FF0(uParam0->f_9))
					{
						unk_0x9C47809EE2CC69F5(uParam0->f_9, 255);
						unk_0x925BD1075D119B45(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_213())
				{
					if (uParam0->f_410 != 22)
					{
						func_256(uParam0, 53, 1, 0, 1);
					}
					func_55(7, func_230(uParam0));
					func_232(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_213())
				{
					func_210(uParam0, 9, 0);
					func_317(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_229(var uParam0)
{
	return uParam0->f_110;
}

int func_230(var uParam0)
{
	return uParam0->f_106;
}

bool func_231(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC1A9801A23F32F8F(sParam0);
	if (iParam1 == 1)
	{
		unk_0x0AC9F8E1AFCEC860(iParam2);
	}
	return unk_0xCDD0AB887E3F6532();
}

void func_232(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_233(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_3))
		{
			if (!unk_0x95ED3BD0F52D542A(uParam0->f_3, uParam0->f_4, 1) && !unk_0xEC9DA7D08BCA2C06(uParam0->f_3))
			{
				func_361(uParam0, "Passenger left car.", 9);
			}
			else if (func_243(uParam0))
			{
				if (func_231("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x38C6C3B6F4074898("TAXI_OBJ_PICKUP");
				}
				if (unk_0xBF28CCACDDFF5346())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
				{
				}
				func_234(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_234(var uParam0, bool bParam1)
{
	func_242(uParam0, uParam0->f_3);
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x95ED3BD0F52D542A(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_191(uParam0, 14))
			{
				if (func_213())
				{
					func_241(1);
				}
				func_192(uParam0, 11, 1);
				func_236(uParam0, 1);
				func_317(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_225(uParam0))
				{
					if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
					{
					}
					if (unk_0x5294582CE404D3F4(uParam0->f_2, 0))
					{
						if (func_118(uParam0, 15) > 5f)
						{
							func_317(uParam0, 15, 0f, 1);
						}
					}
					if (func_118(uParam0, 14) > 20f)
					{
						func_361(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_118(uParam0, 14) > 20f)
				{
					if (func_235(uParam0->f_4, 1) > 40f)
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

float func_235(int iParam0, int iParam1)
{
	return func_51(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), iParam0, iParam1);
}

void func_236(var uParam0, bool bParam1)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
			{
				unk_0x9C47809EE2CC69F5(uParam0->f_8, 0);
				unk_0x925BD1075D119B45(uParam0->f_8, 0);
				func_240(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x39A01A052D9B5FF0(uParam0->f_9))
			{
				unk_0x9C47809EE2CC69F5(uParam0->f_9, 0);
				unk_0x925BD1075D119B45(uParam0->f_9, 0);
				unk_0x1C9DBC28A851F0A6();
				if (func_225(uParam0))
				{
					func_256(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_240(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_237(uParam0, 0, 0);
		}
		else if (unk_0x39A01A052D9B5FF0(uParam0->f_10))
		{
			unk_0xAA2276003B2ADF1B(&(uParam0->f_10));
			if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
			{
				unk_0x9C47809EE2CC69F5(uParam0->f_8, 255);
				unk_0x925BD1075D119B45(uParam0->f_8, 1);
			}
			else if (unk_0x39A01A052D9B5FF0(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x9C47809EE2CC69F5(uParam0->f_9, 0);
					unk_0x925BD1075D119B45(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x9C47809EE2CC69F5(uParam0->f_9, 255);
					unk_0x925BD1075D119B45(uParam0->f_9, 1);
				}
			}
			unk_0x1C9DBC28A851F0A6();
		}
	}
}

void func_237(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_442(uParam0);
	}
	if (!unk_0x39A01A052D9B5FF0(uParam0->f_10))
	{
		uParam0->f_10 = func_217(uParam0->f_4, 1, 0);
		unk_0x058B6969CEED705F(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x925BD1075D119B45(uParam0->f_10, 1);
		func_238(uParam0);
		if (bParam2)
		{
			unk_0x1C9DBC28A851F0A6();
			func_256(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_238(var uParam0)
{
	func_317(uParam0, 14, 0, 0);
	func_239();
}

void func_239()
{
	int iVar0;
	
	iVar0 = unk_0x9B79A29933E4A8FA();
	if (unk_0xD960230552BC4165(iVar0, 0))
	{
		unk_0x5F5C6A264C2CA8B1(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_240(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x1C9DBC28A851F0A6();
		func_256(uParam0, iParam3, 1, 0, 0);
		func_67(uParam1, iParam2);
	}
}

void func_241(int iParam0)
{
	Global_21816 = iParam0;
}

void func_242(var uParam0, int iParam1)
{
	if (unk_0xD4B321D9096B01FC(iParam1))
	{
		if (!unk_0x2BF5E63466422C38(iParam1))
		{
			if (unk_0x3A21AE6BBFD5D62C(unk_0x7C7787D2D7139A85()))
			{
				if ((unk_0x452279D32F3D751E(iParam1, joaat("weapon_stungun"), 0) || unk_0x452279D32F3D751E(iParam1, 0, 2)) || unk_0x452279D32F3D751E(iParam1, 0, 1))
				{
					func_361(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA302865A999478FC(unk_0x7C7787D2D7139A85());
			}
		}
	}
}

int func_243(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0x300C62F79A4441EB(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_191(uParam0, 14))
			{
				func_244(uParam0);
			}
			func_236(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0)
{
	func_210(uParam0, 14, 0);
	func_210(uParam0, 15, 0);
	func_246();
	if (func_245())
	{
		func_241(0);
	}
}

int func_245()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_246()
{
	var uVar0;
	
	uVar0 = unk_0x9B79A29933E4A8FA();
	if (unk_0xD960230552BC4165(uVar0, 0))
	{
		unk_0x5F5C6A264C2CA8B1(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_247(var uParam0, var uParam1)
{
	func_134(uParam0, uParam1->f_2, 1, 1);
	if (unk_0xD960230552BC4165(uParam1->f_3, 0))
	{
		if (unk_0x3656B691E303FDE0(uParam1->f_3, unk_0x0FA8183DAD2B3203(), 1))
		{
			if (!func_213())
			{
				func_361(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_153();
			}
		}
	}
	else if (!func_213())
	{
		func_361(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_153();
	}
}

int func_248(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0x847817A65E16621A(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1, 0);
	unk_0x0A43D5D11052D038(uParam0->f_1, 1);
	unk_0xE0AC40EF164A2569(uParam0->f_1);
	uLocal_417[0] = unk_0x847817A65E16621A(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1, 0);
	uLocal_417[1] = unk_0x847817A65E16621A(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1, 0);
	uLocal_417[2] = unk_0x847817A65E16621A(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1, 0);
	unk_0x54B5C3A13D3588F0(uLocal_417[0], 2);
	unk_0x54B5C3A13D3588F0(uLocal_417[1], 2);
	unk_0x54B5C3A13D3588F0(uLocal_417[2], 2);
	unk_0x34F7B46842A3104F(uLocal_417[0], "BRAVEST");
	unk_0x34F7B46842A3104F(uLocal_417[1], "BOLDEST");
	unk_0x34F7B46842A3104F(uLocal_417[2], "BADDEST");
	unk_0x0BBBAC4546BFE280(uParam0->f_3, 800, 0);
	unk_0x34F7B46842A3104F(uParam0->f_3, "PUSSYWAG");
	unk_0xA07556D283A83CA1(uParam0->f_3, 1);
	unk_0xF160330CAB44BA73(uParam0->f_3, 1);
	uParam0->f_15 = unk_0xF524E590E8C8C6BE(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0xB0675208A25FD4B5(uParam0->f_3, 1);
	func_253(Local_423.f_14, 1, 1114636288);
	func_253(Local_958, 1, 15f);
	func_253(Local_961, 1, 15f);
	unk_0x54B5C3A13D3588F0(uParam0->f_3, 2);
	return 1;
}

int func_249()
{
	if (!unk_0x6DF9C43E3CC645BC(Local_853.f_0))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6DF9C43E3CC645BC(Local_853.f_1))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6DF9C43E3CC645BC(iLocal_888))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x6DF9C43E3CC645BC(iLocal_889))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xDA28050D0A4CAB3A(120, "txm_fc_h1_"))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xDA28050D0A4CAB3A(0, "taxi_oj_fc3"))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xDFE2DFB40A988E19(&cLocal_976))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xB25A0D192C6A0A5B("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_250(var uParam0, var uParam1)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x95ED3BD0F52D542A(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_191(uParam0, 14))
			{
				if (unk_0x39A01A052D9B5FF0(*uParam1) && unk_0x2F6EFA2C2B20CA61(*uParam1) > 0)
				{
					unk_0x9C47809EE2CC69F5(*uParam1, 0);
				}
				func_237(uParam0, 0, 0);
				func_256(uParam0, 2, 1, 0, 0);
			}
			else if (func_118(uParam0, 14) > 20f)
			{
				func_361(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_191(uParam0, 14))
			{
				func_317(uParam0, 2, 0, 0);
				func_244(uParam0);
			}
			if (unk_0x39A01A052D9B5FF0(uParam0->f_10))
			{
				unk_0xAA2276003B2ADF1B(&(uParam0->f_10));
			}
			if ((unk_0x39A01A052D9B5FF0(*uParam1) && unk_0x2F6EFA2C2B20CA61(*uParam1) < 255) && unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) < 1)
			{
				unk_0x9C47809EE2CC69F5(*uParam1, 255);
				unk_0x925BD1075D119B45(*uParam1, 1);
			}
		}
	}
}

void func_251(var uParam0)
{
	func_252(uParam0, 1000);
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x5BBDAD06F405ED2C(uParam0->f_3);
		unk_0x845704CC8ADF1918(uParam0->f_3, unk_0x0FA8183DAD2B3203(), 0);
	}
	func_153();
	func_244(uParam0);
}

void func_252(var uParam0, int iParam1)
{
	if (unk_0xD2652A8A890B29BA(*uParam0))
	{
		unk_0xDC5BA18043353983(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x0298C8010FD5A69E(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
	}
}

void func_253(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_38(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_38(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x2D2E01EF7EFB0DB2(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x8E4F6615F45C8C6B(Var0, Var3, 1);
		unk_0xF13D526811FA8F57();
	}
}

void func_254()
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

void func_255(var uParam0)
{
	unk_0xA302865A999478FC(unk_0x7C7787D2D7139A85());
	unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 1, 0);
	func_252(uParam0, 1000);
}

void func_256(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_317(uParam0, 16, 4f, 0);
		if (func_257(uParam0))
		{
			func_48();
		}
	}
	func_281(uParam0, iParam2, bParam3);
}

int func_257(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_213())
	{
		Var6 = { func_259() };
		if (!unk_0x9591DE0F00127F2A(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x2553916E420E8EF0(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_258(&Var0);
			if (unk_0x2553916E420E8EF0(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_258(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_259()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_260(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_3))
		{
			if ((unk_0xEC9DA7D08BCA2C06(uParam0->f_3) && (unk_0x9B35D07DCD0F0B43() - iLocal_89) > 500) || unk_0x95ED3BD0F52D542A(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_261()
{
	unk_0x6BB2B1818CAE531E(Local_853.f_0);
	unk_0x6BB2B1818CAE531E(Local_853.f_1);
	unk_0x6BB2B1818CAE531E(iLocal_888);
	unk_0x6BB2B1818CAE531E(iLocal_889);
	unk_0x798362387B375EB6(120, "txm_fc_h1_");
	unk_0x798362387B375EB6(0, "taxi_oj_fc3");
	unk_0x3D070739F9AFB22D(&cLocal_976);
	unk_0x36B659209EBDD366("veh@truck@ds@base");
}

int func_262(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x95ED3BD0F52D542A(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
			{
			}
			func_234(uParam0, 1);
			if (func_33())
			{
				unk_0x3D0DE925C0536CA0(unk_0x7A8732CFB5113E77(), 1, 0);
			}
			if (unk_0x411C065ADB822CD9(uParam0->f_3, 2106541073) == 1 || unk_0x411C065ADB822CD9(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x5BBDAD06F405ED2C(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x845704CC8ADF1918(uParam0->f_3, unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (unk_0x586E95A1CE46FC21(unk_0x7A8732CFB5113E77(), 0))
		{
			func_279(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x78829A259A6975CD(&uVar3);
				unk_0xA12E1659DEF57244(&uVar3);
				unk_0xD06C31EF9A42C2B4(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x845704CC8ADF1918(0, uParam0->f_4, 0);
				unk_0x15A7B753872B3CE3(uVar3);
				unk_0xC544A8E1032AC1CF(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_191(uParam0, 14))
			{
				func_244(uParam0);
				func_236(uParam0, 0);
			}
			if (func_191(uParam0, 9))
			{
				func_210(uParam0, 9, 0);
				unk_0x1C9DBC28A851F0A6();
				if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
				{
					unk_0x9C47809EE2CC69F5(uParam0->f_8, 255);
					unk_0x925BD1075D119B45(uParam0->f_8, 1);
				}
			}
			if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xB8D4A2BAA78AB950(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_278(uParam0, uParam0->f_3) > 300f)
				{
					func_361(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 1 || ((func_51(unk_0x0FA8183DAD2B3203(), uParam0->f_3, 1) < 20f && func_223(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_223(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_275(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_274(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_273(uParam0->f_4, uParam0->f_3);
								iVar0 = func_272(uParam0, &iVar1);
								if (!unk_0xF4B969E0807E76C7(iVar0, 0))
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
										unk_0x2DCF88AC859255F3(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x2DCF88AC859255F3(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x6C7A7AC0F0B0B1C0(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xF4B969E0807E76C7(iVar0, 0))
											{
												unk_0x2DCF88AC859255F3(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xC6612209077465DD(uParam0->f_3);
							unk_0x31A7662B885C7549(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x7E0D08AE541937A1(unk_0xACE5E491FC1B0D37(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_209(uParam0))
							{
								unk_0xC6612209077465DD(uParam0->f_3);
							}
							else if (((unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 1 && unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 0) && unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 7) && func_278(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x78829A259A6975CD(&(uParam0->f_243));
								unk_0xA12E1659DEF57244(&(uParam0->f_243));
								unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x5D672CB011E20B28(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x5D672CB011E20B28(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x15A7B753872B3CE3(uParam0->f_243);
								unk_0xC544A8E1032AC1CF(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xF6FD8019402CF03B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x06334029756A14BE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_51(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_271(uParam0, 1))
								{
									unk_0x5BBDAD06F405ED2C(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_270(uParam0->f_4))
								{
									unk_0x5BBDAD06F405ED2C(uParam0->f_3);
									func_361(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_268(uParam0);
						if (func_278(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0x95ED3BD0F52D542A(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_264(uParam0))
								{
									func_263(uParam0);
									iLocal_89 = unk_0x9B35D07DCD0F0B43();
									unk_0x1DB66BD2267055C0(uParam0->f_3, 26, 1);
									func_210(uParam0, 5, 0);
									unk_0x93DC7DF11799F547();
									unk_0xFEF78C01D647E20F(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD2939754183602A1(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x7E0D08AE541937A1(unk_0xACE5E491FC1B0D37(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_263(var uParam0)
{
	if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
	{
		unk_0x925BD1075D119B45(uParam0->f_8, 0);
		unk_0xAA2276003B2ADF1B(&(uParam0->f_8));
	}
}

int func_264(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_145("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
	{
		func_156();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_152(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_128(uParam0, 0, 1084227584) && func_151(1, 1, 1))
			{
				if (func_271(uParam0, 1))
				{
					iLocal_88 = unk_0x9B35D07DCD0F0B43();
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
				uParam0->f_7 = func_273(uParam0->f_4, uParam0->f_3);
				iVar9 = func_272(uParam0, &iVar10);
				if (!unk_0xF4B969E0807E76C7(iVar9, 0))
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
						unk_0x2DCF88AC859255F3(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x2DCF88AC859255F3(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x6C7A7AC0F0B0B1C0(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xF4B969E0807E76C7(iVar9, 0))
						{
							unk_0x2DCF88AC859255F3(iVar9, 0, 4096);
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
			iVar12 = func_193(&(uParam0->f_409), unk_0xC12F91346EA13947(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xC12F91346EA13947(uParam0->f_4, Var0), 1);
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
				func_144(0, 0, 1);
				unk_0xBB65AAC660EECEA8(unk_0xACE5E491FC1B0D37(uParam0->f_4, 1), 3f, 0);
				unk_0x5EB47C7F004ABFCA(unk_0xACE5E491FC1B0D37(uParam0->f_4, 1), 25f, 0);
				unk_0x0D23E3918F7AF11B(1);
				unk_0x1C9DBC28A851F0A6();
				func_123();
				func_281(uParam0, 0, 0);
				Var13 = { unk_0xC12F91346EA13947(uParam0->f_4, Var6) };
				unk_0xCB3446C6A91D1A78(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(uParam0->f_3, func_266(uParam0));
				func_147(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xF44C160C97CC41EB(*uParam0, unk_0xC12F91346EA13947(uParam0->f_4, Var0));
				unk_0x0620057C4982F1C1(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x0472F75F711AABCE(*uParam0, 1);
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
				unk_0xCFEC09B98C6C5993(uParam0->f_3, 0, 0);
				unk_0x31A7662B885C7549(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_145("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
			{
				if (!unk_0x5294582CE404D3F4(uParam0->f_3, 0))
				{
					unk_0xB425E338F85508A5(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x0B4387FBA5326E78(uParam0->f_4, func_265(uParam0->f_7), 1);
				}
				unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
				unk_0xDC5BA18043353983(*uParam0, 0);
				unk_0xDC5BA18043353983(uParam0->f_1, 0);
				unk_0xB489E71A45CDC02F(0);
				unk_0xA291E27354439AE9(0, 1065353216);
				unk_0xCF33E56642B34516(800);
				unk_0x0D23E3918F7AF11B(1);
				unk_0x1C9DBC28A851F0A6();
				func_123();
				func_281(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xBF28CCACDDFF5346() && !unk_0xC862E94A8ABC89B8())
			{
				func_137(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
			unk_0xDC5BA18043353983(*uParam0, 0);
			unk_0xDC5BA18043353983(uParam0->f_1, 0);
			unk_0xB489E71A45CDC02F(0);
			unk_0xA291E27354439AE9(0, 1065353216);
			func_137(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0) && !unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
			{
				if (unk_0xEC9DA7D08BCA2C06(uParam0->f_3) || unk_0x5294582CE404D3F4(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -1794415470) != 1 && unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -1794415470) != 0)
				{
					unk_0x31A7662B885C7549(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)
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

float func_266(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xC12F91346EA13947(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xC12F91346EA13947(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_267(unk_0xACE5E491FC1B0D37(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_267(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x3BA2E0B9E14A8025((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_268(var uParam0)
{
	var uVar0;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_3))
		{
			if (func_235(uParam0->f_3, 1) > 30f || func_269(uParam0))
			{
				if (unk_0x411C065ADB822CD9(uParam0->f_3, -1794415470) == 1 || unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) == 1)
				{
					unk_0x78829A259A6975CD(&uVar0);
					unk_0xA12E1659DEF57244(&uVar0);
					unk_0x845704CC8ADF1918(0, uParam0->f_4, 0);
					unk_0x5D672CB011E20B28(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xD06C31EF9A42C2B4(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x15A7B753872B3CE3(uVar0);
					unk_0xC544A8E1032AC1CF(uParam0->f_3, uVar0);
					func_361(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_269(var uParam0)
{
	if ((unk_0xB8D4A2BAA78AB950(uParam0->f_4) > 3f && func_118(uParam0, 5) > 15f) || unk_0xF0B9188ED2464C51(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x82C6A64BFC7E5440(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x82C6A64BFC7E5440(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x82C6A64BFC7E5440(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x82C6A64BFC7E5440(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x2741F9670A602A19(unk_0x7F375072508F738F(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x19F2785A757B5287(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x19F2785A757B5287(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x19F2785A757B5287(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x19F2785A757B5287(iParam0, 3))
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

int func_271(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x300C62F79A4441EB(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x300C62F79A4441EB(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x300C62F79A4441EB(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD4B321D9096B01FC(iVar0[iVar4]))
			{
				if (unk_0xF4B969E0807E76C7(iVar0[iVar4], 0))
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
		if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_272(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		iVar0 = unk_0x300C62F79A4441EB(uParam0->f_4, 1, 0);
		if (unk_0xD4B321D9096B01FC(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x300C62F79A4441EB(uParam0->f_4, 2, 0);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x300C62F79A4441EB(uParam0->f_4, 0, 0);
				if (unk_0xD4B321D9096B01FC(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x78B310CB286001B8(iParam0);
	Var0 = { unk_0x28B05FCF3D725FED(iParam0, unk_0xACE5E491FC1B0D37(iParam1, 1)) };
	if (unk_0x7F375072508F738F(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x7F375072508F738F(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x6C7A7AC0F0B0B1C0(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x6C7A7AC0F0B0B1C0(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x6C7A7AC0F0B0B1C0(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x6C7A7AC0F0B0B1C0(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_274(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
	{
		if (!unk_0x7FB035B5755E076D(uParam0->f_3) && func_235(uParam0->f_3, 1) < fParam2)
		{
			if (!func_191(uParam0, 5))
			{
				func_317(uParam0, 5, 0, 0);
			}
		}
		else if (func_191(uParam0, 5))
		{
			func_210(uParam0, 5, 0);
		}
		if (((func_118(uParam0, 5) > IntToFloat(iParam1) && unk_0xB8D4A2BAA78AB950(uParam0->f_4) < fParam4) && !unk_0x7FB035B5755E076D(uParam0->f_3)) || func_235(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_275(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xCC77DF450B31521D(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xCC77DF450B31521D(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x0DBA551C06A14723(uParam0->f_4, iVar18) };
		Var6 = { unk_0x28B05FCF3D725FED(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xC12F91346EA13947(uParam0->f_4, Var6) };
	Var3 = { unk_0xC12F91346EA13947(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x5EDDE8794CB9CFB3(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xCC94EE23853F38E4(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_51(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x01CBD71E072E9F33((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xE595A27685A9E166(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x19D3834206AE7960(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 1 && unk_0x411C065ADB822CD9(uParam0->f_3, 242628503) != 0)
			{
				unk_0x78829A259A6975CD(&(uParam0->f_243));
				unk_0xA12E1659DEF57244(&(uParam0->f_243));
				unk_0x5D672CB011E20B28(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
				unk_0x509D27D3AE4D5D9A(uParam0->f_243, 1);
				unk_0x15A7B753872B3CE3(uParam0->f_243);
				unk_0xC544A8E1032AC1CF(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x1C9DBC28A851F0A6();
			if (uParam0->f_411 != 9)
			{
				if (!func_22(uParam0->f_44, 128))
				{
					func_256(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_276(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xC6612209077465DD(uParam0->f_3);
			unk_0x6E2920E14F5F962C(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x78829A259A6975CD(&(uParam0->f_243));
			unk_0xA12E1659DEF57244(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x5D672CB011E20B28(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5D672CB011E20B28(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
			unk_0x15A7B753872B3CE3(uParam0->f_243);
			unk_0xC544A8E1032AC1CF(uParam0->f_3, uParam0->f_243);
			unk_0x78829A259A6975CD(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xF6FD8019402CF03B(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x06334029756A14BE(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_276(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x8ED81066343F07B4(uParam0, sParam1, uParam2, func_277(iParam3), 0);
}

int func_277(int iParam0)
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

float func_278(var uParam0, int iParam1)
{
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		if (func_209(uParam0))
		{
			return func_51(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_279(var uParam0)
{
	func_242(uParam0, uParam0->f_3);
	if (func_209(uParam0))
	{
		if (func_191(uParam0, 14))
		{
			func_244(uParam0);
			if (unk_0x39A01A052D9B5FF0(uParam0->f_10))
			{
				unk_0xAA2276003B2ADF1B(&(uParam0->f_10));
			}
		}
	}
	if (!func_191(uParam0, 9))
	{
		if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
		{
			unk_0x9C47809EE2CC69F5(uParam0->f_8, 0);
			unk_0x925BD1075D119B45(uParam0->f_8, 0);
		}
		func_317(uParam0, 9, 0, 0);
		func_280("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_280(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x743C4524DF783B2F(iParam1, 1);
}

void func_281(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_317(uParam0, 16, 4f, 0);
		unk_0x1C9DBC28A851F0A6();
	}
}

int func_282(var uParam0, int iParam1)
{
	if (!unk_0xA3D567B14856EDE1(2))
	{
		return 0;
	}
	func_286(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0x57C8B4C1F3339B6E(unk_0x0FA8183DAD2B3203()) && !func_22(uParam0->f_44, 256))
			{
				func_67(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				func_256(uParam0, 135, 1, 0, 1);
				func_67(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_285(uParam0, iParam1))
	{
		if (func_235(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0x845704CC8ADF1918(uParam0->f_3, unk_0x0FA8183DAD2B3203(), 0);
				func_256(uParam0, 133, 1, 0, 1);
				func_67(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x2BF5E63466422C38(uParam0->f_3) || unk_0x5C0FAAC7D36B617B(uParam0->f_3)) || func_235(uParam0->f_3, 1) > 400f)
		{
			func_361(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x4D57D3E5ECE15A41(uParam0->f_2, 0);
		unk_0x4BA8ED9D4B9825B8(uParam0->f_4, 1);
		if (unk_0x300C62F79A4441EB(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0xBE90AE44ED49D493(uParam0->f_4);
			func_283(uParam0);
			func_55(2, 0);
			bLocal_94 = true;
			func_119(&uLocal_90);
			return 1;
		}
		else
		{
			func_361(uParam0, "No Taxi", 21);
			func_168("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_283(var uParam0)
{
	if (!unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
	{
		if (func_284())
		{
		}
	}
}

int func_284()
{
	if (unk_0xA2BC31158C8CEFD2(unk_0xBAC643F143880136(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_285(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(iVar0, 0))
			{
				iVar1 = unk_0x7F375072508F738F(iVar0);
				bVar2 = func_270(iVar0);
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
				if (unk_0x2741F9670A602A19(iVar1))
				{
					if (unk_0x300C62F79A4441EB(iVar0, -1, 0) == unk_0x0FA8183DAD2B3203())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x78B310CB286001B8(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(uParam0->f_44, 64))
					{
						if (unk_0xA3D567B14856EDE1(2))
						{
							func_168("TX_VIP_DMGD", -1);
							if (func_160("TX_VIP_DMGD"))
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
						if (unk_0xA3D567B14856EDE1(2))
						{
							func_168("TX_VIP_CAR", -1);
							if (func_160("TX_VIP_CAR"))
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
						if (unk_0xA3D567B14856EDE1(2))
						{
							func_168("TX_VIP_SMALL", -1);
							if (func_160("TX_VIP_SMALL"))
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

void func_286(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xDB02E0A2E60C82EB() || unk_0x77BA37DB22C66465())
	{
		uVar0 = iParam0;
		unk_0x84D9CF05D55C61C3(8, &uVar0, 1, 1);
	}
	else if (unk_0xDC143D98E1977B20() || unk_0x39FDED461BF385C3())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x7FDF7BA2E6185038(8, &cVar1);
	}
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
			unk_0x3B76114EC84D5812(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xA1E7A40E1F56E511(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x3B76114EC84D5812(&(uParam0->f_60[iVar0 /*3*/]), 2);
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
	func_307(48857, 48832, 1);
	func_307(48593, 48569, 1);
	func_307(48507, 48482, 1);
	func_307(48410, 48386, 1);
	func_307(48276, 48255, 1);
	func_307(48202, 48177, 1);
	func_307(48035, 48011, 1);
}

int func_291(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_292(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0->f_4))
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
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF524E590E8C8C6BE(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x812D517F863583BE(iParam0, 0, 40000) || unk_0x812D517F863583BE(iParam0, 1, 40000))
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
	if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
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
	if (unk_0xD4B321D9096B01FC(uParam0->f_4))
	{
		if (unk_0xE294A1321110B3E9(uParam0->f_4) && !unk_0x0514219B96C5A22A(uParam0->f_4))
		{
			if (!func_191(uParam0, 25))
			{
				func_317(uParam0, 25, 0, 0);
			}
			else if (func_118(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_191(uParam0, 25))
		{
			func_210(uParam0, 25, 0);
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
	if (!unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
	{
		if (unk_0x1262BCBF602D120C(uParam0->f_4))
		{
			if (unk_0x812D517F863583BE(uParam0->f_4, 0, 40000) || unk_0x812D517F863583BE(uParam0->f_4, 1, 40000))
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
	if (!unk_0xF4B969E0807E76C7(uParam0->f_4, 0))
	{
		if (unk_0xD960230552BC4165(uParam0->f_4, 0))
		{
			if (unk_0xACA46879E999E35C(uParam0->f_4))
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
	if (unk_0xD4B321D9096B01FC(uParam0->f_4))
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
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF524E590E8C8C6BE(iParam0) == 0f)
	{
		if (!unk_0xD960230552BC4165(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x812D517F863583BE(iParam0, 0, 40000) || unk_0x812D517F863583BE(iParam0, 1, 40000))
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
	if (unk_0xD4B321D9096B01FC(uParam0->f_3))
	{
		if ((unk_0x2BF5E63466422C38(uParam0->f_3) || unk_0xF4B969E0807E76C7(uParam0->f_3, 0)) || unk_0xCFBE5B663F1567A7(uParam0->f_3))
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
	if (!unk_0x6DF9C43E3CC645BC(iLocal_886))
	{
		return 0;
	}
	if (!unk_0xB25A0D192C6A0A5B("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_312(&iLocal_896, 0))
	{
		func_145("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_312(int iParam0, bool bParam1)
{
	if (!unk_0x6DF9C43E3CC645BC(func_19()))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xB25A0D192C6A0A5B("gestures@m@standing@casual"))
		{
			func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xB25A0D192C6A0A5B("oddjobs@taxi@"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB25A0D192C6A0A5B("oddjobs@towingcome_here"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB25A0D192C6A0A5B("misscommon@response"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xA3D567B14856EDE1(2))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
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
	if (!unk_0x2BF5E63466422C38(uParam0->f_3))
	{
		uParam0->f_8 = func_216(uParam0->f_3, 0, 0);
		unk_0x8BCCA24E4A8A31F0(1, 0);
		unk_0x925BD1075D119B45(uParam0->f_8, 1);
		unk_0x058B6969CEED705F(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x6E2920E14F5F962C(uParam0->f_3, unk_0x0FA8183DAD2B3203(), -1, 2048, 4);
	}
	return 1;
}

int func_315(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xD4B321D9096B01FC(uParam0->f_3))
	{
		func_316(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_37(uParam0->f_14, 0);
		unk_0xBB65AAC660EECEA8(uParam0->f_14, 2f, 0);
		func_253(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xAB333978A5E664C1(uParam0->f_11);
		}
		else if (unk_0xD4B321D9096B01FC(Global_110270.f_225[0]))
		{
			uParam0->f_3 = Global_110270.f_225[0];
			unk_0xE5C667CF3B4642D2(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xB983F26E7AFB47BF(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x5A36DB8F38E65BE2(uParam0->f_3, sParam7);
		unk_0x70CBCB37A00F34A2(uParam0->f_3, 112, 1);
		if (!unk_0x2BF5E63466422C38(uParam0->f_3))
		{
			unk_0x5C566093AEF7FD18(uParam0->f_3, 250);
			unk_0x1DB66BD2267055C0(uParam0->f_3, 32, 0);
			unk_0x1DB66BD2267055C0(uParam0->f_3, 104, 1);
			unk_0x1DB66BD2267055C0(uParam0->f_3, 177, 1);
			unk_0x1DB66BD2267055C0(uParam0->f_3, 116, 0);
			unk_0x8CBD7ED64E4A522F("TAXI_Passenger", &(uParam0->f_413));
			unk_0x9B54A3CCAAB4F5FB(1, uParam0->f_413, joaat("player"));
			unk_0x9B54A3CCAAB4F5FB(2, uParam0->f_413, joaat("COP"));
			unk_0xDB889DCC8B0139E6(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xC68BA6DC1B86F4F6(Param1, 20f, 5f, 0);
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
				func_112(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_111(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_112(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_111(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_318()
{
	unk_0x6BB2B1818CAE531E(iLocal_886);
	func_320(0);
	uLocal_1132 = func_319();
	unk_0x36B659209EBDD366("gestures@m@standing@casual");
}

var func_319()
{
	return unk_0x1FAFE9BB9D8960C1("MIDSIZED_MESSAGE");
}

void func_320(bool bParam0)
{
	unk_0x6BB2B1818CAE531E(func_19());
	if (bParam0)
	{
		unk_0x36B659209EBDD366("gestures@m@standing@casual");
	}
	unk_0x36B659209EBDD366("oddjobs@taxi@");
	unk_0x36B659209EBDD366("oddjobs@towingcome_here");
	unk_0x36B659209EBDD366("misscommon@response");
	unk_0x9F815D4FA0C47F97("TAXI", 2);
	if (!func_22(Global_111560.f_19092, 128))
	{
		func_67(&(Global_111560.f_19092), 128);
	}
}

void func_321(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
		{
			if (bParam2)
			{
				if (func_118(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_256(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_256(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_317(uParam0, 10, 0f, 1);
				}
			}
			else if (func_118(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_256(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_256(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_317(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_118(uParam0, 10) > 30f)
		{
			if (!func_213())
			{
				if (uParam0->f_112)
				{
					func_256(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_256(uParam0, 83, 1, 0, 0);
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
			func_119(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_344(uParam0))
			{
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
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
			func_119(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_339(uParam0))
			{
				func_343(uParam0, 1);
				func_341(0, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_14(&(Local_190[1 /*10*/].f_6)))
		{
			func_119(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_338(uParam0))
			{
				func_343(uParam0, 1);
				func_341(1, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_14(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x35D31BEBAFD53DE6(uParam0->f_4);
				func_119(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_109(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
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
			func_119(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_336(uParam0))
			{
				func_343(uParam0, 1);
				func_341(6, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_14(&(Local_190[4 /*10*/].f_6)))
		{
			func_119(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_335(uParam0))
			{
				func_343(uParam0, 1);
				func_341(4, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_14(&(Local_190[7 /*10*/].f_6)))
		{
			func_119(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_334(uParam0))
			{
				func_341(7, uParam0);
				func_343(uParam0, 1);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_14(&(Local_190[9 /*10*/].f_6)))
		{
			func_119(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA302865A999478FC(unk_0x7C7787D2D7139A85());
		}
		else if (func_109(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_333(uParam0))
			{
				func_343(uParam0, 1);
				func_341(9, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_14(&(Local_190[13 /*10*/].f_6)))
		{
			func_119(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_327(uParam0))
			{
				func_343(uParam0, 1);
				func_341(13, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_6)))
		{
			func_119(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_326(uParam0))
			{
				func_343(uParam0, 1);
				func_341(14, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_14(&(Local_190[11 /*10*/].f_6)))
		{
			func_119(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_325(uParam0))
			{
				func_343(uParam0, 1);
				func_341(11, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_340(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_14(&(Local_190[12 /*10*/].f_6)))
		{
			func_119(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_343(uParam0, 1);
				func_341(12, uParam0);
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
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
		else if (func_109(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
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
	
	if (!unk_0x2BF5E63466422C38(uParam0->f_2))
	{
		if ((!unk_0x8BCE526DCE6D7629(uParam0->f_2) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xB8D4A2BAA78AB950(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_119(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_109(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xB8D4A2BAA78AB950(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_108(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_108(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_323(var uParam0, float fParam1)
{
	if (!func_14(uParam0))
	{
		func_112(uParam0, fParam1);
	}
}

int func_324(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		Var0 = { unk_0x8C2358925451F246(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[12 /*10*/].f_3)))
			{
				func_119(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_108(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xD960230552BC4165(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x8C2358925451F246(uParam0->f_4, 1) };
		if (unk_0x01CBD71E072E9F33(Var0.f_0) > 2.5f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[11 /*10*/].f_3)))
			{
				func_119(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_109(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x01CBD71E072E9F33(uLocal_342) - unk_0x01CBD71E072E9F33(Var0.f_0)) < 0f)
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_109(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	if (((((unk_0xD960230552BC4165(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x78FEEDC74FCCF78F(unk_0xACE5E491FC1B0D37(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD4B321D9096B01FC(uParam0->f_5))
			{
				if ((unk_0xB8D4A2BAA78AB950(uParam0->f_4) > 15f && func_51(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xF4B969E0807E76C7(uParam0->f_5, 0) && !unk_0xBAA38708D7439CA7(uParam0->f_5, -1, 0)))
				{
					func_119(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_109(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_51(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xAC5FBBB39EA7908F(uParam0->f_5))
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_109(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xAC5FBBB39EA7908F(uParam0->f_5))
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_327(var uParam0)
{
	if (((unk_0xD960230552BC4165(uParam0->f_4, 0) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_328(uParam0->f_4) && unk_0xB8D4A2BAA78AB950(uParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_190[13 /*10*/].f_3)))
			{
				func_119(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_108(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[13 /*10*/].f_3));
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
	
	unk_0x905F304BCFD07BCE(unk_0xACE5E491FC1B0D37(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x905F304BCFD07BCE(unk_0xACE5E491FC1B0D37(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xFC53FA9A650FD7E7(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_332((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_331(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_329(unk_0xACE5E491FC1B0D37(iParam0, 1), Var15, Var18, Var21);
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
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0x300C62F79A4441EB(uParam0->f_4, -1, 0) == unk_0x0FA8183DAD2B3203())
		{
			if (unk_0x3A21AE6BBFD5D62C(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_334(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0x300C62F79A4441EB(uParam0->f_4, -1, 0) == unk_0x0FA8183DAD2B3203())
		{
			if (unk_0xF0B9188ED2464C51(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x6E77B3E7393A77D3(uParam0->f_4) <= -145f || unk_0x6E77B3E7393A77D3(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x6E77B3E7393A77D3(uParam0->f_4) <= 35f && unk_0x6E77B3E7393A77D3(uParam0->f_4) >= -35f)
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
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		iVar0 = unk_0x173C992F4C41CF5E(unk_0x7C7787D2D7139A85());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[4 /*10*/].f_3)))
			{
				func_119(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_108(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_336(var uParam0)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2548BC5361341B79(unk_0x7C7787D2D7139A85());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[6 /*10*/].f_3)))
			{
				func_119(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_108(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0xC29ACA630455C49B(uParam0->f_4))
		{
			iVar0 = unk_0x35D31BEBAFD53DE6(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x7FF38BFB318C1A86(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_256(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_256(uParam0, 72, 1, 0, 1);
				}
				func_108(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_338(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		Var0 = { unk_0x8C2358925451F246(uParam0->f_4, 1) };
		if (unk_0x01CBD71E072E9F33(Var0.f_0) > 3f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[1 /*10*/].f_3)))
			{
				func_119(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_108(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_339(var uParam0)
{
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0x0514219B96C5A22A(uParam0->f_4) && unk_0x916AF183F71F17C1(uParam0->f_4))
		{
			if (!func_14(&(Local_190[0 /*10*/].f_3)))
			{
				func_119(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_108(&(Local_190[0 /*10*/].f_3));
				func_111(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[0 /*10*/].f_3));
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
			func_111(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_317(uParam0, 10, 0f, 1);
	unk_0xA302865A999478FC(unk_0x7C7787D2D7139A85());
}

void func_341(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_342(uParam1, iParam0);
	func_108(&(Local_190[iParam0 /*10*/].f_6));
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
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (unk_0xB8D4A2BAA78AB950(uParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_190[5 /*10*/].f_3)))
			{
				func_119(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_108(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_108(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_345()
{
	struct<3> Var0;
	
	func_145("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x3656B691E303FDE0(Local_423.f_3, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(iLocal_890, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3656B691E303FDE0(Local_853.f_2, unk_0x0FA8183DAD2B3203(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
	{
		if (unk_0x3656B691E303FDE0(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_235(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_213())
			{
				func_348(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x59D299A96F03A83C(Local_423.f_3, unk_0x0FA8183DAD2B3203(), -1, 0);
				iLocal_900 = unk_0x9B35D07DCD0F0B43();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_153();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0xF4B969E0807E76C7(Local_853.f_2, 0) && !unk_0xF4B969E0807E76C7(Local_423.f_3, 0)) && !unk_0xF4B969E0807E76C7(iLocal_890, 0))
			{
				unk_0x8CBD7ED64E4A522F("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0x79CDB5CF25B388E3(Local_423.f_3);
				unk_0x9B54A3CCAAB4F5FB(255, Local_853.f_30, iLocal_893);
				unk_0x9B54A3CCAAB4F5FB(255, Local_853.f_30, iLocal_892);
				unk_0xDB889DCC8B0139E6(Local_853.f_2, Local_853.f_30);
				unk_0xDB889DCC8B0139E6(iLocal_890, iLocal_893);
				unk_0xCC94EE23853F38E4(Local_853.f_2, 1);
				unk_0xDEB0AA30ABFDCF48(Local_853.f_2, 17, 1);
				unk_0x0BBBAC4546BFE280(Local_853.f_2, 130, 0);
				unk_0x40162A4E6C7B29D7(Local_853.f_2, 1);
				unk_0x57B477AB6783471C(Local_853.f_2, 1);
				unk_0xC6612209077465DD(Local_853.f_2);
				unk_0xCC94EE23853F38E4(iLocal_890, 1);
				unk_0xDEB0AA30ABFDCF48(iLocal_890, 17, 1);
				unk_0x0BBBAC4546BFE280(iLocal_890, 130, 0);
				unk_0x40162A4E6C7B29D7(iLocal_890, 1);
				unk_0x57B477AB6783471C(iLocal_890, 1);
				unk_0xC6612209077465DD(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0xF4B969E0807E76C7(Local_853.f_2, 0) && !unk_0xF4B969E0807E76C7(Local_423.f_3, 0)) && !unk_0xF4B969E0807E76C7(iLocal_890, 0)) && !unk_0xF4B969E0807E76C7(Local_853.f_3, 0))
			{
				unk_0x78829A259A6975CD(&uLocal_414);
				unk_0xA12E1659DEF57244(&uLocal_414);
				unk_0x845704CC8ADF1918(0, iLocal_890, 0);
				unk_0x5D672CB011E20B28(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_414);
				unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
				unk_0x78829A259A6975CD(&uLocal_414);
				unk_0x78829A259A6975CD(&uLocal_415);
				unk_0xA12E1659DEF57244(&uLocal_415);
				unk_0x845704CC8ADF1918(0, Local_853.f_2, 0);
				unk_0x5D672CB011E20B28(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_415);
				unk_0xC544A8E1032AC1CF(iLocal_890, uLocal_415);
				unk_0x78829A259A6975CD(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0xF4B969E0807E76C7(iLocal_890, 0) && !unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
				{
					unk_0xDB889DCC8B0139E6(Local_423.f_3, iLocal_892);
					unk_0xCC94EE23853F38E4(Local_423.f_3, 1);
					unk_0xDEB0AA30ABFDCF48(Local_423.f_3, 13, 1);
					unk_0x7FD049FE087DEDB4(Local_423.f_3, 100);
					unk_0x160AF5DE0B0878EE(Local_423.f_3, 100);
					unk_0x0BBBAC4546BFE280(Local_423.f_3, 105, 0);
					unk_0xC6612209077465DD(Local_423.f_3);
					unk_0x78829A259A6975CD(&uLocal_416);
					unk_0xA12E1659DEF57244(&uLocal_416);
					unk_0x45852AF9448D4F9F(0, 5000);
					func_347(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0x63D387323969ABE0(0, func_346(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0x0E6A028503C7EEE4(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x15A7B753872B3CE3(uLocal_416);
					unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_416);
					unk_0x78829A259A6975CD(&uLocal_416);
					iLocal_902 = 1;
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 256);
					unk_0xC167C31F20B1FD61(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0x2BF5E63466422C38(Local_853.f_2) && !unk_0x2BF5E63466422C38(iLocal_890))
				{
					if (func_235(Local_853.f_2, 1) < 2f || func_235(iLocal_890, 1) < 2f)
					{
						unk_0xC6612209077465DD(Local_853.f_2);
						unk_0xC6612209077465DD(iLocal_890);
						unk_0x6E2920E14F5F962C(Local_853.f_2, unk_0x0FA8183DAD2B3203(), -1, 2048, 4);
						unk_0x78829A259A6975CD(&uLocal_414);
						unk_0xA12E1659DEF57244(&uLocal_414);
						unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
						unk_0x15A7B753872B3CE3(uLocal_414);
						unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
						unk_0x6E2920E14F5F962C(iLocal_890, unk_0x0FA8183DAD2B3203(), -1, 2048, 4);
						unk_0x78829A259A6975CD(&uLocal_415);
						unk_0xA12E1659DEF57244(&uLocal_415);
						unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
						unk_0x15A7B753872B3CE3(uLocal_415);
						unk_0xC544A8E1032AC1CF(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0x2BF5E63466422C38(Local_853.f_2))
					{
					}
					else
					{
						unk_0xC6612209077465DD(Local_853.f_2);
						unk_0xF0E9590A910B74BE(Local_853.f_2, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					}
					if (unk_0x2BF5E63466422C38(iLocal_890))
					{
					}
					else
					{
						unk_0xC6612209077465DD(iLocal_890);
						unk_0xF0E9590A910B74BE(iLocal_890, unk_0x0FA8183DAD2B3203(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_145("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
			{
				if (unk_0x411C065ADB822CD9(Local_423.f_3, 242628503) == 1)
				{
					if (unk_0x3942FAEA4AF15467(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
			}
			if (((!unk_0x2BF5E63466422C38(iLocal_890) && unk_0x131D2F46228B31BA(iLocal_890)) && !unk_0xF4B969E0807E76C7(Local_853.f_2, 0)) && !bLocal_908)
			{
				unk_0x6E2920E14F5F962C(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0x78829A259A6975CD(&uLocal_414);
				unk_0xA12E1659DEF57244(&uLocal_414);
				unk_0x45852AF9448D4F9F(0, 500);
				unk_0x5D672CB011E20B28(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x845704CC8ADF1918(0, Local_423.f_3, 0);
				unk_0x15A7B753872B3CE3(uLocal_414);
				unk_0xC544A8E1032AC1CF(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0xF4B969E0807E76C7(Local_423.f_3, 0) && !unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
			{
				if (unk_0x3942FAEA4AF15467(Local_423.f_3) > 2)
				{
					func_256(&Local_423, 58, 1, 0, 0);
					unk_0x78829A259A6975CD(&uLocal_416);
					unk_0xA12E1659DEF57244(&uLocal_416);
					unk_0xECC035CAE5B59E06(0);
					unk_0x59D299A96F03A83C(0, Local_853.f_2, 2000, 0);
					unk_0x15A7B753872B3CE3(uLocal_416);
					unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_145("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0xF4B969E0807E76C7(iLocal_890, 0))
			{
				if (!unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
				{
					if (!unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
					{
						unk_0x78829A259A6975CD(&uLocal_415);
						unk_0xA12E1659DEF57244(&uLocal_415);
						unk_0x63D387323969ABE0(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x59D299A96F03A83C(0, Local_853.f_2, -1, 1);
						unk_0x15A7B753872B3CE3(uLocal_415);
						unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_145("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_213())
			{
				if (!unk_0xF4B969E0807E76C7(Local_423.f_3, 0) && !unk_0xF4B969E0807E76C7(Local_853.f_2, 0))
				{
					unk_0x0E6A028503C7EEE4(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_145("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0xF4B969E0807E76C7(Local_853.f_2, 0) && !unk_0xF4B969E0807E76C7(Local_423.f_3, 0))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(Local_853.f_2, 0) };
				unk_0xA12E1659DEF57244(&uLocal_416);
				unk_0x0A95A219457E20AA(0, Var0, 1000, 0, 0);
				unk_0xB4406AF64AE14C40(0, 0);
				unk_0x45852AF9448D4F9F(0, 500);
				unk_0xAAAD1B054EFBF5A7(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_416);
				unk_0xC544A8E1032AC1CF(Local_423.f_3, uLocal_416);
				unk_0x78829A259A6975CD(&uLocal_416);
				unk_0x7D81B41B134BD6F2(Local_423.f_3, 1);
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
	
	if (unk_0xD960230552BC4165(uParam0->f_4, 0))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
		{
			Var0 = { unk_0xC12F91346EA13947(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xC12F91346EA13947(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xD34AF93E9BCF12F0(Var0, Param1, 0) < unk_0xD34AF93E9BCF12F0(Var3, Param1, 0) && unk_0x6C7A7AC0F0B0B1C0(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x3D1E9B6872B0AE00(0, uParam0->f_4, 131584);
			}
			else if (unk_0xD34AF93E9BCF12F0(Var0, Param1, 0) >= unk_0xD34AF93E9BCF12F0(Var3, Param1, 0) && unk_0x6C7A7AC0F0B0B1C0(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x3D1E9B6872B0AE00(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x3D1E9B6872B0AE00(0, uParam0->f_4, 512);
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
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_349(sParam2, iParam3, 0);
}

int func_349(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_154();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_359(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_358();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_357();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_356())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
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
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_355();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_354();
		func_350();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_154();
	}
	return 0;
}

void func_350()
{
	if (!func_351())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_351()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_173())
	{
		return 0;
	}
	if (func_352(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0)
{
	return func_353(iParam0, 20);
}

bool func_353(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_354()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_355()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_356()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_105();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_358()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_359(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_361(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_153();
	func_462(2);
	Var0 = { func_368() };
	if ((!unk_0x9591DE0F00127F2A(&Var0) && func_213()) && !unk_0x2553916E420E8EF0(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x1C9DBC28A851F0A6();
		unk_0x0D23E3918F7AF11B(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
		{
			if (!func_225(uParam0))
			{
				if (unk_0xF6FD8019402CF03B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x92A1D522E8613359(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xF6FD8019402CF03B(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x92A1D522E8613359(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xF6FD8019402CF03B(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x92A1D522E8613359(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			if (func_225(uParam0))
			{
				if (unk_0xACA46879E999E35C(uParam0->f_4))
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(uParam0, &Var0);
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_366(uParam0, &Var0);
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 1, 0);
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
			{
				func_276(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_55(3, 0);
		}
		func_317(uParam0, 3, 0f, 1);
	}
}

void func_362(char* sParam0)
{
	switch (func_3(unk_0x0FA8183DAD2B3203()))
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
	
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
	{
		unk_0xCC94EE23853F38E4(uParam0->f_3, 0);
		unk_0x7FF38BFB318C1A86(uParam0->f_3);
		unk_0x3A6FD57A8EC62253(uParam0->f_3, 3, 0);
		unk_0xDEB0AA30ABFDCF48(uParam0->f_3, 17, 1);
		unk_0xC6612209077465DD(uParam0->f_3);
		if ((func_53(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_365(uParam0->f_29)) && !bParam2)
		{
			func_364(uParam0);
		}
		else
		{
			unk_0x3A6FD57A8EC62253(uParam0->f_3, 1024, 1);
			unk_0x3A6FD57A8EC62253(uParam0->f_3, 131072, 1);
			unk_0xA12E1659DEF57244(&uVar0);
			unk_0x2DCF88AC859255F3(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
			}
			else
			{
				unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
			}
			unk_0xB42484F43369ECDC(0, 0);
			unk_0x15A7B753872B3CE3(uVar0);
			unk_0xC544A8E1032AC1CF(uParam0->f_3, uVar0);
			unk_0x78829A259A6975CD(&uVar0);
		}
		unk_0x7D81B41B134BD6F2(uParam0->f_3, 1);
	}
}

void func_364(var uParam0)
{
	var uVar0;
	
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x5A2B7C446C0CF087(uParam0->f_3, 84.9058f);
				unk_0x7D81B41B134BD6F2(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x5A2B7C446C0CF087(uParam0->f_3, 68.3138f);
				unk_0x7D81B41B134BD6F2(uParam0->f_3, 1);
			}
			else
			{
				unk_0xDE8E5CE8855FA963(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xC6612209077465DD(uParam0->f_3);
			unk_0x78829A259A6975CD(&uVar0);
			unk_0xA12E1659DEF57244(&uVar0);
			unk_0x2DCF88AC859255F3(0, 0, 0);
			unk_0xB42484F43369ECDC(0, 0);
			unk_0xD06C31EF9A42C2B4(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x0C274BFE1BBC8139(0, 1);
				unk_0xD06C31EF9A42C2B4(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xF671F163E3851D8B(0, 151.7794f, 0);
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB09BF3E3433C2097(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xB09BF3E3433C2097(0, uParam0->f_29, 15f, 20000);
				unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
			}
			else
			{
				unk_0x5D672CB011E20B28(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x52EC8D7433C7E520(uParam0->f_29, 15f, 1))
			{
				unk_0xB09BF3E3433C2097(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
			}
			unk_0x15A7B753872B3CE3(uVar0);
			unk_0xC544A8E1032AC1CF(uParam0->f_3, uVar0);
			unk_0x78829A259A6975CD(&uVar0);
		}
		unk_0x7D81B41B134BD6F2(uParam0->f_3, 1);
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
	if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
	{
		if (func_51(unk_0x0FA8183DAD2B3203(), uParam0->f_3, 1) < 40f && !unk_0x7FB035B5755E076D(uParam0->f_3))
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
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x8CD683A755F4B25E();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
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
						if (func_397("TAXI_OBJ_FTC1") || unk_0x39A01A052D9B5FF0(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_200(&Local_423) != 10)
						{
							func_256(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_200(&Local_423) > 10 && func_200(&Local_423) != 15) && !func_398(&Local_423))
				{
					func_256(&Local_423, 15, 1, 0, 0);
					func_206(&Local_423, 7);
				}
				break;
			}
	}
	func_371(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_371(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_379(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_191(uParam0, 2))
	{
		if (func_378(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x9B35D07DCD0F0B43() % 2000) < 50)
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
				if (func_213())
				{
					uParam2->f_13 = { func_259() };
					if (unk_0x2553916E420E8EF0(&(uParam2->f_13), &(uParam2->f_7)))
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
				if (func_229(uParam0))
				{
					if (func_213())
					{
						func_317(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_373() };
						if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_213())
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
				if (((!func_191(uParam0, 14) && !func_213()) && !func_229(uParam0)) && func_118(uParam0, 18) > 1f)
				{
					func_317(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_213())
				{
					if (func_118(uParam0, 18) > 1f)
					{
						if (!unk_0x9591DE0F00127F2A(&(uParam2->f_1)))
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
				if (!func_213())
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
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_349(sParam2, iParam4, 0);
}

struct<6> func_373()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x8CD683A755F4B25E();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x005AF94672136563(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x005AF94672136563(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
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
		StringCopy(uParam0[iVar0 /*8*/], func_150(), 24);
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
			if (func_231("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_231("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_231("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_231("TX_OBJ_GYB_DO", 0, 0) || func_231("TAXI_OBJ_GYB", 0, 0)) || func_231("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_231("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_231("TX_OBJ_CYI_DO", 0, 0) || func_231("TAXI_OBJ_CYI_01", 0, 0)) || func_231("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_231("TX_OBJ_GYN_DO", 0, 0) || func_231("TAXI_OBJ_GYN", 0, 0)) || func_231("TAXI_OBJ_GYN_TG", 0, 0)) || func_231("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_231("TAXI_OBJ_CC1", 0, 0) || func_231("TAXI_OBJ_CC2", 0, 0)) || func_231("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_231("TAXI_OBJ_FTC1", 0, 0) || func_231("TAXI_OBJ_FTC2", 0, 0)) || func_231("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_231("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_231("TAXI_OBJ_GETRUN", 0, 0) || func_231("TAXI_OBJ_DRIVE", 0, 0)) || func_231("TAXI_OBJ_RETURN", 0, 0)) || func_231("TAXI_OBJ_POL", 0, 0)) || func_231("TAXI_OBJ_RUNOUT", 0, 0)) || func_231("TAXI_OBJ_POL", 0, 0));
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
	else if (func_191(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_200(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_394(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_213())
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
					func_281(uParam0, 0, 0);
				}
				func_240(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_118(uParam0, 16) > 1f)
				{
					func_241(1);
					if (uParam0->f_411 == 9)
					{
						func_280("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_280("TAXI_VIP_RETURN", 7500, 1);
					}
					func_317(uParam0, 16, 0, 0);
					func_281(uParam0, 0, 0);
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
				else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
				{
					func_276(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_118(uParam0, 16) > func_133(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_213()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_200(uParam0))
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
				func_281(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_348(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_256(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_317(uParam0, 16, 0, 0);
				func_256(uParam0, 4, 0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_280("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_280("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x39A01A052D9B5FF0(uParam0->f_9))
					{
						uParam0->f_9 = func_132(uParam0->f_17, 1);
					}
					else if (unk_0x2F6EFA2C2B20CA61(uParam0->f_9) == 0)
					{
						unk_0x9C47809EE2CC69F5(uParam0->f_9, 255);
						unk_0x58531110F2DD153B(uParam0->f_9, uParam0->f_17);
						unk_0x925BD1075D119B45(uParam0->f_9, 1);
					}
				}
				func_256(uParam0, 10, 1, 0, 0);
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
				func_258(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_393(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_276(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x39A01A052D9B5FF0(uParam0->f_9))
					{
						uParam0->f_9 = func_132(uParam0->f_17, 1);
					}
					else if (unk_0x2F6EFA2C2B20CA61(uParam0->f_9) == 0)
					{
						unk_0x9C47809EE2CC69F5(uParam0->f_9, 255);
						unk_0x58531110F2DD153B(uParam0->f_9, uParam0->f_17);
						unk_0x925BD1075D119B45(uParam0->f_9, 1);
					}
				}
				func_256(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_389(uParam0, 33554432, Var0, "", 1, 8);
				func_317(uParam0, 16, 0, 0);
				func_256(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_213())
				{
					func_388(uParam0, 0);
					func_67(&(uParam0->f_44), 4);
					func_317(uParam0, 16, 0, 0);
					func_256(uParam0, 13, 0, 0, 0);
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
				func_258(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_118(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_258(&Var0);
					}
					func_386(Var0, uParam1);
					func_67(&(uParam0->f_81), 67108864);
					func_317(uParam0, 16, 0, 0);
					func_317(uParam0, 11, 0, 0);
					func_281(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_118(uParam0, 11) > uParam0->f_36)
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
							func_258(&Var0);
						}
					}
					func_386(Var0, uParam1);
					func_317(uParam0, 11, 0, 0);
					func_317(uParam0, 16, 0, 0);
					func_281(uParam0, 0, 0);
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
					func_258(&Var0);
				}
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
				func_258(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
				func_258(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_258(&Var0);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
				func_67(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_258(&Var0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 12:
				func_280("TAXI_OBJ_GYB", 3500, 1);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_280("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_280("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_280("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
				func_256(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_280("TAXI_OBJ_CYI_01", 7500, 1);
					func_67(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_258(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_258(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_258(&Var0);
				func_386(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 33:
				func_280("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_118(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_258(&Var0);
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
						func_281(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_258(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_258(&Var0);
					func_393(uParam0, &Var0, 0, 0, 8);
					func_67(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 46, 1, 0, 0);
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
				func_258(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_281(uParam0, 0, 0);
				break;
			
			case 139:
				func_280("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_256(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xBAC643F143880136(0, 120);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xBAC643F143880136(0, 100);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_280("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_281(uParam0, 0, 0);
				func_256(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_213())
				{
					func_280("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_281(uParam0, 0, 0);
					func_256(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_280("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_394(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_258(&Var0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x2BF5E63466422C38(uParam0->f_3))
					{
						func_276(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
						func_258(&Var0);
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
						func_258(&Var0);
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
						func_258(&Var0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
					func_281(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_317(uParam0, 16, 0, 0);
					func_281(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x2BF5E63466422C38(uParam0->f_3))
					{
						func_276(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_317(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_258(&Var0);
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
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_67(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_317(uParam0, 16, 0, 0);
				}
				func_394(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_213())
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
					func_281(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_213())
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
					func_281(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_213())
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
								func_281(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_281(uParam0, 0, 0);
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
									func_258(&Var0);
									func_393(uParam0, &Var0, 0, 0, 8);
									func_317(uParam0, 16, 0, 0);
									func_317(uParam0, 11, 0, 0);
									func_281(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_393(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_256(uParam0, 143, 0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
				else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
				{
					func_276(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_394(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_383(uParam0))
				{
					func_390(uParam0, Var0, func_392(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x2BF5E63466422C38(uParam0->f_3))
					{
						func_276(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_381(uParam0, Var0, 8);
				}
				func_394(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_67(&(uParam0->f_83), 1024);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_67(&(uParam0->f_83), 2048);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_67(&(uParam0->f_83), 4096);
					func_317(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_258(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_394(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 52, 1, 0, 0);
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
				else if (!unk_0x2BF5E63466422C38(uParam0->f_3))
				{
					func_276(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
						func_256(uParam0, 52, 1, 0, 0);
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
					func_281(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_394(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_317(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xEBE4F888D9965006(unk_0x7A8732CFB5113E77()) >= 1)
				{
					func_280("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_281(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_258(&Var0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 100:
				func_280("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_281(uParam0, 0, 0);
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
					func_258(&Var0);
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
					func_258(&Var0);
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
					func_258(&Var0);
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
					if (func_118(uParam0, 11) > uParam0->f_36)
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
						func_258(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 65536);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_281(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_118(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_258(&Var0);
						func_386(Var0, uParam1);
						func_67(&(uParam0->f_82), 131072);
						func_317(uParam0, 16, 0, 0);
						func_317(uParam0, 11, 0, 0);
						func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_396(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_258(&Var0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_386(Var0, uParam1);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_258(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_258(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_396(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_395(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
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
				func_258(&Var0);
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
				func_258(&Var0);
				func_393(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 11, 1, 0, 0);
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
				func_258(&Var0);
				func_386(Var0, uParam1);
				func_67(&(uParam0->f_81), 67108864);
				func_317(uParam0, 16, 0, 0);
				func_317(uParam0, 11, 0, 0);
				func_281(uParam0, 0, 0);
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
					if (!unk_0x2BF5E63466422C38(uParam0->f_3))
					{
						func_276(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_256(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_389(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_256(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_280("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_281(uParam0, 0, 0);
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
						if (!unk_0x2BF5E63466422C38(uParam0->f_3))
						{
							func_276(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_389(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_256(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_280("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_281(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_317(uParam0, 16, 0, 0);
				func_281(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_389(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_281(uParam0, 0, 0);
				break;
			
			case 88:
				func_280("TAXI_TIEFLEE", 7500, 1);
				func_281(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_280("TAXI_OBJ_CYI_1B", 7500, 1);
					func_67(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_281(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_258(&Var0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_393(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 0, 0);
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
				func_281(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_393(uParam0, &Var0, 1, 0, 8);
				func_256(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_280("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_256(uParam0, 0, 0, 0, 0);
				func_281(uParam0, 0, 0);
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
		func_258(&Param2);
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
		StringIntConCat(&cVar0, unk_0xBAC643F143880136(1, 3), 24);
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
			func_258(&Param2);
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
				func_258(sParam2);
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
		if (unk_0x9591DE0F00127F2A(uParam0[iVar0 /*8*/]))
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
				func_280("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_280("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_280("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_280("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_280("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_280("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_280("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_280("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_280("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_280("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_280("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_280("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_PRO_DO", 7500, 1);
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
		func_258(&Param2);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_390(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_317(uParam0, 16, 0, 0);
	func_317(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x2BF5E63466422C38(uParam0->f_3))
	{
		unk_0xD6DE11BB167345FB(uParam0->f_3, &cParam1, func_391(uParam0));
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
	func_281(uParam0, iParam2, 0);
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
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
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
					func_258(sParam2);
				}
				else
				{
					func_258(sParam2);
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
	if (!unk_0x79FCE4565761C974(sParam0))
	{
		if (func_231(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(var uParam0)
{
	if (func_213())
	{
		return 1;
	}
	if (func_191(uParam0, 17))
	{
		return 1;
	}
	if (func_191(uParam0, 14))
	{
		return 1;
	}
	if (func_229(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_399(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_191(uParam0, 9));
}

void func_400(var uParam0)
{
	if (func_191(uParam0, 17))
	{
		if (!func_191(uParam0, 14))
		{
			if (!func_229(uParam0))
			{
				if (!func_213())
				{
					func_210(uParam0, 17, 1);
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
				if (!unk_0x9591DE0F00127F2A(&(uParam0->f_124)) && func_213())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_213())
				{
					StringCopy(&(uParam0->f_124), func_150(), 24);
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
		if (unk_0xD4B321D9096B01FC(uParam0->f_4))
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
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x9B35D07DCD0F0B43();
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
	
	if (!func_191(uParam0, 27))
	{
		func_206(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_118(uParam0, 27) > 5f)
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
	if ((((!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) && (unk_0xD2652A8A890B29BA(*uParam0) && !unk_0x1F70CA72458DB6BD(*uParam0))) && (unk_0xD2652A8A890B29BA(uParam0->f_1) && !unk_0x1F70CA72458DB6BD(uParam0->f_1))) && !unk_0xA99E47125B44409B()) && !func_213())
	{
		if (func_118(uParam0, 26) > 10f)
		{
			func_210(uParam0, 26, 0);
			unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
		}
	}
	else if (func_191(uParam0, 26))
	{
		func_210(uParam0, 26, 0);
	}
	return 0;
}

void func_405(var uParam0)
{
	if (!func_425(uParam0->f_429))
	{
		uParam0->f_429 = func_424();
		func_415(&(uParam0->f_429), 0, 0, unk_0xBAC643F143880136(4, 7), 0, 0, 0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_414(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
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
	
	func_422(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_421(&uVar0, unk_0x8F7802EF0E800F47());
	func_420(&uVar0, unk_0xA63165E74E9A042B());
	func_418(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_419(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_417(&uVar0, unk_0x10CB21C87A35156F());
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
		if (((uParam0->f_411 == 9 && func_428()) && !func_209(uParam0)) || ((uParam0->f_411 != 9 && func_285(uParam0, 1)) && !func_209(uParam0)))
		{
			uVar0 = func_427(uParam0->f_4);
			unk_0xEADD2B962AE1DE7D(&uVar0);
			uParam0->f_4 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			unk_0xE5C667CF3B4642D2(uParam0->f_4, 1, 0);
			func_244(uParam0);
			func_236(uParam0, 0);
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
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) == unk_0x0FA8183DAD2B3203())
				{
					if (unk_0x759DEE4D113EC07E(iVar0, func_19()))
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
			if (!func_22(*uParam2, 2) && func_225(uParam0))
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
	else if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
	{
		if (!unk_0x7FB035B5755E076D(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_256(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_256(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_431(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x0FA8183DAD2B3203();
	if (!unk_0xF4B969E0807E76C7(iVar0, 0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
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
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
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
	else if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (iParam7 && unk_0x3656B691E303FDE0(iParam0, iVar0, 1))
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
			iLocal_80 = unk_0x35D31BEBAFD53DE6(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x35D31BEBAFD53DE6(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x9B79A29933E4A8FA();
		if (!unk_0xF4B969E0807E76C7(uVar0, 0))
		{
			if (unk_0x3656B691E303FDE0(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x9B79A29933E4A8FA();
		if (!unk_0xF4B969E0807E76C7(uVar1, 0))
		{
			if (unk_0x3656B691E303FDE0(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			if (unk_0xCFE0D93B7A6809C1(iParam0))
			{
				if (unk_0xCDABF8D31FBF1F2F(iParam0) == unk_0x0FA8183DAD2B3203())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0xC49563EAE7AACA6C(iParam0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x3A21AE6BBFD5D62C(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x08574080968F56D5(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x8412A90B05231DEF(iParam0))
		{
			return 1;
		}
	}
	if (func_433(unk_0x0FA8183DAD2B3203(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3DAA08BFD9A801FD(iParam0) && func_235(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5294582CE404D3F4(iParam0, 0))
		{
			if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), unk_0x4D57D3E5ECE15A41(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), iParam0))
		{
			return 1;
		}
		if (!unk_0xF4B969E0807E76C7(uParam1, 0))
		{
			if (unk_0x3656B691E303FDE0(iParam1, unk_0x0FA8183DAD2B3203(), 1))
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
	
	unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x90D8021D13215A35(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(iParam0, 1), unk_0xACE5E491FC1B0D37(iParam1, 1)) < 2.5f)
			{
				if (unk_0x9B1F9CEC0CB28F35(iParam0, iParam1, 180f))
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
	if (unk_0x9DCEF22792B5C15C(uParam0, 4))
	{
		if (unk_0x90D8021D13215A35(uParam0) && !unk_0x64F825FCEFC07239(iParam0))
		{
			if (unk_0xC49563EAE7AACA6C(uParam1, unk_0xACE5E491FC1B0D37(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
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
	if (!unk_0xF4B969E0807E76C7(uParam1, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	if (unk_0x6C979EE77983FC04(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x381E4B25A3623531(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9DCEF22792B5C15C(uParam0, 2))
	{
		if (unk_0x90D8021D13215A35(uParam0))
		{
			if (unk_0xC49563EAE7AACA6C(iParam1, unk_0xACE5E491FC1B0D37(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x9B1F9CEC0CB28F35(unk_0x3D464779B732760F(iParam1), iParam0, 120f) && unk_0x20510084026BC387(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5294582CE404D3F4(unk_0x3D464779B732760F(iParam1), 0))
			{
				iVar3 = unk_0x4D57D3E5ECE15A41(unk_0x3D464779B732760F(iParam1), 0);
			}
			if (unk_0x7E1657C6CCABF258(iParam0) || func_436(iVar3))
			{
				if (unk_0xC49563EAE7AACA6C(iParam1, unk_0xACE5E491FC1B0D37(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x9B1F9CEC0CB28F35(unk_0x3D464779B732760F(iParam1), iParam0, 120f) && unk_0x20510084026BC387(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x6E611F4ABF5BABF1((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (unk_0x300C62F79A4441EB(iParam0, -1, 0) != 0)
			{
				if (unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_51(unk_0x0FA8183DAD2B3203(), iParam0, 1) < 40f)
						{
							if (unk_0xF1B72CE19F769A5F(unk_0x7C7787D2D7139A85(), &uVar1))
							{
								if ((unk_0x905FBA24E7FA8D23(uVar1) && unk_0xD05B0DA3866791D0(iVar1) == iParam0) || (unk_0x4625051E51BA911B(iVar1) && unk_0x3D464779B732760F(iVar1) == unk_0x300C62F79A4441EB(iParam0, -1, 0)))
								{
									if ((unk_0x116E83131AA90EB1(unk_0x0FA8183DAD2B3203()) && unk_0x3772881BFFE6C3F8(0, 24)) || (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0x3772881BFFE6C3F8(0, 69)))
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
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
		{
			if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iParam0) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iParam0))
			{
				if (unk_0x9B1F9CEC0CB28F35(iParam0, unk_0x0FA8183DAD2B3203(), 90f))
				{
					if (func_235(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9B35D07DCD0F0B43();
						}
						else if ((unk_0x9B35D07DCD0F0B43() - uParam1->f_1) > uParam1->f_3)
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
		if (unk_0xD960230552BC4165(uParam0->f_4, 0))
		{
			if (func_53(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x7FB505C34A14BAAA(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
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
	if ((((!func_213() && func_118(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_3, 0))
		{
			if (unk_0xD960230552BC4165(uParam0->f_4, 0))
			{
				if (unk_0x95ED3BD0F52D542A(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_66(uParam0) == 0 || func_297(uParam0->f_85, 32))
					{
						if (!unk_0xACA46879E999E35C(uParam0->f_4))
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
	else if ((unk_0x9B35D07DCD0F0B43() % 1000) < 50)
	{
	}
	return 0;
}

void func_442(var uParam0)
{
	if (unk_0x39A01A052D9B5FF0(uParam0->f_8))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_8));
	}
	if (unk_0x39A01A052D9B5FF0(uParam0->f_9))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_9));
	}
	if (unk_0x39A01A052D9B5FF0(uParam0->f_10))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_10));
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
	
	iVar0 = Global_111560.f_19092.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
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
	func_246();
	func_7(&(uParam0->f_244));
	func_456(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_111560.f_19092, 4))
	{
		func_67(&(Global_111560.f_19092), 4);
	}
	func_451(uParam0);
	func_449(uParam0);
	unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
	uParam0->f_102 = (func_448(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x9F815D4FA0C47F97("TAXI", 2);
}

int func_448(int iParam0)
{
	return Global_111560.f_19092.f_39[iParam0];
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
			func_455(uParam0, unk_0xBAC643F143880136(0, 17));
			iVar0 = func_453((uParam0->f_418.f_2 + unk_0xBAC643F143880136(1, 17)), 0, 16);
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
	uParam0->f_2 = unk_0x0FA8183DAD2B3203();
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
	func_210(uParam0, 32, 0);
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110616, unk_0x0037AFCBDC61F351(), 24);
		Global_110610 = 1;
	}
	else
	{
		StringCopy(&Global_110616, "NULL", 24);
		Global_110610 = 0;
	}
}

void func_458()
{
	unk_0x80BCF42B42433CEB(Local_928, Local_931, 1, 1);
	unk_0x80BCF42B42433CEB(Local_946, Local_949, 1, 1);
	func_142(Local_958, 60f, 0);
	func_142(Local_961, 60f, 0);
	unk_0xF13D526811FA8F57();
	unk_0x9E64FD43AF331B00(uLocal_894, 0);
	unk_0x7A9453C2EDBAFB80(iLocal_893);
	unk_0x7A9453C2EDBAFB80(iLocal_892);
	unk_0x3F8C4865FB100A5A(&cLocal_976);
	func_253(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_461();
	func_460();
	func_459();
	unk_0x0A43D5D11052D038(Local_853.f_1, 0);
	func_159(&uLocal_45, 0, 0);
	unk_0x9C9E32388A7886A2();
}

void func_459()
{
	unk_0xE0AC40EF164A2569(iLocal_887);
	unk_0x7D74D6A091150B86("MOVE_DUCK_FOR_COVER");
	unk_0x7D74D6A091150B86(&cLocal_980);
	unk_0x7D74D6A091150B86(&cLocal_996);
	unk_0x7D74D6A091150B86(&cLocal_1012);
	unk_0x7D74D6A091150B86(&cLocal_1028);
}

void func_460()
{
	unk_0xE0AC40EF164A2569(Local_853.f_0);
	unk_0xE0AC40EF164A2569(Local_853.f_1);
	unk_0xE0AC40EF164A2569(iLocal_888);
	unk_0xE0AC40EF164A2569(iLocal_889);
	unk_0x3F8C4865FB100A5A(&cLocal_976);
	unk_0x7D74D6A091150B86("veh@truck@ds@base");
}

void func_461()
{
	unk_0xE0AC40EF164A2569(iLocal_886);
	unk_0x7D74D6A091150B86("gestures@m@standing@casual");
}

void func_462(int iParam0)
{
	Global_110270.f_22 = iParam0;
}

