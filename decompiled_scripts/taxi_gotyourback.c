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
	struct<414> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	struct<33> Local_839 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 4;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	struct<38> Local_881 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	struct<3> Local_925[1];
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935[3] = { 0, 0, 0 };
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941[2] = { 0, 0 };
	int iLocal_944 = 0;
	var uLocal_945 = 0;
	int iLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	bool bLocal_971 = 0;
	int iLocal_972 = 0;
	bool bLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	struct<3> Local_978 = { 0, 0, 0 } ;
	struct<3> Local_981 = { 0, 0, 0 } ;
	struct<3> Local_984 = { 0, 0, 0 } ;
	struct<3> Local_987 = { 0, 0, 0 } ;
	struct<3> Local_990 = { 0, 0, 0 } ;
	struct<3> Local_993 = { 0, 0, 0 } ;
	struct<3> Local_996 = { 0, 0, 0 } ;
	struct<3> Local_999 = { 0, 0, 0 } ;
	struct<3> Local_1002 = { 0, 0, 0 } ;
	struct<3> Local_1005 = { 0, 0, 0 } ;
	char* sLocal_1008 = NULL;
	char cLocal_1009[24] = "";
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	char cLocal_1015[24] = "";
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	struct<6> Local_1021 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	bool bLocal_1033 = 0;
	struct<28> Local_1034 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 5;
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
	var uLocal_1107 = 1097859072;
	var uLocal_1108 = 1500;
	var uLocal_1109 = 45;
	var uLocal_1110 = 1103626240;
	var uLocal_1111 = 5;
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
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
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
	iLocal_929 = joaat("a_m_m_farmer_01");
	iLocal_930 = joaat("prop_box_wood04a");
	iLocal_931 = joaat("prop_cardbordbox_03a");
	iLocal_932 = joaat("prop_barrel_exp_01a");
	iLocal_950 = 1;
	iLocal_954 = 112;
	Local_978 = { 11.8607f, -1123.48f, 27.6801f };
	Local_981 = { 11.8607f, -1123.48f, 27.6801f };
	Local_984 = { 144.3291f, -3352.773f, 3.6651f };
	Local_987 = { 311.9527f, -3305.613f, 10.6651f };
	Local_990 = { 206.636f, -3322.673f, 4.6339f };
	Local_993 = { 0f, 0f, 24f };
	Local_996 = { 208.786f, -3319.823f, 4.6339f };
	Local_999 = { 0f, 0f, 47f };
	Local_1002 = { 199.5188f, -3326.201f, 4.78716f };
	Local_1005 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_1008 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_1009, "txm12_deal1_7", 24);
	StringCopy(&cLocal_1015, "txm12_deal1_7", 24);
	if (unk_0x96CFB880BAC634CE(67))
	{
		func_435(2);
		func_433();
	}
	unk_0x925970A93719CADE(1);
	func_417();
	Local_409.f_102 = 1;
	while (true)
	{
		if (unk_0xFC8BFE4B41177C22(Local_409.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_409);
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
	if (func_416(&Local_409))
	{
		func_415(&Local_409);
		if (func_414(&Local_409, 0))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_409);
		if (Local_409.f_410 >= 9)
		{
			unk_0x0A0A06C514052E80(0);
			func_409();
		}
		func_375(&Local_409, &uLocal_1105);
		if (Local_409.f_410 < 22)
		{
			func_374(&Local_409);
		}
		func_373(&Local_409, &uLocal_958, 0);
		if (Local_409.f_410 > 5 && !BitTest(uLocal_959, 0))
		{
			Local_409.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 0);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_372(&Local_409))
			{
				func_339();
			}
			else
			{
				func_330(&Local_409, "Taxi Not Driveable", func_338(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_306(&Local_409, 0, 1);
		}
		if (unk_0xFC8BFE4B41177C22(Local_409.f_3))
		{
			if (unk_0x1C2F771CDC87A3A5(Local_409.f_3, 0))
			{
				if (!func_305(&Local_409, 0))
				{
					func_304(&Local_409, 0);
				}
				if (Local_409.f_410 >= 22 || iLocal_933 >= 1)
				{
					iLocal_968 = 1;
				}
				func_303(&(Local_839.f_3));
				func_303(&(Local_881.f_3));
				func_302(&uLocal_941);
				func_330(&Local_409, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_299();
				func_298(&Local_409, 16, 4f, 0);
				func_296(&Local_409, Local_978, Local_981, "TaxiWalter", iLocal_929, 202f, 35f);
				func_294(&Local_409);
				func_293(&Local_409, 1);
				break;
			
			case 1:
				if (func_291())
				{
					func_290();
					func_289(&(Local_925[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_288(&Local_409, &Local_925);
					func_268();
					func_267(&Local_409);
					func_293(&Local_409, 2);
				}
				break;
			
			case 2:
				Local_409.f_14 = { Local_978 };
				Local_409.f_17 = { Local_839 };
				func_293(&Local_409, 3);
				break;
			
			case 3:
				if (func_260(&Local_409, 1))
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_409.f_3, 0))
					{
						unk_0xD1C578C204015E1F(Local_409.f_3, 3, 0, 0, 0);
						unk_0xD1C578C204015E1F(Local_409.f_3, 4, 0, 2, 0);
						unk_0xD1C578C204015E1F(Local_409.f_3, 0, 0, 2, 0);
					}
					func_259(&Local_409, 1, 0);
					unk_0xD414C47AFF81382A(1, iLocal_923, Local_409.f_413);
					unk_0xD414C47AFF81382A(1, Local_409.f_413, iLocal_923);
					unk_0x3F58BFCF656F0DF1(Local_409.f_3, 0);
					func_293(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_233(&Local_409, 0, 1109393408))
				{
					func_293(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_232(&Local_409))
				{
					func_228(&Local_409, 9, 1, 0, 0);
					func_227(&Local_409);
					func_293(&Local_409, 7);
				}
				if (unk_0xD9F5E1FEFD1329E4(Local_409.f_4, 0))
				{
					if (!unk_0xCECDBB848D53DEB2(Local_409.f_2, Local_409.f_4, 0))
					{
						func_225(&Local_409);
						func_293(&Local_409, 5);
					}
				}
				break;
			
			case 7:
				if (BitTest(uLocal_959, 0))
				{
					func_224();
					func_293(&Local_409, 9);
				}
				break;
			
			case 9:
				func_208();
				if ((func_207(Local_409.f_4, Local_409.f_17, 1) < 675f && !Local_409.f_140) && !iLocal_966)
				{
					unk_0xA63572E348CC4CFB(Local_984, Local_987, 0, 1);
					unk_0x89C4F1335B4A6633(Local_984, Local_987);
					uLocal_947 = unk_0xA7B0B03284E7503C(Local_984, Local_987, 0, 1, 1, 1);
					unk_0x55F7AC4B2B875901(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_206(&Local_409);
					func_204(&uLocal_1064);
					func_203(&Local_1034, 3, 0);
					func_228(&Local_409, 97, 1, 0, 0);
					unk_0xB41DEC3AAC1AA107(Local_409.f_2, joaat("weapon_combatpistol"), 200, 1, 1);
					iLocal_966 = 1;
				}
				if (func_172(&Local_409, 16f, 1097859072, 1117782016))
				{
					unk_0xFE54B8568B2ABD12(&(Local_409.f_9));
					func_171(&uLocal_1105, 4);
					func_171(&uLocal_1105, 8);
					unk_0x425BBE19F25A57AB(0.1f);
					unk_0xC1B1E9A034A63A62(0);
					func_293(&Local_409, 22);
				}
				if (func_207(Local_409.f_4, Local_409.f_17, 1) < 10f && func_170(Local_409.f_4, Local_839.f_3[1], 1) < 10f)
				{
					if (func_166(&Local_409, 1, 1084227584))
					{
						unk_0xFE54B8568B2ABD12(&(Local_409.f_9));
						func_164(1, 0);
						func_164(2, 0);
						func_164(3, 0);
						func_164(4, 0);
						func_164(5, 0);
						func_164(0, 1);
						unk_0x425BBE19F25A57AB(0.1f);
						unk_0xC1B1E9A034A63A62(0);
						func_293(&Local_409, 22);
					}
				}
				if (!iLocal_970)
				{
				}
				if (!iLocal_970)
				{
					if (bLocal_971)
					{
						if ((((((((((unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) || unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) || unk_0x4FAFF4BCB7633475(Local_839.f_3[2])) || unk_0x4FAFF4BCB7633475(Local_839.f_3[3])) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[0]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[1]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[2]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[0], 0, 2))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[1], 0, 2))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[2], 0, 2))) || func_170(unk_0x4A8C381C258A124D(), Local_839.f_3[1], 1) < 6f)
						{
							unk_0x3CEA1FD137ACE2D9(Local_839.f_3[0], iLocal_923);
							func_303(&(Local_839.f_3));
							func_302(&uLocal_941);
							func_330(&Local_409, "Aggro Heard Shot", 8);
							iLocal_970 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (func_163(Local_409.f_3, 1) < 250f)
				{
					if (func_124())
					{
						func_122(&uLocal_1105, 1);
						func_122(&uLocal_1105, 16);
						func_122(&uLocal_1105, 32);
						func_228(&Local_409, 100, 1, 0, 0);
						if (!unk_0x4FAFF4BCB7633475(Local_409.f_3) && !unk_0x4FAFF4BCB7633475(Local_409.f_2))
						{
							unk_0x19626F992DC71FB9(Local_409.f_3);
							unk_0xAB3658A740EED98E(Local_409.f_3, Local_409.f_2, 20000, 6f, 1073741824, 1073741824, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						Local_409.f_114 = 0;
						func_293(&Local_409, 24);
					}
				}
				else
				{
					func_330(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (func_163(Local_409.f_2, 1) < 7f && unk_0x83666F9FB8FEBD4B() > 3000)
				{
					unk_0xE67051907958B5EB(Local_409.f_3, Local_409.f_2, -1, 2048, 4);
					unk_0xD0557B139A542F12(&uLocal_934);
					unk_0xB5396F1FB088FE38(&uLocal_934);
					unk_0x0E95B96CFEFE7B61(0, Local_409.f_2, -1);
					unk_0x93C0674FC00824D0(uLocal_934);
					unk_0x4BD42B0527065BB6(Local_409.f_3, uLocal_934);
					Local_409.f_56 = 50;
					func_120(&Local_409);
					func_116(&Local_409);
					func_115(&Local_409);
					if (iLocal_957 == 8)
					{
						func_114(&Local_409, 0);
					}
					func_293(&Local_409, 27);
				}
				else if (func_163(Local_409.f_3, 1) > 100f)
				{
					func_330(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!func_113() && !unk_0x1C2F771CDC87A3A5(Local_409.f_3, 0)) && func_111(&Local_409, 19) > 2f)
				{
					func_110(&Local_409, 19, 0);
					func_293(&Local_409, 29);
					if (unk_0x70DA4F87B396F9F9(5, Local_1005, 1, 0f, &uLocal_948, 0, 0))
					{
						unk_0xBF2292E4C98122D5(uLocal_948, 200f);
						bLocal_973 = true;
					}
					if (unk_0x70DA4F87B396F9F9(7, Local_1005, 3, 0f, &uLocal_949, 0, 0))
					{
						bLocal_973 = true;
					}
				}
				break;
			
			case 29:
				if (func_77(&Local_409, &uLocal_1112))
				{
					if (unk_0xFC8BFE4B41177C22(Local_409.f_3))
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_409.f_3, 0))
						{
							unk_0x974022927CB47E68(Local_409.f_3);
							unk_0xD0557B139A542F12(&uLocal_934);
							unk_0xB5396F1FB088FE38(&uLocal_934);
							unk_0xFD251F92B546F389(0, Local_409.f_17, 500f, 30000, 0, 0);
							unk_0xA966E518B752B92A(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0xA966E518B752B92A(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0xA966E518B752B92A(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0x761F56E633460973(0, 1193033728, 0);
							unk_0x93C0674FC00824D0(uLocal_934);
							unk_0x4BD42B0527065BB6(Local_409.f_3, uLocal_934);
							unk_0x44FB298D6382876D(Local_409.f_3, 1);
						}
					}
					func_11(1, &Local_409, 0);
					unk_0xC1B1E9A034A63A62(0);
					func_293(&Local_409, 30);
				}
				break;
			
			case 30:
				if (func_10(unk_0x4A8C381C258A124D(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_433();
				}
				else if (bLocal_973)
				{
					iLocal_946 = unk_0x66D94742BB3D032F(Local_1005, 40f, joaat("ambulance"), 0);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_946, 0))
					{
						iLocal_974 = 1;
					}
					iLocal_946 = unk_0x66D94742BB3D032F(Local_1005, 40f, joaat("police"), 0);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_946, 0))
					{
						iLocal_974 = 1;
					}
					iLocal_944 = unk_0xFA4D35AD36BDA1FE(Local_1005, 10f, 10f, 5f, -1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_944))
					{
						iLocal_974 = 1;
					}
					if (iLocal_974 || unk_0x83666F9FB8FEBD4B() > 30000)
					{
						unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
			}
	}
}

float func_10(int iParam0, struct<3> Param1, int iParam4)
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

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0x4FAFF4BCB7633475(uParam1->f_3))
		{
			unk_0x0428AFDCAA63B06E(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_415(uParam0);
	if (func_113())
	{
		func_49();
	}
	func_47();
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	func_42(0);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		unk_0x5FE0938FDE9B0958(uParam0->f_4, 0);
		unk_0xB7BDF91BE073DCFB(uParam0->f_4);
		unk_0xD27458C016741B0C(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
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
		func_122(&(Global_113648.f_19099), 4);
		unk_0xCCA6D8A84EE8C88A(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x268BE77F77533D03("gestures@m@standing@casual");
	unk_0x268BE77F77533D03("oddjobs@taxi@");
	unk_0x268BE77F77533D03("oddjobs@towingcome_here");
	if (unk_0x261E3728EE56B3AC())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0xE916D57851F785AB(unk_0xB6B621402486C3E4()))
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x60642EDE690B1018(unk_0xF2DB717A73826179((func_13(&uLocal_90) * 1000f)), 12, 0);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
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

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0xFF692AB7350A74D7(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
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

void func_19(var uParam0)
{
	unk_0x1B3217FCFCCC3FCF(uParam0->f_51[0]);
}

void func_20(var uParam0)
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

int func_21()
{
	return joaat("taxi");
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

void func_37(struct<3> Param0, bool bParam3, float fParam4)
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

void func_39(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_40(Param0, func_41(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		unk_0xA63572E348CC4CFB(Var0, Var3, iParam3, 1);
	}
}

bool func_40(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_41()
{
	struct<3> Var0;
	
	return Var0;
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_45())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

int func_44(int iParam0)
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

bool func_45()
{
	return BitTest(Global_1962996, 5);
}

bool func_46()
{
	return BitTest(Global_1962996, 19);
}

void func_47()
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
					func_48(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)
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

void func_49()
{
	Global_20591 = 0;
	func_50();
}

void func_50()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113648.f_19099.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_113648.f_19099.f_22[0]);
			break;
		
		case 1:
			Global_113648.f_19099.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_113648.f_19099.f_22[1]);
			break;
		
		case 2:
			Global_113648.f_19099.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_113648.f_19099.f_22[2]);
			break;
		
		case 3:
			Global_113648.f_19099.f_22[3]++;
			func_52("Fares Expired ++ ", Global_113648.f_19099.f_22[3]);
			break;
		
		case 13:
			Global_113648.f_19099.f_22[13]++;
			func_52("Passengers run ++ = ", Global_113648.f_19099.f_22[13]);
			break;
		
		case 14:
			Global_113648.f_19099.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_113648.f_19099.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113648.f_19099.f_22[4])
				{
					Global_113648.f_19099.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_113648.f_19099.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_113648.f_19099.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113648.f_19099.f_22[5] = (Global_113648.f_19099.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_113648.f_19099.f_22[5]);
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
			func_52("Wanted Levels ++ = ", Global_113648.f_19099.f_22[6]);
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
			func_52("Wanted Levels Lost = ", Global_113648.f_19099.f_22[7]);
			break;
		
		case 8:
			Global_113648.f_19099.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_113648.f_19099.f_22[8]);
			break;
		
		case 9:
			Global_113648.f_19099.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_113648.f_19099.f_22[9]);
			break;
		
		case 10:
			Global_113648.f_19099.f_22[10] = (Global_113648.f_19099.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_113648.f_19099.f_22[10]);
			break;
		
		case 11:
			Global_113648.f_19099.f_22[11] = (Global_113648.f_19099.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_113648.f_19099.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113648.f_19099.f_22[12])
			{
				Global_113648.f_19099.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_113648.f_19099.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_113648.f_19099.f_22[12]);
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
		func_435(1);
		func_63(15, 1);
	}
	func_171(&(Global_113648.f_19099), 1024);
	if (!func_22(Global_113648.f_19099, 64))
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
		func_60((891 + iParam0), 1, -1);
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
		func_59(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_58() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
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

int func_57(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_58()
{
	return Global_32163;
}

int func_59(int iParam0, int iParam1)
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

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
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

int func_63(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (func_76(14) && !func_75(iParam0))
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
	if (func_74(&Global_4542597))
	{
		if (func_72(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_4542597, iParam0))
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

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	func_68(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
	func_70(uParam0, (Global_4542596 - 0.5f));
}

void func_69(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_70(var uParam0, float fParam1)
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

float func_71(var uParam0)
{
	return uParam0->f_80;
}

bool func_72(var uParam0, int iParam1)
{
	return func_73(uParam0, iParam1) != -1;
}

int func_73(var uParam0, int iParam1)
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

bool func_74(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_75(int iParam0)
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

bool func_76(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_77(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_113() && func_111(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				}
				func_109(uParam0);
				func_122(&(Global_113648.f_19099), 4096);
				func_106(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_108(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xBF3D28CA44F3BE2D(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_105(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_99(uParam1, 0))
			{
				func_78(uParam0);
				func_298(uParam0, 0, 0, 0);
				func_105(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_78(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_79(func_97(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 3)
	{
		return;
	}
	if (func_96(iParam0) == 4)
	{
		return;
	}
	func_80(func_96(iParam0), 1, iParam1, iParam2, 0);
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

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
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
					func_94(99, 1);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
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
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_property"), iParam3);
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
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_83(bVar1);
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
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
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
	func_82(iParam0);
	if (Global_43257 == 15)
	{
		func_81(0);
	}
	return 1;
}

void func_81(bool bParam0)
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

void func_82(int iParam0)
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

void func_83(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_60(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_60(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_60(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_60(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_86(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_86(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_86(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_86(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_86(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_86(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_85() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_85() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_84(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_84(bool bParam0)
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

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_87(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_87(var uParam0)
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

void func_88(int iParam0)
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

int func_89(int iParam0)
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
		return func_91(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_91(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_91(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_91(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_90(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_90(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_90(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_90(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_90(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_90(8277, -1, 0);
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
	return BitTest(Global_2359296[func_85() /*5568*/].f_681.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_87(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_91(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_92(bool bParam0)
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
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_94(int iParam0, int iParam1)
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

void func_95()
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

int func_96(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_97()
{
	func_98();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_98()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_4(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_3(unk_0x4A8C381C258A124D());
			if (func_6(iVar0) && (!func_76(14) || Global_112599))
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

int func_99(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_103(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x875A214D5EBCA509(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_103(&(uParam0->f_5));
				func_102(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_101(&(uParam0->f_5)) > 0.33f)
			{
				func_100(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_101(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_103(&(uParam0->f_5));
			func_102(uParam0, 1051260355);
		}
		else if (func_101(&(uParam0->f_5)) > 0.33f)
		{
			func_100(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_101(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_102(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x330108B080A2132F(uParam0->f_9);
	unk_0x74BF156C860580D4(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_103(var uParam0)
{
	func_104(uParam0, 0f);
}

void func_104(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_105(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_106(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x88F483FBD433696A(*uParam0, func_107());
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
	func_103(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_107()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_108(var uParam0)
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

void func_109(var uParam0)
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
		if (BitTest(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

void func_110(var uParam0, int iParam1, bool bParam2)
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
			func_100(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_100(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_111(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_112(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_101(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_112(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_103(uParam0);
	}
}

int func_113()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_115(var uParam0)
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
		func_171(&(uParam0->f_55), 1);
	}
}

void func_116(var uParam0)
{
	func_118();
	unk_0x406CBCEA35499884();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_228(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_228(uParam0, 103, 1, 0, 0);
		}
		func_117(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_228(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_228(uParam0, 102, 1, 0, 0);
	}
	func_298(uParam0, 16, 4f, 0);
}

void func_117(int iParam0)
{
	Global_112358.f_221 = iParam0;
}

void func_118()
{
	Global_20591 = 0;
	func_119();
}

void func_119()
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

void func_120(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_121(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_51(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_51(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_121(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_122(var uParam0, int iParam1)
{
	func_123(uParam0, iParam1);
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_124()
{
	int iVar0;
	
	if (iLocal_933 < 4 && ((((((((((unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) || unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) || unk_0x4FAFF4BCB7633475(Local_839.f_3[2])) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[0]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[1]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0xFFF4FB66DA549D0F(Local_839.f_3[2]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[0], 0, 2))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[1], 0, 2))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0x1AC621DBDFE4ECA0(Local_839.f_3[2], 0, 2))) || func_170(unk_0x4A8C381C258A124D(), Local_839.f_3[1], 1) < 6f) || (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, 1, 0) && ((((((!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_839.f_3[0])) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_839.f_3[1]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_839.f_3[2]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0) && unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_839.f_3[0]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0) && unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_839.f_3[1]))) || (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0) && unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_839.f_3[2]))))))
	{
		Local_409.f_114 = 1;
		iLocal_933 = 4;
	}
	switch (iLocal_933)
	{
		case 0:
			func_228(&Local_409, 90, 1, 0, 0);
			func_203(&Local_1034, -1, 1);
			func_162();
			unk_0x8744D2E3FC95740E(&uLocal_959, true);
			if (!unk_0x5266F1D2AEF6F73A(uLocal_964))
			{
				if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2]))
				{
					uLocal_964 = unk_0x2EC137C692A52458(Local_996, Local_999, 2);
					unk_0xBF3497E24DEAD835(uLocal_964, 1);
					unk_0x3DA436E63AB0F541(Local_839.f_3[0], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
					unk_0x3DA436E63AB0F541(Local_839.f_3[1], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					unk_0x3DA436E63AB0F541(Local_839.f_3[2], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
			}
			iLocal_951 = unk_0x1DD05E817C89C737();
			iLocal_933 = 1;
			break;
		
		case 1:
			if (!func_113() && !BitTest(uLocal_959, 10))
			{
				func_228(&Local_409, 91, 1, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 10);
				func_112(&uLocal_1027);
			}
			if ((unk_0x1DD05E817C89C737() - iLocal_951) > 4000)
			{
				if (!unk_0xE916D57851F785AB(unk_0xB6B621402486C3E4()))
				{
					if (func_161(&Local_409))
					{
						func_160("TAXI_VIEW", -1);
					}
					iLocal_967 = 1;
					if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[3]) && !unk_0x4FAFF4BCB7633475(uLocal_941[0])) && !unk_0x4FAFF4BCB7633475(uLocal_941[1]))
					{
						uLocal_961 = unk_0x2EC137C692A52458(Local_990, Local_993, 2);
						unk_0x3DA436E63AB0F541(Local_839.f_3[3], uLocal_961, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(uLocal_941[0], uLocal_961, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(uLocal_941[1], uLocal_961, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
				}
			}
			if (func_159("TAXI_VIEW") && (unk_0x6D05C5731A838CB3(0, 80) || !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)))
			{
				unk_0x428C32CC68809A35(1);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_409.f_3) && (!func_113() || func_13(&uLocal_1027) > 9f))
			{
				if ((unk_0x65FFA94B82A71741(Local_409.f_3, Local_1002, 1.5f, 1.5f, 2f, false, 1, 0) && unk_0x9B5C1660CCDF7189(Local_409.f_3, joaat("script_task_perform_sequence")) == 7) && (unk_0x5266F1D2AEF6F73A(uLocal_964) && unk_0xBD3B265153D3BA2D(uLocal_964) > 0.995f))
				{
					if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2]))
					{
						uLocal_965 = unk_0x2EC137C692A52458(Local_996, Local_999, 2);
						unk_0x3DA436E63AB0F541(Local_839.f_3[0], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(Local_839.f_3[1], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(Local_839.f_3[2], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0xA7C372501A8A3B23(uLocal_965, 1);
					}
					unk_0x10425721983AE158(Local_409.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -1056964608, -1, 0, 0, 0, 0, 0);
					iLocal_953 = unk_0x1DD05E817C89C737();
					iLocal_951 = unk_0x1DD05E817C89C737();
					iLocal_933 = 2;
				}
			}
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iLocal_951) > 2500 && !BitTest(uLocal_959, 1))
			{
				func_228(&Local_409, 89, 1, 1, 0);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 1);
			}
			if (((unk_0xBD3B265153D3BA2D(uLocal_965) >= 0.838f && !unk_0x4FAFF4BCB7633475(Local_409.f_3)) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !BitTest(uLocal_959, 6))
			{
				unk_0xB41DEC3AAC1AA107(Local_839.f_3[1], joaat("weapon_pistol"), -1, 1, 1);
				unk_0xB41DEC3AAC1AA107(Local_409.f_3, joaat("weapon_pistol"), -1, 1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 6);
			}
			if ((unk_0xBD3B265153D3BA2D(uLocal_965) >= 0.853f && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2])) && !BitTest(uLocal_959, 7))
			{
				unk_0xB41DEC3AAC1AA107(Local_839.f_3[2], joaat("weapon_pistol"), -1, 1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 7);
			}
			if (!BitTest(uLocal_959, 3))
			{
				if ((unk_0x5266F1D2AEF6F73A(uLocal_961) && unk_0xBD3B265153D3BA2D(uLocal_961) == 1f) || !unk_0x5266F1D2AEF6F73A(uLocal_961))
				{
					if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[3]) && !unk_0x4FAFF4BCB7633475(uLocal_941[0])) && !unk_0x4FAFF4BCB7633475(uLocal_941[1]))
					{
						uLocal_962 = unk_0x2EC137C692A52458(Local_990, Local_993, 2);
						unk_0x3DA436E63AB0F541(Local_839.f_3[3], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(uLocal_941[0], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(uLocal_941[1], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xBF3497E24DEAD835(uLocal_962, 1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 3);
					}
				}
			}
			if (BitTest(uLocal_959, 1))
			{
				Local_1021 = { func_158() };
				if (unk_0x1B79E937E91F40C3(&cLocal_1009, &Local_1021) || unk_0x1B79E937E91F40C3(&cLocal_1015, &Local_1021))
				{
					if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[3]) && !unk_0x4FAFF4BCB7633475(uLocal_941[0])) && !unk_0x4FAFF4BCB7633475(uLocal_941[1]))
					{
						if (unk_0x5266F1D2AEF6F73A(uLocal_962))
						{
							uLocal_963 = unk_0x2EC137C692A52458(Local_990, Local_993, 2);
							unk_0x3DA436E63AB0F541(Local_839.f_3[3], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(uLocal_941[0], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(uLocal_941[1], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xA7C372501A8A3B23(uLocal_963, 1);
							iLocal_952 = unk_0x1DD05E817C89C737();
							iLocal_933 = 3;
						}
						else
						{
							uLocal_963 = unk_0x2EC137C692A52458(Local_990, Local_993, 2);
							unk_0x3DA436E63AB0F541(Local_839.f_3[3], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(uLocal_941[0], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(uLocal_941[1], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xA7C372501A8A3B23(uLocal_963, 1);
							iLocal_952 = unk_0x1DD05E817C89C737();
							iLocal_933 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_955)
			{
				case 0:
					if (((unk_0x1DD05E817C89C737() - iLocal_952) > 850 && !unk_0x4FAFF4BCB7633475(Local_839.f_3[3])) && !BitTest(uLocal_959, 8))
					{
						unk_0xB41DEC3AAC1AA107(Local_839.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 8);
					}
					if (((!unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2])) && !unk_0x4FAFF4BCB7633475(Local_409.f_3))
					{
						unk_0x0FB8E752BCC547A9(Local_839.f_3[0], 156, 1);
						unk_0x0FB8E752BCC547A9(Local_839.f_3[1], 156, 1);
						unk_0x0FB8E752BCC547A9(Local_839.f_3[2], 156, 1);
						unk_0x0FB8E752BCC547A9(Local_409.f_3, 156, 1);
						if (((unk_0x5266F1D2AEF6F73A(uLocal_965) && unk_0xBD3B265153D3BA2D(uLocal_965) == 1f) || !unk_0x5266F1D2AEF6F73A(uLocal_965)) || (unk_0x1DD05E817C89C737() - iLocal_953) > 27000)
						{
							if ((unk_0x1DD05E817C89C737() - iLocal_953) > 27000)
							{
							}
							iLocal_976 = 1;
							unk_0x646DE293036A3499(Local_839.f_3[0], Local_409.f_3, -1, 0);
							unk_0x646DE293036A3499(Local_839.f_3[1], Local_409.f_3, -1, 0);
							unk_0x646DE293036A3499(Local_839.f_3[2], Local_409.f_3, -1, 0);
							unk_0x646DE293036A3499(Local_409.f_3, Local_839.f_3[1], -1, 0);
							iLocal_951 = 0;
							iLocal_955++;
						}
					}
					break;
				
				case 1:
					if (((unk_0x1DD05E817C89C737() - iLocal_952) > 850 && !unk_0x4FAFF4BCB7633475(Local_839.f_3[3])) && !BitTest(uLocal_959, 8))
					{
						unk_0xB41DEC3AAC1AA107(Local_839.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 8);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_839.f_3[3]))
					{
						unk_0x0FB8E752BCC547A9(Local_839.f_3[3], 156, 1);
					}
					if (!BitTest(uLocal_959, 4))
					{
						if (!unk_0x5266F1D2AEF6F73A(uLocal_963) || unk_0xBD3B265153D3BA2D(uLocal_963) == 1f)
						{
							if (((!unk_0x4FAFF4BCB7633475(Local_839.f_3[3]) && !unk_0x4FAFF4BCB7633475(uLocal_941[0])) && !unk_0x4FAFF4BCB7633475(uLocal_941[1])) && !unk_0x4FAFF4BCB7633475(Local_409.f_3))
							{
								unk_0xA966E518B752B92A(uLocal_941[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								unk_0xA966E518B752B92A(uLocal_941[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								unk_0x717804C8C8DA67BF(uLocal_941[0], joaat("MotionState_Sprint"), 0, 0, 0);
								unk_0x717804C8C8DA67BF(uLocal_941[1], joaat("MotionState_Sprint"), 0, 0, 0);
								unk_0x646DE293036A3499(Local_839.f_3[3], Local_409.f_3, -1, 1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 4);
							}
						}
					}
					Local_1021 = { func_158() };
					if (unk_0x1B79E937E91F40C3("txm12_deal1_7", &Local_1021) && iLocal_951 == 0)
					{
						iLocal_951 = unk_0x1DD05E817C89C737();
					}
					else if ((iLocal_951 > 0 && (unk_0x1DD05E817C89C737() - iLocal_951) > 1500) && !BitTest(uLocal_959, 9))
					{
						func_157();
						func_156("TAXI_OBJ_GYB", 4000, 0);
						func_155(&(Local_839.f_3), &(Local_839.f_11));
						iLocal_967 = 0;
						unk_0x85E6A1E36B5E2E4D(Local_409.f_0, 0);
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						iLocal_951 = unk_0x1DD05E817C89C737();
						iLocal_955 = 2;
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 9);
					}
					else if (iLocal_951 > 0 && (unk_0x1DD05E817C89C737() - iLocal_951) > 1200)
					{
						if (func_154() && unk_0xBC886554B5888A64(Local_409.f_0))
						{
							if (!iLocal_977)
							{
								unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
								unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_977 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x1DD05E817C89C737() - iLocal_951) > 4000 && BitTest(uLocal_959, 9))
					{
						func_139(&(Local_409.f_244), Local_409.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_951 = unk_0x1DD05E817C89C737();
						unk_0x8744D2E3FC95740E(&uLocal_959, 9);
					}
					if ((((!unk_0x4FAFF4BCB7633475(Local_409.f_3) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[0])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2])) && !BitTest(uLocal_959, 9)) && (unk_0x1DD05E817C89C737() - iLocal_951) > 2000)
					{
						unk_0xD25E9BDC14A0B649(Local_839.f_3[0], 115, 0);
						unk_0xD25E9BDC14A0B649(Local_839.f_3[2], 115, 0);
						iLocal_951 = unk_0x1DD05E817C89C737();
						iLocal_955 = 8;
					}
					break;
				
				case 3:
					if (!func_113())
					{
						func_228(&Local_409, 12, 1, 0, 0);
						func_298(&Local_409, 19, 0, 0);
						iLocal_951 = unk_0x1DD05E817C89C737();
						iLocal_955++;
					}
					break;
				
				case 4:
					if (!unk_0xFBA523E6F8ACE541())
					{
						func_298(&Local_409, 19, 0, 0);
						func_228(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (func_111(&Local_409, 19) > 2f)
					{
						func_298(&Local_409, 19, 0, 0);
						func_228(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				
				case 8:
					if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2]))
					{
						unk_0x40D1AAC4EFD3C281(1, iLocal_923, Local_409.f_413);
						unk_0xD414C47AFF81382A(5, iLocal_923, Local_409.f_413);
						unk_0xC652B7E19CE29859(Local_839.f_3[0], 100);
						unk_0xC652B7E19CE29859(Local_839.f_3[2], 100);
						unk_0xE84EF4129A44CCA3(Local_839.f_3[0], Local_409.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0xE84EF4129A44CCA3(Local_839.f_3[1], Local_409.f_3, 5000, joaat("FIRING_PATTERN_BURST_FIRE"));
						unk_0xE84EF4129A44CCA3(Local_839.f_3[2], Local_409.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_951 = unk_0x1DD05E817C89C737();
						iLocal_955++;
					}
					break;
				
				case 9:
					if ((unk_0x1DD05E817C89C737() - iLocal_951) > 5000)
					{
						iLocal_933 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_409.f_114)
			{
				Local_409.f_114 = 1;
			}
			func_171(&uLocal_1105, 1);
			func_171(&uLocal_1105, 16);
			func_171(&uLocal_1105, 32);
			func_157();
			func_136();
			func_135();
			func_303(&(Local_839.f_3));
			func_155(&(Local_839.f_3), &(Local_839.f_11));
			func_302(&uLocal_941);
			iLocal_951 = unk_0x1DD05E817C89C737();
			iLocal_933 = 5;
			break;
		
		case 5:
			if (iLocal_956 >= 2 && !func_305(&Local_409, 8))
			{
				func_304(&Local_409, 8);
			}
			else if (func_305(&Local_409, 8) && func_111(&Local_409, 8) > 3f)
			{
				func_133();
				func_130();
				iLocal_951 = unk_0x1DD05E817C89C737();
				iLocal_933 = 6;
			}
			else
			{
				iLocal_956 = 0;
			}
			func_128(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
			break;
		
		case 6:
			if ((unk_0x4FAFF4BCB7633475(Local_881.f_3[0]) && unk_0xD9F5E1FEFD1329E4(Local_881.f_27[0], 0)) && unk_0x050D073F91C5243C(Local_881.f_27[0]))
			{
				unk_0x1D2DAF2A41FFC4A0(Local_881.f_27[0]);
			}
			if ((((unk_0x4FAFF4BCB7633475(Local_881.f_3[2]) || unk_0x9B3D4335E0EDB0BE(Local_881.f_3[2], unk_0x4A8C381C258A124D(), 1)) || unk_0x9B3D4335E0EDB0BE(Local_881.f_3[2], Local_409.f_3, 1)) && unk_0xD9F5E1FEFD1329E4(Local_881.f_27[1], 0)) && unk_0x050D073F91C5243C(Local_881.f_27[1]))
			{
				unk_0x1D2DAF2A41FFC4A0(Local_881.f_27[1]);
			}
			if (unk_0xC450B06E5AAA0985(Local_881.f_37[0]) && !unk_0xD9F5E1FEFD1329E4(Local_881.f_27[0], 0))
			{
				unk_0xFE54B8568B2ABD12(&(Local_881.f_37[0]));
			}
			if (unk_0xC450B06E5AAA0985(Local_881.f_37[1]) && !unk_0xD9F5E1FEFD1329E4(Local_881.f_27[1], 0))
			{
				unk_0xFE54B8568B2ABD12(&(Local_881.f_37[1]));
			}
			if (!iLocal_972 && ((unk_0xD9F5E1FEFD1329E4(Local_881.f_27[0], 0) && !unk_0x050D073F91C5243C(Local_881.f_27[0])) || (unk_0xD9F5E1FEFD1329E4(Local_881.f_27[1], 0) && !unk_0x050D073F91C5243C(Local_881.f_27[1]))))
			{
				if (func_127(&(Local_881.f_3)))
				{
					func_155(&(Local_881.f_3), &(Local_881.f_11));
					func_126();
					iLocal_972 = 1;
				}
			}
			if (!BitTest(uLocal_959, 2))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_951) > 5000)
				{
					func_303(&(Local_881.f_3));
					func_125(&(Local_839.f_3));
					unk_0xD414C47AFF81382A(5, iLocal_923, Local_409.f_413);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_959, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_881.f_3)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_881.f_3[iVar0]))
					{
						if (unk_0x9B5C1660CCDF7189(Local_881.f_3[iVar0], joaat("script_task_combat_hated_targets_around_ped")) != 1 && unk_0x9B5C1660CCDF7189(Local_881.f_3[iVar0], joaat("script_task_combat_hated_targets_around_ped")) != 0)
						{
							unk_0xF6CC23160DD0AAED(Local_881.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!unk_0x4FAFF4BCB7633475(Local_409.f_3))
			{
				if (iLocal_975)
				{
					if (!func_113())
					{
						func_228(&Local_409, 140, 1, 0, 1);
					}
					iLocal_975 = 0;
				}
			}
			return func_128(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
			break;
	}
	return 0;
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			unk_0xC652B7E19CE29859((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_126()
{
	if (unk_0xC450B06E5AAA0985(Local_881.f_37[0]))
	{
		unk_0xFE54B8568B2ABD12(&(Local_881.f_37[0]));
	}
	if (unk_0xC450B06E5AAA0985(Local_881.f_37[1]))
	{
		unk_0xFE54B8568B2ABD12(&(Local_881.f_37[1]));
	}
}

int func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			if (!unk_0x7F420695E3F776FB((*uParam0)[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_957 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x1C2F771CDC87A3A5((*uParam0)[iVar0], 0))
		{
			if (unk_0xC450B06E5AAA0985((*uParam1)[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(uParam1[iVar0]);
			}
			if (func_129(&Local_409, (*uParam0)[iVar0], 1))
			{
				iLocal_957++;
			}
			iLocal_956++;
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		if (unk_0x1C2F771CDC87A3A5((*uParam2)[iVar0], 0))
		{
			if (unk_0xC450B06E5AAA0985((*uParam3)[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(uParam3[iVar0]);
				iLocal_975 = 1;
			}
			if (func_129(&Local_409, (*uParam2)[iVar0], 1))
			{
				iLocal_957++;
			}
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_129(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFC8BFE4B41177C22(uParam1))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0xFC8BFE4B41177C22(iParam1))
			{
				if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_130()
{
	if (!unk_0xC450B06E5AAA0985(Local_881.f_37[0]) && !unk_0xC450B06E5AAA0985(Local_881.f_37[1]))
	{
		Local_881.f_37[0] = func_131(Local_881.f_27[0], 0, 0);
		Local_881.f_37[1] = func_131(Local_881.f_27[1], 0, 0);
	}
}

int func_131(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_132(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_132(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_132(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_132(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_133()
{
	if (unk_0xD9F5E1FEFD1329E4(Local_881.f_27[0], 0))
	{
		unk_0x9CCFFF877AB82ACA(Local_881.f_27[0], iLocal_954, func_134(0), 6, 1000, 786603);
		unk_0x206AB1458FD9522F(Local_881.f_27[0], 1f);
	}
	if (unk_0xD9F5E1FEFD1329E4(Local_881.f_27[1], 0))
	{
		unk_0x9CCFFF877AB82ACA(Local_881.f_27[1], iLocal_954, func_134(1), 6, 1000, 786603);
		unk_0x206AB1458FD9522F(Local_881.f_27[1], 1f);
	}
}

char* func_134(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_135()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Local_409.f_3))
	{
		if (!unk_0x4FAFF4BCB7633475(Local_409.f_3))
		{
			if (!unk_0xC450B06E5AAA0985(Local_409.f_8))
			{
				Local_409.f_8 = func_131(Local_409.f_3, 1, 0);
			}
			unk_0x23B29877D0BE9547(Local_409.f_3, &iVar0, 1);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				unk_0xB41DEC3AAC1AA107(Local_409.f_3, joaat("weapon_combatpistol"), 100, 0, 1);
			}
			unk_0xBE8796DB2B90A437(Local_409.f_3, 3, 1);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 13, 0);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 12, 1);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 0, 1);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 24, 1);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 34, 1);
			unk_0xBE8796DB2B90A437(Local_409.f_3, 37, 1);
			unk_0x25DBF9F9C6BDFFEA(Local_409.f_3, 300f);
			unk_0x35365D1E3ADB7109(Local_409.f_3, 300f);
			unk_0xC45887CFF81A1950(Local_409.f_3, 300f);
			unk_0xD0764B65C2DFEDCA(Local_409.f_3, 1);
			unk_0x84D421ACEBF9E529(Local_409.f_3, 1);
			unk_0xC652B7E19CE29859(Local_409.f_3, 80);
			unk_0x1090EAA386FB31A8(Local_409.f_3, 2);
			unk_0xDF2B856299BCDF13(Local_409.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, 0, 0);
			unk_0xD414C47AFF81382A(5, iLocal_923, Local_409.f_413);
			unk_0xD414C47AFF81382A(5, Local_409.f_413, iLocal_923);
			unk_0xD0557B139A542F12(&uLocal_934);
			unk_0xB5396F1FB088FE38(&uLocal_934);
			unk_0xE31B7CB52E42E2B6(0, 201.9434f, -3324.029f, 4.7888f, 5000, 1);
			unk_0xF6CC23160DD0AAED(0, 200f, 0);
			unk_0x93C0674FC00824D0(uLocal_934);
			unk_0x4BD42B0527065BB6(Local_409.f_3, uLocal_934);
			unk_0x44FB298D6382876D(Local_409.f_3, 1);
		}
	}
}

void func_136()
{
	int iVar0;
	
	Local_881.f_27[0] = unk_0x5779387E956077A6(Local_881.f_32[0], func_138(1), func_137(1), 1, 1, 0);
	Local_881.f_27[1] = unk_0x5779387E956077A6(Local_881.f_32[1], func_138(2), func_137(2), 1, 1, 0);
	Local_881.f_3[0] = unk_0x8728A378EF2B46B2(Local_881.f_27[0], 26, Local_881.f_19[0], -1, 1, 1);
	Local_881.f_3[1] = unk_0x8728A378EF2B46B2(Local_881.f_27[0], 26, Local_881.f_19[0], 0, 1, 1);
	Local_881.f_3[2] = unk_0x8728A378EF2B46B2(Local_881.f_27[1], 26, Local_881.f_19[0], -1, 1, 1);
	Local_881.f_3[3] = unk_0x8728A378EF2B46B2(Local_881.f_27[1], 26, Local_881.f_19[0], 0, 1, 1);
	unk_0x3FEAE59CDE6D3946(Local_881.f_27[1], "LuisLopz");
	func_8(&(Local_409.f_244), 6, Local_881.f_3[0], "TaxiBruce", 0, 1);
	unk_0x397CF4F4C8B17365(Local_881.f_3[0], "TaxiBruce");
	unk_0xB41DEC3AAC1AA107(Local_881.f_3[0], joaat("weapon_smg"), 100, 0, 1);
	unk_0xB41DEC3AAC1AA107(Local_881.f_3[1], joaat("weapon_pistol"), 100, 0, 1);
	unk_0xB41DEC3AAC1AA107(Local_881.f_3[2], joaat("weapon_smg"), 100, 0, 1);
	unk_0xB41DEC3AAC1AA107(Local_881.f_3[3], joaat("weapon_pistol"), 100, 1, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0x886FA295C1257AAA(Local_881.f_3[iVar0], unk_0xC5935DFB3F39785A(50, 100));
		unk_0xBE8796DB2B90A437(Local_881.f_3[iVar0], 2, 1);
		unk_0xBE8796DB2B90A437(Local_881.f_3[iVar0], 13, 1);
		unk_0xBE8796DB2B90A437(Local_881.f_3[iVar0], 1, 0);
		unk_0xBE8796DB2B90A437(Local_881.f_3[iVar0], 3, 1);
		unk_0xBE8796DB2B90A437(Local_881.f_3[iVar0], 37, 1);
		unk_0x0428AFDCAA63B06E(Local_881.f_3[iVar0], 42, 1);
		unk_0x25DBF9F9C6BDFFEA(Local_881.f_3[iVar0], 300f);
		unk_0x35365D1E3ADB7109(Local_881.f_3[iVar0], 300f);
		unk_0xC45887CFF81A1950(Local_881.f_3[iVar0], 300f);
		unk_0xAAA71DD7E9059338(Local_881.f_3[iVar0], 1);
		unk_0x3CEA1FD137ACE2D9(Local_881.f_3[iVar0], iLocal_923);
		unk_0xC652B7E19CE29859(Local_881.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_140(sParam2, iParam4, 0);
}

int func_140(char* sParam0, int iParam1, bool bParam2)
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
		if (func_151(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_150();
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
				func_149();
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
				if (func_148())
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
			func_147();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_146();
		func_141();
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

void func_141()
{
	if (!func_142())
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

int func_142()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_145())
	{
		return 0;
	}
	if (func_143(unk_0x259BE71D8A81D4FA()))
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

bool func_143(int iParam0)
{
	return func_144(iParam0, 20);
}

var func_144(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_145()
{
	return -1;
}

void func_146()
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

void func_147()
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

int func_148()
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

void func_149()
{
	if (func_76(14))
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
		Global_20383 = func_97();
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

void func_150()
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

bool func_151(int iParam0, int iParam1)
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

void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_154()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			if (!unk_0xC450B06E5AAA0985((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_131((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_157()
{
	Global_20591 = 0;
	func_152();
}

struct<6> func_158()
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

bool func_159(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_160(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_161(var uParam0)
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

void func_162()
{
	if (unk_0xFC8BFE4B41177C22(Local_409.f_3))
	{
		if (!unk_0x4FAFF4BCB7633475(Local_409.f_3))
		{
			unk_0x3CEA1FD137ACE2D9(Local_409.f_3, Local_409.f_413);
			unk_0xE67051907958B5EB(Local_409.f_3, Local_839.f_3[1], -1, 2048, 4);
			unk_0xD0557B139A542F12(&uLocal_934);
			unk_0xB5396F1FB088FE38(&uLocal_934);
			unk_0x092B9247AF00F5CF(0, 0, 262144);
			unk_0xA966E518B752B92A(0, Local_1002, 1f, 30000, 1048576000, 0, 1193033728);
			unk_0x2280392018BC0DD3(0, -30.3f, 0);
			unk_0x84B06A81C98DA4B8(0);
			unk_0x93C0674FC00824D0(uLocal_934);
			unk_0x4BD42B0527065BB6(Local_409.f_3, uLocal_934);
		}
	}
}

float func_163(int iParam0, int iParam1)
{
	return func_170(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

void func_164(int iParam0, bool bParam1)
{
	if (iParam0 < Local_343.f_0 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_165(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_123(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_165(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_166(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_169();
				return 1;
			}
			else if (func_167(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
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

int func_167(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_168(iParam0);
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

void func_168(int iParam0)
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

void func_169()
{
	if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
	{
		unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	}
}

float func_170(int iParam0, int iParam1, int iParam2)
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

void func_171(var uParam0, int iParam1)
{
	func_165(uParam0, iParam1);
}

int func_172(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69()) && !unk_0x78ABC1D11B34F324()) && !unk_0x15CCE8886267624F()) && !uParam0->f_142)
	{
		if (func_189(uParam0))
		{
			func_188(uParam0, &(uParam0->f_43));
			func_183(uParam0);
			func_182(uParam0);
			func_179(uParam0);
			func_178(uParam0, fParam2, fParam3);
			func_175(uParam0);
			return func_173(uParam0, iParam1);
		}
	}
	return 0;
}

int func_173(var uParam0, int iParam1)
{
	if (func_62(uParam0) == 2)
	{
		if (unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_10(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_174(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			return func_166(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_174(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
	{
		return func_166(uParam0, 1, iParam1);
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
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

void func_175(var uParam0)
{
	float fVar0;
	
	if ((func_177(uParam0) && func_22(uParam0->f_81, 67108864)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
	{
		if ((unk_0x1DD05E817C89C737() - iLocal_97) >= 10000)
		{
			fVar0 = func_176(uParam0->f_17, 1);
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
		if (iLocal_96 >= 2 && !func_113())
		{
			func_228(uParam0, 136, 1, 0, 1);
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
			if (!func_177(uParam0))
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

float func_176(struct<3> Param0, int iParam3)
{
	return func_207(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), Param0, iParam3);
}

int func_177(var uParam0)
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

void func_178(var uParam0, float fParam1, float fParam2)
{
	if (func_177(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((unk_0x1CE980E99A2A6FB6(uParam0->f_4) || unk_0xDF93B3CFAC96698F(uParam0->f_4) < 3f) && func_161(uParam0))
		{
			if (!func_305(uParam0, 2))
			{
				func_304(uParam0, 2);
			}
			else if (func_177(uParam0))
			{
				if (func_111(uParam0, 2) > fParam1 && !func_305(uParam0, 14))
				{
					if (func_35())
					{
						func_228(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_228(uParam0, 48, 1, 0, 0);
					}
					func_298(uParam0, 2, 0, 0);
					if (func_305(uParam0, 10))
					{
						func_298(uParam0, 10, 0, 0);
					}
				}
				if (!func_305(uParam0, 3))
				{
					func_298(uParam0, 3, 0, 0);
				}
				else if (func_111(uParam0, 3) >= fParam2)
				{
					func_110(uParam0, 3, 0);
					func_330(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_305(uParam0, 2))
			{
				func_110(uParam0, 2, 0);
			}
			if (func_305(uParam0, 3))
			{
				func_110(uParam0, 3, 0);
			}
		}
	}
}

void func_179(var uParam0)
{
	if (func_181(uParam0))
	{
		func_180(uParam0);
	}
}

void func_180(var uParam0)
{
	if (unk_0xC47E3FF56898A28B() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xE1799BB6E4C1CDFB();
			func_110(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_111(uParam0, 20) > 3f)
				{
					func_228(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_228(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_228(uParam0, 85, 1, 0, 0);
						func_110(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_111(uParam0, 20) > 8f)
				{
					func_228(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_305(uParam0, 22))
				{
					func_304(uParam0, 22);
				}
			}
			if (func_305(uParam0, 22) && func_111(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_228(uParam0, 84, 1, 0, 0);
						func_110(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_228(uParam0, 85, 1, 0, 0);
						func_110(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_181(var uParam0)
{
	return uParam0->f_120;
}

void func_182(var uParam0)
{
	if (unk_0x692665178199313C(unk_0xB6B621402486C3E4()) && !func_22(uParam0->f_44, 2))
	{
		func_171(&(uParam0->f_44), 2);
	}
	else if (!unk_0x692665178199313C(unk_0xB6B621402486C3E4()) && func_22(uParam0->f_44, 2))
	{
		func_122(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_51(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_228(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_183(var uParam0)
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					if (func_111(uParam0, 9) > 1f)
					{
						func_187(uParam0, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
						if (uParam0->f_410 != 22)
						{
							func_228(uParam0, 50, 1, 1, 0);
						}
						func_298(uParam0, 9, 0, 0);
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
				if (!func_113() && func_111(uParam0, 9) > 4f)
				{
					func_228(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_186("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_228(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), func_185(uParam0)))
				{
					func_187(uParam0, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
					func_51(6, 0);
				}
				if (!func_184(uParam0))
				{
					if (!unk_0x1F9EB85925C3ECD7())
					{
						if (func_111(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_228(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					if (func_186("TAXI_OBJ_POL", 0, 0))
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
				if (!func_113())
				{
					if (uParam0->f_410 != 22)
					{
						func_228(uParam0, 53, 1, 0, 1);
					}
					func_51(7, func_185(uParam0));
					func_187(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_113())
				{
					func_110(uParam0, 9, 0);
					func_298(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_184(var uParam0)
{
	return uParam0->f_110;
}

int func_185(var uParam0)
{
	return uParam0->f_106;
}

bool func_186(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_187(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_188(var uParam0, var uParam1)
{
	unk_0x2F0966A034F5ADC6(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_189(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (!unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_3))
			{
				func_330(uParam0, "Passenger left car.", 9);
			}
			else if (func_199(uParam0))
			{
				if (func_186("TAXI_OBJ_PICKUP", 0, 0))
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
				func_190(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_190(var uParam0, bool bParam1)
{
	func_198(uParam0, uParam0->f_3);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_305(uParam0, 14))
			{
				if (func_113())
				{
					func_197(1);
				}
				func_196(uParam0, 11, 1);
				func_191(uParam0, 1);
				func_298(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_177(uParam0))
				{
					if ((unk_0x1DD05E817C89C737() % 1000) < 50)
					{
					}
					if (unk_0x7F420695E3F776FB(uParam0->f_2, 0))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							func_298(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (func_163(uParam0->f_4, 1) > 40f)
					{
						func_330(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_191(var uParam0, bool bParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_8))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
				unk_0xBC64B805EE071A37(uParam0->f_8, 0);
				func_195(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xC450B06E5AAA0985(uParam0->f_9))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
				unk_0xBC64B805EE071A37(uParam0->f_9, 0);
				unk_0x406CBCEA35499884();
				if (func_177(uParam0))
				{
					func_228(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_195(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_192(uParam0, 0, 0);
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

void func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_415(uParam0);
	}
	if (!unk_0xC450B06E5AAA0985(uParam0->f_10))
	{
		uParam0->f_10 = func_131(uParam0->f_4, 1, 0);
		unk_0x594D5D0D7071B0DE(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xBC64B805EE071A37(uParam0->f_10, 1);
		func_193(uParam0);
		if (bParam2)
		{
			unk_0x406CBCEA35499884();
			func_228(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_193(var uParam0)
{
	func_298(uParam0, 14, 0, 0);
	func_194();
}

void func_194()
{
	int iVar0;
	
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_195(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x406CBCEA35499884();
		func_228(uParam0, iParam3, 1, 0, 0);
		func_171(uParam1, iParam2);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_197(int iParam0)
{
	Global_22736 = iParam0;
}

void func_198(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam1))
		{
			if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
			{
				if ((unk_0x690AB6F5DB2A3A54(iParam1, joaat("weapon_stungun"), 0) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 2)) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 1))
				{
					func_330(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
			}
		}
	}
}

int func_199(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_305(uParam0, 14))
			{
				func_200(uParam0);
			}
			func_191(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_200(var uParam0)
{
	func_110(uParam0, 14, 0);
	func_110(uParam0, 15, 0);
	func_202();
	if (func_201())
	{
		func_197(0);
	}
}

int func_201()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	var uVar0;
	
	uVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_203(var uParam0, int iParam1, bool bParam2)
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

void func_204(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_205(), 24);
		iVar0++;
	}
	unk_0x406CBCEA35499884();
	func_49();
}

var func_205()
{
	var uVar0;
	
	return uVar0;
}

void func_206(var uParam0)
{
	uParam0->f_120 = 0;
}

float func_207(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam4);
}

void func_208()
{
	switch (iLocal_924)
	{
		case 0:
			if (unk_0xD9F5E1FEFD1329E4(Local_409.f_4, 0) && func_10(Local_409.f_4, Local_409.f_17, 1) < 300f)
			{
				func_223();
				iLocal_924 = 1;
			}
			break;
		
		case 1:
			if (func_221())
			{
				iLocal_924 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_971)
			{
				func_218();
				func_217();
				func_213();
				func_212();
				func_211();
				func_210();
				iLocal_924 = 3;
				bLocal_971 = true;
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(Local_409.f_4, 0) && func_10(Local_409.f_4, Local_409.f_17, 1) > 350f)
			{
				func_209();
				iLocal_924 = 0;
			}
			break;
	}
}

void func_209()
{
	unk_0x55098D9E9AD58806(iLocal_930);
	unk_0x55098D9E9AD58806(iLocal_931);
	unk_0x55098D9E9AD58806(iLocal_932);
	unk_0x55098D9E9AD58806(Local_839.f_19[0]);
	unk_0x55098D9E9AD58806(Local_839.f_19[1]);
	unk_0x55098D9E9AD58806(Local_839.f_32[0]);
	unk_0x55098D9E9AD58806(Local_839.f_32[1]);
	unk_0x55098D9E9AD58806(Local_839.f_32[2]);
	unk_0x55098D9E9AD58806(Local_839.f_32[3]);
	unk_0x55098D9E9AD58806(Local_881.f_32[1]);
	unk_0x7821F942CAEEBEE1(iLocal_954, func_134(0));
	unk_0x7821F942CAEEBEE1(iLocal_954, func_134(1));
	unk_0x268BE77F77533D03("random@countryside_gang_fight");
	unk_0x268BE77F77533D03(sLocal_1008);
}

void func_210()
{
	uLocal_935[0] = unk_0x4E55EAB577C13329(iLocal_930, 204.8445f, -3333.998f, 4.795367f, 1, 1, 0);
	unk_0xB2BD5837A8D3CEDA(uLocal_935[0], 204.8445f, -3333.998f, 4.795367f, 1, 0, 0, 1);
	unk_0xCF39804E8C88080E(uLocal_935[0], -0.036243f, -0.00124f, 91.56063f, 2, 1);
	uLocal_935[1] = unk_0x4E55EAB577C13329(iLocal_930, 212.67f, -3328.77f, 4.79f, 1, 1, 0);
	unk_0xB2BD5837A8D3CEDA(uLocal_935[1], 212.67f, -3328.77f, 4.79f, 1, 0, 0, 1);
	unk_0xCF39804E8C88080E(uLocal_935[1], -0.04f, -0.01f, 86.36f, 2, 1);
	uLocal_935[2] = unk_0x4E55EAB577C13329(iLocal_930, 204.8248f, -3328.631f, 4.7915f, 1, 1, 0);
	unk_0xB2BD5837A8D3CEDA(uLocal_935[2], 204.8248f, -3328.631f, 4.7915f, 1, 0, 0, 1);
	unk_0xCF39804E8C88080E(uLocal_935[2], -0.0027f, -0.0374f, 0.1414f, 2, 1);
	uLocal_940 = unk_0x4E55EAB577C13329(iLocal_931, 214.2505f, -3314.673f, 4.7883f, 1, 1, 0);
	unk_0xB2BD5837A8D3CEDA(uLocal_940, 214.2505f, -3314.673f, 4.7883f, 1, 0, 0, 1);
	unk_0xCF39804E8C88080E(uLocal_940, 0f, 0f, -17.399f, 2, 1);
	if (unk_0x6252BC0DD8A320DB(iLocal_932))
	{
		uLocal_939 = unk_0x4E55EAB577C13329(iLocal_932, 220.7266f, -3320.001f, 5.2749f, 1, 1, 0);
		unk_0xB2BD5837A8D3CEDA(uLocal_939, 220.7266f, -3320.001f, 5.2749f, 1, 0, 0, 1);
		unk_0xCF39804E8C88080E(uLocal_939, 0f, 0f, 0f, 2, 1);
	}
}

void func_211()
{
	if ((!unk_0x4FAFF4BCB7633475(uLocal_941[0]) && !unk_0x4FAFF4BCB7633475(uLocal_941[0])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[3]))
	{
		uLocal_960 = unk_0x2EC137C692A52458(Local_990, Local_993, 2);
		unk_0xBF3497E24DEAD835(uLocal_960, 1);
		unk_0x3DA436E63AB0F541(Local_839.f_3[3], uLocal_960, sLocal_1008, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1148846080, 0);
		unk_0x3DA436E63AB0F541(uLocal_941[0], uLocal_960, sLocal_1008, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1148846080, 0);
		unk_0x3DA436E63AB0F541(uLocal_941[1], uLocal_960, sLocal_1008, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1148846080, 0);
	}
	if ((!unk_0x4FAFF4BCB7633475(Local_839.f_3[0]) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[1])) && !unk_0x4FAFF4BCB7633475(Local_839.f_3[2]))
	{
		unk_0xB41DEC3AAC1AA107(Local_839.f_3[0], joaat("weapon_pistol"), -1, 1, 1);
		uLocal_964 = unk_0x2EC137C692A52458(Local_996, Local_999, 2);
		unk_0xBF3497E24DEAD835(uLocal_964, 1);
		unk_0x3DA436E63AB0F541(Local_839.f_3[0], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
		unk_0x3DA436E63AB0F541(Local_839.f_3[1], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
		unk_0x3DA436E63AB0F541(Local_839.f_3[2], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
}

void func_212()
{
	int iVar0;
	
	iVar0 = 0;
	func_8(&(Local_409.f_244), 4, Local_839.f_3[1], "TaxiDom", 0, 1);
	func_8(&(Local_409.f_244), 5, Local_839.f_3[3], "TaxiGangM", 0, 1);
	unk_0x397CF4F4C8B17365(Local_839.f_3[1], "TaxiDom");
	unk_0x397CF4F4C8B17365(Local_839.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0x886FA295C1257AAA(Local_839.f_3[iVar0], unk_0xC5935DFB3F39785A(20, 50));
		unk_0xBE8796DB2B90A437(Local_839.f_3[iVar0], 2, 1);
		unk_0xBE8796DB2B90A437(Local_839.f_3[iVar0], 13, 1);
		unk_0xBE8796DB2B90A437(Local_839.f_3[iVar0], 1, 0);
		unk_0xBE8796DB2B90A437(Local_839.f_3[iVar0], 3, 1);
		unk_0xBE8796DB2B90A437(Local_839.f_3[iVar0], 37, 1);
		unk_0x0428AFDCAA63B06E(Local_839.f_3[iVar0], 42, 1);
		unk_0x25DBF9F9C6BDFFEA(Local_839.f_3[iVar0], 300f);
		unk_0x35365D1E3ADB7109(Local_839.f_3[iVar0], 300f);
		unk_0xC45887CFF81A1950(Local_839.f_3[iVar0], 300f);
		unk_0xAAA71DD7E9059338(Local_839.f_3[iVar0], 0);
		unk_0xC652B7E19CE29859(Local_839.f_3[iVar0], 1);
		iVar0++;
	}
	unk_0x3CEA1FD137ACE2D9(Local_839.f_3[0], iLocal_923);
	unk_0x3CEA1FD137ACE2D9(Local_839.f_3[1], iLocal_923);
	unk_0x3CEA1FD137ACE2D9(Local_839.f_3[2], iLocal_923);
	unk_0x3CEA1FD137ACE2D9(Local_839.f_3[3], iLocal_923);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		unk_0x0428AFDCAA63B06E(uLocal_941[iVar0], 42, 1);
		unk_0x25DBF9F9C6BDFFEA(uLocal_941[iVar0], 100f);
		unk_0x35365D1E3ADB7109(uLocal_941[iVar0], 100f);
		unk_0xC45887CFF81A1950(uLocal_941[iVar0], 100f);
		unk_0xAAA71DD7E9059338(uLocal_941[iVar0], 1);
		iVar0++;
	}
	func_8(&(Local_409.f_244), 7, uLocal_941[1], "TaxiGangGirl2", 0, 1);
	func_8(&(Local_409.f_244), 8, uLocal_941[0], "TaxiGangGirl1", 0, 1);
	unk_0x397CF4F4C8B17365(uLocal_941[1], "TaxiGangGirl2");
	unk_0x397CF4F4C8B17365(uLocal_941[0], "TaxiGangGirl1");
}

void func_213()
{
	Local_839.f_3[0] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[0], func_216(1), func_215(1), 1, 1);
	Local_839.f_3[1] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[0], func_214(2), 0f, 1, 1);
	Local_839.f_3[2] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[0], func_216(3), func_215(3), 1, 1);
	Local_839.f_3[3] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[0], func_216(4), func_215(4), 1, 1);
	unk_0x0428AFDCAA63B06E(Local_839.f_3[1], 20, 1);
	uLocal_941[0] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[1], func_216(5), func_215(5), 1, 1);
	uLocal_941[1] = unk_0xB1DBFEB95C0EFB88(26, Local_839.f_19[1], func_216(6), func_215(6), 1, 1);
	unk_0x3F58BFCF656F0DF1(uLocal_941[0], 0);
	unk_0x3F58BFCF656F0DF1(uLocal_941[1], 0);
	if (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[0], 0))
	{
		unk_0xD1C578C204015E1F(Local_839.f_3[0], 0, 1, 1, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[0], 3, 0, 5, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[0], 4, 0, 2, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[0], 10, 0, 0, 0);
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[1], 0))
	{
		unk_0xD1C578C204015E1F(Local_839.f_3[1], 0, 0, 0, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[1], 3, 0, 0, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[1], 4, 1, 0, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[1], 10, 0, 1, 0);
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[2], 0))
	{
		unk_0xD1C578C204015E1F(Local_839.f_3[2], 0, 1, 0, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[2], 3, 1, 0, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[2], 4, 1, 2, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[2], 10, 1, 0, 0);
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_839.f_3[3], 0))
	{
		unk_0xD1C578C204015E1F(Local_839.f_3[3], 0, 0, 2, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[3], 3, 1, 1, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[3], 4, 0, 2, 0);
		unk_0xD1C578C204015E1F(Local_839.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_214(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_215(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		
		case 2:
			return -129.32f;
			break;
		
		case 3:
			return 39.53f;
			break;
		
		case 4:
			return -139.98f;
			break;
		
		case 5:
			return 147.25f;
			break;
		
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_217()
{
	unk_0xBFE60A5CC0C835D8(Local_839.f_27[2], 5, 0, 0);
	unk_0xBFE60A5CC0C835D8(Local_839.f_27[3], 5, 0, 0);
}

void func_218()
{
	Local_839.f_27[0] = unk_0x5779387E956077A6(Local_839.f_32[0], func_220(1), func_219(1), 1, 1, 0);
	Local_839.f_27[1] = unk_0x5779387E956077A6(Local_839.f_32[1], func_220(2), func_219(2), 1, 1, 0);
	Local_839.f_27[2] = unk_0x5779387E956077A6(Local_839.f_32[3], func_220(3), func_219(3), 1, 1, 0);
	Local_839.f_27[3] = unk_0x5779387E956077A6(Local_839.f_32[3], func_220(4), func_219(4), 1, 1, 0);
	uLocal_945 = unk_0x5779387E956077A6(Local_839.f_32[2], func_220(5), func_219(5), 1, 1, 0);
	unk_0x3FEAE59CDE6D3946(Local_839.f_27[2], "NikoB");
	unk_0x3FEAE59CDE6D3946(Local_839.f_27[3], "RomanB");
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		
		case 2:
			return 33.5561f;
			break;
		
		case 3:
			return 87.9127f;
			break;
		
		case 4:
			return 195.38f;
			break;
		
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_220(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_221()
{
	if (!unk_0x6252BC0DD8A320DB(iLocal_930))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(iLocal_931))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_19[0]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_19[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_32[0]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_32[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_32[2]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_839.f_32[3]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(Local_881.f_32[1]))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x266D9DB5FCE4003B(iLocal_954, func_134(0)))
	{
		func_222("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x266D9DB5FCE4003B(iLocal_954, func_134(1)))
	{
		func_222("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("random@countryside_gang_fight"))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE(sLocal_1008))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(iLocal_932))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_950, 1000);
	}
	return 1;
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1DD05E817C89C737() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1DD05E817C89C737();
}

void func_223()
{
	unk_0xEC9DAA34BBB4658C(iLocal_930);
	unk_0xEC9DAA34BBB4658C(iLocal_931);
	unk_0xEC9DAA34BBB4658C(iLocal_932);
	unk_0xEC9DAA34BBB4658C(Local_839.f_19[0]);
	unk_0xEC9DAA34BBB4658C(Local_839.f_19[1]);
	unk_0xEC9DAA34BBB4658C(Local_839.f_32[0]);
	unk_0xEC9DAA34BBB4658C(Local_839.f_32[1]);
	unk_0xEC9DAA34BBB4658C(Local_839.f_32[2]);
	unk_0xEC9DAA34BBB4658C(Local_839.f_32[3]);
	unk_0xEC9DAA34BBB4658C(Local_881.f_32[1]);
	unk_0xD772E6694B8472A6(iLocal_954, func_134(0));
	unk_0xD772E6694B8472A6(iLocal_954, func_134(1));
	unk_0x80813AC549A1E8AE("random@countryside_gang_fight");
	unk_0x80813AC549A1E8AE(sLocal_1008);
}

void func_224()
{
	func_171(&(Local_409.f_55), 2);
	func_171(&(Local_409.f_55), 4);
	func_171(&(Local_409.f_55), 16);
	func_171(&(Local_409.f_55), 64);
	func_171(&(Local_409.f_55), 256);
	func_171(&(Local_409.f_55), 512);
	func_171(&(Local_409.f_55), 1024);
	func_171(&(Local_409.f_55), 2048);
	func_171(&(Local_409.f_55), 4096);
	func_171(&(Local_409.f_55), 1073741824);
	func_171(&(Local_409.f_100), 8);
	func_171(&(Local_409.f_100), 2048);
	func_171(&(Local_409.f_100), 256);
	func_171(&uLocal_1105, 2);
}

void func_225(var uParam0)
{
	func_226(uParam0, 1000);
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x19626F992DC71FB9(uParam0->f_3);
		unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
	}
	func_157();
	func_200(uParam0);
}

void func_226(var uParam0, int iParam1)
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

void func_227(var uParam0)
{
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	func_226(uParam0, 1000);
}

void func_228(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_298(uParam0, 16, 4f, 0);
		if (func_229(uParam0))
		{
			func_49();
		}
	}
	func_259(uParam0, iParam2, bParam3);
}

int func_229(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_113())
	{
		Var6 = { func_231() };
		if (!unk_0xD6F9DEE4765092A9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x1B79E937E91F40C3(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_230(&Var0);
			if (unk_0x1B79E937E91F40C3(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_230(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_231()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_232(var uParam0)
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

int func_233(var uParam0, bool bParam1, float fParam2)
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
			func_190(uParam0, 1);
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
			func_258(uParam0);
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
			if (func_305(uParam0, 14))
			{
				func_200(uParam0);
				func_191(uParam0, 0);
			}
			if (func_305(uParam0, 9))
			{
				func_110(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_257(uParam0, uParam0->f_3) > 300f)
				{
					func_330(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 || ((func_170(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 20f && func_10(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_10(uParam0->f_4, uParam0->f_11, 1) <= 28f))
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
							if (!func_161(uParam0))
							{
								unk_0x974022927CB47E68(uParam0->f_3);
							}
							else if (((unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 0) && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 7) && func_257(uParam0, uParam0->f_3) > 8f)
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
							if (func_170(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_250(uParam0, 1))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_330(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_249(uParam0->f_4))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_330(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_247(uParam0);
						if (func_257(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_235(uParam0))
								{
									func_234(uParam0);
									iLocal_89 = unk_0x1DD05E817C89C737();
									unk_0x0428AFDCAA63B06E(uParam0->f_3, 26, 1);
									func_110(uParam0, 5, 0);
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

void func_234(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		unk_0xFE54B8568B2ABD12(&(uParam0->f_8));
	}
}

int func_235(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_222("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		func_246();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_244(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_166(uParam0, 0, 1084227584) && func_174(1, 1, 1))
			{
				if (func_250(uParam0, 1))
				{
					iLocal_88 = unk_0x1DD05E817C89C737();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_330(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_252(uParam0->f_4, uParam0->f_3);
				iVar9 = func_251(uParam0, &iVar10);
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
			iVar12 = func_243(&(uParam0->f_409), unk_0x0D1381B6E0F3987D(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0D1381B6E0F3987D(uParam0->f_4, Var0), 1);
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
				func_242(0, 0, 1);
				unk_0x55F7AC4B2B875901(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 3f, 0);
				unk_0xBAAB54D57B40765E(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 25f, 0);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_118();
				func_259(uParam0, 0, 0);
				Var13 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, Var6) };
				unk_0xB2BD5837A8D3CEDA(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uParam0->f_3, func_240(uParam0));
				func_239(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_222("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0x6515021478088FBC(uParam0->f_4, func_238(uParam0->f_7), 1);
				}
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
				unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x10B228D2FDB7AF16(800);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_118();
				func_259(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
			{
				func_236(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
			unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			func_236(1, 1, 1);
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

void func_236(bool bParam0, bool bParam1, int iParam2)
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
	func_237(23, 0);
}

void func_237(bool bParam0, bool bParam1)
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

int func_238(int iParam0)
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

void func_239(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x78411E34CF90EA8C(*uParam0))
	{
		*uParam0 = unk_0x96A32328480B485C(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_240(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_241(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_241(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x97BC40FFA2FFCCD2((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_42(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_237(23, 1);
}

int func_243(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
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

int func_244(int iParam0)
{
	if (func_245() && unk_0x1DD05E817C89C737() >= iParam0 + 1000)
	{
		unk_0x8F72AF14CE5AACE4(500);
		while (!unk_0x15CCE8886267624F())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_42(0);
		func_157();
		return 1;
	}
	return 0;
}

int func_245()
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

void func_246()
{
	if (func_35())
	{
		unk_0xD13237BC328B938E("appInternet");
	}
	if (func_34())
	{
		unk_0xD13237BC328B938E("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_247(var uParam0)
{
	var uVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (func_163(uParam0->f_3, 1) > 30f || func_248(uParam0))
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
					func_330(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_248(var uParam0)
{
	if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || unk_0xD1F1A906BA9226BE(uParam0->f_4))
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

int func_250(var uParam0, bool bParam1)
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

int func_251(var uParam0, var uParam1)
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

int func_252(int iParam0, int iParam1)
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

int func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (!unk_0xF6C26AE940C14749(uParam0->f_3) && func_163(uParam0->f_3, 1) < fParam2)
		{
			if (!func_305(uParam0, 5))
			{
				func_298(uParam0, 5, 0, 0);
			}
		}
		else if (func_305(uParam0, 5))
		{
			func_110(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && unk_0xDF93B3CFAC96698F(uParam0->f_4) < fParam4) && !unk_0xF6C26AE940C14749(uParam0->f_3)) || func_163(uParam0->f_3, 1) <= fParam3)
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
			if ((func_170(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var3.f_2)) < 5f)
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
					func_228(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_255(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_255(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, uParam2, func_256(iParam3), 0);
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
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (func_161(uParam0))
		{
			return func_170(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_258(var uParam0)
{
	func_198(uParam0, uParam0->f_3);
	if (func_161(uParam0))
	{
		if (func_305(uParam0, 14))
		{
			func_200(uParam0);
			if (unk_0xC450B06E5AAA0985(uParam0->f_10))
			{
				unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			}
		}
	}
	if (!func_305(uParam0, 9))
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_8))
		{
			unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
			unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		}
		func_298(uParam0, 9, 0, 0);
		func_156("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_259(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_298(uParam0, 16, 4f, 0);
		unk_0x406CBCEA35499884();
	}
}

int func_260(var uParam0, int iParam1)
{
	if (!unk_0xDCB78A15E5F495DC(2))
	{
		return 0;
	}
	func_264(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()) && !func_22(uParam0->f_44, 256))
			{
				func_171(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				func_228(uParam0, 135, 1, 0, 1);
				func_171(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_263(uParam0, iParam1))
	{
		if (func_163(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
				func_228(uParam0, 133, 1, 0, 1);
				func_171(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x4FAFF4BCB7633475(uParam0->f_3) || unk_0xCA038E64C65D1F9D(uParam0->f_3)) || func_163(uParam0->f_3, 1) > 400f)
		{
			func_330(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6EF03BE64E058E2F(uParam0->f_2, 0);
		unk_0x5FE0938FDE9B0958(uParam0->f_4, 1);
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x306C263AAEC4A988(uParam0->f_4);
			func_261(uParam0);
			func_51(2, 0);
			bLocal_94 = true;
			func_112(&uLocal_90);
			return 1;
		}
		else
		{
			func_330(uParam0, "No Taxi", 21);
			func_160("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_261(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (func_262())
		{
		}
	}
}

int func_262()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)
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
							func_160("TX_VIP_DMGD", -1);
							if (func_159("TX_VIP_DMGD"))
							{
								func_171(&(uParam0->f_44), 64);
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
							func_160("TX_VIP_CAR", -1);
							if (func_159("TX_VIP_CAR"))
							{
								func_171(&(uParam0->f_44), 32);
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
							func_160("TX_VIP_SMALL", -1);
							if (func_159("TX_VIP_SMALL"))
							{
								func_171(&(uParam0->f_44), 16);
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
			func_122(&(uParam0->f_44), 16);
			func_122(&(uParam0->f_44), 64);
			func_122(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_264(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_266())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_265())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

var func_265()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_266()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_123(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_268()
{
	Local_343.f_0 = 0;
	func_285(44088, 44063, 1);
	func_285(43824, 43801, 1);
	func_285(43739, 43714, 1);
	func_285(43642, 43618, 1);
	func_285(43508, 43487, 1);
	func_285(43434, 43409, 1);
	func_285(43267, 43244, 1);
}

int func_269(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_270(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_272(uParam0->f_4))
		{
			func_271(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_272(int iParam0)
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

int func_273(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_274(var uParam0)
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		if (func_275(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_271(uParam0, 11);
	return 1;
}

int func_277(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (unk_0x69799E0840A34AFB(uParam0->f_4) && !unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			if (!func_305(uParam0, 25))
			{
				func_298(uParam0, 25, 0, 0);
			}
			else if (func_111(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_305(uParam0, 25))
		{
			func_110(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_278(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_279(var uParam0)
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

int func_280(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_281(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
			{
				if (func_275(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_282(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_283(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_271(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)
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

void func_285(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_165(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_165(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_286(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_287(var uParam0)
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
	if (!unk_0x6252BC0DD8A320DB(iLocal_929))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_950, 1000);
		return 0;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(uLocal_1112))
	{
		return 0;
	}
	if (!func_292(&iLocal_950, 1))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_950, 1000);
		return 0;
	}
	return 1;
}

int func_292(int iParam0, bool bParam1)
{
	if (!unk_0x6252BC0DD8A320DB(func_21()))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xE100DD4F82A51BDE("gestures@m@standing@casual"))
		{
			func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@taxi@"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@towingcome_here"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("misscommon@response"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xDCB78A15E5F495DC(2))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
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
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
	{
		uParam0->f_8 = func_295(uParam0->f_3, 0, 0);
		unk_0xF3603E8FF037B294(1, 0);
		unk_0xBC64B805EE071A37(uParam0->f_8, 1);
		unk_0x594D5D0D7071B0DE(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xE67051907958B5EB(uParam0->f_3, unk_0x4A8C381C258A124D(), -1, 2048, 4);
	}
	return 1;
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	return func_131(iParam0, !bParam1, bParam2);
}

int func_296(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		func_297(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_39(uParam0->f_14, 0);
		unk_0x55F7AC4B2B875901(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam10);
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

void func_297(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x44589DAC2564FF02(Param1, 20f, 5f, 0);
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
				func_104(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_103(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_103(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_299()
{
	unk_0xEC9DAA34BBB4658C(iLocal_929);
	func_301(1);
	uLocal_1112 = func_300();
}

var func_300()
{
	return unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)
{
	unk_0xEC9DAA34BBB4658C(func_21());
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
		func_171(&(Global_113648.f_19099), 128);
	}
}

void func_302(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			unk_0x19626F992DC71FB9((*uParam0)[iVar0]);
			unk_0x1CA08719184AFC6F((*uParam0)[iVar0], 13, 1);
			unk_0xD0557B139A542F12(&uLocal_934);
			unk_0xB5396F1FB088FE38(&uLocal_934);
			unk_0x0FD8B5F4BB15CD71(0, unk_0xC5935DFB3F39785A(1, 1000));
			unk_0xD844F5E50DAB6FF7(0, Local_409.f_3, 4000f, -1, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_934);
			unk_0x4BD42B0527065BB6((*uParam0)[iVar0], uLocal_934);
			unk_0x44FB298D6382876D((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xD414C47AFF81382A(5, iLocal_923, joaat("player"));
	unk_0xD414C47AFF81382A(5, iLocal_923, Local_409.f_413);
	unk_0xD414C47AFF81382A(5, iLocal_923, joaat("COP"));
	unk_0xD414C47AFF81382A(5, joaat("COP"), iLocal_923);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0]))
		{
			unk_0x974022927CB47E68((*uParam0)[iVar0]);
			unk_0x23B29877D0BE9547((*uParam0)[iVar0], &iVar1, 1);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				unk_0xB41DEC3AAC1AA107((*uParam0)[iVar0], joaat("weapon_pistol"), -1, 0, 1);
			}
			unk_0xC652B7E19CE29859((*uParam0)[iVar0], 30);
			unk_0xF6CC23160DD0AAED((*uParam0)[iVar0], 1000f, 0);
			unk_0x44FB298D6382876D((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_304(var uParam0, int iParam1)
{
	func_112(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_305(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_306(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_228(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_228(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_298(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_228(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_228(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!func_113())
			{
				if (uParam0->f_112)
				{
					func_228(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_228(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_112(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_329(uParam0))
			{
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(5, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_112(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_328(uParam0, 1);
				func_326(0, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_112(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_328(uParam0, 1);
				func_326(1, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8D91ADE44AC79BC9(uParam0->f_4);
				func_112(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_101(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_322(uParam0))
			{
				func_328(uParam0, 1);
				func_326(8, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_112(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_328(uParam0, 1);
				func_326(6, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_112(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_320(uParam0))
			{
				func_328(uParam0, 1);
				func_326(4, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_112(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_319(uParam0))
			{
				func_326(7, uParam0);
				func_328(uParam0, 1);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_112(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
		}
		else if (func_101(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_328(uParam0, 1);
				func_326(9, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_112(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_312(uParam0))
			{
				func_328(uParam0, 1);
				func_326(13, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_112(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_311(uParam0))
			{
				func_328(uParam0, 1);
				func_326(14, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_112(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_310(uParam0))
			{
				func_328(uParam0, 1);
				func_326(11, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_112(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_101(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_328(uParam0, 1);
				func_326(12, uParam0);
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_308(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_101(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				if (uParam0->f_113)
				{
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(2, uParam0);
				func_325(uParam0);
			}
		}
	}
}

int func_307(var uParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_2))
	{
		if ((!unk_0xD9CCFCDF70474932(uParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_112(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_101(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_100(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_100(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_308(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_104(uParam0, fParam1);
	}
}

int func_309(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_112(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_112(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_101(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x1D5CD3EAAA7422B0(uLocal_342) - unk_0x1D5CD3EAAA7422B0(Var0.f_0)) < 0f)
			{
				func_100(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_101(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_100(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	if (((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xFC8BFE4B41177C22(uParam0->f_5))
			{
				if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f && func_170(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0) && !unk_0xC39AE5D390581AD5(uParam0->f_5, -1, 0)))
				{
					func_112(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_101(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_170(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_101(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_100(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	if (((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_313(uParam0->f_4) && unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_112(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_313(int iParam0)
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
	Var9 = { func_317((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_316(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_314(unk_0xD1A6A821F5AC81DB(iParam0, 1), Var15, Var18, Var21);
}

int func_314(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_317(Param6 - Param3) };
	Var3 = { func_317(Param9 - Param3) };
	fVar6 = func_315(Param0, Var0);
	fVar7 = func_315(Param3, Var0);
	fVar8 = func_315(Param6, Var0);
	fVar9 = func_315(Param0, Var3);
	fVar10 = func_315(Param3, Var3);
	fVar11 = func_315(Param9, Var3);
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

float func_315(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_316(struct<3> Param0, int iParam3)
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

Vector3 func_317(struct<3> Param0)
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

int func_318(var uParam0)
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

int func_319(var uParam0)
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

int func_320(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0xAEAB3904F55BB907(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_112(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_100(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0x0A2AACDCE82B8394(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_112(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(var uParam0)
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
					func_228(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_228(uParam0, 72, 1, 0, 1);
				}
				func_100(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_112(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_100(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xD2A0543EC400E1A5(uParam0->f_4) && unk_0x3F18810075C77D41(uParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_112(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_100(&(Local_190[0 /*10*/].f_3));
				func_103(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_103(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_298(uParam0, 10, 0f, 1);
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
}

void func_326(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_327(uParam1, iParam0);
	func_100(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_327(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_328(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_329(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xDF93B3CFAC96698F(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_112(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_101(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_330(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_157();
	func_435(2);
	Var0 = { func_158() };
	if ((!unk_0xD6F9DEE4765092A9(&Var0) && func_113()) && !unk_0x1B79E937E91F40C3(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x406CBCEA35499884();
		unk_0x428C32CC68809A35(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (!func_177(uParam0))
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
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
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
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_177(uParam0))
			{
				if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
				{
					func_333(uParam0, 4096, 0);
				}
				else
				{
					func_333(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_336(uParam0, &Var0);
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
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_255(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
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
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_255(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_333(uParam0, 0, 0);
			func_336(uParam0, &Var0);
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
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_336(uParam0, &Var0);
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
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_332(&Var0);
			func_331(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_336(uParam0, &Var0);
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
					func_336(uParam0, &Var0);
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_298(uParam0, 3, 0f, 1);
	}
}

int func_331(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_140(sParam2, iParam3, 0);
}

void func_332(char* sParam0)
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

void func_333(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		unk_0xAAA71DD7E9059338(uParam0->f_3, 0);
		unk_0xE4DC7B3DD712372B(uParam0->f_3);
		unk_0x1CA08719184AFC6F(uParam0->f_3, 3, 0);
		unk_0xBE8796DB2B90A437(uParam0->f_3, 17, 1);
		unk_0x974022927CB47E68(uParam0->f_3);
		if ((func_207(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_335(uParam0->f_29)) && !bParam2)
		{
			func_334(uParam0);
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

void func_334(var uParam0)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
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

int func_335(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0, char* sParam1)
{
	if (func_337(uParam0))
	{
		func_331(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_337(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_170(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 40f && !unk_0xF6C26AE940C14749(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(var uParam0)
{
	return uParam0->f_118;
}

void func_339()
{
	func_371(&Local_409);
	if (func_370(&Local_409, &Local_1034))
	{
		switch (Local_1034.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_369(&Local_409))
					{
						if (func_368("TX_OBJ_GYB_DO") || unk_0xC450B06E5AAA0985(Local_409.f_9))
						{
							Local_1034.f_27++;
						}
						else if (func_367(&Local_409) != 10)
						{
							func_228(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_367(&Local_409) > 10 && func_367(&Local_409) != 15) && !func_369(&Local_409))
				{
					func_228(&Local_409, 15, 1, 0, 0);
					if (bLocal_1033)
					{
					}
					func_304(&Local_409, 7);
				}
				break;
			
			case 2:
				if (((func_367(&Local_409) != 16 && !func_369(&Local_409)) && func_111(&Local_409, 18) > 2f) && !func_113())
				{
					func_228(&Local_409, 16, 1, 0, 0);
					if (bLocal_1033)
					{
					}
				}
				break;
			
			case 3:
				if (func_111(&Local_409, 18) > unk_0xD2AA6F822D3A55D2(2f, 7f))
				{
					if (!func_181(&Local_409))
					{
						func_366(&Local_409, 0);
						Local_1034.f_27++;
						if (bLocal_1033)
						{
						}
					}
				}
				break;
			}
	}
	func_340(&Local_409, &uLocal_1064, &Local_1034, bLocal_1033);
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_348(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_305(uParam0, 2))
	{
		if (func_347(uParam1))
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
				if (!func_346(uParam0))
				{
					uParam2->f_7 = { func_345(uParam1) };
					func_331(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_113())
				{
					uParam2->f_13 = { func_231() };
					if (unk_0x1B79E937E91F40C3(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_165(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_184(uParam0))
				{
					if (func_113())
					{
						func_298(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_342() };
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
				else if (func_113())
				{
					uParam2->f_19 = { func_158() };
				}
				else
				{
					func_165(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_305(uParam0, 14) && !func_113()) && !func_184(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					func_298(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_113())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_113())
				{
					func_165(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_140(sParam2, iParam4, 0);
}

struct<6> func_342()
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

void func_343(var uParam0)
{
	int iVar0;
	
	iVar0 = func_344(uParam0);
	if (iVar0 > -1)
	{
		func_122(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_122(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_171(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_205(), 24);
	}
}

int func_344(var uParam0)
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

struct<6> func_345(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_171(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_346(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_186("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_186("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_186("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_186("TX_OBJ_GYB_DO", 0, 0) || func_186("TAXI_OBJ_GYB", 0, 0)) || func_186("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_186("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_186("TX_OBJ_CYI_DO", 0, 0) || func_186("TAXI_OBJ_CYI_01", 0, 0)) || func_186("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_186("TX_OBJ_GYN_DO", 0, 0) || func_186("TAXI_OBJ_GYN", 0, 0)) || func_186("TAXI_OBJ_GYN_TG", 0, 0)) || func_186("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_186("TAXI_OBJ_CC1", 0, 0) || func_186("TAXI_OBJ_CC2", 0, 0)) || func_186("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_186("TAXI_OBJ_FTC1", 0, 0) || func_186("TAXI_OBJ_FTC2", 0, 0)) || func_186("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_186("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_186("TAXI_OBJ_GETRUN", 0, 0) || func_186("TAXI_OBJ_DRIVE", 0, 0)) || func_186("TAXI_OBJ_RETURN", 0, 0)) || func_186("TAXI_OBJ_POL", 0, 0)) || func_186("TAXI_OBJ_RUNOUT", 0, 0)) || func_186("TAXI_OBJ_POL", 0, 0));
}

int func_347(var uParam0)
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

void func_348(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_346(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_305(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_367(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_113())
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
						func_363(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				func_195(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					func_197(1);
					if (uParam0->f_411 == 9)
					{
						func_156("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_156("TAXI_VIP_RETURN", 7500, 1);
					}
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
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
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > func_132(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_113()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_367(uParam0))
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
				func_363(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_331(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_228(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_298(uParam0, 16, 0, 0);
				func_228(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_365(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_363(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_298(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_156("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_156("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_228(uParam0, 10, 1, 0, 0);
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
				func_230(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_255(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_228(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_358(uParam0, 33554432, Var0, "", 1, 8);
				func_298(uParam0, 16, 0, 0);
				func_228(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_113())
				{
					func_357(uParam0, 0);
					func_171(&(uParam0->f_44), 4);
					func_298(uParam0, 16, 0, 0);
					func_228(uParam0, 13, 0, 0, 0);
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
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
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
						func_230(&Var0);
					}
					func_355(Var0, uParam1);
					func_171(&(uParam0->f_81), 67108864);
					func_298(uParam0, 16, 0, 0);
					func_298(uParam0, 11, 0, 0);
					func_259(uParam0, 0, 0);
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
							func_230(&Var0);
						}
					}
					func_355(Var0, uParam1);
					func_298(uParam0, 11, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
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
					func_230(&Var0);
				}
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
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
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
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
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				func_171(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 1, 0, 8);
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
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
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
					func_354(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_355(Var0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_259(uParam0, 0, 0);
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
					func_354(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_355(Var0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 12:
				func_156("TAXI_OBJ_GYB", 3500, 1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_156("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_156("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_156("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
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
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_156("TAXI_OBJ_CYI_01", 7500, 1);
					func_171(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 33:
				func_156("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_230(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_355(Var0, uParam1);
						}
						else
						{
							func_363(uParam0, &Var0, 0, 0, 8);
						}
						func_171(&(uParam0->f_82), 8192);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_230(&Var0);
					func_363(uParam0, &Var0, 0, 0, 8);
					func_171(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_230(&Var0);
					func_363(uParam0, &Var0, 0, 0, 8);
					func_171(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 46, 1, 0, 0);
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
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_259(uParam0, 0, 0);
				break;
			
			case 139:
				func_156("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_228(uParam0, 13, 0, 0, 0);
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
					func_171(&(uParam0->f_82), 268435456);
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
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
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
					func_171(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_156("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_259(uParam0, 0, 0);
				func_228(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_113())
				{
					func_156("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_259(uParam0, 0, 0);
					func_228(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_156("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_259(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_353(uParam0, 1, Var0, "_sick1", 8);
					func_122(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_353(uParam0, 2, Var0, "_sick2", 8);
					func_122(&(uParam0->f_81), 1);
				}
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
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
				func_171(&(uParam0->f_81), 2097152);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_364(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_364(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_353(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_353(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_353(uParam0, 8, Var0, "_turns3", 8);
					func_122(&(uParam0->f_81), 4);
					func_122(&(uParam0->f_81), 8);
				}
				func_364(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_365(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_331(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_365(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_365(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_364(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 128);
					func_122(&(uParam0->f_83), 256);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 256);
					func_122(&(uParam0->f_83), 512);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 512);
					func_122(&(uParam0->f_83), 128);
					func_298(uParam0, 16, 0, 0);
				}
				func_259(uParam0, 0, 0);
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
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 1);
					func_122(&(uParam0->f_83), 2);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_122(&(uParam0->f_83), 4);
					}
					else
					{
						func_122(&(uParam0->f_83), 1);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_230(&Var0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 4);
					func_122(&(uParam0->f_83), 1);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_358(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_358(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_364(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_358(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_358(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_364(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_351(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_351(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_351(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_259(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_365(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_358(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_358(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 8);
					func_122(&(uParam0->f_83), 16);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 16);
					func_122(&(uParam0->f_83), 32);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_122(&(uParam0->f_83), 64);
					}
					else
					{
						func_122(&(uParam0->f_83), 8);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_171(&(uParam0->f_83), 64);
					func_122(&(uParam0->f_83), 8);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_113())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 65));
					func_259(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_113())
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
					func_363(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, Var0, func_362(uParam0, 66));
					func_259(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_113())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								func_364(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								func_364(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_365(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_364(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_298(uParam0, 16, 0, 0);
								func_259(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_363(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_259(uParam0, 0, 0);
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
									func_230(&Var0);
									func_363(uParam0, &Var0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_259(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_363(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_228(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_364(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_351(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_351(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_351(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_259(uParam0, 0, 0);
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
				func_365(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_364(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_352(uParam0))
				{
					func_360(uParam0, Var0, func_362(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_255(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_350(uParam0, Var0, 8);
				}
				func_364(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_171(&(uParam0->f_83), 1024);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_171(&(uParam0->f_83), 2048);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_171(&(uParam0->f_83), 4096);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_230(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_351(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_122(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_351(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_364(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 52, 1, 0, 0);
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
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_255(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_352(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_363(uParam0, &Var0, 0, 0, 8);
						func_228(uParam0, 52, 1, 0, 0);
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
						func_363(uParam0, &Var0, 0, 0, 8);
						func_298(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_365(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_259(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_364(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_298(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					func_156("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_358(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_358(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_358(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_364(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_349(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_349(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_364(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 100:
				func_156("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_259(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
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
					func_230(&Var0);
				}
				func_171(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
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
						func_230(&Var0);
						func_355(Var0, uParam1);
						func_171(&(uParam0->f_82), 65536);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_230(&Var0);
						func_355(Var0, uParam1);
						func_171(&(uParam0->f_82), 131072);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_259(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_171(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_171(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_171(&(uParam0->f_82), 33554432);
				}
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_365(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_230(&Var0);
					func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_363(uParam0, &Var0, 0, 0, 8);
				}
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_355(Var0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_365(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_139(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_171(&(uParam0->f_81), 2097152);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_230(&Var0);
				func_355(Var0, uParam1);
				func_171(&(uParam0->f_81), 67108864);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_358(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_255(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_228(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_358(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_228(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_156("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_259(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_358(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
						{
							func_255(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_358(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_228(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_156("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_259(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_358(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_259(uParam0, 0, 0);
				break;
			
			case 88:
				func_156("TAXI_TIEFLEE", 7500, 1);
				func_259(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_156("TAXI_OBJ_CYI_1B", 7500, 1);
					func_171(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_259(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_230(&Var0);
				func_363(uParam0, &Var0, 0, 0, 8);
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
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
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
				func_363(uParam0, &Var0, 0, 0, 8);
				func_259(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_363(uParam0, &Var0, 1, 0, 8);
				func_228(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_156("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_228(uParam0, 0, 0, 0, 0);
				func_259(uParam0, 0, 0);
				break;
			}
	}
}

void func_349(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_171(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_230(&Param2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_350(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_171(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_171(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xC5935DFB3F39785A(1, 3), 24);
	}
	func_139(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_298(uParam0, 16, 0, 0);
}

void func_351(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_171(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_230(&Param2);
		}
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_352(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_171(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_354(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_165(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_230(sParam2);
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

void func_355(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_356(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_171(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_356(var uParam0)
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

void func_357(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_156("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_156("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_156("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_156("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_156("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_156("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_156("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_156("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_156("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_156("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_156("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_156("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_156("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_358(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_171(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_230(&Param2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_359(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_132(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam3);
	return uVar0;
}

void func_360(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_298(uParam0, 16, 0, 0);
	func_298(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
	{
		unk_0x695EDD4AD352F831(uParam0->f_3, &cParam1, func_361(uParam0));
	}
}

char* func_361(var uParam0)
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

char* func_362(var uParam0, int iParam1)
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

int func_363(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_298(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_298(uParam0, 17, 0f, 1);
	}
	func_259(uParam0, iParam2, 0);
	return func_331(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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
				func_122(uParam2, 4096);
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
				func_122(uParam2, 4096);
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
				func_122(uParam2, 4096);
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
				func_122(uParam2, 4096);
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

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_165(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_230(sParam2);
				}
				else
				{
					func_230(sParam2);
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

void func_366(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_367(var uParam0)
{
	return uParam0->f_416;
}

int func_368(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (func_186(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(var uParam0)
{
	if (func_113())
	{
		return 1;
	}
	if (func_305(uParam0, 17))
	{
		return 1;
	}
	if (func_305(uParam0, 14))
	{
		return 1;
	}
	if (func_184(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_305(uParam0, 9));
}

void func_371(var uParam0)
{
	if (func_305(uParam0, 17))
	{
		if (!func_305(uParam0, 14))
		{
			if (!func_184(uParam0))
			{
				if (!func_113())
				{
					func_110(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_372(var uParam0)
{
	return uParam0->f_117;
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_124)) && func_113())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_113())
				{
					StringCopy(&(uParam0->f_124), func_205(), 24);
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

void func_374(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_275(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_275(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_275(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_165(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x1DD05E817C89C737();
							}
						}
						else
						{
							func_123(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_275(Local_343.f_1[iVar0 /*4*/], 4) && !func_275(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_165(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_375(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_305(uParam0, 27))
	{
		func_304(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_111(uParam0, 27) > 5f)
	{
		if (func_402(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_298(uParam0, 27, 0, 0);
			func_298(uParam0, 10, 0, 0);
			func_400(uParam0, &uVar0, uParam1);
		}
		func_397(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_376(uParam0);
	}
	if ((((!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && (unk_0x78411E34CF90EA8C(*uParam0) && !unk_0xBC886554B5888A64(*uParam0))) && (unk_0x78411E34CF90EA8C(uParam0->f_1) && !unk_0xBC886554B5888A64(uParam0->f_1))) && !unk_0xFBA523E6F8ACE541()) && !func_113())
	{
		if (func_111(uParam0, 26) > 10f)
		{
			func_110(uParam0, 26, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		}
	}
	else if (func_305(uParam0, 26))
	{
		func_110(uParam0, 26, 0);
	}
	return 0;
}

void func_376(var uParam0)
{
	if (!func_396(uParam0->f_429))
	{
		uParam0->f_429 = func_395();
		func_386(&(uParam0->f_429), 0, 0, unk_0xC5935DFB3F39785A(4, 7), 0, 0, 0);
	}
	else if (func_377(uParam0->f_429))
	{
		func_330(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_377(int iParam0)
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_380(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_381(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_382(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_383(int iParam0)
{
	return iParam0 & 15;
}

var func_384(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_385(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
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
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)
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

void func_389(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_394(int iParam0, int iParam1)
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

int func_395()
{
	var uVar0;
	
	func_393(&uVar0, unk_0x4BA5A16068183C5E());
	func_392(&uVar0, unk_0x18E502A71E28968C());
	func_391(&uVar0, unk_0x5295501D0862870D());
	func_389(&uVar0, unk_0xB12880C92EA6EE15());
	func_390(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_388(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

int func_396(int iParam0)
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
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_397(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_399()) && !func_161(uParam0)) || ((uParam0->f_411 != 9 && func_263(uParam0, 1)) && !func_161(uParam0)))
		{
			uVar0 = func_398(uParam0->f_4);
			unk_0x76AD45C3946F87DD(&uVar0);
			uParam0->f_4 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_4, 1, 0);
			func_200(uParam0);
			func_191(uParam0, 0);
		}
	}
}

var func_398(var uParam0)
{
	return uParam0;
}

int func_399()
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
					if (unk_0x2E6A27037F1DC473(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_400(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_401(uParam0, 0, 4))
			{
				func_330(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_401(uParam0, 0, 8))
			{
				func_330(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_401(uParam0, 1, 1))
			{
				func_330(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_177(uParam0))
			{
				func_330(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_401(var uParam0, int iParam1, int iParam2)
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
				func_228(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_228(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_402(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_408(iParam0, uParam2))
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
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_403(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_403(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_404(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_163(iParam0, 1) < 1.5f)
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

int func_404(int iParam0, int iParam1)
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

int func_405(int iParam0, int iParam1, var uParam2)
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

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x74CD4FE549433E92(iParam0) || func_407(iVar3))
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

int func_407(int iParam0)
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
						if (func_170(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
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

int func_408(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_163(iParam0, 1) < uParam1->f_2)
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

void func_409()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<6> Var7;
	
	Var7 = { func_158() };
	if ((((iLocal_933 < 4 && func_163(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !iLocal_976)
	{
		if (unk_0x875A214D5EBCA509(0, 80))
		{
			if (unk_0x78411E34CF90EA8C(Local_409.f_0))
			{
				if (!unk_0xBC886554B5888A64(Local_409.f_0))
				{
					iLocal_1124 = unk_0x1DD05E817C89C737();
					unk_0x4CBC5D1BC117616B(Local_409.f_0, 1);
					unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	if ((((iLocal_933 < 4 && func_163(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !iLocal_976)
	{
		if (iLocal_967)
		{
			switch (iLocal_1122)
			{
				case 0:
					iLocal_1123 = unk_0x1DD05E817C89C737();
					Var0 = { 223.3f, -3326.3f, 6.4f };
					Var3 = { -4.1f, 0f, 78f };
					fVar6 = 24.3f;
					func_410(Var0, Var3, fVar6);
					iLocal_1122 = 1;
					break;
				
				case 1:
					if (unk_0x1B79E937E91F40C3("txm12_ig1c_3", &Var7))
					{
						iLocal_1123 = unk_0x1DD05E817C89C737();
						Var0 = { 211.1f, -3326.1f, 5.8f };
						Var3 = { 4.1f, 0f, -81.2f };
						fVar6 = 24.3f;
						func_410(Var0, Var3, fVar6);
						iLocal_1122 = 2;
					}
					break;
				
				case 2:
					if ((unk_0x1DD05E817C89C737() - iLocal_1123) > 5000)
					{
						iLocal_1123 = unk_0x1DD05E817C89C737();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_410(Var0, Var3, fVar6);
						iLocal_1122 = 3;
					}
					break;
				
				case 3:
					if (unk_0x1B79E937E91F40C3("txm12_deal1_3", &Var7))
					{
						iLocal_1123 = unk_0x1DD05E817C89C737();
						Var0 = { 194.7488f, -3328.101f, 5.9471f };
						Var3 = { -0.3369f, -0.0169f, -55.7257f };
						fVar6 = 24.5237f;
						func_410(Var0, Var3, fVar6);
						iLocal_1122 = 4;
					}
					break;
				
				case 4:
					if (unk_0x1B79E937E91F40C3("txm12_deal1_5", &Var7))
					{
						iLocal_1123 = unk_0x1DD05E817C89C737();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_410(Var0, Var3, fVar6);
						iLocal_1122 = 5;
					}
					break;
				
				case 5:
					if (unk_0x1B79E937E91F40C3("txm12_deal1_7", &Var7))
					{
						iLocal_1123 = unk_0x1DD05E817C89C737();
						Var0 = { 194.1f, -3324.9f, 6.2f };
						Var3 = { -4.6f, 0f, -83.1f };
						fVar6 = 29f;
						func_410(Var0, Var3, fVar6);
						iLocal_1122 = 6;
					}
					break;
			}
			if (unk_0x875A214D5EBCA509(0, 80) && (unk_0x1DD05E817C89C737() - iLocal_1124) > 500)
			{
				if (unk_0x78411E34CF90EA8C(Local_409.f_0))
				{
					unk_0x4CBC5D1BC117616B(Local_409.f_0, 0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	else if (iLocal_967)
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x78411E34CF90EA8C(Local_409.f_0))
			{
				if (unk_0xBC886554B5888A64(Local_409.f_0))
				{
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					unk_0x64BB72494B9DF6DC(0f);
					unk_0x4CBC5D1BC117616B(Local_409.f_0, 0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
			}
		}
		if (iLocal_976)
		{
			if (!func_16(&uLocal_1030))
			{
				if (func_154() && unk_0xBC886554B5888A64(Local_409.f_0))
				{
					if (!iLocal_977)
					{
						unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_977 = 1;
					}
				}
				func_103(&uLocal_1030);
			}
			else if (func_101(&uLocal_1030) > 0.3f)
			{
				if (unk_0x78411E34CF90EA8C(Local_409.f_0))
				{
					if (unk_0xBC886554B5888A64(Local_409.f_0))
					{
						unk_0xD815D4BD1AE9E85A(0f, 1065353216);
						unk_0x64BB72494B9DF6DC(0f);
						unk_0x4CBC5D1BC117616B(Local_409.f_0, 0);
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x0A0A06C514052E80(1);
	}
}

void func_410(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!unk_0x78411E34CF90EA8C(Local_409.f_0))
	{
		func_239(&Local_409, 0f, 0f, 0f, 0f, 0f, 0f, fParam6);
	}
	unk_0x1761457F86AD0EE2(Local_409.f_0, Param0);
	unk_0x5E5CEC33463AD803(Local_409.f_0, Param3, 2);
	unk_0x2A09425009DAD0F5(Local_409.f_0, "HAND_SHAKE", 0.3f);
}

void func_411(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (func_207(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x60040CDD28AA1BC3(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0, 0);
				func_171(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_412()
{
	if (!iLocal_969)
	{
		func_413(&Local_409);
		iLocal_969 = 1;
	}
	func_435(2);
	if (iLocal_968)
	{
		if (func_10(unk_0x4A8C381C258A124D(), Local_409.f_17, 1) > 50f || func_128(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_435(2);
	}
}

int func_414(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_113() && func_111(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_275(uParam0->f_85, 32))
					{
						if (!unk_0x1CE980E99A2A6FB6(uParam0->f_4))
						{
							func_333(uParam0, 4160, 0);
						}
						else
						{
							func_333(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_333(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_333(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_333(uParam0, 0, 0);
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

void func_415(var uParam0)
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

int func_416(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_417()
{
	Local_409.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_409.f_33 = 88.9745f;
	Local_409.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_409.f_34 = 173.6662f;
	unk_0x06CD913C241C765E("TAXI_Pursuers", &iLocal_923);
	func_432(1);
	func_421(&Local_409, 3);
	Local_409.f_410 = 0;
	func_420(&Local_409, 3, 6);
	func_418();
}

void func_418()
{
	func_419();
	Local_839 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_419()
{
	Local_839.f_19[0] = joaat("g_m_y_lost_01");
	Local_839.f_19[1] = joaat("s_f_y_hooker_01");
	Local_839.f_32[0] = joaat("gburrito");
	Local_839.f_32[1] = joaat("daemon");
	Local_839.f_32[2] = joaat("hexer");
	Local_839.f_32[3] = joaat("emperor");
	Local_881.f_19[0] = joaat("g_m_y_lost_01");
	Local_881.f_32[0] = joaat("gburrito");
	Local_881.f_32[1] = joaat("hexer");
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_421(var uParam0, int iParam1)
{
	func_431(1);
	func_202();
	func_7(&(uParam0->f_244));
	func_430(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_113648.f_19099, 4))
	{
		func_171(&(Global_113648.f_19099), 4);
	}
	func_425(uParam0);
	func_423(uParam0);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	uParam0->f_102 = (func_422(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xF2CB0224D3BE0B42("TAXI", 2);
}

int func_422(int iParam0)
{
	return Global_113648.f_19099.f_39[iParam0];
}

void func_423(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0:
			func_424(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_424(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_424(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_424(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_424(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_424(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_424(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_424(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_424(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_424(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_424(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_425(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_429(uParam0, 3);
			func_428(uParam0, 14);
			break;
		
		case 1:
			func_429(uParam0, 14);
			func_428(uParam0, 8);
			break;
		
		case 2:
			func_429(uParam0, 8);
			func_428(uParam0, 7);
			break;
		
		case 3:
			func_429(uParam0, 15);
			func_428(uParam0, 6);
			break;
		
		case 4:
			func_429(uParam0, 0);
			func_428(uParam0, 3);
			break;
		
		case 5:
			func_429(uParam0, 6);
			func_428(uParam0, 7);
			break;
		
		case 6:
			func_429(uParam0, 8);
			func_428(uParam0, 15);
			break;
		
		case 7:
			func_429(uParam0, 8);
			func_428(uParam0, 14);
			break;
		
		case 8:
			func_429(uParam0, 7);
			func_428(uParam0, 15);
			break;
		
		case 9:
			func_429(uParam0, unk_0xC5935DFB3F39785A(0, 17));
			iVar0 = func_427((uParam0->f_418.f_2 + unk_0xC5935DFB3F39785A(1, 17)), 0, 16);
			func_428(uParam0, iVar0);
			func_426(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_426(var uParam0)
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

int func_427(int iParam0, int iParam1, int iParam2)
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

void func_428(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_430(var uParam0)
{
	uParam0->f_2 = unk_0x4A8C381C258A124D();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_41() };
	uParam0->f_17 = { func_41() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_110(uParam0, 32, 0);
}

void func_431(bool bParam0)
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

void func_432(int iParam0)
{
	unk_0xD414C47AFF81382A(iParam0, iLocal_923, joaat("player"));
	unk_0xD414C47AFF81382A(iParam0, iLocal_923, joaat("COP"));
	unk_0xD414C47AFF81382A(iParam0, joaat("COP"), iLocal_923);
}

void func_433()
{
	func_20(&Local_409);
	unk_0x425BBE19F25A57AB(1f);
	unk_0xA63572E348CC4CFB(Local_984, Local_987, 1, 1);
	unk_0x93586F94C370857F();
	unk_0xD7B6A43ACC36D868(uLocal_947, 0);
	unk_0x68298CA6191CDFDB(&uLocal_945);
	func_434();
	func_209();
	if (unk_0x78411E34CF90EA8C(Local_409.f_0))
	{
		unk_0x85E6A1E36B5E2E4D(Local_409.f_0, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x0A0A06C514052E80(1);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_434()
{
	unk_0x55098D9E9AD58806(iLocal_929);
}

void func_435(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

