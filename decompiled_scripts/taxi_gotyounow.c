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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
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
	int iLocal_839 = 0;
	struct<3> Local_840[1];
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	bool bLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	struct<3> Local_873 = { 0, 0, 0 } ;
	struct<3> Local_876 = { 0, 0, 0 } ;
	struct<3> Local_879 = { 0, 0, 0 } ;
	struct<3> Local_882 = { 0, 0, 0 } ;
	struct<3> Local_885 = { 0, 0, 0 } ;
	struct<3> Local_888 = { 0, 0, 0 } ;
	struct<3> Local_891 = { 0, 0, 0 } ;
	float fLocal_894 = 0f;
	char cLocal_895[24] = "";
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	struct<6> Local_901 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_907[64] = "";
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	char cLocal_923[64] = "";
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	char cLocal_939[64] = "";
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	char cLocal_955[64] = "";
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	char cLocal_971[64] = "";
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	char cLocal_987[64] = "";
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	char cLocal_1003[64] = "";
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	char cLocal_1019[64] = "";
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	bool bLocal_1037 = 0;
	struct<28> Local_1038 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 5;
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
	var uLocal_1112 = 1097859072;
	var uLocal_1113 = 1500;
	var uLocal_1114 = 45;
	var uLocal_1115 = 1103626240;
	var uLocal_1116 = 5;
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
	int iLocal_1127 = 0;
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
	uLocal_76 = unk_0xADC39FDF03F9D8CA();
	uLocal_77 = unk_0x138F9DA1F3442BA3();
	Local_82 = { 500f, 500f, 500f };
	iLocal_839 = joaat("g_m_y_mexgoon_03");
	iLocal_851 = 1;
	iLocal_852 = -1;
	iLocal_857 = -1;
	bLocal_858 = true;
	Local_867 = { -1612.235f, 189.1934f, 58.9435f };
	Local_870 = { -1612.457f, 184.5166f, 58.7712f };
	Local_873 = { 32.60266f, -1243.837f, 28.45076f };
	Local_876 = { 33.2419f, -1234.385f, 28.2953f };
	Local_879 = { -628.1456f, -760.3765f, 25.106f };
	Local_882 = { -584.7739f, -779.0701f, 24.0178f };
	Local_885 = { 47.56787f, -1234.685f, 28.29707f };
	Local_888 = { -21.32591f, -1235.549f, 32.47597f };
	Local_891 = { 37.51834f, -1239.021f, 28.40267f };
	fLocal_894 = 33.75f;
	StringCopy(&cLocal_907, "amb@world_human_hang_out_street@male_a@enter", 64);
	StringCopy(&cLocal_923, "amb@world_human_hang_out_street@male_a@base", 64);
	StringCopy(&cLocal_939, "amb@world_human_hang_out_street@male_a@idle_a", 64);
	StringCopy(&cLocal_955, "amb@world_human_hang_out_street@male_a@exit", 64);
	StringCopy(&cLocal_971, "amb@world_human_hang_out_street@female_arm_side@enter", 64);
	StringCopy(&cLocal_987, "amb@world_human_hang_out_street@female_arm_side@base", 64);
	StringCopy(&cLocal_1003, "amb@world_human_hang_out_street@female_arm_side@idle_a", 64);
	StringCopy(&cLocal_1019, "amb@world_human_hang_out_street@female_arm_side@exit", 64);
	if (func_412(Local_876, 0f, 0f, 0f))
	{
	}
	if (unk_0x7547D7CF93115D6D(67))
	{
		func_411(2);
		func_410();
	}
	unk_0xA81035D922E28F10(1);
	func_397();
	while (true)
	{
		if (unk_0xFD68187442384158(Local_409.f_2))
		{
			func_8();
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
	uParam0->f_2 = unk_0x507DA4994C3D8EBD();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x507DA4994C3D8EBD());
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
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
	
	iVar0 = func_3(unk_0x507DA4994C3D8EBD());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
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
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_396(&Local_409))
	{
		func_395(&Local_409);
		if (func_394(&Local_409, 0))
		{
			func_392();
		}
	}
	else
	{
		func_391(&Local_409);
		if ((Local_409.f_410 >= 5 && Local_409.f_410 <= 9) || Local_409.f_410 >= 22)
		{
			func_357(&Local_409, &uLocal_1110);
			func_356(&Local_409);
		}
		func_355(&Local_409, &uLocal_854, 0);
		if (Local_409.f_410 > 5 && !unk_0x61D8FEAF64881CDA(iLocal_853, 0))
		{
			Local_409.f_17 = { Local_876 };
			unk_0x3DBE2A7AF9E71C82(&iLocal_853, 0);
		}
		if (Local_409.f_410 >= 5 && Local_409.f_410 < 10)
		{
			func_354(&Local_409);
		}
		if (Local_409.f_410 >= 2)
		{
			if (!func_353(&Local_409))
			{
				func_322();
			}
			else
			{
				func_314(&Local_409, "Taxi Not Driveable", func_321(&Local_409));
			}
		}
		if (Local_409.f_410 >= 12 && Local_409.f_410 < 27)
		{
			if (unk_0xFD68187442384158(iLocal_850))
			{
				if (unk_0xE5D56342B0FF1D0D(iLocal_850))
				{
					func_314(&Local_409, "Player killed his new booty call", 9);
				}
			}
			if (func_313(&Local_409, iLocal_849, 1))
			{
				if (!unk_0xE5D56342B0FF1D0D(iLocal_849))
				{
					unk_0x9CC0A0DFBB83918C(iLocal_849, 1, 0);
					func_314(&Local_409, "Player exploded the broke down car", 9);
				}
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_850))
			{
				if (func_312(iLocal_850, 1) > 50f)
				{
					func_314(&Local_409, "Player abandoned the girl", 9);
				}
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_288(&Local_409, 0, 1);
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_285();
				func_284(&Local_409, 16, 4f, 0);
				func_282(&Local_409, Local_867, Local_870, "TaxiAlonzo", iLocal_839, 196.3547f, 15f);
				func_281(&Local_409);
				func_280(&Local_409, 1);
				break;
			
			case 1:
				if (func_278())
				{
					func_277();
					func_276(&(Local_840[0 /*3*/]), "TAXI_SC_KO", 100);
					func_275(&Local_409, &Local_840);
					func_274(&Local_409);
					func_254();
					Local_409.f_14 = { Local_867 };
					func_280(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_247(&Local_409, 1))
				{
					if (!unk_0xE5D56342B0FF1D0D(Local_409.f_3))
					{
						unk_0xFBF796BC19E6FC23(Local_409.f_3, 200);
						unk_0xF2685765B7BEBCB0(Local_409.f_3, 0, 1, 0, 0);
						unk_0xF2685765B7BEBCB0(Local_409.f_3, 3, 1, 1, 0);
						unk_0xF2685765B7BEBCB0(Local_409.f_3, 4, 0, 1, 0);
						unk_0xF2685765B7BEBCB0(Local_409.f_3, 8, 0, 1, 0);
					}
					func_246(&Local_409, 1, 0);
					func_280(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_225(&Local_409, 0, 1109393408))
				{
					func_280(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_224(&Local_409))
				{
					func_223();
					func_219(&Local_409, 9, 1, 0, 0);
					func_218(&Local_409);
					func_217();
					func_280(&Local_409, 9);
				}
				if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
				{
					if (!unk_0x53170344050F2301(Local_409.f_2, Local_409.f_4, 0))
					{
						func_215(&Local_409);
						func_280(&Local_409, 9);
					}
				}
				break;
			
			case 9:
				if (!iLocal_864)
				{
					if ((func_214(&Local_409, 0) || func_214(&Local_409, 1)) || func_213(&Local_409, 1))
					{
						iLocal_864 = 1;
					}
				}
				func_210();
				func_205();
				if (func_175(&Local_409, 9f, 1097859072, 1117782016))
				{
					unk_0xA0A65B537B1F11EC(&(Local_409.f_9));
					unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 0, 0);
					unk_0xF83CD415BF55C455(0);
					unk_0xFD19596BB0697987(func_174(unk_0xAF65E5A58BE87D95()), 50f, 0);
					unk_0x7FEDD088E489CE41(Local_409.f_3, 42, 1);
					func_280(&Local_409, 10);
				}
				if (iLocal_852 >= 2)
				{
					if (!iLocal_862 && ((((((unk_0x9F94F2CFDCA78C55(iLocal_850) || unk_0xE5D56342B0FF1D0D(iLocal_849)) || (!unk_0xE5D56342B0FF1D0D(iLocal_850) && unk_0x087F7B968CB47182(iLocal_850))) || (!unk_0xE5D56342B0FF1D0D(iLocal_849) && unk_0x087F7B968CB47182(iLocal_849))) || (!unk_0xE5D56342B0FF1D0D(iLocal_850) && unk_0xEA4A2F1853D39672(iLocal_850, 0, 2))) || (!unk_0xE5D56342B0FF1D0D(iLocal_849) && unk_0xEA4A2F1853D39672(iLocal_849, 0, 2))) || ((!unk_0xE5D56342B0FF1D0D(iLocal_850) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && func_312(iLocal_850, 1) < 1f)))
					{
						if ((!unk_0xE5D56342B0FF1D0D(iLocal_849) && unk_0x087F7B968CB47182(iLocal_849)) || (!unk_0xE5D56342B0FF1D0D(iLocal_849) && unk_0xEA4A2F1853D39672(iLocal_849, 0, 2)))
						{
							unk_0x9CC0A0DFBB83918C(iLocal_849, 1, 0);
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_850))
						{
							unk_0xA859D289EEB2D72A(iLocal_850, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
							unk_0xA1E4BA3B17C6D931(iLocal_850, 1);
						}
						if ((!unk_0xE5D56342B0FF1D0D(iLocal_850) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && func_312(iLocal_850, 1) < 1f)
						{
							unk_0x9F77DFFC61FCB68C(&uLocal_847);
							unk_0xB5DC017AFD430D1B(&uLocal_847);
							unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
							unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_847);
							unk_0x8229311A391A4EC6(iLocal_850, uLocal_847);
							unk_0xA1E4BA3B17C6D931(iLocal_850, 1);
						}
						func_314(&Local_409, "Aggro Heard Shot", 8);
						iLocal_862 = 1;
					}
				}
				break;
			
			case 10:
				if (func_156())
				{
					unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
					uLocal_1109 = func_155(Local_409.f_3, 0, 0);
					func_284(&Local_409, 0, 0, 0);
					if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
					{
						unk_0xCEBD1B99CF343672(iLocal_850);
						unk_0xDE75E9DE5B6221E1(iLocal_850, unk_0x507DA4994C3D8EBD(), 0);
						unk_0x3E16CE93BAE616EE(iLocal_850, 115);
					}
					iLocal_855 = unk_0x5D422B4764FA2ACA(unk_0x507DA4994C3D8EBD());
					iLocal_856 = unk_0x5D422B4764FA2ACA(Local_409.f_3);
					unk_0xD56AC40382654643("TAXI_GOT_U_NOW");
					func_280(&Local_409, 11);
				}
				break;
			
			case 11:
				unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 11);
				if (unk_0xE5D56342B0FF1D0D(Local_409.f_3) || ((!unk_0xE5D56342B0FF1D0D(Local_409.f_3) && unk_0x1BA961C8CF14F399(Local_409.f_3)) && func_154(Local_409.f_3, Local_876, 1) > 25f))
				{
					unk_0xAD91AFD429036CAB("TAXI_OBJ_GYN");
					if (unk_0xD361727124133DF3(Local_409.f_9))
					{
						unk_0xA0A65B537B1F11EC(&(Local_409.f_9));
					}
					if (unk_0xD361727124133DF3(Local_409.f_8))
					{
						unk_0xA0A65B537B1F11EC(&(Local_409.f_8));
					}
					if (unk_0xD361727124133DF3(uLocal_1109))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_1109);
					}
					if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
					{
						if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
						{
							unk_0xAB5C0FE0C680BC7F("TAXI_GOT_U_NOW");
							unk_0xAE0CD3052D6ED1ED(Local_409.f_2, &uLocal_848, 1);
							if (func_153(&uLocal_848) || !unk_0xE5D56342B0FF1D0D(Local_409.f_3))
							{
								bLocal_858 = true;
								unk_0x9F77DFFC61FCB68C(&uLocal_847);
								unk_0xB5DC017AFD430D1B(&uLocal_847);
								unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0x6EE8A5CF9AC75F12(uLocal_847);
								unk_0x8229311A391A4EC6(iLocal_850, uLocal_847);
								func_219(&Local_409, 126, 1, 0, 0);
								Local_409.f_17 = { Local_879 };
								func_284(&Local_409, 19, 0, 0);
								func_280(&Local_409, 12);
							}
							else
							{
								bLocal_858 = false;
								unk_0xA859D289EEB2D72A(iLocal_850, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
								unk_0xA1E4BA3B17C6D931(iLocal_850, 1);
								func_219(&Local_409, 127, 1, 0, 1);
								func_280(&Local_409, 27);
							}
						}
					}
					else
					{
						func_280(&Local_409, 27);
					}
				}
				else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_885, Local_888, fLocal_894, 0, 1, 0))
				{
					if ((unk_0x5D422B4764FA2ACA(Local_409.f_3) == unk_0xD7873D6F1741A9A4(Local_409.f_3) && !func_152()) && !iLocal_860)
					{
						func_219(&Local_409, 123, 1, 0, 0);
						iLocal_860 = 1;
					}
					if (!iLocal_859 && func_150(&Local_409, 0) > 1.5f)
					{
						func_149(&(Local_409.f_3));
						unk_0x7FEDD088E489CE41(Local_409.f_3, 314, 0);
						iLocal_859 = 1;
					}
					if (func_150(&Local_409, 0) > 10f)
					{
						if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
						{
							unk_0x8E759206778E571F(iLocal_850, unk_0x507DA4994C3D8EBD(), -1, 2048, 4);
							unk_0x9F77DFFC61FCB68C(&uLocal_847);
							unk_0xB5DC017AFD430D1B(&uLocal_847);
							unk_0xEC0A546609840086(0, "misscommon@response", "give_me_a_break", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							unk_0xEC0A546609840086(0, "misscommon@response", "damn", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_847);
							unk_0x8229311A391A4EC6(iLocal_850, uLocal_847);
							if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
							{
								iLocal_855 = (iLocal_855 - unk_0x5D422B4764FA2ACA(unk_0x507DA4994C3D8EBD()));
								iLocal_856 = (iLocal_856 - unk_0x5D422B4764FA2ACA(Local_409.f_3));
								if (iLocal_855 < iLocal_856)
								{
									func_219(&Local_409, 125, 1, 0, 0);
								}
								else
								{
									func_219(&Local_409, 124, 1, 0, 0);
								}
								iLocal_855 = unk_0x5D422B4764FA2ACA(unk_0x507DA4994C3D8EBD());
								iLocal_856 = unk_0x5D422B4764FA2ACA(Local_409.f_3);
							}
						}
						else if (!iLocal_861)
						{
							func_147();
							unk_0x3E16CE93BAE616EE(Local_409.f_3, unk_0xD7873D6F1741A9A4(Local_409.f_3));
							func_219(&Local_409, 128, 1, 0, 0);
							iLocal_861 = 1;
							bLocal_858 = false;
						}
						func_284(&Local_409, 0, 0, 0);
					}
					else if ((unk_0xF976C624234A4AA8() % 1000) < 50)
					{
					}
				}
				else if (!unk_0x1BA961C8CF14F399(Local_409.f_3))
				{
					if (iLocal_859)
					{
						unk_0xCEBD1B99CF343672(Local_409.f_3);
						unk_0x9F77DFFC61FCB68C(&uLocal_847);
						unk_0xB5DC017AFD430D1B(&uLocal_847);
						if (unk_0x9F94F2CFDCA78C55(iLocal_850))
						{
							unk_0x804E88DCA0C40FF8(0, unk_0xBF1B13057E5119A4(iLocal_850, 0), 3f, 20000, 1193033728, 1056964608);
							unk_0x211FA3DF75B31A84(0, unk_0xBF1B13057E5119A4(iLocal_850, 0), 0);
						}
						else
						{
							unk_0xA3C87095904A382C(0, iLocal_850, 20000, 3.5f, 1f, 1073741824, 0);
							unk_0xDE75E9DE5B6221E1(0, iLocal_850, 0);
						}
						unk_0x6EE8A5CF9AC75F12(uLocal_847);
						unk_0x8229311A391A4EC6(Local_409.f_3, uLocal_847);
						if (!unk_0x9F94F2CFDCA78C55(iLocal_850))
						{
							unk_0xDE75E9DE5B6221E1(iLocal_850, Local_409.f_3, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_859 = 0;
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_850))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_409.f_3, 1), unk_0xBF1B13057E5119A4(iLocal_850, 0)) < 25f && (unk_0xEC043AB2FEE0E94F(Local_409.f_3, 264387021) != 1 || unk_0xEC043AB2FEE0E94F(Local_409.f_3, 264387021) != 0))
						{
							unk_0xA697975DB03467E3(iLocal_850, Local_409.f_3, 16, 0f, 0f, 0f, 0f, 0f);
							unk_0xA697975DB03467E3(Local_409.f_3, iLocal_850, 16, 0f, 0f, 0f, 0f, 0f);
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 30000)
					{
						func_314(&Local_409, "Player abandoned passenger", 8);
					}
				}
				if (func_145(Local_409.f_17, 1) > 250f && unk_0xD361727124133DF3(uLocal_1109))
				{
					func_314(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 12:
				if (!func_152() && func_150(&Local_409, 19) > 2f)
				{
					Local_409.f_8 = func_144(iLocal_850, 0, 0);
					unk_0x2B271F66198227B7(Local_409.f_8, "TX_BLIP_GYN_TG");
					func_219(&Local_409, 11, 1, 0, 0);
					unk_0xF83CD415BF55C455(1);
					func_284(&Local_409, 19, 0, 0);
					func_280(&Local_409, 18);
				}
				break;
			
			case 18:
				if (func_143(unk_0x507DA4994C3D8EBD(), iLocal_850, 1) < 3f && !func_142())
				{
					func_140();
					Local_409.f_115 = 1;
					func_138(&(Local_409.f_81), 67108864);
					func_280(&Local_409, 19);
				}
				else if (!unk_0x9F94F2CFDCA78C55(iLocal_850) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					unk_0xDE75E9DE5B6221E1(iLocal_850, unk_0x507DA4994C3D8EBD(), 0);
				}
				break;
			
			case 19:
				if (func_134())
				{
					if (unk_0xD361727124133DF3(Local_409.f_8))
					{
						unk_0xA0A65B537B1F11EC(&(Local_409.f_8));
					}
					unk_0xCA4DD92F1F2931F3(&(Local_409.f_3));
					func_280(&Local_409, 21);
				}
				break;
			
			case 21:
				if (!Local_409.f_141 && !func_412(Local_409.f_29, Local_882))
				{
					if (unk_0x2A24448FF232F834(iLocal_850, 0) && !func_152())
					{
						Local_409.f_3 = iLocal_850;
						Local_409.f_29 = { Local_882 };
						Local_409.f_17 = { Local_879 };
						if (func_133(Local_409.f_98, 4))
						{
							func_138(&(Local_409.f_98), 4);
						}
						if (func_133(Local_409.f_98, 8))
						{
							func_138(&(Local_409.f_98), 8);
						}
						Local_409.f_86 = 0;
						func_219(&Local_409, 130, 1, 0, 0);
					}
				}
				else if (Local_409.f_141)
				{
					Local_409.f_9 = func_131(Local_879, 1);
					unk_0x2B271F66198227B7(Local_409.f_9, "TX_BLIP_GYN_GF");
					func_129();
					func_128(&Local_409, 2, 0);
					func_127(&Local_1038, 5, -1);
					func_280(&Local_409, 22);
				}
				break;
			
			case 22:
				if (func_175(&Local_409, 1086324736, 1097859072, 1117782016))
				{
					unk_0xA0A65B537B1F11EC(&(Local_409.f_9));
					func_125(&uLocal_1068);
					func_124(&Local_1038, -1, 1);
					func_219(&Local_409, 132, 1, 0, 0);
					func_280(&Local_409, 27);
				}
				break;
			
			case 27:
				if ((func_114(&Local_409, 1) || func_113(&iLocal_850, 1805844857)) || unk_0xE5D56342B0FF1D0D(iLocal_850))
				{
					if (bLocal_858)
					{
						unk_0x9F77DFFC61FCB68C(&uLocal_847);
						unk_0xB5DC017AFD430D1B(&uLocal_847);
						unk_0x3F07E364A21EBC20(0, -612.6458f, -777.7148f, 24.27f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x3F07E364A21EBC20(0, -608.3197f, -775.0622f, 24.0547f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x3F07E364A21EBC20(0, -589.0419f, -775.1888f, 24.0172f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x3F07E364A21EBC20(0, Local_409.f_29, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x371C90C63129A983(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x6EE8A5CF9AC75F12(uLocal_847);
						unk_0x8229311A391A4EC6(iLocal_850, uLocal_847);
						unk_0xA1E4BA3B17C6D931(iLocal_850, 1);
						func_112(&Local_409, 0);
						func_97(8, 1, -1);
					}
					func_95(&Local_409);
					func_94();
					func_280(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_67(&Local_409, &uLocal_1117))
				{
					func_9(1, &Local_409, 1);
					func_280(&Local_409, 30);
				}
				break;
			
			case 30:
				func_410();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_44(uParam1);
		if (!unk_0x9F94F2CFDCA78C55(uParam1->f_3))
		{
			unk_0x7FEDD088E489CE41(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_42(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)
{
	func_395(uParam0);
	if (func_152())
	{
		func_140();
	}
	func_40();
	unk_0x3DF5706BBD8F5B5B();
	unk_0x4A4C1A1BC79EFE8F(1);
	func_37(0);
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		unk_0xC158AF2A8304483D(uParam0->f_4, 0);
		unk_0x8190B3B1300AE293(uParam0->f_4);
		unk_0xCD79646FD263CD43(uParam0->f_4);
	}
	func_35(uParam0->f_14, 1);
	func_33(uParam0->f_14, 1, 1114636288);
	func_32(&(uParam0->f_244), 3);
	unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 1);
	if (func_29())
	{
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
	}
	unk_0x8801332725A366AF(1);
	func_20(0, 1, 1, 0);
	unk_0x255259988FBEFACC(1);
	unk_0x330ABD0F05E764BB(1);
	if (unk_0x17D71902CA06091B(*uParam0))
	{
		unk_0x44151B6071157DDD(*uParam0, 0);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x2E98407DE29E0D76(1);
	}
	if (func_133(Global_97173.f_17318, 4))
	{
		func_138(&(Global_97173.f_17318), 4);
		unk_0x941F924D5E9C2140(func_19(), 0);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0xA878656BC39BBC51("gestures@m@standing@casual");
	unk_0xA878656BC39BBC51("oddjobs@taxi@");
	unk_0xA878656BC39BBC51("oddjobs@towingcome_here");
	if (unk_0x0E4B4CA22DBCFA69())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0xA54B09EB6B49FA94(unk_0x4D82797EF5035A9F()))
	{
		unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
	}
	unk_0x1B7A159B4B9FCB71(unk_0xF2DB717A73826179((func_11(&uLocal_89) * 1000f)), 12, 0);
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
			return (func_12() - uParam0->f_1);
		}
	}
	return 0f;
}

float func_12()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

void func_15(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0xD504011E20D63A81(&uVar0))
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
	unk_0xFE6EA8CF0B9F002F(uParam0->f_51[0]);
}

void func_18(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0->f_3))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
		{
			if (!unk_0x2A24448FF232F834(uParam0->f_3, 0))
			{
				unk_0xBC8F72DD87BC210F(uParam0->f_3);
			}
			unk_0x2DC5B31EBB810396(uParam0->f_3, 0);
			unk_0xCA4EA7D4F6DCCD43(255, uParam0->f_413, joaat("player"));
			if (unk_0x22605DE2E6933CF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xB7672D87B547201C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x22605DE2E6933CF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xB7672D87B547201C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x22605DE2E6933CF2(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xB7672D87B547201C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x22605DE2E6933CF2(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xB7672D87B547201C(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xCA4DD92F1F2931F3(&(uParam0->f_3));
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
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_28(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_27())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_26(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_28(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_26(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_21(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_21(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_24(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312736;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_27()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_29()
{
	if (!func_31() && !func_30())
	{
		if (!unk_0x9CEB43D7FF40BE4A(unk_0x4D82797EF5035A9F()))
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (unk_0x25531002BCF0D968(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (unk_0x25531002BCF0D968(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_33(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_34(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_34(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xE0988F7BD7BD3889(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x9A76FCB3181D8AAB(Var0, Var3, 1);
		unk_0x8956FD662264693F();
	}
}

Vector3 func_34(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_35(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_412(Param0, func_36()))
	{
		Var0 = { func_34(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_34(Param0, 1f, 30f, 30f, 10f) };
		unk_0xC198E0954F22A27D(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_36()
{
	struct<3> Var0;
	
	return Var0;
}

void func_37(int iParam0)
{
	if (Global_14551)
	{
		func_38(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_27())
	{
		Global_14393.f_1 = 3;
	}
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_40()
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
					func_41(Global_87122[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_41(int iParam0, bool bParam1)
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

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_97173.f_17318.f_22[0]++;
			func_43("Fares Completed ++ = ", Global_97173.f_17318.f_22[0]);
			break;
		
		case 1:
			Global_97173.f_17318.f_22[1]++;
			func_43("Fares Failed ++ = ", Global_97173.f_17318.f_22[1]);
			break;
		
		case 2:
			Global_97173.f_17318.f_22[2]++;
			func_43("Fares Accepted ++ ", Global_97173.f_17318.f_22[2]);
			break;
		
		case 3:
			Global_97173.f_17318.f_22[3]++;
			func_43("Fares Expired ++ ", Global_97173.f_17318.f_22[3]);
			break;
		
		case 13:
			Global_97173.f_17318.f_22[13]++;
			func_43("Passengers run ++ = ", Global_97173.f_17318.f_22[13]);
			break;
		
		case 14:
			Global_97173.f_17318.f_22[14]++;
			func_43("Passenger Forced to Pay ++ = ", Global_97173.f_17318.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_97173.f_17318.f_22[4])
				{
					Global_97173.f_17318.f_22[4] = iParam1;
					func_43("This distance ", iParam1);
					func_43(" is longer than current best", Global_97173.f_17318.f_22[4]);
				}
				else
				{
					func_43("Longest Distance Not Beat ", Global_97173.f_17318.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_97173.f_17318.f_22[5] = (Global_97173.f_17318.f_22[5] + iParam1);
			func_43("Total Distance w/ Passenger = ", Global_97173.f_17318.f_22[5]);
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
			func_43("Wanted Levels ++ = ", Global_97173.f_17318.f_22[6]);
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
			func_43("Wanted Levels Lost = ", Global_97173.f_17318.f_22[7]);
			break;
		
		case 8:
			Global_97173.f_17318.f_22[8]++;
			func_43("Taxis wrecked ++ = ", Global_97173.f_17318.f_22[8]);
			break;
		
		case 9:
			Global_97173.f_17318.f_22[9]++;
			func_43("Horn Honked ++ = ", Global_97173.f_17318.f_22[9]);
			break;
		
		case 10:
			Global_97173.f_17318.f_22[10] = (Global_97173.f_17318.f_22[10] + iParam1);
			func_43("Total Money Earned = ", Global_97173.f_17318.f_22[10]);
			break;
		
		case 11:
			Global_97173.f_17318.f_22[11] = (Global_97173.f_17318.f_22[11] + iParam1);
			func_43("Total Tips Earned = ", Global_97173.f_17318.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_97173.f_17318.f_22[12])
			{
				Global_97173.f_17318.f_22[12] = iParam1;
				func_43("New Highest Tip = ", Global_97173.f_17318.f_22[12]);
			}
			else
			{
				func_43("Highest Tip Not Reached = ", Global_97173.f_17318.f_22[12]);
			}
			break;
	}
}

void func_43(char* sParam0, int iParam1)
{
}

void func_44(var uParam0)
{
	func_42(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_411(1);
		func_56(15, 1);
	}
	func_54(&(Global_97173.f_17318), 1024);
	if (!func_133(Global_97173.f_17318, 64))
	{
		func_45(func_52(func_53(uParam0)), 0, 0);
	}
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_51((891 + iParam0), 1, -1, 1);
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
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
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
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
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
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_50(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_49() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_49()
{
	return Global_24444;
}

int func_50(int iParam0, int iParam1)
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
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_52(int iParam0)
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

int func_53(var uParam0)
{
	return uParam0->f_411;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_56(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_57(iParam0, iParam1);
}

int func_57(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_66(&Global_2543759))
	{
		if (func_64(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_58(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_58(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_64(uParam0, iParam1))
	{
		return 0;
	}
	func_61(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_59(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_64(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_60(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_60(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63(uParam0, iVar0);
		iVar0++;
	}
	func_62(&(uParam0->f_62), (8f - 0.5f));
}

void func_62(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_64(var uParam0, int iParam1)
{
	return func_65(uParam0, iParam1) != -1;
}

int func_65(var uParam0, int iParam1)
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

bool func_66(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_67(var uParam0, var uParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_152() && func_150(uParam0, 0) > 1f)
			{
				if (func_29())
				{
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
				}
				func_93(uParam0);
				func_138(&(Global_97173.f_17318), 4096);
				func_91(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_92(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x84795EA8F54230A1(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				func_90(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_85(uParam1, 0))
			{
				func_68(uParam0);
				func_284(uParam0, 0, 0, 0);
				func_90(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_69(func_82(), 21, iVar0, 0, 0);
		func_42(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_69(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_70(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x55FFE396AA3CA77A(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x96B68C67633472DC(iVar1, iVar0, 1);
	}
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_81();
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
					func_80(99, 1);
					func_79(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_79(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_79(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_78(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_77(5))
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
							func_79(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_77(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_79(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_79(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_79(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_79(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x00ADB26EA48763F7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_77(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_79(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_79(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_79(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_76(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_80(95, iParam3);
					break;
				
				case 1:
					func_80(97, iParam3);
					break;
				
				case 2:
					func_80(96, iParam3);
					break;
			}
			func_80(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
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
					func_79(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_79(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_79(joaat("sp2_total_cash_earned"), iParam3);
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
	func_72(iParam0);
	if (Global_34909 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)
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

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_73(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_75() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_75() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_74(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(int iParam0)
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

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0)
{
	func_80(93, iParam0);
	func_80(29, iParam0);
	func_80(30, iParam0);
}

bool func_77(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_75() /*8053*/].f_5756.f_10, iParam0);
}

int func_78(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_56(27, 1);
	return 1;
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_80(int iParam0, int iParam1)
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
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_81()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_82()
{
	func_83();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_83()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_4(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_3(unk_0x507DA4994C3D8EBD());
			if (func_5(iVar0) && (!func_84(14) || Global_96126))
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

bool func_84(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_85(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_2)))
	{
		func_89(&(uParam0->f_2));
	}
	unk_0xD9E638F7F8DCAA60(14);
	unk_0x4A383EC377D451D0(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x58FC9C7DF8FE009B(2, 201) || uParam0->f_8)
		{
			if (!func_14(&(uParam0->f_5)))
			{
				func_89(&(uParam0->f_5));
				func_88(uParam0, 1051260355);
			}
		}
		if (func_14(&(uParam0->f_5)))
		{
			if (func_87(&(uParam0->f_5)) > 0.33f)
			{
				func_86(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_87(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_14(&(uParam0->f_5)))
		{
			func_89(&(uParam0->f_5));
			func_88(uParam0, 1051260355);
		}
		else if (func_87(&(uParam0->f_5)) > 0.33f)
		{
			func_86(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_86(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_87(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_88(var uParam0, int iParam1)
{
	unk_0xF48C88BD1F0007E8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x876C5D0739031E15(uParam0->f_9);
	unk_0xA8F7908868900538(iParam1);
	unk_0xA52FC2467E672B55();
}

void func_89(var uParam0)
{
	func_62(uParam0, 0f);
}

void func_90(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_91(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xF48C88BD1F0007E8(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x44F4D219F8513945("STRING");
	unk_0xF51CF48922F85ED5(iParam9);
	unk_0x923B18EB34FC2117(sParam1);
	unk_0x113A6F657EE871A3();
	unk_0x44F4D219F8513945(sParam7);
	unk_0x844339A27F0F1508(uParam2);
	unk_0x844339A27F0F1508(uParam3);
	unk_0x923B18EB34FC2117(uParam6);
	unk_0x844339A27F0F1508(uParam5);
	unk_0x844339A27F0F1508(iParam4);
	unk_0x113A6F657EE871A3();
	unk_0xA52FC2467E672B55();
	func_89(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_92(var uParam0)
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

void func_93(var uParam0)
{
	int iVar0;
	
	Local_168.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_168.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_42(11, uParam0->f_56);
	func_42(12, uParam0->f_56);
	iLocal_56[1] = uParam0->f_56;
	iLocal_56[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x61D8FEAF64881CDA(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

void func_94()
{
	if (unk_0xFD68187442384158(Local_409.f_4))
	{
		if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
		{
			if (unk_0xBA2FAB683F225FF0(Local_409.f_4) < 500f)
			{
				Local_409.f_50 = 250;
			}
			else
			{
				Local_409.f_50 = 100;
			}
		}
	}
	Local_409.f_56 = (unk_0xD7873D6F1741A9A4(unk_0x507DA4994C3D8EBD()) - unk_0x5D422B4764FA2ACA(unk_0x507DA4994C3D8EBD()));
	if (Local_409.f_56 <= 150)
	{
		Local_409.f_56 = 250;
	}
	else
	{
		Local_409.f_56 = 100;
	}
}

void func_95(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_96(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_42(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_42(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_96(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_97(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_110();
	}
	if (func_109(iParam2) == 4)
	{
	}
	bVar0 = Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_108(iParam0, 0);
			func_104(func_107(iParam0), func_109(iParam2), 1);
			iVar1 = unk_0x4D3E68F73B727E49(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_75() /*8053*/].f_5756.f_650), iParam0);
					func_101(15, 0);
					break;
			}
			func_100(iVar1);
			func_99(iParam0, iVar1);
			Global_96167.f_15[iParam0] = unk_0xF976C624234A4AA8();
		}
	}
	else if (bVar0)
	{
		func_98(func_107(iParam0), func_109(iParam2));
	}
}

void func_98(int iParam0, int iParam1)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_96167.f_4[iParam0] = (unk_0xF976C624234A4AA8() + iParam1);
	}
	else
	{
		Global_96167.f_4[iParam0] = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(1200000, 2100000));
	}
}

void func_100(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_96167.f_3 = (unk_0xF976C624234A4AA8() + iParam0);
	}
	else
	{
		Global_96167.f_3 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(21600000, 25200000));
	}
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_103(iParam0, iParam1))
	{
		iVar0 = func_102();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_103(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_106();
		if (iParam1 == 4)
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[2] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68067)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_105();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_105();
			}
		}
	}
}

void func_105()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x82FD00B995993186("");
		StringCopy(&cVar16, unk_0xB0EEA0615087D74B(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0xB0EEA0615087D74B("CELL_253");
		unk_0x054BCC5519168683(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x82FD00B995993186("CELL_255");
		unk_0x923B18EB34FC2117(&(Global_2873[1 /*6*/]));
		unk_0x054BCC5519168683(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 0);
}

void func_106()
{
	if (func_84(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_82();
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

int func_107(int iParam0)
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

void func_108(int iParam0, int iParam1)
{
	Global_97173.f_243[func_110() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_109(int iParam0)
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

int func_110()
{
	int iVar0;
	
	iVar0 = func_82();
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
			switch (func_111(-1))
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

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x3DBE2A7AF9E71C82(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_113(int iParam0, int iParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(*iParam0))
	{
		if (unk_0xEC043AB2FEE0E94F(*iParam0, iParam1) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(var uParam0, bool bParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		if (func_123(uParam0) && func_120(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					func_115(uParam0);
				}
			}
			else
			{
				func_115(uParam0);
			}
		}
		else if (!func_123(uParam0))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115(var uParam0)
{
	struct<3> Var0;
	
	if (func_118(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_116(uParam0, Var0);
}

void func_116(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3) && unk_0x764E7360C13E7383(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x0CAFB9D38494283D(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x0CAFB9D38494283D(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_117(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x9632B185BE7E73E6(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x8FE221761D524CFE(Var0, Param1, 0) < unk_0x8FE221761D524CFE(Var3, Param1, 0) && unk_0xCA8508992C844A64(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x9632B185BE7E73E6(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x8FE221761D524CFE(Var0, Param1, 0) >= unk_0x8FE221761D524CFE(Var3, Param1, 0) && unk_0xCA8508992C844A64(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x9632B185BE7E73E6(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x9632B185BE7E73E6(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_117(int iParam0, int iParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam0) && !unk_0xE5D56342B0FF1D0D(iParam1))
	{
		if (unk_0x764E7360C13E7383(iParam0, iParam1))
		{
			if (unk_0xE634CB9EE7094537(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_118(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_119(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_133(uParam0->f_81, iParam1) && !func_152());
	}
	return func_152();
}

int func_120(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0x53170344050F2301(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_39(1))
			{
				func_37(0);
			}
			if (func_29())
			{
				func_122();
				return 1;
			}
			else if (func_121(uParam0->f_4, iParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 0, 256);
				}
				else
				{
					unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 0, 0);
				}
			}
			unk_0x229D259AC32C20C7(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_121(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
	{
		unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
	}
}

int func_123(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			if (unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_124(var uParam0, int iParam1, bool bParam2)
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

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
		iVar0++;
	}
	unk_0x3DF5706BBD8F5B5B();
	func_140();
}

var func_126()
{
	var uVar0;
	
	return uVar0;
}

void func_127(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_128(var uParam0, int iParam1, bool bParam2)
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
			func_86(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_86(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_129()
{
	unk_0xFF467904A8A12BBE(func_130(0));
	unk_0xFF467904A8A12BBE(func_130(1));
	unk_0xD0522F98C595B73F("move_strafe_melee_unarmed");
	unk_0xA878656BC39BBC51("oddjobs@taxi@gyn@");
	unk_0xA878656BC39BBC51("melee@unarmed@streamed_taunts");
	unk_0xA878656BC39BBC51("misscommon@response");
	unk_0xA878656BC39BBC51(&cLocal_907);
	unk_0xA878656BC39BBC51(&cLocal_923);
	unk_0xA878656BC39BBC51(&cLocal_939);
	unk_0xA878656BC39BBC51(&cLocal_955);
	unk_0xA878656BC39BBC51(&cLocal_971);
	unk_0xA878656BC39BBC51(&cLocal_987);
	unk_0xA878656BC39BBC51(&cLocal_1003);
	unk_0xA878656BC39BBC51(&cLocal_1019);
	unk_0x932057F38C942D3B("taxi_oj_gyn");
	unk_0x8522425DBC299765();
}

int func_130(int iParam0)
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

var func_131(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_132(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
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

bool func_133(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_134()
{
	int iVar0;
	int iVar1;
	
	func_137();
	if (!unk_0xE5D56342B0FF1D0D(iLocal_850) && unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
	{
		switch (iLocal_1127)
		{
			case 0:
				if (func_136(1, 0, 1))
				{
					unk_0x8E759206778E571F(iLocal_850, unk_0x507DA4994C3D8EBD(), -1, 2049, 3);
					unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iLocal_850, -1, 2049, 3);
					func_125(&uLocal_1068);
					func_124(&Local_1038, -1, 1);
					iLocal_1127 = 1;
				}
				break;
			
			case 1:
				if (func_150(&Local_409, 19) > 2f)
				{
					func_219(&Local_409, 129, 1, 0, 1);
					func_284(&Local_409, 19, 0, 0);
					iLocal_1127 = 5;
				}
				break;
			
			case 5:
				Local_901 = { func_135() };
				if (func_150(&Local_409, 19) > 15f || unk_0xA858564DC37EED5E(&cLocal_895, &Local_901))
				{
					iVar0 = unk_0xF7D9833F1E3C722B(Local_409.f_4);
					if (unk_0x26EA758C2A691D06(Local_409.f_4) == joaat("sentinel2"))
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
					unk_0x36B42DB2912118E2(iLocal_850, Local_409.f_4, 40000, iVar1, 1f, 1, 0);
					func_284(&Local_409, 19, 0, 0);
					iLocal_1127 = 6;
				}
				else if ((unk_0xF976C624234A4AA8() % 1500) < 50)
				{
					unk_0xDE75E9DE5B6221E1(iLocal_850, unk_0x507DA4994C3D8EBD(), 0);
				}
				break;
			
			case 6:
				if (func_150(&Local_409, 19) > 20f)
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
					{
						unk_0xAC57FBF981AB03F4(iLocal_850);
						unk_0xB68382181B4C4177(iLocal_850, 1193033728, 0);
					}
					func_314(&Local_409, "Player not letting the chick in the car", 20);
				}
				if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
					{
						if (unk_0x2A24448FF232F834(iLocal_850, 0))
						{
							iLocal_1127 = 8;
						}
						else if ((unk_0xF976C624234A4AA8() % 2500) < 50)
						{
						}
					}
				}
				break;
			
			case 7:
				if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_850))
					{
						if (!unk_0x2A24448FF232F834(iLocal_850, 0))
						{
							unk_0x11460EBE0487B44F(iLocal_850, Local_409.f_4, 2);
						}
					}
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), Local_409.f_4, -1);
					}
				}
				func_284(&Local_409, 19, 0, 0);
				iLocal_1127 = 8;
				break;
			
			case 8:
				unk_0x9C64F97D3F9CCA97("GYN_CS_END", 0.75f, 0.75f, 0f, 0, 0, 255, 255);
				Local_409.f_141 = 0;
				if (unk_0x17D71902CA06091B(Local_409.f_0))
				{
					unk_0x44151B6071157DDD(Local_409.f_0, 0);
				}
				if (unk_0x17D71902CA06091B(Local_409.f_1))
				{
					unk_0x44151B6071157DDD(Local_409.f_1, 0);
				}
				if (unk_0x17D71902CA06091B(uLocal_1036))
				{
					unk_0x44151B6071157DDD(uLocal_1036, 0);
				}
				func_128(&Local_409, 19, 0);
				iLocal_1127 = 9;
				return 1;
				break;
		}
	}
	return 0;
}

struct<6> func_135()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xB578A5EEDCABA08F();
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

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	return 1;
}

void func_137()
{
	if (func_31())
	{
		unk_0xD530A1AEC901B9D1("appInternet");
	}
	if (func_30())
	{
		unk_0xD530A1AEC901B9D1("appCamera");
	}
	if (func_39(1))
	{
		func_37(0);
	}
}

void func_138(var uParam0, int iParam1)
{
	func_139(uParam0, iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140()
{
	Global_14558 = 0;
	func_141();
}

void func_141()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

int func_142()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (unk_0xE634CB9EE7094537(unk_0x527D4CB4E8181391(unk_0x507DA4994C3D8EBD()), -1) == unk_0x507DA4994C3D8EBD())
		{
			return 1;
		}
	}
	return 0;
}

float func_143(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_144(int iParam0, bool bParam1, bool bParam2)
{
	return func_155(iParam0, !bParam1, bParam2);
}

float func_145(struct<3> Param0, int iParam3)
{
	return func_146(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), Param0, iParam3);
}

float func_146(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xE5D56342B0FF1D0D(uParam0))
	{
		return -1f;
	}
	return unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam0, 1), Param1, iParam4);
}

void func_147()
{
	Global_14558 = 0;
	func_148();
}

void func_148()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_149(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3A1E687904400847(*uParam0, 13, 0);
			unk_0x3A1E687904400847(*uParam0, 1, 0);
			unk_0x3A1E687904400847(*uParam0, 3, 1);
			unk_0x2F82BB8951419B6D(*uParam0, 300f);
			unk_0x9A9059D04284280B(*uParam0, 300f);
			unk_0x6ED0D84DD08E49FE(*uParam0, 300f);
			unk_0x48FFA098B5BE8ED0(*uParam0, 2);
			unk_0x0E53A759D522CA83(*uParam0, 2);
			unk_0xE7962295F4C99484(*uParam0, 75);
			unk_0xD149F8A3FE6B4956(*uParam0, 1);
			unk_0x6C5E5193D2E6CED0(*uParam0, 7, 1f);
			unk_0xE440546F94B26235(*uParam0, Local_409.f_413);
			unk_0xCA4EA7D4F6DCCD43(5, Local_409.f_413, joaat("player"));
			unk_0xF266F4D5C3D0BAE2(*uParam0, 100f, 0);
		}
	}
}

float func_150(var uParam0, int iParam1)
{
	if (!func_14(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_151(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_87(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_151(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_89(uParam0);
	}
}

int func_152()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0)
{
	if ((((*uParam0 == joaat("weapon_unarmed") || *uParam0 == joaat("weapon_smokegrenade")) || *uParam0 == joaat("weapon_fireextinguisher")) || *uParam0 == joaat("weapon_petrolcan")) || *uParam0 == -837150131)
	{
		return 1;
	}
	return 0;
}

float func_154(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

int func_155(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_132(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_132(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_132(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_156()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	func_137();
	if (iLocal_845 < 3 && iLocal_845 > 0)
	{
		if (func_172(iLocal_87))
		{
			iLocal_845 = 7;
		}
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x9C64F97D3F9CCA97("Player INSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		else
		{
			unk_0x9C64F97D3F9CCA97("Player OUTSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			unk_0x9C64F97D3F9CCA97("Player INSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
		else
		{
			unk_0x9C64F97D3F9CCA97("Player OUTSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
	}
	switch (iLocal_845)
	{
		case 0:
			if (!func_152())
			{
				func_171(0, 0, 1);
				unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
				func_170(&Local_409, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				Var0 = { 30.8062f, -1242.612f, 29.1026f };
				Var3 = { 7.5623f, -0.0714f, 149.3929f };
				unk_0xEEA9AFA5E9078090(Local_409.f_0, Var0);
				unk_0x46AA97C6CB72D170(Local_409.f_0, Var3, 2);
				unk_0x435B97ECA622D5B0(Local_409.f_0, 35f);
				unk_0xB98DF10F1936BD70(Local_409.f_0, "HAND_SHAKE", 0.3f);
				unk_0x6F430D0F1783A56E(Local_409.f_0, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3) && !unk_0xE5D56342B0FF1D0D(Local_409.f_4))
				{
					unk_0xF85858E5CBF4D9F0(Local_409.f_4, unk_0x0CAFB9D38494283D(iLocal_849, 0f, 8.25f, 0f), 1, 0, 0, 1);
					unk_0x248DC16118AE5035(Local_409.f_4, 114.629f);
					unk_0x8E759206778E571F(Local_409.f_3, unk_0x507DA4994C3D8EBD(), -1, 2048, 4);
				}
				func_219(&Local_409, 121, 1, 1, 0);
				func_284(&Local_409, 0, 0, 0);
				iLocal_845 = 1;
			}
			else
			{
				func_147();
			}
			break;
		
		case 1:
			if (func_150(&Local_409, 0) > 2f && !func_152())
			{
				if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3))
				{
					unk_0x9F77DFFC61FCB68C(&uLocal_847);
					unk_0xB5DC017AFD430D1B(&uLocal_847);
					unk_0x48367A1F7C9A1041(0, 0, 0);
					unk_0x36B42DB2912118E2(0, Local_409.f_4, 20000, -1, 1f, 524296, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_847);
					unk_0x8229311A391A4EC6(Local_409.f_3, uLocal_847);
					func_162(&(Local_409.f_244), Local_409.f_144, "txm9_figt1", "txm9_figt1_1", 8, 0, 0);
				}
				func_284(&Local_409, 0, 0, 0);
				if (func_161())
				{
					if (!iLocal_866)
					{
						unk_0x8EEEED91D5DD768C("CamPushInNeutral", 0, 0);
						unk_0x84795EA8F54230A1(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_866 = 1;
					}
				}
				iLocal_845 = 2;
			}
			break;
		
		case 2:
			if (func_150(&Local_409, 0) > 0.3f)
			{
				iLocal_845 = 3;
			}
			break;
		
		case 3:
			unk_0xBE5E0E5A454F4D6A(0f);
			unk_0x77CB1AAAF31275BE(0f, 1065353216);
			unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
			func_284(&Local_409, 0, 0, 0);
			iLocal_845 = 4;
			break;
		
		case 4:
			if (!func_160(&Local_409) && !unk_0x9F94F2CFDCA78C55(Local_409.f_3))
			{
				unk_0x7FEDD088E489CE41(Local_409.f_3, 314, 1);
				func_149(&(Local_409.f_3));
				func_284(&Local_409, 0, 0, 0);
				iLocal_845 = 5;
			}
			else if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3))
			{
				if (unk_0xEC043AB2FEE0E94F(Local_409.f_3, 242628503) != 1)
				{
					unk_0x9F77DFFC61FCB68C(&uLocal_847);
					unk_0xB5DC017AFD430D1B(&uLocal_847);
					unk_0x48367A1F7C9A1041(0, 0, 0);
					unk_0x36B42DB2912118E2(0, Local_409.f_4, 20000, -1, 1f, 524296, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_847);
					unk_0x8229311A391A4EC6(Local_409.f_3, uLocal_847);
				}
			}
			break;
		
		case 5:
			if (func_150(&Local_409, 0) > 0.5f && !func_152())
			{
				func_162(&(Local_409.f_244), Local_409.f_144, "txm9_figt1", "txm9_figt1_2", 9, 0, 0);
				func_284(&Local_409, 0, 0, 0);
				iLocal_845 = 6;
			}
			break;
		
		case 6:
			if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3))
			{
				unk_0xE131FC34DA8AD63F(Local_409.f_3, 69, 1);
			}
			if (func_150(&Local_409, 0) > 1f)
			{
				func_219(&Local_409, 11, 1, 0, 0);
				func_158(1, 1, 1);
				if (unk_0x17D71902CA06091B(Local_409.f_0))
				{
					unk_0x44151B6071157DDD(Local_409.f_0, 0);
				}
				func_284(&Local_409, 0, 0, 0);
				return 1;
			}
			break;
		
		case 7:
			if (unk_0xC2C705ED6124A7C2())
			{
				if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(Local_409.f_3)) && unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
				{
					unk_0xCEBD1B99CF343672(Local_409.f_3);
					unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
				}
				if (func_152())
				{
					func_147();
				}
				func_284(&Local_409, 0, 0, 0);
				iLocal_845 = 8;
			}
			break;
		
		case 8:
			if (func_150(&Local_409, 0) > 0.3f)
			{
				if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(Local_409.f_3)) && unk_0xCA8794CE207FC6D5(Local_409.f_4, 0))
				{
					unk_0xCEBD1B99CF343672(Local_409.f_3);
					unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
					unk_0x7E40829CCC49E744(Local_409.f_4, 0, 1);
					Var9 = { unk_0x0CAFB9D38494283D(Local_409.f_4, -1.6f, 0f, 0f) };
					Var6 = { unk_0x0CAFB9D38494283D(Local_409.f_4, -4f, 2f, 0f) };
					unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var9, 1, 0, 0, 1);
					unk_0xF85858E5CBF4D9F0(Local_409.f_3, Var6, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), func_157(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(Local_409.f_3, 1)));
					unk_0x248DC16118AE5035(Local_409.f_3, func_157(unk_0xBF1B13057E5119A4(Local_409.f_3, 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)));
					func_149(&(Local_409.f_3));
				}
				unk_0xBE5E0E5A454F4D6A(0);
				unk_0x77CB1AAAF31275BE(0, 1065353216);
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				if (unk_0x17D71902CA06091B(Local_409.f_0))
				{
					unk_0x44151B6071157DDD(Local_409.f_0, 0);
				}
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 256);
				func_284(&Local_409, 0, 0, 0);
				iLocal_845 = 9;
			}
			break;
		
		case 9:
			if (!unk_0xC17F446CF864854D() && func_150(&Local_409, 0) > 1f)
			{
				unk_0x662E87A876F1069D(800);
			}
			if (unk_0x8D4100BAA46EE198() && !unk_0xC17F446CF864854D())
			{
				iLocal_845 = 10;
			}
			break;
		
		case 10:
			if (!func_160(&Local_409))
			{
				func_158(1, 1, 1);
				func_219(&Local_409, 11, 1, 0, 0);
				func_284(&Local_409, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

float func_157(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xA75239A5F28CBA62((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_158(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
	}
	unk_0x8801332725A366AF(1);
	func_20(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x255259988FBEFACC(1);
		unk_0x330ABD0F05E764BB(1);
	}
	func_159(23, 0);
}

void func_159(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_24688, iParam0);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_24688, iParam0);
	}
}

int func_160(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0xE634CB9EE7094537(uParam0->f_4, -1) == unk_0x507DA4994C3D8EBD())
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (unk_0xD686D61A57BCB6E7(unk_0xCF4F7FBD80ABE315()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_169(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_163(sParam2, iParam4, 0);
}

int func_163(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD858EC6FECDB4B3F(0);
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
					func_148();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_168(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_167();
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_106();
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_166())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_27())
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_165();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_164();
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
		func_148();
	}
	return 0;
}

void func_164()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_165()
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_167()
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

bool func_168(int iParam0, int iParam1)
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_169(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_170(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x17D71902CA06091B(*uParam0))
	{
		*uParam0 = unk_0x75089805E99EDC28(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 0, iParam0);
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xB895F3A5E3A84693(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 15f);
	}
	unk_0x8801332725A366AF(iParam1);
	func_37(0);
	func_20(1, 1, iParam2, 0);
	unk_0x255259988FBEFACC(0);
	unk_0x330ABD0F05E764BB(0);
	func_159(23, 1);
}

int func_172(int iParam0)
{
	if (func_173() && unk_0xF976C624234A4AA8() >= iParam0 + 1000)
	{
		unk_0x7C69A4879766A867(500);
		while (!unk_0xC2C705ED6124A7C2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_37(0);
		func_147();
		return 1;
	}
	return 0;
}

int func_173()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_174(int iParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

int func_175(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x8D4100BAA46EE198() && !unk_0xC17F446CF864854D()) && !unk_0xF468278E75CA2341()) && !unk_0xC2C705ED6124A7C2()) && !uParam0->f_142)
	{
		if (func_191(uParam0))
		{
			func_190(uParam0, &(uParam0->f_43));
			func_185(uParam0);
			func_184(uParam0);
			func_181(uParam0);
			func_178(uParam0, fParam2, fParam3);
			func_177(uParam0);
			return func_176(uParam0, iParam1);
		}
	}
	return 0;
}

int func_176(var uParam0, int iParam1)
{
	if (func_53(uParam0) == 2)
	{
		if (unk_0x594EB70937EC1486(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_154(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) < 1) && func_136(1, 1, 1)) && unk_0x525FB3C56A2F33BE(uParam0->f_4))
		{
			return func_120(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x594EB70937EC1486(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) < 1) && func_136(1, 1, 1)) && unk_0x525FB3C56A2F33BE(uParam0->f_4))
	{
		return func_120(uParam0, 1, iParam1);
	}
	return 0;
}

void func_177(var uParam0)
{
	float fVar0;
	
	if ((func_123(uParam0) && func_133(uParam0->f_81, 67108864)) && unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
	{
		if ((unk_0xF976C624234A4AA8() - iLocal_96) >= 10000)
		{
			fVar0 = func_145(uParam0->f_17, 1);
			if (fVar0 > fLocal_94)
			{
				iLocal_95++;
			}
			else
			{
				iLocal_95 = 0;
			}
			fLocal_94 = fVar0;
			iLocal_96 = unk_0xF976C624234A4AA8();
		}
		if (iLocal_95 >= 2 && !func_152())
		{
			func_219(uParam0, 136, 1, 0, 1);
			iLocal_95 = 0;
		}
		if ((unk_0xF976C624234A4AA8() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xF976C624234A4AA8() % 4000) < 50)
		{
			if (!func_123(uParam0))
			{
			}
			if (!func_133(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
		{
			if (iLocal_95 > 0)
			{
				iLocal_95 = 0;
			}
		}
	}
}

void func_178(var uParam0, float fParam1, float fParam2)
{
	if (func_123(uParam0) && func_133(uParam0->f_44, 4))
	{
		if ((unk_0x2ACEA6F88B3AFFB0(uParam0->f_4) || unk_0x11F6A4A45943670E(uParam0->f_4) < 3f) && func_160(uParam0))
		{
			if (!func_180(uParam0, 2))
			{
				func_179(uParam0, 2);
			}
			else if (func_123(uParam0))
			{
				if (func_150(uParam0, 2) > fParam1 && !func_180(uParam0, 14))
				{
					if (func_31())
					{
						func_219(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_219(uParam0, 48, 1, 0, 0);
					}
					func_284(uParam0, 2, 0, 0);
					if (func_180(uParam0, 10))
					{
						func_284(uParam0, 10, 0, 0);
					}
				}
				if (!func_180(uParam0, 3))
				{
					func_284(uParam0, 3, 0, 0);
				}
				else if (func_150(uParam0, 3) >= fParam2)
				{
					func_128(uParam0, 3, 0);
					func_314(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_180(uParam0, 2))
			{
				func_128(uParam0, 2, 0);
			}
			if (func_180(uParam0, 3))
			{
				func_128(uParam0, 3, 0);
			}
		}
	}
}

void func_179(var uParam0, int iParam1)
{
	func_151(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_180(var uParam0, int iParam1)
{
	return func_14(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_181(var uParam0)
{
	if (func_183(uParam0))
	{
		func_182(uParam0);
	}
}

void func_182(var uParam0)
{
	if (unk_0xCF6C791C18F498FC() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xDA23B3063FF99093();
			func_128(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_150(uParam0, 20) > 3f)
				{
					func_219(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_133(uParam0->f_81, 262144) || !func_133(uParam0->f_81, 1048576))
				{
					if (func_150(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_219(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_133(uParam0->f_82, 67108864))
				{
					if (func_150(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_219(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_150(uParam0, 20) > 8f)
				{
					func_219(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_133(uParam0->f_81, 262144) || func_133(uParam0->f_82, 67108864))
			{
				if (!func_180(uParam0, 22))
				{
					func_179(uParam0, 22);
				}
			}
			if (func_180(uParam0, 22) && func_150(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_133(uParam0->f_81, 1048576))
					{
						func_219(uParam0, 84, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_133(uParam0->f_82, 134217728))
					{
						func_219(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_183(var uParam0)
{
	return uParam0->f_120;
}

void func_184(var uParam0)
{
	if (unk_0x2A48227D4098FFDD(unk_0x4D82797EF5035A9F()) && !func_133(uParam0->f_44, 2))
	{
		func_54(&(uParam0->f_44), 2);
	}
	else if (!unk_0x2A48227D4098FFDD(unk_0x4D82797EF5035A9F()) && func_133(uParam0->f_44, 2))
	{
		func_138(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_42(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_219(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_185(var uParam0)
{
	if (!func_133(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) >= 1)
				{
					if (func_150(uParam0, 9) > 1f)
					{
						func_189(uParam0, unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()));
						if (uParam0->f_410 != 22)
						{
							func_219(uParam0, 50, 1, 1, 0);
						}
						func_284(uParam0, 9, 0, 0);
						if (unk_0xD361727124133DF3(uParam0->f_9))
						{
							unk_0x80882386D3DF8627(uParam0->f_9, 0);
							unk_0x43F7D508C655CBA3(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_152() && func_150(uParam0, 9) > 4f)
				{
					func_219(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_188("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_219(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF0428CCE35084401(unk_0x4D82797EF5035A9F(), func_187(uParam0)))
				{
					func_189(uParam0, unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()));
					func_42(6, 0);
				}
				if (!func_186(uParam0))
				{
					if (!unk_0xF611D1BB58990143())
					{
						if (func_150(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_219(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) < 1)
				{
					if (func_188("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x3DF5706BBD8F5B5B();
					}
					if (unk_0xD361727124133DF3(uParam0->f_9))
					{
						unk_0x80882386D3DF8627(uParam0->f_9, 255);
						unk_0x43F7D508C655CBA3(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_152())
				{
					if (uParam0->f_410 != 22)
					{
						func_219(uParam0, 53, 1, 0, 1);
					}
					func_42(7, func_187(uParam0));
					func_189(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_152())
				{
					func_128(uParam0, 9, 0);
					func_284(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_186(var uParam0)
{
	return uParam0->f_110;
}

int func_187(var uParam0)
{
	return uParam0->f_106;
}

bool func_188(char* sParam0, int iParam1, int iParam2)
{
	unk_0x228B04C8B6530A66(sParam0);
	if (iParam1 == 1)
	{
		unk_0x923B18EB34FC2117(iParam2);
	}
	return unk_0x3EDC7EA7BB2A109E();
}

void func_189(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_190(var uParam0, var uParam1)
{
	unk_0x3E6ED0C6CF9AA077(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_191(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			if (!unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 1) && !unk_0xADFF42956B1E6E0F(uParam0->f_3))
			{
				func_314(uParam0, "Passenger left car.", 9);
			}
			else if (func_201(uParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xAD91AFD429036CAB("TAXI_OBJ_PICKUP");
				}
				if (unk_0x8D4100BAA46EE198())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xF976C624234A4AA8() % 1000) < 50)
				{
				}
				func_192(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_192(var uParam0, bool bParam1)
{
	func_200(uParam0, uParam0->f_3);
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x53170344050F2301(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_180(uParam0, 14))
			{
				if (func_152())
				{
					func_199(1);
				}
				func_198(uParam0, 11, 1);
				func_193(uParam0, 1);
				func_284(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_123(uParam0))
				{
					if ((unk_0xF976C624234A4AA8() % 1000) < 50)
					{
					}
					if (unk_0x2A24448FF232F834(uParam0->f_2, 0))
					{
						if (func_150(uParam0, 15) > 5f)
						{
							func_284(uParam0, 15, 0f, 1);
						}
					}
					if (func_150(uParam0, 14) > 20f)
					{
						func_314(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_150(uParam0, 14) > 20f)
				{
					if (func_312(uParam0->f_4, 1) > 40f)
					{
						func_314(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_314(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xD361727124133DF3(uParam0->f_8))
			{
				unk_0x80882386D3DF8627(uParam0->f_8, 0);
				unk_0x43F7D508C655CBA3(uParam0->f_8, 0);
				func_197(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xD361727124133DF3(uParam0->f_9))
			{
				unk_0x80882386D3DF8627(uParam0->f_9, 0);
				unk_0x43F7D508C655CBA3(uParam0->f_9, 0);
				unk_0x3DF5706BBD8F5B5B();
				if (func_123(uParam0))
				{
					func_219(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_197(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_194(uParam0, 0, 0);
		}
		else if (unk_0xD361727124133DF3(uParam0->f_10))
		{
			unk_0xA0A65B537B1F11EC(&(uParam0->f_10));
			if (unk_0xD361727124133DF3(uParam0->f_8))
			{
				unk_0x80882386D3DF8627(uParam0->f_8, 255);
				unk_0x43F7D508C655CBA3(uParam0->f_8, 1);
			}
			else if (unk_0xD361727124133DF3(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x80882386D3DF8627(uParam0->f_9, 0);
					unk_0x43F7D508C655CBA3(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x80882386D3DF8627(uParam0->f_9, 255);
					unk_0x43F7D508C655CBA3(uParam0->f_9, 1);
				}
			}
			unk_0x3DF5706BBD8F5B5B();
		}
	}
}

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_395(uParam0);
	}
	if (!unk_0xD361727124133DF3(uParam0->f_10))
	{
		uParam0->f_10 = func_155(uParam0->f_4, 1, 0);
		unk_0x2B271F66198227B7(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x43F7D508C655CBA3(uParam0->f_10, 1);
		func_195(uParam0);
		if (bParam2)
		{
			unk_0x3DF5706BBD8F5B5B();
			func_219(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_195(var uParam0)
{
	func_284(uParam0, 14, 0, 0);
	func_196();
}

void func_196()
{
	int iVar0;
	
	iVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		unk_0xC4E6094A4C954E29(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_197(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_133(*uParam1, iParam2))
	{
		unk_0x3DF5706BBD8F5B5B();
		func_219(uParam0, iParam3, 1, 0, 0);
		func_54(uParam1, iParam2);
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_199(int iParam0)
{
	Global_16703 = iParam0;
}

void func_200(var uParam0, int iParam1)
{
	if (unk_0xFD68187442384158(iParam1))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam1))
		{
			if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
			{
				if ((unk_0x26C9ECBDBBD7083F(iParam1, joaat("weapon_stungun"), 0) || unk_0x26C9ECBDBBD7083F(iParam1, 0, 2)) || unk_0x26C9ECBDBBD7083F(iParam1, 0, 1))
				{
					func_314(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xDFA69A35174944B2(unk_0xAF65E5A58BE87D95());
			}
		}
	}
}

int func_201(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0xE634CB9EE7094537(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_180(uParam0, 14))
			{
				func_202(uParam0);
			}
			func_193(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_202(var uParam0)
{
	func_128(uParam0, 14, 0);
	func_128(uParam0, 15, 0);
	func_204();
	if (func_203())
	{
		func_199(0);
	}
}

int func_203()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	var uVar0;
	
	uVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xCA8794CE207FC6D5(uVar0, 0))
	{
		unk_0xC4E6094A4C954E29(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_205()
{
	switch (iLocal_846)
	{
		case 0:
			if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0) && func_154(Local_409.f_4, Local_409.f_17, 1) < 300f)
			{
				func_209();
				iLocal_846 = 1;
			}
			break;
		
		case 1:
			if (func_207())
			{
				iLocal_846 = 2;
			}
			break;
		
		case 2:
			func_206();
			if (iLocal_852 > 1)
			{
				iLocal_846 = 3;
			}
			break;
		
		case 3:
			if (unk_0xCA8794CE207FC6D5(Local_409.f_4, 0) && func_154(Local_409.f_4, Local_409.f_17, 1) > 350f)
			{
				func_129();
				iLocal_852 = -1;
				iLocal_846 = 0;
			}
			break;
	}
}

void func_206()
{
	struct<3> Var0;
	
	switch (iLocal_852)
	{
		case -1:
			if (!unk_0xFD68187442384158(iLocal_849))
			{
				iLocal_849 = unk_0x546974B676313326(func_130(0), 27.1498f, -1246.523f, 28.4013f, 297.629f, 1, 1);
				iLocal_852++;
			}
			break;
		
		case 0:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_849))
			{
				unk_0xE2519ECBDF6A0ECC(iLocal_849, 1);
				unk_0x3F60DDB36F3654A8(iLocal_849, 1);
				unk_0x0BC897C4AD5A4F17(iLocal_849, "SNAKEYES");
				unk_0x20DE8B7C1E1378DC(iLocal_849, 1);
				unk_0xCDC1FD4387DA32EC(iLocal_849, 10);
				Var0 = { unk_0x0CAFB9D38494283D(iLocal_849, 0f, 3f, 0f) };
				iLocal_850 = unk_0x7B88529CAE3B7F15(26, func_130(1), Var0, (unk_0xA9D6B28E708753B6(iLocal_849) - 180f), 1, 1);
				iLocal_852++;
			}
			break;
		
		case 1:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_850) && !unk_0xE5D56342B0FF1D0D(iLocal_849))
			{
				func_7(&(Local_409.f_244), 5, iLocal_850, "TaxiLiz", 0, 1);
				unk_0x454E090239AFF6E8(iLocal_850, "TaxiLiz");
				unk_0x7FEDD088E489CE41(iLocal_850, 317, 1);
				unk_0xF2685765B7BEBCB0(iLocal_850, 3, 2, 0, 0);
				unk_0xF2685765B7BEBCB0(iLocal_850, 4, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(iLocal_850, 2, 0, 0, 0);
				unk_0x2DC5B31EBB810396(iLocal_850, 1);
				unk_0x6A750A31D18DA81A(iLocal_850, 0);
				unk_0x9FD49D841955E633(iLocal_850, 1);
				unk_0x8E759206778E571F(iLocal_850, iLocal_849, -1, 2048, 4);
				unk_0xB5DC017AFD430D1B(&uLocal_847);
				unk_0xEC0A546609840086(0, "oddjobs@taxi@gyn@", "idle_b_ped", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_847);
				unk_0x8229311A391A4EC6(iLocal_850, uLocal_847);
				unk_0x9F77DFFC61FCB68C(&uLocal_847);
				iLocal_852++;
			}
			break;
	}
}

int func_207()
{
	if (!unk_0xD291857D0C9C7FEC(func_130(0)))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading Gaunlet ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(func_130(1)))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading A_F_Y_EastSA_03", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xB3E0182D84120379("move_strafe_melee_unarmed"))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading move_strafe_melee_unarmed ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305("misscommon@response"))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading misscommon@response ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_907))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sMaleChatEnter ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_923))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sMaleChatBase ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_955))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sMaleChatExit ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_939))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sMaleChatIdle ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_987))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sFemaleChatBase ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_971))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sFemaleChatEnter ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_1019))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sFemaleChatExit ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(&cLocal_1003))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading sFemaleChatIdle ", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xB16E5DBDEC4BBDEB("taxi_oj_gyn"))
	{
		func_208("TAXI_ASSETS_STREAMING - Way point Recording Loading taxi_oj_gyn...", &iLocal_851, 1000);
		return 0;
	}
	return 1;
}

void func_208(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xF976C624234A4AA8() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xF976C624234A4AA8();
}

void func_209()
{
	unk_0xCBE6AC5010E5CE5C(func_130(0));
	unk_0xCBE6AC5010E5CE5C(func_130(1));
	unk_0xC47168D93A3B223B("move_strafe_melee_unarmed");
	unk_0x395C5D98343F0040("oddjobs@taxi@gyn@");
	unk_0x395C5D98343F0040("misscommon@response");
	unk_0x395C5D98343F0040("melee@unarmed@streamed_taunts");
	unk_0x395C5D98343F0040(&cLocal_907);
	unk_0x395C5D98343F0040(&cLocal_923);
	unk_0x395C5D98343F0040(&cLocal_939);
	unk_0x395C5D98343F0040(&cLocal_955);
	unk_0x395C5D98343F0040(&cLocal_971);
	unk_0x395C5D98343F0040(&cLocal_987);
	unk_0x395C5D98343F0040(&cLocal_1003);
	unk_0x395C5D98343F0040(&cLocal_1019);
	unk_0x909E9D811F9F1AAE("taxi_oj_gyn");
}

void func_210()
{
	switch (iLocal_844)
	{
		case 0:
			if (!func_133(Local_409.f_82, 16384) && func_212(&Local_409) != 35)
			{
				if (func_123(&Local_409))
				{
					if (func_201(&Local_409))
					{
						if (func_146(Local_409.f_4, Local_409.f_17, 1) <= 85f && iLocal_852 > 1)
						{
							Local_409.f_17 = { Local_873 };
							unk_0x2F81977123174F1A(Local_409.f_9, Local_873);
							func_125(&uLocal_1068);
							func_124(&Local_1038, 3, 0);
							func_219(&Local_409, 36, 1, 0, 0);
							if (unk_0xCA8794CE207FC6D5(iLocal_849, 0))
							{
								unk_0xE25E46198A369207(iLocal_849, 4, 0, 0);
								unk_0x29CE15040B0080CB(iLocal_849, 0);
								unk_0x240BBFD908B5DA09(iLocal_849, 150f);
								unk_0x8E5C15A367AD44B0(iLocal_849, 0f, 0f, 0f, 1000f, 0f, 1);
							}
							unk_0x259C96726C65FE5C(Local_891, 5f, joaat("prop_skid_chair_02"), 1);
							unk_0x259C96726C65FE5C(Local_891, 5f, joaat("prop_rub_couch03"), 1);
							iLocal_844 = 1;
							if (bLocal_1037)
							{
							}
						}
					}
				}
			}
			break;
		
		case 1:
			func_211(&uLocal_1035, Local_873, 30f, 0);
			iLocal_844 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_211(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_34(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_34(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0xE833E73A4C46A088(Var0, Var3);
		*uParam0 = unk_0x92832F671263F8E0(Var0, Var3, 0, 1, 1, 1);
		unk_0xAB97C8EA78D4E7DF(Param1, fParam4, 0);
	}
	else
	{
		unk_0x8956FD662264693F();
		unk_0x1D6153ECFEB26B2A(*uParam0, 0);
	}
}

int func_212(var uParam0)
{
	return uParam0->f_416;
}

int func_213(var uParam0, int iParam1)
{
	if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
	{
		if (unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 0))
		{
			if (unk_0xC51FBEBD87CFD69C(uParam0->f_4, iParam1))
			{
				if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 355471868) != 1)
				{
					unk_0x1DE8910EDFD23539(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_214(var uParam0, int iParam1)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			if (unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!unk_0xC51FBEBD87CFD69C(uParam0->f_4, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_215(var uParam0)
{
	func_216(uParam0, 1000);
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCEBD1B99CF343672(uParam0->f_3);
		unk_0xDE75E9DE5B6221E1(uParam0->f_3, unk_0x507DA4994C3D8EBD(), 0);
	}
	func_147();
	func_202(uParam0);
}

void func_216(var uParam0, int iParam1)
{
	if (unk_0x17D71902CA06091B(*uParam0))
	{
		unk_0x44151B6071157DDD(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x92931D2249E68921(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
	}
}

void func_217()
{
	func_54(&(Local_409.f_55), 2);
	func_54(&(Local_409.f_55), 4);
	func_54(&(Local_409.f_55), 16);
	func_54(&(Local_409.f_55), 64);
	func_54(&(Local_409.f_55), 256);
	func_54(&(Local_409.f_55), 512);
	func_54(&(Local_409.f_55), 1024);
	func_54(&(Local_409.f_55), 2048);
	func_54(&(Local_409.f_55), 4096);
	func_54(&(Local_409.f_55), 1073741824);
	func_54(&(Local_409.f_100), 8);
	func_54(&(Local_409.f_100), 2048);
	func_54(&(Local_409.f_100), 256);
	func_54(&uLocal_1110, 2);
}

void func_218(var uParam0)
{
	unk_0xDFA69A35174944B2(unk_0xAF65E5A58BE87D95());
	unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
	func_216(uParam0, 1000);
}

void func_219(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_284(uParam0, 16, 4f, 0);
		if (func_220(uParam0))
		{
			func_140();
		}
	}
	func_246(uParam0, iParam2, bParam3);
}

int func_220(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_152())
	{
		Var6 = { func_222() };
		if (!unk_0x8FA72E132AAFA62F(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xA858564DC37EED5E(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_221(&Var0);
			if (unk_0xA858564DC37EED5E(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_221(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_222()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

void func_223()
{
	unk_0xFF467904A8A12BBE(iLocal_839);
}

int func_224(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			if ((unk_0xADFF42956B1E6E0F(uParam0->f_3) && (unk_0xF976C624234A4AA8() - iLocal_88) > 500) || unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x53170344050F2301(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xF976C624234A4AA8() % 1000) < 50)
			{
			}
			func_192(uParam0, 1);
			if (func_29())
			{
				unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
			}
			if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 2106541073) == 1 || unk_0xEC043AB2FEE0E94F(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xCEBD1B99CF343672(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_86 = 0;
				unk_0xDE75E9DE5B6221E1(uParam0->f_3, unk_0x507DA4994C3D8EBD(), 0);
			}
		}
		else if (unk_0xF0428CCE35084401(unk_0x4D82797EF5035A9F(), 0))
		{
			func_244(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x9F77DFFC61FCB68C(&uVar3);
				unk_0xB5DC017AFD430D1B(&uVar3);
				unk_0x3F07E364A21EBC20(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xDE75E9DE5B6221E1(0, uParam0->f_4, 0);
				unk_0x6EE8A5CF9AC75F12(uVar3);
				unk_0x8229311A391A4EC6(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_180(uParam0, 14))
			{
				func_202(uParam0);
				func_193(uParam0, 0);
			}
			if (func_180(uParam0, 9))
			{
				func_128(uParam0, 9, 0);
				unk_0x3DF5706BBD8F5B5B();
				if (unk_0xD361727124133DF3(uParam0->f_8))
				{
					unk_0x80882386D3DF8627(uParam0->f_8, 255);
					unk_0x43F7D508C655CBA3(uParam0->f_8, 1);
				}
			}
			if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
			{
				fVar4 = ((unk_0x11F6A4A45943670E(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_243(uParam0, uParam0->f_3) > 300f)
				{
					func_314(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 1 || ((func_143(unk_0x507DA4994C3D8EBD(), uParam0->f_3, 1) < 20f && func_154(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_154(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_240(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_239(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_93)
							{
								uParam0->f_7 = func_238(uParam0->f_4, uParam0->f_3);
								iVar0 = func_237(uParam0, &iVar1);
								if (!unk_0xE5D56342B0FF1D0D(iVar0))
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
										unk_0x48367A1F7C9A1041(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x48367A1F7C9A1041(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xCA8508992C844A64(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xE5D56342B0FF1D0D(iVar0))
											{
												unk_0x48367A1F7C9A1041(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xAC57FBF981AB03F4(uParam0->f_3);
							unk_0x36B42DB2912118E2(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x6B7CE8468EF50BAB(unk_0xBF1B13057E5119A4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_160(uParam0))
							{
								unk_0xAC57FBF981AB03F4(uParam0->f_3);
							}
							else if (((unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 1 && unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 0) && unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 7) && func_243(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x9F77DFFC61FCB68C(&(uParam0->f_243));
								unk_0xB5DC017AFD430D1B(&(uParam0->f_243));
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xEC0A546609840086(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xEC0A546609840086(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x6EE8A5CF9AC75F12(uParam0->f_243);
								unk_0x8229311A391A4EC6(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x22605DE2E6933CF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x823AFE6C22E61E55(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (func_143(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_236(uParam0, 1))
								{
									unk_0xCEBD1B99CF343672(uParam0->f_3);
									func_314(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_235(uParam0->f_4))
								{
									unk_0xCEBD1B99CF343672(uParam0->f_3);
									func_314(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_233(uParam0);
						if (func_243(uParam0, uParam0->f_3) < fVar4 || func_29())
						{
							if (unk_0x53170344050F2301(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_227(uParam0))
								{
									func_226(uParam0);
									iLocal_88 = unk_0xF976C624234A4AA8();
									unk_0x7FEDD088E489CE41(uParam0->f_3, 26, 1);
									func_128(uParam0, 5, 0);
									unk_0xC7AF1DA2B14B2283();
									unk_0x3E6ED0C6CF9AA077(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xB38B1727AB0E27B6(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x6B7CE8468EF50BAB(unk_0xBF1B13057E5119A4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_226(var uParam0)
{
	if (unk_0xD361727124133DF3(uParam0->f_8))
	{
		unk_0x43F7D508C655CBA3(uParam0->f_8, 0);
		unk_0xA0A65B537B1F11EC(&(uParam0->f_8));
	}
}

int func_227(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_208("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3) && !unk_0xE5D56342B0FF1D0D(uParam0->f_4))
	{
		func_137();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_172(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_120(uParam0, 0, 1084227584) && func_136(1, 1, 1))
			{
				if (func_236(uParam0, 1))
				{
					iLocal_87 = unk_0xF976C624234A4AA8();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_85 = 1;
				}
				else
				{
					func_314(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_238(uParam0->f_4, uParam0->f_3);
				iVar9 = func_237(uParam0, &iVar10);
				if (!unk_0xE5D56342B0FF1D0D(iVar9))
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
						unk_0x48367A1F7C9A1041(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x48367A1F7C9A1041(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xCA8508992C844A64(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xE5D56342B0FF1D0D(iVar9))
						{
							unk_0x48367A1F7C9A1041(iVar9, 0, 4096);
						}
					}
				}
				iLocal_85 = 2;
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
			iVar12 = func_232(&(uParam0->f_409), unk_0x0CAFB9D38494283D(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0CAFB9D38494283D(uParam0->f_4, Var0), 1);
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
				func_171(0, 0, 1);
				unk_0xAB97C8EA78D4E7DF(unk_0xBF1B13057E5119A4(uParam0->f_4, 1), 3f, 0);
				unk_0x2F36A13C15BE17D7(unk_0xBF1B13057E5119A4(uParam0->f_4, 1), 25f, 0);
				unk_0x4A4C1A1BC79EFE8F(1);
				unk_0x3DF5706BBD8F5B5B();
				func_230();
				func_246(uParam0, 0, 0);
				Var13 = { unk_0x0CAFB9D38494283D(uParam0->f_4, Var6) };
				unk_0xF85858E5CBF4D9F0(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(uParam0->f_3, func_229(uParam0));
				func_170(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xEEA9AFA5E9078090(*uParam0, unk_0x0CAFB9D38494283D(uParam0->f_4, Var0));
				unk_0x93C2314254F245A2(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x6F430D0F1783A56E(*uParam0, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				unk_0x243553B40CC46CFE(uParam0->f_3, 0, 0);
				unk_0x36B42DB2912118E2(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			func_208("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3) && !unk_0xE5D56342B0FF1D0D(uParam0->f_4))
			{
				if (!unk_0x2A24448FF232F834(uParam0->f_3, 0))
				{
					unk_0x11460EBE0487B44F(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x7E40829CCC49E744(uParam0->f_4, func_228(uParam0->f_7), 1);
				}
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				unk_0x44151B6071157DDD(*uParam0, 0);
				unk_0x44151B6071157DDD(uParam0->f_1, 0);
				unk_0xBE5E0E5A454F4D6A(0);
				unk_0x77CB1AAAF31275BE(0, 1065353216);
				unk_0x662E87A876F1069D(800);
				unk_0x4A4C1A1BC79EFE8F(1);
				unk_0x3DF5706BBD8F5B5B();
				func_230();
				func_246(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (unk_0x8D4100BAA46EE198() && !unk_0xC17F446CF864854D())
			{
				func_158(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
			unk_0x44151B6071157DDD(*uParam0, 0);
			unk_0x44151B6071157DDD(uParam0->f_1, 0);
			unk_0xBE5E0E5A454F4D6A(0);
			unk_0x77CB1AAAF31275BE(0, 1065353216);
			func_158(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3) && !unk_0xE5D56342B0FF1D0D(uParam0->f_4))
			{
				if (unk_0xADFF42956B1E6E0F(uParam0->f_3) || unk_0x2A24448FF232F834(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), -1794415470) != 1 && unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), -1794415470) != 0)
				{
					unk_0x36B42DB2912118E2(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_228(int iParam0)
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

float func_229(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_36() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0CAFB9D38494283D(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0CAFB9D38494283D(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_157(unk_0xBF1B13057E5119A4(uParam0->f_3, 1), Var1);
	return fVar0;
}

void func_230()
{
	Global_14558 = 0;
	func_231();
}

void func_231()
{
	if (unk_0xF611D1BB58990143())
	{
		unk_0xA2A4AD85BA2F7ADD();
		Global_16703 = 0;
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

int func_232(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x9400A3EC34709233(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xBFABF77FCEA8BA3F(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

void func_233(var uParam0)
{
	var uVar0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			if (func_312(uParam0->f_3, 1) > 30f || func_234(uParam0))
			{
				if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, -1794415470) == 1 || unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) == 1)
				{
					unk_0x9F77DFFC61FCB68C(&uVar0);
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0xDE75E9DE5B6221E1(0, uParam0->f_4, 0);
					unk_0xEC0A546609840086(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x3F07E364A21EBC20(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					unk_0x8229311A391A4EC6(uParam0->f_3, uVar0);
					func_314(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_234(var uParam0)
{
	if ((unk_0x11F6A4A45943670E(uParam0->f_4) > 3f && func_150(uParam0, 5) > 15f) || unk_0x932B30DC68C85A46(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xEB461363EE450DCA(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xEB461363EE450DCA(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xEB461363EE450DCA(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xEB461363EE450DCA(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x81A4DE5D88AD9A2C(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x81A4DE5D88AD9A2C(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x81A4DE5D88AD9A2C(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x81A4DE5D88AD9A2C(iParam0, 3))
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

int func_236(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xE634CB9EE7094537(uParam0->f_4, 1);
		iVar0[1] = unk_0xE634CB9EE7094537(uParam0->f_4, 2);
		iVar0[2] = unk_0xE634CB9EE7094537(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xFD68187442384158(iVar0[iVar4]))
			{
				if (unk_0xE5D56342B0FF1D0D(iVar0[iVar4]))
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
		if ((unk_0xF976C624234A4AA8() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		iVar0 = unk_0xE634CB9EE7094537(uParam0->f_4, 1);
		if (unk_0xFD68187442384158(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xE634CB9EE7094537(uParam0->f_4, 2);
			if (unk_0xFD68187442384158(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xE634CB9EE7094537(uParam0->f_4, 0);
				if (unk_0xFD68187442384158(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_238(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xF7D9833F1E3C722B(iParam0);
	Var0 = { unk_0xC9351EFF34BB33C0(iParam0, unk_0xBF1B13057E5119A4(iParam1, 1)) };
	if (unk_0x26EA758C2A691D06(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x26EA758C2A691D06(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xCA8508992C844A64(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xCA8508992C844A64(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xCA8508992C844A64(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xCA8508992C844A64(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_239(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		if (!unk_0x19F2D2C58150C825(uParam0->f_3) && func_312(uParam0->f_3, 1) < fParam2)
		{
			if (!func_180(uParam0, 5))
			{
				func_284(uParam0, 5, 0, 0);
			}
		}
		else if (func_180(uParam0, 5))
		{
			func_128(uParam0, 5, 0);
		}
		if (((func_150(uParam0, 5) > IntToFloat(iParam1) && unk_0x11F6A4A45943670E(uParam0->f_4) < fParam4) && !unk_0x19F2D2C58150C825(uParam0->f_3)) || func_312(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_240(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xD33827A2E07C4BE6(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xD33827A2E07C4BE6(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xF72E61A2DB753A80(uParam0->f_4, iVar18) };
		Var6 = { unk_0xC9351EFF34BB33C0(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0CAFB9D38494283D(uParam0->f_4, Var6) };
	Var3 = { unk_0x0CAFB9D38494283D(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x428FCEDAB4D8C227(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x2DC5B31EBB810396(uParam0->f_3, 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_143(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x75E01E8585722F89((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x9400A3EC34709233(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xBFABF77FCEA8BA3F(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 1 && unk_0xEC043AB2FEE0E94F(uParam0->f_3, 242628503) != 0)
			{
				unk_0x9F77DFFC61FCB68C(&(uParam0->f_243));
				unk_0xB5DC017AFD430D1B(&(uParam0->f_243));
				unk_0xEC0A546609840086(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0xC3DFF4EEE866DBF6(uParam0->f_243, 1);
				unk_0x6EE8A5CF9AC75F12(uParam0->f_243);
				unk_0x8229311A391A4EC6(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x3DF5706BBD8F5B5B();
			if (uParam0->f_411 != 9)
			{
				if (!func_133(uParam0->f_44, 128))
				{
					func_219(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_241(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xAC57FBF981AB03F4(uParam0->f_3);
			unk_0x8E759206778E571F(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x9F77DFFC61FCB68C(&(uParam0->f_243));
			unk_0xB5DC017AFD430D1B(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xEC0A546609840086(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xEC0A546609840086(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
			unk_0x6EE8A5CF9AC75F12(uParam0->f_243);
			unk_0x8229311A391A4EC6(uParam0->f_3, uParam0->f_243);
			unk_0x9F77DFFC61FCB68C(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (unk_0x22605DE2E6933CF2(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x823AFE6C22E61E55(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_241(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xD5197208E9370D3D(uParam0, sParam1, uParam2, func_242(iParam3), 0);
}

int func_242(int iParam0)
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

float func_243(var uParam0, int iParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		if (func_160(uParam0))
		{
			return func_143(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_244(var uParam0)
{
	func_200(uParam0, uParam0->f_3);
	if (func_160(uParam0))
	{
		if (func_180(uParam0, 14))
		{
			func_202(uParam0);
			if (unk_0xD361727124133DF3(uParam0->f_10))
			{
				unk_0xA0A65B537B1F11EC(&(uParam0->f_10));
			}
		}
	}
	if (!func_180(uParam0, 9))
	{
		if (unk_0xD361727124133DF3(uParam0->f_8))
		{
			unk_0x80882386D3DF8627(uParam0->f_8, 0);
			unk_0x43F7D508C655CBA3(uParam0->f_8, 0);
		}
		func_284(uParam0, 9, 0, 0);
		func_245("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_245(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 1);
}

void func_246(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_140();
		func_284(uParam0, 16, 4f, 0);
		unk_0x3DF5706BBD8F5B5B();
	}
}

int func_247(var uParam0, int iParam1)
{
	if (!unk_0x6C741637F73EA9EC(0))
	{
		return 0;
	}
	func_253(12);
	if (func_133(uParam0->f_44, 8))
	{
		if (!func_133(uParam0->f_44, 128))
		{
			if (unk_0x865FD939154C0034(unk_0x507DA4994C3D8EBD()) && !func_133(uParam0->f_44, 256))
			{
				func_54(&(uParam0->f_44), 256);
			}
			if (func_133(uParam0->f_44, 256) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				func_219(uParam0, 135, 1, 0, 1);
				func_54(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_251(uParam0, iParam1))
	{
		if (func_312(uParam0->f_3, 1) < 35f)
		{
			if (!func_133(uParam0->f_44, 8))
			{
				unk_0xDE75E9DE5B6221E1(uParam0->f_3, unk_0x507DA4994C3D8EBD(), 0);
				func_219(uParam0, 133, 1, 0, 1);
				func_54(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x9F94F2CFDCA78C55(uParam0->f_3) || unk_0x1BA961C8CF14F399(uParam0->f_3)) || func_312(uParam0->f_3, 1) > 400f)
		{
			func_314(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x78AB10B64129B3D5(uParam0->f_2, 0);
		unk_0xC158AF2A8304483D(uParam0->f_4, 1);
		if (unk_0xE634CB9EE7094537(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x6C5479F57AAC2554(uParam0->f_4);
			func_249(uParam0);
			func_42(2, 0);
			bLocal_93 = true;
			func_151(&uLocal_89);
			return 1;
		}
		else
		{
			func_314(uParam0, "No Taxi", 21);
			func_248("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_248(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_249(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_4))
	{
		if (func_250())
		{
		}
	}
}

int func_250()
{
	if (unk_0x61D8FEAF64881CDA(unk_0x4D3E68F73B727E49(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				iVar1 = unk_0x26EA758C2A691D06(iVar0);
				bVar2 = func_235(iVar0);
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
				if (unk_0x4658BA5921D40213(iVar1))
				{
					if (unk_0xE634CB9EE7094537(iVar0, -1) == unk_0x507DA4994C3D8EBD())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xF7D9833F1E3C722B(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_133(uParam0->f_44, 64))
					{
						func_248("TX_VIP_DMGD", -1);
						if (func_252("TX_VIP_DMGD"))
						{
							func_54(&(uParam0->f_44), 64);
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_133(uParam0->f_44, 32))
					{
						func_248("TX_VIP_CAR", -1);
						if (func_252("TX_VIP_CAR"))
						{
							func_54(&(uParam0->f_44), 32);
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_133(uParam0->f_44, 16))
					{
						func_248("TX_VIP_SMALL", -1);
						if (func_252("TX_VIP_SMALL"))
						{
							func_54(&(uParam0->f_44), 16);
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_138(&(uParam0->f_44), 16);
			func_138(&(uParam0->f_44), 64);
			func_138(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_252(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_253(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x2F4E1FF400251C08() || unk_0x5D64B4BDB6FCA4F0())
	{
		uVar0 = iParam0;
		unk_0x25A20EA9824CF18A(8, &uVar0, 1, 1);
	}
	else if (unk_0x9763C0E44A644CB2() || unk_0xA09FDB4B3C001CAB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xE910527B20D11CBB(8, &cVar1);
	}
}

void func_254()
{
	Local_342.f_0 = 0;
	func_271(40033, 40008, 1);
	func_271(39769, 39745, 1);
	func_271(39684, 39659, 1);
	func_271(39588, 39564, 1);
	func_271(39454, 39433, 1);
	func_271(39380, 39355, 1);
	func_271(39213, 39189, 1);
}

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_256(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0->f_4))
	{
		if (func_258(uParam0->f_4))
		{
			func_257(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_258(int iParam0)
{
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xBA2FAB683F225FF0(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xD803509E70F20530(iParam0, 0, 40000) || unk_0xD803509E70F20530(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
	{
		if (func_261(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_261(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_262(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_257(uParam0, 11);
	return 1;
}

int func_263(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0->f_4))
	{
		if (unk_0x26FE3F0A2045AA7E(uParam0->f_4) && !unk_0x525FB3C56A2F33BE(uParam0->f_4))
		{
			if (!func_180(uParam0, 25))
			{
				func_284(uParam0, 25, 0, 0);
			}
			else if (func_150(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_180(uParam0, 25))
		{
			func_128(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_265(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_4))
	{
		if (unk_0x7C415C27D612EB5A(uParam0->f_4))
		{
			if (unk_0xD803509E70F20530(uParam0->f_4, 0, 40000) || unk_0xD803509E70F20530(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_266(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_267(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_4))
	{
		if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
		{
			if (unk_0x2ACEA6F88B3AFFB0(uParam0->f_4))
			{
				if (func_261(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_269(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0->f_4))
	{
		if (func_270(uParam0->f_4))
		{
			func_257(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xBA2FAB683F225FF0(iParam0) == 0f)
	{
		if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xD803509E70F20530(iParam0, 0, 40000) || unk_0xD803509E70F20530(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_271(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_55(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_55(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_273(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0->f_3))
	{
		if ((unk_0x9F94F2CFDCA78C55(uParam0->f_3) || unk_0xE5D56342B0FF1D0D(uParam0->f_3)) || unk_0xEF57771119A32DB2(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_139(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_275(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xCD27BF29FB9012E2(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xCD27BF29FB9012E2(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_276(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_277()
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

int func_278()
{
	if (!unk_0xD291857D0C9C7FEC(iLocal_839))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_851, 1000);
		return 0;
	}
	if (!unk_0xE908465F9CDF4F1A(uLocal_1117))
	{
		return 0;
	}
	if (!func_279(&iLocal_851, 1))
	{
		func_208("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_851, 1000);
		return 0;
	}
	return 1;
}

int func_279(int iParam0, bool bParam1)
{
	if (!unk_0xD291857D0C9C7FEC(func_19()))
	{
		func_208("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xCE40391AB65FE305("gestures@m@standing@casual"))
		{
			func_208("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xCE40391AB65FE305("oddjobs@taxi@"))
	{
		func_208("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305("oddjobs@towingcome_here"))
	{
		func_208("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xCE40391AB65FE305("misscommon@response"))
	{
		func_208("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x6C741637F73EA9EC(2))
	{
		func_208("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_280(var uParam0, int iParam1)
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

int func_281(var uParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
	{
		uParam0->f_8 = func_144(uParam0->f_3, 0, 0);
		unk_0x88F9FBE498E45109(1, 0);
		unk_0x43F7D508C655CBA3(uParam0->f_8, 1);
		unk_0x2B271F66198227B7(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x8E759206778E571F(uParam0->f_3, unk_0x507DA4994C3D8EBD(), -1, 2048, 4);
	}
	return 1;
}

int func_282(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xFD68187442384158(uParam0->f_3))
	{
		func_283(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_35(uParam0->f_14, 0);
		unk_0xAB97C8EA78D4E7DF(uParam0->f_14, 2f, 0);
		func_33(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xFBA8162159A66DCF(uParam0->f_11);
		}
		else if (unk_0xFD68187442384158(Global_95887.f_225[0]))
		{
			uParam0->f_3 = Global_95887.f_225[0];
			unk_0xBAE5DF507EEC53C8(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x7B88529CAE3B7F15(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x454E090239AFF6E8(uParam0->f_3, sParam7);
		unk_0xE131FC34DA8AD63F(uParam0->f_3, 112, 1);
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
		{
			unk_0x94A4D627D865396B(uParam0->f_3, 250);
			unk_0x7FEDD088E489CE41(uParam0->f_3, 32, 0);
			unk_0x7FEDD088E489CE41(uParam0->f_3, 104, 1);
			unk_0x7FEDD088E489CE41(uParam0->f_3, 177, 1);
			unk_0x7FEDD088E489CE41(uParam0->f_3, 116, 0);
			unk_0x46B6351EE89452C8("TAXI_Passenger", &(uParam0->f_413));
			unk_0xCA4EA7D4F6DCCD43(1, uParam0->f_413, joaat("player"));
			unk_0xCA4EA7D4F6DCCD43(2, uParam0->f_413, joaat("COP"));
			unk_0xE440546F94B26235(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_283(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xA6FA78C13B14EFC2(Param1, 20f, 5f, 0);
}

void func_284(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_62(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_89(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_62(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_89(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_285()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_839);
	func_287(1);
	uLocal_1117 = func_286();
	unk_0x6C900C4DB868DED9("SCRIPT\TREVOR_2_BIKER_RINGTONE", 0);
}

var func_286()
{
	return unk_0xAFBDE0BB5C885026("MIDSIZED_MESSAGE");
}

void func_287(bool bParam0)
{
	unk_0xCBE6AC5010E5CE5C(func_19());
	if (bParam0)
	{
		unk_0x395C5D98343F0040("gestures@m@standing@casual");
	}
	unk_0x395C5D98343F0040("oddjobs@taxi@");
	unk_0x395C5D98343F0040("oddjobs@towingcome_here");
	unk_0x395C5D98343F0040("misscommon@response");
	unk_0x481B0AD01AC057F7("TAXI", 2);
	if (!func_133(Global_97173.f_17318, 128))
	{
		func_54(&(Global_97173.f_17318), 128);
	}
}

void func_288(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
		{
			if (bParam2)
			{
				if (func_150(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_219(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_219(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_284(uParam0, 10, 0f, 1);
				}
			}
			else if (func_150(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_219(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_219(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_284(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_150(uParam0, 10) > 30f)
		{
			if (!func_152())
			{
				if (uParam0->f_112)
				{
					func_219(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_219(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_284(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_133(uParam0->f_100, 64))
	{
		if (!func_14(&(Local_189[5 /*10*/].f_6)))
		{
			func_151(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_311(uParam0))
			{
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_310(uParam0, 1);
				func_308(5, uParam0);
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 1))
	{
		if (!func_14(&(Local_189[0 /*10*/].f_6)))
		{
			func_151(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_306(uParam0))
			{
				func_310(uParam0, 1);
				func_308(0, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 2))
	{
		if (!func_14(&(Local_189[1 /*10*/].f_6)))
		{
			func_151(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_305(uParam0))
			{
				func_310(uParam0, 1);
				func_308(1, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 2048))
	{
		if (!func_14(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0xFD68187442384158(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x5D422B4764FA2ACA(uParam0->f_4);
				func_151(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_87(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_304(uParam0))
			{
				func_310(uParam0, 1);
				func_308(8, uParam0);
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 128))
	{
		if (!func_14(&(Local_189[6 /*10*/].f_6)))
		{
			func_151(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_303(uParam0))
			{
				func_310(uParam0, 1);
				func_308(6, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 32))
	{
		if (!func_14(&(Local_189[4 /*10*/].f_6)))
		{
			func_151(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_302(uParam0))
			{
				func_310(uParam0, 1);
				func_308(4, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 256))
	{
		if (!func_14(&(Local_189[7 /*10*/].f_6)))
		{
			func_151(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_301(uParam0))
			{
				func_308(7, uParam0);
				func_310(uParam0, 1);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 8))
	{
		if (!func_14(&(Local_189[9 /*10*/].f_6)))
		{
			func_151(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xDFA69A35174944B2(unk_0xAF65E5A58BE87D95());
		}
		else if (func_87(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_300(uParam0))
			{
				func_310(uParam0, 1);
				func_308(9, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 16384))
	{
		if (!func_14(&(Local_189[13 /*10*/].f_6)))
		{
			func_151(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_294(uParam0))
			{
				func_310(uParam0, 1);
				func_308(13, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 32768))
	{
		if (!func_14(&(Local_189[14 /*10*/].f_6)))
		{
			func_151(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_293(uParam0))
			{
				func_310(uParam0, 1);
				func_308(14, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 4096))
	{
		if (!func_14(&(Local_189[11 /*10*/].f_6)))
		{
			func_151(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_292(uParam0))
			{
				func_310(uParam0, 1);
				func_308(11, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 8192))
	{
		if (!func_14(&(Local_189[12 /*10*/].f_6)))
		{
			func_151(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_87(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_291(uParam0))
			{
				func_310(uParam0, 1);
				func_308(12, uParam0);
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
			}
		}
	}
	if (func_133(uParam0->f_100, 4))
	{
		if (!func_14(&(Local_189[2 /*10*/].f_6)))
		{
			func_290(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_87(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_289(uParam0))
			{
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_310(uParam0, 1);
				func_308(2, uParam0);
				func_307(uParam0);
			}
		}
	}
}

int func_289(var uParam0)
{
	float fVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(uParam0->f_2))
	{
		if ((!unk_0x3428BABF05B108EE(uParam0->f_2) && !func_14(&(Local_189[0 /*10*/].f_3))) && !func_14(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x11F6A4A45943670E(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_151(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_87(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x11F6A4A45943670E(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_86(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_86(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_290(var uParam0, float fParam1)
{
	if (!func_14(uParam0))
	{
		func_62(uParam0, fParam1);
	}
}

int func_291(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		Var0 = { unk_0xA159D8B7175A5386(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_14(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_189[12 /*10*/].f_3)))
			{
				func_151(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_86(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_292(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xCA8794CE207FC6D5(uParam0->f_4, 0) && !func_14(&(Local_189[0 /*10*/].f_3))) && !func_14(&(Local_189[1 /*10*/].f_3))) && !func_14(&(Local_189[5 /*10*/].f_3))) && !func_14(&(Local_189[9 /*10*/].f_3))) && !func_14(&(Local_189[7 /*10*/].f_3))) && !func_14(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0xA159D8B7175A5386(uParam0->f_4, 1) };
		if (unk_0x75E01E8585722F89(Var0.f_0) > 2.5f && !func_14(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_189[11 /*10*/].f_3)))
			{
				func_151(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.f_0;
			}
			else if (func_87(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0x75E01E8585722F89(uLocal_341) - unk_0x75E01E8585722F89(Var0.f_0)) < 0f)
			{
				func_86(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_87(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_86(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_293(var uParam0)
{
	if (((((unk_0xCA8794CE207FC6D5(uParam0->f_4, 0) && !func_14(&(Local_189[0 /*10*/].f_3))) && !func_14(&(Local_189[8 /*10*/].f_3))) && !func_14(&(Local_189[5 /*10*/].f_3))) && !func_14(&(Local_189[9 /*10*/].f_3))) && !func_14(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x9A67DC5FE3A03F32(unk_0xBF1B13057E5119A4(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xFD68187442384158(uParam0->f_5))
			{
				if ((unk_0x11F6A4A45943670E(uParam0->f_4) > 15f && func_143(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xE5D56342B0FF1D0D(uParam0->f_5) && !unk_0xC51FBEBD87CFD69C(uParam0->f_5, -1)))
				{
					func_151(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_87(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_143(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x087F7B968CB47182(uParam0->f_5))
		{
			func_86(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_87(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_86(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x087F7B968CB47182(uParam0->f_5))
		{
			func_86(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_294(var uParam0)
{
	if (((unk_0xCA8794CE207FC6D5(uParam0->f_4, 0) && !func_14(&(Local_189[9 /*10*/].f_3))) && !func_14(&(Local_189[7 /*10*/].f_3))) && !func_14(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_295(uParam0->f_4) && unk_0x11F6A4A45943670E(uParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_189[13 /*10*/].f_3)))
			{
				func_151(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_86(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_295(int iParam0)
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
	
	unk_0x28360C2B9B86505E(unk_0xBF1B13057E5119A4(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x28360C2B9B86505E(unk_0xBF1B13057E5119A4(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xE975CFA93E09C576(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_299((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_298(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_296(unk_0xBF1B13057E5119A4(iParam0, 1), Var15, Var18, Var21);
}

int func_296(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_299(Param6 - Param3) };
	Var3 = { func_299(Param9 - Param3) };
	fVar6 = func_297(Param0, Var0);
	fVar7 = func_297(Param3, Var0);
	fVar8 = func_297(Param6, Var0);
	fVar9 = func_297(Param0, Var3);
	fVar10 = func_297(Param3, Var3);
	fVar11 = func_297(Param9, Var3);
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

float func_297(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_298(struct<3> Param0, int iParam3)
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

Vector3 func_299(struct<3> Param0)
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

int func_300(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0xE634CB9EE7094537(uParam0->f_4, -1) == unk_0x507DA4994C3D8EBD())
		{
			if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0xE634CB9EE7094537(uParam0->f_4, -1) == unk_0x507DA4994C3D8EBD())
		{
			if (unk_0x932B30DC68C85A46(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0x13D65835892E426D(uParam0->f_4) <= -145f || unk_0x13D65835892E426D(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0x13D65835892E426D(uParam0->f_4) <= 35f && unk_0x13D65835892E426D(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_302(var uParam0)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		iVar0 = unk_0x21C65FE2A4DA9912(unk_0xAF65E5A58BE87D95());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_189[4 /*10*/].f_3)))
			{
				func_151(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_86(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_303(var uParam0)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDEB4FF3AA365AC5A(unk_0xAF65E5A58BE87D95());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_189[6 /*10*/].f_3)))
			{
				func_151(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_86(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0x5800F5EE75107519(uParam0->f_4))
		{
			iVar0 = unk_0x5D422B4764FA2ACA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x7CEA616AE5D86DF7(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_219(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_219(uParam0, 72, 1, 0, 1);
				}
				func_86(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		Var0 = { unk_0xA159D8B7175A5386(uParam0->f_4, 1) };
		if (unk_0x75E01E8585722F89(Var0.f_0) > 3f && !func_14(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_189[1 /*10*/].f_3)))
			{
				func_151(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_86(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (!unk_0x525FB3C56A2F33BE(uParam0->f_4) && unk_0xF97DDB74A78F6500(uParam0->f_4))
		{
			if (!func_14(&(Local_189[0 /*10*/].f_3)))
			{
				func_151(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_86(&(Local_189[0 /*10*/].f_3));
				func_89(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_307(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_14(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_89(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_284(uParam0, 10, 0f, 1);
	unk_0xDFA69A35174944B2(unk_0xAF65E5A58BE87D95());
}

void func_308(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_309(uParam1, iParam0);
	func_86(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_309(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_310(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_311(var uParam0)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0x11F6A4A45943670E(uParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_189[5 /*10*/].f_3)))
			{
				func_151(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_87(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_86(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_86(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_312(int iParam0, int iParam1)
{
	return func_143(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), iParam0, iParam1);
}

int func_313(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
	{
		if (unk_0xFD68187442384158(iParam1))
		{
			if (unk_0x6255AE2591FE7603(iParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0xFD68187442384158(iParam1))
			{
				if (unk_0x6255AE2591FE7603(iParam1, unk_0x507DA4994C3D8EBD(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_314(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_147();
	func_411(2);
	Var0 = { func_135() };
	if ((!unk_0x8FA72E132AAFA62F(&Var0) && func_152()) && !unk_0xA858564DC37EED5E(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x3DF5706BBD8F5B5B();
		unk_0x4A4C1A1BC79EFE8F(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
		{
			if (!func_123(uParam0))
			{
				if (unk_0x22605DE2E6933CF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xB7672D87B547201C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x22605DE2E6933CF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xB7672D87B547201C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x22605DE2E6933CF2(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xB7672D87B547201C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_284(uParam0, 3, 0, 0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_123(uParam0))
			{
				if (unk_0x2ACEA6F88B3AFFB0(uParam0->f_4))
				{
					func_317(uParam0, 4096, 0);
				}
				else
				{
					func_317(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_319(uParam0, &Var0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_319(uParam0, &Var0);
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_319(uParam0, &Var0);
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_42(8, 0);
			iLocal_56[3] = 1;
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_317(uParam0, 0, 0);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_42(8, 0);
			iLocal_56[3] = 1;
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_42(8, 0);
			iLocal_56[3] = 1;
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_316(&Var0);
			func_315(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_319(uParam0, &Var0);
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
					func_319(uParam0, &Var0);
				}
			}
			else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
			{
				func_241(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_42(3, 0);
		}
		func_284(uParam0, 3, 0f, 1);
	}
}

int func_315(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_169(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_163(sParam2, iParam3, 0);
}

void func_316(char* sParam0)
{
	switch (func_3(unk_0x507DA4994C3D8EBD()))
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

void func_317(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		unk_0x2DC5B31EBB810396(uParam0->f_3, 0);
		unk_0x7CEA616AE5D86DF7(uParam0->f_3);
		unk_0xB2B080B88A4144B7(uParam0->f_3, 3, 0);
		unk_0x3A1E687904400847(uParam0->f_3, 17, 1);
		unk_0xAC57FBF981AB03F4(uParam0->f_3);
		if ((func_146(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_118(uParam0->f_29)) && !bParam2)
		{
			func_318(uParam0);
		}
		else
		{
			unk_0xB2B080B88A4144B7(uParam0->f_3, 1024, 1);
			unk_0xB2B080B88A4144B7(uParam0->f_3, 131072, 1);
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x48367A1F7C9A1041(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xB68382181B4C4177(0, 1193033728, 0);
			}
			else
			{
				unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
			}
			unk_0x9621E1F79C388756(0, 0);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(uParam0->f_3, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
		unk_0xA1E4BA3B17C6D931(uParam0->f_3, 1);
	}
}

void func_318(var uParam0)
{
	var uVar0;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		if (func_412(func_36(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x248DC16118AE5035(uParam0->f_3, 84.9058f);
				unk_0xA1E4BA3B17C6D931(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x248DC16118AE5035(uParam0->f_3, 68.3138f);
				unk_0xA1E4BA3B17C6D931(uParam0->f_3, 1);
			}
			else
			{
				unk_0xB68382181B4C4177(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xAC57FBF981AB03F4(uParam0->f_3);
			unk_0x9F77DFFC61FCB68C(&uVar0);
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x48367A1F7C9A1041(0, 0, 0);
			unk_0x9621E1F79C388756(0, 0);
			unk_0x3F07E364A21EBC20(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xD949233C5686F928(0, 1);
				unk_0x3F07E364A21EBC20(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xDA74C6C73AFEC1F3(0, 151.7794f, 0);
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x03BE6E1931460594(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x03BE6E1931460594(0, uParam0->f_29, 15f, 20000);
				unk_0xB68382181B4C4177(0, 1193033728, 0);
			}
			else
			{
				unk_0xEC0A546609840086(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xE08642374BA21D0D(uParam0->f_29, 15f, 1))
			{
				unk_0x03BE6E1931460594(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xB68382181B4C4177(0, 1193033728, 0);
			}
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(uParam0->f_3, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
		unk_0xA1E4BA3B17C6D931(uParam0->f_3, 1);
	}
}

void func_319(var uParam0, char* sParam1)
{
	if (func_320(uParam0))
	{
		func_315(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_320(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		if (func_143(unk_0x507DA4994C3D8EBD(), uParam0->f_3, 1) < 40f && !unk_0x19F2D2C58150C825(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	return uParam0->f_118;
}

void func_322()
{
	func_352(&Local_409);
	if (func_351(&Local_409, &Local_1038))
	{
		switch (Local_1038.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_350(&Local_409))
					{
						if (func_349("TX_OBJ_GYN_DO") || unk_0xD361727124133DF3(Local_409.f_9))
						{
							Local_1038.f_27++;
						}
						else if (func_212(&Local_409) != 10)
						{
							func_219(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_212(&Local_409) > 10 && func_212(&Local_409) != 15) && !func_350(&Local_409))
				{
					func_219(&Local_409, 15, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					func_179(&Local_409, 7);
				}
				break;
			
			case 2:
				if (func_150(&Local_409, 18) > 4f && !iLocal_863)
				{
					iLocal_857 = unk_0xCA225EEF4090469C();
					unk_0xC4E6094A4C954E29(iLocal_857, "Biker_Ring_Tone", Local_409.f_4, "TREVOR_2_SOUNDS", 0, 0);
					iLocal_863 = 1;
				}
				else if (((func_150(&Local_409, 18) > 7f && func_212(&Local_409) != 16) && iLocal_863) && !iLocal_865)
				{
					func_348(&iLocal_857);
					if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3))
					{
						unk_0xE2E6B3E5187DD69C(Local_409.f_3, 1, 1);
					}
					func_219(&Local_409, 16, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					iLocal_865 = 1;
				}
				break;
			
			case 3:
				if (!unk_0x9F94F2CFDCA78C55(Local_409.f_3))
				{
					unk_0xE2E6B3E5187DD69C(Local_409.f_3, 0, 1);
				}
				Local_1038.f_27++;
				break;
			
			case 5:
				if (func_150(&Local_409, 18) > 2f && func_212(&Local_409) != 131)
				{
					func_219(&Local_409, 131, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					Local_1038.f_27++;
				}
				break;
			}
	}
	func_323(&Local_409, &uLocal_1068, &Local_1038, bLocal_1037);
}

int func_323(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_331(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_180(uParam0, 2))
	{
		if (func_330(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xF976C624234A4AA8() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_329(uParam0))
				{
					uParam2->f_7 = { func_328(uParam1) };
					func_315(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_152())
				{
					uParam2->f_13 = { func_222() };
					if (unk_0xA858564DC37EED5E(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_55(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_326(uParam1);
					func_284(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_186(uParam0))
				{
					if (func_152())
					{
						func_284(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_325() };
						if (unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_152())
				{
					uParam2->f_19 = { func_135() };
				}
				else
				{
					func_55(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_326(uParam1);
					func_284(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_180(uParam0, 14) && !func_152()) && !func_186(uParam0)) && func_150(uParam0, 18) > 1f)
				{
					func_284(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_152())
				{
					if (func_150(uParam0, 18) > 1f)
					{
						if (!unk_0x8FA72E132AAFA62F(&(uParam2->f_1)))
						{
							func_324(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_152())
				{
					func_55(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_326(uParam1);
					func_284(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_324(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_169(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_163(sParam2, iParam4, 0);
}

struct<6> func_325()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xB578A5EEDCABA08F();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD177A95825B53731(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD177A95825B53731(&(Global_14560[iVar8 /*6*/])))
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

void func_326(var uParam0)
{
	int iVar0;
	
	iVar0 = func_327(uParam0);
	if (iVar0 > -1)
	{
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_54(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
	}
}

int func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_133((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_328(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_133((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_54(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_329(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_188("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_188("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_188("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_188("TX_OBJ_GYB_DO", 0, 0) || func_188("TAXI_OBJ_GYB", 0, 0)) || func_188("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_188("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_188("TX_OBJ_CYI_DO", 0, 0) || func_188("TAXI_OBJ_CYI_01", 0, 0)) || func_188("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_188("TX_OBJ_GYN_DO", 0, 0) || func_188("TAXI_OBJ_GYN", 0, 0)) || func_188("TAXI_OBJ_GYN_TG", 0, 0)) || func_188("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_188("TAXI_OBJ_CC1", 0, 0) || func_188("TAXI_OBJ_CC2", 0, 0)) || func_188("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_188("TAXI_OBJ_FTC1", 0, 0) || func_188("TAXI_OBJ_FTC2", 0, 0)) || func_188("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_188("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_188("TAXI_OBJ_GETRUN", 0, 0) || func_188("TAXI_OBJ_DRIVE", 0, 0)) || func_188("TAXI_OBJ_RETURN", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0)) || func_188("TAXI_OBJ_RUNOUT", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0));
}

int func_330(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_133((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_329(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_180(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_212(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_346(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_152())
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
						func_345(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 2));
				}
				if (func_133(uParam0->f_98, 4))
				{
					func_284(uParam0, 16, 0, 0);
					func_246(uParam0, 0, 0);
				}
				func_197(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_150(uParam0, 16) > 1f)
				{
					func_199(1);
					if (uParam0->f_411 == 9)
					{
						func_245("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_245("TAXI_VIP_RETURN", 7500, 1);
					}
					func_284(uParam0, 16, 0, 0);
					func_246(uParam0, 0, 0);
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
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
				{
					func_241(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_150(uParam0, 16) > func_132(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_152()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_212(uParam0))
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
				func_345(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_346(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_315(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_219(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_284(uParam0, 16, 0, 0);
				func_219(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_133(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_347(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_345(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_284(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_245("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_245("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD361727124133DF3(uParam0->f_9))
					{
						uParam0->f_9 = func_131(uParam0->f_17, 1);
					}
					else if (unk_0x714F1BB644001893(uParam0->f_9) == 0)
					{
						unk_0x80882386D3DF8627(uParam0->f_9, 255);
						unk_0x2F81977123174F1A(uParam0->f_9, uParam0->f_17);
						unk_0x43F7D508C655CBA3(uParam0->f_9, 1);
					}
				}
				func_219(uParam0, 10, 1, 0, 0);
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
				func_221(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_241(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD361727124133DF3(uParam0->f_9))
					{
						uParam0->f_9 = func_131(uParam0->f_17, 1);
					}
					else if (unk_0x714F1BB644001893(uParam0->f_9) == 0)
					{
						unk_0x80882386D3DF8627(uParam0->f_9, 255);
						unk_0x2F81977123174F1A(uParam0->f_9, uParam0->f_17);
						unk_0x43F7D508C655CBA3(uParam0->f_9, 1);
					}
				}
				func_219(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_341(uParam0, 33554432, Var0, "", 1, 8);
				func_284(uParam0, 16, 0, 0);
				func_219(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_152())
				{
					func_340(uParam0, 0);
					func_54(&(uParam0->f_44), 4);
					func_284(uParam0, 16, 0, 0);
					func_219(uParam0, 13, 0, 0, 0);
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
				func_221(&Var0);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_150(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_221(&Var0);
					}
					func_338(Var0, uParam1);
					func_54(&(uParam0->f_81), 67108864);
					func_284(uParam0, 16, 0, 0);
					func_284(uParam0, 11, 0, 0);
					func_246(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_150(uParam0, 11) > uParam0->f_36)
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
							func_221(&Var0);
						}
					}
					func_338(Var0, uParam1);
					func_284(uParam0, 11, 0, 0);
					func_284(uParam0, 16, 0, 0);
					func_246(uParam0, 0, 0);
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
					func_221(&Var0);
				}
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
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
				func_221(&Var0);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
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
				func_221(&Var0);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_221(&Var0);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				func_54(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 1, 0, 8);
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
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
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
					func_337(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_337(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_338(Var0, uParam1);
				func_346(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 6, 0f, 1);
				func_246(uParam0, 0, 0);
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
					func_337(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_337(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_338(Var0, uParam1);
				func_346(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 6, 0f, 1);
				func_246(uParam0, 0, 0);
				break;
			
			case 12:
				func_245("TAXI_OBJ_GYB", 3500, 1);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_245("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_245("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_245("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
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
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_133(uParam0->f_98, 268435456))
				{
					func_245("TAXI_OBJ_CYI_01", 7500, 1);
					func_54(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_221(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_221(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_221(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 33:
				func_245("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_133(uParam0->f_82, 8192))
				{
					if (func_150(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_221(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_338(Var0, uParam1);
						}
						else
						{
							func_345(uParam0, &Var0, 0, 0, 8);
						}
						func_54(&(uParam0->f_82), 8192);
						func_284(uParam0, 16, 0, 0);
						func_284(uParam0, 11, 0, 0);
						func_246(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_133(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_221(&Var0);
					func_345(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_133(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_221(&Var0);
					func_345(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 46, 1, 0, 0);
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
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_246(uParam0, 0, 0);
				break;
			
			case 139:
				func_245("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_219(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x4D3E68F73B727E49(0, 120);
				if (!func_133(uParam0->f_82, 268435456))
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
					func_54(&(uParam0->f_82), 268435456);
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
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x4D3E68F73B727E49(0, 100);
				if (!func_133(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_54(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_245("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_246(uParam0, 0, 0);
				func_219(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_152())
				{
					func_245("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_246(uParam0, 0, 0);
					func_219(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_245("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_246(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_133(uParam0->f_81, 1))
				{
					func_336(uParam0, 1, Var0, "_sick1", 8);
					func_138(&(uParam0->f_81), 2);
				}
				else if (!func_133(uParam0->f_81, 2))
				{
					func_336(uParam0, 2, Var0, "_sick2", 8);
					func_138(&(uParam0->f_81), 1);
				}
				func_346(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_133(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_133(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_54(&(uParam0->f_81), 2097152);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_284(uParam0, 16, 0, 0);
				func_346(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_246(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_133(uParam0->f_81, 4))
				{
					func_336(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_133(uParam0->f_81, 8))
				{
					func_336(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_336(uParam0, 8, Var0, "_turns3", 8);
					func_138(&(uParam0->f_81), 4);
					func_138(&(uParam0->f_81), 8);
				}
				func_346(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_335(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
					{
						func_241(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_347(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_315(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_347(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_347(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_346(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_133(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 128);
					func_138(&(uParam0->f_83), 256);
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 256);
					func_138(&(uParam0->f_83), 512);
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 512);
					func_138(&(uParam0->f_83), 128);
					func_284(uParam0, 16, 0, 0);
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_133(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_221(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 1);
					func_138(&(uParam0->f_83), 2);
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_221(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 4);
					}
					else
					{
						func_138(&(uParam0->f_83), 1);
					}
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_221(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 4);
					func_138(&(uParam0->f_83), 1);
					func_284(uParam0, 16, 0, 0);
				}
				func_346(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_133(uParam0->f_81, 4096))
				{
					func_341(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_133(uParam0->f_81, 8192))
				{
					func_341(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_346(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_133(uParam0->f_81, 16384))
				{
					func_341(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_133(uParam0->f_81, 32768))
				{
					func_341(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_346(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_133(uParam0->f_82, 8))
					{
						func_334(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_133(uParam0->f_82, 16))
					{
						func_334(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_133(uParam0->f_82, 32))
					{
						func_334(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_246(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_347(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_284(uParam0, 16, 0, 0);
					func_246(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_133(uParam0->f_81, 65536))
				{
					func_341(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_133(uParam0->f_81, 131072))
				{
					func_341(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_335(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
					{
						func_241(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_133(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 8);
					func_138(&(uParam0->f_83), 16);
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 16);
					func_138(&(uParam0->f_83), 32);
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 64);
					}
					else
					{
						func_138(&(uParam0->f_83), 8);
					}
					func_284(uParam0, 16, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 64);
					func_138(&(uParam0->f_83), 8);
					func_284(uParam0, 16, 0, 0);
				}
				func_346(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_152())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 65));
					func_246(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_152())
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
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 66));
					func_246(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_152())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								func_346(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								func_346(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_347(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_346(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_284(uParam0, 16, 0, 0);
								func_246(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_345(uParam0, &Var0, 0, 0, 8);
									func_284(uParam0, 16, 0, 0);
									func_284(uParam0, 11, 0, 0);
									func_246(uParam0, 0, 0);
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
									func_221(&Var0);
									func_345(uParam0, &Var0, 0, 0, 8);
									func_284(uParam0, 16, 0, 0);
									func_284(uParam0, 11, 0, 0);
									func_246(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_219(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_133(uParam0->f_82, 1))
				{
					func_334(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_133(uParam0->f_82, 2))
				{
					func_334(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_133(uParam0->f_82, 4))
				{
					func_334(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_246(uParam0, 0, 0);
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
				func_347(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
				{
					func_241(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_284(uParam0, 16, 0, 0);
				func_346(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_335(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
					{
						func_241(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_333(uParam0, Var0, 8);
				}
				func_346(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_133(uParam0->f_83, 1024))
				{
					func_54(&(uParam0->f_83), 1024);
					func_284(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 2048))
				{
					func_54(&(uParam0->f_83), 2048);
					func_284(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_133(uParam0->f_83, 4096))
				{
					func_54(&(uParam0->f_83), 4096);
					func_284(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_221(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_133(uParam0->f_82, 1024))
				{
					func_334(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_138(&(uParam0->f_82), 2048);
				}
				else if (!func_133(uParam0->f_82, 2048))
				{
					func_334(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 52, 1, 0, 0);
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
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
				{
					func_241(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_335(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_345(uParam0, &Var0, 0, 0, 8);
						func_219(uParam0, 52, 1, 0, 0);
						func_284(uParam0, 16, 0, 0);
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
						func_345(uParam0, &Var0, 0, 0, 8);
						func_284(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_347(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_284(uParam0, 16, 0, 0);
					func_246(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_346(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_284(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x89D8D467C3C356CB(unk_0x4D82797EF5035A9F()) >= 1)
				{
					func_245("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_133(uParam0->f_81, 262144))
				{
					func_341(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_133(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_341(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_341(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_346(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_133(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_332(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_133(uParam0->f_82, 134217728))
				{
					func_332(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_346(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 100:
				func_245("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_246(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_221(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_221(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
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
					func_221(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_133(uParam0->f_82, 65536))
				{
					if (func_150(uParam0, 11) > uParam0->f_36)
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
						func_221(&Var0);
						func_338(Var0, uParam1);
						func_54(&(uParam0->f_82), 65536);
						func_284(uParam0, 16, 0, 0);
						func_284(uParam0, 11, 0, 0);
						func_246(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_133(uParam0->f_82, 131072))
				{
					if (func_150(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_221(&Var0);
						func_338(Var0, uParam1);
						func_54(&(uParam0->f_82), 131072);
						func_284(uParam0, 16, 0, 0);
						func_284(uParam0, 11, 0, 0);
						func_246(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_133(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_54(&(uParam0->f_82), 8388608);
				}
				else if (!func_133(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_54(&(uParam0->f_82), 16777216);
				}
				else if (!func_133(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_54(&(uParam0->f_82), 33554432);
				}
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_347(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_221(&Var0);
					func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_338(Var0, uParam1);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_347(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_162(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_219(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_54(&(uParam0->f_81), 2097152);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_221(&Var0);
				func_338(Var0, uParam1);
				func_54(&(uParam0->f_81), 67108864);
				func_284(uParam0, 16, 0, 0);
				func_284(uParam0, 11, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_133(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_341(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
					{
						func_241(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_219(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_133(uParam0->f_81, 268435456))
				{
					func_341(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_219(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_245("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_246(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_133(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_341(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
						{
							func_241(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_341(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_219(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_245("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_246(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_284(uParam0, 16, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_133(uParam0->f_81, 16777216))
				{
					func_341(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_246(uParam0, 0, 0);
				break;
			
			case 88:
				func_245("TAXI_TIEFLEE", 7500, 1);
				func_246(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_133(uParam0->f_98, 536870912))
				{
					func_245("TAXI_OBJ_CYI_1B", 7500, 1);
					func_54(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_246(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_221(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
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
				func_345(uParam0, &Var0, 0, 0, 8);
				func_246(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_246(uParam0, 0, 0);
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
				func_345(uParam0, &Var0, 0, 0, 8);
				func_246(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_345(uParam0, &Var0, 1, 0, 8);
				func_219(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_245("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_219(uParam0, 0, 0, 0, 0);
				func_246(uParam0, 0, 0);
				break;
			}
	}
}

void func_332(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_54(&(uParam0->f_82), iParam1);
	func_284(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_221(&Param2);
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_333(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_133(uParam0->f_82, 64))
	{
		func_54(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_133(uParam0->f_82, 128))
	{
		func_54(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x4D3E68F73B727E49(1, 3), 24);
	}
	func_162(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_284(uParam0, 16, 0, 0);
}

void func_334(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_54(&(uParam0->f_82), iParam1);
	func_284(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_221(&Param2);
		}
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_335(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_54(&(uParam0->f_81), iParam1);
	func_284(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_261(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_221(sParam2);
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

void func_338(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_339(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_54(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_339(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x8FA72E132AAFA62F(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_340(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_245("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_245("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_245("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_245("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_245("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_245("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_245("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_245("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_245("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_245("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_245("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_245("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_245("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_341(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_54(&(uParam0->f_81), iParam1);
	func_284(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_221(&Param2);
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_342(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_284(uParam0, 16, 0, 0);
	func_284(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x9F94F2CFDCA78C55(uParam0->f_3))
	{
		unk_0x3B8F9A5D5B590EA7(uParam0->f_3, &cParam1, func_343(uParam0));
	}
}

char* func_343(var uParam0)
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

char* func_344(var uParam0, int iParam1)
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

int func_345(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_284(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_284(uParam0, 17, 0f, 1);
	}
	func_246(uParam0, iParam2, 0);
	return func_315(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_346(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_133(*uParam2, 2))
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
		if (func_133(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_133(*uParam2, 4))
		{
			if (!func_133(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_133(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_133(*uParam2, 512))
		{
			if (!func_133(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_133(*uParam2, 16))
		{
			if (!func_133(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_133(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_133(*uParam2, 64))
		{
			if (!func_133(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_133(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_133(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_133(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_133(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_133(*uParam2, 8192))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_133(*uParam2, 16384))
		{
			if (func_133(*uParam2, 4194304))
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
		if (func_133(*uParam2, 32768))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_133(*uParam2, 65536))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_133(*uParam2, 131072))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_133(*uParam2, 262144))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_133(*uParam2, 524288))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_133(*uParam2, 1048576))
		{
			if (func_133(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_133(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_133(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_133(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_133(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_133(*uParam2, 67108864))
		{
			if (func_133(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_133(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_133(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_133(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_133(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_347(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_261(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_221(sParam2);
				}
				else
				{
					func_221(sParam2);
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

void func_348(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x5B438162CCD91A71(*iParam0);
		unk_0x71EA2F1D0184D8C7(*iParam0);
		*iParam0 = -1;
	}
}

int func_349(char* sParam0)
{
	if (!unk_0xD504011E20D63A81(sParam0))
	{
		if (func_188(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(var uParam0)
{
	if (func_152())
	{
		return 1;
	}
	if (func_180(uParam0, 17))
	{
		return 1;
	}
	if (func_180(uParam0, 14))
	{
		return 1;
	}
	if (func_186(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_351(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_180(uParam0, 9));
}

void func_352(var uParam0)
{
	if (func_180(uParam0, 17))
	{
		if (!func_180(uParam0, 14))
		{
			if (!func_186(uParam0))
			{
				if (!func_152())
				{
					func_128(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_353(var uParam0)
{
	return uParam0->f_117;
}

void func_354(var uParam0)
{
	if (!func_160(uParam0))
	{
		if ((unk_0xF976C624234A4AA8() % 1000) < 50)
		{
		}
		func_192(uParam0, 1);
	}
	else if (func_180(uParam0, 14))
	{
		func_202(uParam0);
		func_193(uParam0, 0);
	}
}

void func_355(var uParam0, var uParam1, bool bParam2)
{
	if (!func_133(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x8FA72E132AAFA62F(&(uParam0->f_124)) && func_152())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_152())
				{
					StringCopy(&(uParam0->f_124), func_126(), 24);
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

void func_356(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xFD68187442384158(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_261(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_261(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_261(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_55(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0xF976C624234A4AA8();
							}
						}
						else
						{
							func_139(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_261(Local_342.f_1[iVar0 /*4*/], 4) && !func_261(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_55(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_314(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_357(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_180(uParam0, 27))
	{
		func_179(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_150(uParam0, 27) > 5f)
	{
		if (func_384(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_284(uParam0, 27, 0, 0);
			func_284(uParam0, 10, 0, 0);
			func_382(uParam0, &uVar0, uParam1);
		}
		func_379(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_358(uParam0);
	}
	if ((((!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()) && (unk_0x17D71902CA06091B(*uParam0) && !unk_0xB44AF0EB1FA3729D(*uParam0))) && (unk_0x17D71902CA06091B(uParam0->f_1) && !unk_0xB44AF0EB1FA3729D(uParam0->f_1))) && !unk_0x44057438DAE1BD45()) && !func_152())
	{
		if (func_150(uParam0, 26) > 10f)
		{
			func_128(uParam0, 26, 0);
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
		}
	}
	else if (func_180(uParam0, 26))
	{
		func_128(uParam0, 26, 0);
	}
	return 0;
}

void func_358(var uParam0)
{
	if (!func_378(uParam0->f_429))
	{
		uParam0->f_429 = func_377();
		func_368(&(uParam0->f_429), 0, 0, unk_0x4D3E68F73B727E49(4, 7), 0, 0, 0);
	}
	else if (func_359(uParam0->f_429))
	{
		func_314(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_359(int iParam0)
{
	return func_360(func_377(), iParam0);
}

int func_360(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_378(iParam1) || !func_378(iParam0))
	{
		return 1;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_361(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_362(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_363(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_364(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_365(int iParam0)
{
	return iParam0 & 15;
}

var func_366(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_367(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_367(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_368(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_366(*uParam0);
	iVar1 = func_365(*uParam0);
	iVar2 = func_364(*uParam0);
	iVar3 = func_363(*uParam0);
	iVar4 = func_362(*uParam0);
	iVar5 = func_361(*uParam0);
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
	iVar6 = func_376(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_376(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_369(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_375(uParam0, iParam1);
	func_374(uParam0, iParam2);
	func_373(uParam0, iParam3);
	func_372(uParam0, iParam4);
	func_371(uParam0, iParam5);
	func_370(uParam0, iParam6);
}

void func_370(var uParam0, int iParam1)
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

void func_371(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_372(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_365(*uParam0);
	iVar1 = func_366(*uParam0);
	if (iParam1 < 1 || iParam1 > func_376(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_373(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_374(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_375(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_376(int iParam0, int iParam1)
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

int func_377()
{
	var uVar0;
	
	func_375(&uVar0, unk_0x2784A8234E9B4202());
	func_374(&uVar0, unk_0x06F66CEDC24218A4());
	func_373(&uVar0, unk_0xE76C684D1C903A71());
	func_372(&uVar0, unk_0xA277D6C04B4B44C8());
	func_371(&uVar0, unk_0x1285C2DD1E4945FF());
	func_370(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

int func_378(int iParam0)
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
	iVar0 = func_361(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_362(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_363(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_366(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_365(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_364(iParam0);
	if (iVar5 < 1 || iVar5 > func_376(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_379(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_381()) && !func_160(uParam0)) || ((uParam0->f_411 != 9 && func_251(uParam0, 1)) && !func_160(uParam0)))
		{
			uVar0 = func_380(uParam0->f_4);
			unk_0x9720CE176AF721DF(&uVar0);
			uParam0->f_4 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			unk_0xBAE5DF507EEC53C8(uParam0->f_4, 1, 0);
			func_202(uParam0);
			func_193(uParam0, 0);
		}
	}
}

var func_380(var uParam0)
{
	return uParam0;
}

int func_381()
{
	int iVar0;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) == unk_0x507DA4994C3D8EBD())
				{
					if (unk_0x40923C25A763E8E8(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_382(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_383(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_383(uParam0, 0, 4))
			{
				func_314(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_383(uParam0, 0, 8))
			{
				func_314(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_383(uParam0, 1, 1))
			{
				func_314(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_383(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_133(*uParam2, 2) && func_123(uParam0))
			{
				func_314(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_383(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
	{
		if (!unk_0x19F2D2C58150C825(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_219(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_219(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_384(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x507DA4994C3D8EBD();
	if (!unk_0xE5D56342B0FF1D0D(iVar0) && !unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (!func_133(*uParam2, 1))
		{
			if (func_390(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_133(*uParam2, 2))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_133(*uParam2, 4))
		{
			if (func_388(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_133(*uParam2, 8))
		{
			if (func_387(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_133(*uParam2, 128);
		if (bParam4)
		{
			if (func_385(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_133(*uParam2, 16))
		{
			if (func_385(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFD68187442384158(iParam0))
	{
		if (iParam7 && unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0x5D422B4764FA2ACA(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0x5D422B4764FA2ACA(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(uVar0))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(uVar1))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (unk_0x88253E28293B8BFD(iParam0))
			{
				if (unk_0x1F2BCCC99110BB36(iParam0) == unk_0x507DA4994C3D8EBD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x594EB70937EC1486(iParam0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2F0EF8797B769C86(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x99B3AF1B678B9666(iParam0))
		{
			return 1;
		}
	}
	if (func_386(unk_0x507DA4994C3D8EBD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x1983DA3C921BB046(iParam0) && func_312(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), unk_0x78AB10B64129B3D5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE5D56342B0FF1D0D(uParam1))
		{
			if (unk_0x6255AE2591FE7603(iParam1, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_386(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x849DBD2D635C99D5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_387(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x73741D3DABB81B29(uParam0, 4))
	{
		if (unk_0xEB4AE93098956715(uParam0) && !unk_0xB6CDBC1E2904184A(iParam0))
		{
			if (unk_0x594EB70937EC1486(uParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE5D56342B0FF1D0D(uParam1))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	if (unk_0x0982F2F40B035E77(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x90782A0CBF77A844(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x73741D3DABB81B29(uParam0, 2))
	{
		if (unk_0xEB4AE93098956715(uParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x2A24448FF232F834(unk_0x274BAC44978F9161(iParam1), 0))
			{
				iVar3 = unk_0x78AB10B64129B3D5(unk_0x274BAC44978F9161(iParam1), 0);
			}
			if (unk_0xA43F7819FA056045(iParam0) || func_389(iVar3))
			{
				if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEE93FF4158B54B09((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xE634CB9EE7094537(iParam0, -1) != 0)
			{
				if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_143(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 40f)
						{
							if (unk_0x8FF35E6057D45161(unk_0xAF65E5A58BE87D95(), &uVar1))
							{
								if ((unk_0x1BA544973A67E699(uVar1) && unk_0x379620F9B34A512B(iVar1) == iParam0) || (unk_0x91F594068DF4424F(iVar1) && unk_0x274BAC44978F9161(iVar1) == unk_0xE634CB9EE7094537(iParam0, -1)))
								{
									if ((unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()) && unk_0xBD883E84B4B6E14E(0, 24)) || (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xBD883E84B4B6E14E(0, 69)))
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

int func_390(int iParam0, var uParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 90f))
				{
					if (func_312(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xF976C624234A4AA8();
						}
						else if ((unk_0xF976C624234A4AA8() - uParam1->f_1) > uParam1->f_3)
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

void func_391(var uParam0)
{
	if (!func_133(uParam0->f_98, 2))
	{
		if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
		{
			if (func_146(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x407F91A831576A66(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_54(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_392()
{
	func_393(&Local_409);
	func_410();
}

void func_393(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_411(2);
	}
}

int func_394(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_152() && func_150(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0->f_3))
		{
			if (unk_0xCA8794CE207FC6D5(uParam0->f_4, 0))
			{
				if (unk_0x53170344050F2301(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_53(uParam0) == 0 || func_261(uParam0->f_85, 32))
					{
						if (!unk_0x2ACEA6F88B3AFFB0(uParam0->f_4))
						{
							func_317(uParam0, 4160, 0);
						}
						else
						{
							func_317(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_317(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_317(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_317(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xF976C624234A4AA8() % 1000) < 50)
	{
	}
	return 0;
}

void func_395(var uParam0)
{
	if (unk_0xD361727124133DF3(uParam0->f_8))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_8));
	}
	if (unk_0xD361727124133DF3(uParam0->f_9))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_9));
	}
	if (unk_0xD361727124133DF3(uParam0->f_10))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_10));
	}
}

int func_396(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_397()
{
	int iVar0;
	
	Local_409.f_23 = { -1583.59f, 169.2662f, 57.6205f };
	Local_409.f_33 = 116f;
	Local_409.f_26 = { 49.0898f, -1178.923f, 28.2091f };
	Local_409.f_34 = 185.975f;
	func_399(&Local_409, 6);
	Local_409.f_410 = 0;
	func_398(&Local_409, 3, 6);
	iVar0 = func_3(unk_0x507DA4994C3D8EBD());
	if (iVar0 == 0)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1M_4", 24);
	}
	else if (iVar0 == 2)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1T_4", 24);
	}
	else if (iVar0 == 1)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1F_7", 24);
	}
}

void func_398(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_399(var uParam0, int iParam1)
{
	func_409(1);
	func_204();
	func_6(&(uParam0->f_244));
	func_408(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_133(Global_97173.f_17318, 4))
	{
		func_54(&(Global_97173.f_17318), 4);
	}
	func_403(uParam0);
	func_401(uParam0);
	unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	uParam0->f_102 = (func_400(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x481B0AD01AC057F7("TAXI", 0);
}

int func_400(int iParam0)
{
	return Global_97173.f_17318.f_39[iParam0];
}

void func_401(var uParam0)
{
	switch (func_53(uParam0))
	{
		case 0:
			func_402(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_402(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_402(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_402(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_402(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_402(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_402(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_402(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_402(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_402(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_402(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_403(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_407(uParam0, 3);
			func_406(uParam0, 14);
			break;
		
		case 1:
			func_407(uParam0, 14);
			func_406(uParam0, 8);
			break;
		
		case 2:
			func_407(uParam0, 8);
			func_406(uParam0, 7);
			break;
		
		case 3:
			func_407(uParam0, 15);
			func_406(uParam0, 6);
			break;
		
		case 4:
			func_407(uParam0, 0);
			func_406(uParam0, 3);
			break;
		
		case 5:
			func_407(uParam0, 6);
			func_406(uParam0, 7);
			break;
		
		case 6:
			func_407(uParam0, 8);
			func_406(uParam0, 15);
			break;
		
		case 7:
			func_407(uParam0, 8);
			func_406(uParam0, 14);
			break;
		
		case 8:
			func_407(uParam0, 7);
			func_406(uParam0, 15);
			break;
		
		case 9:
			func_407(uParam0, unk_0x4D3E68F73B727E49(0, 17));
			iVar0 = func_405((uParam0->f_418.f_2 + unk_0x4D3E68F73B727E49(1, 17)), 0, 16);
			func_406(uParam0, iVar0);
			func_404(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_404(var uParam0)
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

int func_405(int iParam0, int iParam1, int iParam2)
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

void func_406(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_407(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_408(var uParam0)
{
	uParam0->f_2 = unk_0x507DA4994C3D8EBD();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_36() };
	uParam0->f_17 = { func_36() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_128(uParam0, 32, 0);
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96229, unk_0x3ED5FA3F61EC9E68(), 24);
		Global_96223 = 1;
	}
	else
	{
		StringCopy(&Global_96229, "NULL", 24);
		Global_96223 = 0;
	}
}

void func_410()
{
	func_211(&uLocal_1035, Local_873, 100f, 1);
	unk_0x932057F38C942D3B("taxi_oj_gyn");
	unk_0xF83CD415BF55C455(1);
	func_223();
	func_129();
	unk_0xB59362C1B4E8772E(Local_891, 5f, joaat("prop_skid_chair_02"), 0);
	unk_0xB59362C1B4E8772E(Local_891, 5f, joaat("prop_rub_couch03"), 0);
	unk_0xAB5C0FE0C680BC7F("TAXI_GOT_U_NOW");
	unk_0x883793591E631A3B();
}

void func_411(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

bool func_412(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

