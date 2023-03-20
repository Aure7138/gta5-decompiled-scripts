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
	uLocal_77 = unk_0x831D4AD840B7278A();
	uLocal_78 = unk_0x321E776DB596AB12();
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
	if (unk_0x2170E7BC25114A22(67))
	{
		func_439(2);
		func_435();
	}
	unk_0x52A56383568A954B(1);
	func_421();
	while (true)
	{
		if (unk_0x7887B64A08364778(Local_423.f_2))
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
	uParam0->f_2 = unk_0xD5A676B97920D126();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xD5A676B97920D126());
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
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xD5A676B97920D126());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
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
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_420(&Local_423))
	{
		func_419(&Local_423);
		if (unk_0x6901135DDCC4904D(Local_853.f_4))
		{
			unk_0x8A3D7569826A325D(&(Local_853.f_4));
		}
		if (func_418(&Local_423, 0))
		{
			func_416();
		}
	}
	else
	{
		func_415(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_381(&Local_423, &uLocal_1125);
			func_380(&Local_423);
			func_379(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_378(&Local_423))
			{
				func_347();
			}
			else
			{
				func_338(&Local_423, "Taxi Not Driveable", func_346(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !iLocal_905)
		{
			func_326();
		}
		if (iLocal_907)
		{
			unk_0x43C5A23247934BA2(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_302(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_299();
				func_298(&Local_423, 16, 4f, 0);
				func_296(&Local_423, Local_916, Local_919, "TaxiKeyla", iLocal_886, 41.1334f, 15f);
				func_295(&Local_423);
				func_294(&Local_423, 1);
				break;
			
			case 1:
				if (func_292())
				{
					func_291();
					func_271();
					func_270(&(Local_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_269(&Local_423, &Local_409);
					func_268(&Local_423);
					unk_0xE6C975AE756267A4(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_294(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_263(&Local_423, 1))
				{
					if (!unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
					{
						unk_0x5BD2F51088536150(Local_423.f_3, 0, 0, 1, 0);
						unk_0x5BD2F51088536150(Local_423.f_3, 2, 1, 2, 0);
						unk_0x5BD2F51088536150(Local_423.f_3, 3, 0, 2, 0);
						unk_0x5BD2F51088536150(Local_423.f_3, 4, 1, 3, 0);
						unk_0x5BD2F51088536150(Local_423.f_3, 8, 1, 0, 0);
					}
					func_262(&Local_423, 1, 0);
					unk_0x5CF7BD3BFEB33582("TAXI_Escapee", &(Local_853.f_30));
					unk_0x42AFB71D42AF78EA(255, Local_853.f_30, Local_423.f_413);
					unk_0x42AFB71D42AF78EA(255, Local_853.f_30, joaat("player"));
					unk_0x075CAD5F04ECA8B4(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_294(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_243(&Local_423, 0, 1109393408))
				{
					func_242();
					func_294(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_241(&Local_423))
				{
					func_237(&Local_423, 9, 1, 0, 0);
					func_236(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_235();
					func_234(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_294(&Local_423, 17);
				}
				if (unk_0xA4DB44DF73EF4FE5(Local_423.f_4, 0))
				{
					if (!unk_0x04D83291EB9DE51D(Local_423.f_2, Local_423.f_4, 0))
					{
						func_232(&Local_423);
						func_294(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_231(&Local_423, &(Local_423.f_9));
				if (!unk_0x7887B64A08364778(Local_853.f_3))
				{
					if (func_230())
					{
						func_229(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_228(&Local_423, &Local_853);
				}
				if (func_202(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0x67BFCF43EE96547F(Local_423.f_9))
					{
						unk_0xD947D2F43FD7F6D7(Local_423.f_9, 0);
					}
					unk_0x8A3D7569826A325D(&(Local_423.f_9));
					func_294(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_195())
				{
					if (!func_194())
					{
						func_237(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_294(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_228(&Local_423, &Local_853);
				func_193();
				if (func_192(Local_853.f_2, Local_853.f_3))
				{
					func_191(&Local_423, 2, 0);
					unk_0xD1C907DDCE901173(Local_853.f_2, 1);
					unk_0x77E24C0B92B4FC24(Local_853.f_2, 6, 1);
					unk_0x77E24C0B92B4FC24(Local_853.f_2, 17, 1);
					func_262(&Local_423, 1, 0);
					Local_853.f_5 = unk_0xB38A470B669AC00B(Local_853.f_3);
					Local_853.f_15 = unk_0xD5ABCE2B8F82DD84(Local_853.f_3);
					Local_853.f_16 = unk_0x3FE948D881FDB558(Local_853.f_3);
					func_298(&Local_423, 13, 0f, 0);
					func_298(&Local_423, 20, 0f, 0);
					unk_0xDA59400FE5A72CDA(Local_946, Local_949);
					uLocal_894 = unk_0x2B2CCF3F6B9ED3A3(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x33E4179F57B9F232(0);
					func_294(&Local_423, 13);
				}
				break;
			
			case 13:
				func_193();
				func_228(&Local_423, &Local_853);
				func_231(&Local_423, &(Local_853.f_4));
				if (func_190(&Local_423))
				{
					if (func_189(Local_853.f_2, Local_853.f_4))
					{
						func_237(&Local_423, 51, 1, 0, 0);
						func_294(&Local_423, 25);
					}
					func_185(&Local_423);
					func_182(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_150())
					{
						if (unk_0xA86DCE8BD0C0CF8A(Local_853.f_3))
						{
							unk_0x37DCEBF483A3FF22(Local_853.f_3);
							unk_0x66EB3531711325DB(0, "taxi_oj_fc3");
						}
						func_148(&uLocal_45, 0, 0);
						func_147();
						func_294(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_146())
				{
					if (func_125())
					{
						func_294(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_124(&Local_423, &(Local_423.f_43));
				if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
				{
					if ((unk_0x1AAFFE4111587B35(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0x78D3CDB884C74FEB(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
						{
							unk_0x37338B7B7C4982DC(iLocal_890);
							unk_0xBB9A2DB94A862D7A(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_237(&Local_423, 37, 1, 0, 0);
						func_294(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_124(&Local_423, &(Local_423.f_43));
				func_123(&Local_423, Local_853.f_2, 1, 1);
				func_123(&Local_423, iLocal_890, 0, 0);
				func_231(&Local_423, &(Local_423.f_9));
				if (unk_0x6901135DDCC4904D(Local_853.f_4))
				{
					unk_0x8A3D7569826A325D(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0x6901135DDCC4904D(Local_423.f_9))
				{
					Local_423.f_9 = func_121(Local_423.f_17, 1);
				}
				if (unk_0xA4DB44DF73EF4FE5(Local_423.f_4, 0))
				{
					if (unk_0x04D83291EB9DE51D(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0x1AAFFE4111587B35(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x1AC9C20D51EE6DC3(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x1AC9C20D51EE6DC3(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x1AC9C20D51EE6DC3(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
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
							func_294(&Local_423, 22);
						}
					}
				}
				break;
			
			case 22:
				func_123(&Local_423, Local_853.f_2, 0, 1);
				func_123(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x00B5B0B68211D89B(Local_423.f_3))
				{
					if (unk_0xA4DB44DF73EF4FE5(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_117(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0x8A3D7569826A325D(&(Local_423.f_9));
								func_294(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0x6901135DDCC4904D(Local_423.f_9))
							{
								Local_423.f_9 = func_121(Local_423.f_17, 1);
							}
							if (func_202(&Local_423, 8f, 1097859072, 1117782016) || func_117(&Local_423, 1, 1084227584))
							{
								unk_0x8A3D7569826A325D(&(Local_423.f_9));
								func_294(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_123(&Local_423, Local_853.f_2, 0, 1);
				func_123(&Local_423, iLocal_890, 0, 0);
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
				{
					func_237(&Local_423, 37, 1, 0, 0);
					func_294(&Local_423, 27);
				}
				break;
			
			case 27:
				func_123(&Local_423, Local_853.f_2, 0, 1);
				func_123(&Local_423, iLocal_890, 0, 0);
				if (!unk_0x00B5B0B68211D89B(Local_423.f_3))
				{
					if (unk_0x6901135DDCC4904D(Local_853.f_4))
					{
						unk_0x8A3D7569826A325D(&(Local_853.f_4));
					}
					unk_0x0CA19C427F18E80B("TAXI_OBJ_DRIVE");
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
					func_294(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x0CA19C427F18E80B("TAXI_OBJ_DRIVE");
				if (func_80(&Local_423, &uLocal_1132))
				{
					func_54(&Local_423);
					func_294(&Local_423, 28);
				}
				break;
			
			case 28:
				if (iLocal_905 || iLocal_904)
				{
					func_294(&Local_423, 30);
				}
				break;
			
			case 30:
				unk_0x0CA19C427F18E80B("TAXI_OBJ_DRIVE");
				if ((!unk_0x00B5B0B68211D89B(Local_423.f_3) && unk_0x7D720C677145C91C(iLocal_890, Local_423.f_3, 1)) && unk_0x7D720C677145C91C(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_51(1, &Local_423, 1);
						func_435();
					}
					else
					{
						iLocal_421 = unk_0x25242F25B2B9A814(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0xA4DB44DF73EF4FE5(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0x9D8897846874825B(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0x00B5B0B68211D89B(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0x6572B9C3A86AD387(5, Local_940, 1, 0f, &uLocal_895, 0))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_49(Local_940, 1) > 100f || func_47(Local_423.f_3, unk_0xD5A676B97920D126()) > 100f)
				{
					func_51(1, &Local_423, 1);
					func_435();
				}
				else if ((unk_0x00B5B0B68211D89B(Local_423.f_3) || unk_0x7D720C677145C91C(iLocal_890, unk_0xD5A676B97920D126(), 1)) || unk_0x7D720C677145C91C(Local_853.f_2, unk_0xD5A676B97920D126(), 1))
				{
					if (!unk_0x00B5B0B68211D89B(Local_423.f_3))
					{
						unk_0x5457695C257D1470(Local_423.f_3, 1);
						unk_0x37338B7B7C4982DC(Local_423.f_3);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0xD4BBFF77570A437F(0, 2000);
						unk_0x7C6B104B5E7A8C41(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(Local_423.f_3, 1);
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_890))
					{
						unk_0x5457695C257D1470(iLocal_890, 1);
						unk_0x37338B7B7C4982DC(iLocal_890);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0xD4BBFF77570A437F(0, 1000);
						unk_0x7C6B104B5E7A8C41(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(iLocal_890, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(iLocal_890, 1);
					}
					if (!unk_0x00B5B0B68211D89B(Local_853.f_2))
					{
						unk_0x5457695C257D1470(Local_853.f_2, 1);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						if (bLocal_908)
						{
							unk_0x290A57C93304EF16(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x7AFB953E6654EA8F(0, 500);
						unk_0x7C6B104B5E7A8C41(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(Local_853.f_2, 1);
					}
					func_51(1, &Local_423, 1);
					func_435();
				}
				else if ((iLocal_904 && !func_194()) && (unk_0x84A97C70FFDEC0C8() - iLocal_900) > 500)
				{
					if (!unk_0x00B5B0B68211D89B(Local_423.f_3))
					{
						unk_0x5457695C257D1470(Local_423.f_3, 1);
						unk_0x37338B7B7C4982DC(Local_423.f_3);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0xB05C28FE95F9A2F5(0, unk_0xD5A676B97920D126(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(Local_423.f_3, 1);
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_890))
					{
						unk_0x5457695C257D1470(iLocal_890, 1);
						unk_0x37338B7B7C4982DC(iLocal_890);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0xD4BBFF77570A437F(0, 1000);
						unk_0x7C6B104B5E7A8C41(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(iLocal_890, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(iLocal_890, 1);
					}
					if (!unk_0x00B5B0B68211D89B(Local_853.f_2))
					{
						unk_0x5457695C257D1470(Local_853.f_2, 1);
						unk_0x37338B7B7C4982DC(Local_853.f_2);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0x7AFB953E6654EA8F(0, 500);
						unk_0x7C6B104B5E7A8C41(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x7D99F00F48D15ADB(Local_853.f_2, 1);
					}
					func_9(&Local_423, 1);
					func_435();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)
{
	func_419(uParam0);
	if (func_194())
	{
		func_45();
	}
	func_43();
	unk_0x59C0D363E5A5B548();
	unk_0x04890EB0282525A5(1);
	func_40(0);
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		unk_0x70057AC4F7A58052(uParam0->f_4, 0);
		unk_0x3F1BB6177798DB33(uParam0->f_4);
		unk_0xE49CEAAA37CEC2B3(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_234(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 1);
	if (func_32())
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	}
	unk_0x2DDD8448DE173695(1);
	func_22(0, 1, 1, 0);
	unk_0xFE3C4806D54DF474(1);
	unk_0x6FAE7F32571B33E3(1);
	if (unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		unk_0xAF191D67F49B35C9(*uParam0, 0);
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		unk_0x33E4179F57B9F232(1);
	}
	if (func_21(Global_101652.f_18040, 4))
	{
		func_19(&(Global_101652.f_18040), 4);
		unk_0xFA03BA297FE81584(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x6989DACCC7A558AE("gestures@m@standing@casual");
	unk_0x6989DACCC7A558AE("oddjobs@taxi@");
	unk_0x6989DACCC7A558AE("oddjobs@towingcome_here");
	if (unk_0xA4B4423421E91E97())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x0E4A3783CD75D9CE(unk_0xF3F8195C98263BF5()))
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
	}
	unk_0x08E8EEFC2E7F1B39(unk_0xF2DB717A73826179((func_10(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_11(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x1995B52453EF6537())
	{
		iVar2 = unk_0x7414B386C0020BEC();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x1C079483C9D16F36(&uVar0))
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
	unk_0x28E836DEC7D46F05(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_3))
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			if (!unk_0x6A0583ECFCCECC9B(uParam0->f_3, 0))
			{
				unk_0xAE1CBD177C14F2BC(uParam0->f_3);
			}
			unk_0x5457695C257D1470(uParam0->f_3, 0);
			unk_0x42AFB71D42AF78EA(255, uParam0->f_413, joaat("player"));
			if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x4C033F9F1FADEA09(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x4C033F9F1FADEA09(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x4C033F9F1FADEA09(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x4C033F9F1FADEA09(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xD4B3FF1E63C36391(&(uParam0->f_3));
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
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_31(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_30())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_31(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_27(unk_0xFB6B3EEFAB2DD12C())) && !func_24(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_23())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_27(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_23()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312731;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x276A3832AECFBD1C(unk_0xF3F8195C98263BF5()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0xAB964FCFAC3C767A(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
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
		unk_0xE6C975AE756267A4(Var0, Var3, iParam3, 1);
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
	if (Global_14604)
	{
		func_41(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_30())
	{
		Global_14443.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
		if (Global_88752[iVar0 /*17*/] && !Global_88752[iVar0 /*17*/].f_1)
		{
			if (Global_88752[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88752[iVar0 /*17*/].f_5 != 88 && Global_88752[iVar0 /*17*/].f_5 != 89) && Global_88752[iVar0 /*17*/].f_5 != 92)
				{
					func_44(Global_88752[iVar0 /*17*/].f_5, 1);
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
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

void func_45()
{
	Global_14611 = 0;
	func_46();
}

void func_46()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
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
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

float func_49(struct<3> Param0, int iParam3)
{
	return func_50(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5()), Param0, iParam3);
}

float func_50(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam0, 1), Param1, iParam4);
}

void func_51(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0x00B5B0B68211D89B(uParam1->f_3))
		{
			unk_0x237B0CFB6EEBD3BA(uParam1->f_3, 317, 1);
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
			Global_101652.f_18040.f_22[0]++;
			func_53("Fares Completed ++ = ", Global_101652.f_18040.f_22[0]);
			break;
		
		case 1:
			Global_101652.f_18040.f_22[1]++;
			func_53("Fares Failed ++ = ", Global_101652.f_18040.f_22[1]);
			break;
		
		case 2:
			Global_101652.f_18040.f_22[2]++;
			func_53("Fares Accepted ++ ", Global_101652.f_18040.f_22[2]);
			break;
		
		case 3:
			Global_101652.f_18040.f_22[3]++;
			func_53("Fares Expired ++ ", Global_101652.f_18040.f_22[3]);
			break;
		
		case 13:
			Global_101652.f_18040.f_22[13]++;
			func_53("Passengers run ++ = ", Global_101652.f_18040.f_22[13]);
			break;
		
		case 14:
			Global_101652.f_18040.f_22[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_101652.f_18040.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_101652.f_18040.f_22[4])
				{
					Global_101652.f_18040.f_22[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_101652.f_18040.f_22[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_101652.f_18040.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_101652.f_18040.f_22[5] = (Global_101652.f_18040.f_22[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_101652.f_18040.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_101652.f_18040.f_22[6]++;
			}
			else
			{
				Global_101652.f_18040.f_22[6] = (Global_101652.f_18040.f_22[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_101652.f_18040.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_101652.f_18040.f_22[7] = (Global_101652.f_18040.f_22[7] + iParam1);
			}
			else
			{
				Global_101652.f_18040.f_22[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_101652.f_18040.f_22[7]);
			break;
		
		case 8:
			Global_101652.f_18040.f_22[8]++;
			func_53("Taxis wrecked ++ = ", Global_101652.f_18040.f_22[8]);
			break;
		
		case 9:
			Global_101652.f_18040.f_22[9]++;
			func_53("Horn Honked ++ = ", Global_101652.f_18040.f_22[9]);
			break;
		
		case 10:
			Global_101652.f_18040.f_22[10] = (Global_101652.f_18040.f_22[10] + iParam1);
			func_53("Total Money Earned = ", Global_101652.f_18040.f_22[10]);
			break;
		
		case 11:
			Global_101652.f_18040.f_22[11] = (Global_101652.f_18040.f_22[11] + iParam1);
			func_53("Total Tips Earned = ", Global_101652.f_18040.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_101652.f_18040.f_22[12])
			{
				Global_101652.f_18040.f_22[12] = iParam1;
				func_53("New Highest Tip = ", Global_101652.f_18040.f_22[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_101652.f_18040.f_22[12]);
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
		func_439(1);
		func_66(15, 1);
	}
	func_64(&(Global_101652.f_18040), 1024);
	if (!func_21(Global_101652.f_18040, 64))
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
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = iParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_60(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_59() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
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
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_58(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

int func_59()
{
	return Global_25185;
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
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
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
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_77(&Global_2595490))
	{
		if (func_75(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_68(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	func_73(uParam0, (Global_2595489 - 0.5f));
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
	return Global_35777 == iParam0;
}

int func_80(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_194() && func_107(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
				}
				func_106(uParam0);
				func_19(&(Global_101652.f_18040), 4096);
				func_104(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_105(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xA93E75A5493862BD(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_103(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_97(uParam1, 0))
			{
				func_81(uParam0);
				func_298(uParam0, 0, 0, 0);
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
	
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_101652.f_26993[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x5BC7B5709E38CBE0(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB924315F0872835A(iVar1, iVar0, 1);
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
					switch (unk_0x0B5EEA126C23F8E6())
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
	iVar5 = (Global_52992[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52992[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52992[iVar2] = 2147483647;
				}
				else
				{
					Global_52992[iVar2] = (Global_52992[iVar2] + iParam3);
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
				if ((Global_52992[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52992[iVar2];
			Global_52992[iVar2] = (Global_52992[iVar2] - iParam3);
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
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101652.f_19507.f_233[iVar2 /*69*/]++;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_1++;
		if (Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_85(iParam0);
	if (Global_35777 == 15)
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
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52992[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB924315F0872835A(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xB924315F0872835A(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xB924315F0872835A(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_88() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_88() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_87(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_88() /*10730*/].f_7546.f_10, iParam0);
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC588321444C4C223(27))
	{
		return 0;
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB924315F0872835A(joaat("num_cash_spent"), iVar1, 1);
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
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_94()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52992[0] == iVar0)
		{
			Global_52992[0] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52992[1] == iVar0)
		{
			Global_52992[1] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52992[2] == iVar0)
		{
			Global_52992[2] = iVar0;
		}
	}
}

int func_95()
{
	func_96();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_96()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_4(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_3(unk_0xD5A676B97920D126());
			if (func_5(iVar0) && (!func_79(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_5(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

int func_97(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_101(&(uParam0->f_2));
	}
	unk_0x7FE30C99EA3439F7(14);
	unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x3CEEA45E4779F6BD(2, 201) || uParam0->f_8)
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
			return (func_11(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_100(var uParam0, int iParam1)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1B215CC37BF52E79(uParam0->f_9);
	unk_0x573CAEB6F4A4E750(iParam1);
	unk_0xBBAAC5B2437ACF2A();
}

void func_101(var uParam0)
{
	func_102(uParam0, 0f);
}

void func_102(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_103(int iParam0)
{
	Global_69957 = iParam0;
	Global_69958 = iParam0;
}

void func_104(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x0BBDB952BE56A9DF("STRING");
	unk_0xF5640E619D8FCD5B(iParam9);
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0xCB329F559FA7DCD0();
	unk_0x0BBDB952BE56A9DF(sParam7);
	unk_0xF99222307D7150A9(uParam2);
	unk_0xF99222307D7150A9(uParam3);
	unk_0xB1953EBEF4D6BD85(uParam6);
	unk_0xF99222307D7150A9(uParam5);
	unk_0xF99222307D7150A9(iParam4);
	unk_0xCB329F559FA7DCD0();
	unk_0xBBAAC5B2437ACF2A();
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
		if (unk_0xF44A5E894FE76438(Local_169.f_4[iVar0 /*3*/], 2))
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
	unk_0x59C0D363E5A5B548();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_237(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_237(uParam0, 103, 1, 0, 0);
		}
		func_111(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_237(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_237(uParam0, 102, 1, 0, 0);
	}
	func_298(uParam0, 16, 4f, 0);
}

void func_111(int iParam0)
{
	Global_100364.f_221 = iParam0;
}

void func_112()
{
	Global_14611 = 0;
	func_113();
}

void func_113()
{
	if (unk_0x33688D334D224255())
	{
		unk_0xB6A622037A2FE913();
		Global_16756 = 0;
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
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
		unk_0xB8A73E7DA87B2968(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_117(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_120();
				return 1;
			}
			else if (func_118(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 0, 256);
				}
				else
				{
					unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 0, 0);
				}
			}
			unk_0x05C27D3D38B3C689(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_119(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_119(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

void func_120()
{
	if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
	}
}

var func_121(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0xF563C3AC64885E69(uVar0, func_122(unk_0x1995B52453EF6537(), 1f, 1f));
	unk_0xD947D2F43FD7F6D7(uVar0, iParam3);
	return uVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_123(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
			{
				if (unk_0x63F7D2743457E11D(iParam1))
				{
					if (unk_0x3DFB3BFF04D48E00(unk_0xD5A676B97920D126()))
					{
						if (Local_423.f_109 == 0)
						{
							func_338(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x00B5B0B68211D89B(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
				{
					unk_0x37338B7B7C4982DC(iLocal_890);
					unk_0xBB8F1D58B7578137(iLocal_890, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_890, 1);
				}
				func_338(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
				{
					unk_0x37338B7B7C4982DC(Local_853.f_2);
					unk_0xBB8F1D58B7578137(Local_853.f_2, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					unk_0x7D99F00F48D15ADB(Local_853.f_2, 1);
				}
				func_338(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((unk_0x75D39BAF4D486998(iParam1, joaat("weapon_stungun"), 0) || unk_0x75D39BAF4D486998(iParam1, 0, 2)) || unk_0x75D39BAF4D486998(iParam1, 0, 1))
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
				{
					unk_0x37338B7B7C4982DC(iLocal_890);
					unk_0xBB8F1D58B7578137(iLocal_890, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_890, 1);
				}
				if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
				{
					unk_0x37338B7B7C4982DC(Local_853.f_2);
					unk_0xBB8F1D58B7578137(Local_853.f_2, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					unk_0x7D99F00F48D15ADB(Local_853.f_2, 1);
				}
				func_338(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
			}
		}
	}
}

void func_124(var uParam0, var uParam1)
{
	unk_0xD2C328D8F4EE2645(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_125()
{
	struct<3> Var0;
	
	func_145();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_141(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0x7887B64A08364778(iLocal_890))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_890))
		{
			Var0 = { unk_0xC086F8D75730FA3A(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_140(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x84A97C70FFDEC0C8();
				func_138(&uLocal_1082);
				func_137(&Local_1052, -1, 1);
				func_234(Local_958, 0, 15f);
				func_234(Local_961, 0, 15f);
				func_136(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_135();
				func_298(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_134("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_107(&Local_423, 19) > 0.5f)
			{
				func_133(0, 0, 1);
				unk_0xBCDF9E3086B4229C(Local_958, 30f, 0, 0, 0, 0, 0);
				unk_0xBCDF9E3086B4229C(Local_961, 30f, 0, 0, 0, 0, 0);
				unk_0x7B2D1A3447B0AD5C(Local_958, 30f, 0);
				unk_0x7B2D1A3447B0AD5C(Local_961, 30f, 0);
				func_131(Local_958, 1114636288, 1);
				func_131(Local_961, 1114636288, 1);
				unk_0xE6C975AE756267A4(Local_946, Local_949, 0, 1);
				func_237(&Local_423, 35, 1, 1, 0);
				unk_0xDBB81B5CF32D8413(Local_423.f_0, func_130(0));
				unk_0x3375089ABC5EBB4E(Local_423.f_0, func_129(0), 2);
				unk_0xBA44410A0086D31F(Local_423.f_0, 44.5167f);
				unk_0x41702B9F8E97C108(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x55EB2099508DD1C3(Local_423.f_0, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
				{
					unk_0xBB9A2DB94A862D7A(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0x99569FEC2425586D(Local_853.f_3, fLocal_971);
					if (unk_0x21E29E5DDDDB3759(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0x291D48380815C99C(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
					{
						unk_0x48BDF520B966CA1C(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_298(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_107(&Local_423, 19) > 5f)
			{
				func_298(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_107(&Local_423, 19) > 4.7f)
			{
				if (func_128())
				{
					if (!iLocal_915)
					{
						unk_0xAAD655F2351CC4B7("CamPushInNeutral", 0, 0);
						unk_0xA93E75A5493862BD(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
			{
				unk_0xBB9A2DB94A862D7A(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(Local_853.f_3, fLocal_974);
				unk_0x37DCEBF483A3FF22(Local_853.f_3);
			}
			func_298(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0xA4DB44DF73EF4FE5(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0xFF11D473E95357D3(800);
				unk_0xB6AE7C18ADC0F901(0);
				unk_0xCA3B54980FA9D86F(0, 1065353216);
				if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
				{
					unk_0xBB9A2DB94A862D7A(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0x99569FEC2425586D(Local_853.f_3, fLocal_974);
					unk_0x37DCEBF483A3FF22(Local_853.f_3);
					if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
					{
						unk_0x8DA3061503F2C4C8(Local_853.f_2);
						unk_0xBB9A2DB94A862D7A(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0x99569FEC2425586D(Local_853.f_2, -49.27436f);
					}
				}
				unk_0xAF191D67F49B35C9(Local_423.f_0, 0);
				unk_0xAF191D67F49B35C9(uLocal_422, 0);
				func_126(1, 1, 1);
				unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
				while (!unk_0x8AFBC859AA63D3D7())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_191(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
	}
	unk_0x2DDD8448DE173695(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xFE3C4806D54DF474(1);
		unk_0x6FAE7F32571B33E3(1);
	}
	func_127(23, 0);
}

void func_127(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&Global_25429, iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_25429, iParam0);
	}
}

int func_128()
{
	if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_129(int iParam0)
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

Vector3 func_130(int iParam0)
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

void func_131(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0x4922BC1C77B0AAFC(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_37(Var1, func_132(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_37(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0x075CAD5F04ECA8B4(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x56E36EF46CD901B4(Var7, Var4, 1);
	}
}

float func_132(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_133(int iParam0, int iParam1, int iParam2)
{
	unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 0, iParam0);
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		unk_0xCDB3CF095121B4E2(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 15f);
	}
	unk_0x2DDD8448DE173695(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0);
	unk_0xFE3C4806D54DF474(0);
	unk_0x6FAE7F32571B33E3(0);
	func_127(23, 1);
}

void func_134(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x84A97C70FFDEC0C8() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x84A97C70FFDEC0C8();
}

void func_135()
{
	var uVar0;
	
	iLocal_890 = unk_0x8C855D8124E955CE(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0xA11BE84A0BD8C7B5(iLocal_890, 5);
	unk_0x5BD2F51088536150(iLocal_890, 3, 1, 2, 0);
	unk_0x5BD2F51088536150(iLocal_890, 4, 0, 1, 0);
	unk_0x5BD2F51088536150(iLocal_890, 2, 1, 2, 0);
	unk_0x237B0CFB6EEBD3BA(iLocal_890, 20, 1);
	func_7(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
	{
		unk_0x99569FEC2425586D(iLocal_890, fLocal_970);
		unk_0x873418BFBF9A6780(&uVar0);
		unk_0x456121A0AAC868D4(&uVar0);
		unk_0x7AFB953E6654EA8F(0, 2500);
		unk_0x290A57C93304EF16(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0xD2F0DA748A5C8C3D(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0xCFE67FBB69F1C410(uVar0);
		unk_0x8B06B801B92CEC2D(iLocal_890, uVar0);
		unk_0x873418BFBF9A6780(&uVar0);
	}
}

void func_136(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		*uParam0 = unk_0xAEBECA050C9EB021(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_137(var uParam0, int iParam1, bool bParam2)
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

void func_138(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_139(), 24);
		iVar0++;
	}
	unk_0x59C0D363E5A5B548();
	func_45();
}

var func_139()
{
	var uVar0;
	
	return uVar0;
}

int func_140(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94EB20429840304E())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (bParam0)
		{
			if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) != unk_0xD5A676B97920D126())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6016987E9628A7F6(iVar0) < 0.95f || unk_0x6016987E9628A7F6(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!unk_0x120A59070FBE9283(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0)
{
	if (func_144() && unk_0x84A97C70FFDEC0C8() >= iParam0 + 1000)
	{
		unk_0x0FBCFDA15A0FB2D5(500);
		while (!unk_0x7E3640C27B17457C())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_142();
		return 1;
	}
	return 0;
}

void func_142()
{
	Global_14611 = 0;
	func_143();
}

void func_143()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

int func_144()
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x3CEEA45E4779F6BD(0, 18) || unk_0x3CEEA45E4779F6BD(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (func_34())
	{
		unk_0x69EBA78357A8E292("appInternet");
	}
	if (func_33())
	{
		unk_0x69EBA78357A8E292("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_146()
{
	if (!unk_0x7AD0E9452821C95D(iLocal_887))
	{
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("MOVE_DUCK_FOR_COVER"))
	{
		func_134("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_147()
{
	unk_0x4ACD1E4CBA159ED1(iLocal_887);
	unk_0x49E996A1E39EAAD7("MOVE_DUCK_FOR_COVER");
	unk_0x49E996A1E39EAAD7(&cLocal_980);
	unk_0x49E996A1E39EAAD7(&cLocal_996);
	unk_0x49E996A1E39EAAD7(&cLocal_1012);
	unk_0x49E996A1E39EAAD7(&cLocal_1028);
}

void func_148(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_149(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_149(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

bool func_149(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

int func_150()
{
	if (func_107(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_171(&Local_423, &Local_853, (unk_0x84A97C70FFDEC0C8() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
	{
		if (unk_0xA4DB44DF73EF4FE5(Local_423.f_4, 0))
		{
			if (unk_0x1AC9C20D51EE6DC3(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0xF351193474DA13BB(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_151(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_124(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
			{
				if (!unk_0xEEF37219FA4E5EAF(Local_853.f_3) && IntToFloat((unk_0x84A97C70FFDEC0C8() - iLocal_975)) > unk_0x9DA1E0735A6A0970(120, "txm_fc_h1_"))
				{
					unk_0xCE8917A47B1D85F4(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_152(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_153(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_153(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_149(iVar0))
	{
		func_170();
	}
	if (func_169(iParam1) && unk_0xA3E7DE487D314279(iParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
		{
			if (func_164(uParam0, bParam7, bParam9, 0))
			{
				func_161(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_158(iVar0))
				{
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_149(iVar0))
							{
								func_157(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
								{
									func_156(1);
								}
							}
						}
					}
				}
			}
			else if (func_158(iVar0))
			{
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_149(iVar0))
						{
							func_157(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
							{
								func_156(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_149(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_148(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_148(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_148(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_148(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_148(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
				{
					func_148(uParam0, iVar0, 1);
				}
			}
			if (!func_164(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_155(uParam0))
				{
					func_154(uParam0);
				}
			}
		}
	}
	else
	{
		func_148(uParam0, iVar0, 0);
	}
}

void func_154(var uParam0)
{
	if (func_169(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_155(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_156(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_157(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_158(char* sParam0)
{
	if (!func_159(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_149(sParam0)) || func_149("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (func_156(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_156(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_156(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_160())
	{
		return 0;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_160()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

void func_161(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		func_148(uParam0, 0, 0);
	}
	if (func_38(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			iVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(iVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_162())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
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
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_162()
{
	return func_163(unk_0xFB6B3EEFAB2DD12C());
}

int func_163(int iParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_155(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_155(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_159(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_170();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

void func_171(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
	{
		if (unk_0x7D720C677145C91C(uParam1->f_2, unk_0xD5A676B97920D126(), 0))
		{
			func_338(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_338(uParam0, "Followee died", 13);
	}
	if ((unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0 && unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0)) && !unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
	{
		unk_0xAFB9178F82948856(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x7D99F00F48D15ADB(uParam1->f_2, 1);
		func_338(uParam0, "Player went wanted", 4);
	}
	func_180(uParam0, uParam1);
	if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (bParam3)
		{
			if (func_179(&(uParam1->f_3)))
			{
				unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_178(&(uParam1->f_3)))
			{
				unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A(uParam1->f_3, 1), func_177(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_176(&(uParam1->f_3)))
			{
				unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0xD5ABCE2B8F82DD84(uParam1->f_3) < uParam1->f_15 || unk_0x7D720C677145C91C(uParam1->f_3, unk_0xD5A676B97920D126(), 1)) || unk_0x3FE948D881FDB558(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x7D720C677145C91C(uParam1->f_3, unk_0xD5A676B97920D126(), 0))
			{
				func_338(uParam0, "Taxi shot up the car", 12);
			}
			if (func_107(uParam0, 13) > 5f)
			{
				func_175(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0xD5ABCE2B8F82DD84(uParam1->f_3);
				uParam1->f_5 = unk_0xB38A470B669AC00B(uParam1->f_3);
				uParam1->f_16 = unk_0x3FE948D881FDB558(uParam1->f_3);
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_237(uParam0, 143, 0, 0, 0);
				func_338(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_174(&(uParam0->f_409), unk_0xC086F8D75730FA3A(uParam0->f_4, 1), unk_0xC086F8D75730FA3A(uParam1->f_3, 1), 0) == -1 && func_48(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_107(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_298(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
						{
							unk_0xAFB9178F82948856(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x7D99F00F48D15ADB(uParam1->f_2, 1);
						}
						func_338(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_173(uParam0, 6, 1);
					}
					else
					{
						func_173(uParam0, 1, 1);
					}
					func_237(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xE0BF2ADAFF3231B4(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_298(uParam0, 8, 0, 0);
			}
			else if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_237(uParam0, 143, 0, 0, 0);
				func_338(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_48(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_179(&(uParam1->f_3))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < 13f && func_176(&(uParam1->f_3)))) || (func_48(uParam0->f_4, uParam1->f_3, 1) < func_177(&(uParam1->f_3)) && func_178(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_172(uParam0, 21))
			{
				if ((unk_0xE0BF2ADAFF3231B4(uParam0->f_4, uParam1->f_3, 17) && func_107(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_298(uParam0, 8, 0, 0);
					if (!func_172(uParam0, 21))
					{
						func_298(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_194())
						{
							if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
							{
								unk_0xAFB9178F82948856(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x7D99F00F48D15ADB(uParam1->f_2, 1);
							}
							func_338(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_142();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_173(uParam0, 3, 1);
					}
					else
					{
						func_173(uParam0, 2, 1);
					}
					if (func_48(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_194())
						{
							func_237(uParam0, 143, 0, 0, 0);
							func_45();
							if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
							{
								unk_0xAFB9178F82948856(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x7D99F00F48D15ADB(uParam1->f_2, 1);
							}
							func_338(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_142();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_237(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0xD5ABCE2B8F82DD84(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_172(uParam0, 21))
			{
				func_191(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_298(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_48(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xE0BF2ADAFF3231B4(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_298(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_173(uParam0, 8, 1);
					func_237(uParam0, 13, 1, 0, 0);
					func_298(uParam0, 8, 0, 0);
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
					if (func_107(uParam0, 8) > 15f && !func_194())
					{
						func_173(uParam0, 9, 1);
						func_237(uParam0, 13, 1, 0, 0);
						func_298(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_172(var uParam0, int iParam1)
{
	return func_13(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_173(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_174(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xE819DF1A8AD7E307(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xEE7715D6C4A7B1F2(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_175(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_194())
		{
			func_262(uParam0, 0, 1);
			if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam1->f_2, 0))
			{
				unk_0xAFB9178F82948856(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x7D99F00F48D15ADB(uParam1->f_2, 1);
			}
			func_338(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_142();
		}
	}
	else
	{
		func_298(uParam0, 13, 0, 0);
		unk_0x3C05FE2296BF5F53(uParam1->f_3);
		func_173(uParam0, 10, 1);
		func_262(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_176(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		if (unk_0x0700B6EAA7894D54(*uParam0) || unk_0x78D3CDB884C74FEB(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_177(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		fVar1 = unk_0x78D3CDB884C74FEB(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_178(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		if (unk_0x78D3CDB884C74FEB(*uParam0) >= 4f && unk_0x78D3CDB884C74FEB(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_179(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		if (unk_0x78D3CDB884C74FEB(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_180(var uParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (func_48(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_181(uParam0) == 13)
				{
					func_112();
				}
			}
		}
		if (func_48(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_181(uParam0) == 13)
				{
					func_112();
				}
			}
		}
	}
}

int func_181(var uParam0)
{
	return uParam0->f_416;
}

void func_182(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_194())
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (func_50(iParam0, Param1, 1) < fParam4)
			{
				if (func_184(uParam5))
				{
					func_183(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_183(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_184(var uParam0)
{
	return *uParam0 == 0;
}

void func_185(var uParam0)
{
	if (func_188(uParam0))
	{
		func_186(uParam0);
	}
}

void func_186(var uParam0)
{
	if (unk_0x8AAC0F5C88B4585D() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFDD9C8C921B18ACC();
			func_191(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_107(uParam0, 20) > 3f)
				{
					func_237(uParam0, 87, 1, 0, 0);
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
						func_237(uParam0, 84, 1, 0, 0);
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
						func_237(uParam0, 85, 1, 0, 0);
						func_191(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_107(uParam0, 20) > 8f)
				{
					func_237(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_172(uParam0, 22))
				{
					func_187(uParam0, 22);
				}
			}
			if (func_172(uParam0, 22) && func_107(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_237(uParam0, 84, 1, 0, 0);
						func_191(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_237(uParam0, 85, 1, 0, 0);
						func_191(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_187(var uParam0, int iParam1)
{
	func_108(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_188(var uParam0)
{
	return uParam0->f_120;
}

int func_189(int iParam0, var uParam1)
{
	if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
	{
		if (unk_0x00B5B0B68211D89B(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
				{
					unk_0xD333A6376EE57D56(unk_0xF3F8195C98263BF5(), 1, 0);
					unk_0xB765EEE9B2DD5EC5(unk_0xF3F8195C98263BF5(), 0);
					if (unk_0x6901135DDCC4904D(uParam1))
					{
						unk_0x8A3D7569826A325D(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_190(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == unk_0xD5A676B97920D126())
		{
			return 1;
		}
	}
	return 0;
}

void func_191(var uParam0, int iParam1, bool bParam2)
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

int func_192(int iParam0, int iParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_193()
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
	unk_0x491763F024B284EB(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_194()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	func_145();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_141(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_140(1, 1, 1))
			{
				iLocal_897 = unk_0x84A97C70FFDEC0C8();
				func_133(256, 0, 1);
				func_138(&uLocal_1082);
				func_137(&Local_1052, 2, 0);
				if (func_201(&Local_853, Local_934, fLocal_973))
				{
					unk_0x075CAD5F04ECA8B4(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_136(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_237(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_107(&Local_423, 19) > 3f)
			{
				if (!unk_0x00B5B0B68211D89B(Local_853.f_2))
				{
					unk_0x5457695C257D1470(Local_853.f_2, 1);
					unk_0x37338B7B7C4982DC(Local_853.f_2);
					if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
					{
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0x87D70F1F81DB77D3(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0x290A57C93304EF16(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
						unk_0xAFC3B32426D08964(Local_853.f_3, 1);
					}
				}
				unk_0x4E5F114C5BDA2616(unk_0xD5A676B97920D126(), Local_423.f_17);
				unk_0xDBB81B5CF32D8413(Local_423.f_0, func_200(0));
				unk_0x3375089ABC5EBB4E(Local_423.f_0, func_199(0), 2);
				unk_0xBA44410A0086D31F(Local_423.f_0, 17.2f);
				unk_0x41702B9F8E97C108(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x55EB2099508DD1C3(Local_423.f_0, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				func_298(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0xDBB81B5CF32D8413(uLocal_422, func_200(4));
			unk_0x3375089ABC5EBB4E(uLocal_422, func_199(0), 2);
			unk_0xBA44410A0086D31F(uLocal_422, 17.2f);
			unk_0x41702B9F8E97C108(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0xA264B0A017677373(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_298(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_107(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_181(&Local_423) > 10)
				{
					func_196();
				}
				iLocal_912 = 1;
			}
			if (func_107(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0xDBB81B5CF32D8413(Local_423.f_0, func_200(2));
				unk_0x992C86DF97AB4710(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0xBA44410A0086D31F(Local_423.f_0, 35f);
				unk_0x41702B9F8E97C108(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x55EB2099508DD1C3(Local_423.f_0, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				func_298(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0xDBB81B5CF32D8413(uLocal_422, func_200(2));
			unk_0x992C86DF97AB4710(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0xBA44410A0086D31F(uLocal_422, 45f);
			unk_0x41702B9F8E97C108(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0xA264B0A017677373(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_298(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0) && !unk_0xB529B2A4B7C64D6D(Local_853.f_3, 0))
			{
				if (!unk_0x6A0583ECFCCECC9B(Local_853.f_2, 0))
				{
					unk_0x5467EF651716201E(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0x9773EF10686D53C8(Local_853.f_3, 10f);
				func_101(&(Local_853.f_27));
				func_298(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_196();
				}
			}
			break;
		
		case 11:
			if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
			{
			}
			if (unk_0x7974087FFB309CBC(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0xA63F14F5213BDF0F(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_107(&Local_423, 19) > 4f)
			{
				unk_0xFF11D473E95357D3(800);
				unk_0xB6AE7C18ADC0F901(0);
				unk_0xCA3B54980FA9D86F(0, 1065353216);
				func_101(&(Local_853.f_27));
				unk_0xAF191D67F49B35C9(Local_423.f_0, 0);
				unk_0xAF191D67F49B35C9(uLocal_422, 0);
				func_126(1, 1, 1);
				unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
				func_191(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_107(&Local_423, 19) > 3.7f)
			{
				if (func_128())
				{
					if (!iLocal_914)
					{
						unk_0xAAD655F2351CC4B7("CamPushInNeutral", 0, 0);
						unk_0xA93E75A5493862BD(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
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

void func_196()
{
	bLocal_901 = true;
	if (!unk_0x00B5B0B68211D89B(Local_853.f_2))
	{
		if (unk_0xA4DB44DF73EF4FE5(Local_853.f_3, 0))
		{
			if (unk_0x04D83291EB9DE51D(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0xBB9A2DB94A862D7A(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0x417BCC1ECC12E9A2(Local_853.f_2, Local_853.f_30);
				unk_0x77E24C0B92B4FC24(Local_853.f_2, 1, 1);
				unk_0x77E24C0B92B4FC24(Local_853.f_2, 6, 0);
				unk_0x77E24C0B92B4FC24(Local_853.f_2, 17, 0);
				unk_0x77E24C0B92B4FC24(Local_853.f_2, 3, 0);
				unk_0x3F0508FC63D0DEF5(Local_853.f_2, 500f);
				unk_0x006AB1912F31FD47(Local_853.f_2, 500f);
				unk_0x94DF17EEFDDE30A7(Local_853.f_2, 500f);
				unk_0x5457695C257D1470(Local_853.f_2, 1);
				unk_0x274499581D5A2F1E(Local_853.f_3, 500);
				unk_0x274499581D5A2F1E(Local_853.f_2, 500);
				unk_0x6D20A3AA82585D8C(Local_853.f_3, 1);
				unk_0x6D20A3AA82585D8C(Local_853.f_2, 1);
				if (!unk_0x6901135DDCC4904D(Local_853.f_4))
				{
					Local_853.f_4 = func_197(Local_853.f_3, 0, 0);
				}
				unk_0x5457695C257D1470(Local_853.f_2, 1);
				unk_0x94A20FCCDB39D57C(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0x39408BD94098453B(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
}

int func_197(int iParam0, bool bParam1, bool bParam2)
{
	return func_198(iParam0, !bParam1, bParam2);
}

int func_198(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_122(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_122(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_122(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_199(int iParam0)
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

Vector3 func_200(int iParam0)
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

int func_201(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0x7887B64A08364778(uParam0->f_2))
	{
		uParam0->f_2 = unk_0x8C855D8124E955CE(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_7(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x545EC2C7EB66F6DD(uParam0->f_2, "TaxiJames");
	if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
	{
		unk_0x237B0CFB6EEBD3BA(iLocal_890, 20, 1);
	}
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_2, 0))
	{
		unk_0x5BD2F51088536150(uParam0->f_2, 0, 1, 0, 0);
		unk_0x5BD2F51088536150(uParam0->f_2, 3, 0, 0, 0);
		unk_0x5BD2F51088536150(uParam0->f_2, 4, 0, 1, 0);
		unk_0x5BD2F51088536150(uParam0->f_2, 8, 0, 0, 0);
		unk_0x5BD2F51088536150(uParam0->f_2, 11, 0, 1, 0);
		unk_0x417BCC1ECC12E9A2(uParam0->f_2, uParam0->f_30);
		unk_0x77E24C0B92B4FC24(uParam0->f_2, 1, 1);
		unk_0x77E24C0B92B4FC24(uParam0->f_2, 6, 1);
		unk_0x77E24C0B92B4FC24(uParam0->f_2, 17, 1);
		unk_0x77E24C0B92B4FC24(uParam0->f_2, 3, 0);
		unk_0x3F0508FC63D0DEF5(uParam0->f_2, 300f);
		unk_0x006AB1912F31FD47(uParam0->f_2, 300f);
		unk_0x94DF17EEFDDE30A7(uParam0->f_2, 300f);
		unk_0x5457695C257D1470(uParam0->f_2, 1);
	}
	return 1;
}

int func_202(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x8AFBC859AA63D3D7() && !unk_0xF9B8AB338DC56ADD()) && !unk_0x83D6BCB493FCFCBA()) && !unk_0x7E3640C27B17457C()) && !uParam0->f_142)
	{
		if (func_214(uParam0))
		{
			func_124(uParam0, &(uParam0->f_43));
			func_209(uParam0);
			func_208(uParam0);
			func_185(uParam0);
			func_207(uParam0, fParam2, fParam3);
			func_205(uParam0);
			return func_203(uParam0, iParam1);
		}
	}
	return 0;
}

int func_203(var uParam0, int iParam1)
{
	if (func_63(uParam0) == 2)
	{
		if (unk_0x1AAFFE4111587B35(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_204(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1) && func_140(1, 1, 1)) && unk_0xE8112E973BED9DEF(uParam0->f_4))
		{
			return func_117(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x1AAFFE4111587B35(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1) && func_140(1, 1, 1)) && unk_0xE8112E973BED9DEF(uParam0->f_4))
	{
		return func_117(uParam0, 1, iParam1);
	}
	return 0;
}

float func_204(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_205(var uParam0)
{
	float fVar0;
	
	if ((func_206(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
	{
		if ((unk_0x84A97C70FFDEC0C8() - iLocal_97) >= 10000)
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
			iLocal_97 = unk_0x84A97C70FFDEC0C8();
		}
		if (iLocal_96 >= 2 && !func_194())
		{
			func_237(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x84A97C70FFDEC0C8() % 4000) < 50)
		{
			if (!func_206(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_206(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
		{
			if (unk_0x04D83291EB9DE51D(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207(var uParam0, float fParam1, float fParam2)
{
	if (func_206(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0x0700B6EAA7894D54(uParam0->f_4) || unk_0x78D3CDB884C74FEB(uParam0->f_4) < 3f) && func_190(uParam0))
		{
			if (!func_172(uParam0, 2))
			{
				func_187(uParam0, 2);
			}
			else if (func_206(uParam0))
			{
				if (func_107(uParam0, 2) > fParam1 && !func_172(uParam0, 14))
				{
					if (func_34())
					{
						func_237(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_237(uParam0, 48, 1, 0, 0);
					}
					func_298(uParam0, 2, 0, 0);
					if (func_172(uParam0, 10))
					{
						func_298(uParam0, 10, 0, 0);
					}
				}
				if (!func_172(uParam0, 3))
				{
					func_298(uParam0, 3, 0, 0);
				}
				else if (func_107(uParam0, 3) >= fParam2)
				{
					func_191(uParam0, 3, 0);
					func_338(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_172(uParam0, 2))
			{
				func_191(uParam0, 2, 0);
			}
			if (func_172(uParam0, 3))
			{
				func_191(uParam0, 3, 0);
			}
		}
	}
}

void func_208(var uParam0)
{
	if (unk_0x5CD0E40A9FF3475C(unk_0xF3F8195C98263BF5()) && !func_21(uParam0->f_44, 2))
	{
		func_64(&(uParam0->f_44), 2);
	}
	else if (!unk_0x5CD0E40A9FF3475C(unk_0xF3F8195C98263BF5()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_52(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_237(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_209(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) >= 1)
				{
					if (func_107(uParam0, 9) > 1f)
					{
						func_213(uParam0, unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()));
						if (uParam0->f_410 != 22)
						{
							func_237(uParam0, 50, 1, 1, 0);
						}
						func_298(uParam0, 9, 0, 0);
						if (unk_0x6901135DDCC4904D(uParam0->f_9))
						{
							unk_0x97C445677A852D45(uParam0->f_9, 0);
							unk_0xD947D2F43FD7F6D7(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_194() && func_107(uParam0, 9) > 4f)
				{
					func_237(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_212("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_237(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x222B4D6308DFC3F1(unk_0xF3F8195C98263BF5(), func_211(uParam0)))
				{
					func_213(uParam0, unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()));
					func_52(6, 0);
				}
				if (!func_210(uParam0))
				{
					if (!unk_0x33688D334D224255())
					{
						if (func_107(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_237(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
				{
					if (func_212("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x59C0D363E5A5B548();
					}
					if (unk_0x6901135DDCC4904D(uParam0->f_9))
					{
						unk_0x97C445677A852D45(uParam0->f_9, 255);
						unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_194())
				{
					if (uParam0->f_410 != 22)
					{
						func_237(uParam0, 53, 1, 0, 1);
					}
					func_52(7, func_211(uParam0));
					func_213(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_194())
				{
					func_191(uParam0, 9, 0);
					func_298(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_210(var uParam0)
{
	return uParam0->f_110;
}

int func_211(var uParam0)
{
	return uParam0->f_106;
}

bool func_212(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC450F7ACA7F40F98(sParam0);
	if (iParam1 == 1)
	{
		unk_0xB1953EBEF4D6BD85(iParam2);
	}
	return unk_0x1B1A26465DF20C87();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_214(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
		{
			if (!unk_0x04D83291EB9DE51D(uParam0->f_3, uParam0->f_4, 1) && !unk_0xD7143F03AB03DDF2(uParam0->f_3))
			{
				func_338(uParam0, "Passenger left car.", 9);
			}
			else if (func_224(uParam0))
			{
				if (func_212("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x0CA19C427F18E80B("TAXI_OBJ_PICKUP");
				}
				if (unk_0x8AFBC859AA63D3D7())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
				{
				}
				func_215(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_215(var uParam0, bool bParam1)
{
	func_223(uParam0, uParam0->f_3);
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_172(uParam0, 14))
			{
				if (func_194())
				{
					func_222(1);
				}
				func_173(uParam0, 11, 1);
				func_217(uParam0, 1);
				func_298(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_206(uParam0))
				{
					if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
					{
					}
					if (unk_0x6A0583ECFCCECC9B(uParam0->f_2, 0))
					{
						if (func_107(uParam0, 15) > 5f)
						{
							func_298(uParam0, 15, 0f, 1);
						}
					}
					if (func_107(uParam0, 14) > 20f)
					{
						func_338(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_107(uParam0, 14) > 20f)
				{
					if (func_216(uParam0->f_4, 1) > 40f)
					{
						func_338(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_338(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_216(int iParam0, int iParam1)
{
	return func_48(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5()), iParam0, iParam1);
}

void func_217(var uParam0, bool bParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x6901135DDCC4904D(uParam0->f_8))
			{
				unk_0x97C445677A852D45(uParam0->f_8, 0);
				unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
				func_221(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x6901135DDCC4904D(uParam0->f_9))
			{
				unk_0x97C445677A852D45(uParam0->f_9, 0);
				unk_0xD947D2F43FD7F6D7(uParam0->f_9, 0);
				unk_0x59C0D363E5A5B548();
				if (func_206(uParam0))
				{
					func_237(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_221(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_218(uParam0, 0, 0);
		}
		else if (unk_0x6901135DDCC4904D(uParam0->f_10))
		{
			unk_0x8A3D7569826A325D(&(uParam0->f_10));
			if (unk_0x6901135DDCC4904D(uParam0->f_8))
			{
				unk_0x97C445677A852D45(uParam0->f_8, 255);
				unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
			}
			else if (unk_0x6901135DDCC4904D(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x97C445677A852D45(uParam0->f_9, 0);
					unk_0xD947D2F43FD7F6D7(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x97C445677A852D45(uParam0->f_9, 255);
					unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
				}
			}
			unk_0x59C0D363E5A5B548();
		}
	}
}

void func_218(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_419(uParam0);
	}
	if (!unk_0x6901135DDCC4904D(uParam0->f_10))
	{
		uParam0->f_10 = func_198(uParam0->f_4, 1, 0);
		unk_0x2EDAF851B28036F0(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xD947D2F43FD7F6D7(uParam0->f_10, 1);
		func_219(uParam0);
		if (bParam2)
		{
			unk_0x59C0D363E5A5B548();
			func_237(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_219(var uParam0)
{
	func_298(uParam0, 14, 0, 0);
	func_220();
}

void func_220()
{
	int iVar0;
	
	iVar0 = unk_0x80AA649904BB5788();
	if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		unk_0xEC49B508B83FF2C9(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_221(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x59C0D363E5A5B548();
		func_237(uParam0, iParam3, 1, 0, 0);
		func_64(uParam1, iParam2);
	}
}

void func_222(int iParam0)
{
	Global_16756 = iParam0;
}

void func_223(var uParam0, int iParam1)
{
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (!unk_0x00B5B0B68211D89B(iParam1))
		{
			if (unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
			{
				if ((unk_0x75D39BAF4D486998(iParam1, joaat("weapon_stungun"), 0) || unk_0x75D39BAF4D486998(iParam1, 0, 2)) || unk_0x75D39BAF4D486998(iParam1, 0, 1))
				{
					func_338(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
			}
		}
	}
}

int func_224(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_172(uParam0, 14))
			{
				func_225(uParam0);
			}
			func_217(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_225(var uParam0)
{
	func_191(uParam0, 14, 0);
	func_191(uParam0, 15, 0);
	func_227();
	if (func_226())
	{
		func_222(0);
	}
}

int func_226()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_227()
{
	var uVar0;
	
	uVar0 = unk_0x80AA649904BB5788();
	if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
	{
		unk_0xEC49B508B83FF2C9(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_228(var uParam0, var uParam1)
{
	func_123(uParam0, uParam1->f_2, 1, 1);
	if (unk_0xA4DB44DF73EF4FE5(uParam1->f_3, 0))
	{
		if (unk_0x7D720C677145C91C(uParam1->f_3, unk_0xD5A676B97920D126(), 1))
		{
			if (!func_194())
			{
				func_338(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_142();
			}
		}
	}
	else if (!func_194())
	{
		func_338(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_142();
	}
}

int func_229(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0xDE8A46A23FDCBBFE(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1);
	unk_0xFA03BA297FE81584(uParam0->f_1, 1);
	unk_0x8188DB74546FF484(uParam0->f_1);
	uLocal_417[0] = unk_0xDE8A46A23FDCBBFE(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1);
	uLocal_417[1] = unk_0xDE8A46A23FDCBBFE(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1);
	uLocal_417[2] = unk_0xDE8A46A23FDCBBFE(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1);
	unk_0xAFC3B32426D08964(uLocal_417[0], 2);
	unk_0xAFC3B32426D08964(uLocal_417[1], 2);
	unk_0xAFC3B32426D08964(uLocal_417[2], 2);
	unk_0x1364ED1BFBE98E4E(uLocal_417[0], "BRAVEST");
	unk_0x1364ED1BFBE98E4E(uLocal_417[1], "BOLDEST");
	unk_0x1364ED1BFBE98E4E(uLocal_417[2], "BADDEST");
	unk_0xE81D470B804DC69A(uParam0->f_3, 800);
	unk_0x1364ED1BFBE98E4E(uParam0->f_3, "PUSSYWAG");
	unk_0x7E1EA48517D28990(uParam0->f_3, 1);
	unk_0xB00AE7B9B8ED8B33(uParam0->f_3, 1);
	uParam0->f_15 = unk_0xD5ABCE2B8F82DD84(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x58A5671D02E335D1(uParam0->f_3, 1);
	func_234(Local_423.f_14, 1, 1114636288);
	func_234(Local_958, 1, 15f);
	func_234(Local_961, 1, 15f);
	unk_0xAFC3B32426D08964(uParam0->f_3, 2);
	return 1;
}

int func_230()
{
	if (!unk_0x7AD0E9452821C95D(Local_853.f_0))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_853.f_1))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(iLocal_888))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(iLocal_889))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x536796E3DCB32FB1(120, "txm_fc_h1_"))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x536796E3DCB32FB1(0, "taxi_oj_fc3"))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x37F8AED05948ACB2(&cLocal_976))
	{
		func_134("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_231(var uParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_172(uParam0, 14))
			{
				if (unk_0x6901135DDCC4904D(*uParam1) && unk_0xDCA5942DC912553C(*uParam1) > 0)
				{
					unk_0x97C445677A852D45(*uParam1, 0);
				}
				func_218(uParam0, 0, 0);
				func_237(uParam0, 2, 1, 0, 0);
			}
			else if (func_107(uParam0, 14) > 20f)
			{
				func_338(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_172(uParam0, 14))
			{
				func_298(uParam0, 2, 0, 0);
				func_225(uParam0);
			}
			if (unk_0x6901135DDCC4904D(uParam0->f_10))
			{
				unk_0x8A3D7569826A325D(&(uParam0->f_10));
			}
			if ((unk_0x6901135DDCC4904D(*uParam1) && unk_0xDCA5942DC912553C(*uParam1) < 255) && unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
			{
				unk_0x97C445677A852D45(*uParam1, 255);
				unk_0xD947D2F43FD7F6D7(*uParam1, 1);
			}
		}
	}
}

void func_232(var uParam0)
{
	func_233(uParam0, 1000);
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x8DA3061503F2C4C8(uParam0->f_3);
		unk_0xBE29918F5B8EC2EF(uParam0->f_3, unk_0xD5A676B97920D126(), 0);
	}
	func_142();
	func_225(uParam0);
}

void func_233(var uParam0, int iParam1)
{
	if (unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		unk_0xAF191D67F49B35C9(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xD08D9B79AF63C59F(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
	}
}

void func_234(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x075CAD5F04ECA8B4(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x56E36EF46CD901B4(Var0, Var3, 1);
		unk_0x6055506B2BE3690D();
	}
}

void func_235()
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

void func_236(var uParam0)
{
	unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
	unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
	func_233(uParam0, 1000);
}

void func_237(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_298(uParam0, 16, 4f, 0);
		if (func_238(uParam0))
		{
			func_45();
		}
	}
	func_262(uParam0, iParam2, bParam3);
}

int func_238(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_194())
	{
		Var6 = { func_240() };
		if (!unk_0xC55B9553B3EDADE9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xCC257DA11A122B5F(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_239(&Var0);
			if (unk_0xCC257DA11A122B5F(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_239(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_240()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_241(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
		{
			if ((unk_0xD7143F03AB03DDF2(uParam0->f_3) && (unk_0x84A97C70FFDEC0C8() - iLocal_89) > 500) || unk_0x04D83291EB9DE51D(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_242()
{
	unk_0x4ACD1E4CBA159ED1(Local_853.f_0);
	unk_0x4ACD1E4CBA159ED1(Local_853.f_1);
	unk_0x4ACD1E4CBA159ED1(iLocal_888);
	unk_0x4ACD1E4CBA159ED1(iLocal_889);
	unk_0x3E276C5F51A6C832(120, "txm_fc_h1_");
	unk_0x3E276C5F51A6C832(0, "taxi_oj_fc3");
	unk_0x6F92871B78A401BC(&cLocal_976);
	unk_0x49E996A1E39EAAD7("veh@truck@ds@base");
}

int func_243(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
			{
			}
			func_215(uParam0, 1);
			if (func_32())
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
			}
			if (unk_0x1774A68441553185(uParam0->f_3, 2106541073) == 1 || unk_0x1774A68441553185(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x8DA3061503F2C4C8(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0xBE29918F5B8EC2EF(uParam0->f_3, unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (unk_0x222B4D6308DFC3F1(unk_0xF3F8195C98263BF5(), 0))
		{
			func_260(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x873418BFBF9A6780(&uVar3);
				unk_0x456121A0AAC868D4(&uVar3);
				unk_0x1D2CBA8F2F00D745(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xBE29918F5B8EC2EF(0, uParam0->f_4, 0);
				unk_0xCFE67FBB69F1C410(uVar3);
				unk_0x8B06B801B92CEC2D(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_172(uParam0, 14))
			{
				func_225(uParam0);
				func_217(uParam0, 0);
			}
			if (func_172(uParam0, 9))
			{
				func_191(uParam0, 9, 0);
				unk_0x59C0D363E5A5B548();
				if (unk_0x6901135DDCC4904D(uParam0->f_8))
				{
					unk_0x97C445677A852D45(uParam0->f_8, 255);
					unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x78D3CDB884C74FEB(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_259(uParam0, uParam0->f_3) > 300f)
				{
					func_338(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x1774A68441553185(uParam0->f_3, 242628503) != 1 || ((func_48(unk_0xD5A676B97920D126(), uParam0->f_3, 1) < 20f && func_204(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_204(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_256(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_255(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_254(uParam0->f_4, uParam0->f_3);
								iVar0 = func_253(uParam0, &iVar1);
								if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
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
										unk_0xE9148EE8AA200B60(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xE9148EE8AA200B60(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
											{
												unk_0xE9148EE8AA200B60(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x37338B7B7C4982DC(uParam0->f_3);
							unk_0x87D70F1F81DB77D3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_190(uParam0))
							{
								unk_0x37338B7B7C4982DC(uParam0->f_3);
							}
							else if (((unk_0x1774A68441553185(uParam0->f_3, 242628503) != 1 && unk_0x1774A68441553185(uParam0->f_3, 242628503) != 0) && unk_0x1774A68441553185(uParam0->f_3, 242628503) != 7) && func_259(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x873418BFBF9A6780(&(uParam0->f_243));
								unk_0x456121A0AAC868D4(&(uParam0->f_243));
								unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x290A57C93304EF16(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x290A57C93304EF16(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xCFE67FBB69F1C410(uParam0->f_243);
								unk_0x8B06B801B92CEC2D(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x486783EC05843609(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_48(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_252(uParam0, 1))
								{
									unk_0x8DA3061503F2C4C8(uParam0->f_3);
									func_338(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_251(uParam0->f_4))
								{
									unk_0x8DA3061503F2C4C8(uParam0->f_3);
									func_338(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_249(uParam0);
						if (func_259(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_245(uParam0))
								{
									func_244(uParam0);
									iLocal_89 = unk_0x84A97C70FFDEC0C8();
									unk_0x237B0CFB6EEBD3BA(uParam0->f_3, 26, 1);
									func_191(uParam0, 5, 0);
									unk_0xC831E094F3B9BB95();
									unk_0xD2C328D8F4EE2645(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x4C3AE97631B9B672(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_244(var uParam0)
{
	if (unk_0x6901135DDCC4904D(uParam0->f_8))
	{
		unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
		unk_0x8A3D7569826A325D(&(uParam0->f_8));
	}
}

int func_245(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_134("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		func_145();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_141(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_117(uParam0, 0, 1084227584) && func_140(1, 1, 1))
			{
				if (func_252(uParam0, 1))
				{
					iLocal_88 = unk_0x84A97C70FFDEC0C8();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_338(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_254(uParam0->f_4, uParam0->f_3);
				iVar9 = func_253(uParam0, &iVar10);
				if (!unk_0xB529B2A4B7C64D6D(iVar9, 0))
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
						unk_0xE9148EE8AA200B60(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xE9148EE8AA200B60(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xB529B2A4B7C64D6D(iVar9, 0))
						{
							unk_0xE9148EE8AA200B60(iVar9, 0, 4096);
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
			iVar12 = func_174(&(uParam0->f_409), unk_0x7E140C583F91AE2B(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x7E140C583F91AE2B(uParam0->f_4, Var0), 1);
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
				func_133(0, 0, 1);
				unk_0x7B2D1A3447B0AD5C(unk_0xC086F8D75730FA3A(uParam0->f_4, 1), 3f, 0);
				unk_0xB78B81E0A519202F(unk_0xC086F8D75730FA3A(uParam0->f_4, 1), 25f, 0);
				unk_0x04890EB0282525A5(1);
				unk_0x59C0D363E5A5B548();
				func_112();
				func_262(uParam0, 0, 0);
				Var13 = { unk_0x7E140C583F91AE2B(uParam0->f_4, Var6) };
				unk_0xBB9A2DB94A862D7A(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(uParam0->f_3, func_247(uParam0));
				func_136(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xDBB81B5CF32D8413(*uParam0, unk_0x7E140C583F91AE2B(uParam0->f_4, Var0));
				unk_0x992C86DF97AB4710(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x55EB2099508DD1C3(*uParam0, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				unk_0xCE607BF2D136923E(uParam0->f_3, 0, 0);
				unk_0x87D70F1F81DB77D3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_134("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
			{
				if (!unk_0x6A0583ECFCCECC9B(uParam0->f_3, 0))
				{
					unk_0x5467EF651716201E(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x53D0F09DE1A526F7(uParam0->f_4, func_246(uParam0->f_7), 1);
				}
				unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
				unk_0xAF191D67F49B35C9(*uParam0, 0);
				unk_0xAF191D67F49B35C9(uParam0->f_1, 0);
				unk_0xB6AE7C18ADC0F901(0);
				unk_0xCA3B54980FA9D86F(0, 1065353216);
				unk_0xFF11D473E95357D3(800);
				unk_0x04890EB0282525A5(1);
				unk_0x59C0D363E5A5B548();
				func_112();
				func_262(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x8AFBC859AA63D3D7() && !unk_0xF9B8AB338DC56ADD())
			{
				func_126(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
			unk_0xAF191D67F49B35C9(*uParam0, 0);
			unk_0xAF191D67F49B35C9(uParam0->f_1, 0);
			unk_0xB6AE7C18ADC0F901(0);
			unk_0xCA3B54980FA9D86F(0, 1065353216);
			func_126(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0) && !unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
			{
				if (unk_0xD7143F03AB03DDF2(uParam0->f_3) || unk_0x6A0583ECFCCECC9B(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -1794415470) != 1 && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -1794415470) != 0)
				{
					unk_0x87D70F1F81DB77D3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_246(int iParam0)
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

float func_247(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x7E140C583F91AE2B(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x7E140C583F91AE2B(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_248(unk_0xC086F8D75730FA3A(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_248(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x1467106C5D2966B9((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_249(var uParam0)
{
	var uVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
		{
			if (func_216(uParam0->f_3, 1) > 30f || func_250(uParam0))
			{
				if (unk_0x1774A68441553185(uParam0->f_3, -1794415470) == 1 || unk_0x1774A68441553185(uParam0->f_3, 242628503) == 1)
				{
					unk_0x873418BFBF9A6780(&uVar0);
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4, 0);
					unk_0x290A57C93304EF16(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x1D2CBA8F2F00D745(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x8B06B801B92CEC2D(uParam0->f_3, uVar0);
					func_338(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_250(var uParam0)
{
	if ((unk_0x78D3CDB884C74FEB(uParam0->f_4) > 3f && func_107(uParam0, 5) > 15f) || unk_0x04B02215CFC8E89F(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xA53003F5B0019FFC(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xA53003F5B0019FFC(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xA53003F5B0019FFC(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xA53003F5B0019FFC(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x1F4C5E9E5F24C698(unk_0xA0A4DA31DEDFAC4F(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x4AFD1A95C0117800(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x4AFD1A95C0117800(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x4AFD1A95C0117800(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x4AFD1A95C0117800(iParam0, 3))
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

int func_252(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x98BE504E8B389665(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x98BE504E8B389665(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x98BE504E8B389665(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x7887B64A08364778(iVar0[iVar4]))
			{
				if (unk_0xB529B2A4B7C64D6D(iVar0[iVar4], 0))
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
		if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_253(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0 = unk_0x98BE504E8B389665(uParam0->f_4, 1, 0);
		if (unk_0x7887B64A08364778(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x98BE504E8B389665(uParam0->f_4, 2, 0);
			if (unk_0x7887B64A08364778(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x98BE504E8B389665(uParam0->f_4, 0, 0);
				if (unk_0x7887B64A08364778(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x7D44D16B4A9E941E(iParam0);
	Var0 = { unk_0x483D90C99A690DBF(iParam0, unk_0xC086F8D75730FA3A(iParam1, 1)) };
	if (unk_0xA0A4DA31DEDFAC4F(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xD1E7D11D552B5D62(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xD1E7D11D552B5D62(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xD1E7D11D552B5D62(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xD1E7D11D552B5D62(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_255(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (!unk_0x27A556D1AF39812E(uParam0->f_3) && func_216(uParam0->f_3, 1) < fParam2)
		{
			if (!func_172(uParam0, 5))
			{
				func_298(uParam0, 5, 0, 0);
			}
		}
		else if (func_172(uParam0, 5))
		{
			func_191(uParam0, 5, 0);
		}
		if (((func_107(uParam0, 5) > IntToFloat(iParam1) && unk_0x78D3CDB884C74FEB(uParam0->f_4) < fParam4) && !unk_0x27A556D1AF39812E(uParam0->f_3)) || func_216(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x96C78339A82E0B67(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x96C78339A82E0B67(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xA277059EBE3B154A(uParam0->f_4, iVar18) };
		Var6 = { unk_0x483D90C99A690DBF(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x7E140C583F91AE2B(uParam0->f_4, Var6) };
	Var3 = { unk_0x7E140C583F91AE2B(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0xF9D271D16397C773(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x5457695C257D1470(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_48(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xC3D3EC28F0EB3C6D((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xE819DF1A8AD7E307(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xEE7715D6C4A7B1F2(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x1774A68441553185(uParam0->f_3, 242628503) != 1 && unk_0x1774A68441553185(uParam0->f_3, 242628503) != 0)
			{
				unk_0x873418BFBF9A6780(&(uParam0->f_243));
				unk_0x456121A0AAC868D4(&(uParam0->f_243));
				unk_0x290A57C93304EF16(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
				unk_0x3331DA04C09D0863(uParam0->f_243, 1);
				unk_0xCFE67FBB69F1C410(uParam0->f_243);
				unk_0x8B06B801B92CEC2D(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x59C0D363E5A5B548();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_237(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_257(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x37338B7B7C4982DC(uParam0->f_3);
			unk_0x0988FFC0C75637DF(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x873418BFBF9A6780(&(uParam0->f_243));
			unk_0x456121A0AAC868D4(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x290A57C93304EF16(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x290A57C93304EF16(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
			unk_0xCFE67FBB69F1C410(uParam0->f_243);
			unk_0x8B06B801B92CEC2D(uParam0->f_3, uParam0->f_243);
			unk_0x873418BFBF9A6780(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x486783EC05843609(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_257(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x063B714A2080E45E(uParam0, sParam1, uParam2, func_258(iParam3), 0);
}

int func_258(int iParam0)
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

float func_259(var uParam0, int iParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (func_190(uParam0))
		{
			return func_48(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_260(var uParam0)
{
	func_223(uParam0, uParam0->f_3);
	if (func_190(uParam0))
	{
		if (func_172(uParam0, 14))
		{
			func_225(uParam0);
			if (unk_0x6901135DDCC4904D(uParam0->f_10))
			{
				unk_0x8A3D7569826A325D(&(uParam0->f_10));
			}
		}
	}
	if (!func_172(uParam0, 9))
	{
		if (unk_0x6901135DDCC4904D(uParam0->f_8))
		{
			unk_0x97C445677A852D45(uParam0->f_8, 0);
			unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
		}
		func_298(uParam0, 9, 0, 0);
		func_261("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_261(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

void func_262(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_298(uParam0, 16, 4f, 0);
		unk_0x59C0D363E5A5B548();
	}
}

int func_263(var uParam0, int iParam1)
{
	if (!unk_0x4A980428C9937F4E(2))
	{
		return 0;
	}
	func_267(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x3DFB3BFF04D48E00(unk_0xD5A676B97920D126()) && !func_21(uParam0->f_44, 256))
			{
				func_64(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				func_237(uParam0, 135, 1, 0, 1);
				func_64(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_266(uParam0, iParam1))
	{
		if (func_216(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0xBE29918F5B8EC2EF(uParam0->f_3, unk_0xD5A676B97920D126(), 0);
				func_237(uParam0, 133, 1, 0, 1);
				func_64(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x00B5B0B68211D89B(uParam0->f_3) || unk_0xFCDC1684830866E8(uParam0->f_3)) || func_216(uParam0->f_3, 1) > 400f)
		{
			func_338(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x0DBD8FE531FD620D(uParam0->f_2, 0);
		unk_0x70057AC4F7A58052(uParam0->f_4, 1);
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0xBC82BAA0C1572324(uParam0->f_4);
			func_264(uParam0);
			func_52(2, 0);
			bLocal_94 = true;
			func_108(&uLocal_90);
			return 1;
		}
		else
		{
			func_338(uParam0, "No Taxi", 21);
			func_157("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_264(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		if (func_265())
		{
		}
	}
}

int func_265()
{
	if (unk_0xF44A5E894FE76438(unk_0x7BC26452241AC7C9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_266(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
			{
				iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
				bVar2 = func_251(iVar0);
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
				if (unk_0x1F4C5E9E5F24C698(iVar1))
				{
					if (unk_0x98BE504E8B389665(iVar0, -1, 0) == unk_0xD5A676B97920D126())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x7D44D16B4A9E941E(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0x4A980428C9937F4E(2))
						{
							func_157("TX_VIP_DMGD", -1);
							if (func_149("TX_VIP_DMGD"))
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
						if (unk_0x4A980428C9937F4E(2))
						{
							func_157("TX_VIP_CAR", -1);
							if (func_149("TX_VIP_CAR"))
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
						if (unk_0x4A980428C9937F4E(2))
						{
							func_157("TX_VIP_SMALL", -1);
							if (func_149("TX_VIP_SMALL"))
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

void func_267(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x59D60465DE87FE2F() || unk_0xF1A016B51831B87B())
	{
		uVar0 = iParam0;
		unk_0xC4DF89AB50C9BF26(8, &uVar0, 1, 1);
	}
	else if (unk_0xC0915CC8FE05A943() || unk_0x603D621ED5E06CB0())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x470FBAC1F65AC933(8, &cVar1);
	}
}

void func_268(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_269(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x4EA098C870B73AB7(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x4EA098C870B73AB7(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_270(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_271()
{
	Local_343.f_0 = 0;
	func_288(44582, 44557, 1);
	func_288(44318, 44294, 1);
	func_288(44232, 44207, 1);
	func_288(44135, 44111, 1);
	func_288(44001, 43980, 1);
	func_288(43927, 43902, 1);
	func_288(43760, 43736, 1);
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_273(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (func_275(uParam0->f_4))
		{
			func_274(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_275(int iParam0)
{
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xD5ABCE2B8F82DD84(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x4EC2DD24B6F44441(iParam0, 0, 40000) || unk_0x4EC2DD24B6F44441(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_277(var uParam0)
{
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		if (func_278(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_278(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_279(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, 11);
	return 1;
}

int func_280(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (unk_0x3ACA21A90E0A949C(uParam0->f_4) && !unk_0xE8112E973BED9DEF(uParam0->f_4))
		{
			if (!func_172(uParam0, 25))
			{
				func_298(uParam0, 25, 0, 0);
			}
			else if (func_107(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_172(uParam0, 25))
		{
			func_191(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_281(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_282(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		if (unk_0x8BF2C3CE8CCAD706(uParam0->f_4))
		{
			if (unk_0x4EC2DD24B6F44441(uParam0->f_4, 0, 40000) || unk_0x4EC2DD24B6F44441(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_283(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_284(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
		{
			if (unk_0x0700B6EAA7894D54(uParam0->f_4))
			{
				if (func_278(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_285(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_286(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (func_287(uParam0->f_4))
		{
			func_274(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xD5ABCE2B8F82DD84(iParam0) == 0f)
	{
		if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x4EC2DD24B6F44441(iParam0, 0, 40000) || unk_0x4EC2DD24B6F44441(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_288(int iParam0, int iParam1, bool bParam2)
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

int func_289(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_338(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_290(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_3))
	{
		if ((unk_0x00B5B0B68211D89B(uParam0->f_3) || unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0)) || unk_0xF60B0BCAFB1D30FF(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_291()
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

int func_292()
{
	if (!unk_0x7AD0E9452821C95D(iLocal_886))
	{
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_293(&iLocal_896, 0))
	{
		func_134("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_293(int iParam0, bool bParam1)
{
	if (!unk_0x7AD0E9452821C95D(func_18()))
	{
		func_134("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xD7669BF035CDA5F6("gestures@m@standing@casual"))
		{
			func_134("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xD7669BF035CDA5F6("oddjobs@taxi@"))
	{
		func_134("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("oddjobs@towingcome_here"))
	{
		func_134("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("misscommon@response"))
	{
		func_134("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x4A980428C9937F4E(2))
	{
		func_134("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_294(var uParam0, int iParam1)
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

int func_295(var uParam0)
{
	if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
	{
		uParam0->f_8 = func_197(uParam0->f_3, 0, 0);
		unk_0x9FF365C8D1405D30(1, 0);
		unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
		unk_0x2EDAF851B28036F0(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0988FFC0C75637DF(uParam0->f_3, unk_0xD5A676B97920D126(), -1, 2048, 4);
	}
	return 1;
}

int func_296(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x7887B64A08364778(uParam0->f_3))
	{
		func_297(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0x7B2D1A3447B0AD5C(uParam0->f_14, 2f, 0);
		func_234(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xE15A4BE6C1F109A8(uParam0->f_11);
		}
		else if (unk_0x7887B64A08364778(Global_100364.f_225[0]))
		{
			uParam0->f_3 = Global_100364.f_225[0];
			unk_0xC53606C390BE2727(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x8C855D8124E955CE(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x545EC2C7EB66F6DD(uParam0->f_3, sParam7);
		unk_0x12A60388636C9B1C(uParam0->f_3, 112, 1);
		if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
		{
			unk_0x274499581D5A2F1E(uParam0->f_3, 250);
			unk_0x237B0CFB6EEBD3BA(uParam0->f_3, 32, 0);
			unk_0x237B0CFB6EEBD3BA(uParam0->f_3, 104, 1);
			unk_0x237B0CFB6EEBD3BA(uParam0->f_3, 177, 1);
			unk_0x237B0CFB6EEBD3BA(uParam0->f_3, 116, 0);
			unk_0x5CF7BD3BFEB33582("TAXI_Passenger", &(uParam0->f_413));
			unk_0x42AFB71D42AF78EA(1, uParam0->f_413, joaat("player"));
			unk_0x42AFB71D42AF78EA(2, uParam0->f_413, joaat("COP"));
			unk_0x417BCC1ECC12E9A2(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x89A555C73F144764(Param1, 20f, 5f, 0);
}

void func_298(var uParam0, int iParam1, float fParam2, bool bParam3)
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

void func_299()
{
	unk_0x4ACD1E4CBA159ED1(iLocal_886);
	func_301(0);
	uLocal_1132 = func_300();
	unk_0x49E996A1E39EAAD7("gestures@m@standing@casual");
}

var func_300()
{
	return unk_0x542F16A736FAC9A6("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)
{
	unk_0x4ACD1E4CBA159ED1(func_18());
	if (bParam0)
	{
		unk_0x49E996A1E39EAAD7("gestures@m@standing@casual");
	}
	unk_0x49E996A1E39EAAD7("oddjobs@taxi@");
	unk_0x49E996A1E39EAAD7("oddjobs@towingcome_here");
	unk_0x49E996A1E39EAAD7("misscommon@response");
	unk_0x68A99AC5778ED123("TAXI", 2);
	if (!func_21(Global_101652.f_18040, 128))
	{
		func_64(&(Global_101652.f_18040), 128);
	}
}

void func_302(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
		{
			if (bParam2)
			{
				if (func_107(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_237(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_237(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_298(uParam0, 10, 0f, 1);
				}
			}
			else if (func_107(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_237(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_237(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_107(uParam0, 10) > 30f)
		{
			if (!func_194())
			{
				if (uParam0->f_112)
				{
					func_237(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_237(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
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
			if (func_325(uParam0))
			{
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_324(uParam0, 1);
				func_322(5, uParam0);
				func_321(uParam0);
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
			if (func_320(uParam0))
			{
				func_324(uParam0, 1);
				func_322(0, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_319(uParam0))
			{
				func_324(uParam0, 1);
				func_322(1, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x7887B64A08364778(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xB38A470B669AC00B(uParam0->f_4);
				func_108(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_99(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_324(uParam0, 1);
				func_322(8, uParam0);
				func_321(uParam0);
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
			if (func_317(uParam0))
			{
				func_324(uParam0, 1);
				func_322(6, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_316(uParam0))
			{
				func_324(uParam0, 1);
				func_322(4, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_315(uParam0))
			{
				func_322(7, uParam0);
				func_324(uParam0, 1);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_321(uParam0);
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
			unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
		}
		else if (func_99(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_314(uParam0))
			{
				func_324(uParam0, 1);
				func_322(9, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_321(uParam0);
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
			if (func_308(uParam0))
			{
				func_324(uParam0, 1);
				func_322(13, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_307(uParam0))
			{
				func_324(uParam0, 1);
				func_322(14, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_306(uParam0))
			{
				func_324(uParam0, 1);
				func_322(11, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
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
			if (func_305(uParam0))
			{
				func_324(uParam0, 1);
				func_322(12, uParam0);
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_321(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_190[2 /*10*/].f_6)))
		{
			func_304(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_99(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_303(uParam0))
			{
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_324(uParam0, 1);
				func_322(2, uParam0);
				func_321(uParam0);
			}
		}
	}
}

int func_303(var uParam0)
{
	float fVar0;
	
	if (!unk_0x00B5B0B68211D89B(uParam0->f_2))
	{
		if ((!unk_0x4BF9154155FB7938(uParam0->f_2) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x78D3CDB884C74FEB(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_108(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_99(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x78D3CDB884C74FEB(uParam0->f_2);
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

void func_304(var uParam0, float fParam1)
{
	if (!func_13(uParam0))
	{
		func_102(uParam0, fParam1);
	}
}

int func_305(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
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

int func_306(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
		if (unk_0xC3D3EC28F0EB3C6D(Var0.f_0) > 2.5f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[11 /*10*/].f_3)))
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_99(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0xC3D3EC28F0EB3C6D(uLocal_342) - unk_0xC3D3EC28F0EB3C6D(Var0.f_0)) < 0f)
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

int func_307(var uParam0)
{
	if (((((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xC2F89F29527CAB64(unk_0xC086F8D75730FA3A(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x7887B64A08364778(uParam0->f_5))
			{
				if ((unk_0x78D3CDB884C74FEB(uParam0->f_4) > 15f && func_48(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xB529B2A4B7C64D6D(uParam0->f_5, 0) && !unk_0x06F2E112EBC0C4FB(uParam0->f_5, -1, 0)))
				{
					func_108(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_99(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_48(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x88D40E81D8E0AD6F(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_99(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x88D40E81D8E0AD6F(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	if (((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_309(uParam0->f_4) && unk_0x78D3CDB884C74FEB(uParam0->f_4) > 15f)
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

bool func_309(int iParam0)
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
	
	unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xE8C05DE20EBA1AAF(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_313((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_312(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_310(unk_0xC086F8D75730FA3A(iParam0, 1), Var15, Var18, Var21);
}

int func_310(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_313(Param6 - Param3) };
	Var3 = { func_313(Param9 - Param3) };
	fVar6 = func_311(Param0, Var0);
	fVar7 = func_311(Param3, Var0);
	fVar8 = func_311(Param6, Var0);
	fVar9 = func_311(Param0, Var3);
	fVar10 = func_311(Param3, Var3);
	fVar11 = func_311(Param9, Var3);
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

float func_311(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_312(struct<3> Param0, int iParam3)
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

Vector3 func_313(struct<3> Param0)
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

int func_314(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == unk_0xD5A676B97920D126())
		{
			if (unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == unk_0xD5A676B97920D126())
		{
			if (unk_0x04B02215CFC8E89F(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x8EC566688AB2FFE4(uParam0->f_4) <= -145f || unk_0x8EC566688AB2FFE4(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x8EC566688AB2FFE4(uParam0->f_4) <= 35f && unk_0x8EC566688AB2FFE4(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0 = unk_0x0AA0841C3DF2D634(unk_0xFB6B3EEFAB2DD12C());
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

int func_317(var uParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0 = unk_0xA46E10BF441FBC7C(unk_0xFB6B3EEFAB2DD12C());
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

int func_318(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0xC9CACD72C7228F98(uParam0->f_4))
		{
			iVar0 = unk_0xB38A470B669AC00B(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x3C05FE2296BF5F53(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_237(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_237(uParam0, 72, 1, 0, 1);
				}
				func_98(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
		if (unk_0xC3D3EC28F0EB3C6D(Var0.f_0) > 3f && !func_13(&(Local_190[0 /*10*/].f_3)))
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

int func_320(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0xE8112E973BED9DEF(uParam0->f_4) && unk_0x7C4BC3264552091A(uParam0->f_4))
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

void func_321(var uParam0)
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
	func_298(uParam0, 10, 0f, 1);
	unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
}

void func_322(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_323(uParam1, iParam0);
	func_98(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_324(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_325(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x78D3CDB884C74FEB(uParam0->f_4) > 25f)
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

void func_326()
{
	struct<3> Var0;
	
	func_134("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x7D720C677145C91C(Local_423.f_3, unk_0xD5A676B97920D126(), 1) || unk_0x7D720C677145C91C(iLocal_890, unk_0xD5A676B97920D126(), 1)) || unk_0x7D720C677145C91C(Local_853.f_2, unk_0xD5A676B97920D126(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
	{
		if (unk_0x7D720C677145C91C(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_216(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_194())
			{
				func_329(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x50FF381592977875(Local_423.f_3, unk_0xD5A676B97920D126(), -1, 0);
				iLocal_900 = unk_0x84A97C70FFDEC0C8();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_142();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0) && !unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0)) && !unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
			{
				unk_0x5CF7BD3BFEB33582("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0x627440686F6E9BBB(Local_423.f_3);
				unk_0x42AFB71D42AF78EA(255, Local_853.f_30, iLocal_893);
				unk_0x42AFB71D42AF78EA(255, Local_853.f_30, iLocal_892);
				unk_0x417BCC1ECC12E9A2(Local_853.f_2, Local_853.f_30);
				unk_0x417BCC1ECC12E9A2(iLocal_890, iLocal_893);
				unk_0x5457695C257D1470(Local_853.f_2, 1);
				unk_0x77E24C0B92B4FC24(Local_853.f_2, 17, 1);
				unk_0xE81D470B804DC69A(Local_853.f_2, 130);
				unk_0x97B7B71C9B94E019(Local_853.f_2, 1);
				unk_0xB1B255D6E393D8E1(Local_853.f_2, 1);
				unk_0x37338B7B7C4982DC(Local_853.f_2);
				unk_0x5457695C257D1470(iLocal_890, 1);
				unk_0x77E24C0B92B4FC24(iLocal_890, 17, 1);
				unk_0xE81D470B804DC69A(iLocal_890, 130);
				unk_0x97B7B71C9B94E019(iLocal_890, 1);
				unk_0xB1B255D6E393D8E1(iLocal_890, 1);
				unk_0x37338B7B7C4982DC(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0) && !unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0)) && !unk_0xB529B2A4B7C64D6D(iLocal_890, 0)) && !unk_0xB529B2A4B7C64D6D(Local_853.f_3, 0))
			{
				unk_0x873418BFBF9A6780(&uLocal_414);
				unk_0x456121A0AAC868D4(&uLocal_414);
				unk_0xBE29918F5B8EC2EF(0, iLocal_890, 0);
				unk_0x290A57C93304EF16(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xCFE67FBB69F1C410(uLocal_414);
				unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
				unk_0x873418BFBF9A6780(&uLocal_414);
				unk_0x873418BFBF9A6780(&uLocal_415);
				unk_0x456121A0AAC868D4(&uLocal_415);
				unk_0xBE29918F5B8EC2EF(0, Local_853.f_2, 0);
				unk_0x290A57C93304EF16(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xCFE67FBB69F1C410(uLocal_415);
				unk_0x8B06B801B92CEC2D(iLocal_890, uLocal_415);
				unk_0x873418BFBF9A6780(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_890, 0) && !unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
				{
					unk_0x417BCC1ECC12E9A2(Local_423.f_3, iLocal_892);
					unk_0x5457695C257D1470(Local_423.f_3, 1);
					unk_0x77E24C0B92B4FC24(Local_423.f_3, 13, 1);
					unk_0xB785E6EFFAAD2E3C(Local_423.f_3, 100);
					unk_0xCC1ADAE00A66FF6C(Local_423.f_3, 100);
					unk_0xE81D470B804DC69A(Local_423.f_3, 105);
					unk_0x37338B7B7C4982DC(Local_423.f_3);
					unk_0x873418BFBF9A6780(&uLocal_416);
					unk_0x456121A0AAC868D4(&uLocal_416);
					unk_0x7AFB953E6654EA8F(0, 5000);
					func_328(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0x69C25A35C295DB4F(0, func_327(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0xB05C28FE95F9A2F5(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xCFE67FBB69F1C410(uLocal_416);
					unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_416);
					unk_0x873418BFBF9A6780(&uLocal_416);
					iLocal_902 = 1;
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 256);
					unk_0x4408969E7EC5C720(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0x00B5B0B68211D89B(Local_853.f_2) && !unk_0x00B5B0B68211D89B(iLocal_890))
				{
					if (func_216(Local_853.f_2, 1) < 2f || func_216(iLocal_890, 1) < 2f)
					{
						unk_0x37338B7B7C4982DC(Local_853.f_2);
						unk_0x37338B7B7C4982DC(iLocal_890);
						unk_0x0988FFC0C75637DF(Local_853.f_2, unk_0xD5A676B97920D126(), -1, 2048, 4);
						unk_0x873418BFBF9A6780(&uLocal_414);
						unk_0x456121A0AAC868D4(&uLocal_414);
						unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
						unk_0xCFE67FBB69F1C410(uLocal_414);
						unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
						unk_0x0988FFC0C75637DF(iLocal_890, unk_0xD5A676B97920D126(), -1, 2048, 4);
						unk_0x873418BFBF9A6780(&uLocal_415);
						unk_0x456121A0AAC868D4(&uLocal_415);
						unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
						unk_0xCFE67FBB69F1C410(uLocal_415);
						unk_0x8B06B801B92CEC2D(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0x00B5B0B68211D89B(Local_853.f_2))
					{
					}
					else
					{
						unk_0x37338B7B7C4982DC(Local_853.f_2);
						unk_0xBB8F1D58B7578137(Local_853.f_2, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					}
					if (unk_0x00B5B0B68211D89B(iLocal_890))
					{
					}
					else
					{
						unk_0x37338B7B7C4982DC(iLocal_890);
						unk_0xBB8F1D58B7578137(iLocal_890, unk_0xD5A676B97920D126(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_134("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
			{
				if (unk_0x1774A68441553185(Local_423.f_3, 242628503) == 1)
				{
					if (unk_0x7F56260A7B7D8FF1(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			}
			if (((!unk_0x00B5B0B68211D89B(iLocal_890) && unk_0x1F72B125B26A6238(iLocal_890)) && !unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0)) && !bLocal_908)
			{
				unk_0x0988FFC0C75637DF(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0x873418BFBF9A6780(&uLocal_414);
				unk_0x456121A0AAC868D4(&uLocal_414);
				unk_0x7AFB953E6654EA8F(0, 500);
				unk_0x290A57C93304EF16(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xBE29918F5B8EC2EF(0, Local_423.f_3, 0);
				unk_0xCFE67FBB69F1C410(uLocal_414);
				unk_0x8B06B801B92CEC2D(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0) && !unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
			{
				if (unk_0x7F56260A7B7D8FF1(Local_423.f_3) > 2)
				{
					func_237(&Local_423, 58, 1, 0, 0);
					unk_0x873418BFBF9A6780(&uLocal_416);
					unk_0x456121A0AAC868D4(&uLocal_416);
					unk_0x0565F5F2EE81A23F(0);
					unk_0x50FF381592977875(0, Local_853.f_2, 2000, 0);
					unk_0xCFE67FBB69F1C410(uLocal_416);
					unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_134("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0xB529B2A4B7C64D6D(iLocal_890, 0))
			{
				if (!unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
				{
					if (!unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
					{
						unk_0x873418BFBF9A6780(&uLocal_415);
						unk_0x456121A0AAC868D4(&uLocal_415);
						unk_0x69C25A35C295DB4F(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x50FF381592977875(0, Local_853.f_2, -1, 1);
						unk_0xCFE67FBB69F1C410(uLocal_415);
						unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_134("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_194())
			{
				if (!unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0) && !unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0))
				{
					unk_0xB05C28FE95F9A2F5(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_134("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0xB529B2A4B7C64D6D(Local_853.f_2, 0) && !unk_0xB529B2A4B7C64D6D(Local_423.f_3, 0))
			{
				Var0 = { unk_0xC086F8D75730FA3A(Local_853.f_2, 0) };
				unk_0x456121A0AAC868D4(&uLocal_416);
				unk_0xF012195D1345BDFF(0, Var0, 1000, 0, 0);
				unk_0x0B6CC5A0D5C55A80(0, 0);
				unk_0x7AFB953E6654EA8F(0, 500);
				unk_0x7C6B104B5E7A8C41(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0xCFE67FBB69F1C410(uLocal_416);
				unk_0x8B06B801B92CEC2D(Local_423.f_3, uLocal_416);
				unk_0x873418BFBF9A6780(&uLocal_416);
				unk_0x7D99F00F48D15ADB(Local_423.f_3, 1);
				iLocal_905 = 1;
			}
			break;
	}
}

Vector3 func_327(int iParam0)
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

void func_328(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			Var0 = { unk_0x7E140C583F91AE2B(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x7E140C583F91AE2B(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x8E92CDAEB8357ABD(Var0, Param1, 0) < unk_0x8E92CDAEB8357ABD(Var3, Param1, 0) && unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x458C747DC544B598(0, uParam0->f_4, 131584);
			}
			else if (unk_0x8E92CDAEB8357ABD(Var0, Param1, 0) >= unk_0x8E92CDAEB8357ABD(Var3, Param1, 0) && unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x458C747DC544B598(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x458C747DC544B598(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_329(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_337(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_330(sParam2, iParam3, 0);
}

int func_330(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_143();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_336(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_335();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_334();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_333())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_332();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_331();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_143();
	}
	return 0;
}

void func_331()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_332()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_333()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_334()
{
	if (func_79(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_95();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_335()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_336(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_338(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_142();
	func_439(2);
	Var0 = { func_345() };
	if ((!unk_0xC55B9553B3EDADE9(&Var0) && func_194()) && !unk_0xCC257DA11A122B5F(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x59C0D363E5A5B548();
		unk_0x04890EB0282525A5(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			if (!func_206(uParam0))
			{
				if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x4C033F9F1FADEA09(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x4C033F9F1FADEA09(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xEBA40DFF7CCE3511(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x4C033F9F1FADEA09(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_298(uParam0, 3, 0, 0);
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
				func_343(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_206(uParam0))
			{
				if (unk_0x0700B6EAA7894D54(uParam0->f_4))
				{
					func_340(uParam0, 4096, 0);
				}
				else
				{
					func_340(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_343(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_343(uParam0, &Var0);
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
				func_343(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_343(uParam0, &Var0);
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_343(uParam0, &Var0);
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
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
				func_343(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_340(uParam0, 0, 0);
			func_343(uParam0, &Var0);
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
				func_343(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_343(uParam0, &Var0);
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
				func_343(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_339(&Var0);
			func_329(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_343(uParam0, &Var0);
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
					func_343(uParam0, &Var0);
				}
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_257(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_298(uParam0, 3, 0f, 1);
	}
}

void func_339(char* sParam0)
{
	switch (func_3(unk_0xD5A676B97920D126()))
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

void func_340(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		unk_0x5457695C257D1470(uParam0->f_3, 0);
		unk_0x3C05FE2296BF5F53(uParam0->f_3);
		unk_0x738326127C161284(uParam0->f_3, 3, 0);
		unk_0x77E24C0B92B4FC24(uParam0->f_3, 17, 1);
		unk_0x37338B7B7C4982DC(uParam0->f_3);
		if ((func_50(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_342(uParam0->f_29)) && !bParam2)
		{
			func_341(uParam0);
		}
		else
		{
			unk_0x738326127C161284(uParam0->f_3, 1024, 1);
			unk_0x738326127C161284(uParam0->f_3, 131072, 1);
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0xE9148EE8AA200B60(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xEBF1276539CCAA92(0, 1193033728, 0);
			}
			else
			{
				unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 1000f, -1, 0, 0);
			}
			unk_0x1EDFE8C8C6BB7CF0(0, 0);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(uParam0->f_3, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
		unk_0x7D99F00F48D15ADB(uParam0->f_3, 1);
	}
}

void func_341(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x99569FEC2425586D(uParam0->f_3, 84.9058f);
				unk_0x7D99F00F48D15ADB(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x99569FEC2425586D(uParam0->f_3, 68.3138f);
				unk_0x7D99F00F48D15ADB(uParam0->f_3, 1);
			}
			else
			{
				unk_0xEBF1276539CCAA92(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x37338B7B7C4982DC(uParam0->f_3);
			unk_0x873418BFBF9A6780(&uVar0);
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0xE9148EE8AA200B60(0, 0, 0);
			unk_0x1EDFE8C8C6BB7CF0(0, 0);
			unk_0x1D2CBA8F2F00D745(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x6BBAF8E5535EE688(0, 1);
				unk_0x1D2CBA8F2F00D745(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xA7D2EDC881768869(0, 151.7794f, 0);
				unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xD14D1FD0ED7FA7A1(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xD14D1FD0ED7FA7A1(0, uParam0->f_29, 15f, 20000);
				unk_0xEBF1276539CCAA92(0, 1193033728, 0);
			}
			else
			{
				unk_0x290A57C93304EF16(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x9F6C85320868987F(uParam0->f_29, 15f, 1))
			{
				unk_0xD14D1FD0ED7FA7A1(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xEBF1276539CCAA92(0, 1193033728, 0);
			}
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(uParam0->f_3, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
		unk_0x7D99F00F48D15ADB(uParam0->f_3, 1);
	}
}

int func_342(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_343(var uParam0, char* sParam1)
{
	if (func_344(uParam0))
	{
		func_329(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_344(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (func_48(unk_0xD5A676B97920D126(), uParam0->f_3, 1) < 40f && !unk_0x27A556D1AF39812E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_345()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xF29A0451BC42EF27();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_346(var uParam0)
{
	return uParam0->f_118;
}

void func_347()
{
	func_377(&Local_423);
	if (func_376(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_375(&Local_423))
					{
						if (func_374("TAXI_OBJ_FTC1") || unk_0x6901135DDCC4904D(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_181(&Local_423) != 10)
						{
							func_237(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_181(&Local_423) > 10 && func_181(&Local_423) != 15) && !func_375(&Local_423))
				{
					func_237(&Local_423, 15, 1, 0, 0);
					func_187(&Local_423, 7);
				}
				break;
			}
	}
	func_348(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_348(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_356(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_172(uParam0, 2))
	{
		if (func_355(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x84A97C70FFDEC0C8() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_354(uParam0))
				{
					uParam2->f_7 = { func_353(uParam1) };
					func_329(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_194())
				{
					uParam2->f_13 = { func_240() };
					if (unk_0xCC257DA11A122B5F(&(uParam2->f_13), &(uParam2->f_7)))
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
					func_351(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_210(uParam0))
				{
					if (func_194())
					{
						func_298(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_350() };
						if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_194())
				{
					uParam2->f_19 = { func_345() };
				}
				else
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_351(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_172(uParam0, 14) && !func_194()) && !func_210(uParam0)) && func_107(uParam0, 18) > 1f)
				{
					func_298(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_194())
				{
					if (func_107(uParam0, 18) > 1f)
					{
						if (!unk_0xC55B9553B3EDADE9(&(uParam2->f_1)))
						{
							func_349(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_194())
				{
					func_65(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_351(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_337(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_330(sParam2, iParam4, 0);
}

struct<6> func_350()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xF29A0451BC42EF27();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xA6AD4206830E160C(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xA6AD4206830E160C(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_351(var uParam0)
{
	int iVar0;
	
	iVar0 = func_352(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_64(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_139(), 24);
	}
}

int func_352(var uParam0)
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

struct<6> func_353(var uParam0)
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

int func_354(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_212("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_212("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_212("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_212("TX_OBJ_GYB_DO", 0, 0) || func_212("TAXI_OBJ_GYB", 0, 0)) || func_212("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_212("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_212("TX_OBJ_CYI_DO", 0, 0) || func_212("TAXI_OBJ_CYI_01", 0, 0)) || func_212("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_212("TX_OBJ_GYN_DO", 0, 0) || func_212("TAXI_OBJ_GYN", 0, 0)) || func_212("TAXI_OBJ_GYN_TG", 0, 0)) || func_212("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_212("TAXI_OBJ_CC1", 0, 0) || func_212("TAXI_OBJ_CC2", 0, 0)) || func_212("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_212("TAXI_OBJ_FTC1", 0, 0) || func_212("TAXI_OBJ_FTC2", 0, 0)) || func_212("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_212("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_212("TAXI_OBJ_GETRUN", 0, 0) || func_212("TAXI_OBJ_DRIVE", 0, 0)) || func_212("TAXI_OBJ_RETURN", 0, 0)) || func_212("TAXI_OBJ_POL", 0, 0)) || func_212("TAXI_OBJ_RUNOUT", 0, 0)) || func_212("TAXI_OBJ_POL", 0, 0));
}

int func_355(var uParam0)
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

void func_356(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_354(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_172(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_181(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_371(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_194())
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
						func_370(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_367(uParam0, Var0, func_369(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_298(uParam0, 16, 0, 0);
					func_262(uParam0, 0, 0);
				}
				func_221(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_107(uParam0, 16) > 1f)
				{
					func_222(1);
					if (uParam0->f_411 == 9)
					{
						func_261("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_261("TAXI_VIP_RETURN", 7500, 1);
					}
					func_298(uParam0, 16, 0, 0);
					func_262(uParam0, 0, 0);
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
					func_370(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_107(uParam0, 16) > func_122(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_194()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_181(uParam0))
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
				func_370(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_371(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_329(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_237(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_298(uParam0, 16, 0, 0);
				func_237(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_373(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_370(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_298(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_261("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_261("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x6901135DDCC4904D(uParam0->f_9))
					{
						uParam0->f_9 = func_121(uParam0->f_17, 1);
					}
					else if (unk_0xDCA5942DC912553C(uParam0->f_9) == 0)
					{
						unk_0x97C445677A852D45(uParam0->f_9, 255);
						unk_0x4B55FF1D49C3A70D(uParam0->f_9, uParam0->f_17);
						unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
					}
				}
				func_237(uParam0, 10, 1, 0, 0);
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
				func_239(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_257(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x6901135DDCC4904D(uParam0->f_9))
					{
						uParam0->f_9 = func_121(uParam0->f_17, 1);
					}
					else if (unk_0xDCA5942DC912553C(uParam0->f_9) == 0)
					{
						unk_0x97C445677A852D45(uParam0->f_9, 255);
						unk_0x4B55FF1D49C3A70D(uParam0->f_9, uParam0->f_17);
						unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
					}
				}
				func_237(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_366(uParam0, 33554432, Var0, "", 1, 8);
				func_298(uParam0, 16, 0, 0);
				func_237(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_194())
				{
					func_365(uParam0, 0);
					func_64(&(uParam0->f_44), 4);
					func_298(uParam0, 16, 0, 0);
					func_237(uParam0, 13, 0, 0, 0);
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
				func_239(&Var0);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
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
						func_239(&Var0);
					}
					func_363(Var0, uParam1);
					func_64(&(uParam0->f_81), 67108864);
					func_298(uParam0, 16, 0, 0);
					func_298(uParam0, 11, 0, 0);
					func_262(uParam0, 0, 0);
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
							func_239(&Var0);
						}
					}
					func_363(Var0, uParam1);
					func_298(uParam0, 11, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_262(uParam0, 0, 0);
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
					func_239(&Var0);
				}
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
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
				func_239(&Var0);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
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
				func_239(&Var0);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_239(&Var0);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
				func_64(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 1, 0, 8);
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
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
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
					func_362(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_362(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_363(Var0, uParam1);
				func_371(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_262(uParam0, 0, 0);
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
					func_362(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_362(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_363(Var0, uParam1);
				func_371(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_262(uParam0, 0, 0);
				break;
			
			case 12:
				func_261("TAXI_OBJ_GYB", 3500, 1);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_261("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_261("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_261("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
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
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_261("TAXI_OBJ_CYI_01", 7500, 1);
					func_64(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_239(&Var0);
				func_363(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_239(&Var0);
				func_363(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_239(&Var0);
				func_363(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 33:
				func_261("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_107(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_239(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_363(Var0, uParam1);
						}
						else
						{
							func_370(uParam0, &Var0, 0, 0, 8);
						}
						func_64(&(uParam0->f_82), 8192);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_262(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_239(&Var0);
					func_370(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_239(&Var0);
					func_370(uParam0, &Var0, 0, 0, 8);
					func_64(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 46, 1, 0, 0);
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
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_262(uParam0, 0, 0);
				break;
			
			case 139:
				func_261("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_237(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x7BC26452241AC7C9(0, 120);
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
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x7BC26452241AC7C9(0, 100);
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
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_261("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_262(uParam0, 0, 0);
				func_237(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_194())
				{
					func_261("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_262(uParam0, 0, 0);
					func_237(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_261("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_262(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_361(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_361(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_371(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
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
				func_370(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_371(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_262(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_371(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_371(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_371(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_361(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_361(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_361(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_371(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_360(uParam0))
				{
					func_367(uParam0, Var0, func_369(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_373(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_329(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_373(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_373(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_371(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_298(uParam0, 16, 0, 0);
				}
				func_262(uParam0, 0, 0);
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
						func_239(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_239(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_239(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_298(uParam0, 16, 0, 0);
				}
				func_371(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_366(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_366(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_371(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_366(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_366(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_371(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_359(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_359(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_359(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_371(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_262(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_373(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_371(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_298(uParam0, 16, 0, 0);
					func_262(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_371(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_371(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_366(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_366(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_262(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_360(uParam0))
				{
					func_367(uParam0, Var0, func_369(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_298(uParam0, 16, 0, 0);
				}
				func_371(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_194())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_370(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_367(uParam0, Var0, func_369(uParam0, 65));
					func_262(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_194())
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
					func_370(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_367(uParam0, Var0, func_369(uParam0, 66));
					func_262(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_194())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								func_371(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								func_371(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_373(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_371(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_298(uParam0, 16, 0, 0);
								func_262(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_370(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_262(uParam0, 0, 0);
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
									func_239(&Var0);
									func_370(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_262(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_370(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_237(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_371(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_359(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_359(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_359(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_262(uParam0, 0, 0);
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
				func_373(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_371(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_360(uParam0))
				{
					func_367(uParam0, Var0, func_369(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_257(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_358(uParam0, Var0, 8);
				}
				func_371(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_64(&(uParam0->f_83), 1024);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_64(&(uParam0->f_83), 2048);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_64(&(uParam0->f_83), 4096);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_239(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_262(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_359(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_359(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_262(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_371(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 52, 1, 0, 0);
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
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_257(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_360(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_370(uParam0, &Var0, 0, 0, 8);
						func_237(uParam0, 52, 1, 0, 0);
						func_298(uParam0, 16, 0, 0);
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
						func_370(uParam0, &Var0, 0, 0, 8);
						func_298(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_373(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_262(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_371(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) >= 1)
				{
					func_261("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_262(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_366(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_366(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_366(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_371(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_357(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_357(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_371(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 100:
				func_261("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_262(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_239(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_239(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_370(uParam0, &Var0, 0, 0, 8);
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
					func_239(&Var0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_370(uParam0, &Var0, 0, 0, 8);
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
						func_239(&Var0);
						func_363(Var0, uParam1);
						func_64(&(uParam0->f_82), 65536);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_262(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_107(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_239(&Var0);
						func_363(Var0, uParam1);
						func_64(&(uParam0->f_82), 131072);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_262(uParam0, 0, 0);
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
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_373(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_239(&Var0);
					func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_370(uParam0, &Var0, 0, 0, 8);
				}
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_363(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_373(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_372(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_237(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_64(&(uParam0->f_81), 2097152);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_239(&Var0);
				func_363(Var0, uParam1);
				func_64(&(uParam0->f_81), 67108864);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_366(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_257(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_237(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_366(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_237(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_261("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_262(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_366(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
						{
							func_257(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_366(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_237(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_261("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_262(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_366(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_262(uParam0, 0, 0);
				break;
			
			case 88:
				func_261("TAXI_TIEFLEE", 7500, 1);
				func_262(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_261("TAXI_OBJ_CYI_1B", 7500, 1);
					func_64(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_262(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_239(&Var0);
				func_370(uParam0, &Var0, 0, 0, 8);
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
				func_370(uParam0, &Var0, 0, 0, 8);
				func_262(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_370(uParam0, &Var0, 0, 0, 8);
				func_262(uParam0, 0, 0);
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
				func_370(uParam0, &Var0, 0, 0, 8);
				func_262(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_370(uParam0, &Var0, 1, 0, 8);
				func_237(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_261("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_237(uParam0, 0, 0, 0, 0);
				func_262(uParam0, 0, 0);
				break;
			}
	}
}

void func_357(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_239(&Param2);
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_358(var uParam0, struct<6> Param1, int iParam7)
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
		StringIntConCat(&cVar0, unk_0x7BC26452241AC7C9(1, 3), 24);
	}
	func_372(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_298(uParam0, 16, 0, 0);
}

void func_359(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_64(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_239(&Param2);
		}
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_360(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_361(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_64(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_362(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_278(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_239(sParam2);
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

void func_363(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_364(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_64(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_364(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xC55B9553B3EDADE9(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_365(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_261("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_261("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_261("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_261("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_261("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_261("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_261("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_261("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_261("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_261("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_261("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_261("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_261("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_366(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_64(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_239(&Param2);
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_367(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_298(uParam0, 16, 0, 0);
	func_298(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
	{
		unk_0x1AED12AE709D8F50(uParam0->f_3, &cParam1, func_368(uParam0));
	}
}

char* func_368(var uParam0)
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

char* func_369(var uParam0, int iParam1)
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

int func_370(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_298(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_298(uParam0, 17, 0f, 1);
	}
	func_262(uParam0, iParam2, 0);
	return func_329(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_371(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_372(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_337(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_330(sParam2, iParam4, 0);
}

void func_373(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_278(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_239(sParam2);
				}
				else
				{
					func_239(sParam2);
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

int func_374(char* sParam0)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (func_212(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_375(var uParam0)
{
	if (func_194())
	{
		return 1;
	}
	if (func_172(uParam0, 17))
	{
		return 1;
	}
	if (func_172(uParam0, 14))
	{
		return 1;
	}
	if (func_210(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_376(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_172(uParam0, 9));
}

void func_377(var uParam0)
{
	if (func_172(uParam0, 17))
	{
		if (!func_172(uParam0, 14))
		{
			if (!func_210(uParam0))
			{
				if (!func_194())
				{
					func_191(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_378(var uParam0)
{
	return uParam0->f_117;
}

void func_379(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xC55B9553B3EDADE9(&(uParam0->f_124)) && func_194())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_194())
				{
					StringCopy(&(uParam0->f_124), func_139(), 24);
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

void func_380(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x7887B64A08364778(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_278(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_278(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_278(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_65(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x84A97C70FFDEC0C8();
							}
						}
						else
						{
							func_20(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_278(Local_343.f_1[iVar0 /*4*/], 4) && !func_278(Local_343.f_1[iVar0 /*4*/], 8))
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
			func_338(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_381(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_172(uParam0, 27))
	{
		func_187(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_107(uParam0, 27) > 5f)
	{
		if (func_408(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_298(uParam0, 27, 0, 0);
			func_298(uParam0, 10, 0, 0);
			func_406(uParam0, &uVar0, uParam1);
		}
		func_403(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_382(uParam0);
	}
	if ((((!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()) && (unk_0xE7E9CC62D1C4C0A8(*uParam0) && !unk_0x9FB26939A9557171(*uParam0))) && (unk_0xE7E9CC62D1C4C0A8(uParam0->f_1) && !unk_0x9FB26939A9557171(uParam0->f_1))) && !unk_0xE7C48EF8F50001B1()) && !func_194())
	{
		if (func_107(uParam0, 26) > 10f)
		{
			func_191(uParam0, 26, 0);
			unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
		}
	}
	else if (func_172(uParam0, 26))
	{
		func_191(uParam0, 26, 0);
	}
	return 0;
}

void func_382(var uParam0)
{
	if (!func_402(uParam0->f_429))
	{
		uParam0->f_429 = func_401();
		func_392(&(uParam0->f_429), 0, 0, unk_0x7BC26452241AC7C9(4, 7), 0, 0, 0);
	}
	else if (func_383(uParam0->f_429))
	{
		func_338(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_383(int iParam0)
{
	return func_384(func_401(), iParam0);
}

int func_384(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_402(iParam1) || !func_402(iParam0))
	{
		return 1;
	}
	iVar0 = func_390(iParam0);
	iVar1 = func_390(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_385(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_386(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_387(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_388(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_389(int iParam0)
{
	return iParam0 & 15;
}

var func_390(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_391(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_391(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_392(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_390(*uParam0);
	iVar1 = func_389(*uParam0);
	iVar2 = func_388(*uParam0);
	iVar3 = func_387(*uParam0);
	iVar4 = func_386(*uParam0);
	iVar5 = func_385(*uParam0);
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
	iVar6 = func_400(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_400(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_393(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_393(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_399(uParam0, iParam1);
	func_398(uParam0, iParam2);
	func_397(uParam0, iParam3);
	func_396(uParam0, iParam5);
	func_395(uParam0, iParam4);
	func_394(uParam0, iParam6);
}

void func_394(var uParam0, int iParam1)
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

void func_395(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_389(*uParam0);
	iVar1 = func_390(*uParam0);
	if (iParam1 < 1 || iParam1 > func_400(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_396(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_397(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_398(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_399(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_400(int iParam0, int iParam1)
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

int func_401()
{
	var uVar0;
	
	func_399(&uVar0, unk_0xABA05E2C283C3D5F());
	func_398(&uVar0, unk_0xF72CA3D5BA977203());
	func_397(&uVar0, unk_0x83D6515EE2CBF18C());
	func_395(&uVar0, unk_0x3D13C79BF80EB767());
	func_396(&uVar0, unk_0xA93FEF8677A8AF58());
	func_394(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

int func_402(int iParam0)
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
	iVar0 = func_385(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_386(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_387(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_390(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_389(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_388(iParam0);
	if (iVar5 < 1 || iVar5 > func_400(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_403(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_405()) && !func_190(uParam0)) || ((uParam0->f_411 != 9 && func_266(uParam0, 1)) && !func_190(uParam0)))
		{
			uVar0 = func_404(uParam0->f_4);
			unk_0x9E5138EA66A3E119(&uVar0);
			uParam0->f_4 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			unk_0xC53606C390BE2727(uParam0->f_4, 1, 0);
			func_225(uParam0);
			func_217(uParam0, 0);
		}
	}
}

var func_404(var uParam0)
{
	return uParam0;
}

int func_405()
{
	int iVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) == unk_0xD5A676B97920D126())
				{
					if (unk_0x960985BE189C5A3B(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_406(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_407(uParam0, 0, 1))
			{
				func_338(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_407(uParam0, 0, 4))
			{
				func_338(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_407(uParam0, 0, 8))
			{
				func_338(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_407(uParam0, 1, 1))
			{
				func_338(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_407(uParam0, 0, 1))
			{
				func_338(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_206(uParam0))
			{
				func_338(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_407(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (!unk_0x27A556D1AF39812E(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_237(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_237(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_408(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xD5A676B97920D126();
	if (!unk_0xB529B2A4B7C64D6D(iVar0, 0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_414(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_412(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_411(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_409(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_409(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7887B64A08364778(iParam0))
	{
		if (iParam7 && unk_0x7D720C677145C91C(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0xB38A470B669AC00B(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0xB38A470B669AC00B(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x80AA649904BB5788();
		if (!unk_0xB529B2A4B7C64D6D(uVar0, 0))
		{
			if (unk_0x7D720C677145C91C(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x80AA649904BB5788();
		if (!unk_0xB529B2A4B7C64D6D(uVar1, 0))
		{
			if (unk_0x7D720C677145C91C(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			if (unk_0x63F7D2743457E11D(iParam0))
			{
				if (unk_0x9A6ACBD3FDD479D0(iParam0) == unk_0xD5A676B97920D126())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
		{
			if (unk_0x1AAFFE4111587B35(iParam0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7465CE9EA67018C5(unk_0xD5A676B97920D126()))
	{
		if (unk_0x2D6C02EAECE24FAA(iParam0))
		{
			return 1;
		}
	}
	if (func_410(unk_0xD5A676B97920D126(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9B0C8A2FC23E64AB(iParam0) && func_216(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			if (unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), unk_0x0DBD8FE531FD620D(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), iParam0))
		{
			return 1;
		}
		if (!unk_0xB529B2A4B7C64D6D(uParam1, 0))
		{
			if (unk_0x7D720C677145C91C(iParam1, unk_0xD5A676B97920D126(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2F29BEC857E6C0AC(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x515E262CBF491958(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iParam0, 1), unk_0xC086F8D75730FA3A(iParam1, 1)) < 2.5f)
			{
				if (unk_0x205B4FC17ACAF4C8(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_411(int iParam0, int iParam1, var uParam2)
{
	if (unk_0xB3EED8E53275CA90(uParam0, 4))
	{
		if (unk_0x515E262CBF491958(uParam0) && !unk_0xAB3AA0F867F67480(iParam0))
		{
			if (unk_0x1AAFFE4111587B35(uParam1, unk_0xC086F8D75730FA3A(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_412(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	if (unk_0x1DEB1994A3C25E35(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x7DA44B08BE134A13(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0xB3EED8E53275CA90(uParam0, 2))
	{
		if (unk_0x515E262CBF491958(uParam0))
		{
			if (unk_0x1AAFFE4111587B35(iParam1, unk_0xC086F8D75730FA3A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x205B4FC17ACAF4C8(unk_0x36B702E1B6552B8A(iParam1), iParam0, 120f) && unk_0xE0BF2ADAFF3231B4(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0x36B702E1B6552B8A(iParam1), 0))
			{
				iVar3 = unk_0x0DBD8FE531FD620D(unk_0x36B702E1B6552B8A(iParam1), 0);
			}
			if (unk_0xCF3CEB67F1DDCB15(iParam0) || func_413(iVar3))
			{
				if (unk_0x1AAFFE4111587B35(iParam1, unk_0xC086F8D75730FA3A(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x205B4FC17ACAF4C8(unk_0x36B702E1B6552B8A(iParam1), iParam0, 120f) && unk_0xE0BF2ADAFF3231B4(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x4B16FF7207D89FDF((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (unk_0x98BE504E8B389665(iParam0, -1, 0) != 0)
			{
				if (unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_48(unk_0xD5A676B97920D126(), iParam0, 1) < 40f)
						{
							if (unk_0xD5E68CECA2E10B56(unk_0xFB6B3EEFAB2DD12C(), &uVar1))
							{
								if ((unk_0x8041FE602D4689B1(uVar1) && unk_0x9A1EB82BF4C4844D(iVar1) == iParam0) || (unk_0x6DA4D1391A7B813F(iVar1) && unk_0x36B702E1B6552B8A(iVar1) == unk_0x98BE504E8B389665(iParam0, -1, 0)))
								{
									if ((unk_0x1A77C0702D82B43D(unk_0xD5A676B97920D126()) && unk_0xF334707DE9C8DE80(0, 24)) || (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0xF334707DE9C8DE80(0, 69)))
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

int func_414(int iParam0, var uParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
		{
			if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iParam0) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iParam0))
			{
				if (unk_0x205B4FC17ACAF4C8(iParam0, unk_0xD5A676B97920D126(), 90f))
				{
					if (func_216(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x84A97C70FFDEC0C8();
						}
						else if ((unk_0x84A97C70FFDEC0C8() - uParam1->f_1) > uParam1->f_3)
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

void func_415(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
		{
			if (func_50(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xBCDF9E3086B4229C(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_64(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_416()
{
	func_417(&Local_423);
	func_439(2);
	func_435();
}

void func_417(var uParam0)
{
	func_51(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_439(2);
	}
}

int func_418(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_194() && func_107(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
			{
				if (unk_0x04D83291EB9DE51D(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_278(uParam0->f_85, 32))
					{
						if (!unk_0x0700B6EAA7894D54(uParam0->f_4))
						{
							func_340(uParam0, 4160, 0);
						}
						else
						{
							func_340(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_340(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_340(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_340(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
	{
	}
	return 0;
}

void func_419(var uParam0)
{
	if (unk_0x6901135DDCC4904D(uParam0->f_8))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_8));
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_9))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_9));
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_10))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_10));
	}
}

int func_420(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_421()
{
	func_424(&Local_423, 8);
	Local_423.f_410 = 0;
	func_423(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { Local_925 };
	Local_423.f_34 = 95.93f;
	func_422(&Local_423, &Local_853);
	Local_853.f_0 = joaat("s_m_m_doctor_01");
	Local_853.f_1 = joaat("bison");
}

void func_422(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_101652.f_18040.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_423(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_424(var uParam0, int iParam1)
{
	func_434(1);
	func_227();
	func_6(&(uParam0->f_244));
	func_433(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_101652.f_18040, 4))
	{
		func_64(&(Global_101652.f_18040), 4);
	}
	func_428(uParam0);
	func_426(uParam0);
	unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	uParam0->f_102 = (func_425(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x68A99AC5778ED123("TAXI", 2);
}

int func_425(int iParam0)
{
	return Global_101652.f_18040.f_39[iParam0];
}

void func_426(var uParam0)
{
	switch (func_63(uParam0))
	{
		case 0:
			func_427(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_427(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_427(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_427(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_427(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_427(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_427(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_427(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_427(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_427(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_427(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_428(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_432(uParam0, 3);
			func_431(uParam0, 14);
			break;
		
		case 1:
			func_432(uParam0, 14);
			func_431(uParam0, 8);
			break;
		
		case 2:
			func_432(uParam0, 8);
			func_431(uParam0, 7);
			break;
		
		case 3:
			func_432(uParam0, 15);
			func_431(uParam0, 6);
			break;
		
		case 4:
			func_432(uParam0, 0);
			func_431(uParam0, 3);
			break;
		
		case 5:
			func_432(uParam0, 6);
			func_431(uParam0, 7);
			break;
		
		case 6:
			func_432(uParam0, 8);
			func_431(uParam0, 15);
			break;
		
		case 7:
			func_432(uParam0, 8);
			func_431(uParam0, 14);
			break;
		
		case 8:
			func_432(uParam0, 7);
			func_431(uParam0, 15);
			break;
		
		case 9:
			func_432(uParam0, unk_0x7BC26452241AC7C9(0, 17));
			iVar0 = func_430((uParam0->f_418.f_2 + unk_0x7BC26452241AC7C9(1, 17)), 0, 16);
			func_431(uParam0, iVar0);
			func_429(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_429(var uParam0)
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

int func_430(int iParam0, int iParam1, int iParam2)
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

void func_431(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_432(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_433(var uParam0)
{
	uParam0->f_2 = unk_0xD5A676B97920D126();
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
	func_191(uParam0, 32, 0);
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100708, unk_0x0FBCE11007AF301F(), 24);
		Global_100702 = 1;
	}
	else
	{
		StringCopy(&Global_100708, "NULL", 24);
		Global_100702 = 0;
	}
}

void func_435()
{
	unk_0xE6C975AE756267A4(Local_928, Local_931, 1, 1);
	unk_0xE6C975AE756267A4(Local_946, Local_949, 1, 1);
	func_131(Local_958, 60f, 0);
	func_131(Local_961, 60f, 0);
	unk_0x6055506B2BE3690D();
	unk_0x1AAA727AD9762D22(uLocal_894, 0);
	unk_0xA402A00DD48EB3E9(iLocal_893);
	unk_0xA402A00DD48EB3E9(iLocal_892);
	unk_0xD0DA5B2F3C42D97E(&cLocal_976);
	func_234(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_438();
	func_437();
	func_436();
	unk_0xFA03BA297FE81584(Local_853.f_1, 0);
	func_148(&uLocal_45, 0, 0);
	unk_0x01DFCA3621B68C4A();
}

void func_436()
{
	unk_0x8188DB74546FF484(iLocal_887);
	unk_0x6989DACCC7A558AE("MOVE_DUCK_FOR_COVER");
	unk_0x6989DACCC7A558AE(&cLocal_980);
	unk_0x6989DACCC7A558AE(&cLocal_996);
	unk_0x6989DACCC7A558AE(&cLocal_1012);
	unk_0x6989DACCC7A558AE(&cLocal_1028);
}

void func_437()
{
	unk_0x8188DB74546FF484(Local_853.f_0);
	unk_0x8188DB74546FF484(Local_853.f_1);
	unk_0x8188DB74546FF484(iLocal_888);
	unk_0x8188DB74546FF484(iLocal_889);
	unk_0xD0DA5B2F3C42D97E(&cLocal_976);
	unk_0x6989DACCC7A558AE("veh@truck@ds@base");
}

void func_438()
{
	unk_0x8188DB74546FF484(iLocal_886);
	unk_0x6989DACCC7A558AE("gestures@m@standing@casual");
}

void func_439(int iParam0)
{
	Global_100364.f_22 = iParam0;
}

