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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int* iLocal_89 = NULL;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1132396544;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 0;
	var uLocal_103 = -1082130432;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 8;
	var uLocal_107 = 0;
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
	var uLocal_163 = -1;
	var uLocal_164 = 1092616192;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	struct<21> Local_168 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_189[15];
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	struct<2> Local_342 = { 0, 16 } ;
	var uLocal_344 = 0;
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
	struct<414> Local_408 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = -1;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	struct<33> Local_838 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 4;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	struct<38> Local_880 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	int iLocal_922 = 0;
	int iLocal_923 = 0;
	struct<3> Local_924[1];
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934[3] = { 0, 0, 0 };
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940[2] = { 0, 0 };
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	var uLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	var uLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	bool bLocal_970 = 0;
	int iLocal_971 = 0;
	bool bLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	struct<3> Local_986 = { 0, 0, 0 } ;
	struct<3> Local_989 = { 0, 0, 0 } ;
	struct<3> Local_992 = { 0, 0, 0 } ;
	struct<3> Local_995 = { 0, 0, 0 } ;
	struct<3> Local_998 = { 0, 0, 0 } ;
	struct<3> Local_1001 = { 0, 0, 0 } ;
	struct<3> Local_1004 = { 0, 0, 0 } ;
	char* sLocal_1007 = NULL;
	char cLocal_1008[24] = "";
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	char cLocal_1014[24] = "";
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	struct<6> Local_1020 = { 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_1026 = NULL;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	int* iLocal_1029 = NULL;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	bool bLocal_1032 = 0;
	struct<28> Local_1033 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 5;
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
	var uLocal_1106 = 1097859072;
	var uLocal_1107 = 1500;
	var uLocal_1108 = 45;
	var uLocal_1109 = 1103626240;
	var uLocal_1110 = 5;
	int iLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_76 = unk_0x4A9923385BDB9DAD();
	iLocal_77 = unk_0x186E5D252FA50E7D();
	Local_82 = { 500f, 500f, 500f };
	iLocal_928 = joaat("a_m_m_farmer_01");
	iLocal_929 = joaat("prop_box_wood04a");
	iLocal_930 = joaat("prop_cardbordbox_03a");
	iLocal_931 = joaat("prop_barrel_exp_01a");
	iLocal_949 = 1;
	iLocal_953 = 112;
	Local_977 = { 11.8607f, -1123.48f, 27.6801f };
	Local_980 = { 11.8607f, -1123.48f, 27.6801f };
	Local_983 = { 144.3291f, -3352.773f, 3.6651f };
	Local_986 = { 311.9527f, -3305.613f, 10.6651f };
	Local_989 = { 206.636f, -3322.673f, 4.6339f };
	Local_992 = { 0f, 0f, 24f };
	Local_995 = { 208.786f, -3319.823f, 4.6339f };
	Local_998 = { 0f, 0f, 47f };
	Local_1001 = { 199.5188f, -3326.201f, 4.78716f };
	Local_1004 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_1007 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_1008, "txm12_deal1_7", 24);
	StringCopy(&cLocal_1014, "txm12_deal1_7", 24);
	if (unk_0xC968670BFACE42D9(67))
	{
		func_414(2);
		func_412();
	}
	unk_0xC4301E5121A0ED73(true);
	func_396();
	Local_408.f_102 = 1;
	while (true)
	{
		if (unk_0x7239B21A38F536BA(Local_408.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_408);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	iParam0->f_2 = unk_0xD80958FC74E988A6();
	func_6(&(iParam0->f_244));
	iParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xD80958FC74E988A6());
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
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xD80958FC74E988A6());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
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

void func_8()
{
	if (func_395(&Local_408))
	{
		func_394(&Local_408);
		if (func_393(&Local_408, 0))
		{
			func_391();
		}
	}
	else
	{
		func_390(&Local_408);
		if (Local_408.f_410 >= 9)
		{
			unk_0x51669F7D1FB53D9F(false);
			func_388();
		}
		func_354(&Local_408, &uLocal_1104);
		if (Local_408.f_410 < 22)
		{
			func_353(&Local_408);
		}
		func_352(&Local_408, &uLocal_957, 0);
		if (Local_408.f_410 > 5 && !unk_0xA921AA820C25702F(iLocal_958, 0))
		{
			Local_408.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			unk_0x933D6A9EEC1BACD0(&iLocal_958, 0);
		}
		if (Local_408.f_410 > 2)
		{
			if (!func_351(&Local_408))
			{
				func_318();
			}
			else
			{
				func_309(&Local_408, "Taxi Not Driveable", func_317(&Local_408));
			}
		}
		if (Local_408.f_410 == 9)
		{
			func_285(&Local_408, 0, 1);
		}
		if (unk_0x7239B21A38F536BA(Local_408.f_3))
		{
			if (unk_0x5F9532F3B5CC2551(Local_408.f_3))
			{
				if (!func_284(&Local_408, 0))
				{
					func_283(&Local_408, 0);
				}
				if (Local_408.f_410 >= 22 || iLocal_932 >= 1)
				{
					iLocal_967 = 1;
				}
				func_282(&(Local_838.f_3));
				func_282(&(Local_880.f_3));
				func_281(&iLocal_940);
				func_309(&Local_408, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_408.f_410)
		{
			case 0:
				func_278();
				func_277(&Local_408, 16, 4f, 0);
				func_275(&Local_408, Local_977, Local_980, "TaxiWalter", iLocal_928, 202f, 35f);
				func_273(&Local_408);
				func_272(&Local_408, 1);
				break;
			
			case 1:
				if (func_270())
				{
					func_269();
					func_268(&(Local_924[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_267(&Local_408, &Local_924);
					func_247();
					func_246(&Local_408);
					func_272(&Local_408, 2);
				}
				break;
			
			case 2:
				Local_408.f_14 = { Local_977 };
				Local_408.f_17 = { Local_838 };
				func_272(&Local_408, 3);
				break;
			
			case 3:
				if (func_241(&Local_408, 1))
				{
					if (!unk_0x5F9532F3B5CC2551(Local_408.f_3))
					{
						unk_0x262B14F48D29DE80(Local_408.f_3, 3, 0, 0, 0);
						unk_0x262B14F48D29DE80(Local_408.f_3, 4, 0, 2, 0);
						unk_0x262B14F48D29DE80(Local_408.f_3, 0, 0, 2, 0);
					}
					func_240(&Local_408, 1, 0);
					unk_0xBF25EB89375A37AD(1, iLocal_922, Local_408.f_413);
					unk_0xBF25EB89375A37AD(1, Local_408.f_413, iLocal_922);
					unk_0x63F58F7C80513AAD(Local_408.f_3, false);
					func_272(&Local_408, 5);
				}
				break;
			
			case 5:
				if (func_214(&Local_408, 0, 1109393408))
				{
					func_272(&Local_408, 15);
				}
				break;
			
			case 15:
				if (func_213(&Local_408))
				{
					func_209(&Local_408, 9, 1, 0, 0);
					func_208(&Local_408);
					func_272(&Local_408, 7);
				}
				if (unk_0x4C241E39B23DF959(Local_408.f_4, false))
				{
					if (!unk_0xA3EE4A07279BB9DB(Local_408.f_2, Local_408.f_4, false))
					{
						func_206(&Local_408);
						func_272(&Local_408, 5);
					}
				}
				break;
			
			case 7:
				if (unk_0xA921AA820C25702F(iLocal_958, 0))
				{
					func_205();
					func_272(&Local_408, 9);
				}
				break;
			
			case 9:
				func_189();
				if ((func_188(Local_408.f_4, Local_408.f_17, 1) < 675f && !Local_408.f_140) && !iLocal_965)
				{
					unk_0xC12321827687FE4D(Local_983, Local_986, false, true);
					unk_0xEE01041D559983EA(Local_983, Local_986);
					iLocal_946 = unk_0x1B5C85C612E5256E(Local_983, Local_986, false, true, true, true);
					unk_0xBE31FD6CE464AC59(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_187(&Local_408);
					func_185(&uLocal_1063);
					func_184(&Local_1033, 3, 0);
					func_209(&Local_408, 97, 1, 0, 0);
					unk_0xBF0FD6E56C964FCB(Local_408.f_2, joaat("weapon_combatpistol"), 200, true, true);
					iLocal_965 = 1;
				}
				if (func_153(&Local_408, 16f, 1097859072, 1117782016))
				{
					unk_0x86A652570E5F25DD(&(Local_408.f_9));
					func_152(&uLocal_1104, 4);
					func_152(&uLocal_1104, 8);
					unk_0x020E5F00CDA207BA(0.1f);
					unk_0xC1B1E9A034A63A62(0);
					func_272(&Local_408, 22);
				}
				if (func_188(Local_408.f_4, Local_408.f_17, 1) < 10f && func_151(Local_408.f_4, Local_838.f_3[1], 1) < 10f)
				{
					if (func_148(&Local_408, 1, 1084227584))
					{
						unk_0x86A652570E5F25DD(&(Local_408.f_9));
						func_146(1, 0);
						func_146(2, 0);
						func_146(3, 0);
						func_146(4, 0);
						func_146(5, 0);
						func_146(0, 1);
						unk_0x020E5F00CDA207BA(0.1f);
						unk_0xC1B1E9A034A63A62(0);
						func_272(&Local_408, 22);
					}
				}
				if (!iLocal_969)
				{
				}
				if (!iLocal_969)
				{
					if (bLocal_970)
					{
						if ((((((((((unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) || unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) || unk_0x84A2DD9AC37C35C1(Local_838.f_3[2])) || unk_0x84A2DD9AC37C35C1(Local_838.f_3[3])) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[0]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[1]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[2]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0x131D401334815E94(Local_838.f_3[0], 0, 2))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0x131D401334815E94(Local_838.f_3[1], 0, 2))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0x131D401334815E94(Local_838.f_3[2], 0, 2))) || func_151(unk_0xD80958FC74E988A6(), Local_838.f_3[1], 1) < 6f)
						{
							unk_0xC80A74AC829DDD92(Local_838.f_3[0], iLocal_922);
							func_282(&(Local_838.f_3));
							func_281(&iLocal_940);
							func_309(&Local_408, "Aggro Heard Shot", 8);
							iLocal_969 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (func_145(Local_408.f_3, 1) < 250f)
				{
					if (func_111())
					{
						func_109(&uLocal_1104, 1);
						func_109(&uLocal_1104, 16);
						func_109(&uLocal_1104, 32);
						func_209(&Local_408, 100, 1, 0, 0);
						if (!unk_0x84A2DD9AC37C35C1(Local_408.f_3) && !unk_0x84A2DD9AC37C35C1(Local_408.f_2))
						{
							unk_0xAAA34F8A7CB32098(Local_408.f_3);
							unk_0x6A071245EB0D1882(Local_408.f_3, Local_408.f_2, 20000, 6f, 2f, 2f, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						Local_408.f_114 = 0;
						func_272(&Local_408, 24);
					}
				}
				else
				{
					func_309(&Local_408, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (func_145(Local_408.f_2, 1) < 7f && unk_0x83666F9FB8FEBD4B() > 3000)
				{
					unk_0x69F4BE8C8CC4796C(Local_408.f_3, Local_408.f_2, -1, 2048, 4);
					unk_0x3841422E9C488D8C(&iLocal_933);
					unk_0xE8854A4326B9E12B(&iLocal_933);
					unk_0x5AD23D40115353AC(0, Local_408.f_2, -1);
					unk_0x39E72BC99E6360CB(iLocal_933);
					unk_0x5ABA3986D90D8A3B(Local_408.f_3, iLocal_933);
					Local_408.f_56 = 50;
					func_107(&Local_408);
					func_103(&Local_408);
					func_102(&Local_408);
					if (iLocal_956 == 8)
					{
						func_101(&Local_408, 0);
					}
					func_272(&Local_408, 27);
				}
				else if (func_145(Local_408.f_3, 1) > 100f)
				{
					func_309(&Local_408, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!func_100() && !unk_0x5F9532F3B5CC2551(Local_408.f_3)) && func_98(&Local_408, 19) > 2f)
				{
					func_97(&Local_408, 19, 0);
					func_272(&Local_408, 29);
					if (unk_0x3F892CAF67444AE7(5, Local_1004, 1, 0f, &iLocal_947))
					{
						unk_0xD261BA3E7E998072(iLocal_947, 200f);
						bLocal_972 = true;
					}
					if (unk_0x3F892CAF67444AE7(7, Local_1004, 3, 0f, &uLocal_948))
					{
						bLocal_972 = true;
					}
				}
				break;
			
			case 29:
				if (func_70(&Local_408, &iLocal_1111))
				{
					if (unk_0x7239B21A38F536BA(Local_408.f_3))
					{
						if (!unk_0x5F9532F3B5CC2551(Local_408.f_3))
						{
							unk_0xE1EF3C1216AFF2CD(Local_408.f_3);
							unk_0x3841422E9C488D8C(&iLocal_933);
							unk_0xE8854A4326B9E12B(&iLocal_933);
							unk_0x94587F17E9C365D5(0, Local_408.f_17, 500f, 30000, false, false);
							unk_0x15D3A79D4E44B913(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 0.25f, false, 40000f);
							unk_0x15D3A79D4E44B913(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 0.25f, false, 40000f);
							unk_0x15D3A79D4E44B913(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 0.25f, false, 40000f);
							unk_0xBB9CE077274F6A1B(0, 40000f, 0);
							unk_0x39E72BC99E6360CB(iLocal_933);
							unk_0x5ABA3986D90D8A3B(Local_408.f_3, iLocal_933);
							unk_0x971D38760FBC02EF(Local_408.f_3, true);
						}
					}
					func_10(1, &Local_408, 0);
					unk_0xC1B1E9A034A63A62(0);
					func_272(&Local_408, 30);
				}
				break;
			
			case 30:
				if (func_9(unk_0xD80958FC74E988A6(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_412();
				}
				else if (bLocal_972)
				{
					iLocal_945 = unk_0x386F6CE5BAF6091C(Local_1004, 40f, joaat("ambulance"), 0);
					if (unk_0x4C241E39B23DF959(iLocal_945, false))
					{
						iLocal_973 = 1;
					}
					iLocal_945 = unk_0x386F6CE5BAF6091C(Local_1004, 40f, joaat("police"), 0);
					if (unk_0x4C241E39B23DF959(iLocal_945, false))
					{
						iLocal_973 = 1;
					}
					iLocal_943 = unk_0x876046A8E3A4B71C(Local_1004, 10f, 10f, 5f, -1);
					if (!unk_0x84A2DD9AC37C35C1(iLocal_943))
					{
						iLocal_973 = 1;
					}
					if (iLocal_973 || unk_0x83666F9FB8FEBD4B() > 30000)
					{
						unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
						func_412();
					}
				}
				else
				{
					func_412();
				}
				break;
			}
	}
}

float func_9(int iParam0, struct<3> Param1, bool bParam4)
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

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_49(uParam1);
		if (!unk_0x84A2DD9AC37C35C1(uParam1->f_3))
		{
			unk_0x1913FE4CBF41C463(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_47(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_394(uParam0);
	if (func_100())
	{
		func_45();
	}
	func_43();
	unk_0xCC33FA791322B9D9();
	unk_0x8DFCED7A656F8802(true);
	func_40(0);
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		unk_0x92F0CF722BC4202F(uParam0->f_4, false);
		unk_0x8386BFB614D06749(uParam0->f_4);
		unk_0xC53EB42A499A7E90(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_35(uParam0->f_14, 1, 1114636288);
	func_34(&(uParam0->f_244), 3);
	unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
	if (func_31())
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_22(0, 1, 1, 0);
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		unk_0x865908C81A2C22E9(*uParam0, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x51669F7D1FB53D9F(true);
	}
	if (func_21(Global_97173.f_17318, 4))
	{
		func_109(&(Global_97173.f_17318), 4);
		unk_0x0FC2D89AC25A5814(func_20(), false);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	unk_0xF66A602F829E2A06("gestures@m@standing@casual");
	unk_0xF66A602F829E2A06("oddjobs@taxi@");
	unk_0xF66A602F829E2A06("oddjobs@towingcome_here");
	if (unk_0x1077788E268557C2())
	{
		func_16(uParam0->f_411);
	}
	if (!unk_0x49C32D60007AFA47(unk_0xA5EDC40EF369B48D()))
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_12(&iLocal_89) * 1000f)), 12, 0);
}

float func_12(int* iParam0)
{
	if (func_15(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13() - iParam0->f_1);
		}
	}
	return 0f;
}

float func_13()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_14(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!unk_0xF22B6C47C6EAB066(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)
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

void func_18(var uParam0)
{
	unk_0x1033371FC8E842A7(uParam0->f_51[0]);
}

void func_19(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_3))
	{
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
		{
			if (!unk_0x997ABD671D25CA0B(uParam0->f_3, false))
			{
				unk_0xBB8DE8CF6A8DD8BB(uParam0->f_3);
			}
			unk_0x9F8AA94D6D97DBF4(uParam0->f_3, false);
			unk_0xBF25EB89375A37AD(255, uParam0->f_413, joaat("player"));
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x2595DD4236549CE3(&(uParam0->f_3));
		}
	}
}

int func_20()
{
	return joaat("taxi");
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_30(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_29())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_28(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_30(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_28(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_23(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
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

int func_27()
{
	return Global_1312736;
}

int func_28(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_29()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

int func_31()
{
	if (!func_33() && !func_32())
	{
		if (!unk_0x8A876A65283DD7D7(unk_0xA5EDC40EF369B48D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
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

void func_35(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_36(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_36(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xBF1A602B5BA52FEE(Var0, Var3, false, true);
	}
	else
	{
		unk_0x1EE7063B80FFC77C(Var0, Var3, 1);
		unk_0x2E05208086BA0651();
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

void func_37(struct<3> Param0, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_38(Param0, func_39()))
	{
		Var0 = { func_36(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_36(Param0, 1f, 30f, 30f, 10f) };
		unk_0xC12321827687FE4D(Var0, Var3, bParam3, true);
	}
}

bool func_38(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_39()
{
	struct<3> Var0;
	
	return Var0;
}

void func_40(int iParam0)
{
	if (Global_14551)
	{
		func_41(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_29())
	{
		Global_14393.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
		if (Global_87122[iVar0 /*17*/] && !Global_87122[iVar0 /*17*/].f_1)
		{
			if (Global_87122[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87122[iVar0 /*17*/].f_5 != 88 && Global_87122[iVar0 /*17*/].f_5 != 89) && Global_87122[iVar0 /*17*/].f_5 != 92)
				{
					func_44(Global_87122[iVar0 /*17*/].f_5, 1);
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
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_45()
{
	Global_14558 = 0;
	func_46();
}

void func_46()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_97173.f_17318.f_22[0]++;
			func_48("Fares Completed ++ = ", Global_97173.f_17318.f_22[0]);
			break;
		
		case 1:
			Global_97173.f_17318.f_22[1]++;
			func_48("Fares Failed ++ = ", Global_97173.f_17318.f_22[1]);
			break;
		
		case 2:
			Global_97173.f_17318.f_22[2]++;
			func_48("Fares Accepted ++ ", Global_97173.f_17318.f_22[2]);
			break;
		
		case 3:
			Global_97173.f_17318.f_22[3]++;
			func_48("Fares Expired ++ ", Global_97173.f_17318.f_22[3]);
			break;
		
		case 13:
			Global_97173.f_17318.f_22[13]++;
			func_48("Passengers run ++ = ", Global_97173.f_17318.f_22[13]);
			break;
		
		case 14:
			Global_97173.f_17318.f_22[14]++;
			func_48("Passenger Forced to Pay ++ = ", Global_97173.f_17318.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_97173.f_17318.f_22[4])
				{
					Global_97173.f_17318.f_22[4] = iParam1;
					func_48("This distance ", iParam1);
					func_48(" is longer than current best", Global_97173.f_17318.f_22[4]);
				}
				else
				{
					func_48("Longest Distance Not Beat ", Global_97173.f_17318.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_97173.f_17318.f_22[5] = (Global_97173.f_17318.f_22[5] + iParam1);
			func_48("Total Distance w/ Passenger = ", Global_97173.f_17318.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_97173.f_17318.f_22[6]++;
			}
			else
			{
				Global_97173.f_17318.f_22[6] = (Global_97173.f_17318.f_22[6] + iParam1);
			}
			func_48("Wanted Levels ++ = ", Global_97173.f_17318.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_97173.f_17318.f_22[7] = (Global_97173.f_17318.f_22[7] + iParam1);
			}
			else
			{
				Global_97173.f_17318.f_22[7]++;
			}
			func_48("Wanted Levels Lost = ", Global_97173.f_17318.f_22[7]);
			break;
		
		case 8:
			Global_97173.f_17318.f_22[8]++;
			func_48("Taxis wrecked ++ = ", Global_97173.f_17318.f_22[8]);
			break;
		
		case 9:
			Global_97173.f_17318.f_22[9]++;
			func_48("Horn Honked ++ = ", Global_97173.f_17318.f_22[9]);
			break;
		
		case 10:
			Global_97173.f_17318.f_22[10] = (Global_97173.f_17318.f_22[10] + iParam1);
			func_48("Total Money Earned = ", Global_97173.f_17318.f_22[10]);
			break;
		
		case 11:
			Global_97173.f_17318.f_22[11] = (Global_97173.f_17318.f_22[11] + iParam1);
			func_48("Total Tips Earned = ", Global_97173.f_17318.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_97173.f_17318.f_22[12])
			{
				Global_97173.f_17318.f_22[12] = iParam1;
				func_48("New Highest Tip = ", Global_97173.f_17318.f_22[12]);
			}
			else
			{
				func_48("Highest Tip Not Reached = ", Global_97173.f_17318.f_22[12]);
			}
			break;
	}
}

void func_48(char* sParam0, int iParam1)
{
}

void func_49(var uParam0)
{
	func_47(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_414(1);
		func_59(15, 1);
	}
	func_152(&(Global_97173.f_17318), 1024);
	if (!func_21(Global_97173.f_17318, 64))
	{
		func_50(func_57(func_58(uParam0)), 0, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_51();
	}
}

void func_51()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_55(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_54() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_53(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_54()
{
	return Global_24444;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_57(int iParam0)
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

int func_58(var uParam0)
{
	return uParam0->f_411;
}

int func_59(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_60(iParam0, iParam1);
}

int func_60(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_69(&Global_2543745))
	{
		if (func_67(&Global_2543745, iParam0))
		{
			return 0;
		}
		if (func_61(&Global_2543745, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	func_64(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_62(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_63(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_65(&(uParam0->f_62), (8f - 0.5f));
}

void func_65(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_13() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_67(var uParam0, int iParam1)
{
	return func_68(uParam0, iParam1) != -1;
}

int func_68(var uParam0, int iParam1)
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

bool func_69(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_70(int iParam0, int iParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_100() && func_98(iParam0, 0) > 1f)
			{
				if (func_31())
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				}
				func_96(iParam0);
				func_109(&(Global_97173.f_17318), 4096);
				func_94(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_95(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x67C540AA08E4A6F5(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", true);
				func_93(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_88(iParam1, 0))
			{
				func_71(iParam0);
				func_277(iParam0, 0, 0, 0);
				func_93(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_72(func_85(), 21, iVar0, 0, 0);
		func_47(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_73(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
	}
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_84();
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
					func_83(99, 1);
					func_82(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_80(5))
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
							func_82(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_83(95, iParam3);
					break;
				
				case 1:
					func_83(97, iParam3);
					break;
				
				case 2:
					func_83(96, iParam3);
					break;
			}
			func_83(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_82(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_75(iParam0);
	if (Global_34909 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_76(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_78() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_78() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_77(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_77(int iParam0)
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

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_83(93, iParam0);
	func_83(29, iParam0);
	func_83(30, iParam0);
}

bool func_80(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_78() /*8053*/].f_5756.f_10, iParam0);
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_55(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_59(27, 1);
	return 1;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_84()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_85()
{
	func_86();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_86()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_4(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_3(unk_0xD80958FC74E988A6());
			if (func_5(iVar0) && (!func_87(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_5(Global_97173.f_1729.f_539.f_3213))
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

bool func_87(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_88(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_92(&(uParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x580417101DDB492F(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_92(&(uParam0->f_5));
				func_91(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
		{
			if (func_90(&(uParam0->f_5)) > 0.33f)
			{
				func_89(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_90(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_15(&(uParam0->f_5)))
		{
			func_92(&(uParam0->f_5));
			func_91(uParam0, 1051260355);
		}
		else if (func_90(&(uParam0->f_5)) > 0.33f)
		{
			func_89(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_89(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_90(int* iParam0)
{
	if (func_15(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_91(var uParam0, float fParam1)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC3D0841A0CC546A6(uParam0->f_9);
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xC6796A8FFA375E53();
}

void func_92(int* iParam0)
{
	func_65(iParam0, 0f);
}

void func_93(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_94(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x80338406F3475E55("STRING");
	unk_0x39BBF623FC803EAC(iParam9);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x362E2D3FE93A9959();
	unk_0x80338406F3475E55(sParam7);
	unk_0x03B504CF259931BC(iParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0xC63CD5D2920ACBE7(sParam6);
	unk_0x03B504CF259931BC(iParam5);
	unk_0x03B504CF259931BC(iParam4);
	unk_0x362E2D3FE93A9959();
	unk_0xC6796A8FFA375E53();
	func_92(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_95(int iParam0)
{
	char* sVar0;
	
	switch (iParam0->f_411)
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

void func_96(int iParam0)
{
	int iVar0;
	
	Local_168.f_1 = unk_0xBBDA792448DB5A89(iParam0->f_50);
	Local_168.f_2 = unk_0xBBDA792448DB5A89(iParam0->f_56);
	func_47(11, iParam0->f_56);
	func_47(12, iParam0->f_56);
	iLocal_56[1] = iParam0->f_56;
	iLocal_56[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (unk_0xA921AA820C25702F(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = iParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

void func_97(int iParam0, int iParam1, bool bParam2)
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
			func_89(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_89(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_98(int iParam0, int iParam1)
{
	if (!func_15(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_99(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_90(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_99(int* iParam0)
{
	if (!func_15(iParam0))
	{
		func_92(iParam0);
	}
}

int func_100()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_102(int iParam0)
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_21(iParam0->f_55, 1))
	{
		func_152(&(iParam0->f_55), 1);
	}
}

void func_103(int iParam0)
{
	func_105();
	unk_0xCC33FA791322B9D9();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_209(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_209(iParam0, 103, 1, 0, 0);
		}
		func_104(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_209(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_209(iParam0, 102, 1, 0, 0);
	}
	func_277(iParam0, 16, 4f, 0);
}

void func_104(int iParam0)
{
	Global_95887.f_221 = iParam0;
}

void func_105()
{
	Global_14558 = 0;
	func_106();
}

void func_106()
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

void func_107(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_108(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_47(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_47(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_108(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_109(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_111()
{
	int iVar0;
	
	if (iLocal_932 < 4 && ((((((((((unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) || unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) || unk_0x84A2DD9AC37C35C1(Local_838.f_3[2])) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[0]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[1]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0xDFD5033FDBA0A9C8(Local_838.f_3[2]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0x131D401334815E94(Local_838.f_3[0], 0, 2))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0x131D401334815E94(Local_838.f_3[1], 0, 2))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0x131D401334815E94(Local_838.f_3[2], 0, 2))) || func_151(unk_0xD80958FC74E988A6(), Local_838.f_3[1], 1) < 6f) || (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, true, 0) && ((((((!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[0])) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[1]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[2]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]) && unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[0]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]) && unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[1]))) || (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]) && unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_838.f_3[2]))))))
	{
		Local_408.f_114 = 1;
		iLocal_932 = 4;
	}
	switch (iLocal_932)
	{
		case 0:
			func_209(&Local_408, 90, 1, 0, 0);
			func_184(&Local_1033, -1, 1);
			func_144();
			unk_0xE80492A9AC099A93(&iLocal_958, 1);
			if (!unk_0x25D39B935A038A26(iLocal_963))
			{
				if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2]))
				{
					iLocal_963 = unk_0x8C18E0F9080ADD73(Local_995, Local_998, 2);
					unk_0xD9A897A4C6C2974F(iLocal_963, true);
					unk_0xEEA929141F699854(Local_838.f_3[0], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
					unk_0xEEA929141F699854(Local_838.f_3[1], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					unk_0xEEA929141F699854(Local_838.f_3[2], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
				}
			}
			iLocal_950 = unk_0x9CD27B0045628463();
			iLocal_932 = 1;
			break;
		
		case 1:
			if (!func_100() && !unk_0xA921AA820C25702F(iLocal_958, 10))
			{
				func_209(&Local_408, 91, 1, 0, 0);
				unk_0x933D6A9EEC1BACD0(&iLocal_958, 10);
				func_99(&iLocal_1026);
			}
			if ((unk_0x9CD27B0045628463() - iLocal_950) > 4000)
			{
				if (!unk_0x49C32D60007AFA47(unk_0xA5EDC40EF369B48D()))
				{
					if (func_143(&Local_408))
					{
						func_142("TAXI_VIEW", -1);
					}
					iLocal_966 = 1;
					if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]) && !unk_0x84A2DD9AC37C35C1(iLocal_940[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_940[1]))
					{
						iLocal_960 = unk_0x8C18E0F9080ADD73(Local_989, Local_992, 2);
						unk_0xEEA929141F699854(Local_838.f_3[3], iLocal_960, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(iLocal_940[0], iLocal_960, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(iLocal_940[1], iLocal_960, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
				}
			}
			if (func_141("TAXI_VIEW") && (unk_0xF3A21BCD95725A4A(0, 80) || !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			if (!unk_0x84A2DD9AC37C35C1(Local_408.f_3) && (!func_100() || func_12(&iLocal_1026) > 9f))
			{
				if ((unk_0x20B60995556D004F(Local_408.f_3, Local_1001, 1.5f, 1.5f, 2f, false, true, 0) && unk_0x77F1BEB8863288D5(Local_408.f_3, 242628503) == 7) && (unk_0x25D39B935A038A26(iLocal_963) && unk_0xE4A310B1D7FA73CC(iLocal_963) > 0.995f))
				{
					if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2]))
					{
						iLocal_964 = unk_0x8C18E0F9080ADD73(Local_995, Local_998, 2);
						unk_0xEEA929141F699854(Local_838.f_3[0], iLocal_964, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(Local_838.f_3[1], iLocal_964, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(Local_838.f_3[2], iLocal_964, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1000f, 0);
						unk_0x394B9CD12435C981(iLocal_964, true);
					}
					unk_0xEA47FE3719165B94(Local_408.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, -1, 0, 0f, false, false, false);
					iLocal_952 = unk_0x9CD27B0045628463();
					iLocal_950 = unk_0x9CD27B0045628463();
					iLocal_932 = 2;
				}
			}
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - iLocal_950) > 2500 && !unk_0xA921AA820C25702F(iLocal_958, 1))
			{
				func_209(&Local_408, 89, 1, 1, 0);
				unk_0x933D6A9EEC1BACD0(&iLocal_958, 1);
			}
			if (((unk_0xE4A310B1D7FA73CC(iLocal_964) >= 0.838f && !unk_0x84A2DD9AC37C35C1(Local_408.f_3)) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0xA921AA820C25702F(iLocal_958, 6))
			{
				unk_0xBF0FD6E56C964FCB(Local_838.f_3[1], joaat("weapon_pistol"), -1, true, true);
				unk_0xBF0FD6E56C964FCB(Local_408.f_3, joaat("weapon_pistol"), -1, true, true);
				unk_0x933D6A9EEC1BACD0(&iLocal_958, 6);
			}
			if ((unk_0xE4A310B1D7FA73CC(iLocal_964) >= 0.853f && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2])) && !unk_0xA921AA820C25702F(iLocal_958, 7))
			{
				unk_0xBF0FD6E56C964FCB(Local_838.f_3[2], joaat("weapon_pistol"), -1, true, true);
				unk_0x933D6A9EEC1BACD0(&iLocal_958, 7);
			}
			if (!unk_0xA921AA820C25702F(iLocal_958, 3))
			{
				if ((unk_0x25D39B935A038A26(iLocal_960) && unk_0xE4A310B1D7FA73CC(iLocal_960) == 1f) || !unk_0x25D39B935A038A26(iLocal_960))
				{
					if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]) && !unk_0x84A2DD9AC37C35C1(iLocal_940[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_940[1]))
					{
						iLocal_961 = unk_0x8C18E0F9080ADD73(Local_989, Local_992, 2);
						unk_0xEEA929141F699854(Local_838.f_3[3], iLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(iLocal_940[0], iLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0xEEA929141F699854(iLocal_940[1], iLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0xD9A897A4C6C2974F(iLocal_961, true);
						unk_0x933D6A9EEC1BACD0(&iLocal_958, 3);
					}
				}
			}
			if (unk_0xA921AA820C25702F(iLocal_958, 1))
			{
				Local_1020 = { func_140() };
				if (unk_0x0C515FAB3FF9EA92(&cLocal_1008, &Local_1020) || unk_0x0C515FAB3FF9EA92(&cLocal_1014, &Local_1020))
				{
					if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]) && !unk_0x84A2DD9AC37C35C1(iLocal_940[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_940[1]))
					{
						if (unk_0x25D39B935A038A26(iLocal_961))
						{
							iLocal_962 = unk_0x8C18E0F9080ADD73(Local_989, Local_992, 2);
							unk_0xEEA929141F699854(Local_838.f_3[3], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_940[0], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_940[1], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x394B9CD12435C981(iLocal_962, true);
							iLocal_951 = unk_0x9CD27B0045628463();
							iLocal_932 = 3;
						}
						else
						{
							iLocal_962 = unk_0x8C18E0F9080ADD73(Local_989, Local_992, 2);
							unk_0xEEA929141F699854(Local_838.f_3[3], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_940[0], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_940[1], iLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x394B9CD12435C981(iLocal_962, true);
							iLocal_951 = unk_0x9CD27B0045628463();
							iLocal_932 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_954)
			{
				case 0:
					if (((unk_0x9CD27B0045628463() - iLocal_951) > 850 && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[3])) && !unk_0xA921AA820C25702F(iLocal_958, 8))
					{
						unk_0xBF0FD6E56C964FCB(Local_838.f_3[3], joaat("weapon_pistol"), -1, true, true);
						unk_0x933D6A9EEC1BACD0(&iLocal_958, 8);
					}
					if (((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2])) && !unk_0x84A2DD9AC37C35C1(Local_408.f_3))
					{
						unk_0xC1E8A365BF3B29F2(Local_838.f_3[0], 156, true);
						unk_0xC1E8A365BF3B29F2(Local_838.f_3[1], 156, true);
						unk_0xC1E8A365BF3B29F2(Local_838.f_3[2], 156, true);
						unk_0xC1E8A365BF3B29F2(Local_408.f_3, 156, true);
						if (((unk_0x25D39B935A038A26(iLocal_964) && unk_0xE4A310B1D7FA73CC(iLocal_964) == 1f) || !unk_0x25D39B935A038A26(iLocal_964)) || (unk_0x9CD27B0045628463() - iLocal_952) > 27000)
						{
							if ((unk_0x9CD27B0045628463() - iLocal_952) > 27000)
							{
							}
							iLocal_975 = 1;
							unk_0x9B53BB6E8943AF53(Local_838.f_3[0], Local_408.f_3, -1, false);
							unk_0x9B53BB6E8943AF53(Local_838.f_3[1], Local_408.f_3, -1, false);
							unk_0x9B53BB6E8943AF53(Local_838.f_3[2], Local_408.f_3, -1, false);
							unk_0x9B53BB6E8943AF53(Local_408.f_3, Local_838.f_3[1], -1, false);
							iLocal_950 = 0;
							iLocal_954++;
						}
					}
					break;
				
				case 1:
					if (((unk_0x9CD27B0045628463() - iLocal_951) > 850 && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[3])) && !unk_0xA921AA820C25702F(iLocal_958, 8))
					{
						unk_0xBF0FD6E56C964FCB(Local_838.f_3[3], joaat("weapon_pistol"), -1, true, true);
						unk_0x933D6A9EEC1BACD0(&iLocal_958, 8);
					}
					if (!unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]))
					{
						unk_0xC1E8A365BF3B29F2(Local_838.f_3[3], 156, true);
					}
					if (!unk_0xA921AA820C25702F(iLocal_958, 4))
					{
						if (!unk_0x25D39B935A038A26(iLocal_962) || unk_0xE4A310B1D7FA73CC(iLocal_962) == 1f)
						{
							if (((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]) && !unk_0x84A2DD9AC37C35C1(iLocal_940[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_940[1])) && !unk_0x84A2DD9AC37C35C1(Local_408.f_3))
							{
								unk_0x15D3A79D4E44B913(iLocal_940[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								unk_0x15D3A79D4E44B913(iLocal_940[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 0.25f, false, 40000f);
								unk_0xF28965D04F570DCA(iLocal_940[0], joaat("MotionState_Sprint"), false, 0, false);
								unk_0xF28965D04F570DCA(iLocal_940[1], joaat("MotionState_Sprint"), false, 0, false);
								unk_0x9B53BB6E8943AF53(Local_838.f_3[3], Local_408.f_3, -1, true);
								unk_0x933D6A9EEC1BACD0(&iLocal_958, 4);
							}
						}
					}
					Local_1020 = { func_140() };
					if (unk_0x0C515FAB3FF9EA92("txm12_deal1_7", &Local_1020) && iLocal_950 == 0)
					{
						iLocal_950 = unk_0x9CD27B0045628463();
					}
					else if ((iLocal_950 > 0 && (unk_0x9CD27B0045628463() - iLocal_950) > 1500) && !unk_0xA921AA820C25702F(iLocal_958, 9))
					{
						func_139();
						func_138("TAXI_OBJ_GYB", 4000, 0);
						func_137(&(Local_838.f_3), &(Local_838.f_11));
						iLocal_966 = 0;
						unk_0x865908C81A2C22E9(Local_408.f_0, false);
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						iLocal_950 = unk_0x9CD27B0045628463();
						iLocal_954 = 2;
						unk_0x933D6A9EEC1BACD0(&iLocal_958, 9);
					}
					else if (iLocal_950 > 0 && (unk_0x9CD27B0045628463() - iLocal_950) > 1200)
					{
						if (func_136() && unk_0xDFB2B516207D3534(Local_408.f_0))
						{
							if (!iLocal_976)
							{
								unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
								unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_976 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x9CD27B0045628463() - iLocal_950) > 4000 && unk_0xA921AA820C25702F(iLocal_958, 9))
					{
						func_126(&(Local_408.f_244), Local_408.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_950 = unk_0x9CD27B0045628463();
						unk_0xE80492A9AC099A93(&iLocal_958, 9);
					}
					if ((((!unk_0x84A2DD9AC37C35C1(Local_408.f_3) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[0])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2])) && !unk_0xA921AA820C25702F(iLocal_958, 9)) && (unk_0x9CD27B0045628463() - iLocal_950) > 2000)
					{
						unk_0x6B76DC1F3AE6E6A3(Local_838.f_3[0], 115);
						unk_0x6B76DC1F3AE6E6A3(Local_838.f_3[2], 115);
						iLocal_950 = unk_0x9CD27B0045628463();
						iLocal_954 = 8;
					}
					break;
				
				case 3:
					if (!func_100())
					{
						func_209(&Local_408, 12, 1, 0, 0);
						func_277(&Local_408, 19, 0, 0);
						iLocal_950 = unk_0x9CD27B0045628463();
						iLocal_954++;
					}
					break;
				
				case 4:
					if (!unk_0x7984C03AA5CC2F41())
					{
						func_277(&Local_408, 19, 0, 0);
						func_209(&Local_408, 116, 1, 0, 0);
						iLocal_954++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (func_98(&Local_408, 19) > 2f)
					{
						func_277(&Local_408, 19, 0, 0);
						func_209(&Local_408, 116, 1, 0, 0);
						iLocal_954++;
					}
					break;
				
				case 8:
					if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2]))
					{
						unk_0x5E29243FB56FC6D4(1, iLocal_922, Local_408.f_413);
						unk_0xBF25EB89375A37AD(5, iLocal_922, Local_408.f_413);
						unk_0x7AEFB85C1D49DEB6(Local_838.f_3[0], 100);
						unk_0x7AEFB85C1D49DEB6(Local_838.f_3[2], 100);
						unk_0x08DA95E8298AE772(Local_838.f_3[0], Local_408.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x08DA95E8298AE772(Local_838.f_3[1], Local_408.f_3, 5000, joaat("FIRING_PATTERN_BURST_FIRE"));
						unk_0x08DA95E8298AE772(Local_838.f_3[2], Local_408.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_950 = unk_0x9CD27B0045628463();
						iLocal_954++;
					}
					break;
				
				case 9:
					if ((unk_0x9CD27B0045628463() - iLocal_950) > 5000)
					{
						iLocal_932 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_408.f_114)
			{
				Local_408.f_114 = 1;
			}
			func_152(&uLocal_1104, 1);
			func_152(&uLocal_1104, 16);
			func_152(&uLocal_1104, 32);
			func_139();
			func_123();
			func_122();
			func_282(&(Local_838.f_3));
			func_137(&(Local_838.f_3), &(Local_838.f_11));
			func_281(&iLocal_940);
			iLocal_950 = unk_0x9CD27B0045628463();
			iLocal_932 = 5;
			break;
		
		case 5:
			if (iLocal_955 >= 2 && !func_284(&Local_408, 8))
			{
				func_283(&Local_408, 8);
			}
			else if (func_284(&Local_408, 8) && func_98(&Local_408, 8) > 3f)
			{
				func_120();
				func_117();
				iLocal_950 = unk_0x9CD27B0045628463();
				iLocal_932 = 6;
			}
			else
			{
				iLocal_955 = 0;
			}
			func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11));
			break;
		
		case 6:
			if ((unk_0x84A2DD9AC37C35C1(Local_880.f_3[0]) && unk_0x4C241E39B23DF959(Local_880.f_27[0], false)) && unk_0x1C8A4C2C19E68EEC(Local_880.f_27[0]))
			{
				unk_0x54833611C17ABDEA(Local_880.f_27[0]);
			}
			if ((((unk_0x84A2DD9AC37C35C1(Local_880.f_3[2]) || unk_0xC86D67D52A707CF8(Local_880.f_3[2], unk_0xD80958FC74E988A6(), true)) || unk_0xC86D67D52A707CF8(Local_880.f_3[2], Local_408.f_3, true)) && unk_0x4C241E39B23DF959(Local_880.f_27[1], false)) && unk_0x1C8A4C2C19E68EEC(Local_880.f_27[1]))
			{
				unk_0x54833611C17ABDEA(Local_880.f_27[1]);
			}
			if (unk_0xA6DB27D19ECBB7DA(Local_880.f_37[0]) && !unk_0x4C241E39B23DF959(Local_880.f_27[0], false))
			{
				unk_0x86A652570E5F25DD(&(Local_880.f_37[0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(Local_880.f_37[1]) && !unk_0x4C241E39B23DF959(Local_880.f_27[1], false))
			{
				unk_0x86A652570E5F25DD(&(Local_880.f_37[1]));
			}
			if (!iLocal_971 && ((unk_0x4C241E39B23DF959(Local_880.f_27[0], false) && !unk_0x1C8A4C2C19E68EEC(Local_880.f_27[0])) || (unk_0x4C241E39B23DF959(Local_880.f_27[1], false) && !unk_0x1C8A4C2C19E68EEC(Local_880.f_27[1]))))
			{
				if (func_114(&(Local_880.f_3)))
				{
					func_137(&(Local_880.f_3), &(Local_880.f_11));
					func_113();
					iLocal_971 = 1;
				}
			}
			if (!unk_0xA921AA820C25702F(iLocal_958, 2))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_950) > 5000)
				{
					func_282(&(Local_880.f_3));
					func_112(&(Local_838.f_3));
					unk_0xBF25EB89375A37AD(5, iLocal_922, Local_408.f_413);
					unk_0x933D6A9EEC1BACD0(&iLocal_958, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_880.f_3)
				{
					if (!unk_0x84A2DD9AC37C35C1(Local_880.f_3[iVar0]))
					{
						if (unk_0x77F1BEB8863288D5(Local_880.f_3[iVar0], -1442466670) != 1 && unk_0x77F1BEB8863288D5(Local_880.f_3[iVar0], -1442466670) != 0)
						{
							unk_0x7BF835BB9E2698C8(Local_880.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(Local_408.f_3))
			{
				if (iLocal_974)
				{
					if (!func_100())
					{
						func_209(&Local_408, 140, 1, 0, 1);
					}
					iLocal_974 = 0;
				}
			}
			return func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11));
			break;
	}
	return 0;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			unk_0x7AEFB85C1D49DEB6((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_113()
{
	if (unk_0xA6DB27D19ECBB7DA(Local_880.f_37[0]))
	{
		unk_0x86A652570E5F25DD(&(Local_880.f_37[0]));
	}
	if (unk_0xA6DB27D19ECBB7DA(Local_880.f_37[1]))
	{
		unk_0x86A652570E5F25DD(&(Local_880.f_37[1]));
	}
}

int func_114(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			if (!unk_0x997ABD671D25CA0B((*uParam0)[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_115(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_956 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x5F9532F3B5CC2551((*uParam0)[iVar0]))
		{
			if (unk_0xA6DB27D19ECBB7DA((*uParam1)[iVar0]))
			{
				unk_0x86A652570E5F25DD(uParam1[iVar0]);
			}
			if (func_116(&Local_408, (*uParam0)[iVar0], 1))
			{
				iLocal_956++;
			}
			iLocal_955++;
		}
		else
		{
			iLocal_956 = 0;
			iVar1 = 0;
		}
		if (unk_0x5F9532F3B5CC2551((*uParam2)[iVar0]))
		{
			if (unk_0xA6DB27D19ECBB7DA((*uParam3)[iVar0]))
			{
				unk_0x86A652570E5F25DD(uParam3[iVar0]);
				iLocal_974 = 1;
			}
			if (func_116(&Local_408, (*uParam2)[iVar0], 1))
			{
				iLocal_956++;
			}
		}
		else
		{
			iLocal_956 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0xC86D67D52A707CF8(iParam1, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x7239B21A38F536BA(iParam1))
			{
				if (unk_0xC86D67D52A707CF8(iParam1, unk_0xD80958FC74E988A6(), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_117()
{
	if (!unk_0xA6DB27D19ECBB7DA(Local_880.f_37[0]) && !unk_0xA6DB27D19ECBB7DA(Local_880.f_37[1]))
	{
		Local_880.f_37[0] = func_118(Local_880.f_27[0], 0, 0);
		Local_880.f_37[1] = func_118(Local_880.f_27[1], 0, 0);
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_119(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(iVar0, func_119(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_119(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_119(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_120()
{
	if (unk_0x4C241E39B23DF959(Local_880.f_27[0], false))
	{
		unk_0x7D80FD645D4DA346(Local_880.f_27[0], iLocal_953, func_121(0), 6, 1000, 786603);
		unk_0x6683AB880E427778(Local_880.f_27[0], 1f);
	}
	if (unk_0x4C241E39B23DF959(Local_880.f_27[1], false))
	{
		unk_0x7D80FD645D4DA346(Local_880.f_27[1], iLocal_953, func_121(1), 6, 1000, 786603);
		unk_0x6683AB880E427778(Local_880.f_27[1], 1f);
	}
}

char* func_121(int iParam0)
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

void func_122()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Local_408.f_3))
	{
		if (!unk_0x84A2DD9AC37C35C1(Local_408.f_3))
		{
			if (!unk_0xA6DB27D19ECBB7DA(Local_408.f_8))
			{
				Local_408.f_8 = func_118(Local_408.f_3, 1, 0);
			}
			unk_0x3A87E44BB9A01D54(Local_408.f_3, &iVar0, true);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				unk_0xBF0FD6E56C964FCB(Local_408.f_3, joaat("weapon_combatpistol"), 100, false, true);
			}
			unk_0x9F7794730795E019(Local_408.f_3, 3, true);
			unk_0x9F7794730795E019(Local_408.f_3, 13, false);
			unk_0x9F7794730795E019(Local_408.f_3, 12, true);
			unk_0x9F7794730795E019(Local_408.f_3, 0, true);
			unk_0x9F7794730795E019(Local_408.f_3, 24, true);
			unk_0x9F7794730795E019(Local_408.f_3, 34, true);
			unk_0x9F7794730795E019(Local_408.f_3, 37, true);
			unk_0xF29CF591C4BF6CEE(Local_408.f_3, 300f);
			unk_0x33A8F7F7D5F7F33C(Local_408.f_3, 300f);
			unk_0xF107E836A70DCE05(Local_408.f_3, 300f);
			unk_0x4D9CA1009AFBD057(Local_408.f_3, 1);
			unk_0x6B7A646C242A7059(Local_408.f_3, true);
			unk_0x7AEFB85C1D49DEB6(Local_408.f_3, 80);
			unk_0x3C606747B23E497B(Local_408.f_3, 2);
			unk_0xC7F76DF27A5045A1(Local_408.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, false, false);
			unk_0xBF25EB89375A37AD(5, iLocal_922, Local_408.f_413);
			unk_0xBF25EB89375A37AD(5, Local_408.f_413, iLocal_922);
			unk_0x3841422E9C488D8C(&iLocal_933);
			unk_0xE8854A4326B9E12B(&iLocal_933);
			unk_0x75AC2B60386D89F2(0, 201.9434f, -3324.029f, 4.7888f, 5000, true);
			unk_0x7BF835BB9E2698C8(0, 200f, 0);
			unk_0x39E72BC99E6360CB(iLocal_933);
			unk_0x5ABA3986D90D8A3B(Local_408.f_3, iLocal_933);
			unk_0x971D38760FBC02EF(Local_408.f_3, true);
		}
	}
}

void func_123()
{
	int iVar0;
	
	Local_880.f_27[0] = unk_0xAF35D0D2583051B0(Local_880.f_32[0], func_125(1), func_124(1), 1, 1);
	Local_880.f_27[1] = unk_0xAF35D0D2583051B0(Local_880.f_32[1], func_125(2), func_124(2), 1, 1);
	Local_880.f_3[0] = unk_0x7DD959874C1FD534(Local_880.f_27[0], 26, Local_880.f_19[0], -1, true, true);
	Local_880.f_3[1] = unk_0x7DD959874C1FD534(Local_880.f_27[0], 26, Local_880.f_19[0], 0, true, true);
	Local_880.f_3[2] = unk_0x7DD959874C1FD534(Local_880.f_27[1], 26, Local_880.f_19[0], -1, true, true);
	Local_880.f_3[3] = unk_0x7DD959874C1FD534(Local_880.f_27[1], 26, Local_880.f_19[0], 0, true, true);
	unk_0x95A88F0B409CDA47(Local_880.f_27[1], "LuisLopz");
	func_7(&(Local_408.f_244), 6, Local_880.f_3[0], "TaxiBruce", 0, 1);
	unk_0x6C8065A3B780185B(Local_880.f_3[0], "TaxiBruce");
	unk_0xBF0FD6E56C964FCB(Local_880.f_3[0], joaat("weapon_smg"), 100, false, true);
	unk_0xBF0FD6E56C964FCB(Local_880.f_3[1], joaat("weapon_pistol"), 100, false, true);
	unk_0xBF0FD6E56C964FCB(Local_880.f_3[2], joaat("weapon_smg"), 100, false, true);
	unk_0xBF0FD6E56C964FCB(Local_880.f_3[3], joaat("weapon_pistol"), 100, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0xA9C8960E8684C1B5(Local_880.f_3[iVar0], unk_0xD53343AA4FB7DD28(50, 100));
		unk_0x9F7794730795E019(Local_880.f_3[iVar0], 2, true);
		unk_0x9F7794730795E019(Local_880.f_3[iVar0], 13, true);
		unk_0x9F7794730795E019(Local_880.f_3[iVar0], 1, false);
		unk_0x9F7794730795E019(Local_880.f_3[iVar0], 3, true);
		unk_0x9F7794730795E019(Local_880.f_3[iVar0], 37, true);
		unk_0x1913FE4CBF41C463(Local_880.f_3[iVar0], 42, true);
		unk_0xF29CF591C4BF6CEE(Local_880.f_3[iVar0], 300f);
		unk_0x33A8F7F7D5F7F33C(Local_880.f_3[iVar0], 300f);
		unk_0xF107E836A70DCE05(Local_880.f_3[iVar0], 300f);
		unk_0x9F8AA94D6D97DBF4(Local_880.f_3[iVar0], true);
		unk_0xC80A74AC829DDD92(Local_880.f_3[iVar0], iLocal_922);
		unk_0x7AEFB85C1D49DEB6(Local_880.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_124(int iParam0)
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

Vector3 func_125(int iParam0)
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

int func_126(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_135(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_127(sParam2, iParam4, 0);
}

int func_127(char* sParam0, int iParam1, bool bParam2)
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
					func_134();
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
		if (func_133(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_132();
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
				func_131();
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
				if (func_130())
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
			if (func_29())
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
			func_129();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_128();
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
		func_134();
	}
	return 0;
}

void func_128()
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

void func_129()
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

int func_130()
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

void func_131()
{
	if (func_87(14))
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
		Global_14393 = func_85();
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

void func_132()
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

bool func_133(int iParam0, int iParam1)
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

void func_134()
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

void func_135(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_136()
{
	if (unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_137(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			if (!unk_0xA6DB27D19ECBB7DA((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_118((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_138(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_139()
{
	Global_14558 = 0;
	func_134();
}

struct<6> func_140()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_141(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_142(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_143(int iParam0)
{
	if (unk_0x4C241E39B23DF959(iParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(iParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	if (unk_0x7239B21A38F536BA(Local_408.f_3))
	{
		if (!unk_0x84A2DD9AC37C35C1(Local_408.f_3))
		{
			unk_0xC80A74AC829DDD92(Local_408.f_3, Local_408.f_413);
			unk_0x69F4BE8C8CC4796C(Local_408.f_3, Local_838.f_3[1], -1, 2048, 4);
			unk_0x3841422E9C488D8C(&iLocal_933);
			unk_0xE8854A4326B9E12B(&iLocal_933);
			unk_0x504D54DF3F6F2247(0, 0, 262144);
			unk_0x15D3A79D4E44B913(0, Local_1001, 1f, 30000, 0.25f, false, 40000f);
			unk_0x93B93A37987F1F3D(0, -30.3f, 0);
			unk_0x0F804F1DB19B9689(0);
			unk_0x39E72BC99E6360CB(iLocal_933);
			unk_0x5ABA3986D90D8A3B(Local_408.f_3, iLocal_933);
		}
	}
}

float func_145(int iParam0, bool bParam1)
{
	return func_151(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), iParam0, bParam1);
}

void func_146(int iParam0, bool bParam1)
{
	if (iParam0 < Local_342.f_0 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_147(&(Local_342.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_110(&(Local_342.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_147(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_148(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_31())
			{
				func_150();
				return 1;
			}
			else if (func_149(uParam0->f_4, fParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, 256);
				}
				else
				{
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, 0);
				}
			}
			unk_0x92B35082E0B42F66(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_149(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_150()
{
	if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6());
	}
}

float func_151(int iParam0, int iParam1, bool bParam2)
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

void func_152(var uParam0, int iParam1)
{
	func_147(uParam0, iParam1);
}

int func_153(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575()) && !unk_0x797AC7CB535BA28F()) && !unk_0xB16FCE9DDC7BA182()) && !iParam0->f_142)
	{
		if (func_170(iParam0))
		{
			func_169(iParam0, &(iParam0->f_43));
			func_164(iParam0);
			func_163(iParam0);
			func_160(iParam0);
			func_159(iParam0, fParam2, fParam3);
			func_156(iParam0);
			return func_154(iParam0, fParam1);
		}
	}
	return 0;
}

int func_154(int iParam0, float fParam1)
{
	if (func_58(iParam0) == 2)
	{
		if (unk_0x20B60995556D004F(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_9(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1) && func_155(1, 1, 1)) && unk_0xB104CD1BABF302E2(iParam0->f_4))
		{
			return func_148(iParam0, 1, fParam1);
		}
	}
	else if (((unk_0x20B60995556D004F(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1) && func_155(1, 1, 1)) && unk_0xB104CD1BABF302E2(iParam0->f_4))
	{
		return func_148(iParam0, 1, fParam1);
	}
	return 0;
}

int func_155(bool bParam0, bool bParam1, bool bParam2)
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

void func_156(int iParam0)
{
	float fVar0;
	
	if ((func_158(iParam0) && func_21(iParam0->f_81, 67108864)) && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
	{
		if ((unk_0x9CD27B0045628463() - iLocal_96) >= 10000)
		{
			fVar0 = func_157(iParam0->f_17, 1);
			if (fVar0 > fLocal_94)
			{
				iLocal_95++;
			}
			else
			{
				iLocal_95 = 0;
			}
			fLocal_94 = fVar0;
			iLocal_96 = unk_0x9CD27B0045628463();
		}
		if (iLocal_95 >= 2 && !func_100())
		{
			func_209(iParam0, 136, 1, 0, 1);
			iLocal_95 = 0;
		}
		if ((unk_0x9CD27B0045628463() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x9CD27B0045628463() % 4000) < 50)
		{
			if (!func_158(iParam0))
			{
			}
			if (!func_21(iParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
		{
			if (iLocal_95 > 0)
			{
				iLocal_95 = 0;
			}
		}
	}
}

float func_157(struct<3> Param0, bool bParam3)
{
	return func_188(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), Param0, bParam3);
}

int func_158(int iParam0)
{
	if (unk_0x4C241E39B23DF959(iParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
		{
			if (unk_0xA3EE4A07279BB9DB(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159(int iParam0, float fParam1, float fParam2)
{
	if (func_158(iParam0) && func_21(iParam0->f_44, 4))
	{
		if ((unk_0x5721B434AD84D57A(iParam0->f_4) || unk_0xD5037BA82E12416F(iParam0->f_4) < 3f) && func_143(iParam0))
		{
			if (!func_284(iParam0, 2))
			{
				func_283(iParam0, 2);
			}
			else if (func_158(iParam0))
			{
				if (func_98(iParam0, 2) > fParam1 && !func_284(iParam0, 14))
				{
					if (func_33())
					{
						func_209(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_209(iParam0, 48, 1, 0, 0);
					}
					func_277(iParam0, 2, 0, 0);
					if (func_284(iParam0, 10))
					{
						func_277(iParam0, 10, 0, 0);
					}
				}
				if (!func_284(iParam0, 3))
				{
					func_277(iParam0, 3, 0, 0);
				}
				else if (func_98(iParam0, 3) >= fParam2)
				{
					func_97(iParam0, 3, 0);
					func_309(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_284(iParam0, 2))
			{
				func_97(iParam0, 2, 0);
			}
			if (func_284(iParam0, 3))
			{
				func_97(iParam0, 3, 0);
			}
		}
	}
}

void func_160(int iParam0)
{
	if (func_162(iParam0))
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	if (unk_0xA151A7394A214E65() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = unk_0xE8AF77C4C06ADC93();
			func_97(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_98(iParam0, 20) > 3f)
				{
					func_209(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_21(iParam0->f_81, 262144) || !func_21(iParam0->f_81, 1048576))
				{
					if (func_98(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_209(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_21(iParam0->f_82, 67108864))
				{
					if (func_98(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_209(iParam0, 85, 1, 0, 0);
						func_97(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_98(iParam0, 20) > 8f)
				{
					func_209(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(iParam0->f_81, 262144) || func_21(iParam0->f_82, 67108864))
			{
				if (!func_284(iParam0, 22))
				{
					func_283(iParam0, 22);
				}
			}
			if (func_284(iParam0, 22) && func_98(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_21(iParam0->f_81, 1048576))
					{
						func_209(iParam0, 84, 1, 0, 0);
						func_97(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_21(iParam0->f_82, 134217728))
					{
						func_209(iParam0, 85, 1, 0, 0);
						func_97(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_162(var uParam0)
{
	return uParam0->f_120;
}

void func_163(int iParam0)
{
	if (unk_0xFA1E2BF8B10598F9(unk_0xA5EDC40EF369B48D()) && !func_21(iParam0->f_44, 2))
	{
		func_152(&(iParam0->f_44), 2);
	}
	else if (!unk_0xFA1E2BF8B10598F9(unk_0xA5EDC40EF369B48D()) && func_21(iParam0->f_44, 2))
	{
		func_109(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_47(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_209(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_164(int iParam0)
{
	if (!func_21(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
				{
					if (func_98(iParam0, 9) > 1f)
					{
						func_168(iParam0, unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()));
						if (iParam0->f_410 != 22)
						{
							func_209(iParam0, 50, 1, 1, 0);
						}
						func_277(iParam0, 9, 0, 0);
						if (unk_0xA6DB27D19ECBB7DA(iParam0->f_9))
						{
							unk_0x45FF974EEE1C8734(iParam0->f_9, 0);
							unk_0x4F7D8A9BFB0B43E9(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_100() && func_98(iParam0, 9) > 4f)
				{
					func_209(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_167("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_209(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x238DB2A2C23EE9EF(unk_0xA5EDC40EF369B48D(), func_166(iParam0)))
				{
					func_168(iParam0, unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()));
					func_47(6, 0);
				}
				if (!func_165(iParam0))
				{
					if (!unk_0x16754C556D2EDE3D())
					{
						if (func_98(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_209(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1)
				{
					if (func_167("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xCC33FA791322B9D9();
					}
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_9))
					{
						unk_0x45FF974EEE1C8734(iParam0->f_9, 255);
						unk_0x4F7D8A9BFB0B43E9(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_100())
				{
					if (iParam0->f_410 != 22)
					{
						func_209(iParam0, 53, 1, 0, 1);
					}
					func_47(7, func_166(iParam0));
					func_168(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_100())
				{
					func_97(iParam0, 9, 0);
					func_277(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_165(int iParam0)
{
	return iParam0->f_110;
}

int func_166(int iParam0)
{
	return iParam0->f_106;
}

bool func_167(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC63CD5D2920ACBE7(sParam2);
	}
	return unk_0x8A9BA1AB3E237613();
}

void func_168(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_169(var uParam0, float* fParam1)
{
	unk_0xD7AE6C9C9C6AC54C(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

int func_170(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if (!unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, true) && !unk_0xBB062B2B5722478E(uParam0->f_3))
			{
				func_309(uParam0, "Passenger left car.", 9);
			}
			else if (func_180(uParam0))
			{
				if (func_167("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xCF708001E1E536DD("TAXI_OBJ_PICKUP");
				}
				if (unk_0x5A859503B0C08678())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x9CD27B0045628463() % 1000) < 50)
				{
				}
				func_171(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_171(var uParam0, bool bParam1)
{
	func_179(uParam0, uParam0->f_3);
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_284(uParam0, 14))
			{
				if (func_100())
				{
					func_178(1);
				}
				func_177(uParam0, 11, 1);
				func_172(uParam0, 1);
				func_277(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_158(uParam0))
				{
					if ((unk_0x9CD27B0045628463() % 1000) < 50)
					{
					}
					if (unk_0x997ABD671D25CA0B(uParam0->f_2, false))
					{
						if (func_98(uParam0, 15) > 5f)
						{
							func_277(uParam0, 15, 0f, 1);
						}
					}
					if (func_98(uParam0, 14) > 20f)
					{
						func_309(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_98(uParam0, 14) > 20f)
				{
					if (func_145(uParam0->f_4, 1) > 40f)
					{
						func_309(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_309(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_8, 0);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, false);
				func_176(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_9, 0);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, false);
				unk_0xCC33FA791322B9D9();
				if (func_158(uParam0))
				{
					func_209(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_176(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_173(uParam0, 0, 0);
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
		{
			unk_0x86A652570E5F25DD(&(uParam0->f_10));
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_8, 255);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, true);
			}
			else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x45FF974EEE1C8734(uParam0->f_9, 0);
					unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
					unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
				}
			}
			unk_0xCC33FA791322B9D9();
		}
	}
}

void func_173(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_394(uParam0);
	}
	if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
	{
		uParam0->f_10 = func_118(uParam0->f_4, 1, 0);
		unk_0xEAA0FFE120D92784(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x4F7D8A9BFB0B43E9(uParam0->f_10, true);
		func_174(uParam0);
		if (bParam2)
		{
			unk_0xCC33FA791322B9D9();
			func_209(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_174(var uParam0)
{
	func_277(uParam0, 14, 0, 0);
	func_175();
}

void func_175()
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x4C241E39B23DF959(iVar0, false))
	{
		unk_0xE65F427EB70AB1ED(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_176(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0xCC33FA791322B9D9();
		func_209(uParam0, iParam3, 1, 0, 0);
		func_152(uParam1, iParam2);
	}
}

void func_177(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_178(int iParam0)
{
	Global_16703 = iParam0;
}

void func_179(var uParam0, int iParam1)
{
	if (unk_0x7239B21A38F536BA(iParam1))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam1))
		{
			if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
			{
				if ((unk_0x2D343D2219CD027A(iParam1, joaat("weapon_stungun"), 0) || unk_0x2D343D2219CD027A(iParam1, 0, 2)) || unk_0x2D343D2219CD027A(iParam1, 0, 1))
				{
					func_309(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
			}
		}
	}
}

int func_180(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_284(uParam0, 14))
			{
				func_181(uParam0);
			}
			func_172(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0)
{
	func_97(uParam0, 14, 0);
	func_97(uParam0, 15, 0);
	func_183();
	if (func_182())
	{
		func_178(0);
	}
}

int func_182()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_183()
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x4C241E39B23DF959(iVar0, false))
	{
		unk_0xE65F427EB70AB1ED(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_184(var uParam0, int iParam1, bool bParam2)
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

void func_185(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_186(), 24);
		iVar0++;
	}
	unk_0xCC33FA791322B9D9();
	func_45();
}

var func_186()
{
	var uVar0;
	
	return uVar0;
}

void func_187(var uParam0)
{
	uParam0->f_120 = 0;
}

float func_188(int iParam0, struct<3> Param1, bool bParam4)
{
	if (unk_0x5F9532F3B5CC2551(iParam0))
	{
		return -1f;
	}
	return unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam0, true), Param1, bParam4);
}

void func_189()
{
	switch (iLocal_923)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(Local_408.f_4, false) && func_9(Local_408.f_4, Local_408.f_17, 1) < 300f)
			{
				func_204();
				iLocal_923 = 1;
			}
			break;
		
		case 1:
			if (func_202())
			{
				iLocal_923 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_970)
			{
				func_199();
				func_198();
				func_194();
				func_193();
				func_192();
				func_191();
				iLocal_923 = 3;
				bLocal_970 = true;
			}
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(Local_408.f_4, false) && func_9(Local_408.f_4, Local_408.f_17, 1) > 350f)
			{
				func_190();
				iLocal_923 = 0;
			}
			break;
	}
}

void func_190()
{
	unk_0xE532F5D78798DAAB(iLocal_929);
	unk_0xE532F5D78798DAAB(iLocal_930);
	unk_0xE532F5D78798DAAB(iLocal_931);
	unk_0xE532F5D78798DAAB(Local_838.f_19[0]);
	unk_0xE532F5D78798DAAB(Local_838.f_19[1]);
	unk_0xE532F5D78798DAAB(Local_838.f_32[0]);
	unk_0xE532F5D78798DAAB(Local_838.f_32[1]);
	unk_0xE532F5D78798DAAB(Local_838.f_32[2]);
	unk_0xE532F5D78798DAAB(Local_838.f_32[3]);
	unk_0xE532F5D78798DAAB(Local_880.f_32[1]);
	unk_0xF1160ACCF98A3FC8(iLocal_953, func_121(0));
	unk_0xF1160ACCF98A3FC8(iLocal_953, func_121(1));
	unk_0xF66A602F829E2A06("random@countryside_gang_fight");
	unk_0xF66A602F829E2A06(sLocal_1007);
}

void func_191()
{
	iLocal_934[0] = unk_0x509D5878EB39E842(iLocal_929, 204.8445f, -3333.998f, 4.795367f, true, true, false);
	unk_0x06843DA7060A026B(iLocal_934[0], 204.8445f, -3333.998f, 4.795367f, true, false, false, true);
	unk_0x8524A8B0171D5E07(iLocal_934[0], -0.036243f, -0.00124f, 91.56063f, 2, true);
	iLocal_934[1] = unk_0x509D5878EB39E842(iLocal_929, 212.67f, -3328.77f, 4.79f, true, true, false);
	unk_0x06843DA7060A026B(iLocal_934[1], 212.67f, -3328.77f, 4.79f, true, false, false, true);
	unk_0x8524A8B0171D5E07(iLocal_934[1], -0.04f, -0.01f, 86.36f, 2, true);
	iLocal_934[2] = unk_0x509D5878EB39E842(iLocal_929, 204.8248f, -3328.631f, 4.7915f, true, true, false);
	unk_0x06843DA7060A026B(iLocal_934[2], 204.8248f, -3328.631f, 4.7915f, true, false, false, true);
	unk_0x8524A8B0171D5E07(iLocal_934[2], -0.0027f, -0.0374f, 0.1414f, 2, true);
	iLocal_939 = unk_0x509D5878EB39E842(iLocal_930, 214.2505f, -3314.673f, 4.7883f, true, true, false);
	unk_0x06843DA7060A026B(iLocal_939, 214.2505f, -3314.673f, 4.7883f, true, false, false, true);
	unk_0x8524A8B0171D5E07(iLocal_939, 0f, 0f, -17.399f, 2, true);
	if (unk_0x98A4EB5D89A0C952(iLocal_931))
	{
		iLocal_938 = unk_0x509D5878EB39E842(iLocal_931, 220.7266f, -3320.001f, 5.2749f, true, true, false);
		unk_0x06843DA7060A026B(iLocal_938, 220.7266f, -3320.001f, 5.2749f, true, false, false, true);
		unk_0x8524A8B0171D5E07(iLocal_938, 0f, 0f, 0f, 2, true);
	}
}

void func_192()
{
	if ((!unk_0x84A2DD9AC37C35C1(iLocal_940[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_940[0])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[3]))
	{
		iLocal_959 = unk_0x8C18E0F9080ADD73(Local_989, Local_992, 2);
		unk_0xD9A897A4C6C2974F(iLocal_959, true);
		unk_0xEEA929141F699854(Local_838.f_3[3], iLocal_959, sLocal_1007, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1000f, 0);
		unk_0xEEA929141F699854(iLocal_940[0], iLocal_959, sLocal_1007, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1000f, 0);
		unk_0xEEA929141F699854(iLocal_940[1], iLocal_959, sLocal_1007, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1000f, 0);
	}
	if ((!unk_0x84A2DD9AC37C35C1(Local_838.f_3[0]) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[1])) && !unk_0x84A2DD9AC37C35C1(Local_838.f_3[2]))
	{
		unk_0xBF0FD6E56C964FCB(Local_838.f_3[0], joaat("weapon_pistol"), -1, true, true);
		iLocal_963 = unk_0x8C18E0F9080ADD73(Local_995, Local_998, 2);
		unk_0xD9A897A4C6C2974F(iLocal_963, true);
		unk_0xEEA929141F699854(Local_838.f_3[0], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
		unk_0xEEA929141F699854(Local_838.f_3[1], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
		unk_0xEEA929141F699854(Local_838.f_3[2], iLocal_963, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
	}
}

void func_193()
{
	int iVar0;
	
	iVar0 = 0;
	func_7(&(Local_408.f_244), 4, Local_838.f_3[1], "TaxiDom", 0, 1);
	func_7(&(Local_408.f_244), 5, Local_838.f_3[3], "TaxiGangM", 0, 1);
	unk_0x6C8065A3B780185B(Local_838.f_3[1], "TaxiDom");
	unk_0x6C8065A3B780185B(Local_838.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0xA9C8960E8684C1B5(Local_838.f_3[iVar0], unk_0xD53343AA4FB7DD28(20, 50));
		unk_0x9F7794730795E019(Local_838.f_3[iVar0], 2, true);
		unk_0x9F7794730795E019(Local_838.f_3[iVar0], 13, true);
		unk_0x9F7794730795E019(Local_838.f_3[iVar0], 1, false);
		unk_0x9F7794730795E019(Local_838.f_3[iVar0], 3, true);
		unk_0x9F7794730795E019(Local_838.f_3[iVar0], 37, true);
		unk_0x1913FE4CBF41C463(Local_838.f_3[iVar0], 42, true);
		unk_0xF29CF591C4BF6CEE(Local_838.f_3[iVar0], 300f);
		unk_0x33A8F7F7D5F7F33C(Local_838.f_3[iVar0], 300f);
		unk_0xF107E836A70DCE05(Local_838.f_3[iVar0], 300f);
		unk_0x9F8AA94D6D97DBF4(Local_838.f_3[iVar0], false);
		unk_0x7AEFB85C1D49DEB6(Local_838.f_3[iVar0], 1);
		iVar0++;
	}
	unk_0xC80A74AC829DDD92(Local_838.f_3[0], iLocal_922);
	unk_0xC80A74AC829DDD92(Local_838.f_3[1], iLocal_922);
	unk_0xC80A74AC829DDD92(Local_838.f_3[2], iLocal_922);
	unk_0xC80A74AC829DDD92(Local_838.f_3[3], iLocal_922);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		unk_0x1913FE4CBF41C463(iLocal_940[iVar0], 42, true);
		unk_0xF29CF591C4BF6CEE(iLocal_940[iVar0], 100f);
		unk_0x33A8F7F7D5F7F33C(iLocal_940[iVar0], 100f);
		unk_0xF107E836A70DCE05(iLocal_940[iVar0], 100f);
		unk_0x9F8AA94D6D97DBF4(iLocal_940[iVar0], true);
		iVar0++;
	}
	func_7(&(Local_408.f_244), 7, iLocal_940[1], "TaxiGangGirl2", 0, 1);
	func_7(&(Local_408.f_244), 8, iLocal_940[0], "TaxiGangGirl1", 0, 1);
	unk_0x6C8065A3B780185B(iLocal_940[1], "TaxiGangGirl2");
	unk_0x6C8065A3B780185B(iLocal_940[0], "TaxiGangGirl1");
}

void func_194()
{
	Local_838.f_3[0] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[0], func_197(1), func_196(1), true, true);
	Local_838.f_3[1] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[0], func_195(2), 0f, true, true);
	Local_838.f_3[2] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[0], func_197(3), func_196(3), true, true);
	Local_838.f_3[3] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[0], func_197(4), func_196(4), true, true);
	unk_0x1913FE4CBF41C463(Local_838.f_3[1], 20, true);
	iLocal_940[0] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[1], func_197(5), func_196(5), true, true);
	iLocal_940[1] = unk_0xD49F9B0955C367DE(26, Local_838.f_19[1], func_197(6), func_196(6), true, true);
	unk_0x63F58F7C80513AAD(iLocal_940[0], false);
	unk_0x63F58F7C80513AAD(iLocal_940[1], false);
	if (!unk_0x5F9532F3B5CC2551(Local_838.f_3[0]))
	{
		unk_0x262B14F48D29DE80(Local_838.f_3[0], 0, 1, 1, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[0], 3, 0, 5, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[0], 4, 0, 2, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[0], 10, 0, 0, 0);
	}
	if (!unk_0x5F9532F3B5CC2551(Local_838.f_3[1]))
	{
		unk_0x262B14F48D29DE80(Local_838.f_3[1], 0, 0, 0, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[1], 3, 0, 0, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[1], 4, 1, 0, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[1], 10, 0, 1, 0);
	}
	if (!unk_0x5F9532F3B5CC2551(Local_838.f_3[2]))
	{
		unk_0x262B14F48D29DE80(Local_838.f_3[2], 0, 1, 0, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[2], 3, 1, 0, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[2], 4, 1, 2, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[2], 10, 1, 0, 0);
	}
	if (!unk_0x5F9532F3B5CC2551(Local_838.f_3[3]))
	{
		unk_0x262B14F48D29DE80(Local_838.f_3[3], 0, 0, 2, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[3], 3, 1, 1, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[3], 4, 0, 2, 0);
		unk_0x262B14F48D29DE80(Local_838.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_195(int iParam0)
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

float func_196(int iParam0)
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

Vector3 func_197(int iParam0)
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

void func_198()
{
	unk_0x7C65DAC73C35C862(Local_838.f_27[2], 5, false, false);
	unk_0x7C65DAC73C35C862(Local_838.f_27[3], 5, false, false);
}

void func_199()
{
	Local_838.f_27[0] = unk_0xAF35D0D2583051B0(Local_838.f_32[0], func_201(1), func_200(1), 1, 1);
	Local_838.f_27[1] = unk_0xAF35D0D2583051B0(Local_838.f_32[1], func_201(2), func_200(2), 1, 1);
	Local_838.f_27[2] = unk_0xAF35D0D2583051B0(Local_838.f_32[3], func_201(3), func_200(3), 1, 1);
	Local_838.f_27[3] = unk_0xAF35D0D2583051B0(Local_838.f_32[3], func_201(4), func_200(4), 1, 1);
	iLocal_944 = unk_0xAF35D0D2583051B0(Local_838.f_32[2], func_201(5), func_200(5), 1, 1);
	unk_0x95A88F0B409CDA47(Local_838.f_27[2], "NikoB");
	unk_0x95A88F0B409CDA47(Local_838.f_27[3], "RomanB");
}

float func_200(int iParam0)
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

Vector3 func_201(int iParam0)
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

int func_202()
{
	if (!unk_0x98A4EB5D89A0C952(iLocal_929))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(iLocal_930))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_19[0]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_19[1]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_32[0]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_32[1]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_32[2]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_838.f_32[3]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(Local_880.f_32[1]))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x300D614A4C785FC4(iLocal_953, func_121(0)))
	{
		func_203("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x300D614A4C785FC4(iLocal_953, func_121(1)))
	{
		func_203("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C("random@countryside_gang_fight"))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C(sLocal_1007))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x98A4EB5D89A0C952(iLocal_931))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_949, 1000);
	}
	return 1;
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x9CD27B0045628463() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x9CD27B0045628463();
}

void func_204()
{
	unk_0x963D27A58DF860AC(iLocal_929);
	unk_0x963D27A58DF860AC(iLocal_930);
	unk_0x963D27A58DF860AC(iLocal_931);
	unk_0x963D27A58DF860AC(Local_838.f_19[0]);
	unk_0x963D27A58DF860AC(Local_838.f_19[1]);
	unk_0x963D27A58DF860AC(Local_838.f_32[0]);
	unk_0x963D27A58DF860AC(Local_838.f_32[1]);
	unk_0x963D27A58DF860AC(Local_838.f_32[2]);
	unk_0x963D27A58DF860AC(Local_838.f_32[3]);
	unk_0x963D27A58DF860AC(Local_880.f_32[1]);
	unk_0xAF514CABE74CBF15(iLocal_953, func_121(0));
	unk_0xAF514CABE74CBF15(iLocal_953, func_121(1));
	unk_0xD3BD40951412FEF6("random@countryside_gang_fight");
	unk_0xD3BD40951412FEF6(sLocal_1007);
}

void func_205()
{
	func_152(&(Local_408.f_55), 2);
	func_152(&(Local_408.f_55), 4);
	func_152(&(Local_408.f_55), 16);
	func_152(&(Local_408.f_55), 64);
	func_152(&(Local_408.f_55), 256);
	func_152(&(Local_408.f_55), 512);
	func_152(&(Local_408.f_55), 1024);
	func_152(&(Local_408.f_55), 2048);
	func_152(&(Local_408.f_55), 4096);
	func_152(&(Local_408.f_55), 1073741824);
	func_152(&(Local_408.f_100), 8);
	func_152(&(Local_408.f_100), 2048);
	func_152(&(Local_408.f_100), 256);
	func_152(&uLocal_1104, 2);
}

void func_206(var uParam0)
{
	func_207(uParam0, 1000);
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xAAA34F8A7CB32098(uParam0->f_3);
		unk_0x5AD23D40115353AC(uParam0->f_3, unk_0xD80958FC74E988A6(), 0);
	}
	func_139();
	func_181(uParam0);
}

void func_207(var uParam0, int iParam1)
{
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		unk_0x865908C81A2C22E9(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		unk_0x07E5B515DB0636FC(false, true, iParam1, true, false, 0);
	}
	else
	{
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	}
}

void func_208(int iParam0)
{
	unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	func_207(iParam0, 1000);
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_277(iParam0, 16, 4f, 0);
		if (func_210(iParam0))
		{
			func_45();
		}
	}
	func_240(iParam0, iParam2, bParam3);
}

int func_210(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_100())
	{
		Var6 = { func_212() };
		if (!unk_0xCA042B6957743895(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x0C515FAB3FF9EA92(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_211(&Var0);
			if (unk_0x0C515FAB3FF9EA92(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_211(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_212()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_213(int iParam0)
{
	if (unk_0x4C241E39B23DF959(iParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
		{
			if ((unk_0xBB062B2B5722478E(iParam0->f_3) && (unk_0x9CD27B0045628463() - iLocal_88) > 500) || unk_0xA3EE4A07279BB9DB(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_214(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x4C241E39B23DF959(iParam0->f_4, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(iParam0->f_2, iParam0->f_4, false))
		{
			if ((unk_0x9CD27B0045628463() % 1000) < 50)
			{
			}
			func_171(iParam0, 1);
			if (func_31())
			{
				unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
			}
			if (unk_0x77F1BEB8863288D5(iParam0->f_3, 2106541073) == 1 || unk_0x77F1BEB8863288D5(iParam0->f_3, 2106541073) == 0)
			{
				unk_0xAAA34F8A7CB32098(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_86 = 0;
				unk_0x5AD23D40115353AC(iParam0->f_3, unk_0xD80958FC74E988A6(), 0);
			}
		}
		else if (unk_0x238DB2A2C23EE9EF(unk_0xA5EDC40EF369B48D(), 0))
		{
			func_239(iParam0);
			if (iParam0->f_48 > 1)
			{
				unk_0x3841422E9C488D8C(&iVar3);
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0x15D3A79D4E44B913(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
				unk_0x5AD23D40115353AC(0, iParam0->f_4, 0);
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_284(iParam0, 14))
			{
				func_181(iParam0);
				func_172(iParam0, 0);
			}
			if (func_284(iParam0, 9))
			{
				func_97(iParam0, 9, 0);
				unk_0xCC33FA791322B9D9();
				if (unk_0xA6DB27D19ECBB7DA(iParam0->f_8))
				{
					unk_0x45FF974EEE1C8734(iParam0->f_8, 255);
					unk_0x4F7D8A9BFB0B43E9(iParam0->f_8, true);
				}
			}
			if (!unk_0x5F9532F3B5CC2551(iParam0->f_3))
			{
				fVar4 = ((unk_0xD5037BA82E12416F(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_238(iParam0, iParam0->f_3) > 300f)
				{
					func_309(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (unk_0x77F1BEB8863288D5(iParam0->f_3, 242628503) != 1 || ((func_151(unk_0xD80958FC74E988A6(), iParam0->f_3, 1) < 20f && func_9(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_9(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_235(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_234(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_93)
							{
								iParam0->f_7 = func_233(iParam0->f_4, iParam0->f_3);
								iVar0 = func_232(iParam0, &iVar1);
								if (!unk_0x5F9532F3B5CC2551(iVar0))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x504D54DF3F6F2247(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x504D54DF3F6F2247(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (unk_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, 0, false, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!unk_0x5F9532F3B5CC2551(iVar0))
											{
												unk_0x504D54DF3F6F2247(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xE1EF3C1216AFF2CD(iParam0->f_3);
							unk_0xC20E50AA46D09CA8(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_143(iParam0))
							{
								unk_0xE1EF3C1216AFF2CD(iParam0->f_3);
							}
							else if (((unk_0x77F1BEB8863288D5(iParam0->f_3, 242628503) != 1 && unk_0x77F1BEB8863288D5(iParam0->f_3, 242628503) != 0) && unk_0x77F1BEB8863288D5(iParam0->f_3, 242628503) != 7) && func_238(iParam0, iParam0->f_3) > 8f)
							{
								unk_0x3841422E9C488D8C(&(iParam0->f_243));
								unk_0xE8854A4326B9E12B(&(iParam0->f_243));
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								if (iParam0->f_411 != 9)
								{
									unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									unk_0xEA47FE3719165B94(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								unk_0x39E72BC99E6360CB(iParam0->f_243);
								unk_0x5ABA3986D90D8A3B(iParam0->f_3, iParam0->f_243);
							}
							if (unk_0x1F0B79228E461EC9(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x28D1A16553C51776(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (func_151(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_231(iParam0, 1))
								{
									unk_0xAAA34F8A7CB32098(iParam0->f_3);
									func_309(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_230(iParam0->f_4))
								{
									unk_0xAAA34F8A7CB32098(iParam0->f_3);
									func_309(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_228(iParam0);
						if (func_238(iParam0, iParam0->f_3) < fVar4 || func_31())
						{
							if (unk_0xA3EE4A07279BB9DB(iParam0->f_2, iParam0->f_4, false))
							{
								if (func_216(iParam0))
								{
									func_215(iParam0);
									iLocal_88 = unk_0x9CD27B0045628463();
									unk_0x1913FE4CBF41C463(iParam0->f_3, 26, true);
									func_97(iParam0, 5, 0);
									unk_0x21986729D6A3A830();
									unk_0xD7AE6C9C9C6AC54C(iParam0->f_428, &(iParam0->f_42), -1);
									unk_0x0EB0585D15254740(iParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_215(int iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_8))
	{
		unk_0x4F7D8A9BFB0B43E9(iParam0->f_8, false);
		unk_0x86A652570E5F25DD(&(iParam0->f_8));
	}
}

int func_216(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_203("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x5F9532F3B5CC2551(iParam0->f_3) && !unk_0x5F9532F3B5CC2551(iParam0->f_4))
	{
		func_227();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_225(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_148(iParam0, 0, 1084227584) && func_155(1, 1, 1))
			{
				if (func_231(iParam0, 1))
				{
					iLocal_87 = unk_0x9CD27B0045628463();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_85 = 1;
				}
				else
				{
					func_309(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				iParam0->f_7 = func_233(iParam0->f_4, iParam0->f_3);
				iVar9 = func_232(iParam0, &iVar10);
				if (!unk_0x5F9532F3B5CC2551(iVar9))
				{
					if (iVar10 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0x504D54DF3F6F2247(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x504D54DF3F6F2247(iVar9, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (unk_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, 0, false, false))
					{
						iParam0->f_7 = 0;
						if (!unk_0x5F9532F3B5CC2551(iVar9))
						{
							unk_0x504D54DF3F6F2247(iVar9, 0, 4096);
						}
					}
				}
				iLocal_85 = 2;
			}
			break;
		
		case 2:
			if (iParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
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
			iVar12 = func_224(&(iParam0->f_409), unk_0x1899F328B0E12848(iParam0->f_4, 0f, 2.2f, 0.275f), unk_0x1899F328B0E12848(iParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (iParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_223(0, 0, 1);
				unk_0xBE31FD6CE464AC59(unk_0x3FEF770D40960D5A(iParam0->f_4, true), 3f, 0);
				unk_0xDD9B9B385AAC7F5B(unk_0x3FEF770D40960D5A(iParam0->f_4, true), 25f, 0);
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				func_105();
				func_240(iParam0, 0, 0);
				Var13 = { unk_0x1899F328B0E12848(iParam0->f_4, Var6) };
				unk_0x06843DA7060A026B(iParam0->f_3, Var13, true, false, false, true);
				unk_0x8E2530AA8ADA980E(iParam0->f_3, func_221(iParam0));
				func_220(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x4D41783FB745E42E(*iParam0, unk_0x1899F328B0E12848(iParam0->f_4, Var0));
				unk_0x5640BFF86B16E8DC(*iParam0, iParam0->f_4, Var3, true);
				unk_0x026FB97D0A425F84(*iParam0, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				unk_0x2208438012482A1A(iParam0->f_3, false, false);
				unk_0xC20E50AA46D09CA8(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			func_203("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x5F9532F3B5CC2551(iParam0->f_3) && !unk_0x5F9532F3B5CC2551(iParam0->f_4))
			{
				if (!unk_0x997ABD671D25CA0B(iParam0->f_3, false))
				{
					unk_0xF75B0D629E1C063D(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					unk_0x93D9BD300D7789E5(iParam0->f_4, func_219(iParam0->f_7), true);
				}
				unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				unk_0x865908C81A2C22E9(*iParam0, false);
				unk_0x865908C81A2C22E9(iParam0->f_1, false);
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0xD4E8E24955024033(800);
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				func_105();
				func_240(iParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
			{
				func_217(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0x865908C81A2C22E9(*iParam0, false);
			unk_0x865908C81A2C22E9(iParam0->f_1, false);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			func_217(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x5F9532F3B5CC2551(iParam0->f_3) && !unk_0x5F9532F3B5CC2551(iParam0->f_4))
			{
				if (unk_0xBB062B2B5722478E(iParam0->f_3) || unk_0x997ABD671D25CA0B(iParam0->f_3, true))
				{
					return 1;
				}
				else if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 1 && unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 0)
				{
					unk_0xC20E50AA46D09CA8(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_217(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA0EBB943C300E693(true);
		unk_0xA6294919E56FF02A(true);
	}
	func_218(23, 0);
}

void func_218(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

int func_219(int iParam0)
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

void func_220(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	if (!unk_0xA7A932170592B50E(*iParam0))
	{
		*iParam0 = unk_0x6ABFA3E16460F22D(26379945, Param1, Param4, fParam7, false, 2);
	}
}

float func_221(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x1899F328B0E12848(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x1899F328B0E12848(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_222(unk_0x3FEF770D40960D5A(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_222(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_223(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_218(23, 1);
}

int func_224(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x3D87450E15D98694(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_225(int iParam0)
{
	if (func_226() && unk_0x9CD27B0045628463() >= iParam0 + 1000)
	{
		unk_0x891B5B39AC6302AF(500);
		while (!unk_0xB16FCE9DDC7BA182())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_139();
		return 1;
	}
	return 0;
}

int func_226()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_227()
{
	if (func_33())
	{
		unk_0x9DC711BC69C548DF("appInternet");
	}
	if (func_32())
	{
		unk_0x9DC711BC69C548DF("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

void func_228(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if (func_145(uParam0->f_3, 1) > 30f || func_229(uParam0))
			{
				if (unk_0x77F1BEB8863288D5(uParam0->f_3, -1794415470) == 1 || unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) == 1)
				{
					unk_0x3841422E9C488D8C(&iVar0);
					unk_0xE8854A4326B9E12B(&iVar0);
					unk_0x5AD23D40115353AC(0, uParam0->f_4, 0);
					unk_0xEA47FE3719165B94(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					unk_0x15D3A79D4E44B913(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
					func_309(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_229(var uParam0)
{
	if ((unk_0xD5037BA82E12416F(uParam0->f_4) > 3f && func_98(uParam0, 5) > 15f) || unk_0x1DBD58820FA61D71(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xBA291848A0815CA9(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xB8E181E559464527(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 3))
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

int func_231(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0[0] = unk_0xBB40DD2270B65366(uParam0->f_4, 1);
		iVar0[1] = unk_0xBB40DD2270B65366(uParam0->f_4, 2);
		iVar0[2] = unk_0xBB40DD2270B65366(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x7239B21A38F536BA(iVar0[iVar4]))
			{
				if (unk_0x5F9532F3B5CC2551(iVar0[iVar4]))
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
		if ((unk_0x9CD27B0045628463() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_232(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 1);
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 2);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 0);
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xA7C4F2C6E744A550(iParam0);
	Var0 = { unk_0x2274BC1C4885E333(iParam0, unk_0x3FEF770D40960D5A(iParam1, true)) };
	if (unk_0x9F47B058362C84B5(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x9F47B058362C84B5(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (unk_0x639431E895B9AA57(iParam1, iParam0, 1, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x639431E895B9AA57(iParam1, iParam0, 1, false, false))
	{
		iVar3 = 1;
	}
	else if (unk_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_234(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (!unk_0xE31C2C72B8692B64(uParam0->f_3) && func_145(uParam0->f_3, 1) < fParam2)
		{
			if (!func_284(uParam0, 5))
			{
				func_277(uParam0, 5, 0, 0);
			}
		}
		else if (func_284(uParam0, 5))
		{
			func_97(uParam0, 5, 0);
		}
		if (((func_98(uParam0, 5) > IntToFloat(iParam1) && unk_0xD5037BA82E12416F(uParam0->f_4) < fParam4) && !unk_0xE31C2C72B8692B64(uParam0->f_3)) || func_145(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_235(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xFB71170B7E76ACBA(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xFB71170B7E76ACBA(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x44A8FCB8ED227738(uParam0->f_4, iVar18) };
		Var6 = { unk_0x2274BC1C4885E333(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x1899F328B0E12848(uParam0->f_4, Var6) };
	Var3 = { unk_0x1899F328B0E12848(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x7FDFADE676AA3CB0(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x9F8AA94D6D97DBF4(uParam0->f_3, true);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_151(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x73D57CFFDD12C355((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x7EE9F5D83DD4F90E(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x3D87450E15D98694(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_86 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 1 && unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 0)
			{
				unk_0x3841422E9C488D8C(&(uParam0->f_243));
				unk_0xE8854A4326B9E12B(&(uParam0->f_243));
				unk_0xEA47FE3719165B94(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
				unk_0x58C70CF3A41E4AE7(uParam0->f_243, true);
				unk_0x39E72BC99E6360CB(uParam0->f_243);
				unk_0x5ABA3986D90D8A3B(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xCC33FA791322B9D9();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_209(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_236(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
			unk_0x69F4BE8C8CC4796C(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x3841422E9C488D8C(&(uParam0->f_243));
			unk_0xE8854A4326B9E12B(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				unk_0xEA47FE3719165B94(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
			unk_0x39E72BC99E6360CB(uParam0->f_243);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, uParam0->f_243);
			unk_0x3841422E9C488D8C(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x28D1A16553C51776(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_236(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_237(iParam3), false);
}

int func_237(int iParam0)
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

float func_238(var uParam0, int iParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		if (func_143(uParam0))
		{
			return func_151(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_239(var uParam0)
{
	func_179(uParam0, uParam0->f_3);
	if (func_143(uParam0))
	{
		if (func_284(uParam0, 14))
		{
			func_181(uParam0);
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
			{
				unk_0x86A652570E5F25DD(&(uParam0->f_10));
			}
		}
	}
	if (!func_284(uParam0, 9))
	{
		if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
		{
			unk_0x45FF974EEE1C8734(uParam0->f_8, 0);
			unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, false);
		}
		func_277(uParam0, 9, 0, 0);
		func_138("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_240(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_277(iParam0, 16, 4f, 0);
		unk_0xCC33FA791322B9D9();
	}
}

int func_241(var uParam0, int iParam1)
{
	if (!unk_0x02245FE4BED318B8(0))
	{
		return 0;
	}
	func_245(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()) && !func_21(uParam0->f_44, 256))
			{
				func_152(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				func_209(uParam0, 135, 1, 0, 1);
				func_152(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_244(uParam0, iParam1))
	{
		if (func_145(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0x5AD23D40115353AC(uParam0->f_3, unk_0xD80958FC74E988A6(), 0);
				func_209(uParam0, 133, 1, 0, 1);
				func_152(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x84A2DD9AC37C35C1(uParam0->f_3) || unk_0xBBCCE00B381F8482(uParam0->f_3)) || func_145(uParam0->f_3, 1) > 400f)
		{
			func_309(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x9A9112A0FE9A4713(uParam0->f_2, false);
		unk_0x92F0CF722BC4202F(uParam0->f_4, true);
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0xB72E26D81006005B(uParam0->f_4);
			func_242(uParam0);
			func_47(2, 0);
			bLocal_93 = true;
			func_99(&iLocal_89);
			return 1;
		}
		else
		{
			func_309(uParam0, "No Taxi", 21);
			func_142("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_242(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (func_243())
		{
		}
	}
}

int func_243()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				iVar1 = unk_0x9F47B058362C84B5(iVar0);
				bVar2 = func_230(iVar0);
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
				if (unk_0x7F6DB52EEFC96DF8(iVar1))
				{
					if (unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xA7C4F2C6E744A550(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						func_142("TX_VIP_DMGD", -1);
						if (func_141("TX_VIP_DMGD"))
						{
							func_152(&(uParam0->f_44), 64);
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						func_142("TX_VIP_CAR", -1);
						if (func_141("TX_VIP_CAR"))
						{
							func_152(&(uParam0->f_44), 32);
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						func_142("TX_VIP_SMALL", -1);
						if (func_141("TX_VIP_SMALL"))
						{
							func_152(&(uParam0->f_44), 16);
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_109(&(uParam0->f_44), 16);
			func_109(&(uParam0->f_44), 64);
			func_109(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_245(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_246(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_110(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_247()
{
	Local_342.f_0 = 0;
	func_264(42867, 42842, 1);
	func_264(42603, 42580, 1);
	func_264(42519, 42494, 1);
	func_264(42423, 42399, 1);
	func_264(42289, 42268, 1);
	func_264(42215, 42190, 1);
	func_264(42048, 42025, 1);
}

int func_248(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_249(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_4))
	{
		if (func_251(uParam0->f_4))
		{
			func_250(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_250(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_251(int iParam0)
{
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 1;
	}
	if (unk_0xC45D23BAF168AAB8(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x679BE1DAF71DA874(iParam0, 0, 40000) || unk_0x679BE1DAF71DA874(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_253(var uParam0)
{
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		if (func_254(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_250(uParam0, 11);
	return 1;
}

int func_256(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0->f_4))
	{
		if (unk_0xCFB0A0D8EDD145A3(iParam0->f_4) && !unk_0xB104CD1BABF302E2(iParam0->f_4))
		{
			if (!func_284(iParam0, 25))
			{
				func_277(iParam0, 25, 0, 0);
			}
			else if (func_98(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_284(iParam0, 25))
		{
			func_97(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_257(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_258(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (unk_0x57E4C39DE5EE8470(uParam0->f_4))
		{
			if (unk_0x679BE1DAF71DA874(uParam0->f_4, 0, 40000) || unk_0x679BE1DAF71DA874(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_259(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_260(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
		{
			if (unk_0x5721B434AD84D57A(uParam0->f_4))
			{
				if (func_254(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_261(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_262(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_4))
	{
		if (func_263(uParam0->f_4))
		{
			func_250(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 1;
	}
	if (unk_0xC45D23BAF168AAB8(iParam0) == 0f)
	{
		if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
		}
		return 1;
	}
	else if (unk_0x679BE1DAF71DA874(iParam0, 0, 40000) || unk_0x679BE1DAF71DA874(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_147(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_147(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_265(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_309(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_266(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_3))
	{
		if ((unk_0x84A2DD9AC37C35C1(uParam0->f_3) || unk_0x5F9532F3B5CC2551(uParam0->f_3)) || unk_0x28D3FED7190D3A0B(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
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
			unk_0xE80492A9AC099A93(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xE80492A9AC099A93(&(uParam0->f_60[iVar0 /*3*/]), 2);
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
	Local_189[5 /*10*/] = 5;
	Local_189[5 /*10*/].f_1 = 0;
	Local_189[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_189[5 /*10*/].f_9 = 78;
	Local_189[0 /*10*/] = 5;
	Local_189[0 /*10*/].f_1 = 0;
	Local_189[0 /*10*/].f_2 = "TX_AIR_N";
	Local_189[0 /*10*/].f_9 = 76;
	Local_189[2 /*10*/] = 5;
	Local_189[2 /*10*/].f_1 = 0;
	Local_189[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_189[2 /*10*/].f_9 = 21;
	Local_189[1 /*10*/] = 10;
	Local_189[1 /*10*/].f_1 = 0;
	Local_189[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_189[1 /*10*/].f_9 = 71;
	Local_189[4 /*10*/] = 10;
	Local_189[4 /*10*/].f_1 = 0;
	Local_189[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_189[4 /*10*/].f_9 = 79;
	Local_189[6 /*10*/] = 10;
	Local_189[6 /*10*/].f_1 = 0;
	Local_189[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_189[6 /*10*/].f_9 = 80;
	Local_189[9 /*10*/] = 15;
	Local_189[9 /*10*/].f_1 = 0;
	Local_189[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_189[9 /*10*/].f_9 = 82;
	Local_189[8 /*10*/] = 15;
	Local_189[8 /*10*/].f_1 = 0;
	Local_189[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_189[8 /*10*/].f_9 = 72;
	Local_189[7 /*10*/] = 15;
	Local_189[7 /*10*/].f_1 = 0;
	Local_189[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_189[7 /*10*/].f_9 = 74;
	Local_189[11 /*10*/] = 5;
	Local_189[11 /*10*/].f_1 = 0;
	Local_189[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_189[11 /*10*/].f_9 = 70;
	Local_189[12 /*10*/] = 5;
	Local_189[12 /*10*/].f_1 = 0;
	Local_189[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_189[12 /*10*/].f_9 = 69;
	Local_189[13 /*10*/] = 10;
	Local_189[13 /*10*/].f_1 = 0;
	Local_189[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_189[13 /*10*/].f_9 = 67;
	Local_189[14 /*10*/] = 10;
	Local_189[14 /*10*/].f_1 = 0;
	Local_189[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_189[14 /*10*/].f_9 = 75;
}

int func_270()
{
	if (!unk_0x98A4EB5D89A0C952(iLocal_928))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_949, 1000);
		return 0;
	}
	if (!unk_0x85F01B8D5B90570E(iLocal_1111))
	{
		return 0;
	}
	if (!func_271(&iLocal_949, 1))
	{
		func_203("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_949, 1000);
		return 0;
	}
	return 1;
}

int func_271(int iParam0, bool bParam1)
{
	if (!unk_0x98A4EB5D89A0C952(func_20()))
	{
		func_203("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xD031A9162D01088C("gestures@m@standing@casual"))
		{
			func_203("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xD031A9162D01088C("oddjobs@taxi@"))
	{
		func_203("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C("oddjobs@towingcome_here"))
	{
		func_203("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C("misscommon@response"))
	{
		func_203("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x02245FE4BED318B8(2))
	{
		func_203("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_272(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_273(var uParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
	{
		uParam0->f_8 = func_274(uParam0->f_3, 0, 0);
		unk_0x5B440763A4C8D15B(1, 0f);
		unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, true);
		unk_0xEAA0FFE120D92784(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x69F4BE8C8CC4796C(uParam0->f_3, unk_0xD80958FC74E988A6(), -1, 2048, 4);
	}
	return 1;
}

int func_274(int iParam0, bool bParam1, bool bParam2)
{
	return func_118(iParam0, !bParam1, bParam2);
}

int func_275(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x7239B21A38F536BA(uParam0->f_3))
	{
		func_276(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_37(uParam0->f_14, 0);
		unk_0xBE31FD6CE464AC59(uParam0->f_14, 2f, 0);
		func_35(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xB4AC7D0CF06BFE8F(uParam0->f_11);
		}
		else if (unk_0x7239B21A38F536BA(Global_95887.f_225[0]))
		{
			uParam0->f_3 = Global_95887.f_225[0];
			unk_0xAD738C3085FE7E11(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = unk_0xD49F9B0955C367DE(26, iParam8, uParam0->f_11, fParam9, true, true);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x6C8065A3B780185B(uParam0->f_3, sParam7);
		unk_0xC1E8A365BF3B29F2(uParam0->f_3, 112, true);
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			unk_0x5927F96A78577363(uParam0->f_3, 250);
			unk_0x1913FE4CBF41C463(uParam0->f_3, 32, false);
			unk_0x1913FE4CBF41C463(uParam0->f_3, 104, true);
			unk_0x1913FE4CBF41C463(uParam0->f_3, 177, true);
			unk_0x1913FE4CBF41C463(uParam0->f_3, 116, false);
			unk_0xF372BC22FCB88606("TAXI_Passenger", &(uParam0->f_413));
			unk_0xBF25EB89375A37AD(1, uParam0->f_413, joaat("player"));
			unk_0xBF25EB89375A37AD(2, uParam0->f_413, joaat("COP"));
			unk_0xC80A74AC829DDD92(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x2CE544C68FB812A0(Param1, 20f, 5f, false);
}

void func_277(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_65(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_92(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_65(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_92(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_278()
{
	unk_0x963D27A58DF860AC(iLocal_928);
	func_280(1);
	iLocal_1111 = func_279();
}

int func_279()
{
	return unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
}

void func_280(bool bParam0)
{
	unk_0x963D27A58DF860AC(func_20());
	if (bParam0)
	{
		unk_0xD3BD40951412FEF6("gestures@m@standing@casual");
	}
	unk_0xD3BD40951412FEF6("oddjobs@taxi@");
	unk_0xD3BD40951412FEF6("oddjobs@towingcome_here");
	unk_0xD3BD40951412FEF6("misscommon@response");
	unk_0x71A78003C8E71424("TAXI", 2);
	if (!func_21(Global_97173.f_17318, 128))
	{
		func_152(&(Global_97173.f_17318), 128);
	}
}

void func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!unk_0x84A2DD9AC37C35C1((*iParam0)[iVar0]))
		{
			unk_0xAAA34F8A7CB32098((*iParam0)[iVar0]);
			unk_0x70A2D1137C8ED7C9((*iParam0)[iVar0], 13, true);
			unk_0x3841422E9C488D8C(&iLocal_933);
			unk_0xE8854A4326B9E12B(&iLocal_933);
			unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1, 1000));
			unk_0x22B0D0E37CCB840D(0, Local_408.f_3, 4000f, -1, false, false);
			unk_0x39E72BC99E6360CB(iLocal_933);
			unk_0x5ABA3986D90D8A3B((*iParam0)[iVar0], iLocal_933);
			unk_0x971D38760FBC02EF((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_282(var uParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xBF25EB89375A37AD(5, iLocal_922, joaat("player"));
	unk_0xBF25EB89375A37AD(5, iLocal_922, Local_408.f_413);
	unk_0xBF25EB89375A37AD(5, iLocal_922, joaat("COP"));
	unk_0xBF25EB89375A37AD(5, joaat("COP"), iLocal_922);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x84A2DD9AC37C35C1((*uParam0)[iVar0]))
		{
			unk_0xE1EF3C1216AFF2CD((*uParam0)[iVar0]);
			unk_0x3A87E44BB9A01D54((*uParam0)[iVar0], &iVar1, true);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				unk_0xBF0FD6E56C964FCB((*uParam0)[iVar0], joaat("weapon_pistol"), -1, false, true);
			}
			unk_0x7AEFB85C1D49DEB6((*uParam0)[iVar0], 30);
			unk_0x7BF835BB9E2698C8((*uParam0)[iVar0], 1000f, 0);
			unk_0x971D38760FBC02EF((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_283(int iParam0, int iParam1)
{
	func_99(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_284(int iParam0, int iParam1)
{
	return func_15(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_285(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
		{
			if (bParam2)
			{
				if (func_98(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_209(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_209(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_277(uParam0, 10, 0f, 1);
				}
			}
			else if (func_98(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_209(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_209(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_277(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_98(uParam0, 10) > 30f)
		{
			if (!func_100())
			{
				if (uParam0->f_112)
				{
					func_209(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_209(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_277(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_15(&(Local_189[5 /*10*/].f_6)))
		{
			func_99(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_308(uParam0))
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0, 1);
				func_305(5, uParam0);
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_15(&(Local_189[0 /*10*/].f_6)))
		{
			func_99(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_303(uParam0))
			{
				func_307(uParam0, 1);
				func_305(0, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_15(&(Local_189[1 /*10*/].f_6)))
		{
			func_99(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_302(uParam0))
			{
				func_307(uParam0, 1);
				func_305(1, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_15(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xEEF059FAD016D209(uParam0->f_4);
				func_99(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_90(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_301(uParam0))
			{
				func_307(uParam0, 1);
				func_305(8, uParam0);
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_15(&(Local_189[6 /*10*/].f_6)))
		{
			func_99(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_300(uParam0))
			{
				func_307(uParam0, 1);
				func_305(6, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_15(&(Local_189[4 /*10*/].f_6)))
		{
			func_99(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_299(uParam0))
			{
				func_307(uParam0, 1);
				func_305(4, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_15(&(Local_189[7 /*10*/].f_6)))
		{
			func_99(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_298(uParam0))
			{
				func_305(7, uParam0);
				func_307(uParam0, 1);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_15(&(Local_189[9 /*10*/].f_6)))
		{
			func_99(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
		}
		else if (func_90(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_297(uParam0))
			{
				func_307(uParam0, 1);
				func_305(9, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_15(&(Local_189[13 /*10*/].f_6)))
		{
			func_99(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_291(uParam0))
			{
				func_307(uParam0, 1);
				func_305(13, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_15(&(Local_189[14 /*10*/].f_6)))
		{
			func_99(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_290(uParam0))
			{
				func_307(uParam0, 1);
				func_305(14, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_15(&(Local_189[11 /*10*/].f_6)))
		{
			func_99(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_289(uParam0))
			{
				func_307(uParam0, 1);
				func_305(11, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_15(&(Local_189[12 /*10*/].f_6)))
		{
			func_99(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_288(uParam0))
			{
				func_307(uParam0, 1);
				func_305(12, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_15(&(Local_189[2 /*10*/].f_6)))
		{
			func_287(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_90(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_286(uParam0))
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0, 1);
				func_305(2, uParam0);
				func_304(uParam0);
			}
		}
	}
}

int func_286(var uParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(uParam0->f_2))
	{
		if ((!unk_0x530944F6F4B8A214(uParam0->f_2) && !func_15(&(Local_189[0 /*10*/].f_3))) && !func_15(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xD5037BA82E12416F(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_99(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_90(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xD5037BA82E12416F(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_89(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_89(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_287(int* iParam0, float fParam1)
{
	if (!func_15(iParam0))
	{
		func_65(iParam0, fParam1);
	}
}

int func_288(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_15(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_189[12 /*10*/].f_3)))
			{
				func_99(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_289(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_15(&(Local_189[0 /*10*/].f_3))) && !func_15(&(Local_189[1 /*10*/].f_3))) && !func_15(&(Local_189[5 /*10*/].f_3))) && !func_15(&(Local_189[9 /*10*/].f_3))) && !func_15(&(Local_189[7 /*10*/].f_3))) && !func_15(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (unk_0x73D57CFFDD12C355(Var0.f_0) > 2.5f && !func_15(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_189[11 /*10*/].f_3)))
			{
				func_99(&(Local_189[11 /*10*/].f_3));
				fLocal_341 = Var0.f_0;
			}
			else if (func_90(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0x73D57CFFDD12C355(fLocal_341) - unk_0x73D57CFFDD12C355(Var0.f_0)) < 0f)
			{
				func_89(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_90(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_89(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	if (((((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_15(&(Local_189[0 /*10*/].f_3))) && !func_15(&(Local_189[8 /*10*/].f_3))) && !func_15(&(Local_189[5 /*10*/].f_3))) && !func_15(&(Local_189[9 /*10*/].f_3))) && !func_15(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x7239B21A38F536BA(uParam0->f_5))
			{
				if ((unk_0xD5037BA82E12416F(uParam0->f_4) > 15f && func_151(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x5F9532F3B5CC2551(uParam0->f_5) && !unk_0x22AC59A870E6A669(uParam0->f_5, -1)))
				{
					func_99(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_90(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_151(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xDFD5033FDBA0A9C8(uParam0->f_5))
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_90(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xDFD5033FDBA0A9C8(uParam0->f_5))
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_291(var uParam0)
{
	if (((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_15(&(Local_189[9 /*10*/].f_3))) && !func_15(&(Local_189[7 /*10*/].f_3))) && !func_15(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_292(uParam0->f_4) && unk_0xD5037BA82E12416F(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_189[13 /*10*/].f_3)))
			{
				func_99(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_292(int iParam0)
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
	
	unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iParam0, true), 1, &Var0, 1, 1077936128, 0);
	unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iParam0, true), 2, &Var3, 1, 1077936128, 0);
	unk_0x16F46FB18C8009E4(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_296((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_295(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_293(unk_0x3FEF770D40960D5A(iParam0, true), Var15, Var18, Var21);
}

int func_293(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_296(Param6 - Param3) };
	Var3 = { func_296(Param9 - Param3) };
	fVar6 = func_294(Param0, Var0);
	fVar7 = func_294(Param3, Var0);
	fVar8 = func_294(Param6, Var0);
	fVar9 = func_294(Param0, Var3);
	fVar10 = func_294(Param3, Var3);
	fVar11 = func_294(Param9, Var3);
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

float func_294(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_295(struct<3> Param0, int iParam3)
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

Vector3 func_296(struct<3> Param0)
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

int func_297(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_298(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			if (unk_0x1DBD58820FA61D71(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0x831E0242595560DF(uParam0->f_4) <= -145f || unk_0x831E0242595560DF(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0x831E0242595560DF(uParam0->f_4) <= 35f && unk_0x831E0242595560DF(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xD559D2BE9E37853B(unk_0x4F8644AF03D0E0D6());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_189[4 /*10*/].f_3)))
			{
				func_99(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_89(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_300(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xDB89591E290D9182(unk_0x4F8644AF03D0E0D6());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_189[6 /*10*/].f_3)))
			{
				func_99(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0x8BAD02F0368D9E14(uParam0->f_4))
		{
			iVar0 = unk_0xEEF059FAD016D209(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA72CD9CA74A5ECBA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, 72, 1, 0, 1);
				}
				func_89(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_302(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (unk_0x73D57CFFDD12C355(Var0.f_0) > 3f && !func_15(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_189[1 /*10*/].f_3)))
			{
				func_99(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_89(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_303(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0xB104CD1BABF302E2(uParam0->f_4) && unk_0x886E37EC497200B6(uParam0->f_4))
		{
			if (!func_15(&(Local_189[0 /*10*/].f_3)))
			{
				func_99(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_89(&(Local_189[0 /*10*/].f_3));
				func_92(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_304(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_92(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_277(uParam0, 10, 0f, 1);
	unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
}

void func_305(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_306(uParam1, iParam0);
	func_89(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_306(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_307(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_308(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xD5037BA82E12416F(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_189[5 /*10*/].f_3)))
			{
				func_99(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_309(int iParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_139();
	func_414(2);
	Var0 = { func_140() };
	if ((!unk_0xCA042B6957743895(&Var0) && func_100()) && !unk_0x0C515FAB3FF9EA92(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xCC33FA791322B9D9();
		unk_0x8DFCED7A656F8802(true);
		StringCopy(&Var0, iParam0->f_143, 24);
		if (!unk_0x5F9532F3B5CC2551(iParam0->f_3))
		{
			if (!func_158(iParam0))
			{
				if (unk_0x1F0B79228E461EC9(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x97FF36A1D40EA00A(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0x1F0B79228E461EC9(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x97FF36A1D40EA00A(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0x1F0B79228E461EC9(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x97FF36A1D40EA00A(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_277(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_315(iParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_158(iParam0))
			{
				if (unk_0x5721B434AD84D57A(iParam0->f_4))
				{
					func_312(iParam0, 4096, 0);
				}
				else
				{
					func_312(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_315(iParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_315(iParam0, &Var0);
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_315(iParam0, &Var0);
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_47(8, 0);
			iLocal_56[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(iParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_312(iParam0, 0, 0);
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_47(8, 0);
			iLocal_56[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(iParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_47(8, 0);
			iLocal_56[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(iParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_311(&Var0);
			func_310(&(iParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_315(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_315(iParam0, &Var0);
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(iParam0->f_3))
			{
				func_236(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_47(3, 0);
		}
		func_277(iParam0, 3, 0f, 1);
	}
}

int func_310(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_135(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_127(sParam2, iParam3, 0);
}

void func_311(char* sParam0)
{
	switch (func_3(unk_0xD80958FC74E988A6()))
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

void func_312(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		unk_0x9F8AA94D6D97DBF4(uParam0->f_3, false);
		unk_0xA72CD9CA74A5ECBA(uParam0->f_3);
		unk_0x70A2D1137C8ED7C9(uParam0->f_3, 3, false);
		unk_0x9F7794730795E019(uParam0->f_3, 17, true);
		unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
		if ((func_188(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_314(uParam0->f_29)) && !bParam2)
		{
			func_313(uParam0);
		}
		else
		{
			unk_0x70A2D1137C8ED7C9(uParam0->f_3, 1024, true);
			unk_0x70A2D1137C8ED7C9(uParam0->f_3, 131072, true);
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x504D54DF3F6F2247(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			else
			{
				unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
			}
			unk_0x90D2156198831D69(0, false);
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
		unk_0x971D38760FBC02EF(uParam0->f_3, true);
	}
}

void func_313(var uParam0)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (func_38(func_39(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x8E2530AA8ADA980E(uParam0->f_3, 84.9058f);
				unk_0x971D38760FBC02EF(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x8E2530AA8ADA980E(uParam0->f_3, 68.3138f);
				unk_0x971D38760FBC02EF(uParam0->f_3, true);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
			unk_0x3841422E9C488D8C(&iVar0);
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x504D54DF3F6F2247(0, 0, 0);
			unk_0x90D2156198831D69(0, false);
			unk_0x15D3A79D4E44B913(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xB6C987F9285A3814(0, 1);
				unk_0x15D3A79D4E44B913(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				unk_0x93B93A37987F1F3D(0, 151.7794f, 0);
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 20000);
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			else
			{
				unk_0xEA47FE3719165B94(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (unk_0x5A59271FFADD33C1(uParam0->f_29, 15f, true))
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
		unk_0x971D38760FBC02EF(uParam0->f_3, true);
	}
}

int func_314(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_315(var uParam0, char* sParam1)
{
	if (func_316(uParam0))
	{
		func_310(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_316(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (func_151(unk_0xD80958FC74E988A6(), uParam0->f_3, 1) < 40f && !unk_0xE31C2C72B8692B64(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	return uParam0->f_118;
}

void func_318()
{
	func_350(&Local_408);
	if (func_349(&Local_408, &Local_1033))
	{
		switch (Local_1033.f_27)
		{
			case 0:
				if (Local_408.f_410 == 9)
				{
					if (!func_348(&Local_408))
					{
						if (func_347("TX_OBJ_GYB_DO") || unk_0xA6DB27D19ECBB7DA(Local_408.f_9))
						{
							Local_1033.f_27++;
						}
						else if (func_346(&Local_408) != 10)
						{
							func_209(&Local_408, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_346(&Local_408) > 10 && func_346(&Local_408) != 15) && !func_348(&Local_408))
				{
					func_209(&Local_408, 15, 1, 0, 0);
					if (bLocal_1032)
					{
					}
					func_283(&Local_408, 7);
				}
				break;
			
			case 2:
				if (((func_346(&Local_408) != 16 && !func_348(&Local_408)) && func_98(&Local_408, 18) > 2f) && !func_100())
				{
					func_209(&Local_408, 16, 1, 0, 0);
					if (bLocal_1032)
					{
					}
				}
				break;
			
			case 3:
				if (func_98(&Local_408, 18) > unk_0x313CE5879CEB6FCD(2f, 7f))
				{
					if (!func_162(&Local_408))
					{
						func_345(&Local_408, 0);
						Local_1033.f_27++;
						if (bLocal_1032)
						{
						}
					}
				}
				break;
			}
	}
	func_319(&Local_408, &uLocal_1063, &Local_1033, bLocal_1032);
}

int func_319(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_327(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_284(uParam0, 2))
	{
		if (func_326(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x9CD27B0045628463() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_325(uParam0))
				{
					uParam2->f_7 = { func_324(uParam1) };
					func_310(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_100())
				{
					uParam2->f_13 = { func_212() };
					if (unk_0x0C515FAB3FF9EA92(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_147(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_322(uParam1);
					func_277(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_165(uParam0))
				{
					if (func_100())
					{
						func_277(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_321() };
						if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_100())
				{
					uParam2->f_19 = { func_140() };
				}
				else
				{
					func_147(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_322(uParam1);
					func_277(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_284(uParam0, 14) && !func_100()) && !func_165(uParam0)) && func_98(uParam0, 18) > 1f)
				{
					func_277(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_100())
				{
					if (func_98(uParam0, 18) > 1f)
					{
						if (!unk_0xCA042B6957743895(&(uParam2->f_1)))
						{
							func_320(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_100())
				{
					func_147(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_322(uParam1);
					func_277(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_320(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_135(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_127(sParam2, iParam4, 0);
}

struct<6> func_321()
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

void func_322(var uParam0)
{
	int iVar0;
	
	iVar0 = func_323(uParam0);
	if (iVar0 > -1)
	{
		func_109(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_109(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_152(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_186(), 24);
	}
}

int func_323(var uParam0)
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

struct<6> func_324(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_152(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_325(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_167("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_167("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_167("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_167("TX_OBJ_GYB_DO", 0, 0) || func_167("TAXI_OBJ_GYB", 0, 0)) || func_167("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_167("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_167("TX_OBJ_CYI_DO", 0, 0) || func_167("TAXI_OBJ_CYI_01", 0, 0)) || func_167("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_167("TX_OBJ_GYN_DO", 0, 0) || func_167("TAXI_OBJ_GYN", 0, 0)) || func_167("TAXI_OBJ_GYN_TG", 0, 0)) || func_167("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_167("TAXI_OBJ_CC1", 0, 0) || func_167("TAXI_OBJ_CC2", 0, 0)) || func_167("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_167("TAXI_OBJ_FTC1", 0, 0) || func_167("TAXI_OBJ_FTC2", 0, 0)) || func_167("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_167("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_167("TAXI_OBJ_GETRUN", 0, 0) || func_167("TAXI_OBJ_DRIVE", 0, 0)) || func_167("TAXI_OBJ_RETURN", 0, 0)) || func_167("TAXI_OBJ_POL", 0, 0)) || func_167("TAXI_OBJ_RUNOUT", 0, 0)) || func_167("TAXI_OBJ_POL", 0, 0));
}

int func_326(var uParam0)
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

void func_327(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_325(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_284(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_346(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_343(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_100())
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
						func_342(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_339(uParam0, Var0, func_341(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_277(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				func_176(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_98(uParam0, 16) > 1f)
				{
					func_178(1);
					if (uParam0->f_411 == 9)
					{
						func_138("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_138("TAXI_VIP_RETURN", 7500, 1);
					}
					func_277(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
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
					func_342(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_236(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_98(uParam0, 16) > func_119(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_100()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_346(uParam0))
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
				func_342(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_343(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_310(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_209(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_277(uParam0, 16, 0, 0);
				func_209(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_344(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_342(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_277(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_138("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_138("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
					{
						uParam0->f_9 = func_338(uParam0->f_17, 1);
					}
					else if (unk_0x970F608F0EE6C885(uParam0->f_9) == 0)
					{
						unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
						unk_0xAE2AF67E9D9AF65D(uParam0->f_9, uParam0->f_17);
						unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
					}
				}
				func_209(uParam0, 10, 1, 0, 0);
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
				func_211(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_236(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
					{
						uParam0->f_9 = func_338(uParam0->f_17, 1);
					}
					else if (unk_0x970F608F0EE6C885(uParam0->f_9) == 0)
					{
						unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
						unk_0xAE2AF67E9D9AF65D(uParam0->f_9, uParam0->f_17);
						unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
					}
				}
				func_209(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_337(uParam0, 33554432, Var0, "", 1, 8);
				func_277(uParam0, 16, 0, 0);
				func_209(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_100())
				{
					func_336(uParam0, 0);
					func_152(&(uParam0->f_44), 4);
					func_277(uParam0, 16, 0, 0);
					func_209(uParam0, 13, 0, 0, 0);
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
				func_211(&Var0);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_98(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_211(&Var0);
					}
					func_334(Var0, uParam1);
					func_152(&(uParam0->f_81), 67108864);
					func_277(uParam0, 16, 0, 0);
					func_277(uParam0, 11, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_98(uParam0, 11) > uParam0->f_36)
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
							func_211(&Var0);
						}
					}
					func_334(Var0, uParam1);
					func_277(uParam0, 11, 0, 0);
					func_277(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
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
					func_211(&Var0);
				}
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
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
				func_211(&Var0);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
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
				func_211(&Var0);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_211(&Var0);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				func_152(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 1, 0, 8);
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
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
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
					func_333(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_333(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_334(Var0, uParam1);
				func_343(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 6, 0f, 1);
				func_240(uParam0, 0, 0);
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
					func_333(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_333(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_334(Var0, uParam1);
				func_343(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 6, 0f, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 12:
				func_138("TAXI_OBJ_GYB", 3500, 1);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_138("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_138("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_138("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
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
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_138("TAXI_OBJ_CYI_01", 7500, 1);
					func_152(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_211(&Var0);
				func_334(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_211(&Var0);
				func_334(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_211(&Var0);
				func_334(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 33:
				func_138("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_98(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_211(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_334(Var0, uParam1);
						}
						else
						{
							func_342(uParam0, &Var0, 0, 0, 8);
						}
						func_152(&(uParam0->f_82), 8192);
						func_277(uParam0, 16, 0, 0);
						func_277(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_211(&Var0);
					func_342(uParam0, &Var0, 0, 0, 8);
					func_152(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_211(&Var0);
					func_342(uParam0, &Var0, 0, 0, 8);
					func_152(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 46, 1, 0, 0);
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
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_240(uParam0, 0, 0);
				break;
			
			case 139:
				func_138("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_209(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xD53343AA4FB7DD28(0, 120);
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
					func_152(&(uParam0->f_82), 268435456);
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
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xD53343AA4FB7DD28(0, 100);
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
					func_152(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_138("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_240(uParam0, 0, 0);
				func_209(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_100())
				{
					func_138("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_240(uParam0, 0, 0);
					func_209(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_138("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_240(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_332(uParam0, 1, Var0, "_sick1", 8);
					func_109(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_332(uParam0, 2, Var0, "_sick2", 8);
					func_109(&(uParam0->f_81), 1);
				}
				func_343(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
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
				func_152(&(uParam0->f_81), 2097152);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_277(uParam0, 16, 0, 0);
				func_343(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_343(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_343(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_343(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_332(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_332(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_332(uParam0, 8, Var0, "_turns3", 8);
					func_109(&(uParam0->f_81), 4);
					func_109(&(uParam0->f_81), 8);
				}
				func_343(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_331(uParam0))
				{
					func_339(uParam0, Var0, func_341(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_236(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_344(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_310(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_344(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_344(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_343(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 128);
					func_109(&(uParam0->f_83), 256);
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 256);
					func_109(&(uParam0->f_83), 512);
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 512);
					func_109(&(uParam0->f_83), 128);
					func_277(uParam0, 16, 0, 0);
				}
				func_240(uParam0, 0, 0);
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
						func_211(&Var0);
					}
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 1);
					func_109(&(uParam0->f_83), 2);
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_211(&Var0);
					}
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_109(&(uParam0->f_83), 4);
					}
					else
					{
						func_109(&(uParam0->f_83), 1);
					}
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_211(&Var0);
					}
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 4);
					func_109(&(uParam0->f_83), 1);
					func_277(uParam0, 16, 0, 0);
				}
				func_343(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_337(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_337(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_343(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_337(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_337(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_343(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_330(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_330(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_330(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_343(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_240(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_344(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_343(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_277(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_343(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_343(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_337(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_337(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_331(uParam0))
				{
					func_339(uParam0, Var0, func_341(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_236(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 8);
					func_109(&(uParam0->f_83), 16);
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 16);
					func_109(&(uParam0->f_83), 32);
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_109(&(uParam0->f_83), 64);
					}
					else
					{
						func_109(&(uParam0->f_83), 8);
					}
					func_277(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_152(&(uParam0->f_83), 64);
					func_109(&(uParam0->f_83), 8);
					func_277(uParam0, 16, 0, 0);
				}
				func_343(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_100())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_342(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_339(uParam0, Var0, func_341(uParam0, 65));
					func_240(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_100())
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
					func_342(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_339(uParam0, Var0, func_341(uParam0, 66));
					func_240(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_100())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								func_343(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								func_343(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_344(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_343(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_277(uParam0, 16, 0, 0);
								func_240(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_342(uParam0, &Var0, 0, 0, 8);
									func_277(uParam0, 16, 0, 0);
									func_277(uParam0, 11, 0, 0);
									func_240(uParam0, 0, 0);
									if (!iLocal_65)
									{
										iLocal_63 = 1;
									}
								}
								else
								{
									if (!iLocal_64)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_64 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_65 = 1;
									}
									func_211(&Var0);
									func_342(uParam0, &Var0, 0, 0, 8);
									func_277(uParam0, 16, 0, 0);
									func_277(uParam0, 11, 0, 0);
									func_240(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_342(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_209(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_343(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_330(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_330(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_330(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_240(uParam0, 0, 0);
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
				func_344(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_236(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_277(uParam0, 16, 0, 0);
				func_343(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_331(uParam0))
				{
					func_339(uParam0, Var0, func_341(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_236(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_329(uParam0, Var0, 8);
				}
				func_343(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_152(&(uParam0->f_83), 1024);
					func_277(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_152(&(uParam0->f_83), 2048);
					func_277(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_152(&(uParam0->f_83), 4096);
					func_277(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_211(&Var0);
					func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_330(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_109(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_330(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_343(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 52, 1, 0, 0);
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
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_236(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_331(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_342(uParam0, &Var0, 0, 0, 8);
						func_209(uParam0, 52, 1, 0, 0);
						func_277(uParam0, 16, 0, 0);
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
						func_342(uParam0, &Var0, 0, 0, 8);
						func_277(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_344(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_277(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_343(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_277(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
				{
					func_138("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_337(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_337(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_337(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_343(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_328(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_328(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_343(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 100:
				func_138("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_240(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_211(&Var0);
				}
				func_152(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_211(&Var0);
				}
				func_152(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_342(uParam0, &Var0, 0, 0, 8);
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
					func_211(&Var0);
				}
				func_152(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_98(uParam0, 11) > uParam0->f_36)
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
						func_211(&Var0);
						func_334(Var0, uParam1);
						func_152(&(uParam0->f_82), 65536);
						func_277(uParam0, 16, 0, 0);
						func_277(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_98(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_211(&Var0);
						func_334(Var0, uParam1);
						func_152(&(uParam0->f_82), 131072);
						func_277(uParam0, 16, 0, 0);
						func_277(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_152(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_152(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_152(&(uParam0->f_82), 33554432);
				}
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_344(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_211(&Var0);
					func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_342(uParam0, &Var0, 0, 0, 8);
				}
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_334(Var0, uParam1);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_344(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_126(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_152(&(uParam0->f_81), 2097152);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_211(&Var0);
				func_334(Var0, uParam1);
				func_152(&(uParam0->f_81), 67108864);
				func_277(uParam0, 16, 0, 0);
				func_277(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_337(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_236(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_209(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_337(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_209(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_138("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_240(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_337(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
						{
							func_236(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_337(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_209(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_138("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_240(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_310(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_277(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_337(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 88:
				func_138("TAXI_TIEFLEE", 7500, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_138("TAXI_OBJ_CYI_1B", 7500, 1);
					func_152(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_240(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_211(&Var0);
				func_342(uParam0, &Var0, 0, 0, 8);
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
				func_342(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_342(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
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
				func_342(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_342(uParam0, &Var0, 1, 0, 8);
				func_209(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_138("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_209(uParam0, 0, 0, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			}
	}
}

void func_328(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_152(&(uParam0->f_82), iParam1);
	func_277(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_211(&Param2);
	}
	func_310(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_329(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_152(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_152(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xD53343AA4FB7DD28(1, 3), 24);
	}
	func_126(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_277(uParam0, 16, 0, 0);
}

void func_330(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_152(&(uParam0->f_82), iParam1);
	func_277(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_211(&Param2);
		}
	}
	func_310(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_331(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_332(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_152(&(uParam0->f_81), iParam1);
	func_277(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_310(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_333(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_254(*uParam0, iVar1))
		{
			func_147(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_211(sParam2);
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

void func_334(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_335(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_152(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_335(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xCA042B6957743895(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_336(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_138("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_138("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_138("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_138("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_138("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_138("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_138("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_138("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_138("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_138("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_138("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_138("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_138("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_337(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_152(&(uParam0->f_81), iParam1);
	func_277(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_211(&Param2);
	}
	func_310(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

int func_338(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_119(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

void func_339(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_277(uParam0, 16, 0, 0);
	func_277(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
	{
		unk_0xA018A12E5C5C2FA6(uParam0->f_3, &cParam1, func_340(uParam0));
	}
}

char* func_340(var uParam0)
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

char* func_341(var uParam0, int iParam1)
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

int func_342(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_277(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_277(uParam0, 17, 0f, 1);
	}
	func_240(uParam0, iParam2, 0);
	return func_310(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_343(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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
				func_109(uParam2, 4096);
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
				func_109(uParam2, 4096);
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
				func_109(uParam2, 4096);
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
				func_109(uParam2, 4096);
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

void func_344(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_254(*uParam0, iVar1))
		{
			func_147(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_211(sParam2);
				}
				else
				{
					func_211(sParam2);
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

void func_345(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_346(var uParam0)
{
	return uParam0->f_416;
}

int func_347(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (func_167(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(var uParam0)
{
	if (func_100())
	{
		return 1;
	}
	if (func_284(uParam0, 17))
	{
		return 1;
	}
	if (func_284(uParam0, 14))
	{
		return 1;
	}
	if (func_165(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_349(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_284(uParam0, 9));
}

void func_350(var uParam0)
{
	if (func_284(uParam0, 17))
	{
		if (!func_284(uParam0, 14))
		{
			if (!func_165(uParam0))
			{
				if (!func_100())
				{
					func_97(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_351(var uParam0)
{
	return uParam0->f_117;
}

void func_352(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xCA042B6957743895(&(uParam0->f_124)) && func_100())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_100())
				{
					StringCopy(&(uParam0->f_124), func_186(), 24);
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

void func_353(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_254(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_254(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_254(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_147(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x9CD27B0045628463();
							}
						}
						else
						{
							func_110(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_254(Local_342.f_1[iVar0 /*4*/], 4) && !func_254(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_147(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_309(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_354(int iParam0, var uParam1)
{
	var uVar0;
	
	if (!func_284(iParam0, 27))
	{
		func_283(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_98(iParam0, 27) > 5f)
	{
		if (func_381(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_277(iParam0, 27, 0, 0);
			func_277(iParam0, 10, 0, 0);
			func_379(iParam0, &uVar0, uParam1);
		}
		func_376(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_355(iParam0);
	}
	if ((((!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()) && (unk_0xA7A932170592B50E(*iParam0) && !unk_0xDFB2B516207D3534(*iParam0))) && (unk_0xA7A932170592B50E(iParam0->f_1) && !unk_0xDFB2B516207D3534(iParam0->f_1))) && !unk_0x7984C03AA5CC2F41()) && !func_100())
	{
		if (func_98(iParam0, 26) > 10f)
		{
			func_97(iParam0, 26, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		}
	}
	else if (func_284(iParam0, 26))
	{
		func_97(iParam0, 26, 0);
	}
	return 0;
}

void func_355(var uParam0)
{
	if (!func_375(uParam0->f_429))
	{
		uParam0->f_429 = func_374();
		func_365(&(uParam0->f_429), 0, 0, unk_0xD53343AA4FB7DD28(4, 7), 0, 0, 0);
	}
	else if (func_356(uParam0->f_429))
	{
		func_309(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_356(int iParam0)
{
	return func_357(func_374(), iParam0);
}

int func_357(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_375(iParam1) || !func_375(iParam0))
	{
		return 1;
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_363(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_362(iParam0);
	iVar1 = func_362(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_361(iParam0);
	iVar1 = func_361(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_360(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_359(iParam0);
	iVar1 = func_359(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_358(iParam0);
	iVar1 = func_358(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_359(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_360(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_361(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_362(int iParam0)
{
	return iParam0 & 15;
}

var func_363(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_364(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_364(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_365(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_363(*uParam0);
	iVar1 = func_362(*uParam0);
	iVar2 = func_361(*uParam0);
	iVar3 = func_360(*uParam0);
	iVar4 = func_359(*uParam0);
	iVar5 = func_358(*uParam0);
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
	iVar6 = func_373(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_373(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_366(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_366(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_372(uParam0, iParam1);
	func_371(uParam0, iParam2);
	func_370(uParam0, iParam3);
	func_369(uParam0, iParam4);
	func_368(uParam0, iParam5);
	func_367(uParam0, iParam6);
}

void func_367(var uParam0, int iParam1)
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

void func_368(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_369(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_362(*uParam0);
	iVar1 = func_363(*uParam0);
	if (iParam1 < 1 || iParam1 > func_373(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_370(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_371(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_372(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_373(int iParam0, int iParam1)
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

int func_374()
{
	var uVar0;
	
	func_372(&uVar0, unk_0x494E97C2EF27C470());
	func_371(&uVar0, unk_0x13D2B8ADD79640F2());
	func_370(&uVar0, unk_0x25223CA6B4D20B7F());
	func_369(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_368(&uVar0, unk_0xBBC72712E80257A1());
	func_367(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

int func_375(int iParam0)
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
	iVar0 = func_358(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_359(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_360(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_363(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_362(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_361(iParam0);
	if (iVar5 < 1 || iVar5 > func_373(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_376(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_378()) && !func_143(uParam0)) || ((uParam0->f_411 != 9 && func_244(uParam0, 1)) && !func_143(uParam0)))
		{
			uVar0 = func_377(uParam0->f_4);
			unk_0xB736A491E64A32CF(&uVar0);
			uParam0->f_4 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			unk_0xAD738C3085FE7E11(uParam0->f_4, true, false);
			func_181(uParam0);
			func_172(uParam0, 0);
		}
	}
}

var func_377(var uParam0)
{
	return uParam0;
}

int func_378()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
				{
					if (unk_0x423E8DE37D934D89(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_379(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_380(uParam0, 0, 1))
			{
				func_309(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_380(uParam0, 0, 4))
			{
				func_309(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_380(uParam0, 0, 8))
			{
				func_309(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_380(uParam0, 1, 1))
			{
				func_309(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_380(uParam0, 0, 1))
			{
				func_309(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_158(uParam0))
			{
				func_309(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_380(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (!unk_0xE31C2C72B8692B64(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_209(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_209(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_381(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xD80958FC74E988A6();
	if (!unk_0x5F9532F3B5CC2551(iVar0) && !unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_387(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_385(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_384(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_382(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_382(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (iParam7 && unk_0xC86D67D52A707CF8(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0xEEF059FAD016D209(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0xEEF059FAD016D209(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar1))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			if (unk_0x9A497FE2DF198913(iParam0))
			{
				if (unk_0x9B128DC36C1E04CF(iParam0) == unk_0xD80958FC74E988A6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x20B60995556D004F(iParam0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFD4CCDBCC59941B7(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF9800AA1A771B000(iParam0))
		{
			return 1;
		}
	}
	if (func_383(unk_0xD80958FC74E988A6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x47E4E977581C5B55(iParam0) && func_145(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iParam0, false)))
			{
				return 1;
			}
		}
		else if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(iParam1))
		{
			if (unk_0xC86D67D52A707CF8(iParam1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(iParam1, true)) < 2.5f)
			{
				if (unk_0xD71649DB0A545AA3(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_384(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x475768A975D5AD17(iParam0, 4))
	{
		if (unk_0x34616828CD07F1A1(iParam0) && !unk_0x65F0C5AE05943EC7(iParam0))
		{
			if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_385(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	if (unk_0x3F2023999AD51C1F(Var0, 4f, true))
	{
		return 1;
	}
	if (unk_0x9870ACFB89A90995(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (unk_0x475768A975D5AD17(iParam0, 2))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0x04A2A40C73395041(iParam1), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0x04A2A40C73395041(iParam1), false);
			}
			if (unk_0xC70B5FAE151982D8(iParam0) || func_386(iVar3))
			{
				if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5270A8FBC098C3F8((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (unk_0xBB40DD2270B65366(iParam0, -1) != 0)
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_151(unk_0xD80958FC74E988A6(), iParam0, 1) < 40f)
						{
							if (unk_0x2975C866E6713290(unk_0x4F8644AF03D0E0D6(), &iVar1))
							{
								if ((unk_0x6AC7003FA6E5575E(iVar1) && unk_0x4B53F92932ADFAC0(iVar1) == iParam0) || (unk_0x524AC5ECEA15343E(iVar1) && unk_0x04A2A40C73395041(iVar1) == unk_0xBB40DD2270B65366(iParam0, -1)))
								{
									if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0xF3A21BCD95725A4A(0, 24)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xF3A21BCD95725A4A(0, 69)))
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

int func_387(int iParam0, var uParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
			{
				if (unk_0xD71649DB0A545AA3(iParam0, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_145(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9CD27B0045628463();
						}
						else if ((unk_0x9CD27B0045628463() - uParam1->f_1) > uParam1->f_3)
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

void func_388()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<6> Var7;
	
	Var7 = { func_140() };
	if ((((iLocal_932 < 4 && func_145(Local_408.f_3, 1) < 50f) && Local_408.f_410 == 22) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && !iLocal_975)
	{
		if (unk_0x580417101DDB492F(0, 80))
		{
			if (unk_0xA7A932170592B50E(Local_408.f_0))
			{
				if (!unk_0xDFB2B516207D3534(Local_408.f_0))
				{
					iLocal_1123 = unk_0x9CD27B0045628463();
					unk_0x026FB97D0A425F84(Local_408.f_0, true);
					unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				}
			}
		}
	}
	if ((((iLocal_932 < 4 && func_145(Local_408.f_3, 1) < 50f) && Local_408.f_410 == 22) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && !iLocal_975)
	{
		if (iLocal_966)
		{
			switch (iLocal_1121)
			{
				case 0:
					iLocal_1122 = unk_0x9CD27B0045628463();
					Var0 = { 223.3f, -3326.3f, 6.4f };
					Var3 = { -4.1f, 0f, 78f };
					fVar6 = 24.3f;
					func_389(Var0, Var3, fVar6);
					iLocal_1121 = 1;
					break;
				
				case 1:
					if (unk_0x0C515FAB3FF9EA92("txm12_ig1c_3", &Var7))
					{
						iLocal_1122 = unk_0x9CD27B0045628463();
						Var0 = { 211.1f, -3326.1f, 5.8f };
						Var3 = { 4.1f, 0f, -81.2f };
						fVar6 = 24.3f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 2;
					}
					break;
				
				case 2:
					if ((unk_0x9CD27B0045628463() - iLocal_1122) > 5000)
					{
						iLocal_1122 = unk_0x9CD27B0045628463();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 3;
					}
					break;
				
				case 3:
					if (unk_0x0C515FAB3FF9EA92("txm12_deal1_3", &Var7))
					{
						iLocal_1122 = unk_0x9CD27B0045628463();
						Var0 = { 194.7488f, -3328.101f, 5.9471f };
						Var3 = { -0.3369f, -0.0169f, -55.7257f };
						fVar6 = 24.5237f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 4;
					}
					break;
				
				case 4:
					if (unk_0x0C515FAB3FF9EA92("txm12_deal1_5", &Var7))
					{
						iLocal_1122 = unk_0x9CD27B0045628463();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 5;
					}
					break;
				
				case 5:
					if (unk_0x0C515FAB3FF9EA92("txm12_deal1_7", &Var7))
					{
						iLocal_1122 = unk_0x9CD27B0045628463();
						Var0 = { 194.1f, -3324.9f, 6.2f };
						Var3 = { -4.6f, 0f, -83.1f };
						fVar6 = 29f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 6;
					}
					break;
			}
			if (unk_0x580417101DDB492F(0, 80) && (unk_0x9CD27B0045628463() - iLocal_1123) > 500)
			{
				if (unk_0xA7A932170592B50E(Local_408.f_0))
				{
					unk_0x026FB97D0A425F84(Local_408.f_0, false);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
			}
		}
	}
	else if (iLocal_966)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0xA7A932170592B50E(Local_408.f_0))
			{
				if (unk_0xDFB2B516207D3534(Local_408.f_0))
				{
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x026FB97D0A425F84(Local_408.f_0, false);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
			}
		}
		if (iLocal_975)
		{
			if (!func_15(&iLocal_1029))
			{
				if (func_136() && unk_0xDFB2B516207D3534(Local_408.f_0))
				{
					if (!iLocal_976)
					{
						unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
						unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_976 = 1;
					}
				}
				func_92(&iLocal_1029);
			}
			else if (func_90(&iLocal_1029) > 0.3f)
			{
				if (unk_0xA7A932170592B50E(Local_408.f_0))
				{
					if (unk_0xDFB2B516207D3534(Local_408.f_0))
					{
						unk_0x6D0858B8EDFD2B7D(0f, 1f);
						unk_0xB4EC2312F4E5B1F1(0f);
						unk_0x026FB97D0A425F84(Local_408.f_0, false);
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x51669F7D1FB53D9F(true);
	}
}

void func_389(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!unk_0xA7A932170592B50E(Local_408.f_0))
	{
		func_220(&Local_408, 0f, 0f, 0f, 0f, 0f, 0f, fParam6);
	}
	unk_0x4D41783FB745E42E(Local_408.f_0, Param0);
	unk_0x85973643155D0B07(Local_408.f_0, Param3, 2);
	unk_0x6A25241C340D3822(Local_408.f_0, "HAND_SHAKE", 0.3f);
}

void func_390(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
		{
			if (func_188(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x01C7B9B38428AEB6(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_152(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_391()
{
	if (!iLocal_968)
	{
		func_392(&Local_408);
		iLocal_968 = 1;
	}
	func_414(2);
	if (iLocal_967)
	{
		if (func_9(unk_0xD80958FC74E988A6(), Local_408.f_17, 1) > 50f || func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11)))
		{
			func_412();
		}
	}
	else
	{
		func_412();
	}
}

void func_392(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_414(2);
	}
}

int func_393(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_100() && func_98(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
		{
			if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
			{
				if (unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_58(uParam0) == 0 || func_254(uParam0->f_85, 32))
					{
						if (!unk_0x5721B434AD84D57A(uParam0->f_4))
						{
							func_312(uParam0, 4160, 0);
						}
						else
						{
							func_312(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_312(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_312(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_312(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x9CD27B0045628463() % 1000) < 50)
	{
	}
	return 0;
}

void func_394(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_8));
	}
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_9));
	}
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_10));
	}
}

int func_395(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_396()
{
	Local_408.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_408.f_33 = 88.9745f;
	Local_408.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_408.f_34 = 173.6662f;
	unk_0xF372BC22FCB88606("TAXI_Pursuers", &iLocal_922);
	func_411(1);
	func_400(&Local_408, 3);
	Local_408.f_410 = 0;
	func_399(&Local_408, 3, 6);
	func_397();
}

void func_397()
{
	func_398();
	Local_838 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_398()
{
	Local_838.f_19[0] = joaat("g_m_y_lost_01");
	Local_838.f_19[1] = joaat("s_f_y_hooker_01");
	Local_838.f_32[0] = joaat("gburrito");
	Local_838.f_32[1] = joaat("daemon");
	Local_838.f_32[2] = joaat("hexer");
	Local_838.f_32[3] = joaat("emperor");
	Local_880.f_19[0] = joaat("g_m_y_lost_01");
	Local_880.f_32[0] = joaat("gburrito");
	Local_880.f_32[1] = joaat("hexer");
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_400(var uParam0, int iParam1)
{
	func_410(1);
	func_183();
	func_6(&(uParam0->f_244));
	func_409(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_97173.f_17318, 4))
	{
		func_152(&(Global_97173.f_17318), 4);
	}
	func_404(uParam0);
	func_402(uParam0);
	unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	uParam0->f_102 = (func_401(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x71A78003C8E71424("TAXI", 0);
}

int func_401(int iParam0)
{
	return Global_97173.f_17318.f_39[iParam0];
}

void func_402(var uParam0)
{
	switch (func_58(uParam0))
	{
		case 0:
			func_403(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_403(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_403(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_403(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_403(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_403(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_403(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_403(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_403(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_403(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_403(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_404(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_408(uParam0, 3);
			func_407(uParam0, 14);
			break;
		
		case 1:
			func_408(uParam0, 14);
			func_407(uParam0, 8);
			break;
		
		case 2:
			func_408(uParam0, 8);
			func_407(uParam0, 7);
			break;
		
		case 3:
			func_408(uParam0, 15);
			func_407(uParam0, 6);
			break;
		
		case 4:
			func_408(uParam0, 0);
			func_407(uParam0, 3);
			break;
		
		case 5:
			func_408(uParam0, 6);
			func_407(uParam0, 7);
			break;
		
		case 6:
			func_408(uParam0, 8);
			func_407(uParam0, 15);
			break;
		
		case 7:
			func_408(uParam0, 8);
			func_407(uParam0, 14);
			break;
		
		case 8:
			func_408(uParam0, 7);
			func_407(uParam0, 15);
			break;
		
		case 9:
			func_408(uParam0, unk_0xD53343AA4FB7DD28(0, 17));
			iVar0 = func_406((uParam0->f_418.f_2 + unk_0xD53343AA4FB7DD28(1, 17)), 0, 16);
			func_407(uParam0, iVar0);
			func_405(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_405(var uParam0)
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

int func_406(int iParam0, int iParam1, int iParam2)
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

void func_407(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_408(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_409(var uParam0)
{
	uParam0->f_2 = unk_0xD80958FC74E988A6();
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
	func_97(uParam0, 32, 0);
}

void func_410(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96229, unk_0x442E0A7EDE4A738A(), 24);
		Global_96223 = 1;
	}
	else
	{
		StringCopy(&Global_96229, "NULL", 24);
		Global_96223 = 0;
	}
}

void func_411(int iParam0)
{
	unk_0xBF25EB89375A37AD(iParam0, iLocal_922, joaat("player"));
	unk_0xBF25EB89375A37AD(iParam0, iLocal_922, joaat("COP"));
	unk_0xBF25EB89375A37AD(iParam0, joaat("COP"), iLocal_922);
}

void func_412()
{
	func_19(&Local_408);
	unk_0x020E5F00CDA207BA(1f);
	unk_0xC12321827687FE4D(Local_983, Local_986, true, true);
	unk_0x2E05208086BA0651();
	unk_0x31D16B74C6E29D66(iLocal_946, false);
	unk_0x629BFA74418D6239(&iLocal_944);
	func_413();
	func_190();
	if (unk_0xA7A932170592B50E(Local_408.f_0))
	{
		unk_0x865908C81A2C22E9(Local_408.f_0, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x51669F7D1FB53D9F(true);
	}
	unk_0x1090044AD1DA76FA();
}

void func_413()
{
	unk_0xE532F5D78798DAAB(iLocal_928);
}

void func_414(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

