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
	var uLocal_409 = 0;
	struct<414> Local_410 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	int iLocal_840 = 0;
	struct<3> Local_841[1];
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	var uLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	bool bLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	struct<3> Local_868 = { 0, 0, 0 } ;
	struct<3> Local_871 = { 0, 0, 0 } ;
	struct<3> Local_874 = { 0, 0, 0 } ;
	struct<3> Local_877 = { 0, 0, 0 } ;
	struct<3> Local_880 = { 0, 0, 0 } ;
	struct<3> Local_883 = { 0, 0, 0 } ;
	struct<3> Local_886 = { 0, 0, 0 } ;
	struct<3> Local_889 = { 0, 0, 0 } ;
	struct<3> Local_892 = { 0, 0, 0 } ;
	float fLocal_895 = 0f;
	char cLocal_896[24] = "";
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	struct<6> Local_902 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_908[64] = "";
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	char cLocal_924[64] = "";
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	char cLocal_940[64] = "";
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	char cLocal_956[64] = "";
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	char cLocal_972[64] = "";
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	char cLocal_988[64] = "";
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	char cLocal_1004[64] = "";
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	char cLocal_1020[64] = "";
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	bool bLocal_1038 = 0;
	struct<28> Local_1039 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 5;
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
	var uLocal_1113 = 1097859072;
	var uLocal_1114 = 1500;
	var uLocal_1115 = 45;
	var uLocal_1116 = 1103626240;
	var uLocal_1117 = 5;
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
	int iLocal_1128 = 0;
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
	uLocal_77 = unk_0xD401739A5899EC1B();
	uLocal_78 = unk_0xF90D5D0199B23D8A();
	Local_83 = { 500f, 500f, 500f };
	iLocal_840 = joaat("g_m_y_mexgoon_03");
	iLocal_852 = 1;
	iLocal_853 = -1;
	iLocal_858 = -1;
	bLocal_859 = true;
	Local_868 = { -1612.235f, 189.1934f, 58.9435f };
	Local_871 = { -1612.457f, 184.5166f, 58.7712f };
	Local_874 = { 32.60266f, -1243.837f, 28.45076f };
	Local_877 = { 33.2419f, -1234.385f, 28.2953f };
	Local_880 = { -628.1456f, -760.3765f, 25.106f };
	Local_883 = { -584.7739f, -779.0701f, 24.0178f };
	Local_886 = { 47.56787f, -1234.685f, 28.29707f };
	Local_889 = { -21.32591f, -1235.549f, 32.47597f };
	Local_892 = { 37.51834f, -1239.021f, 28.40267f };
	fLocal_895 = 33.75f;
	StringCopy(&cLocal_908, "amb@world_human_hang_out_street@male_a@enter", 64);
	StringCopy(&cLocal_924, "amb@world_human_hang_out_street@male_a@base", 64);
	StringCopy(&cLocal_940, "amb@world_human_hang_out_street@male_a@idle_a", 64);
	StringCopy(&cLocal_956, "amb@world_human_hang_out_street@male_a@exit", 64);
	StringCopy(&cLocal_972, "amb@world_human_hang_out_street@female_arm_side@enter", 64);
	StringCopy(&cLocal_988, "amb@world_human_hang_out_street@female_arm_side@base", 64);
	StringCopy(&cLocal_1004, "amb@world_human_hang_out_street@female_arm_side@idle_a", 64);
	StringCopy(&cLocal_1020, "amb@world_human_hang_out_street@female_arm_side@exit", 64);
	if (func_418(Local_877, 0f, 0f, 0f, 0))
	{
	}
	if (unk_0xBCA819F9975BEDFA(67))
	{
		func_417(2);
		func_416();
	}
	unk_0x7E34CF542225E666(1);
	func_403();
	while (true)
	{
		if (unk_0x23E9113C762466ED(Local_410.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_410);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x17B5CC8A8615737D();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x17B5CC8A8615737D());
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
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x17B5CC8A8615737D());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_402(&Local_410))
	{
		func_401(&Local_410);
		if (func_400(&Local_410, 0))
		{
			func_398();
		}
	}
	else
	{
		func_397(&Local_410);
		if ((Local_410.f_410 >= 5 && Local_410.f_410 <= 9) || Local_410.f_410 >= 22)
		{
			func_363(&Local_410, &uLocal_1111);
			func_362(&Local_410);
		}
		func_361(&Local_410, &uLocal_855, 0);
		if (Local_410.f_410 > 5 && !unk_0x48B8265059381CD0(iLocal_854, 0))
		{
			Local_410.f_17 = { Local_877 };
			unk_0xEB79FECD9022AAF0(&iLocal_854, 0);
		}
		if (Local_410.f_410 >= 5 && Local_410.f_410 < 10)
		{
			func_360(&Local_410);
		}
		if (Local_410.f_410 >= 2)
		{
			if (!func_359(&Local_410))
			{
				func_328();
			}
			else
			{
				func_320(&Local_410, "Taxi Not Driveable", func_327(&Local_410));
			}
		}
		if (Local_410.f_410 >= 12 && Local_410.f_410 < 27)
		{
			if (unk_0x23E9113C762466ED(iLocal_851))
			{
				if (unk_0xA929B2923D14E2F8(iLocal_851, 0))
				{
					func_320(&Local_410, "Player killed his new booty call", 9);
				}
			}
			if (func_319(&Local_410, iLocal_850, 1))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_850, 0))
				{
					unk_0x28EB63CAF526B891(iLocal_850, 1, 0);
					func_320(&Local_410, "Player exploded the broke down car", 9);
				}
			}
			if (!unk_0xCA41A00932714525(iLocal_851))
			{
				if (func_318(iLocal_851, 1) > 50f)
				{
					func_320(&Local_410, "Player abandoned the girl", 9);
				}
			}
		}
		if (Local_410.f_410 == 9)
		{
			func_294(&Local_410, 0, 1);
		}
		switch (Local_410.f_410)
		{
			case 0:
				func_291();
				func_290(&Local_410, 16, 4f, 0);
				func_288(&Local_410, Local_868, Local_871, "TaxiAlonzo", iLocal_840, 196.3547f, 15f);
				func_287(&Local_410);
				func_286(&Local_410, 1);
				break;
			
			case 1:
				if (func_284())
				{
					func_283();
					func_282(&(Local_841[0 /*3*/]), "TAXI_SC_KO", 100);
					func_281(&Local_410, &Local_841);
					func_280(&Local_410);
					func_260();
					Local_410.f_14 = { Local_868 };
					func_286(&Local_410, 3);
				}
				break;
			
			case 3:
				if (func_253(&Local_410, 1))
				{
					if (!unk_0xA929B2923D14E2F8(Local_410.f_3, 0))
					{
						unk_0x4DF0B516187EED5A(Local_410.f_3, 200);
						unk_0x2F933BB106547968(Local_410.f_3, 0, 1, 0, 0);
						unk_0x2F933BB106547968(Local_410.f_3, 3, 1, 1, 0);
						unk_0x2F933BB106547968(Local_410.f_3, 4, 0, 1, 0);
						unk_0x2F933BB106547968(Local_410.f_3, 8, 0, 1, 0);
					}
					func_252(&Local_410, 1, 0);
					func_286(&Local_410, 5);
				}
				break;
			
			case 5:
				if (func_231(&Local_410, 0, 1109393408))
				{
					func_286(&Local_410, 15);
				}
				break;
			
			case 15:
				if (func_230(&Local_410))
				{
					func_229();
					func_225(&Local_410, 9, 1, 0, 0);
					func_224(&Local_410);
					func_223();
					func_286(&Local_410, 9);
				}
				if (unk_0x45CD66F0A131E554(Local_410.f_4, 0))
				{
					if (!unk_0x2315BB1606BC3DC3(Local_410.f_2, Local_410.f_4, 0))
					{
						func_221(&Local_410);
						func_286(&Local_410, 9);
					}
				}
				break;
			
			case 9:
				if (!iLocal_865)
				{
					if ((func_220(&Local_410, 0) || func_220(&Local_410, 1)) || func_219(&Local_410, 1))
					{
						iLocal_865 = 1;
					}
				}
				func_216();
				func_211();
				if (func_181(&Local_410, 9f, 1097859072, 1117782016))
				{
					unk_0x020DF7300725ECAB(&(Local_410.f_9));
					unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, 0);
					unk_0x59D2C41577DCED43(0);
					unk_0x3FFDD1F7F08DB3AC(func_180(unk_0xBE369BE1BC57A796()), 50f, 0);
					unk_0x6018E338F7ABCE75(Local_410.f_3, 42, 1);
					func_286(&Local_410, 10);
				}
				if (iLocal_853 >= 2)
				{
					if (!iLocal_863 && ((((((unk_0xCA41A00932714525(iLocal_851) || unk_0xA929B2923D14E2F8(iLocal_850, 0)) || (!unk_0xA929B2923D14E2F8(iLocal_851, 0) && unk_0x502D8CF96961DF1A(iLocal_851))) || (!unk_0xA929B2923D14E2F8(iLocal_850, 0) && unk_0x502D8CF96961DF1A(iLocal_850))) || (!unk_0xA929B2923D14E2F8(iLocal_851, 0) && unk_0x68EF3B23B93EEB24(iLocal_851, 0, 2))) || (!unk_0xA929B2923D14E2F8(iLocal_850, 0) && unk_0x68EF3B23B93EEB24(iLocal_850, 0, 2))) || ((!unk_0xA929B2923D14E2F8(iLocal_851, 0) && !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0)) && func_318(iLocal_851, 1) < 1f)))
					{
						if ((!unk_0xA929B2923D14E2F8(iLocal_850, 0) && unk_0x502D8CF96961DF1A(iLocal_850)) || (!unk_0xA929B2923D14E2F8(iLocal_850, 0) && unk_0x68EF3B23B93EEB24(iLocal_850, 0, 2)))
						{
							unk_0x28EB63CAF526B891(iLocal_850, 1, 0);
						}
						if (!unk_0xCA41A00932714525(iLocal_851))
						{
							unk_0xCA58071CE9CCE891(iLocal_851, unk_0x17B5CC8A8615737D(), 500f, -1, 0, 0);
							unk_0x650BB0E111420EAF(iLocal_851, 1);
						}
						if ((!unk_0xA929B2923D14E2F8(iLocal_851, 0) && !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0)) && func_318(iLocal_851, 1) < 1f)
						{
							unk_0x08377FB2AE4C6899(&uLocal_848);
							unk_0x86DD54980FE55567(&uLocal_848);
							unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
							unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 0, 2);
							unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 500f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_848);
							unk_0x00E85C3B3BD34B10(iLocal_851, uLocal_848);
							unk_0x650BB0E111420EAF(iLocal_851, 1);
						}
						func_320(&Local_410, "Aggro Heard Shot", 8);
						iLocal_863 = 1;
					}
				}
				break;
			
			case 10:
				if (func_162())
				{
					unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
					uLocal_1110 = func_161(Local_410.f_3, 0, 0);
					func_290(&Local_410, 0, 0, 0);
					if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
					{
						unk_0xBC8C26E1CC191108(iLocal_851);
						unk_0x6349785089ED32B4(iLocal_851, unk_0x17B5CC8A8615737D(), 0);
						unk_0x4B04B4FAE554FA03(iLocal_851, 115);
					}
					iLocal_856 = unk_0xB5DF060B138CD2EA(unk_0x17B5CC8A8615737D());
					iLocal_857 = unk_0xB5DF060B138CD2EA(Local_410.f_3);
					unk_0x4A5D4AD0FE6ACF73("TAXI_GOT_U_NOW");
					func_286(&Local_410, 11);
				}
				break;
			
			case 11:
				unk_0x62AB53D880F2DCC1(unk_0xBE369BE1BC57A796(), 11);
				if (unk_0xA929B2923D14E2F8(Local_410.f_3, 0) || ((!unk_0xA929B2923D14E2F8(Local_410.f_3, 0) && unk_0x48368B3E430594FA(Local_410.f_3)) && func_160(Local_410.f_3, Local_877, 1) > 25f))
				{
					unk_0x69E47427C5084888("TAXI_OBJ_GYN");
					if (unk_0xA3794949321E107C(Local_410.f_9))
					{
						unk_0x020DF7300725ECAB(&(Local_410.f_9));
					}
					if (unk_0xA3794949321E107C(Local_410.f_8))
					{
						unk_0x020DF7300725ECAB(&(Local_410.f_8));
					}
					if (unk_0xA3794949321E107C(uLocal_1110))
					{
						unk_0x020DF7300725ECAB(&uLocal_1110);
					}
					if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
					{
						if (unk_0x45CD66F0A131E554(Local_410.f_4, 0))
						{
							unk_0xB8CAC5F3774894A1("TAXI_GOT_U_NOW");
							unk_0x5CD8291F2C5E0AD1(Local_410.f_2, &uLocal_849, 1);
							if (func_159(&uLocal_849) || !unk_0xA929B2923D14E2F8(Local_410.f_3, 0))
							{
								bLocal_859 = true;
								unk_0x08377FB2AE4C6899(&uLocal_848);
								unk_0x86DD54980FE55567(&uLocal_848);
								unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 0, 2);
								unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
								unk_0x007AE2AA9E15FA7B(uLocal_848);
								unk_0x00E85C3B3BD34B10(iLocal_851, uLocal_848);
								func_225(&Local_410, 126, 1, 0, 0);
								Local_410.f_17 = { Local_880 };
								func_290(&Local_410, 19, 0, 0);
								func_286(&Local_410, 12);
							}
							else
							{
								bLocal_859 = false;
								unk_0xCA58071CE9CCE891(iLocal_851, unk_0x17B5CC8A8615737D(), 500f, -1, 0, 0);
								unk_0x650BB0E111420EAF(iLocal_851, 1);
								func_225(&Local_410, 127, 1, 0, 1);
								func_286(&Local_410, 27);
							}
						}
					}
					else
					{
						func_286(&Local_410, 27);
					}
				}
				else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_886, Local_889, fLocal_895, 0, 1, 0))
				{
					if ((unk_0xB5DF060B138CD2EA(Local_410.f_3) == unk_0x5D709FE87FA3B4C5(Local_410.f_3) && !func_158()) && !iLocal_861)
					{
						func_225(&Local_410, 123, 1, 0, 0);
						iLocal_861 = 1;
					}
					if (!iLocal_860 && func_156(&Local_410, 0) > 1.5f)
					{
						func_155(&(Local_410.f_3));
						unk_0x6018E338F7ABCE75(Local_410.f_3, 314, 0);
						iLocal_860 = 1;
					}
					if (func_156(&Local_410, 0) > 10f)
					{
						if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
						{
							unk_0x4718A774D9248520(iLocal_851, unk_0x17B5CC8A8615737D(), -1, 2048, 4);
							unk_0x08377FB2AE4C6899(&uLocal_848);
							unk_0x86DD54980FE55567(&uLocal_848);
							unk_0xEB1EFACA68933402(0, "misscommon@response", "give_me_a_break", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							unk_0xEB1EFACA68933402(0, "misscommon@response", "damn", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
							unk_0x007AE2AA9E15FA7B(uLocal_848);
							unk_0x00E85C3B3BD34B10(iLocal_851, uLocal_848);
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								iLocal_856 = (iLocal_856 - unk_0xB5DF060B138CD2EA(unk_0x17B5CC8A8615737D()));
								iLocal_857 = (iLocal_857 - unk_0xB5DF060B138CD2EA(Local_410.f_3));
								if (iLocal_856 < iLocal_857)
								{
									func_225(&Local_410, 125, 1, 0, 0);
								}
								else
								{
									func_225(&Local_410, 124, 1, 0, 0);
								}
								iLocal_856 = unk_0xB5DF060B138CD2EA(unk_0x17B5CC8A8615737D());
								iLocal_857 = unk_0xB5DF060B138CD2EA(Local_410.f_3);
							}
						}
						else if (!iLocal_862)
						{
							func_153();
							unk_0x4B04B4FAE554FA03(Local_410.f_3, unk_0x5D709FE87FA3B4C5(Local_410.f_3));
							func_225(&Local_410, 128, 1, 0, 0);
							iLocal_862 = 1;
							bLocal_859 = false;
						}
						func_290(&Local_410, 0, 0, 0);
					}
					else if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
					{
					}
				}
				else if (!unk_0x48368B3E430594FA(Local_410.f_3))
				{
					if (iLocal_860)
					{
						unk_0xBC8C26E1CC191108(Local_410.f_3);
						unk_0x08377FB2AE4C6899(&uLocal_848);
						unk_0x86DD54980FE55567(&uLocal_848);
						if (unk_0xCA41A00932714525(iLocal_851))
						{
							unk_0x9C16B2DABAEC929A(0, unk_0x57240623C1BC6E88(iLocal_851, 0), 3f, 20000, 1193033728, 1056964608);
							unk_0x9F7BF6124414BCF4(0, unk_0x57240623C1BC6E88(iLocal_851, 0), 0);
						}
						else
						{
							unk_0x834EF3BF2E6A8D29(0, iLocal_851, 20000, 3.5f, 1f, 1073741824, 0);
							unk_0x6349785089ED32B4(0, iLocal_851, 0);
						}
						unk_0x007AE2AA9E15FA7B(uLocal_848);
						unk_0x00E85C3B3BD34B10(Local_410.f_3, uLocal_848);
						if (!unk_0xCA41A00932714525(iLocal_851))
						{
							unk_0x6349785089ED32B4(iLocal_851, Local_410.f_3, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_860 = 0;
					}
					if (!unk_0xCA41A00932714525(iLocal_851))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(Local_410.f_3, 1), unk_0x57240623C1BC6E88(iLocal_851, 0)) < 25f && (unk_0x1F8F07D86DA1A701(Local_410.f_3, 264387021) != 1 || unk_0x1F8F07D86DA1A701(Local_410.f_3, 264387021) != 0))
						{
							unk_0xCD9701056CF2C3B8(iLocal_851, Local_410.f_3, 16, 0f, 0f, 0f, 0f, 0f);
							unk_0xCD9701056CF2C3B8(Local_410.f_3, iLocal_851, 16, 0f, 0f, 0f, 0f, 0f);
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 30000)
					{
						func_320(&Local_410, "Player abandoned passenger", 8);
					}
				}
				if (func_151(Local_410.f_17, 1) > 250f && unk_0xA3794949321E107C(uLocal_1110))
				{
					func_320(&Local_410, "Player abandoned passenger", 8);
				}
				break;
			
			case 12:
				if (!func_158() && func_156(&Local_410, 19) > 2f)
				{
					Local_410.f_8 = func_150(iLocal_851, 0, 0);
					unk_0xAAF15482D9DB27D9(Local_410.f_8, "TX_BLIP_GYN_TG");
					func_225(&Local_410, 11, 1, 0, 0);
					unk_0x59D2C41577DCED43(1);
					func_290(&Local_410, 19, 0, 0);
					func_286(&Local_410, 18);
				}
				break;
			
			case 18:
				if (func_149(unk_0x17B5CC8A8615737D(), iLocal_851, 1) < 3f && !func_148())
				{
					func_146();
					Local_410.f_115 = 1;
					func_144(&(Local_410.f_81), 67108864);
					func_286(&Local_410, 19);
				}
				else if (!unk_0xCA41A00932714525(iLocal_851) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
				{
					unk_0x6349785089ED32B4(iLocal_851, unk_0x17B5CC8A8615737D(), 0);
				}
				break;
			
			case 19:
				if (func_140())
				{
					if (unk_0xA3794949321E107C(Local_410.f_8))
					{
						unk_0x020DF7300725ECAB(&(Local_410.f_8));
					}
					unk_0x6500ADB01E821BC0(&(Local_410.f_3));
					func_286(&Local_410, 21);
				}
				break;
			
			case 21:
				if (!Local_410.f_141 && !func_418(Local_410.f_29, Local_883, 0))
				{
					if (unk_0xFD0FE723227D5AB6(iLocal_851, 0) && !func_158())
					{
						Local_410.f_3 = iLocal_851;
						Local_410.f_29 = { Local_883 };
						Local_410.f_17 = { Local_880 };
						if (func_139(Local_410.f_98, 4))
						{
							func_144(&(Local_410.f_98), 4);
						}
						if (func_139(Local_410.f_98, 8))
						{
							func_144(&(Local_410.f_98), 8);
						}
						Local_410.f_86 = 0;
						func_225(&Local_410, 130, 1, 0, 0);
					}
				}
				else if (Local_410.f_141)
				{
					Local_410.f_9 = func_137(Local_880, 1);
					unk_0xAAF15482D9DB27D9(Local_410.f_9, "TX_BLIP_GYN_GF");
					func_135();
					func_134(&Local_410, 2, 0);
					func_133(&Local_1039, 5, -1);
					func_286(&Local_410, 22);
				}
				break;
			
			case 22:
				if (func_181(&Local_410, 1086324736, 1097859072, 1117782016))
				{
					unk_0x020DF7300725ECAB(&(Local_410.f_9));
					func_131(&uLocal_1069);
					func_130(&Local_1039, -1, 1);
					func_225(&Local_410, 132, 1, 0, 0);
					func_286(&Local_410, 27);
				}
				break;
			
			case 27:
				if ((func_119(&Local_410, 1) || func_118(&iLocal_851, 1805844857)) || unk_0xA929B2923D14E2F8(iLocal_851, 0))
				{
					if (bLocal_859)
					{
						unk_0x08377FB2AE4C6899(&uLocal_848);
						unk_0x86DD54980FE55567(&uLocal_848);
						unk_0x084522380FECC554(0, -612.6458f, -777.7148f, 24.27f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x084522380FECC554(0, -608.3197f, -775.0622f, 24.0547f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x084522380FECC554(0, -589.0419f, -775.1888f, 24.0172f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x084522380FECC554(0, Local_410.f_29, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x007AE2AA9E15FA7B(uLocal_848);
						unk_0x00E85C3B3BD34B10(iLocal_851, uLocal_848);
						unk_0x650BB0E111420EAF(iLocal_851, 1);
						func_117(&Local_410, 0);
						func_101(8, 1, -1);
					}
					func_99(&Local_410);
					func_98();
					func_286(&Local_410, 29);
				}
				break;
			
			case 29:
				if (func_71(&Local_410, &uLocal_1118))
				{
					func_9(1, &Local_410, 1);
					func_286(&Local_410, 30);
				}
				break;
			
			case 30:
				func_416();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_45(uParam1);
		if (!unk_0xCA41A00932714525(uParam1->f_3))
		{
			unk_0x6018E338F7ABCE75(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_43(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)
{
	func_401(uParam0);
	if (func_158())
	{
		func_146();
	}
	func_41();
	unk_0xD12BCC85C2F8B1DE();
	unk_0x2E2945F5602A744F(1);
	func_38(0);
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		unk_0x2B9B4DCEF80D1566(uParam0->f_4, 0);
		unk_0x3F270BA6CB751144(uParam0->f_4);
		unk_0xA57C55CEA3DF591D(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_34(uParam0->f_14, 1, 1114636288);
	func_33(&(uParam0->f_244), 3);
	unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 1);
	if (func_30())
	{
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
	}
	unk_0x1DE6AC35EE6430C8(1);
	func_20(0, 1, 1, 0);
	unk_0x2D28D5B324F77D2D(1);
	unk_0xE418A8E16B02C0AC(1);
	if (unk_0x0F1BF24ED3B7ED40(*uParam0))
	{
		unk_0x2BC4A4AFFC2D937D(*uParam0, 0);
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0x73624B45C8E405BA(1);
	}
	if (func_139(Global_101700.f_18056, 4))
	{
		func_144(&(Global_101700.f_18056), 4);
		unk_0xD90CB3CF9A40791C(func_19(), 0);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0xF9FFB9857F3120F8("gestures@m@standing@casual");
	unk_0xF9FFB9857F3120F8("oddjobs@taxi@");
	unk_0xF9FFB9857F3120F8("oddjobs@towingcome_here");
	if (unk_0x6C119F3638AC7ABE())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0x94A5DEE82C898FDF(unk_0x592069F95C314814()))
	{
		unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
	}
	unk_0xD7D18E1FDC28C12C(unk_0xF2DB717A73826179((func_11(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_12(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

void func_15(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0xD3115E7F7876D6E6(&uVar0))
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
	unk_0x44BED698F10ECC19(uParam0->f_51[0]);
}

void func_18(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_3))
	{
		if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
		{
			if (!unk_0xFD0FE723227D5AB6(uParam0->f_3, 0))
			{
				unk_0xE31C711433681463(uParam0->f_3);
			}
			unk_0xCC61640A821F277C(uParam0->f_3, 0);
			unk_0xDE574EA7A7A2CAF8(255, uParam0->f_413, joaat("player"));
			if (unk_0x5132972D2BBC5A62(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xA587396DD8FB936E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x5132972D2BBC5A62(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xA587396DD8FB936E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x5132972D2BBC5A62(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xA587396DD8FB936E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x5132972D2BBC5A62(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xA587396DD8FB936E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x6500ADB01E821BC0(&(uParam0->f_3));
		}
	}
}

int func_19()
{
	return joaat("taxi");
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_29(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_28())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_29(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_25(unk_0xBE369BE1BC57A796())) && !func_22(unk_0xBE369BE1BC57A796(), 0)) && !func_21())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_25(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_21()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312735;
}

int func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_27(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_28()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

int func_30()
{
	if (!func_32() && !func_31())
	{
		if (!unk_0x3F7E4FA3D49208FD(unk_0x592069F95C314814()))
		{
			return 1;
		}
	}
	return 0;
}

int func_31()
{
	if (unk_0x82F1A060D8F4583B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_34(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_35(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_35(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xE6FC8C18754D8C2D(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xE7281B4166C6A4CD(Var0, Var3, 1);
		unk_0xB61819CCF7A3F445();
	}
}

Vector3 func_35(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_36(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_418(Param0, func_37(), 0))
	{
		Var0 = { func_35(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_35(Param0, 1f, 30f, 30f, 10f) };
		unk_0xB82FD68B5DE68F01(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_37()
{
	struct<3> Var0;
	
	return Var0;
}

void func_38(int iParam0)
{
	if (Global_14604)
	{
		func_39(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_28())
	{
		Global_14443.f_1 = 3;
	}
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_40(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_40(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88757[iVar0 /*17*/] && !Global_88757[iVar0 /*17*/].f_1)
		{
			if (Global_88757[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88757[iVar0 /*17*/].f_5 != 88 && Global_88757[iVar0 /*17*/].f_5 != 89) && Global_88757[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88757[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85809[iParam0 /*2*/] = 0;
	}
}

void func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_101700.f_18056.f_22[0]++;
			func_44("Fares Completed ++ = ", Global_101700.f_18056.f_22[0]);
			break;
		
		case 1:
			Global_101700.f_18056.f_22[1]++;
			func_44("Fares Failed ++ = ", Global_101700.f_18056.f_22[1]);
			break;
		
		case 2:
			Global_101700.f_18056.f_22[2]++;
			func_44("Fares Accepted ++ ", Global_101700.f_18056.f_22[2]);
			break;
		
		case 3:
			Global_101700.f_18056.f_22[3]++;
			func_44("Fares Expired ++ ", Global_101700.f_18056.f_22[3]);
			break;
		
		case 13:
			Global_101700.f_18056.f_22[13]++;
			func_44("Passengers run ++ = ", Global_101700.f_18056.f_22[13]);
			break;
		
		case 14:
			Global_101700.f_18056.f_22[14]++;
			func_44("Passenger Forced to Pay ++ = ", Global_101700.f_18056.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_101700.f_18056.f_22[4])
				{
					Global_101700.f_18056.f_22[4] = iParam1;
					func_44("This distance ", iParam1);
					func_44(" is longer than current best", Global_101700.f_18056.f_22[4]);
				}
				else
				{
					func_44("Longest Distance Not Beat ", Global_101700.f_18056.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_101700.f_18056.f_22[5] = (Global_101700.f_18056.f_22[5] + iParam1);
			func_44("Total Distance w/ Passenger = ", Global_101700.f_18056.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_101700.f_18056.f_22[6]++;
			}
			else
			{
				Global_101700.f_18056.f_22[6] = (Global_101700.f_18056.f_22[6] + iParam1);
			}
			func_44("Wanted Levels ++ = ", Global_101700.f_18056.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_101700.f_18056.f_22[7] = (Global_101700.f_18056.f_22[7] + iParam1);
			}
			else
			{
				Global_101700.f_18056.f_22[7]++;
			}
			func_44("Wanted Levels Lost = ", Global_101700.f_18056.f_22[7]);
			break;
		
		case 8:
			Global_101700.f_18056.f_22[8]++;
			func_44("Taxis wrecked ++ = ", Global_101700.f_18056.f_22[8]);
			break;
		
		case 9:
			Global_101700.f_18056.f_22[9]++;
			func_44("Horn Honked ++ = ", Global_101700.f_18056.f_22[9]);
			break;
		
		case 10:
			Global_101700.f_18056.f_22[10] = (Global_101700.f_18056.f_22[10] + iParam1);
			func_44("Total Money Earned = ", Global_101700.f_18056.f_22[10]);
			break;
		
		case 11:
			Global_101700.f_18056.f_22[11] = (Global_101700.f_18056.f_22[11] + iParam1);
			func_44("Total Tips Earned = ", Global_101700.f_18056.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_101700.f_18056.f_22[12])
			{
				Global_101700.f_18056.f_22[12] = iParam1;
				func_44("New Highest Tip = ", Global_101700.f_18056.f_22[12]);
			}
			else
			{
				func_44("Highest Tip Not Reached = ", Global_101700.f_18056.f_22[12]);
			}
			break;
	}
}

void func_44(char* sParam0, int iParam1)
{
}

void func_45(var uParam0)
{
	func_43(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_417(1);
		func_57(15, 1);
	}
	func_55(&(Global_101700.f_18056), 1024);
	if (!func_139(Global_101700.f_18056, 64))
	{
		func_46(func_53(func_54(uParam0)), 0, 0);
	}
}

void func_46(int iParam0, int iParam1, int iParam2)
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
		func_52((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_51(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_50() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_49(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

int func_50()
{
	return Global_25190;
}

int func_51(int iParam0, int iParam1)
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_53(int iParam0)
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

int func_54(var uParam0)
{
	return uParam0->f_411;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_57(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_58(iParam0, iParam1);
}

int func_58(int iParam0, int iParam1)
{
	if (func_70(14) && !func_69(iParam0))
	{
		return 0;
	}
	if (unk_0xF0EE2EF8EA972239(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702)
	{
		return 0;
	}
	if (func_68(&Global_2595550))
	{
		if (func_66(&Global_2595550, iParam0))
		{
			return 0;
		}
		if (func_59(&Global_2595550, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xDDAC6D364DFB4FD7(iParam0))
		{
			return 0;
		}
		if (unk_0xF0EE2EF8EA972239(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
	{
		return 0;
	}
	if (func_70(14) && !func_69(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
	}
	if (func_65(uParam0) < 0f)
	{
		func_64(uParam0, 0);
	}
	func_62(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_60(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_60(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
	{
		return 0;
	}
	if (func_70(14) && !func_69(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
	}
	if (func_65(uParam0) < 0f)
	{
		func_64(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_61(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_61(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63(uParam0, iVar0);
		iVar0++;
	}
	func_64(uParam0, (Global_2595549 - 0.5f));
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_64(var uParam0, float fParam1)
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

float func_65(var uParam0)
{
	return uParam0->f_72;
}

bool func_66(var uParam0, int iParam1)
{
	return func_67(uParam0, iParam1) != -1;
}

int func_67(var uParam0, int iParam1)
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

bool func_68(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_69(int iParam0)
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

bool func_70(int iParam0)
{
	return Global_35781 == iParam0;
}

int func_71(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_158() && func_156(uParam0, 0) > 1f)
			{
				if (func_30())
				{
					unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				}
				func_97(uParam0);
				func_144(&(Global_101700.f_18056), 4096);
				func_95(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_96(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x4988C48537D1AE4F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_94(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_88(uParam1, 0))
			{
				func_72(uParam0);
				func_290(uParam0, 0, 0, 0);
				func_94(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_73(func_86(), 21, iVar0, 0, 0);
		func_43(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_74(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x7FE4F330D3D74809(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x731753D8494ABECD(iVar1, iVar0, 1);
	}
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_85();
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
					func_84(99, 1);
					func_83(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_82(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_81(5))
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
							func_83(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_83(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBDF22BDA553CBEE4())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_84(95, iParam3);
					break;
				
				case 1:
					func_84(97, iParam3);
					break;
				
				case 2:
					func_84(96, iParam3);
					break;
			}
			func_84(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_77(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_77(iVar1);
	}
	iVar5 = (Global_52996[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52996[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52996[iVar2] = 2147483647;
				}
				else
				{
					Global_52996[iVar2] = (Global_52996[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_83(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52996[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52996[iVar2];
			Global_52996[iVar2] = (Global_52996[iVar2] - iParam3);
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
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_76(iParam0);
	if (Global_35781 == 15)
	{
		func_75(0);
	}
	return 1;
}

void func_75(bool bParam0)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0) || unk_0x48B8265059381CD0(Global_2097152[func_79() /*10758*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		unk_0x21E7933CCC7B3724(&(Global_2097152[func_79() /*10758*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xBD18006F0815A298("COUP_RED");
		unk_0x34D84D73B5DF8E80(func_78(iParam0));
		unk_0x6132B0FB7289E50A(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_78(int iParam0)
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

int func_79()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_80(int iParam0)
{
	func_84(93, iParam0);
	func_84(29, iParam0);
	func_84(30, iParam0);
}

bool func_81(int iParam0)
{
	if (!unk_0x63C468D583002D23())
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0);
	}
	return unk_0x48B8265059381CD0(Global_2097152[func_79() /*10758*/].f_7546.f_10, iParam0);
}

int func_82(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF0EE2EF8EA972239(27))
	{
		return 0;
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x7FE4F330D3D74809(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x731753D8494ABECD(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_57(27, 1);
	return 1;
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_85()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		unk_0x7FE4F330D3D74809(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52996[0] == iVar0)
		{
			Global_52996[0] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52996[1] == iVar0)
		{
			Global_52996[1] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52996[2] == iVar0)
		{
			Global_52996[2] = iVar0;
		}
	}
}

int func_86()
{
	func_87();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_87()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_4(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_3(unk_0x17B5CC8A8615737D());
			if (func_5(iVar0) && (!func_70(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_5(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

int func_88(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_2)))
	{
		func_92(&(uParam0->f_2));
	}
	unk_0xE57F94EA937AAD99(14);
	unk_0x90101FEE397F4A7E(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x4B972043966C2EB8(2, 201) || uParam0->f_8)
		{
			if (!func_14(&(uParam0->f_5)))
			{
				func_92(&(uParam0->f_5));
				func_91(uParam0, 1051260355);
			}
		}
		if (func_14(&(uParam0->f_5)))
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
		if (!func_14(&(uParam0->f_5)))
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

float func_90(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_91(var uParam0, int iParam1)
{
	unk_0xEAC9A8A194DF8F91(*uParam0, "SHARD_ANIM_OUT");
	unk_0xDF18CF55301CEB8B(uParam0->f_9);
	unk_0x584CF9CAE83942E5(iParam1);
	unk_0x44983883E630A945();
}

void func_92(var uParam0)
{
	func_93(uParam0, 0f);
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_94(int iParam0)
{
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

void func_95(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xEAC9A8A194DF8F91(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0x80A171A436807CA0(iParam9);
	unk_0x34D84D73B5DF8E80(sParam1);
	unk_0x1798EBF9408190D3();
	unk_0xDCEB60B79ECB219E(sParam7);
	unk_0x69967F83C1E636E2(uParam2);
	unk_0x69967F83C1E636E2(uParam3);
	unk_0x34D84D73B5DF8E80(uParam6);
	unk_0x69967F83C1E636E2(uParam5);
	unk_0x69967F83C1E636E2(iParam4);
	unk_0x1798EBF9408190D3();
	unk_0x44983883E630A945();
	func_92(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_96(var uParam0)
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

void func_97(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_43(11, uParam0->f_56);
	func_43(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x48B8265059381CD0(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

void func_98()
{
	if (unk_0x23E9113C762466ED(Local_410.f_4))
	{
		if (unk_0x45CD66F0A131E554(Local_410.f_4, 0))
		{
			if (unk_0x27CB4A87DBB58E6E(Local_410.f_4) < 500f)
			{
				Local_410.f_50 = 250;
			}
			else
			{
				Local_410.f_50 = 100;
			}
		}
	}
	Local_410.f_56 = (unk_0x5D709FE87FA3B4C5(unk_0x17B5CC8A8615737D()) - unk_0xB5DF060B138CD2EA(unk_0x17B5CC8A8615737D()));
	if (Local_410.f_56 <= 150)
	{
		Local_410.f_56 = 250;
	}
	else
	{
		Local_410.f_56 = 100;
	}
}

void func_99(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_100(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_43(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_43(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_100(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_101(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_115();
	}
	if (func_114(iParam2) == 4)
	{
	}
	bVar0 = Global_101700.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x63C468D583002D23())
		{
			if (!func_112(func_113(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_112(func_113(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_101700.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_111(iParam0, 0);
			func_108(func_113(iParam0), func_114(iParam2), 1);
			iVar1 = unk_0x0E29C61F26D96FDB(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xEB79FECD9022AAF0(&(Global_2097152[func_79() /*10758*/].f_7546.f_1015), iParam0);
					func_105(15, 0);
					break;
			}
			func_104(iVar1);
			func_103(iParam0, iVar1);
			Global_100694.f_15[iParam0] = unk_0x94E3E074F38DF86C();
		}
	}
	else if (bVar0)
	{
		func_102(func_113(iParam0), func_114(iParam2));
	}
}

void func_102(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_103(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_100694.f_4[iParam0] = (unk_0x94E3E074F38DF86C() + iParam1);
	}
	else
	{
		Global_100694.f_4[iParam0] = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(1200000, 2100000));
	}
}

void func_104(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_100694.f_3 = (unk_0x94E3E074F38DF86C() + iParam0);
	}
	else
	{
		Global_100694.f_3 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(21600000, 25200000));
	}
}

void func_105(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_107(iParam0, iParam1))
	{
		iVar0 = func_106();
		Global_2452429[iVar0] = iParam0;
	}
}

int func_106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452429[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_107(int iParam0, var uParam1)
{
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_110();
		if (iParam1 == 4)
		{
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69702)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_109();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_109();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_109();
			}
		}
	}
}

void func_109()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC7E52B74A3B4973C(&(Global_101700.f_27009[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xBD18006F0815A298("");
		StringCopy(&cVar16, unk_0xC7E52B74A3B4973C(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xC7E52B74A3B4973C("CELL_253");
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_255");
		unk_0x34D84D73B5DF8E80(&(Global_2923[1 /*6*/]));
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 0);
}

void func_110()
{
	if (func_70(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		Global_14443 = func_86();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_111(int iParam0, int iParam1)
{
	Global_101700.f_243[func_115() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_112(int iParam0, int iParam1)
{
	if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_115()
{
	int iVar0;
	
	iVar0 = func_86();
	switch (iVar0)
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
		
		default:
			switch (func_116(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_118(int iParam0, int iParam1)
{
	if (!unk_0xA929B2923D14E2F8(*iParam0, 0))
	{
		if (unk_0x1F8F07D86DA1A701(*iParam0, iParam1) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_119(var uParam0, bool bParam1)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		if (func_129(uParam0) && func_125(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_124(uParam0, 2097152))
				{
					func_120(uParam0);
				}
			}
			else
			{
				func_120(uParam0);
			}
		}
		else if (!func_129(uParam0))
		{
			if (bParam1)
			{
				if (func_124(uParam0, 2097152))
				{
					if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_120(var uParam0)
{
	struct<3> Var0;
	
	if (func_123(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_121(uParam0, Var0);
}

void func_121(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0) && unk_0x7B816C72877502C5(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x854ED33E6D715648(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x854ED33E6D715648(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_122(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x335F081010BB7A76(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x3DC4639D5F23DEA2(Var0, Param1, 0) < unk_0x3DC4639D5F23DEA2(Var3, Param1, 0) && unk_0x1626793F639090A0(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x335F081010BB7A76(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x3DC4639D5F23DEA2(Var0, Param1, 0) >= unk_0x3DC4639D5F23DEA2(Var3, Param1, 0) && unk_0x1626793F639090A0(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x335F081010BB7A76(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x335F081010BB7A76(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_122(int iParam0, int iParam1)
{
	if (!unk_0xA929B2923D14E2F8(iParam0, 0) && !unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		if (unk_0x7B816C72877502C5(iParam0, iParam1))
		{
			if (unk_0x17206B315923243C(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x17206B315923243C(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x17206B315923243C(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x17206B315923243C(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_123(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_139(uParam0->f_81, iParam1) && !func_158());
	}
	return func_158();
}

int func_125(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x2315BB1606BC3DC3(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_40(1))
			{
				func_38(0);
			}
			if (func_30())
			{
				func_128();
				return 1;
			}
			else if (func_126(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, 256);
				}
				else
				{
					unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, 0);
				}
			}
			unk_0x7B717981FC1BCC65(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_126(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_127(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_127(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

void func_128()
{
	if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
	{
		unk_0xC23C2ED7CCA1618F(unk_0xBE369BE1BC57A796());
	}
}

int func_129(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			if (unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_130(var uParam0, int iParam1, bool bParam2)
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

void func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_132(), 24);
		iVar0++;
	}
	unk_0xD12BCC85C2F8B1DE();
	func_146();
}

var func_132()
{
	var uVar0;
	
	return uVar0;
}

void func_133(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_134(var uParam0, int iParam1, bool bParam2)
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
			func_89(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_89(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_135()
{
	unk_0x924CDE68BA2ED3BA(func_136(0));
	unk_0x924CDE68BA2ED3BA(func_136(1));
	unk_0xA617A761C0955C65("move_strafe_melee_unarmed");
	unk_0xF9FFB9857F3120F8("oddjobs@taxi@gyn@");
	unk_0xF9FFB9857F3120F8("melee@unarmed@streamed_taunts");
	unk_0xF9FFB9857F3120F8("misscommon@response");
	unk_0xF9FFB9857F3120F8(&cLocal_908);
	unk_0xF9FFB9857F3120F8(&cLocal_924);
	unk_0xF9FFB9857F3120F8(&cLocal_940);
	unk_0xF9FFB9857F3120F8(&cLocal_956);
	unk_0xF9FFB9857F3120F8(&cLocal_972);
	unk_0xF9FFB9857F3120F8(&cLocal_988);
	unk_0xF9FFB9857F3120F8(&cLocal_1004);
	unk_0xF9FFB9857F3120F8(&cLocal_1020);
	unk_0x01ADBE1EAD155D08("taxi_oj_gyn");
	unk_0xD7C82655D8064344();
}

int func_136(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("gauntlet");
			break;
		
		case 1:
			iVar0 = joaat("a_f_y_eastsa_03");
			break;
	}
	return iVar0;
}

var func_137(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_138(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

float func_138(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_139(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	func_143();
	if (!unk_0xA929B2923D14E2F8(iLocal_851, 0) && unk_0x45CD66F0A131E554(Local_410.f_4, 0))
	{
		switch (iLocal_1128)
		{
			case 0:
				if (func_142(1, 0, 1))
				{
					unk_0x4718A774D9248520(iLocal_851, unk_0x17B5CC8A8615737D(), -1, 2049, 3);
					unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_851, -1, 2049, 3);
					func_131(&uLocal_1069);
					func_130(&Local_1039, -1, 1);
					iLocal_1128 = 1;
				}
				break;
			
			case 1:
				if (func_156(&Local_410, 19) > 2f)
				{
					func_225(&Local_410, 129, 1, 0, 1);
					func_290(&Local_410, 19, 0, 0);
					iLocal_1128 = 5;
				}
				break;
			
			case 5:
				Local_902 = { func_141() };
				if (func_156(&Local_410, 19) > 15f || unk_0x6A7B0D91FD88D9EE(&cLocal_896, &Local_902))
				{
					iVar0 = unk_0x58060A1B26EA2597(Local_410.f_4);
					if (unk_0x0324EEB10F81965F(Local_410.f_4) == joaat("sentinel2"))
					{
						iVar0 = 1;
					}
					if (iVar0 > 1)
					{
						iVar1 = 2;
					}
					else
					{
						iVar1 = 0;
					}
					unk_0x3AD5401AC8DD9226(iLocal_851, Local_410.f_4, 40000, iVar1, 1f, 1, 0);
					func_290(&Local_410, 19, 0, 0);
					iLocal_1128 = 6;
				}
				else if ((unk_0x94E3E074F38DF86C() % 1500) < 50)
				{
					unk_0x6349785089ED32B4(iLocal_851, unk_0x17B5CC8A8615737D(), 0);
				}
				break;
			
			case 6:
				if (func_156(&Local_410, 19) > 20f)
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
					{
						unk_0x15848523A8959DBC(iLocal_851);
						unk_0x401B18D8E7BEEC86(iLocal_851, 1193033728, 0);
					}
					func_320(&Local_410, "Player not letting the chick in the car", 20);
				}
				if (unk_0x45CD66F0A131E554(Local_410.f_4, 0))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
					{
						if (unk_0xFD0FE723227D5AB6(iLocal_851, 0))
						{
							iLocal_1128 = 8;
						}
						else if ((unk_0x94E3E074F38DF86C() % 2500) < 50)
						{
						}
					}
				}
				break;
			
			case 7:
				if (unk_0x45CD66F0A131E554(Local_410.f_4, 0))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_851, 0))
					{
						if (!unk_0xFD0FE723227D5AB6(iLocal_851, 0))
						{
							unk_0xFCB4AA590A0D6A59(iLocal_851, Local_410.f_4, 2);
						}
					}
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), Local_410.f_4, -1);
					}
				}
				func_290(&Local_410, 19, 0, 0);
				iLocal_1128 = 8;
				break;
			
			case 8:
				unk_0xCE92FE50F370E679("GYN_CS_END", 0.75f, 0.75f, 0f, 0, 0, 255, 255);
				Local_410.f_141 = 0;
				if (unk_0x0F1BF24ED3B7ED40(Local_410.f_0))
				{
					unk_0x2BC4A4AFFC2D937D(Local_410.f_0, 0);
				}
				if (unk_0x0F1BF24ED3B7ED40(Local_410.f_1))
				{
					unk_0x2BC4A4AFFC2D937D(Local_410.f_1, 0);
				}
				if (unk_0x0F1BF24ED3B7ED40(uLocal_1037))
				{
					unk_0x2BC4A4AFFC2D937D(uLocal_1037, 0);
				}
				func_134(&Local_410, 19, 0);
				iLocal_1128 = 9;
				return 1;
				break;
		}
	}
	return 0;
}

struct<6> func_141()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
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

int func_142(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

void func_143()
{
	if (func_32())
	{
		unk_0x414A9320CE716942("appInternet");
	}
	if (func_31())
	{
		unk_0x414A9320CE716942("appCamera");
	}
	if (func_40(1))
	{
		func_38(0);
	}
}

void func_144(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1);
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_146()
{
	Global_14611 = 0;
	func_147();
}

void func_147()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

int func_148()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x17206B315923243C(unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D()), -1, 0) == unk_0x17B5CC8A8615737D())
		{
			return 1;
		}
	}
	return 0;
}

float func_149(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

int func_150(int iParam0, bool bParam1, bool bParam2)
{
	return func_161(iParam0, !bParam1, bParam2);
}

float func_151(struct<3> Param0, int iParam3)
{
	return func_152(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), Param0, iParam3);
}

float func_152(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), Param1, iParam4);
}

void func_153()
{
	Global_14611 = 0;
	func_154();
}

void func_154()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_155(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xCA41A00932714525(*uParam0))
		{
			unk_0xC96275575DC981A9(*uParam0, 13, 0);
			unk_0xC96275575DC981A9(*uParam0, 1, 0);
			unk_0xC96275575DC981A9(*uParam0, 3, 1);
			unk_0x9593ABA7B045F264(*uParam0, 300f);
			unk_0xB84298F7B203EA5A(*uParam0, 300f);
			unk_0x1247C00E9DC4EDDD(*uParam0, 300f);
			unk_0x2937901439E611F5(*uParam0, 2);
			unk_0x8B54B100C5719325(*uParam0, 2);
			unk_0xFA4023BBD5BCB8B5(*uParam0, 75);
			unk_0x73655D4147D2FFBC(*uParam0, 1);
			unk_0x601DD91B5FAE848C(*uParam0, 7, 1f);
			unk_0x3BB70315907D9456(*uParam0, Local_410.f_413);
			unk_0xDE574EA7A7A2CAF8(5, Local_410.f_413, joaat("player"));
			unk_0x97B2F6B96CC03922(*uParam0, 100f, 0);
		}
	}
}

float func_156(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_157(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_90(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_157(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_92(uParam0);
	}
}

int func_158()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_159(var uParam0)
{
	if ((((*uParam0 == joaat("weapon_unarmed") || *uParam0 == joaat("weapon_smokegrenade")) || *uParam0 == joaat("weapon_fireextinguisher")) || *uParam0 == joaat("weapon_petrolcan")) || *uParam0 == -837150131)
	{
		return 1;
	}
	return 0;
}

float func_160(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

int func_161(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_138(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_138(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_138(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_162()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	func_143();
	if (iLocal_846 < 3 && iLocal_846 > 0)
	{
		if (func_178(iLocal_88))
		{
			iLocal_846 = 7;
		}
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && unk_0x45CD66F0A131E554(Local_410.f_4, 0))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xCE92FE50F370E679("Player INSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		else
		{
			unk_0xCE92FE50F370E679("Player OUTSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			unk_0xCE92FE50F370E679("Player INSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
		else
		{
			unk_0xCE92FE50F370E679("Player OUTSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
	}
	switch (iLocal_846)
	{
		case 0:
			if (!func_158())
			{
				func_177(0, 0, 1);
				unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
				func_176(&Local_410, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				Var0 = { 30.8062f, -1242.612f, 29.1026f };
				Var3 = { 7.5623f, -0.0714f, 149.3929f };
				unk_0x451B3BE1DE87C4F5(Local_410.f_0, Var0);
				unk_0xF612AE5AD0E3336E(Local_410.f_0, Var3, 2);
				unk_0x4BF6276065449F9C(Local_410.f_0, 35f);
				unk_0x2F0C4DC7A4D75C2E(Local_410.f_0, "HAND_SHAKE", 0.3f);
				unk_0xA652CA24468EC747(Local_410.f_0, 1);
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				if (!unk_0xCA41A00932714525(Local_410.f_3) && !unk_0xA929B2923D14E2F8(Local_410.f_4, 0))
				{
					unk_0x5DC8C2F2F8A363C2(Local_410.f_4, unk_0x854ED33E6D715648(iLocal_850, 0f, 8.25f, 0f), 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(Local_410.f_4, 114.629f);
					unk_0x4718A774D9248520(Local_410.f_3, unk_0x17B5CC8A8615737D(), -1, 2048, 4);
				}
				func_225(&Local_410, 121, 1, 1, 0);
				func_290(&Local_410, 0, 0, 0);
				iLocal_846 = 1;
			}
			else
			{
				func_153();
			}
			break;
		
		case 1:
			if (func_156(&Local_410, 0) > 2f && !func_158())
			{
				if (!unk_0xCA41A00932714525(Local_410.f_3))
				{
					unk_0x08377FB2AE4C6899(&uLocal_848);
					unk_0x86DD54980FE55567(&uLocal_848);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					unk_0x3AD5401AC8DD9226(0, Local_410.f_4, 20000, -1, 1f, 524296, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_848);
					unk_0x00E85C3B3BD34B10(Local_410.f_3, uLocal_848);
					func_168(&(Local_410.f_244), Local_410.f_144, "txm9_figt1", "txm9_figt1_1", 8, 0, 0);
				}
				func_290(&Local_410, 0, 0, 0);
				if (func_167())
				{
					if (!iLocal_867)
					{
						unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
						unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_867 = 1;
					}
				}
				iLocal_846 = 2;
			}
			break;
		
		case 2:
			if (func_156(&Local_410, 0) > 0.3f)
			{
				iLocal_846 = 3;
			}
			break;
		
		case 3:
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(0f, 1065353216);
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			func_290(&Local_410, 0, 0, 0);
			iLocal_846 = 4;
			break;
		
		case 4:
			if (!func_166(&Local_410) && !unk_0xCA41A00932714525(Local_410.f_3))
			{
				unk_0x6018E338F7ABCE75(Local_410.f_3, 314, 1);
				func_155(&(Local_410.f_3));
				func_290(&Local_410, 0, 0, 0);
				iLocal_846 = 5;
			}
			else if (!unk_0xCA41A00932714525(Local_410.f_3))
			{
				if (unk_0x1F8F07D86DA1A701(Local_410.f_3, 242628503) != 1)
				{
					unk_0x08377FB2AE4C6899(&uLocal_848);
					unk_0x86DD54980FE55567(&uLocal_848);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					unk_0x3AD5401AC8DD9226(0, Local_410.f_4, 20000, -1, 1f, 524296, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_848);
					unk_0x00E85C3B3BD34B10(Local_410.f_3, uLocal_848);
				}
			}
			break;
		
		case 5:
			if (func_156(&Local_410, 0) > 0.5f && !func_158())
			{
				func_168(&(Local_410.f_244), Local_410.f_144, "txm9_figt1", "txm9_figt1_2", 9, 0, 0);
				func_290(&Local_410, 0, 0, 0);
				iLocal_846 = 6;
			}
			break;
		
		case 6:
			if (!unk_0xCA41A00932714525(Local_410.f_3))
			{
				unk_0x0E21DA99F698AF06(Local_410.f_3, 69, 1);
			}
			if (func_156(&Local_410, 0) > 1f)
			{
				func_225(&Local_410, 11, 1, 0, 0);
				func_164(1, 1, 1);
				if (unk_0x0F1BF24ED3B7ED40(Local_410.f_0))
				{
					unk_0x2BC4A4AFFC2D937D(Local_410.f_0, 0);
				}
				func_290(&Local_410, 0, 0, 0);
				return 1;
			}
			break;
		
		case 7:
			if (unk_0x25BD4C26D84038CD())
			{
				if ((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !unk_0xCA41A00932714525(Local_410.f_3)) && unk_0x45CD66F0A131E554(Local_410.f_4, 0))
				{
					unk_0xBC8C26E1CC191108(Local_410.f_3);
					unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
				}
				if (func_158())
				{
					func_153();
				}
				func_290(&Local_410, 0, 0, 0);
				iLocal_846 = 8;
			}
			break;
		
		case 8:
			if (func_156(&Local_410, 0) > 0.3f)
			{
				if ((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !unk_0xCA41A00932714525(Local_410.f_3)) && unk_0x45CD66F0A131E554(Local_410.f_4, 0))
				{
					unk_0xBC8C26E1CC191108(Local_410.f_3);
					unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
					unk_0xFBD8170293283E41(Local_410.f_4, 0, 1);
					Var9 = { unk_0x854ED33E6D715648(Local_410.f_4, -1.6f, 0f, 0f) };
					Var6 = { unk_0x854ED33E6D715648(Local_410.f_4, -4f, 2f, 0f) };
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Var9, 1, 0, 0, 1);
					unk_0x5DC8C2F2F8A363C2(Local_410.f_3, Var6, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), func_163(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(Local_410.f_3, 1)));
					unk_0x0608D50823C6AA6D(Local_410.f_3, func_163(unk_0x57240623C1BC6E88(Local_410.f_3, 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1)));
					func_155(&(Local_410.f_3));
				}
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				if (unk_0x0F1BF24ED3B7ED40(Local_410.f_0))
				{
					unk_0x2BC4A4AFFC2D937D(Local_410.f_0, 0);
				}
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 256);
				func_290(&Local_410, 0, 0, 0);
				iLocal_846 = 9;
			}
			break;
		
		case 9:
			if (!unk_0x5C0856D86B18EE57() && func_156(&Local_410, 0) > 1f)
			{
				unk_0xC7845898207D067F(800);
			}
			if (unk_0x30F06AB0772AFB80() && !unk_0x5C0856D86B18EE57())
			{
				iLocal_846 = 10;
			}
			break;
		
		case 10:
			if (!func_166(&Local_410))
			{
				func_164(1, 1, 1);
				func_225(&Local_410, 11, 1, 0, 0);
				func_290(&Local_410, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

float func_163(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xC659BC2E3EDC150A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_164(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
	}
	unk_0x1DE6AC35EE6430C8(1);
	func_20(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x2D28D5B324F77D2D(1);
		unk_0xE418A8E16B02C0AC(1);
	}
	func_165(23, 0);
}

void func_165(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&Global_25434, iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_25434, iParam0);
	}
}

int func_166(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x17206B315923243C(uParam0->f_4, -1, 0) == unk_0x17B5CC8A8615737D())
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_168(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_169(sParam2, iParam4, 0);
}

int func_169(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x660E8E7836E95077(0);
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
					func_154();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_174(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_173();
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_110();
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_172())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
				}
			}
			if (func_28())
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_171();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_170();
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
		func_154();
	}
	return 0;
}

void func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_171()
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_172()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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

void func_173()
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

bool func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_175(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_176(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x0F1BF24ED3B7ED40(*uParam0))
	{
		*uParam0 = unk_0x077CBD2E7E281022(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, iParam0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x8F088665928570EA(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 15f);
	}
	unk_0x1DE6AC35EE6430C8(iParam1);
	func_38(0);
	func_20(1, 1, iParam2, 0);
	unk_0x2D28D5B324F77D2D(0);
	unk_0xE418A8E16B02C0AC(0);
	func_165(23, 1);
}

int func_178(int iParam0)
{
	if (func_179() && unk_0x94E3E074F38DF86C() >= iParam0 + 1000)
	{
		unk_0x50FD1894558DE186(500);
		while (!unk_0x25BD4C26D84038CD())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_38(0);
		func_153();
		return 1;
	}
	return 0;
}

int func_179()
{
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x4B972043966C2EB8(0, 18) || unk_0x4B972043966C2EB8(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_180(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_181(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x30F06AB0772AFB80() && !unk_0x5C0856D86B18EE57()) && !unk_0x46EEE08565CE19CA()) && !unk_0x25BD4C26D84038CD()) && !uParam0->f_142)
	{
		if (func_197(uParam0))
		{
			func_196(uParam0, &(uParam0->f_43));
			func_191(uParam0);
			func_190(uParam0);
			func_187(uParam0);
			func_184(uParam0, fParam2, fParam3);
			func_183(uParam0);
			return func_182(uParam0, iParam1);
		}
	}
	return 0;
}

int func_182(var uParam0, int iParam1)
{
	if (func_54(uParam0) == 2)
	{
		if (unk_0x1C34CE8087E3897C(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_160(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xA54996763FD89E65(unk_0x592069F95C314814()) < 1) && func_142(1, 1, 1)) && unk_0x4950AAD2A16D6B22(uParam0->f_4))
		{
			return func_125(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x1C34CE8087E3897C(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xA54996763FD89E65(unk_0x592069F95C314814()) < 1) && func_142(1, 1, 1)) && unk_0x4950AAD2A16D6B22(uParam0->f_4))
	{
		return func_125(uParam0, 1, iParam1);
	}
	return 0;
}

void func_183(var uParam0)
{
	float fVar0;
	
	if ((func_129(uParam0) && func_139(uParam0->f_81, 67108864)) && unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) == 0)
	{
		if ((unk_0x94E3E074F38DF86C() - iLocal_97) >= 10000)
		{
			fVar0 = func_151(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x94E3E074F38DF86C();
		}
		if (iLocal_96 >= 2 && !func_158())
		{
			func_225(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x94E3E074F38DF86C() % 4000) < 50)
		{
			if (!func_129(uParam0))
			{
			}
			if (!func_139(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

void func_184(var uParam0, float fParam1, float fParam2)
{
	if (func_129(uParam0) && func_139(uParam0->f_44, 4))
	{
		if ((unk_0x71427D1CF2654C68(uParam0->f_4) || unk_0x13B7ACE69D27E3E4(uParam0->f_4) < 3f) && func_166(uParam0))
		{
			if (!func_186(uParam0, 2))
			{
				func_185(uParam0, 2);
			}
			else if (func_129(uParam0))
			{
				if (func_156(uParam0, 2) > fParam1 && !func_186(uParam0, 14))
				{
					if (func_32())
					{
						func_225(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_225(uParam0, 48, 1, 0, 0);
					}
					func_290(uParam0, 2, 0, 0);
					if (func_186(uParam0, 10))
					{
						func_290(uParam0, 10, 0, 0);
					}
				}
				if (!func_186(uParam0, 3))
				{
					func_290(uParam0, 3, 0, 0);
				}
				else if (func_156(uParam0, 3) >= fParam2)
				{
					func_134(uParam0, 3, 0);
					func_320(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_186(uParam0, 2))
			{
				func_134(uParam0, 2, 0);
			}
			if (func_186(uParam0, 3))
			{
				func_134(uParam0, 3, 0);
			}
		}
	}
}

void func_185(var uParam0, int iParam1)
{
	func_157(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_186(var uParam0, int iParam1)
{
	return func_14(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_187(var uParam0)
{
	if (func_189(uParam0))
	{
		func_188(uParam0);
	}
}

void func_188(var uParam0)
{
	if (unk_0x4FF4418C82B0098A() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x04F0F99162081258();
			func_134(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_156(uParam0, 20) > 3f)
				{
					func_225(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_139(uParam0->f_81, 262144) || !func_139(uParam0->f_81, 1048576))
				{
					if (func_156(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_225(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_139(uParam0->f_82, 67108864))
				{
					if (func_156(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_225(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_156(uParam0, 20) > 8f)
				{
					func_225(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_139(uParam0->f_81, 262144) || func_139(uParam0->f_82, 67108864))
			{
				if (!func_186(uParam0, 22))
				{
					func_185(uParam0, 22);
				}
			}
			if (func_186(uParam0, 22) && func_156(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_139(uParam0->f_81, 1048576))
					{
						func_225(uParam0, 84, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_139(uParam0->f_82, 134217728))
					{
						func_225(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_189(var uParam0)
{
	return uParam0->f_120;
}

void func_190(var uParam0)
{
	if (unk_0xB6FF35C3DAE3B8A1(unk_0x592069F95C314814()) && !func_139(uParam0->f_44, 2))
	{
		func_55(&(uParam0->f_44), 2);
	}
	else if (!unk_0xB6FF35C3DAE3B8A1(unk_0x592069F95C314814()) && func_139(uParam0->f_44, 2))
	{
		func_144(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_43(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_225(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_191(var uParam0)
{
	if (!func_139(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xA54996763FD89E65(unk_0x592069F95C314814()) >= 1)
				{
					if (func_156(uParam0, 9) > 1f)
					{
						func_195(uParam0, unk_0xA54996763FD89E65(unk_0x592069F95C314814()));
						if (uParam0->f_410 != 22)
						{
							func_225(uParam0, 50, 1, 1, 0);
						}
						func_290(uParam0, 9, 0, 0);
						if (unk_0xA3794949321E107C(uParam0->f_9))
						{
							unk_0x5F97CFBDE7F2B599(uParam0->f_9, 0);
							unk_0x5ACBCE67F0494242(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_158() && func_156(uParam0, 9) > 4f)
				{
					func_225(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_194("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_225(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xA54996763FD89E65(unk_0x592069F95C314814()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x0DD3F4C17D207474(unk_0x592069F95C314814(), func_193(uParam0)))
				{
					func_195(uParam0, unk_0xA54996763FD89E65(unk_0x592069F95C314814()));
					func_43(6, 0);
				}
				if (!func_192(uParam0))
				{
					if (!unk_0x55C74612BE548D78())
					{
						if (func_156(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_225(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xA54996763FD89E65(unk_0x592069F95C314814()) < 1)
				{
					if (func_194("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xD12BCC85C2F8B1DE();
					}
					if (unk_0xA3794949321E107C(uParam0->f_9))
					{
						unk_0x5F97CFBDE7F2B599(uParam0->f_9, 255);
						unk_0x5ACBCE67F0494242(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_158())
				{
					if (uParam0->f_410 != 22)
					{
						func_225(uParam0, 53, 1, 0, 1);
					}
					func_43(7, func_193(uParam0));
					func_195(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_158())
				{
					func_134(uParam0, 9, 0);
					func_290(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_192(var uParam0)
{
	return uParam0->f_110;
}

int func_193(var uParam0)
{
	return uParam0->f_106;
}

bool func_194(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_195(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_196(var uParam0, var uParam1)
{
	unk_0x5BA3D9E4E73996B2(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_197(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			if (!unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 1) && !unk_0x9172DCBCA2E183EC(uParam0->f_3))
			{
				func_320(uParam0, "Passenger left car.", 9);
			}
			else if (func_207(uParam0))
			{
				if (func_194("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x69E47427C5084888("TAXI_OBJ_PICKUP");
				}
				if (unk_0x30F06AB0772AFB80())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
				{
				}
				func_198(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_198(var uParam0, bool bParam1)
{
	func_206(uParam0, uParam0->f_3);
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0x2315BB1606BC3DC3(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_186(uParam0, 14))
			{
				if (func_158())
				{
					func_205(1);
				}
				func_204(uParam0, 11, 1);
				func_199(uParam0, 1);
				func_290(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_129(uParam0))
				{
					if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
					{
					}
					if (unk_0xFD0FE723227D5AB6(uParam0->f_2, 0))
					{
						if (func_156(uParam0, 15) > 5f)
						{
							func_290(uParam0, 15, 0f, 1);
						}
					}
					if (func_156(uParam0, 14) > 20f)
					{
						func_320(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_156(uParam0, 14) > 20f)
				{
					if (func_318(uParam0->f_4, 1) > 40f)
					{
						func_320(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_320(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_199(var uParam0, bool bParam1)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xA3794949321E107C(uParam0->f_8))
			{
				unk_0x5F97CFBDE7F2B599(uParam0->f_8, 0);
				unk_0x5ACBCE67F0494242(uParam0->f_8, 0);
				func_203(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA3794949321E107C(uParam0->f_9))
			{
				unk_0x5F97CFBDE7F2B599(uParam0->f_9, 0);
				unk_0x5ACBCE67F0494242(uParam0->f_9, 0);
				unk_0xD12BCC85C2F8B1DE();
				if (func_129(uParam0))
				{
					func_225(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_203(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_200(uParam0, 0, 0);
		}
		else if (unk_0xA3794949321E107C(uParam0->f_10))
		{
			unk_0x020DF7300725ECAB(&(uParam0->f_10));
			if (unk_0xA3794949321E107C(uParam0->f_8))
			{
				unk_0x5F97CFBDE7F2B599(uParam0->f_8, 255);
				unk_0x5ACBCE67F0494242(uParam0->f_8, 1);
			}
			else if (unk_0xA3794949321E107C(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x5F97CFBDE7F2B599(uParam0->f_9, 0);
					unk_0x5ACBCE67F0494242(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x5F97CFBDE7F2B599(uParam0->f_9, 255);
					unk_0x5ACBCE67F0494242(uParam0->f_9, 1);
				}
			}
			unk_0xD12BCC85C2F8B1DE();
		}
	}
}

void func_200(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_401(uParam0);
	}
	if (!unk_0xA3794949321E107C(uParam0->f_10))
	{
		uParam0->f_10 = func_161(uParam0->f_4, 1, 0);
		unk_0xAAF15482D9DB27D9(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x5ACBCE67F0494242(uParam0->f_10, 1);
		func_201(uParam0);
		if (bParam2)
		{
			unk_0xD12BCC85C2F8B1DE();
			func_225(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_201(var uParam0)
{
	func_290(uParam0, 14, 0, 0);
	func_202();
}

void func_202()
{
	int iVar0;
	
	iVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x45CD66F0A131E554(iVar0, 0))
	{
		unk_0xEE4ED1F88396A702(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_203(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_139(*uParam1, iParam2))
	{
		unk_0xD12BCC85C2F8B1DE();
		func_225(uParam0, iParam3, 1, 0, 0);
		func_55(uParam1, iParam2);
	}
}

void func_204(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_205(int iParam0)
{
	Global_16756 = iParam0;
}

void func_206(var uParam0, int iParam1)
{
	if (unk_0x23E9113C762466ED(iParam1))
	{
		if (!unk_0xCA41A00932714525(iParam1))
		{
			if (unk_0xB95F3BAC01F95DB8(unk_0xBE369BE1BC57A796()))
			{
				if ((unk_0xD5C8AEE22F8A47C7(iParam1, joaat("weapon_stungun"), 0) || unk_0xD5C8AEE22F8A47C7(iParam1, 0, 2)) || unk_0xD5C8AEE22F8A47C7(iParam1, 0, 1))
				{
					func_320(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
			}
		}
	}
}

int func_207(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x17206B315923243C(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_186(uParam0, 14))
			{
				func_208(uParam0);
			}
			func_199(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_208(var uParam0)
{
	func_134(uParam0, 14, 0);
	func_134(uParam0, 15, 0);
	func_210();
	if (func_209())
	{
		func_205(0);
	}
}

int func_209()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	var uVar0;
	
	uVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x45CD66F0A131E554(uVar0, 0))
	{
		unk_0xEE4ED1F88396A702(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_211()
{
	switch (iLocal_847)
	{
		case 0:
			if (unk_0x45CD66F0A131E554(Local_410.f_4, 0) && func_160(Local_410.f_4, Local_410.f_17, 1) < 300f)
			{
				func_215();
				iLocal_847 = 1;
			}
			break;
		
		case 1:
			if (func_213())
			{
				iLocal_847 = 2;
			}
			break;
		
		case 2:
			func_212();
			if (iLocal_853 > 1)
			{
				iLocal_847 = 3;
			}
			break;
		
		case 3:
			if (unk_0x45CD66F0A131E554(Local_410.f_4, 0) && func_160(Local_410.f_4, Local_410.f_17, 1) > 350f)
			{
				func_135();
				iLocal_853 = -1;
				iLocal_847 = 0;
			}
			break;
	}
}

void func_212()
{
	struct<3> Var0;
	
	switch (iLocal_853)
	{
		case -1:
			if (!unk_0x23E9113C762466ED(iLocal_850))
			{
				iLocal_850 = unk_0x692A2891A2BA7352(func_136(0), 27.1498f, -1246.523f, 28.4013f, 297.629f, 1, 1);
				iLocal_853++;
			}
			break;
		
		case 0:
			if (!unk_0xA929B2923D14E2F8(iLocal_850, 0))
			{
				unk_0x4A34751849E57DD5(iLocal_850, 1);
				unk_0x6CF1FECEFD66F69B(iLocal_850, 1);
				unk_0xBFA6D869BA395202(iLocal_850, "SNAKEYES");
				unk_0x0512B3C8BBE66B88(iLocal_850, 1);
				unk_0xD602D152E57C823D(iLocal_850, 10);
				Var0 = { unk_0x854ED33E6D715648(iLocal_850, 0f, 3f, 0f) };
				iLocal_851 = unk_0x2AD5F4170F4ACBEB(26, func_136(1), Var0, (unk_0x638527C9799F2AE4(iLocal_850) - 180f), 1, 1);
				iLocal_853++;
			}
			break;
		
		case 1:
			if (!unk_0xA929B2923D14E2F8(iLocal_851, 0) && !unk_0xA929B2923D14E2F8(iLocal_850, 0))
			{
				func_7(&(Local_410.f_244), 5, iLocal_851, "TaxiLiz", 0, 1);
				unk_0xA0E70AC53ABAB207(iLocal_851, "TaxiLiz");
				unk_0x6018E338F7ABCE75(iLocal_851, 317, 1);
				unk_0x2F933BB106547968(iLocal_851, 3, 2, 0, 0);
				unk_0x2F933BB106547968(iLocal_851, 4, 0, 1, 0);
				unk_0x2F933BB106547968(iLocal_851, 2, 0, 0, 0);
				unk_0xCC61640A821F277C(iLocal_851, 1);
				unk_0x6F65279C9BC14EDB(iLocal_851, 0);
				unk_0x41F851B8E149462D(iLocal_851, 1);
				unk_0x4718A774D9248520(iLocal_851, iLocal_850, -1, 2048, 4);
				unk_0x86DD54980FE55567(&uLocal_848);
				unk_0xEB1EFACA68933402(0, "oddjobs@taxi@gyn@", "idle_b_ped", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x007AE2AA9E15FA7B(uLocal_848);
				unk_0x00E85C3B3BD34B10(iLocal_851, uLocal_848);
				unk_0x08377FB2AE4C6899(&uLocal_848);
				iLocal_853++;
			}
			break;
	}
}

int func_213()
{
	if (!unk_0x9F746898F7881612(func_136(0)))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading Gaunlet ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0x9F746898F7881612(func_136(1)))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading A_F_Y_EastSA_03", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0x0EC7C47AAD110FBD("move_strafe_melee_unarmed"))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading move_strafe_melee_unarmed ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E("misscommon@response"))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading misscommon@response ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_908))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sMaleChatEnter ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_924))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sMaleChatBase ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_956))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sMaleChatExit ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_940))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sMaleChatIdle ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_988))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sFemaleChatBase ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_972))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sFemaleChatEnter ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_1020))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sFemaleChatExit ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E(&cLocal_1004))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading sFemaleChatIdle ", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0x246AF348B8F0270F("taxi_oj_gyn"))
	{
		func_214("TAXI_ASSETS_STREAMING - Way point Recording Loading taxi_oj_gyn...", &iLocal_852, 1000);
		return 0;
	}
	return 1;
}

void func_214(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x94E3E074F38DF86C() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x94E3E074F38DF86C();
}

void func_215()
{
	unk_0xE1324F59713746FA(func_136(0));
	unk_0xE1324F59713746FA(func_136(1));
	unk_0xEFA1E47456B98380("move_strafe_melee_unarmed");
	unk_0xA0E7D0E8FE126EE8("oddjobs@taxi@gyn@");
	unk_0xA0E7D0E8FE126EE8("misscommon@response");
	unk_0xA0E7D0E8FE126EE8("melee@unarmed@streamed_taunts");
	unk_0xA0E7D0E8FE126EE8(&cLocal_908);
	unk_0xA0E7D0E8FE126EE8(&cLocal_924);
	unk_0xA0E7D0E8FE126EE8(&cLocal_940);
	unk_0xA0E7D0E8FE126EE8(&cLocal_956);
	unk_0xA0E7D0E8FE126EE8(&cLocal_972);
	unk_0xA0E7D0E8FE126EE8(&cLocal_988);
	unk_0xA0E7D0E8FE126EE8(&cLocal_1004);
	unk_0xA0E7D0E8FE126EE8(&cLocal_1020);
	unk_0xD2EFABA17D4F41B0("taxi_oj_gyn");
}

void func_216()
{
	switch (iLocal_845)
	{
		case 0:
			if (!func_139(Local_410.f_82, 16384) && func_218(&Local_410) != 35)
			{
				if (func_129(&Local_410))
				{
					if (func_207(&Local_410))
					{
						if (func_152(Local_410.f_4, Local_410.f_17, 1) <= 85f && iLocal_853 > 1)
						{
							Local_410.f_17 = { Local_874 };
							unk_0xC106C8D8B1488032(Local_410.f_9, Local_874);
							func_131(&uLocal_1069);
							func_130(&Local_1039, 3, 0);
							func_225(&Local_410, 36, 1, 0, 0);
							if (unk_0x45CD66F0A131E554(iLocal_850, 0))
							{
								unk_0xDE043EE8B3F02B86(iLocal_850, 4, 0, 0);
								unk_0xEF9B9F466C3E73F6(iLocal_850, 0);
								unk_0xEC0212C05F98C1DF(iLocal_850, 150f);
								unk_0xE4FDA285C25BBA3A(iLocal_850, 0f, 0f, 0f, 1000f, 0f, 1);
							}
							unk_0xB30185B1BE926A58(Local_892, 5f, joaat("prop_skid_chair_02"), 1);
							unk_0xB30185B1BE926A58(Local_892, 5f, joaat("prop_rub_couch03"), 1);
							iLocal_845 = 1;
							if (bLocal_1038)
							{
							}
						}
					}
				}
			}
			break;
		
		case 1:
			func_217(&uLocal_1036, Local_874, 30f, 0);
			iLocal_845 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_217(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_35(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_35(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0xB57996B091C5D677(Var0, Var3);
		*uParam0 = unk_0xD1D19967E553E144(Var0, Var3, 0, 1, 1, 1);
		unk_0x26D48449559660BA(Param1, fParam4, 0);
	}
	else
	{
		unk_0xB61819CCF7A3F445();
		unk_0x571422CE42B47889(*uParam0, 0);
	}
}

int func_218(var uParam0)
{
	return uParam0->f_416;
}

int func_219(var uParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(uParam0->f_3))
	{
		if (unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 0))
		{
			if (unk_0xC0FA8EEF6413F866(uParam0->f_4, iParam1, 0))
			{
				if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 355471868) != 1)
				{
					unk_0xB095A8770515915B(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			if (unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!unk_0xC0FA8EEF6413F866(uParam0->f_4, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_221(var uParam0)
{
	func_222(uParam0, 1000);
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xBC8C26E1CC191108(uParam0->f_3);
		unk_0x6349785089ED32B4(uParam0->f_3, unk_0x17B5CC8A8615737D(), 0);
	}
	func_153();
	func_208(uParam0);
}

void func_222(var uParam0, int iParam1)
{
	if (unk_0x0F1BF24ED3B7ED40(*uParam0))
	{
		unk_0x2BC4A4AFFC2D937D(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x9274EF97A90581BE(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
	}
}

void func_223()
{
	func_55(&(Local_410.f_55), 2);
	func_55(&(Local_410.f_55), 4);
	func_55(&(Local_410.f_55), 16);
	func_55(&(Local_410.f_55), 64);
	func_55(&(Local_410.f_55), 256);
	func_55(&(Local_410.f_55), 512);
	func_55(&(Local_410.f_55), 1024);
	func_55(&(Local_410.f_55), 2048);
	func_55(&(Local_410.f_55), 4096);
	func_55(&(Local_410.f_55), 1073741824);
	func_55(&(Local_410.f_100), 8);
	func_55(&(Local_410.f_100), 2048);
	func_55(&(Local_410.f_100), 256);
	func_55(&uLocal_1111, 2);
}

void func_224(var uParam0)
{
	unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
	unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
	func_222(uParam0, 1000);
}

void func_225(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_290(uParam0, 16, 4f, 0);
		if (func_226(uParam0))
		{
			func_146();
		}
	}
	func_252(uParam0, iParam2, bParam3);
}

int func_226(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_158())
	{
		Var6 = { func_228() };
		if (!unk_0x9C88EB7B70229335(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x6A7B0D91FD88D9EE(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_227(&Var0);
			if (unk_0x6A7B0D91FD88D9EE(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_227(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_228()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

void func_229()
{
	unk_0x924CDE68BA2ED3BA(iLocal_840);
}

int func_230(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			if ((unk_0x9172DCBCA2E183EC(uParam0->f_3) && (unk_0x94E3E074F38DF86C() - iLocal_89) > 500) || unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_231(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0x2315BB1606BC3DC3(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
			{
			}
			func_198(uParam0, 1);
			if (func_30())
			{
				unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
			}
			if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 2106541073) == 1 || unk_0x1F8F07D86DA1A701(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xBC8C26E1CC191108(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x6349785089ED32B4(uParam0->f_3, unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (unk_0x0DD3F4C17D207474(unk_0x592069F95C314814(), 0))
		{
			func_250(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x08377FB2AE4C6899(&uVar3);
				unk_0x86DD54980FE55567(&uVar3);
				unk_0x084522380FECC554(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x6349785089ED32B4(0, uParam0->f_4, 0);
				unk_0x007AE2AA9E15FA7B(uVar3);
				unk_0x00E85C3B3BD34B10(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_186(uParam0, 14))
			{
				func_208(uParam0);
				func_199(uParam0, 0);
			}
			if (func_186(uParam0, 9))
			{
				func_134(uParam0, 9, 0);
				unk_0xD12BCC85C2F8B1DE();
				if (unk_0xA3794949321E107C(uParam0->f_8))
				{
					unk_0x5F97CFBDE7F2B599(uParam0->f_8, 255);
					unk_0x5ACBCE67F0494242(uParam0->f_8, 1);
				}
			}
			if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x13B7ACE69D27E3E4(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_249(uParam0, uParam0->f_3) > 300f)
				{
					func_320(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 1 || ((func_149(unk_0x17B5CC8A8615737D(), uParam0->f_3, 1) < 20f && func_160(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_160(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_246(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_245(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_244(uParam0->f_4, uParam0->f_3);
								iVar0 = func_243(uParam0, &iVar1);
								if (!unk_0xA929B2923D14E2F8(iVar0, 0))
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
										unk_0x83150B7E65C16AFE(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x83150B7E65C16AFE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x1626793F639090A0(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xA929B2923D14E2F8(iVar0, 0))
											{
												unk_0x83150B7E65C16AFE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x15848523A8959DBC(uParam0->f_3);
							unk_0x3AD5401AC8DD9226(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x7B805D5EC24E5C37(unk_0x57240623C1BC6E88(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_166(uParam0))
							{
								unk_0x15848523A8959DBC(uParam0->f_3);
							}
							else if (((unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 1 && unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 0) && unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 7) && func_249(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x08377FB2AE4C6899(&(uParam0->f_243));
								unk_0x86DD54980FE55567(&(uParam0->f_243));
								unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xEB1EFACA68933402(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xEB1EFACA68933402(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x007AE2AA9E15FA7B(uParam0->f_243);
								unk_0x00E85C3B3BD34B10(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x5132972D2BBC5A62(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x64E8BCBA7FB39814(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_149(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_242(uParam0, 1))
								{
									unk_0xBC8C26E1CC191108(uParam0->f_3);
									func_320(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_241(uParam0->f_4))
								{
									unk_0xBC8C26E1CC191108(uParam0->f_3);
									func_320(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_239(uParam0);
						if (func_249(uParam0, uParam0->f_3) < fVar4 || func_30())
						{
							if (unk_0x2315BB1606BC3DC3(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_233(uParam0))
								{
									func_232(uParam0);
									iLocal_89 = unk_0x94E3E074F38DF86C();
									unk_0x6018E338F7ABCE75(uParam0->f_3, 26, 1);
									func_134(uParam0, 5, 0);
									unk_0x8499F04E8C7E383C();
									unk_0x5BA3D9E4E73996B2(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xEABCB9D3B3CDC77E(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x7B805D5EC24E5C37(unk_0x57240623C1BC6E88(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_232(var uParam0)
{
	if (unk_0xA3794949321E107C(uParam0->f_8))
	{
		unk_0x5ACBCE67F0494242(uParam0->f_8, 0);
		unk_0x020DF7300725ECAB(&(uParam0->f_8));
	}
}

int func_233(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_214("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0) && !unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
	{
		func_143();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_178(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_125(uParam0, 0, 1084227584) && func_142(1, 1, 1))
			{
				if (func_242(uParam0, 1))
				{
					iLocal_88 = unk_0x94E3E074F38DF86C();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_320(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_244(uParam0->f_4, uParam0->f_3);
				iVar9 = func_243(uParam0, &iVar10);
				if (!unk_0xA929B2923D14E2F8(iVar9, 0))
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
						unk_0x83150B7E65C16AFE(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x83150B7E65C16AFE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x1626793F639090A0(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xA929B2923D14E2F8(iVar9, 0))
						{
							unk_0x83150B7E65C16AFE(iVar9, 0, 4096);
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
			iVar12 = func_238(&(uParam0->f_409), unk_0x854ED33E6D715648(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x854ED33E6D715648(uParam0->f_4, Var0), 1);
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
				func_177(0, 0, 1);
				unk_0x26D48449559660BA(unk_0x57240623C1BC6E88(uParam0->f_4, 1), 3f, 0);
				unk_0x3FE1DC991D646A3B(unk_0x57240623C1BC6E88(uParam0->f_4, 1), 25f, 0);
				unk_0x2E2945F5602A744F(1);
				unk_0xD12BCC85C2F8B1DE();
				func_236();
				func_252(uParam0, 0, 0);
				Var13 = { unk_0x854ED33E6D715648(uParam0->f_4, Var6) };
				unk_0x5DC8C2F2F8A363C2(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(uParam0->f_3, func_235(uParam0));
				func_176(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x451B3BE1DE87C4F5(*uParam0, unk_0x854ED33E6D715648(uParam0->f_4, Var0));
				unk_0x38FEEA0E556305D7(*uParam0, uParam0->f_4, Var3, 1);
				unk_0xA652CA24468EC747(*uParam0, 1);
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				unk_0xDEAF24B058321A05(uParam0->f_3, 0, 0);
				unk_0x3AD5401AC8DD9226(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_214("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0) && !unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
			{
				if (!unk_0xFD0FE723227D5AB6(uParam0->f_3, 0))
				{
					unk_0xFCB4AA590A0D6A59(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xFBD8170293283E41(uParam0->f_4, func_234(uParam0->f_7), 1);
				}
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				unk_0x2BC4A4AFFC2D937D(*uParam0, 0);
				unk_0x2BC4A4AFFC2D937D(uParam0->f_1, 0);
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
				unk_0xC7845898207D067F(800);
				unk_0x2E2945F5602A744F(1);
				unk_0xD12BCC85C2F8B1DE();
				func_236();
				func_252(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x30F06AB0772AFB80() && !unk_0x5C0856D86B18EE57())
			{
				func_164(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			unk_0x2BC4A4AFFC2D937D(*uParam0, 0);
			unk_0x2BC4A4AFFC2D937D(uParam0->f_1, 0);
			unk_0xBA7CD73403732191(0);
			unk_0x503F20CB07C55470(0, 1065353216);
			func_164(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0) && !unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
			{
				if (unk_0x9172DCBCA2E183EC(uParam0->f_3) || unk_0xFD0FE723227D5AB6(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), -1794415470) != 1 && unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), -1794415470) != 0)
				{
					unk_0x3AD5401AC8DD9226(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_234(int iParam0)
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

float func_235(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_37() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x854ED33E6D715648(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x854ED33E6D715648(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_163(unk_0x57240623C1BC6E88(uParam0->f_3, 1), Var1);
	return fVar0;
}

void func_236()
{
	Global_14611 = 0;
	func_237();
}

void func_237()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

int func_238(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xEA2B91A5203A20DF(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x20122FD3E8B8C933(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_239(var uParam0)
{
	var uVar0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			if (func_318(uParam0->f_3, 1) > 30f || func_240(uParam0))
			{
				if (unk_0x1F8F07D86DA1A701(uParam0->f_3, -1794415470) == 1 || unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) == 1)
				{
					unk_0x08377FB2AE4C6899(&uVar0);
					unk_0x86DD54980FE55567(&uVar0);
					unk_0x6349785089ED32B4(0, uParam0->f_4, 0);
					unk_0xEB1EFACA68933402(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x084522380FECC554(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x007AE2AA9E15FA7B(uVar0);
					unk_0x00E85C3B3BD34B10(uParam0->f_3, uVar0);
					func_320(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_240(var uParam0)
{
	if ((unk_0x13B7ACE69D27E3E4(uParam0->f_4) > 3f && func_156(uParam0, 5) > 15f) || unk_0x879A5482D4D7A218(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xC98320A98098650E(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xC98320A98098650E(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xC98320A98098650E(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xC98320A98098650E(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x9020DA20CF0C5F11(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x9020DA20CF0C5F11(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x9020DA20CF0C5F11(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x9020DA20CF0C5F11(iParam0, 3))
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

int func_242(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x17206B315923243C(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x17206B315923243C(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x17206B315923243C(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x23E9113C762466ED(iVar0[iVar4]))
			{
				if (unk_0xA929B2923D14E2F8(iVar0[iVar4], 0))
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
		if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_243(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		iVar0 = unk_0x17206B315923243C(uParam0->f_4, 1, 0);
		if (unk_0x23E9113C762466ED(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x17206B315923243C(uParam0->f_4, 2, 0);
			if (unk_0x23E9113C762466ED(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x17206B315923243C(uParam0->f_4, 0, 0);
				if (unk_0x23E9113C762466ED(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x58060A1B26EA2597(iParam0);
	Var0 = { unk_0x3ACAA2B62026685B(iParam0, unk_0x57240623C1BC6E88(iParam1, 1)) };
	if (unk_0x0324EEB10F81965F(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x0324EEB10F81965F(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x1626793F639090A0(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x1626793F639090A0(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x1626793F639090A0(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x1626793F639090A0(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_245(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		if (!unk_0xF6563E19EDE84B8C(uParam0->f_3) && func_318(uParam0->f_3, 1) < fParam2)
		{
			if (!func_186(uParam0, 5))
			{
				func_290(uParam0, 5, 0, 0);
			}
		}
		else if (func_186(uParam0, 5))
		{
			func_134(uParam0, 5, 0);
		}
		if (((func_156(uParam0, 5) > IntToFloat(iParam1) && unk_0x13B7ACE69D27E3E4(uParam0->f_4) < fParam4) && !unk_0xF6563E19EDE84B8C(uParam0->f_3)) || func_318(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_246(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x36ACE2C7E56D90D6(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x36ACE2C7E56D90D6(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xE9833D7A09D570F1(uParam0->f_4, iVar18) };
		Var6 = { unk_0x3ACAA2B62026685B(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x854ED33E6D715648(uParam0->f_4, Var6) };
	Var3 = { unk_0x854ED33E6D715648(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6DCB9EA6162F40F1(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xCC61640A821F277C(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_149(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xE851F22ED3518011((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xEA2B91A5203A20DF(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x20122FD3E8B8C933(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 1 && unk_0x1F8F07D86DA1A701(uParam0->f_3, 242628503) != 0)
			{
				unk_0x08377FB2AE4C6899(&(uParam0->f_243));
				unk_0x86DD54980FE55567(&(uParam0->f_243));
				unk_0xEB1EFACA68933402(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
				unk_0x85111902FC00A5CF(uParam0->f_243, 1);
				unk_0x007AE2AA9E15FA7B(uParam0->f_243);
				unk_0x00E85C3B3BD34B10(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xD12BCC85C2F8B1DE();
			if (uParam0->f_411 != 9)
			{
				if (!func_139(uParam0->f_44, 128))
				{
					func_225(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_247(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x15848523A8959DBC(uParam0->f_3);
			unk_0x4718A774D9248520(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x08377FB2AE4C6899(&(uParam0->f_243));
			unk_0x86DD54980FE55567(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xEB1EFACA68933402(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xEB1EFACA68933402(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
			unk_0x007AE2AA9E15FA7B(uParam0->f_243);
			unk_0x00E85C3B3BD34B10(uParam0->f_3, uParam0->f_243);
			unk_0x08377FB2AE4C6899(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x5132972D2BBC5A62(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x64E8BCBA7FB39814(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_247(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xECF05B7D463A3321(uParam0, sParam1, uParam2, func_248(iParam3), 0);
}

int func_248(int iParam0)
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

float func_249(var uParam0, int iParam1)
{
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		if (func_166(uParam0))
		{
			return func_149(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_250(var uParam0)
{
	func_206(uParam0, uParam0->f_3);
	if (func_166(uParam0))
	{
		if (func_186(uParam0, 14))
		{
			func_208(uParam0);
			if (unk_0xA3794949321E107C(uParam0->f_10))
			{
				unk_0x020DF7300725ECAB(&(uParam0->f_10));
			}
		}
	}
	if (!func_186(uParam0, 9))
	{
		if (unk_0xA3794949321E107C(uParam0->f_8))
		{
			unk_0x5F97CFBDE7F2B599(uParam0->f_8, 0);
			unk_0x5ACBCE67F0494242(uParam0->f_8, 0);
		}
		func_290(uParam0, 9, 0, 0);
		func_251("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_251(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

void func_252(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_146();
		func_290(uParam0, 16, 4f, 0);
		unk_0xD12BCC85C2F8B1DE();
	}
}

int func_253(var uParam0, int iParam1)
{
	if (!unk_0x657558590DD37F85(2))
	{
		return 0;
	}
	func_259(12);
	if (func_139(uParam0->f_44, 8))
	{
		if (!func_139(uParam0->f_44, 128))
		{
			if (unk_0x34D81E587C110E92(unk_0x17B5CC8A8615737D()) && !func_139(uParam0->f_44, 256))
			{
				func_55(&(uParam0->f_44), 256);
			}
			if (func_139(uParam0->f_44, 256) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				func_225(uParam0, 135, 1, 0, 1);
				func_55(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_257(uParam0, iParam1))
	{
		if (func_318(uParam0->f_3, 1) < 35f)
		{
			if (!func_139(uParam0->f_44, 8))
			{
				unk_0x6349785089ED32B4(uParam0->f_3, unk_0x17B5CC8A8615737D(), 0);
				func_225(uParam0, 133, 1, 0, 1);
				func_55(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xCA41A00932714525(uParam0->f_3) || unk_0x48368B3E430594FA(uParam0->f_3)) || func_318(uParam0->f_3, 1) > 400f)
		{
			func_320(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x60604E51E30D25B8(uParam0->f_2, 0);
		unk_0x2B9B4DCEF80D1566(uParam0->f_4, 1);
		if (unk_0x17206B315923243C(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x26C9531CF391AB1D(uParam0->f_4);
			func_255(uParam0);
			func_43(2, 0);
			bLocal_94 = true;
			func_157(&uLocal_90);
			return 1;
		}
		else
		{
			func_320(uParam0, "No Taxi", 21);
			func_254("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_254(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_255(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
	{
		if (func_256())
		{
		}
	}
}

int func_256()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				iVar1 = unk_0x0324EEB10F81965F(iVar0);
				bVar2 = func_241(iVar0);
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
				if (unk_0xC2AFD5CFEDC8F22A(iVar1))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) == unk_0x17B5CC8A8615737D())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x58060A1B26EA2597(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_139(uParam0->f_44, 64))
					{
						if (unk_0x657558590DD37F85(2))
						{
							func_254("TX_VIP_DMGD", -1);
							if (func_258("TX_VIP_DMGD"))
							{
								func_55(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_139(uParam0->f_44, 32))
					{
						if (unk_0x657558590DD37F85(2))
						{
							func_254("TX_VIP_CAR", -1);
							if (func_258("TX_VIP_CAR"))
							{
								func_55(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_139(uParam0->f_44, 16))
					{
						if (unk_0x657558590DD37F85(2))
						{
							func_254("TX_VIP_SMALL", -1);
							if (func_258("TX_VIP_SMALL"))
							{
								func_55(&(uParam0->f_44), 16);
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
			func_144(&(uParam0->f_44), 16);
			func_144(&(uParam0->f_44), 64);
			func_144(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_258(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_259(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		uVar0 = iParam0;
		unk_0x21E9CCAA51709FD0(8, &uVar0, 1, 1);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xCDDCD2630EF7A698(8, &cVar1);
	}
}

void func_260()
{
	Local_343.f_0 = 0;
	func_277(40988, 40963, 1);
	func_277(40724, 40700, 1);
	func_277(40638, 40613, 1);
	func_277(40541, 40517, 1);
	func_277(40407, 40386, 1);
	func_277(40333, 40308, 1);
	func_277(40166, 40142, 1);
}

int func_261(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_262(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_4))
	{
		if (func_264(uParam0->f_4))
		{
			func_263(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_264(int iParam0)
{
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x27CB4A87DBB58E6E(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x01F09F0D64EF3285(iParam0, 0, 40000) || unk_0x01F09F0D64EF3285(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_266(var uParam0)
{
	if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
	{
		if (func_267(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_263(uParam0, 11);
	return 1;
}

int func_269(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_4))
	{
		if (unk_0xA77EE6C138A588EB(uParam0->f_4) && !unk_0x4950AAD2A16D6B22(uParam0->f_4))
		{
			if (!func_186(uParam0, 25))
			{
				func_290(uParam0, 25, 0, 0);
			}
			else if (func_156(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_186(uParam0, 25))
		{
			func_134(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_271(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
	{
		if (unk_0x3EFAA1D388F677C6(uParam0->f_4))
		{
			if (unk_0x01F09F0D64EF3285(uParam0->f_4, 0, 40000) || unk_0x01F09F0D64EF3285(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_273(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_4, 0))
	{
		if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
		{
			if (unk_0x71427D1CF2654C68(uParam0->f_4))
			{
				if (func_267(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_274(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_275(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_4))
	{
		if (func_276(uParam0->f_4))
		{
			func_263(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
{
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x27CB4A87DBB58E6E(iParam0) == 0f)
	{
		if (!unk_0x45CD66F0A131E554(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x01F09F0D64EF3285(iParam0, 0, 40000) || unk_0x01F09F0D64EF3285(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_277(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_56(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_56(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_278(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_320(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_279(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0->f_3))
	{
		if ((unk_0xCA41A00932714525(uParam0->f_3) || unk_0xA929B2923D14E2F8(uParam0->f_3, 0)) || unk_0x03767DFC5EE2B0C6(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_145(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_281(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x21E7933CCC7B3724(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_282(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_283()
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

int func_284()
{
	if (!unk_0x9F746898F7881612(iLocal_840))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_852, 1000);
		return 0;
	}
	if (!unk_0xFF84A94166FBB351(uLocal_1118))
	{
		return 0;
	}
	if (!func_285(&iLocal_852, 1))
	{
		func_214("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_852, 1000);
		return 0;
	}
	return 1;
}

int func_285(int iParam0, bool bParam1)
{
	if (!unk_0x9F746898F7881612(func_19()))
	{
		func_214("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF4F8AE8DD0F08C1E("gestures@m@standing@casual"))
		{
			func_214("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF4F8AE8DD0F08C1E("oddjobs@taxi@"))
	{
		func_214("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E("oddjobs@towingcome_here"))
	{
		func_214("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF4F8AE8DD0F08C1E("misscommon@response"))
	{
		func_214("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x657558590DD37F85(2))
	{
		func_214("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_286(var uParam0, int iParam1)
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

int func_287(var uParam0)
{
	if (!unk_0xCA41A00932714525(uParam0->f_3))
	{
		uParam0->f_8 = func_150(uParam0->f_3, 0, 0);
		unk_0x559F0F361D3673AA(1, 0);
		unk_0x5ACBCE67F0494242(uParam0->f_8, 1);
		unk_0xAAF15482D9DB27D9(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x4718A774D9248520(uParam0->f_3, unk_0x17B5CC8A8615737D(), -1, 2048, 4);
	}
	return 1;
}

int func_288(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x23E9113C762466ED(uParam0->f_3))
	{
		func_289(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0x26D48449559660BA(uParam0->f_14, 2f, 0);
		func_34(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x01688CC3144E8710(uParam0->f_11);
		}
		else if (unk_0x23E9113C762466ED(Global_100412.f_225[0]))
		{
			uParam0->f_3 = Global_100412.f_225[0];
			unk_0xF0F77C99098F999B(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x2AD5F4170F4ACBEB(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0xA0E70AC53ABAB207(uParam0->f_3, sParam7);
		unk_0x0E21DA99F698AF06(uParam0->f_3, 112, 1);
		if (!unk_0xCA41A00932714525(uParam0->f_3))
		{
			unk_0x2380074FC04D1644(uParam0->f_3, 250);
			unk_0x6018E338F7ABCE75(uParam0->f_3, 32, 0);
			unk_0x6018E338F7ABCE75(uParam0->f_3, 104, 1);
			unk_0x6018E338F7ABCE75(uParam0->f_3, 177, 1);
			unk_0x6018E338F7ABCE75(uParam0->f_3, 116, 0);
			unk_0x1EF7A8224AE81790("TAXI_Passenger", &(uParam0->f_413));
			unk_0xDE574EA7A7A2CAF8(1, uParam0->f_413, joaat("player"));
			unk_0xDE574EA7A7A2CAF8(2, uParam0->f_413, joaat("COP"));
			unk_0x3BB70315907D9456(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_289(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x69C2AF7775CB38F5(Param1, 20f, 5f, 0);
}

void func_290(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_93(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_92(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_93(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_92(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_291()
{
	unk_0xE1324F59713746FA(iLocal_840);
	func_293(1);
	uLocal_1118 = func_292();
	unk_0xE22CF1078AD4E111("SCRIPT\TREVOR_2_BIKER_RINGTONE", 0, -1);
}

var func_292()
{
	return unk_0xB50E108F09B8EC7A("MIDSIZED_MESSAGE");
}

void func_293(bool bParam0)
{
	unk_0xE1324F59713746FA(func_19());
	if (bParam0)
	{
		unk_0xA0E7D0E8FE126EE8("gestures@m@standing@casual");
	}
	unk_0xA0E7D0E8FE126EE8("oddjobs@taxi@");
	unk_0xA0E7D0E8FE126EE8("oddjobs@towingcome_here");
	unk_0xA0E7D0E8FE126EE8("misscommon@response");
	unk_0xA73AE78D2491E6E1("TAXI", 2);
	if (!func_139(Global_101700.f_18056, 128))
	{
		func_55(&(Global_101700.f_18056), 128);
	}
}

void func_294(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) == 0)
		{
			if (bParam2)
			{
				if (func_156(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_225(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_225(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_290(uParam0, 10, 0f, 1);
				}
			}
			else if (func_156(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_225(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_225(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_156(uParam0, 10) > 30f)
		{
			if (!func_158())
			{
				if (uParam0->f_112)
				{
					func_225(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_225(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_139(uParam0->f_100, 64))
	{
		if (!func_14(&(Local_190[5 /*10*/].f_6)))
		{
			func_157(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_317(uParam0))
			{
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0, 1);
				func_314(5, uParam0);
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 1))
	{
		if (!func_14(&(Local_190[0 /*10*/].f_6)))
		{
			func_157(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_312(uParam0))
			{
				func_316(uParam0, 1);
				func_314(0, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 2))
	{
		if (!func_14(&(Local_190[1 /*10*/].f_6)))
		{
			func_157(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_311(uParam0))
			{
				func_316(uParam0, 1);
				func_314(1, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 2048))
	{
		if (!func_14(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x23E9113C762466ED(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xB5DF060B138CD2EA(uParam0->f_4);
				func_157(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_90(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_310(uParam0))
			{
				func_316(uParam0, 1);
				func_314(8, uParam0);
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 128))
	{
		if (!func_14(&(Local_190[6 /*10*/].f_6)))
		{
			func_157(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_316(uParam0, 1);
				func_314(6, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 32))
	{
		if (!func_14(&(Local_190[4 /*10*/].f_6)))
		{
			func_157(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_308(uParam0))
			{
				func_316(uParam0, 1);
				func_314(4, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 256))
	{
		if (!func_14(&(Local_190[7 /*10*/].f_6)))
		{
			func_157(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_307(uParam0))
			{
				func_314(7, uParam0);
				func_316(uParam0, 1);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 8))
	{
		if (!func_14(&(Local_190[9 /*10*/].f_6)))
		{
			func_157(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_306(uParam0))
			{
				func_316(uParam0, 1);
				func_314(9, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 16384))
	{
		if (!func_14(&(Local_190[13 /*10*/].f_6)))
		{
			func_157(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_300(uParam0))
			{
				func_316(uParam0, 1);
				func_314(13, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 32768))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_6)))
		{
			func_157(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_299(uParam0))
			{
				func_316(uParam0, 1);
				func_314(14, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 4096))
	{
		if (!func_14(&(Local_190[11 /*10*/].f_6)))
		{
			func_157(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_298(uParam0))
			{
				func_316(uParam0, 1);
				func_314(11, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 8192))
	{
		if (!func_14(&(Local_190[12 /*10*/].f_6)))
		{
			func_157(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_297(uParam0))
			{
				func_316(uParam0, 1);
				func_314(12, uParam0);
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_313(uParam0);
			}
		}
	}
	if (func_139(uParam0->f_100, 4))
	{
		if (!func_14(&(Local_190[2 /*10*/].f_6)))
		{
			func_296(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_90(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_295(uParam0))
			{
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0, 1);
				func_314(2, uParam0);
				func_313(uParam0);
			}
		}
	}
}

int func_295(var uParam0)
{
	float fVar0;
	
	if (!unk_0xCA41A00932714525(uParam0->f_2))
	{
		if ((!unk_0x078054927A8129E2(uParam0->f_2) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x13B7ACE69D27E3E4(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_157(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_90(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x13B7ACE69D27E3E4(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_89(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_89(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_296(var uParam0, float fParam1)
{
	if (!func_14(uParam0))
	{
		func_93(uParam0, fParam1);
	}
}

int func_297(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4C17A06B99B6CC49(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[12 /*10*/].f_3)))
			{
				func_157(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_298(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x45CD66F0A131E554(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x4C17A06B99B6CC49(uParam0->f_4, 1) };
		if (unk_0xE851F22ED3518011(Var0.f_0) > 2.5f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[11 /*10*/].f_3)))
			{
				func_157(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_90(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0xE851F22ED3518011(uLocal_342) - unk_0xE851F22ED3518011(Var0.f_0)) < 0f)
			{
				func_89(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_90(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_89(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	if (((((unk_0x45CD66F0A131E554(uParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xCE499B0B1C2F5684(unk_0x57240623C1BC6E88(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x23E9113C762466ED(uParam0->f_5))
			{
				if ((unk_0x13B7ACE69D27E3E4(uParam0->f_4) > 15f && func_149(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xA929B2923D14E2F8(uParam0->f_5, 0) && !unk_0xC0FA8EEF6413F866(uParam0->f_5, -1, 0)))
				{
					func_157(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_90(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_149(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x502D8CF96961DF1A(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_90(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x502D8CF96961DF1A(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_300(var uParam0)
{
	if (((unk_0x45CD66F0A131E554(uParam0->f_4, 0) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_301(uParam0->f_4) && unk_0x13B7ACE69D27E3E4(uParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_190[13 /*10*/].f_3)))
			{
				func_157(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_301(int iParam0)
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
	
	unk_0x50FED0D38D06E0E6(unk_0x57240623C1BC6E88(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x50FED0D38D06E0E6(unk_0x57240623C1BC6E88(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xF95354FAD2A5A3BF(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_305((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_304(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_302(unk_0x57240623C1BC6E88(iParam0, 1), Var15, Var18, Var21);
}

int func_302(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_305(Param6 - Param3) };
	Var3 = { func_305(Param9 - Param3) };
	fVar6 = func_303(Param0, Var0);
	fVar7 = func_303(Param3, Var0);
	fVar8 = func_303(Param6, Var0);
	fVar9 = func_303(Param0, Var3);
	fVar10 = func_303(Param3, Var3);
	fVar11 = func_303(Param9, Var3);
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

float func_303(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_304(struct<3> Param0, int iParam3)
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

Vector3 func_305(struct<3> Param0)
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

int func_306(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x17206B315923243C(uParam0->f_4, -1, 0) == unk_0x17B5CC8A8615737D())
		{
			if (unk_0xB95F3BAC01F95DB8(unk_0xBE369BE1BC57A796()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_307(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x17206B315923243C(uParam0->f_4, -1, 0) == unk_0x17B5CC8A8615737D())
		{
			if (unk_0x879A5482D4D7A218(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x36C61EAA91A65598(uParam0->f_4) <= -145f || unk_0x36C61EAA91A65598(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x36C61EAA91A65598(uParam0->f_4) <= 35f && unk_0x36C61EAA91A65598(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		iVar0 = unk_0x90F8DE1AAC964995(unk_0xBE369BE1BC57A796());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[4 /*10*/].f_3)))
			{
				func_157(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_89(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		iVar0 = unk_0x181845D09B2FD3ED(unk_0xBE369BE1BC57A796());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[6 /*10*/].f_3)))
			{
				func_157(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0xDF0087E7822095AA(uParam0->f_4))
		{
			iVar0 = unk_0xB5DF060B138CD2EA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xCF458DC2F9000261(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_225(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_225(uParam0, 72, 1, 0, 1);
				}
				func_89(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4C17A06B99B6CC49(uParam0->f_4, 1) };
		if (unk_0xE851F22ED3518011(Var0.f_0) > 3f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[1 /*10*/].f_3)))
			{
				func_157(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_89(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (!unk_0x4950AAD2A16D6B22(uParam0->f_4) && unk_0x14E01C4EC4170496(uParam0->f_4))
		{
			if (!func_14(&(Local_190[0 /*10*/].f_3)))
			{
				func_157(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_89(&(Local_190[0 /*10*/].f_3));
				func_92(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_313(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_14(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_92(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_290(uParam0, 10, 0f, 1);
	unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
}

void func_314(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_315(uParam1, iParam0);
	func_89(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_315(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_317(var uParam0)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x13B7ACE69D27E3E4(uParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_190[5 /*10*/].f_3)))
			{
				func_157(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_318(int iParam0, int iParam1)
{
	return func_149(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), iParam0, iParam1);
}

int func_319(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0xC017443DBE6DA4D6(iParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x23E9113C762466ED(iParam1))
			{
				if (unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_320(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_153();
	func_417(2);
	Var0 = { func_141() };
	if ((!unk_0x9C88EB7B70229335(&Var0) && func_158()) && !unk_0x6A7B0D91FD88D9EE(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xD12BCC85C2F8B1DE();
		unk_0x2E2945F5602A744F(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
		{
			if (!func_129(uParam0))
			{
				if (unk_0x5132972D2BBC5A62(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xA587396DD8FB936E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x5132972D2BBC5A62(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xA587396DD8FB936E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x5132972D2BBC5A62(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xA587396DD8FB936E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_290(uParam0, 3, 0, 0);
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
				func_325(uParam0, &Var0);
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_129(uParam0))
			{
				if (unk_0x71427D1CF2654C68(uParam0->f_4))
				{
					func_323(uParam0, 4096, 0);
				}
				else
				{
					func_323(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_325(uParam0, &Var0);
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
				func_325(uParam0, &Var0);
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_325(uParam0, &Var0);
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_325(uParam0, &Var0);
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_43(8, 0);
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
				func_325(uParam0, &Var0);
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_323(uParam0, 0, 0);
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_43(8, 0);
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
				func_325(uParam0, &Var0);
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_325(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_43(8, 0);
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
				func_325(uParam0, &Var0);
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_322(&Var0);
			func_321(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_325(uParam0, &Var0);
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
					func_325(uParam0, &Var0);
				}
			}
			else if (!unk_0xCA41A00932714525(uParam0->f_3))
			{
				func_247(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_43(3, 0);
		}
		func_290(uParam0, 3, 0f, 1);
	}
}

int func_321(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_169(sParam2, iParam3, 0);
}

void func_322(char* sParam0)
{
	switch (func_3(unk_0x17B5CC8A8615737D()))
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

void func_323(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		unk_0xCC61640A821F277C(uParam0->f_3, 0);
		unk_0xCF458DC2F9000261(uParam0->f_3);
		unk_0xB195EE9DB37DA7F2(uParam0->f_3, 3, 0);
		unk_0xC96275575DC981A9(uParam0->f_3, 17, 1);
		unk_0x15848523A8959DBC(uParam0->f_3);
		if ((func_152(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_123(uParam0->f_29)) && !bParam2)
		{
			func_324(uParam0);
		}
		else
		{
			unk_0xB195EE9DB37DA7F2(uParam0->f_3, 1024, 1);
			unk_0xB195EE9DB37DA7F2(uParam0->f_3, 131072, 1);
			unk_0x86DD54980FE55567(&uVar0);
			unk_0x83150B7E65C16AFE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
			}
			else
			{
				unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
			}
			unk_0x29DA211B1C795F27(0, 0);
			unk_0x007AE2AA9E15FA7B(uVar0);
			unk_0x00E85C3B3BD34B10(uParam0->f_3, uVar0);
			unk_0x08377FB2AE4C6899(&uVar0);
		}
		unk_0x650BB0E111420EAF(uParam0->f_3, 1);
	}
}

void func_324(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		if (func_418(func_37(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x0608D50823C6AA6D(uParam0->f_3, 84.9058f);
				unk_0x650BB0E111420EAF(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x0608D50823C6AA6D(uParam0->f_3, 68.3138f);
				unk_0x650BB0E111420EAF(uParam0->f_3, 1);
			}
			else
			{
				unk_0x401B18D8E7BEEC86(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x15848523A8959DBC(uParam0->f_3);
			unk_0x08377FB2AE4C6899(&uVar0);
			unk_0x86DD54980FE55567(&uVar0);
			unk_0x83150B7E65C16AFE(0, 0, 0);
			unk_0x29DA211B1C795F27(0, 0);
			unk_0x084522380FECC554(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xEB35FC8B6C7E0BC7(0, 1);
				unk_0x084522380FECC554(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x3DB139C144156433(0, 151.7794f, 0);
				unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xC2AF726494294D5F(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xC2AF726494294D5F(0, uParam0->f_29, 15f, 20000);
				unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
			}
			else
			{
				unk_0xEB1EFACA68933402(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x3F1EB7756B4EA5B4(uParam0->f_29, 15f, 1))
			{
				unk_0xC2AF726494294D5F(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
			}
			unk_0x007AE2AA9E15FA7B(uVar0);
			unk_0x00E85C3B3BD34B10(uParam0->f_3, uVar0);
			unk_0x08377FB2AE4C6899(&uVar0);
		}
		unk_0x650BB0E111420EAF(uParam0->f_3, 1);
	}
}

void func_325(var uParam0, char* sParam1)
{
	if (func_326(uParam0))
	{
		func_321(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_326(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		if (func_149(unk_0x17B5CC8A8615737D(), uParam0->f_3, 1) < 40f && !unk_0xF6563E19EDE84B8C(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_327(var uParam0)
{
	return uParam0->f_118;
}

void func_328()
{
	func_358(&Local_410);
	if (func_357(&Local_410, &Local_1039))
	{
		switch (Local_1039.f_27)
		{
			case 0:
				if (Local_410.f_410 == 9)
				{
					if (!func_356(&Local_410))
					{
						if (func_355("TX_OBJ_GYN_DO") || unk_0xA3794949321E107C(Local_410.f_9))
						{
							Local_1039.f_27++;
						}
						else if (func_218(&Local_410) != 10)
						{
							func_225(&Local_410, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_218(&Local_410) > 10 && func_218(&Local_410) != 15) && !func_356(&Local_410))
				{
					func_225(&Local_410, 15, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					func_185(&Local_410, 7);
				}
				break;
			
			case 2:
				if (func_156(&Local_410, 18) > 4f && !iLocal_864)
				{
					iLocal_858 = unk_0x3DF2C10FD29336A3();
					unk_0xEE4ED1F88396A702(iLocal_858, "Biker_Ring_Tone", Local_410.f_4, "TREVOR_2_SOUNDS", 0, 0);
					iLocal_864 = 1;
				}
				else if (((func_156(&Local_410, 18) > 7f && func_218(&Local_410) != 16) && iLocal_864) && !iLocal_866)
				{
					func_354(&iLocal_858);
					if (!unk_0xCA41A00932714525(Local_410.f_3))
					{
						unk_0xD11C043590A1D7B7(Local_410.f_3, 1, 1);
					}
					func_225(&Local_410, 16, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					iLocal_866 = 1;
				}
				break;
			
			case 3:
				if (!unk_0xCA41A00932714525(Local_410.f_3))
				{
					unk_0xD11C043590A1D7B7(Local_410.f_3, 0, 1);
				}
				Local_1039.f_27++;
				break;
			
			case 5:
				if (func_156(&Local_410, 18) > 2f && func_218(&Local_410) != 131)
				{
					func_225(&Local_410, 131, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					Local_1039.f_27++;
				}
				break;
			}
	}
	func_329(&Local_410, &uLocal_1069, &Local_1039, bLocal_1038);
}

int func_329(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_337(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_186(uParam0, 2))
	{
		if (func_336(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x94E3E074F38DF86C() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_335(uParam0))
				{
					uParam2->f_7 = { func_334(uParam1) };
					func_321(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_158())
				{
					uParam2->f_13 = { func_228() };
					if (unk_0x6A7B0D91FD88D9EE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_56(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_332(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_192(uParam0))
				{
					if (func_158())
					{
						func_290(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_331() };
						if (unk_0xA54996763FD89E65(unk_0x592069F95C314814()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_158())
				{
					uParam2->f_19 = { func_141() };
				}
				else
				{
					func_56(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_332(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_186(uParam0, 14) && !func_158()) && !func_192(uParam0)) && func_156(uParam0, 18) > 1f)
				{
					func_290(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_158())
				{
					if (func_156(uParam0, 18) > 1f)
					{
						if (!unk_0x9C88EB7B70229335(&(uParam2->f_1)))
						{
							func_330(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_158())
				{
					func_56(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_332(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_330(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_169(sParam2, iParam4, 0);
}

struct<6> func_331()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x63A528817609801B(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x63A528817609801B(&(Global_14613[iVar8 /*6*/])))
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

void func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = func_333(uParam0);
	if (iVar0 > -1)
	{
		func_144(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_144(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_55(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_132(), 24);
	}
}

int func_333(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_139((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_334(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_139((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_55(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_335(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_194("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_194("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_194("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_194("TX_OBJ_GYB_DO", 0, 0) || func_194("TAXI_OBJ_GYB", 0, 0)) || func_194("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_194("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_194("TX_OBJ_CYI_DO", 0, 0) || func_194("TAXI_OBJ_CYI_01", 0, 0)) || func_194("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_194("TX_OBJ_GYN_DO", 0, 0) || func_194("TAXI_OBJ_GYN", 0, 0)) || func_194("TAXI_OBJ_GYN_TG", 0, 0)) || func_194("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_194("TAXI_OBJ_CC1", 0, 0) || func_194("TAXI_OBJ_CC2", 0, 0)) || func_194("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_194("TAXI_OBJ_FTC1", 0, 0) || func_194("TAXI_OBJ_FTC2", 0, 0)) || func_194("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_194("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_194("TAXI_OBJ_GETRUN", 0, 0) || func_194("TAXI_OBJ_DRIVE", 0, 0)) || func_194("TAXI_OBJ_RETURN", 0, 0)) || func_194("TAXI_OBJ_POL", 0, 0)) || func_194("TAXI_OBJ_RUNOUT", 0, 0)) || func_194("TAXI_OBJ_POL", 0, 0));
}

int func_336(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_139((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_337(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_335(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_186(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_218(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_352(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_158())
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
						func_351(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_348(uParam0, Var0, func_350(uParam0, 2));
				}
				if (func_139(uParam0->f_98, 4))
				{
					func_290(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				func_203(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_156(uParam0, 16) > 1f)
				{
					func_205(1);
					if (uParam0->f_411 == 9)
					{
						func_251("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_251("TAXI_VIP_RETURN", 7500, 1);
					}
					func_290(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
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
					func_351(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xCA41A00932714525(uParam0->f_3))
				{
					func_247(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_156(uParam0, 16) > func_138(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_158()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_218(uParam0))
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
				func_351(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_352(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_321(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_225(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_290(uParam0, 16, 0, 0);
				func_225(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_139(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_353(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_351(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_290(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_251("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_251("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA3794949321E107C(uParam0->f_9))
					{
						uParam0->f_9 = func_137(uParam0->f_17, 1);
					}
					else if (unk_0xC6F9754C5842E80A(uParam0->f_9) == 0)
					{
						unk_0x5F97CFBDE7F2B599(uParam0->f_9, 255);
						unk_0xC106C8D8B1488032(uParam0->f_9, uParam0->f_17);
						unk_0x5ACBCE67F0494242(uParam0->f_9, 1);
					}
				}
				func_225(uParam0, 10, 1, 0, 0);
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
				func_227(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_247(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA3794949321E107C(uParam0->f_9))
					{
						uParam0->f_9 = func_137(uParam0->f_17, 1);
					}
					else if (unk_0xC6F9754C5842E80A(uParam0->f_9) == 0)
					{
						unk_0x5F97CFBDE7F2B599(uParam0->f_9, 255);
						unk_0xC106C8D8B1488032(uParam0->f_9, uParam0->f_17);
						unk_0x5ACBCE67F0494242(uParam0->f_9, 1);
					}
				}
				func_225(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_347(uParam0, 33554432, Var0, "", 1, 8);
				func_290(uParam0, 16, 0, 0);
				func_225(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_158())
				{
					func_346(uParam0, 0);
					func_55(&(uParam0->f_44), 4);
					func_290(uParam0, 16, 0, 0);
					func_225(uParam0, 13, 0, 0, 0);
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
				func_227(&Var0);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_156(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_227(&Var0);
					}
					func_344(Var0, uParam1);
					func_55(&(uParam0->f_81), 67108864);
					func_290(uParam0, 16, 0, 0);
					func_290(uParam0, 11, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_156(uParam0, 11) > uParam0->f_36)
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
							func_227(&Var0);
						}
					}
					func_344(Var0, uParam1);
					func_290(uParam0, 11, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
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
					func_227(&Var0);
				}
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
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
				func_227(&Var0);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
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
				func_227(&Var0);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_227(&Var0);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				func_55(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 1, 0, 8);
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
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
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
					func_343(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_343(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_344(Var0, uParam1);
				func_352(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_252(uParam0, 0, 0);
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
					func_343(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_343(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_344(Var0, uParam1);
				func_352(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 12:
				func_251("TAXI_OBJ_GYB", 3500, 1);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_251("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_251("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_251("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
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
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_139(uParam0->f_98, 268435456))
				{
					func_251("TAXI_OBJ_CYI_01", 7500, 1);
					func_55(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_227(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_227(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_227(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 33:
				func_251("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_139(uParam0->f_82, 8192))
				{
					if (func_156(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_227(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_344(Var0, uParam1);
						}
						else
						{
							func_351(uParam0, &Var0, 0, 0, 8);
						}
						func_55(&(uParam0->f_82), 8192);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_139(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_227(&Var0);
					func_351(uParam0, &Var0, 0, 0, 8);
					func_55(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_139(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_227(&Var0);
					func_351(uParam0, &Var0, 0, 0, 8);
					func_55(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 46, 1, 0, 0);
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
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_252(uParam0, 0, 0);
				break;
			
			case 139:
				func_251("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_225(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0E29C61F26D96FDB(0, 120);
				if (!func_139(uParam0->f_82, 268435456))
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
					func_55(&(uParam0->f_82), 268435456);
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
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0E29C61F26D96FDB(0, 100);
				if (!func_139(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_55(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_251("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_252(uParam0, 0, 0);
				func_225(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_158())
				{
					func_251("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_252(uParam0, 0, 0);
					func_225(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_251("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_252(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_139(uParam0->f_81, 1))
				{
					func_342(uParam0, 1, Var0, "_sick1", 8);
					func_144(&(uParam0->f_81), 2);
				}
				else if (!func_139(uParam0->f_81, 2))
				{
					func_342(uParam0, 2, Var0, "_sick2", 8);
					func_144(&(uParam0->f_81), 1);
				}
				func_352(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_139(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_139(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_55(&(uParam0->f_81), 2097152);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_352(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_352(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_352(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_352(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_139(uParam0->f_81, 4))
				{
					func_342(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_139(uParam0->f_81, 8))
				{
					func_342(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_342(uParam0, 8, Var0, "_turns3", 8);
					func_144(&(uParam0->f_81), 4);
					func_144(&(uParam0->f_81), 8);
				}
				func_352(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_341(uParam0))
				{
					func_348(uParam0, Var0, func_350(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCA41A00932714525(uParam0->f_3))
					{
						func_247(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_353(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_321(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_353(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_353(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_352(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_139(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 128);
					func_144(&(uParam0->f_83), 256);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 256);
					func_144(&(uParam0->f_83), 512);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 512);
					func_144(&(uParam0->f_83), 128);
					func_290(uParam0, 16, 0, 0);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_139(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_227(&Var0);
					}
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 1);
					func_144(&(uParam0->f_83), 2);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_227(&Var0);
					}
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_144(&(uParam0->f_83), 4);
					}
					else
					{
						func_144(&(uParam0->f_83), 1);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_227(&Var0);
					}
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 4);
					func_144(&(uParam0->f_83), 1);
					func_290(uParam0, 16, 0, 0);
				}
				func_352(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_139(uParam0->f_81, 4096))
				{
					func_347(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_139(uParam0->f_81, 8192))
				{
					func_347(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_352(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_139(uParam0->f_81, 16384))
				{
					func_347(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_139(uParam0->f_81, 32768))
				{
					func_347(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_352(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_139(uParam0->f_82, 8))
					{
						func_340(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_139(uParam0->f_82, 16))
					{
						func_340(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_139(uParam0->f_82, 32))
					{
						func_340(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_352(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_252(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_353(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_352(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_290(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_352(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_352(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_139(uParam0->f_81, 65536))
				{
					func_347(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_139(uParam0->f_81, 131072))
				{
					func_347(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_341(uParam0))
				{
					func_348(uParam0, Var0, func_350(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCA41A00932714525(uParam0->f_3))
					{
						func_247(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_139(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 8);
					func_144(&(uParam0->f_83), 16);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 16);
					func_144(&(uParam0->f_83), 32);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_144(&(uParam0->f_83), 64);
					}
					else
					{
						func_144(&(uParam0->f_83), 8);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 64);
					func_144(&(uParam0->f_83), 8);
					func_290(uParam0, 16, 0, 0);
				}
				func_352(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_158())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_351(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_348(uParam0, Var0, func_350(uParam0, 65));
					func_252(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_158())
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
					func_351(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_348(uParam0, Var0, func_350(uParam0, 66));
					func_252(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_158())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								func_352(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								func_352(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_353(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_352(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_290(uParam0, 16, 0, 0);
								func_252(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_351(uParam0, &Var0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_252(uParam0, 0, 0);
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
									func_227(&Var0);
									func_351(uParam0, &Var0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_252(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_351(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_225(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_352(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_139(uParam0->f_82, 1))
				{
					func_340(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_139(uParam0->f_82, 2))
				{
					func_340(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_139(uParam0->f_82, 4))
				{
					func_340(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_252(uParam0, 0, 0);
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
				func_353(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xCA41A00932714525(uParam0->f_3))
				{
					func_247(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_352(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_341(uParam0))
				{
					func_348(uParam0, Var0, func_350(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCA41A00932714525(uParam0->f_3))
					{
						func_247(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_339(uParam0, Var0, 8);
				}
				func_352(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_139(uParam0->f_83, 1024))
				{
					func_55(&(uParam0->f_83), 1024);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 2048))
				{
					func_55(&(uParam0->f_83), 2048);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_139(uParam0->f_83, 4096))
				{
					func_55(&(uParam0->f_83), 4096);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_227(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_139(uParam0->f_82, 1024))
				{
					func_340(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_144(&(uParam0->f_82), 2048);
				}
				else if (!func_139(uParam0->f_82, 2048))
				{
					func_340(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_352(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 52, 1, 0, 0);
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
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xCA41A00932714525(uParam0->f_3))
				{
					func_247(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_341(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_351(uParam0, &Var0, 0, 0, 8);
						func_225(uParam0, 52, 1, 0, 0);
						func_290(uParam0, 16, 0, 0);
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
						func_351(uParam0, &Var0, 0, 0, 8);
						func_290(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_353(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_352(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_290(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xA54996763FD89E65(unk_0x592069F95C314814()) >= 1)
				{
					func_251("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_139(uParam0->f_81, 262144))
				{
					func_347(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_139(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_347(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_347(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_352(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_139(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_338(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_139(uParam0->f_82, 134217728))
				{
					func_338(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_352(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 100:
				func_251("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_252(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_227(&Var0);
				}
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_227(&Var0);
				}
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_351(uParam0, &Var0, 0, 0, 8);
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
					func_227(&Var0);
				}
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_139(uParam0->f_82, 65536))
				{
					if (func_156(uParam0, 11) > uParam0->f_36)
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
						func_227(&Var0);
						func_344(Var0, uParam1);
						func_55(&(uParam0->f_82), 65536);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_139(uParam0->f_82, 131072))
				{
					if (func_156(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_227(&Var0);
						func_344(Var0, uParam1);
						func_55(&(uParam0->f_82), 131072);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_139(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_55(&(uParam0->f_82), 8388608);
				}
				else if (!func_139(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_55(&(uParam0->f_82), 16777216);
				}
				else if (!func_139(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_55(&(uParam0->f_82), 33554432);
				}
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_353(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_227(&Var0);
					func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_351(uParam0, &Var0, 0, 0, 8);
				}
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_344(Var0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_353(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_168(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_225(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_55(&(uParam0->f_81), 2097152);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_227(&Var0);
				func_344(Var0, uParam1);
				func_55(&(uParam0->f_81), 67108864);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_139(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_347(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xCA41A00932714525(uParam0->f_3))
					{
						func_247(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_225(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_139(uParam0->f_81, 268435456))
				{
					func_347(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_225(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_251("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_252(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_139(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_347(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xCA41A00932714525(uParam0->f_3))
						{
							func_247(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_347(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_225(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_251("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_252(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_139(uParam0->f_81, 16777216))
				{
					func_347(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 88:
				func_251("TAXI_TIEFLEE", 7500, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_139(uParam0->f_98, 536870912))
				{
					func_251("TAXI_OBJ_CYI_1B", 7500, 1);
					func_55(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_252(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_227(&Var0);
				func_351(uParam0, &Var0, 0, 0, 8);
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
				func_351(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_351(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
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
				func_351(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_351(uParam0, &Var0, 1, 0, 8);
				func_225(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_251("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_225(uParam0, 0, 0, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			}
	}
}

void func_338(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_55(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_227(&Param2);
	}
	func_321(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_339(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_139(uParam0->f_82, 64))
	{
		func_55(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_139(uParam0->f_82, 128))
	{
		func_55(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x0E29C61F26D96FDB(1, 3), 24);
	}
	func_168(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_290(uParam0, 16, 0, 0);
}

void func_340(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_55(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_227(&Param2);
		}
	}
	func_321(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_341(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_342(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_55(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_321(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_267(*uParam0, iVar1))
		{
			func_56(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_227(sParam2);
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

void func_344(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_345(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_55(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x9C88EB7B70229335(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_346(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_251("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_251("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_251("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_251("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_251("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_251("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_251("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_251("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_251("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_251("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_251("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_251("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_251("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_347(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_55(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_227(&Param2);
	}
	func_321(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_348(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_290(uParam0, 16, 0, 0);
	func_290(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xCA41A00932714525(uParam0->f_3))
	{
		unk_0x6DBB68211C17EAFC(uParam0->f_3, &cParam1, func_349(uParam0));
	}
}

char* func_349(var uParam0)
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

char* func_350(var uParam0, int iParam1)
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

int func_351(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_290(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_290(uParam0, 17, 0f, 1);
	}
	func_252(uParam0, iParam2, 0);
	return func_321(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_352(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_139(*uParam2, 2))
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
		if (func_139(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_139(*uParam2, 4))
		{
			if (!func_139(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_144(uParam2, 4096);
			}
		}
		else if (func_139(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_139(*uParam2, 512))
		{
			if (!func_139(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_144(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_139(*uParam2, 16))
		{
			if (!func_139(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_144(uParam2, 4096);
			}
		}
		else if (func_139(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_139(*uParam2, 64))
		{
			if (!func_139(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_144(uParam2, 4096);
			}
		}
		else if (func_139(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_139(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_139(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_139(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_139(*uParam2, 8192))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_139(*uParam2, 16384))
		{
			if (func_139(*uParam2, 4194304))
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
		if (func_139(*uParam2, 32768))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_139(*uParam2, 65536))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_139(*uParam2, 131072))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_139(*uParam2, 262144))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_139(*uParam2, 524288))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_139(*uParam2, 1048576))
		{
			if (func_139(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_139(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_139(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_139(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_139(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_139(*uParam2, 67108864))
		{
			if (func_139(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_139(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_139(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_139(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_139(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_353(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_267(*uParam0, iVar1))
		{
			func_56(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_227(sParam2);
				}
				else
				{
					func_227(sParam2);
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

void func_354(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x2EB37CDED0E516F3(*iParam0);
		unk_0xB47CC6339ADB0B67(*iParam0);
		*iParam0 = -1;
	}
}

int func_355(char* sParam0)
{
	if (!unk_0xD3115E7F7876D6E6(sParam0))
	{
		if (func_194(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(var uParam0)
{
	if (func_158())
	{
		return 1;
	}
	if (func_186(uParam0, 17))
	{
		return 1;
	}
	if (func_186(uParam0, 14))
	{
		return 1;
	}
	if (func_192(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_357(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_186(uParam0, 9));
}

void func_358(var uParam0)
{
	if (func_186(uParam0, 17))
	{
		if (!func_186(uParam0, 14))
		{
			if (!func_192(uParam0))
			{
				if (!func_158())
				{
					func_134(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_359(var uParam0)
{
	return uParam0->f_117;
}

void func_360(var uParam0)
{
	if (!func_166(uParam0))
	{
		if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
		{
		}
		func_198(uParam0, 1);
	}
	else if (func_186(uParam0, 14))
	{
		func_208(uParam0);
		func_199(uParam0, 0);
	}
}

void func_361(var uParam0, var uParam1, bool bParam2)
{
	if (!func_139(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x9C88EB7B70229335(&(uParam0->f_124)) && func_158())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_158())
				{
					StringCopy(&(uParam0->f_124), func_132(), 24);
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

void func_362(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x23E9113C762466ED(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_267(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_267(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_267(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_56(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x94E3E074F38DF86C();
							}
						}
						else
						{
							func_145(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_267(Local_343.f_1[iVar0 /*4*/], 4) && !func_267(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_56(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_320(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_363(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_186(uParam0, 27))
	{
		func_185(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_156(uParam0, 27) > 5f)
	{
		if (func_390(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_290(uParam0, 27, 0, 0);
			func_290(uParam0, 10, 0, 0);
			func_388(uParam0, &uVar0, uParam1);
		}
		func_385(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_364(uParam0);
	}
	if ((((!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()) && (unk_0x0F1BF24ED3B7ED40(*uParam0) && !unk_0xA6312B4FE4134130(*uParam0))) && (unk_0x0F1BF24ED3B7ED40(uParam0->f_1) && !unk_0xA6312B4FE4134130(uParam0->f_1))) && !unk_0x75342B3CD0FB5275()) && !func_158())
	{
		if (func_156(uParam0, 26) > 10f)
		{
			func_134(uParam0, 26, 0);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
		}
	}
	else if (func_186(uParam0, 26))
	{
		func_134(uParam0, 26, 0);
	}
	return 0;
}

void func_364(var uParam0)
{
	if (!func_384(uParam0->f_429))
	{
		uParam0->f_429 = func_383();
		func_374(&(uParam0->f_429), 0, 0, unk_0x0E29C61F26D96FDB(4, 7), 0, 0, 0);
	}
	else if (func_365(uParam0->f_429))
	{
		func_320(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_365(int iParam0)
{
	return func_366(func_383(), iParam0);
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_384(iParam1) || !func_384(iParam0))
	{
		return 1;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_368(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_369(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_370(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_371(int iParam0)
{
	return iParam0 & 15;
}

var func_372(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_373(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_373(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_374(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_372(*uParam0);
	iVar1 = func_371(*uParam0);
	iVar2 = func_370(*uParam0);
	iVar3 = func_369(*uParam0);
	iVar4 = func_368(*uParam0);
	iVar5 = func_367(*uParam0);
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
	iVar6 = func_382(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_382(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_375(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_375(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_381(uParam0, iParam1);
	func_380(uParam0, iParam2);
	func_379(uParam0, iParam3);
	func_378(uParam0, iParam5);
	func_377(uParam0, iParam4);
	func_376(uParam0, iParam6);
}

void func_376(var uParam0, int iParam1)
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

void func_377(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_371(*uParam0);
	iVar1 = func_372(*uParam0);
	if (iParam1 < 1 || iParam1 > func_382(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_378(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_379(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_380(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_382(int iParam0, int iParam1)
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

int func_383()
{
	var uVar0;
	
	func_381(&uVar0, unk_0x0956E4296D9CC40A());
	func_380(&uVar0, unk_0x32883EAC7DC86C40());
	func_379(&uVar0, unk_0x80BC37C67CB292E5());
	func_377(&uVar0, unk_0x202B089E6328ABFA());
	func_378(&uVar0, unk_0xCD8338A83E1BCC14());
	func_376(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

int func_384(int iParam0)
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
	iVar0 = func_367(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_368(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_369(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_372(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_371(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_370(iParam0);
	if (iVar5 < 1 || iVar5 > func_382(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_385(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_387()) && !func_166(uParam0)) || ((uParam0->f_411 != 9 && func_257(uParam0, 1)) && !func_166(uParam0)))
		{
			uVar0 = func_386(uParam0->f_4);
			unk_0x47C2619E72CEAA4F(&uVar0);
			uParam0->f_4 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			unk_0xF0F77C99098F999B(uParam0->f_4, 1, 0);
			func_208(uParam0);
			func_199(uParam0, 0);
		}
	}
}

var func_386(var uParam0)
{
	return uParam0;
}

int func_387()
{
	int iVar0;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) == unk_0x17B5CC8A8615737D())
				{
					if (unk_0x5AF6E4F22F4B49C3(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_389(uParam0, 0, 1))
			{
				func_320(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_389(uParam0, 0, 4))
			{
				func_320(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_389(uParam0, 0, 8))
			{
				func_320(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_389(uParam0, 1, 1))
			{
				func_320(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_389(uParam0, 0, 1))
			{
				func_320(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_139(*uParam2, 2) && func_129(uParam0))
			{
				func_320(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_389(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
	{
		if (!unk_0xF6563E19EDE84B8C(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_225(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_225(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_390(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x17B5CC8A8615737D();
	if (!unk_0xA929B2923D14E2F8(iVar0, 0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (!func_139(*uParam2, 1))
		{
			if (func_396(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_139(*uParam2, 2))
		{
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_139(*uParam2, 4))
		{
			if (func_394(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_139(*uParam2, 8))
		{
			if (func_393(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_139(*uParam2, 128);
		if (bParam4)
		{
			if (func_391(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_139(*uParam2, 16))
		{
			if (func_391(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x23E9113C762466ED(iParam0))
	{
		if (iParam7 && unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0xB5DF060B138CD2EA(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0xB5DF060B138CD2EA(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(uVar0, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(uVar1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0x4FF557C7B233F003(iParam0))
			{
				if (unk_0xFFE01300722A85E9(iParam0) == unk_0x17B5CC8A8615737D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x1C34CE8087E3897C(iParam0, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xB95F3BAC01F95DB8(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x8E36A9305D573CF7(iParam0))
		{
			return 1;
		}
	}
	if (func_392(unk_0x17B5CC8A8615737D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x7F4AE93855973529(iParam0) && func_318(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), unk_0x60604E51E30D25B8(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iParam0))
		{
			return 1;
		}
		if (!unk_0xA929B2923D14E2F8(uParam1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(iParam1, 1)) < 2.5f)
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x758839786F3B98F0(uParam0, 4))
	{
		if (unk_0x1B30FA4AAC96F398(uParam0) && !unk_0xDC93048D895B2146(iParam0))
		{
			if (unk_0x1C34CE8087E3897C(uParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	if (unk_0x579A94EB2BF9398F(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x5193E99B6917C701(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x758839786F3B98F0(uParam0, 2))
	{
		if (unk_0x1B30FA4AAC96F398(uParam0))
		{
			if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xFD0FE723227D5AB6(unk_0xB80CAAF3D65FBC1F(iParam1), 0))
			{
				iVar3 = unk_0x60604E51E30D25B8(unk_0xB80CAAF3D65FBC1F(iParam1), 0);
			}
			if (unk_0x95E290AF7BCBF364(iParam0) || func_395(iVar3))
			{
				if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x3BA3AD8AC9469C63((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x17206B315923243C(iParam0, -1, 0) != 0)
			{
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_149(unk_0x17B5CC8A8615737D(), iParam0, 1) < 40f)
						{
							if (unk_0x7940476800F126AE(unk_0xBE369BE1BC57A796(), &uVar1))
							{
								if ((unk_0x3983CCB0D958159C(uVar1) && unk_0xBFC71CD990E479DB(iVar1) == iParam0) || (unk_0x80E9CA64E9C8E070(iVar1) && unk_0xB80CAAF3D65FBC1F(iVar1) == unk_0x17206B315923243C(iParam0, -1, 0)))
								{
									if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x79888727131C6854(0, 24)) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x79888727131C6854(0, 69)))
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

int func_396(int iParam0, var uParam1)
{
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
		{
			if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, unk_0x17B5CC8A8615737D(), 90f))
				{
					if (func_318(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x94E3E074F38DF86C();
						}
						else if ((unk_0x94E3E074F38DF86C() - uParam1->f_1) > uParam1->f_3)
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

void func_397(var uParam0)
{
	if (!func_139(uParam0->f_98, 2))
	{
		if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
		{
			if (func_152(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x0668B21A0C3A4821(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_55(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_398()
{
	func_399(&Local_410);
	func_416();
}

void func_399(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_417(2);
	}
}

int func_400(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_158() && func_156(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xA929B2923D14E2F8(uParam0->f_3, 0))
		{
			if (unk_0x45CD66F0A131E554(uParam0->f_4, 0))
			{
				if (unk_0x2315BB1606BC3DC3(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_54(uParam0) == 0 || func_267(uParam0->f_85, 32))
					{
						if (!unk_0x71427D1CF2654C68(uParam0->f_4))
						{
							func_323(uParam0, 4160, 0);
						}
						else
						{
							func_323(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_323(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_323(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_323(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x94E3E074F38DF86C() % 1000) < 50)
	{
	}
	return 0;
}

void func_401(var uParam0)
{
	if (unk_0xA3794949321E107C(uParam0->f_8))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_8));
	}
	if (unk_0xA3794949321E107C(uParam0->f_9))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_9));
	}
	if (unk_0xA3794949321E107C(uParam0->f_10))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_10));
	}
}

int func_402(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_403()
{
	int iVar0;
	
	Local_410.f_23 = { -1583.59f, 169.2662f, 57.6205f };
	Local_410.f_33 = 116f;
	Local_410.f_26 = { 49.0898f, -1178.923f, 28.2091f };
	Local_410.f_34 = 185.975f;
	func_405(&Local_410, 6);
	Local_410.f_410 = 0;
	func_404(&Local_410, 3, 6);
	iVar0 = func_3(unk_0x17B5CC8A8615737D());
	if (iVar0 == 0)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1M_4", 24);
	}
	else if (iVar0 == 2)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1T_4", 24);
	}
	else if (iVar0 == 1)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1F_7", 24);
	}
}

void func_404(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_405(var uParam0, int iParam1)
{
	func_415(1);
	func_210();
	func_6(&(uParam0->f_244));
	func_414(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_139(Global_101700.f_18056, 4))
	{
		func_55(&(Global_101700.f_18056), 4);
	}
	func_409(uParam0);
	func_407(uParam0);
	unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	uParam0->f_102 = (func_406(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xA73AE78D2491E6E1("TAXI", 2);
}

int func_406(int iParam0)
{
	return Global_101700.f_18056.f_39[iParam0];
}

void func_407(var uParam0)
{
	switch (func_54(uParam0))
	{
		case 0:
			func_408(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_408(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_408(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_408(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_408(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_408(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_408(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_408(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_408(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_408(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_408(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_409(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_413(uParam0, 3);
			func_412(uParam0, 14);
			break;
		
		case 1:
			func_413(uParam0, 14);
			func_412(uParam0, 8);
			break;
		
		case 2:
			func_413(uParam0, 8);
			func_412(uParam0, 7);
			break;
		
		case 3:
			func_413(uParam0, 15);
			func_412(uParam0, 6);
			break;
		
		case 4:
			func_413(uParam0, 0);
			func_412(uParam0, 3);
			break;
		
		case 5:
			func_413(uParam0, 6);
			func_412(uParam0, 7);
			break;
		
		case 6:
			func_413(uParam0, 8);
			func_412(uParam0, 15);
			break;
		
		case 7:
			func_413(uParam0, 8);
			func_412(uParam0, 14);
			break;
		
		case 8:
			func_413(uParam0, 7);
			func_412(uParam0, 15);
			break;
		
		case 9:
			func_413(uParam0, unk_0x0E29C61F26D96FDB(0, 17));
			iVar0 = func_411((uParam0->f_418.f_2 + unk_0x0E29C61F26D96FDB(1, 17)), 0, 16);
			func_412(uParam0, iVar0);
			func_410(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_410(var uParam0)
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

int func_411(int iParam0, int iParam1, int iParam2)
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

void func_412(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_413(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_414(var uParam0)
{
	uParam0->f_2 = unk_0x17B5CC8A8615737D();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_37() };
	uParam0->f_17 = { func_37() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_134(uParam0, 32, 0);
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100756, unk_0x6AF6B39BFDB53CB5(), 24);
		Global_100750 = 1;
	}
	else
	{
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

void func_416()
{
	func_217(&uLocal_1036, Local_874, 100f, 1);
	unk_0x01ADBE1EAD155D08("taxi_oj_gyn");
	unk_0x59D2C41577DCED43(1);
	func_229();
	func_135();
	unk_0x55718AC3667F2A7D(Local_892, 5f, joaat("prop_skid_chair_02"), 0);
	unk_0x55718AC3667F2A7D(Local_892, 5f, joaat("prop_rub_couch03"), 0);
	unk_0xB8CAC5F3774894A1("TAXI_GOT_U_NOW");
	unk_0x921053BAF754303D();
}

void func_417(int iParam0)
{
	Global_100412.f_22 = iParam0;
}

bool func_418(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

