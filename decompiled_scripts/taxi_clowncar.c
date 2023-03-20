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
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	struct<3> Local_409 = { 0, 0, 0 } ;
	struct<3> Local_412 = { 0, 0, 0 } ;
	struct<3> Local_415 = { 0, 0, 0 } ;
	struct<3> Local_418 = { 0, 0, 0 } ;
	struct<3> Local_421 = { 0, 0, 0 } ;
	struct<3> Local_424 = { 0, 0, 0 } ;
	struct<3> Local_427 = { 0, 0, 0 } ;
	struct<3> Local_430 = { 0, 0, 0 } ;
	int iLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	int iLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	bool bLocal_443 = 0;
	bool bLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	bool bLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	float fLocal_450 = 0f;
	float fLocal_451 = 0f;
	float fLocal_452 = 0f;
	var uLocal_453[4] = { 0, 0, 0, 0 };
	var uLocal_458[4] = { 0, 0, 0, 0 };
	struct<429> Local_463 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_892 = 0;
	struct<27> Local_893 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 3;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 3;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 5;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 3;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 3;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 1;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 4;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 4;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 4;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 1;
	var uLocal_988 = 2;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	struct<3> Local_995[1];
	int iLocal_999 = 0;
	var uLocal_1000 = 0;
	struct<3> Local_1001 = { 0, 0, 0 } ;
	struct<3> Local_1004 = { 0, 0, 0 } ;
	int iLocal_1007 = 0;
	bool bLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	bool bLocal_1011 = 0;
	struct<28> Local_1012 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 5;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
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
	var uLocal_1085 = 1097859072;
	var uLocal_1086 = 1500;
	var uLocal_1087 = 45;
	var uLocal_1088 = 1103626240;
	var uLocal_1089 = 5;
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
	uLocal_77 = unk_0x9531B0A727EDF1BF();
	uLocal_78 = unk_0x0F07D7181C004903();
	Local_83 = { 500f, 500f, 500f };
	fLocal_450 = 98f;
	fLocal_451 = 55f;
	fLocal_452 = 60f;
	iLocal_999 = 1;
	Local_1001 = { -1284.367f, 295.7437f, 63.83044f };
	Local_1004 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0x524AF15206846700(67))
	{
		func_401(2);
		func_397();
	}
	unk_0x5DB716F779D8C70F(1);
	func_384();
	while (true)
	{
		if (unk_0xD2CFFE76B625AE55(Local_463.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_463);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x27D769C59BC9D030();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x27D769C59BC9D030());
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
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x27D769C59BC9D030());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x27D769C59BC9D030(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x27D769C59BC9D030(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (func_383(&Local_463))
	{
		func_382(&Local_463);
		if (Local_463.f_410 > 0)
		{
			if (func_381(&Local_463, 0))
			{
				func_379();
			}
		}
		else if (func_378(&Local_463, 31) > 5f)
		{
			func_401(2);
			func_397();
		}
	}
	else
	{
		func_356(&Local_463, &uLocal_1083);
		func_355(&Local_463);
		func_354(&Local_463, &uLocal_1000, 0);
		if (Local_463.f_410 < 9)
		{
			func_341(&Local_463, &Local_893, &uLocal_1083);
		}
		if (Local_463.f_410 > 5 && !iLocal_1007)
		{
			iLocal_1007 = 1;
			Local_893.f_16[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_893.f_16[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_893.f_16[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_893.f_26[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_893.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_893.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_463.f_410 > 2)
		{
			if (!func_340(&Local_463))
			{
				if (!iLocal_1009)
				{
					if (func_339())
					{
						func_337(&Local_893);
						iLocal_1009 = 1;
					}
				}
				func_307();
			}
			else
			{
				func_288(&Local_463, "Taxi Not Driveable", func_306(&Local_463));
			}
		}
		if (Local_463.f_410 > 3)
		{
			if (!bVar3)
			{
				if (unk_0x0B4DDB992C7BCF57(Local_463.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0x2006A8C1BA2AFE80(Local_893.f_4[iVar0], 0))
						{
							if (unk_0x77F1B7F6C32990D6(Local_893.f_4[iVar0], Local_463.f_4, 1))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!unk_0x2006A8C1BA2AFE80(Local_893.f_4[iVar1], 0))
					{
						if (!unk_0xE4F7206742848BAF(Local_893.f_4[iVar1]))
						{
							unk_0xF156AA2A744B309E(Local_893.f_4[iVar1]);
							unk_0x433C209504FBC7EE(&uVar2);
							unk_0x33A0CEA494F4C2A3(&uVar2);
							unk_0x3DA9DFE29006A19F(0, Local_463.f_2, 1000f, -1, 0, 0);
							unk_0x33F83FC0F5F458E3(uVar2);
							unk_0x8B8674266D533E9F(Local_893.f_4[iVar1], uVar2);
							unk_0x433C209504FBC7EE(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_463.f_410 == 9)
		{
			func_264(&Local_463, 0, 1);
			func_263(&Local_463, &Local_893, 1128792064);
		}
		switch (Local_463.f_410)
		{
			case 0:
				func_262(&(Local_995[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_261(&Local_463, &Local_995);
				func_259();
				func_257();
				func_256();
				func_255(&Local_463, 16, 4f, 0);
				func_252(&Local_463, Local_1001, Local_1004, &Local_893);
				func_251(&Local_463);
				func_250(&Local_463, 1);
				break;
			
			case 1:
				if (func_247())
				{
					func_246();
					func_226();
					func_225(&Local_463);
					func_223(&(Local_463.f_100), 8);
					func_223(&(Local_463.f_100), 2048);
					func_223(&(Local_463.f_100), 256);
					Local_463.f_14 = { Local_1001 };
					Local_463.f_49 = 0;
					func_250(&Local_463, 3);
				}
				break;
			
			case 3:
				if (func_215(&Local_463, 3))
				{
					func_214(&Local_463, 1, 0);
					func_213(&uLocal_1100, Local_1001, 20f, 0);
					func_250(&Local_463, 5);
				}
				break;
			
			case 5:
				func_212();
				if (func_192(&Local_463, &Local_893))
				{
					unk_0xA97D52B97C2B782F(Local_463.f_428, &(Local_463.f_42), -1);
					func_250(&Local_463, 15);
				}
				break;
			
			case 15:
				if (func_190(&Local_463, &Local_893))
				{
					func_186(&Local_463, 8, 1, 0, 0);
					if (!unk_0x2006A8C1BA2AFE80(Local_893[0], 0))
					{
						unk_0x56F64CC9254C2E4F(Local_893[0], 26, 1);
					}
					if (!unk_0x2006A8C1BA2AFE80(Local_893[1], 0))
					{
						unk_0x56F64CC9254C2E4F(Local_893[1], 26, 1);
					}
					if (!unk_0x2006A8C1BA2AFE80(Local_893[2], 0))
					{
						unk_0x56F64CC9254C2E4F(Local_893[2], 26, 1);
					}
					func_185(&Local_463);
					func_183(&Local_463, 0);
					func_182();
					func_180(&Local_463, 11);
					func_255(&Local_463, 10, 0, 0);
					func_255(&Local_463, 6, 0, 0);
					func_179();
					Local_463.f_36 = unk_0x5C02660403071A83(3f, 10f);
					func_177(&Local_893);
					func_250(&Local_463, 9);
				}
				if (unk_0x0B4DDB992C7BCF57(Local_463.f_4, 0))
				{
					if (!unk_0x1C48F76B3D032074(Local_463.f_2, Local_463.f_4, 0))
					{
						func_173(&Local_463, &Local_893);
						func_250(&Local_463, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_1008)
				{
				}
				func_170(&Local_463);
				if (func_127(&Local_463, &Local_893, &Local_1012, &uLocal_1042))
				{
					func_126(&Local_1012, -1, 1);
					if (func_125(&Local_893))
					{
						func_124(&Local_463, 0);
					}
					func_123(&Local_893);
					func_121(&Local_463);
					func_117(&Local_463);
					func_116(&Local_463);
					func_250(&Local_463, 27);
				}
				break;
			
			case 27:
				if (func_106(&Local_463, 1))
				{
					unk_0x433C209504FBC7EE(&uVar2);
					unk_0x33A0CEA494F4C2A3(&uVar2);
					unk_0xE4A57337AE998385(0, Local_893.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0xF2E2A21DDA5A0DA4(0, 0);
					if (unk_0x35A830607A198ABC(Local_463.f_29, 4f, 1))
					{
						unk_0x603D1721FED38663(0, Local_463.f_29, 4f, 0);
					}
					else
					{
						unk_0xD9F9CB5C8842E29C(0, 350.8689f, 0);
						unk_0x0603942C851F9C09(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0x33F83FC0F5F458E3(uVar2);
					unk_0x8B8674266D533E9F(Local_463.f_3, uVar2);
					unk_0x94DC76C688E7D222(Local_463.f_3, 1);
					func_250(&Local_463, 29);
				}
				break;
			
			case 29:
				if (!unk_0xE4F7206742848BAF(Local_463.f_3))
				{
					if (func_105(Local_463.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0xC908FA7A5EBB2825(Local_463.f_3, 60, 1);
					}
				}
				if (func_78(&Local_463, &uLocal_1090))
				{
					func_11(1, &Local_463, 0);
					func_255(&Local_463, 31, 0, 0);
					func_250(&Local_463, 30);
				}
				break;
			
			case 30:
				if (!unk_0xE4F7206742848BAF(Local_463.f_3))
				{
					if (func_105(Local_463.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0xC908FA7A5EBB2825(Local_463.f_3, 60, 1);
					}
					if ((unk_0xB1988D54B2C48CB5(Local_463.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || func_9(Local_463.f_3, 1) > 50f) || func_378(&Local_463, 31) > 30f)
					{
						if (unk_0xB1988D54B2C48CB5(Local_463.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (func_9(Local_463.f_3, 1) > 50f)
						{
						}
						if (func_378(&Local_463, 31) > 30f)
						{
						}
						unk_0xA8ED9F72DC442242(Local_463.f_3, 0);
						unk_0xED5347CD6B7B01FA(255, Local_463.f_413, joaat("player"));
						unk_0x7E8F7C1D05860F53(&(Local_463.f_3));
						func_397();
					}
				}
				else
				{
					func_397();
				}
				break;
			}
	}
}

float func_9(int iParam0, int iParam1)
{
	return func_10(unk_0xC834A7C58DEB59B4(unk_0xB927AFB90873B8C1()), iParam0, iParam1);
}

float func_10(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0xE4F7206742848BAF(uParam1->f_3))
		{
			unk_0x56F64CC9254C2E4F(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_52(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_382(uParam0);
	if (func_51())
	{
		func_49();
	}
	func_47();
	unk_0x8ACEB4FC9E9EE225();
	unk_0x5BD150B52CE8D356(1);
	func_44(0);
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		unk_0x1B7FCBF5F0A9F480(uParam0->f_4, 0);
		unk_0x5C439465C03F116C(uParam0->f_4);
		unk_0xDF8D7E186B39E5F5(uParam0->f_4);
	}
	func_41(uParam0->f_14, 1);
	func_39(uParam0->f_14, 1, 1114636288);
	func_38(&(uParam0->f_244), 3);
	unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 1);
	if (func_35())
	{
		unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
	}
	unk_0x9556B1B52B8D9672(1);
	func_25(0, 1, 1, 0);
	unk_0x83DB85FD25128C55(1);
	unk_0x3DFCFAD590F85BF7(1);
	if (unk_0x54DA78A82349F5AC(*uParam0))
	{
		unk_0x1D1A369233055AEC(*uParam0, 0);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		unk_0xE736AA7B4B2691FB(1);
	}
	if (func_24(Global_101154.f_17787, 4))
	{
		func_22(&(Global_101154.f_17787), 4);
		unk_0x7C898812896A5304(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x651E63BA2F4975EC("gestures@m@standing@casual");
	unk_0x651E63BA2F4975EC("oddjobs@taxi@");
	unk_0x651E63BA2F4975EC("oddjobs@towingcome_here");
	if (unk_0x88E055AE81551426())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x170C6E2649B67440(unk_0xB927AFB90873B8C1()))
	{
		unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
	}
	unk_0x70474C6AB0E99EB4(unk_0xF2DB717A73826179((func_13(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_14(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
	}
	if (unk_0x0E063DDE8855EC52())
	{
		iVar0 = unk_0x20D394965B47B01A();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x0275404839C0A19A(&uVar0))
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
	unk_0xF1834862BAB064ED(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_3))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (!unk_0x9A4E2270C2271219(uParam0->f_3, 0))
			{
				unk_0x4209353330BDFE40(uParam0->f_3);
			}
			unk_0xA8ED9F72DC442242(uParam0->f_3, 0);
			unk_0xED5347CD6B7B01FA(255, uParam0->f_413, joaat("player"));
			if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x7E8F7C1D05860F53(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_34(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_33())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_34(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_30(unk_0x4D29100D094E5511())) && !func_27(unk_0x4D29100D094E5511(), 0)) && !func_26())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_30(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_26()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312747;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_32(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_33()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

int func_35()
{
	if (!func_37() && !func_36())
	{
		if (!unk_0x7DA5060D9E6B91C5(unk_0xB927AFB90873B8C1()))
		{
			return 1;
		}
	}
	return 0;
}

int func_36()
{
	if (unk_0xD32535FA4397160F(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (unk_0xD32535FA4397160F(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_39(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_40(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_40(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x696F8E0D51625508(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x440E2095CD95D710(Var0, Var3, 1);
		unk_0xF557B4BDE99A5E64();
	}
}

Vector3 func_40(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_41(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_42(Param0, func_43(), 0))
	{
		Var0 = { func_40(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_40(Param0, 1f, 30f, 30f, 10f) };
		unk_0x5B40EC93D0367189(Var0, Var3, iParam3, 1);
	}
}

bool func_42(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_43()
{
	struct<3> Var0;
	
	return Var0;
}

void func_44(int iParam0)
{
	if (Global_14571)
	{
		func_45(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_33())
	{
		Global_14413.f_1 = 3;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88544[iVar0 /*17*/] && !Global_88544[iVar0 /*17*/].f_1)
		{
			if (Global_88544[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88544[iVar0 /*17*/].f_5 != 88 && Global_88544[iVar0 /*17*/].f_5 != 89) && Global_88544[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_88544[iVar0 /*17*/].f_5, 1);
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
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_49()
{
	Global_14578 = 0;
	func_50();
}

void func_50()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

int func_51()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_101154.f_17787.f_22[0]++;
			func_53("Fares Completed ++ = ", Global_101154.f_17787.f_22[0]);
			break;
		
		case 1:
			Global_101154.f_17787.f_22[1]++;
			func_53("Fares Failed ++ = ", Global_101154.f_17787.f_22[1]);
			break;
		
		case 2:
			Global_101154.f_17787.f_22[2]++;
			func_53("Fares Accepted ++ ", Global_101154.f_17787.f_22[2]);
			break;
		
		case 3:
			Global_101154.f_17787.f_22[3]++;
			func_53("Fares Expired ++ ", Global_101154.f_17787.f_22[3]);
			break;
		
		case 13:
			Global_101154.f_17787.f_22[13]++;
			func_53("Passengers run ++ = ", Global_101154.f_17787.f_22[13]);
			break;
		
		case 14:
			Global_101154.f_17787.f_22[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_101154.f_17787.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_101154.f_17787.f_22[4])
				{
					Global_101154.f_17787.f_22[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_101154.f_17787.f_22[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_101154.f_17787.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_101154.f_17787.f_22[5] = (Global_101154.f_17787.f_22[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_101154.f_17787.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_101154.f_17787.f_22[6]++;
			}
			else
			{
				Global_101154.f_17787.f_22[6] = (Global_101154.f_17787.f_22[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_101154.f_17787.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_101154.f_17787.f_22[7] = (Global_101154.f_17787.f_22[7] + iParam1);
			}
			else
			{
				Global_101154.f_17787.f_22[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_101154.f_17787.f_22[7]);
			break;
		
		case 8:
			Global_101154.f_17787.f_22[8]++;
			func_53("Taxis wrecked ++ = ", Global_101154.f_17787.f_22[8]);
			break;
		
		case 9:
			Global_101154.f_17787.f_22[9]++;
			func_53("Horn Honked ++ = ", Global_101154.f_17787.f_22[9]);
			break;
		
		case 10:
			Global_101154.f_17787.f_22[10] = (Global_101154.f_17787.f_22[10] + iParam1);
			func_53("Total Money Earned = ", Global_101154.f_17787.f_22[10]);
			break;
		
		case 11:
			Global_101154.f_17787.f_22[11] = (Global_101154.f_17787.f_22[11] + iParam1);
			func_53("Total Tips Earned = ", Global_101154.f_17787.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_101154.f_17787.f_22[12])
			{
				Global_101154.f_17787.f_22[12] = iParam1;
				func_53("New Highest Tip = ", Global_101154.f_17787.f_22[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_101154.f_17787.f_22[12]);
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
		func_401(1);
		func_64(15, 1);
	}
	func_223(&(Global_101154.f_17787), 1024);
	if (!func_24(Global_101154.f_17787, 64))
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
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 = (fVar1 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100891++;
					fVar2 = (fVar2 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100892++;
					fVar3 = (fVar3 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100893++;
					fVar4 = (fVar4 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100894++;
					fVar5 = (fVar5 + (Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100895++;
					fVar6 = (fVar6 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100896++;
					fVar7 = (fVar7 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || (Global_100877 * 10 / Global_100894) < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					unk_0x1C7E45166E04C12C(joaat("num_rndevents_completed"), Global_100877, 0);
					unk_0x26545538B51562AD(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_completed"), Global_100890, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_available"), Global_100873, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_completed"), Global_100891, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_available"), Global_100874, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_completed"), Global_100892, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_available"), Global_100875, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_completed"), Global_100893, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_available"), Global_100876, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_available"), Global_100880, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_completed"), (Global_100896 + Global_100895), 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_available"), (Global_100879 + Global_100878), 1);
	Global_100897 = (Global_100890 * 100 / Global_100873);
	Global_100899 = ((Global_100892 + Global_100891) * 100 / (Global_100875 + Global_100874));
	Global_100898 = ((Global_100893 + iVar9) * 100 / (Global_100876 + Global_100880));
	Global_100900 = ((Global_100895 + Global_100896) * 100 / (Global_100878 + Global_100879));
	unk_0x349899F07A0A435F(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_story_missions"), Global_100897, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_ambient_missions"), Global_100898, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853))
	{
		func_60(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_59() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
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
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_58(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

int func_59()
{
	return Global_25120;
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
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
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0093FE57B4BFD543((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC5B2C78271F9ACBC((iParam0 - 0)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0093FE57B4BFD543((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC5B2C78271F9ACBC((iParam0 - 192)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0093FE57B4BFD543((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC5B2C78271F9ACBC((iParam0 - 513)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0093FE57B4BFD543((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC5B2C78271F9ACBC((iParam0 - 705)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x86AA01B00A711C0B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC5B2C78271F9ACBC((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x86AA01B00A711C0B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC5B2C78271F9ACBC((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD69CE51110B42B5E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC5B2C78271F9ACBC((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD69CE51110B42B5E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC5B2C78271F9ACBC((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD69CE51110B42B5E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC5B2C78271F9ACBC((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD69CE51110B42B5E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC5B2C78271F9ACBC((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD69CE51110B42B5E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC5B2C78271F9ACBC((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar12, iParam1, iVar1, iParam3);
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

int func_64(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_65(iParam0, iParam1);
}

int func_65(int iParam0, int iParam1)
{
	if (func_77(14) && !func_76(iParam0))
	{
		return 0;
	}
	if (unk_0xB0B3AFA733DD5B94(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return 0;
	}
	if (func_75(&Global_2563627))
	{
		if (func_73(&Global_2563627, iParam0))
		{
			return 0;
		}
		if (func_66(&Global_2563627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD6FCD24FAC19ACBA(iParam0))
		{
			return 0;
		}
		if (unk_0xB0B3AFA733DD5B94(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	func_69(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_67(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_68(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_68(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_69(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_71(uParam0, (Global_2563626 - 0.5f));
}

void func_70(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_71(var uParam0, float fParam1)
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

float func_72(var uParam0)
{
	return uParam0->f_72;
}

bool func_73(var uParam0, int iParam1)
{
	return func_74(uParam0, iParam1) != -1;
}

int func_74(var uParam0, int iParam1)
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

bool func_75(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_76(int iParam0)
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

bool func_77(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_78(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_51() && func_378(uParam0, 0) > 1f)
			{
				if (func_35())
				{
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
				}
				func_104(uParam0);
				func_22(&(Global_101154.f_17787), 4096);
				func_102(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_103(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x954BCDB8FDB0AC0F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_101(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_95(uParam1, 0))
			{
				func_79(uParam0);
				func_255(uParam0, 0, 0, 0);
				func_101(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_79(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_80(func_93(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_81(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD0D748C6C14C0E92(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE2A8B026FA4DDFFF(iVar1, iVar0, 1);
	}
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_92();
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
					func_91(99, 1);
					func_90(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_89(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_88(5))
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
							func_90(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_90(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x45755F80A3E63D8B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_91(95, iParam3);
					break;
				
				case 1:
					func_91(97, iParam3);
					break;
				
				case 2:
					func_91(96, iParam3);
					break;
			}
			func_91(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_84(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_84(iVar1);
	}
	iVar5 = (Global_52923[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] = (Global_52923[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_90(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52923[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] = (Global_52923[iVar2] - iParam3);
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
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_83(iParam0);
	if (Global_35711 == 15)
	{
		func_82(0);
	}
	return 1;
}

void func_82(bool bParam0)
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
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!bParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE2A8B026FA4DDFFF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE2A8B026FA4DDFFF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE2A8B026FA4DDFFF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0) || unk_0xF426A5DE932B3BEE(Global_2097152[func_86() /*10375*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_2097152[func_86() /*10375*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5411F6B456B04A6B("COUP_RED");
		unk_0x2B088D6251C2080D(func_85(iParam0));
		unk_0xE8386CF1E84A5B3D(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_85(int iParam0)
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

int func_86()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_87(int iParam0)
{
	func_91(93, iParam0);
	func_91(29, iParam0);
	func_91(30, iParam0);
}

bool func_88(int iParam0)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0);
	}
	return unk_0xF426A5DE932B3BEE(Global_2097152[func_86() /*10375*/].f_7704.f_10, iParam0);
}

int func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB0B3AFA733DD5B94(27))
	{
		return 0;
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD0D748C6C14C0E92(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE2A8B026FA4DDFFF(joaat("num_cash_spent"), iVar1, 1);
		func_60(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_64(27, 1);
	return 1;
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD0D748C6C14C0E92(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE2A8B026FA4DDFFF(iParam0, iVar0, 1);
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_92()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

int func_93()
{
	func_94();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_94()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_4(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_3(unk_0x27D769C59BC9D030());
			if (func_5(iVar0) && (!func_77(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_5(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_95(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_99(&(uParam0->f_2));
	}
	unk_0x28981D48C12CB95E(14);
	unk_0x6201690B328DD500(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x117D586920E8F7BA(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_99(&(uParam0->f_5));
				func_98(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_97(&(uParam0->f_5)) > 0.33f)
			{
				func_96(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_97(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_99(&(uParam0->f_5));
			func_98(uParam0, 1051260355);
		}
		else if (func_97(&(uParam0->f_5)) > 0.33f)
		{
			func_96(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_96(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_97(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_98(var uParam0, int iParam1)
{
	unk_0x8CED8F78CC31BEF2(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD2DC8221939F80F7(uParam0->f_9);
	unk_0x4ACF99392701B935(iParam1);
	unk_0x7E5FA681CB7A2EF7();
}

void func_99(var uParam0)
{
	func_100(uParam0, 0f);
}

void func_100(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_101(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_102(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x8CED8F78CC31BEF2(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF4D4BFD98B32BF85(iParam9);
	unk_0x2B088D6251C2080D(sParam1);
	unk_0xD3076D52458B36EF();
	unk_0x37B602106C6E0E91(sParam7);
	unk_0x90805938ADF0F45C(uParam2);
	unk_0x90805938ADF0F45C(uParam3);
	unk_0x2B088D6251C2080D(uParam6);
	unk_0x90805938ADF0F45C(uParam5);
	unk_0x90805938ADF0F45C(iParam4);
	unk_0xD3076D52458B36EF();
	unk_0x7E5FA681CB7A2EF7();
	func_99(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_103(var uParam0)
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

void func_104(var uParam0)
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
		if (unk_0xF426A5DE932B3BEE(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_105(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(iParam0, 1), Param1, iParam4);
}

int func_106(var uParam0, bool bParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_115(uParam0) && func_112(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_111(uParam0, 2097152))
				{
					func_107(uParam0);
				}
			}
			else
			{
				func_107(uParam0);
			}
		}
		else if (!func_115(uParam0))
		{
			if (bParam1)
			{
				if (func_111(uParam0, 2097152))
				{
					if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_107(var uParam0)
{
	struct<3> Var0;
	
	if (func_110(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_108(uParam0, Var0);
}

void func_108(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && unk_0xDD5B7E23D882DABD(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_109(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x676D4CD42E0837CA(Var0, Param1, 0) < unk_0x676D4CD42E0837CA(Var3, Param1, 0) && unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x676D4CD42E0837CA(Var0, Param1, 0) >= unk_0x676D4CD42E0837CA(Var3, Param1, 0) && unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_109(int iParam0, int iParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0) && !unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		if (unk_0xDD5B7E23D882DABD(iParam0, iParam1))
		{
			if (unk_0x9297C590C99228DC(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0x9297C590C99228DC(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x9297C590C99228DC(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0x9297C590C99228DC(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_110(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_81, iParam1) && !func_51());
	}
	return func_51();
}

int func_112(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_46(1))
			{
				func_44(0);
			}
			if (func_35())
			{
				func_114();
				return 1;
			}
			else if (func_113(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, 256);
				}
				else
				{
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, 0);
				}
			}
			unk_0x5CD1803153799845(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_113(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_114()
{
	if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
	{
		unk_0x69C3634DD9DA38D2(unk_0x4D29100D094E5511());
	}
}

int func_115(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_3))
		{
			if (unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116(var uParam0)
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
	if (!func_24(uParam0->f_55, 1))
	{
		func_223(&(uParam0->f_55), 1);
	}
}

void func_117(var uParam0)
{
	func_119();
	unk_0x8ACEB4FC9E9EE225();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_186(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_186(uParam0, 103, 1, 0, 0);
		}
		func_118(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_186(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_186(uParam0, 102, 1, 0, 0);
	}
	func_255(uParam0, 16, 4f, 0);
}

void func_118(int iParam0)
{
	Global_99866.f_221 = iParam0;
}

void func_119()
{
	Global_14578 = 0;
	func_120();
}

void func_120()
{
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0xF022734652B12EB3();
		Global_16723 = 0;
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_121(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_122(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_52(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_52(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_122(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x82E739904D3B17C8(uParam0->f_73[iVar0]))
		{
			unk_0xD1FF5A06AAD731E1(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_440 = 0;
}

void func_124(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x26545538B51562AD(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_125(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_126(var uParam0, int iParam1, bool bParam2)
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

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_165(uParam0, uParam2, uParam1);
	if (func_164(uParam0) >= 14)
	{
		if (iLocal_445)
		{
			if (((func_378(uParam0, 11) > 20f && !func_51()) && !unk_0x45252A58A2BF9751()) && !bLocal_443)
			{
				bLocal_443 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_445)
		{
			func_158(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_158(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!unk_0xE4F7206742848BAF((*uParam1)[uParam1->f_95]) && unk_0x9A4E2270C2271219((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_449)
				{
					if (func_157(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_156(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					unk_0xF156AA2A744B309E((*uParam1)[uParam1->f_95]);
					unk_0x4E2F67DAF5750EE5((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_158(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0xE4F7206742848BAF((*uParam1)[0]) || unk_0xE4F7206742848BAF((*uParam1)[1])) || unk_0xE4F7206742848BAF((*uParam1)[2])) || unk_0x77F1B7F6C32990D6((*uParam1)[1], uParam0->f_4, 1)) || unk_0x77F1B7F6C32990D6((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_288(uParam0, "Passenger injured.", 14);
	}
	if (!func_142(uParam0, uParam1))
	{
		if (!unk_0x70083B21A94A4A8C(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			unk_0x550B00F01FC4ADF0((*uParam1)[0], 0, 0);
			bLocal_447 = true;
			iLocal_448 = 0;
		}
	}
	else
	{
		if (bLocal_447)
		{
			if (unk_0x32C6487B93CCAF4F(uParam0->f_4, 0))
			{
				if (!iLocal_448)
				{
					unk_0x835BBE043A81D6DD((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_448 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_288(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0x9297C590C99228DC(uParam0->f_4, 0) == (*uParam1)[0])
			{
				func_177(uParam1);
				bLocal_447 = false;
			}
		}
		func_139(uParam0, 1097859072, 1117782016);
		func_138(uParam0, &(uParam0->f_43));
		if (!bLocal_447 && !unk_0x1C48F76B3D032074((*uParam1)[0], uParam0->f_4, 0))
		{
			func_288(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_105(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_449)
					{
						func_186(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0xB1988D54B2C48CB5(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							if (!unk_0xE4F7206742848BAF((*uParam1)[2]))
							{
								unk_0x9403D0F4C7711241(&(uParam1->f_36[2]));
								func_119();
								if (uParam1->f_95 == 2)
								{
									unk_0xF156AA2A744B309E((*uParam1)[2]);
								}
								unk_0x433C209504FBC7EE(&uVar0);
								unk_0x33A0CEA494F4C2A3(&uVar0);
								unk_0x550B00F01FC4ADF0(0, 0, 0);
								unk_0xE4A57337AE998385(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0xE4A57337AE998385(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0x0603942C851F9C09(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0x33F83FC0F5F458E3(uVar0);
								unk_0x8B8674266D533E9F((*uParam1)[2], uVar0);
								unk_0x433C209504FBC7EE(&uVar0);
								if (func_378(uParam0, 6) < fLocal_450)
								{
									uParam1->f_55[2] = 1;
									func_186(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_186(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_136(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_134((*uParam1)[2], uParam0->f_4) && func_378(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_123(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
				}
				else if (!func_131(uParam0) && unk_0x170C6E2649B67440(unk_0xB927AFB90873B8C1()))
				{
					func_129(uParam3);
					func_126(uParam2, -1, 0);
					func_255(uParam0, 6, 0, 0);
					func_255(uParam0, 11, 0, 0);
					func_186(uParam0, 40, 1, 0, 0);
					if (!unk_0x7B4654D62B7E0E9E(uParam1->f_36[1]))
					{
						func_177(uParam1);
					}
					iLocal_449 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (func_105(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_449)
					{
						func_186(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0xB1988D54B2C48CB5(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							if (!unk_0xE4F7206742848BAF((*uParam1)[1]))
							{
								func_119();
								unk_0x9403D0F4C7711241(&(uParam1->f_36[1]));
								func_128(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_378(uParam0, 6) < fLocal_451)
								{
									uParam1->f_55[1] = 1;
									func_186(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_186(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_136(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_134((*uParam1)[1], uParam0->f_4) && func_378(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
				}
				else if (!func_131(uParam0) && unk_0x170C6E2649B67440(unk_0xB927AFB90873B8C1()))
				{
					func_129(uParam3);
					func_126(uParam2, -1, 0);
					func_255(uParam0, 6, 0, 0);
					func_255(uParam0, 11, 0, 0);
					func_186(uParam0, 43, 1, 0, 0);
					iLocal_449 = 0;
					if (!unk_0x7B4654D62B7E0E9E(uParam1->f_36[0]))
					{
						func_177(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_105(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_449)
					{
						func_186(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0xB1988D54B2C48CB5(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							unk_0x9403D0F4C7711241(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_119();
							if (func_378(uParam0, 6) < fLocal_452)
							{
								uParam1->f_55[0] = 1;
								uParam0->f_56 += 2;
							}
							else
							{
								uParam1->f_55[0] = 0;
								uParam0->f_56 = (uParam0->f_56 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_128(var uParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	
	if (unk_0x0B4DDB992C7BCF57(*uParam0, 0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*uParam1, 0))
		{
			Var0 = { unk_0xD7C4E2CB0B216852(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xD7C4E2CB0B216852(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x676D4CD42E0837CA(Var0, Param2, 0) < unk_0x676D4CD42E0837CA(Var3, Param2, 0) && unk_0x70083B21A94A4A8C(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar6 = 131072;
			}
			else if (unk_0x676D4CD42E0837CA(Var0, Param2, 0) >= unk_0x676D4CD42E0837CA(Var3, Param2, 0) && unk_0x70083B21A94A4A8C(*uParam1, *uParam0, 2, 0, 0))
			{
				iVar6 = 262144;
			}
			else
			{
				iVar6 = 16;
			}
			Var8 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar6 == 16)
			{
				unk_0x433C209504FBC7EE(&uVar7);
				unk_0x33A0CEA494F4C2A3(&uVar7);
				unk_0x550B00F01FC4ADF0(0, 0, 0);
				unk_0xE4A57337AE998385(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x603D1721FED38663(0, Var8, 5f, 0);
				unk_0xE4A57337AE998385(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x33F83FC0F5F458E3(uVar7);
				unk_0x8B8674266D533E9F(*uParam1, uVar7);
			}
			else
			{
				unk_0x433C209504FBC7EE(&uVar7);
				unk_0x33A0CEA494F4C2A3(&uVar7);
				unk_0x8BD12B4D2B1648B7(0, *uParam0, iVar6);
				unk_0xE4A57337AE998385(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x603D1721FED38663(0, Var8, 5f, 0);
				unk_0xE4A57337AE998385(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x33F83FC0F5F458E3(uVar7);
				unk_0x8B8674266D533E9F(*uParam1, uVar7);
			}
		}
	}
}

void func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_130(), 24);
		iVar0++;
	}
	unk_0x8ACEB4FC9E9EE225();
	func_49();
}

var func_130()
{
	var uVar0;
	
	return uVar0;
}

int func_131(var uParam0)
{
	if (func_51())
	{
		return 1;
	}
	if (func_133(uParam0, 17))
	{
		return 1;
	}
	if (func_133(uParam0, 14))
	{
		return 1;
	}
	if (func_132(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_132(var uParam0)
{
	return uParam0->f_110;
}

bool func_133(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_134(int iParam0, int iParam1)
{
	if (func_135(iParam0, iParam1))
	{
		if (unk_0x1C48F76B3D032074(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_136(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_137(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_137(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_137(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
			unk_0x26545538B51562AD(uParam0, 2);
		}
	}
}

void func_138(var uParam0, var uParam1)
{
	unk_0xA97D52B97C2B782F(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_139(var uParam0, float fParam1, float fParam2)
{
	if (func_115(uParam0) && func_24(uParam0->f_44, 4))
	{
		if ((unk_0xFCFE5DE581193020(uParam0->f_4) || unk_0xECC01072E61D2F3A(uParam0->f_4) < 3f) && func_141(uParam0))
		{
			if (!func_133(uParam0, 2))
			{
				func_180(uParam0, 2);
			}
			else if (func_115(uParam0))
			{
				if (func_378(uParam0, 2) > fParam1 && !func_133(uParam0, 14))
				{
					if (func_37())
					{
						func_186(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_186(uParam0, 48, 1, 0, 0);
					}
					func_255(uParam0, 2, 0, 0);
					if (func_133(uParam0, 10))
					{
						func_255(uParam0, 10, 0, 0);
					}
				}
				if (!func_133(uParam0, 3))
				{
					func_255(uParam0, 3, 0, 0);
				}
				else if (func_378(uParam0, 3) >= fParam2)
				{
					func_140(uParam0, 3, 0);
					func_288(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_133(uParam0, 2))
			{
				func_140(uParam0, 2, 0);
			}
			if (func_133(uParam0, 3))
			{
				func_140(uParam0, 3, 0);
			}
		}
	}
}

void func_140(var uParam0, int iParam1, bool bParam2)
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
			func_96(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_96(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_141(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			return 1;
		}
	}
	return 0;
}

int func_142(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		func_288(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_155(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE4F7206742848BAF((*uParam1)[iVar0]))
			{
				func_288(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_143(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_133(uParam0, 14))
			{
				func_151(uParam0);
			}
			func_144(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_144(var uParam0, bool bParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 0);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
				func_150(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_9, 0);
				unk_0xAB27F3DE6390C749(uParam0->f_9, 0);
				unk_0x8ACEB4FC9E9EE225();
				if (func_115(uParam0))
				{
					func_186(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_150(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_145(uParam0, 0, 0);
		}
		else if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
		{
			unk_0x9403D0F4C7711241(&(uParam0->f_10));
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 255);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
			}
			else if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xB412D79FA1018FF0(uParam0->f_9, 0);
					unk_0xAB27F3DE6390C749(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
					unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
				}
			}
			unk_0x8ACEB4FC9E9EE225();
		}
	}
}

void func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_382(uParam0);
	}
	if (!unk_0x7B4654D62B7E0E9E(uParam0->f_10))
	{
		uParam0->f_10 = func_148(uParam0->f_4, 1, 0);
		unk_0xC5B67A5E18AF2B72(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xAB27F3DE6390C749(uParam0->f_10, 1);
		func_146(uParam0);
		if (bParam2)
		{
			unk_0x8ACEB4FC9E9EE225();
			func_186(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_146(var uParam0)
{
	func_255(uParam0, 14, 0, 0);
	func_147();
}

void func_147()
{
	int iVar0;
	
	iVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
	{
		unk_0x2A5264C35FD91CE4(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_148(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xABF4388EB11AD060(iParam0);
	if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_149(unk_0x0E063DDE8855EC52(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD1B211F2EB392B46(uVar0, bParam1);
		}
		else
		{
			unk_0x8D910E607F73E53D(uVar0, 2);
		}
	}
	else if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_149(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
		unk_0xD1B211F2EB392B46(uVar0, bParam1);
	}
	else if (unk_0xEB9962C184DA6150(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_149(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_149(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_150(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0x8ACEB4FC9E9EE225();
		func_186(uParam0, iParam3, 1, 0, 0);
		func_223(uParam1, iParam2);
	}
}

void func_151(var uParam0)
{
	func_140(uParam0, 14, 0);
	func_140(uParam0, 15, 0);
	func_154();
	if (func_153())
	{
		func_152(0);
	}
}

void func_152(int iParam0)
{
	Global_16723 = iParam0;
}

int func_153()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_154()
{
	var uVar0;
	
	uVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0x0B4DDB992C7BCF57(uVar0, 0))
	{
		unk_0x2A5264C35FD91CE4(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_155(var uParam0, var uParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_133(uParam0, 14))
			{
				if (unk_0x7B4654D62B7E0E9E(*uParam1) && unk_0xD033DA403C7AE3E6(*uParam1) > 0)
				{
					unk_0xB412D79FA1018FF0(*uParam1, 0);
				}
				func_145(uParam0, 0, 0);
				func_186(uParam0, 2, 1, 1, 0);
			}
			else if (func_378(uParam0, 14) > 20f)
			{
				func_288(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_133(uParam0, 14))
			{
				func_151(uParam0);
			}
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
			{
				unk_0x9403D0F4C7711241(&(uParam0->f_10));
			}
			if ((unk_0x7B4654D62B7E0E9E(*uParam1) && unk_0xD033DA403C7AE3E6(*uParam1) < 255) && unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1)
			{
				unk_0xB412D79FA1018FF0(*uParam1, 255);
				unk_0xAB27F3DE6390C749(*uParam1, 1);
			}
		}
	}
}

void func_156(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_157(var uParam0, var uParam1)
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0x433C209504FBC7EE(&uVar0);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0x810AFFABCBF31E2D(*uParam0, 242628503) != 1 || unk_0x810AFFABCBF31E2D(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_158(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_443)
	{
		if (!uParam1->f_59)
		{
			if (!func_51())
			{
				func_162(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_161(uParam0, uParam1);
				uParam1->f_91 = unk_0xA0F74982C6AAA9D4();
			}
		}
	}
	if (bLocal_444)
	{
		if (!uParam1->f_60)
		{
			if (!func_51())
			{
				uParam1->f_60 = 1;
				func_160(uParam0, uParam1);
				uParam1->f_91 = unk_0xA0F74982C6AAA9D4();
				uParam1->f_92 = unk_0xA0F74982C6AAA9D4();
			}
		}
	}
	uVar0 = func_159(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = unk_0xECC01072E61D2F3A(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_60)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
				{
					unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			unk_0xFD192BB2F9563600(uParam1->f_88, "speed", fVar4, 0);
			unk_0xFD192BB2F9563600(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (unk_0xECC01072E61D2F3A(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0xA0F74982C6AAA9D4();
		uParam1->f_63 = 1;
	}
	if ((unk_0xECC01072E61D2F3A(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = unk_0xA0F74982C6AAA9D4();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0xA0F74982C6AAA9D4();
		uParam1->f_63 = 1;
	}
	if (((uParam1->f_59 || uParam1->f_60) && !uParam1->f_63) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_61 = 1;
			uParam1->f_63 = 0;
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x75D8F2D9A47E4AE2(uParam0->f_4, iVar1))
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x35DBB18680CBB9BD(uParam0->f_4, iVar1))
					{
						if ((unk_0xA0F74982C6AAA9D4() % 2000) < 50)
						{
						}
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xFD192BB2F9563600(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xFD192BB2F9563600(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0xA0F74982C6AAA9D4() - uParam1->f_91);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_61 = 1;
				uParam1->f_63 = 0;
			}
			else
			{
				fVar8 = (1f - (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar6)));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x75D8F2D9A47E4AE2(uParam0->f_4, iVar1))
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x35DBB18680CBB9BD(uParam0->f_4, iVar1))
					{
						if ((unk_0xA0F74982C6AAA9D4() % 2000) < 50)
						{
						}
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xFD192BB2F9563600(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xFD192BB2F9563600(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (unk_0xA0F74982C6AAA9D4() - uParam1->f_91);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_62 = 1;
			}
			else
			{
				fVar8 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar7));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x75D8F2D9A47E4AE2(uParam0->f_4, iVar1))
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_83[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0x35DBB18680CBB9BD(uParam0->f_4, iVar1))
					{
						if (unk_0x82E739904D3B17C8(uParam1->f_78[iVar1]))
						{
							unk_0xFD192BB2F9563600(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0x82E739904D3B17C8(uParam1->f_73[iVar1]))
					{
						unk_0xFD192BB2F9563600(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xFD192BB2F9563600(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xFD192BB2F9563600(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x75D8F2D9A47E4AE2(uParam0->f_4, iVar0))
		{
			if (!unk_0xF426A5DE932B3BEE(uLocal_458[iVar0], 1))
			{
				unk_0x26545538B51562AD(&(uLocal_458[iVar0]), 1);
			}
			if (unk_0x2FD1F57638D94898(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_445)
				{
					iLocal_445 = 1;
				}
			}
		}
		else if (unk_0xF426A5DE932B3BEE(uLocal_458[iVar0], 1))
		{
			unk_0xF17F4B0641AB2DE1(&(uLocal_458[iVar0]), 1);
		}
		if (!unk_0x35DBB18680CBB9BD(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0xF426A5DE932B3BEE(uLocal_453[iVar0], 1))
			{
				unk_0x26545538B51562AD(&(uLocal_453[iVar0]), 1);
			}
			if (!iLocal_445)
			{
				iLocal_445 = 1;
			}
		}
		else if (unk_0xF426A5DE932B3BEE(uLocal_453[iVar0], 1))
		{
			unk_0xF17F4B0641AB2DE1(&(uLocal_453[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_160(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_409, 0f, 0f, 0f, unk_0x5C02660403071A83(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_415, 0f, 0f, 0f, unk_0x5C02660403071A83(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_412, 0f, 0f, 0f, unk_0x5C02660403071A83(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_418, 0f, 0f, 0f, unk_0x5C02660403071A83(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xFD192BB2F9563600(uParam1->f_73[iVar0], "smoke", 1f, 0);
			unk_0xFD192BB2F9563600(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_161(var uParam0, var uParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		uParam1->f_88 = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_89 = unk_0x8374DCD8219A5A11("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	unk_0x8E01EBA3F7692D60(1);
}

void func_162(var uParam0)
{
	func_163(uParam0, 0f);
}

void func_163(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0xF426A5DE932B3BEE(*uParam0, 4)) + fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_164(var uParam0)
{
	return uParam0->f_416;
}

void func_165(var uParam0, var uParam1, var uParam2)
{
	if (!func_24(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
				{
					if (func_378(uParam0, 9) > 1f)
					{
						func_169(uParam0, unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()));
						func_186(uParam0, 50, 1, 0, 0);
						func_255(uParam0, 9, 0, 0);
						if (unk_0x7B4654D62B7E0E9E(uParam2->f_40))
						{
							unk_0xB412D79FA1018FF0(uParam2->f_40, 0);
							unk_0xAB27F3DE6390C749(uParam2->f_40, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_51() && func_378(uParam0, 9) > 4f)
				{
					func_186(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_168("TAXI_OBJ_POL", 0, 0))
				{
					func_186(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x14B5449970A1C2DA(unk_0xB927AFB90873B8C1(), func_167(uParam0)))
				{
					func_169(uParam0, unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()));
					func_52(6, 0);
				}
				if (!func_132(uParam0))
				{
					if (!unk_0x1BF2632AED6B5924())
					{
						if (func_378(uParam0, 16) > 10f)
						{
							func_186(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1)
				{
					if (unk_0x7B4654D62B7E0E9E(uParam2->f_40))
					{
						unk_0xB412D79FA1018FF0(uParam2->f_40, 255);
						unk_0xAB27F3DE6390C749(uParam2->f_40, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_51())
				{
					func_186(uParam0, 53, 1, 0, 1);
					func_52(7, func_167(uParam0));
					func_169(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_51())
				{
					func_166(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_166(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_167(var uParam0)
{
	return uParam0->f_106;
}

bool func_168(char* sParam0, int iParam1, int iParam2)
{
	unk_0x907B9289657244FB(sParam0);
	if (iParam1 == 1)
	{
		unk_0x2B088D6251C2080D(iParam2);
	}
	return unk_0x07B8D9CA22BFDA75();
}

void func_169(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_170(var uParam0)
{
	if (func_172(uParam0))
	{
		func_171(uParam0);
	}
}

void func_171(var uParam0)
{
	if (unk_0x35F02EDB0B3AE3F2() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xB1540336553EB013();
			func_140(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_378(uParam0, 20) > 3f)
				{
					func_186(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_24(uParam0->f_81, 262144) || !func_24(uParam0->f_81, 1048576))
				{
					if (func_378(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_186(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (func_378(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_186(uParam0, 85, 1, 0, 0);
						func_140(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_378(uParam0, 20) > 8f)
				{
					func_186(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_81, 262144) || func_24(uParam0->f_82, 67108864))
			{
				if (!func_133(uParam0, 22))
				{
					func_180(uParam0, 22);
				}
			}
			if (func_133(uParam0, 22) && func_378(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_24(uParam0->f_81, 1048576))
					{
						func_186(uParam0, 84, 1, 0, 0);
						func_140(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_24(uParam0->f_82, 134217728))
					{
						func_186(uParam0, 85, 1, 0, 0);
						func_140(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_172(var uParam0)
{
	return uParam0->f_120;
}

void func_173(var uParam0, var uParam1)
{
	func_176(uParam0, 1000);
	if ((!unk_0x2006A8C1BA2AFE80((*uParam1)[0], 0) && !unk_0x2006A8C1BA2AFE80((*uParam1)[1], 0)) && !unk_0x2006A8C1BA2AFE80((*uParam1)[2], 0))
	{
		unk_0x09D2BE36C9D2B76F((*uParam1)[0]);
		unk_0x09D2BE36C9D2B76F((*uParam1)[1]);
		unk_0x09D2BE36C9D2B76F((*uParam1)[2]);
	}
	func_174();
	func_151(uParam0);
}

void func_174()
{
	Global_14578 = 0;
	func_175();
}

void func_175()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_176(var uParam0, int iParam1)
{
	if (unk_0x54DA78A82349F5AC(*uParam0))
	{
		unk_0x1D1A369233055AEC(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x04E786541E35ECB1(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
	}
}

void func_177(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!unk_0x7B4654D62B7E0E9E(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_178(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!unk_0xA346AF1B89D5C562(uParam0->f_36[2]))
		{
			unk_0xAB27F3DE6390C749(uParam0->f_36[2], 1);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!unk_0x7B4654D62B7E0E9E(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_178(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!unk_0xA346AF1B89D5C562(uParam0->f_36[1]))
		{
			unk_0xAB27F3DE6390C749(uParam0->f_36[1], 1);
		}
	}
	else
	{
		if (!unk_0x7B4654D62B7E0E9E(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_178(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!unk_0xA346AF1B89D5C562(uParam0->f_36[0]))
		{
			unk_0xAB27F3DE6390C749(uParam0->f_36[0], 1);
		}
	}
}

var func_178(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_149(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
	return uVar0;
}

void func_179()
{
	func_223(&(Local_463.f_55), 2);
	func_223(&(Local_463.f_55), 4);
	func_223(&(Local_463.f_55), 16);
	func_223(&(Local_463.f_55), 64);
	func_223(&(Local_463.f_55), 256);
	func_223(&(Local_463.f_55), 512);
	func_223(&(Local_463.f_55), 1024);
	func_223(&(Local_463.f_55), 2048);
	func_223(&(Local_463.f_55), 4096);
	func_223(&(Local_463.f_55), 1073741824);
	func_223(&uLocal_1083, 2);
}

void func_180(var uParam0, int iParam1)
{
	func_181(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_181(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_99(uParam0);
	}
}

void func_182()
{
	unk_0x0049DE0B34213B12(joaat("stretch"));
	unk_0x0049DE0B34213B12(joaat("superd"));
	unk_0x0049DE0B34213B12(Local_893.f_45[0]);
	unk_0x0049DE0B34213B12(Local_893.f_45[1]);
	unk_0x0049DE0B34213B12(Local_893.f_45[2]);
	unk_0x0049DE0B34213B12(Local_893.f_45[3]);
	unk_0x0049DE0B34213B12(Local_893.f_45[4]);
	unk_0x651E63BA2F4975EC("oddjobs@taxi@gyn@cc@intro");
	unk_0x651E63BA2F4975EC("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x651E63BA2F4975EC("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_183(var uParam0, bool bParam1)
{
	func_184(uParam0);
	if (bParam1)
	{
		if (!unk_0x7B4654D62B7E0E9E(uParam0->f_9))
		{
			uParam0->f_9 = func_178(uParam0->f_17, 1);
		}
		else if (unk_0xD033DA403C7AE3E6(uParam0->f_9) == 0)
		{
			unk_0x2BE52B558CE18C4F(1, 0);
			unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
			unk_0x1651233EBDC5526E(uParam0->f_9, uParam0->f_17);
			unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
		}
	}
}

void func_184(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
	{
		unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
		unk_0x9403D0F4C7711241(&(uParam0->f_8));
	}
}

void func_185(var uParam0)
{
	unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
	unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
	func_176(uParam0, 1000);
}

void func_186(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_255(uParam0, 16, 4f, 0);
		if (func_187(uParam0))
		{
			func_49();
		}
	}
	func_214(uParam0, iParam2, bParam3);
}

int func_187(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_51())
	{
		Var6 = { func_189() };
		if (!unk_0x75CB9E30BA492FF0(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xC1C5B83BB6719C6C(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_188(&Var0);
			if (unk_0xC1C5B83BB6719C6C(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_189()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

bool func_190(var uParam0, var uParam1)
{
	return ((func_191((*uParam1)[0], uParam0) && func_191((*uParam1)[1], uParam0)) && func_191((*uParam1)[2], uParam0));
}

int func_191(int iParam0, var uParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam1->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			if (unk_0xDD5B7E23D882DABD(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_288(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_288(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_192(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_211(uParam0, (*uParam1)[0]);
	func_211(uParam0, (*uParam1)[1]);
	func_211(uParam0, (*uParam1)[2]);
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			func_209(uParam0, 1);
			if (func_35())
			{
				unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
				func_173(uParam0, uParam1);
			}
		}
		else if (unk_0x14B5449970A1C2DA(unk_0xB927AFB90873B8C1(), 0))
		{
			func_207(uParam0);
		}
		else
		{
			if (func_133(uParam0, 14))
			{
				func_151(uParam0);
				func_206(uParam0, uParam1, 0);
			}
			if (func_133(uParam0, 9))
			{
				func_140(uParam0, 9, 0);
				unk_0x8ACEB4FC9E9EE225();
				if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
				{
					unk_0xB412D79FA1018FF0(uParam0->f_8, 255);
					unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
				}
			}
			if (!unk_0xE4F7206742848BAF((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((unk_0xECC01072E61D2F3A(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_205(uParam0, (*uParam1)[iLocal_433]) > 50f || func_13(&uLocal_434) > 5f)
						{
							func_288(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (unk_0x810AFFABCBF31E2D((*uParam1)[iLocal_433], 713668775) != 1 || ((func_10(unk_0x27D769C59BC9D030(), (*uParam1)[iLocal_433], 1) < 20f && func_204((*uParam1)[iLocal_433], uParam0->f_11, 1) <= 28f) && func_204(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_202(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_201(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_94)
								{
									iVar0 = func_200(uParam0, &uVar1);
									if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
									{
										unk_0x550B00F01FC4ADF0(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0xF156AA2A744B309E((*uParam1)[iVar3]);
									unk_0x433C209504FBC7EE(&uVar2);
									unk_0x33A0CEA494F4C2A3(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0x9A4E2270C2271219((*uParam1)[iVar3], 0))
											{
												unk_0x85FD30B510E7C05E(0, uParam0->f_4, -1, 0, 2);
												unk_0x4E2F67DAF5750EE5(0, unk_0x3A5708FEE1B560A9(1750, 2250));
												unk_0x835BBE043A81D6DD(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0x9A4E2270C2271219((*uParam1)[iVar3], 0))
											{
												unk_0x85FD30B510E7C05E(0, uParam0->f_4, -1, 0, 2);
												unk_0x835BBE043A81D6DD(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0x9A4E2270C2271219((*uParam1)[iVar3], 0))
											{
												unk_0x85FD30B510E7C05E(0, uParam0->f_4, -1, 0, 2);
												unk_0x4E2F67DAF5750EE5(0, unk_0x3A5708FEE1B560A9(750, 1250));
												unk_0x835BBE043A81D6DD(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0x33F83FC0F5F458E3(uVar2);
									unk_0x8B8674266D533E9F((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_141(uParam0))
							{
								unk_0xF156AA2A744B309E((*uParam1)[0]);
								unk_0xF156AA2A744B309E((*uParam1)[1]);
								unk_0xF156AA2A744B309E((*uParam1)[2]);
							}
							else if ((unk_0x810AFFABCBF31E2D((*uParam1)[0], 242628503) != 1 && unk_0x810AFFABCBF31E2D((*uParam1)[0], 242628503) != 0) && func_205(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0x433C209504FBC7EE(&(uParam0->f_243));
								unk_0x33A0CEA494F4C2A3(&(uParam0->f_243));
								unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4, 0);
								unk_0x878D12AEFBF5BAF0(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0x33F83FC0F5F458E3(uParam0->f_243);
								unk_0x8B8674266D533E9F((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_94)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_199(uParam0, 1))
									{
										unk_0x09D2BE36C9D2B76F((*uParam1)[0]);
										unk_0x09D2BE36C9D2B76F((*uParam1)[1]);
										unk_0x09D2BE36C9D2B76F((*uParam1)[2]);
										func_288(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_198(uParam0, uParam1);
							if (func_205(uParam0, (*uParam1)[0]) < fVar4 || func_35())
							{
								if (unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0x9A4E2270C2271219((*uParam1)[0], 0) && unk_0x9A4E2270C2271219((*uParam1)[1], 0)) && unk_0x9A4E2270C2271219((*uParam1)[2], 0))
									{
										func_184(uParam0);
										unk_0x56F64CC9254C2E4F((*uParam1)[0], 26, 1);
										unk_0x56F64CC9254C2E4F((*uParam1)[1], 26, 1);
										unk_0x56F64CC9254C2E4F((*uParam1)[2], 26, 1);
										unk_0x56F64CC9254C2E4F((*uParam1)[0], 104, 1);
										func_140(uParam0, 5, 0);
										unk_0xFC464E30B10AFB48();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
								{
								}
								unk_0x5ED34B5F21AFF532(unk_0xA8CFDE65C45F813B((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_197(uParam1))
							{
								unk_0xF156AA2A744B309E((*uParam1)[0]);
								unk_0xF156AA2A744B309E((*uParam1)[1]);
								unk_0xF156AA2A744B309E((*uParam1)[2]);
								func_288(uParam0, "Left Passenger", 8);
							}
							if ((func_196(uParam0, uParam1) || func_195(uParam0, uParam1)) || func_194(uParam0, uParam1))
							{
								if (!unk_0x9A4E2270C2271219((*uParam1)[2], 0))
								{
									unk_0xE4A57337AE998385((*uParam1)[2], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 2;
								}
								if (!unk_0x9A4E2270C2271219((*uParam1)[1], 0))
								{
									unk_0xE4A57337AE998385((*uParam1)[1], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 1;
								}
								if (!unk_0x9A4E2270C2271219((*uParam1)[0], 0))
								{
									unk_0xE4A57337AE998385((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 0;
								}
								unk_0x9403D0F4C7711241(&(uParam0->f_8));
								uParam0->f_8 = func_193((*uParam1)[iLocal_433], 0, 0);
								func_99(&uLocal_434);
								uParam0->f_48 = 0;
								iLocal_87 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_288(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_288(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_193(int iParam0, bool bParam1, bool bParam2)
{
	return func_148(iParam0, !bParam1, bParam2);
}

int func_194(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE4F7206742848BAF((*uParam1)[iVar0]) && !unk_0x9A4E2270C2271219((*uParam1)[iVar0], 0))
		{
			if (func_205(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_195(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE4F7206742848BAF((*uParam1)[iVar0]) && !unk_0x9A4E2270C2271219((*uParam1)[iVar0], 0))
		{
			if (func_204(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_196(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE4F7206742848BAF((*uParam1)[iVar0]) && !unk_0x9A4E2270C2271219((*uParam1)[iVar0], 0))
		{
			if (func_204((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_197(var uParam0)
{
	if ((!unk_0xE4F7206742848BAF((*uParam0)[0]) && !unk_0xE4F7206742848BAF((*uParam0)[1])) && !unk_0xE4F7206742848BAF((*uParam0)[2]))
	{
		if ((unk_0x9A4E2270C2271219((*uParam0)[0], 0) || unk_0x9A4E2270C2271219((*uParam0)[1], 0)) || unk_0x9A4E2270C2271219((*uParam0)[2], 0))
		{
			if ((!unk_0x9A4E2270C2271219((*uParam0)[0], 0) || !unk_0x9A4E2270C2271219((*uParam0)[1], 0)) || !unk_0x9A4E2270C2271219((*uParam0)[2], 0))
			{
				if (!func_16(&uLocal_437))
				{
					func_181(&uLocal_437);
				}
				else if (func_97(&uLocal_437) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_198(var uParam0, var uParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF((*uParam1)[iLocal_433]))
		{
			if (func_9((*uParam1)[iLocal_433], 1) > 30f)
			{
				if (unk_0x810AFFABCBF31E2D((*uParam1)[iLocal_433], -1794415470) == 1 || unk_0x810AFFABCBF31E2D((*uParam1)[iLocal_433], 242628503) == 1)
				{
					func_288(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_199(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x9297C590C99228DC(uParam0->f_4, 1);
		iVar0[1] = unk_0x9297C590C99228DC(uParam0->f_4, 2);
		iVar0[2] = unk_0x9297C590C99228DC(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD2CFFE76B625AE55(iVar0[iVar4]))
			{
				if (unk_0x2006A8C1BA2AFE80(iVar0[iVar4], 0))
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
		if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_200(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 1);
		if (unk_0xD2CFFE76B625AE55(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 2);
			if (unk_0xD2CFFE76B625AE55(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 0);
				if (unk_0xD2CFFE76B625AE55(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_201(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x2006A8C1BA2AFE80((*uParam1)[0], 0))
	{
		if (!unk_0x5EE69620FB6ABC8D((*uParam1)[iLocal_433]) && func_9((*uParam1)[iLocal_433], 1) < fParam3)
		{
			if (!func_133(uParam0, 5))
			{
				func_255(uParam0, 5, 0, 0);
			}
		}
		else if (func_133(uParam0, 5))
		{
			func_140(uParam0, 5, 0);
		}
		if (((func_378(uParam0, 5) > IntToFloat(iParam2) && unk_0xECC01072E61D2F3A(uParam0->f_4) < fParam5) && !unk_0x5EE69620FB6ABC8D((*uParam1)[iLocal_433])) || func_9((*uParam1)[iLocal_433], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_202(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uVar10 = unk_0x1060AD708DD56BC7(uParam0->f_4, "windscreen");
	Var6 = { unk_0xEAE1E838D30BBB88(uParam0->f_4, uVar10) };
	Var6 = { unk_0x7CECDDECF10DF2AA(uParam0->f_4, Var6) };
	Var6.f_1 = (Var6.f_1 + 1f);
	Var0 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, Var6) };
	Var3 = { unk_0xD7C4E2CB0B216852(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x777175C2C7FD5EA0(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xA8ED9F72DC442242((*uParam1)[0], 1);
			unk_0xA8ED9F72DC442242((*uParam1)[1], 1);
			unk_0xA8ED9F72DC442242((*uParam1)[2], 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_433], 0) <= fParam2 && !uParam0->f_142) && unk_0x43698C98CC255554((Var0.f_2 - Var3.f_2)) < 5f)
			{
				iVar9 = func_203(&(uParam0->f_409), Var0, Var3, 0);
				if (iVar9 == 0)
				{
					iLocal_87 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x8ACEB4FC9E9EE225();
			func_186(uParam0, 4, 1, 0, 1);
			unk_0xF156AA2A744B309E((*uParam1)[iLocal_433]);
			unk_0x85FD30B510E7C05E(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x433C209504FBC7EE(&(uParam0->f_243));
			unk_0x33A0CEA494F4C2A3(&(uParam0->f_243));
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4, 0);
			unk_0x33F83FC0F5F458E3(uParam0->f_243);
			unk_0x8B8674266D533E9F((*uParam1)[iLocal_433], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_87 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_203(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xE98636CD6C8CB7F8(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xF196E47C22823C63(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

float func_204(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

float func_205(var uParam0, int iParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		if (func_141(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_206(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 0);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
				func_150(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x7B4654D62B7E0E9E(uParam1->f_36[iVar0]))
					{
						unk_0xB412D79FA1018FF0(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_186(uParam0, 2, 1, 1, 0);
			}
			func_145(uParam0, 0, 0);
		}
		else if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
		{
			unk_0x9403D0F4C7711241(&(uParam0->f_10));
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 255);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
				func_150(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x7B4654D62B7E0E9E(uParam1->f_36[iVar0]))
					{
						unk_0xB412D79FA1018FF0(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_207(var uParam0)
{
	func_211(uParam0, uParam0->f_3);
	if (func_141(uParam0))
	{
		if (func_133(uParam0, 14))
		{
			func_151(uParam0);
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
			{
				unk_0x9403D0F4C7711241(&(uParam0->f_10));
			}
		}
	}
	if (!func_133(uParam0, 9))
	{
		if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
		{
			unk_0xB412D79FA1018FF0(uParam0->f_8, 0);
			unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
		}
		func_255(uParam0, 9, 0, 0);
		func_208("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_208(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0xB1547516FF59A048(iParam1, 1);
}

void func_209(var uParam0, bool bParam1)
{
	func_211(uParam0, uParam0->f_3);
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_133(uParam0, 14))
			{
				if (func_51())
				{
					func_152(1);
				}
				func_210(uParam0, 11, 1);
				func_144(uParam0, 1);
				func_255(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_115(uParam0))
				{
					if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
					{
					}
					if (unk_0x9A4E2270C2271219(uParam0->f_2, 0))
					{
						if (func_378(uParam0, 15) > 5f)
						{
							func_255(uParam0, 15, 0f, 1);
						}
					}
					if (func_378(uParam0, 14) > 20f)
					{
						func_288(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_378(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_288(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_288(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_211(var uParam0, int iParam1)
{
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (!unk_0xE4F7206742848BAF(iParam1))
		{
			if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
			{
				if ((unk_0x9E9ACEFADFDFFEA5(iParam1, joaat("weapon_stungun"), 0) || unk_0x9E9ACEFADFDFFEA5(iParam1, 0, 2)) || unk_0x9E9ACEFADFDFFEA5(iParam1, 0, 1))
				{
					func_288(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
			}
		}
	}
}

void func_212()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x0B4DDB992C7BCF57(Local_463.f_4, 0))
	{
		if (func_141(&Local_463))
		{
			if (!iLocal_1010)
			{
				uVar0 = unk_0x1060AD708DD56BC7(Local_463.f_4, "window_lf");
				uVar1 = unk_0x1060AD708DD56BC7(Local_463.f_4, "window_lr");
				uVar2 = unk_0x1060AD708DD56BC7(Local_463.f_4, "window_rf");
				uVar3 = unk_0x1060AD708DD56BC7(Local_463.f_4, "window_rr");
				Local_409 = { unk_0xEAE1E838D30BBB88(Local_463.f_4, uVar0) };
				Local_409 = { unk_0x7CECDDECF10DF2AA(Local_463.f_4, Local_409) };
				Local_421 = { Local_409 };
				Local_409.f_2 = (Local_409.f_2 + 0.15f);
				Local_409.f_1 = (Local_409.f_1 - 0.15f);
				Local_412 = { unk_0xEAE1E838D30BBB88(Local_463.f_4, uVar1) };
				Local_412 = { unk_0x7CECDDECF10DF2AA(Local_463.f_4, Local_412) };
				Local_424 = { Local_412 };
				Local_412.f_2 = (Local_412.f_2 + 0.15f);
				Local_415 = { unk_0xEAE1E838D30BBB88(Local_463.f_4, uVar2) };
				Local_415 = { unk_0x7CECDDECF10DF2AA(Local_463.f_4, Local_415) };
				Local_427 = { Local_415 };
				Local_415.f_2 = (Local_415.f_2 + 0.15f);
				Local_415.f_1 = (Local_415.f_1 - 0.15f);
				Local_418 = { unk_0xEAE1E838D30BBB88(Local_463.f_4, uVar3) };
				Local_418 = { unk_0x7CECDDECF10DF2AA(Local_463.f_4, Local_418) };
				Local_430 = { Local_418 };
				Local_418.f_2 = (Local_418.f_2 + 0.15f);
				iLocal_1010 = 1;
			}
		}
		else if (iLocal_1010)
		{
			iLocal_1010 = 0;
		}
	}
}

void func_213(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_40(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_40(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0xE03080E2E83BF49E(Var0, Var3);
		*uParam0 = unk_0x84496C593C3C7F04(Var0, Var3, 0, 1, 1, 1);
		unk_0x90CDF5C9FC20A5BF(Param1, fParam4, 0);
	}
	else
	{
		unk_0xF557B4BDE99A5E64();
		unk_0x3CE75187603652E2(*uParam0, 0);
	}
}

void func_214(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_255(uParam0, 16, 4f, 0);
		unk_0x8ACEB4FC9E9EE225();
	}
}

int func_215(var uParam0, int iParam1)
{
	if (!unk_0x911CCA58116D31F0(2))
	{
		return 0;
	}
	func_222(12);
	if (func_24(uParam0->f_44, 8))
	{
		if (!func_24(uParam0->f_44, 128))
		{
			if (unk_0x707BF5DF799AF9CA(unk_0x27D769C59BC9D030()) && !func_24(uParam0->f_44, 256))
			{
				func_223(&(uParam0->f_44), 256);
			}
			if (func_24(uParam0->f_44, 256) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				func_186(uParam0, 135, 1, 0, 1);
				func_223(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_219(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_44, 8))
			{
				unk_0xF14C2AE8A3F59CE0(uParam0->f_3, unk_0x27D769C59BC9D030(), 0);
				func_186(uParam0, 133, 1, 0, 1);
				func_223(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xE4F7206742848BAF(uParam0->f_3) || unk_0xFA5CB09BC1B8EFDF(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_288(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xD9FFE8E1642C81E2(uParam0->f_2, 0);
		unk_0x1B7FCBF5F0A9F480(uParam0->f_4, 1);
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0xDD8638B43D499C77(uParam0->f_4);
			func_217(uParam0);
			func_52(2, 0);
			bLocal_94 = true;
			func_181(&uLocal_90);
			return 1;
		}
		else
		{
			func_288(uParam0, "No Taxi", 21);
			func_216("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_216(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

void func_217(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (func_218())
		{
		}
	}
}

int func_218()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_219(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				iVar1 = unk_0x946C63BD9EF05437(iVar0);
				bVar2 = func_221(iVar0);
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
				if (unk_0xA8059F869DFB2747(iVar1))
				{
					if (unk_0x9297C590C99228DC(iVar0, -1) == unk_0x27D769C59BC9D030())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x1AEADBB0240E0B51(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_44, 64))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_216("TX_VIP_DMGD", -1);
							if (func_220("TX_VIP_DMGD"))
							{
								func_223(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_44, 32))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_216("TX_VIP_CAR", -1);
							if (func_220("TX_VIP_CAR"))
							{
								func_223(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_44, 16))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_216("TX_VIP_SMALL", -1);
							if (func_220("TX_VIP_SMALL"))
							{
								func_223(&(uParam0->f_44), 16);
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
			func_22(&(uParam0->f_44), 16);
			func_22(&(uParam0->f_44), 64);
			func_22(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_220(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xAB191CE9D0342508(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x2FD1F57638D94898(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 3))
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

void func_222(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		uVar0 = iParam0;
		unk_0x4392DD4CF5597D9C(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xA5064174B9213E3A(8, &cVar1);
	}
}

void func_223(var uParam0, int iParam1)
{
	func_224(uParam0, iParam1);
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_226()
{
	Local_343.f_0 = 0;
	func_243(33903, 33878, 1);
	func_243(33639, 33616, 1);
	func_243(33554, 33529, 1);
	func_243(33457, 33433, 1);
	func_243(33323, 33302, 1);
	func_243(33249, 33224, 1);
	func_243(33082, 33059, 1);
}

int func_227(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_228(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (func_230(uParam0->f_4))
		{
			func_229(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_229(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_230(int iParam0)
{
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB23CB7DBBE38B63C(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xE06C11511DE39267(iParam0, 0, 40000) || unk_0xE06C11511DE39267(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_231(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_232(var uParam0)
{
	if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
	{
		if (func_233(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_233(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_234(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_229(uParam0, 11);
	return 1;
}

int func_235(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (unk_0xA8ED23ED7AA60A97(uParam0->f_4) && !unk_0xC2331082FBFCB35D(uParam0->f_4))
		{
			if (!func_133(uParam0, 25))
			{
				func_255(uParam0, 25, 0, 0);
			}
			else if (func_378(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_133(uParam0, 25))
		{
			func_140(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_236(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_237(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (unk_0xE52FA253BAE3E498(uParam0->f_4))
		{
			if (unk_0xE06C11511DE39267(uParam0->f_4, 0, 40000) || unk_0xE06C11511DE39267(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_238(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_239(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
		{
			if (unk_0xFCFE5DE581193020(uParam0->f_4))
			{
				if (func_233(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_240(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_241(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (func_242(uParam0->f_4))
		{
			func_229(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB23CB7DBBE38B63C(iParam0) == 0f)
	{
		if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xE06C11511DE39267(iParam0, 0, 40000) || unk_0xE06C11511DE39267(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_224(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_224(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_244(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_288(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_245(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_3))
	{
		if ((unk_0xE4F7206742848BAF(uParam0->f_3) || unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0)) || unk_0xFA7888B344869306(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_246()
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

int func_247()
{
	if (!unk_0x875098323FCA8FE6(Local_893.f_41[0]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_41[1]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_41[2]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x4C3CEC038B6637D7(uLocal_1090))
	{
		return 0;
	}
	if (!func_248(&iLocal_999, 1))
	{
		func_249("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_999, 1000);
		return 0;
	}
	return 1;
}

int func_248(int iParam0, bool bParam1)
{
	if (!unk_0x875098323FCA8FE6(func_21()))
	{
		func_249("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x482101C9B3483958("gestures@m@standing@casual"))
		{
			func_249("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x482101C9B3483958("oddjobs@taxi@"))
	{
		func_249("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("oddjobs@towingcome_here"))
	{
		func_249("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("misscommon@response"))
	{
		func_249("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x911CCA58116D31F0(2))
	{
		func_249("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_249(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xA0F74982C6AAA9D4() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xA0F74982C6AAA9D4();
}

void func_250(var uParam0, int iParam1)
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

void func_251(var uParam0)
{
	if (!unk_0xE4F7206742848BAF(uParam0->f_3))
	{
		uParam0->f_8 = func_193(uParam0->f_3, 0, 0);
		unk_0xC5B67A5E18AF2B72(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x2BE52B558CE18C4F(1, 0);
		unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
	}
}

int func_252(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param4 };
	func_41(uParam0->f_14, 0);
	unk_0xC972AA2C9F94741D(uParam0->f_14, 25f, 0, 0, 0, 0, 0);
	if (unk_0xD2CFFE76B625AE55(Global_99866.f_225[0]))
	{
		(*uParam7)[0] = Global_99866.f_225[0];
		(*uParam7)[1] = Global_99866.f_225[1];
		(*uParam7)[2] = Global_99866.f_225[2];
		unk_0xAF3355298F537BB0((*uParam7)[0], 1, 1);
		unk_0xAF3355298F537BB0((*uParam7)[1], 1, 1);
		unk_0xAF3355298F537BB0((*uParam7)[2], 1, 1);
	}
	else
	{
		(*uParam7)[0] = unk_0x91D233CD0204A37F(26, uParam7->f_41[0], uParam0->f_11, -178.76f, 1, 1);
		(*uParam7)[1] = unk_0x91D233CD0204A37F(26, uParam7->f_41[1], unk_0xD7C4E2CB0B216852((*uParam7)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam7)[2] = unk_0x91D233CD0204A37F(26, uParam7->f_41[1], unk_0xD7C4E2CB0B216852((*uParam7)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_254(uParam0, uParam7[0]);
	uParam7->f_51[0] = 0;
	uParam7->f_51[1] = 0;
	uParam7->f_51[2] = 0;
	uParam7->f_12[0] = 0;
	uParam7->f_12[1] = 1;
	uParam7->f_12[2] = 2;
	if ((!unk_0xE4F7206742848BAF((*uParam7)[0]) && !unk_0xE4F7206742848BAF((*uParam7)[1])) && !unk_0xE4F7206742848BAF((*uParam7)[2]))
	{
		unk_0xF14C2AE8A3F59CE0((*uParam7)[1], (*uParam7)[0], 0);
		unk_0xF14C2AE8A3F59CE0((*uParam7)[2], (*uParam7)[0], 0);
		unk_0xF14C2AE8A3F59CE0((*uParam7)[0], (*uParam7)[1], 0);
	}
	if (!unk_0xE4F7206742848BAF((*uParam7)[2]))
	{
		func_7(&(uParam0->f_244), 5, (*uParam7)[2], "TaxiPaulie", 0, 1);
		unk_0x4410225696D7183B((*uParam7)[2], "TaxiPaulie");
		unk_0x56F64CC9254C2E4F((*uParam7)[2], 317, 1);
	}
	if (!unk_0xE4F7206742848BAF((*uParam7)[1]))
	{
		func_7(&(uParam0->f_244), 4, (*uParam7)[1], "TaxiClyde", 0, 1);
		unk_0x4410225696D7183B((*uParam7)[1], "TaxiClyde");
		unk_0x56F64CC9254C2E4F((*uParam7)[1], 317, 1);
	}
	if (!unk_0xE4F7206742848BAF((*uParam7)[0]))
	{
		func_7(&(uParam0->f_244), 3, (*uParam7)[0], "TaxiDarren", 0, 1);
		unk_0x4410225696D7183B((*uParam7)[0], "TaxiDarren");
		unk_0x56F64CC9254C2E4F((*uParam7)[0], 317, 1);
		unk_0x5974EAB5457E93B2("TAXI_Passenger", &(uParam0->f_413));
		unk_0xED5347CD6B7B01FA(1, uParam0->f_413, joaat("player"));
		unk_0x71065DDFF8D7744C((*uParam7)[0], uParam0->f_413);
		func_253((*uParam7)[1], uParam0->f_413);
		func_253((*uParam7)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_253(int iParam0, var uParam1)
{
	if (!unk_0xE4F7206742848BAF(uParam0))
	{
		unk_0x71065DDFF8D7744C(iParam0, uParam1);
	}
}

void func_254(var uParam0, var uParam1)
{
	if (!unk_0xE4F7206742848BAF(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_255(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_100(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_99(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_100(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_256()
{
	unk_0x8E029D91177781A9();
	unk_0x88172B3983EC5071("oddjobs@taxi@gyn@cc@hotbox");
}

void func_257()
{
	unk_0x97C59C4E8349D15F(Local_893.f_45[0]);
	unk_0x97C59C4E8349D15F(Local_893.f_45[1]);
	unk_0x97C59C4E8349D15F(Local_893.f_45[2]);
	unk_0x97C59C4E8349D15F(Local_893.f_45[3]);
	unk_0x97C59C4E8349D15F(Local_893.f_45[4]);
	unk_0x97C59C4E8349D15F(joaat("stretch"));
	unk_0x97C59C4E8349D15F(joaat("superd"));
	unk_0x88172B3983EC5071("oddjobs@taxi@gyn@cc@intro");
	unk_0x88172B3983EC5071("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x88172B3983EC5071("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_1090 = func_258();
}

var func_258()
{
	return unk_0x9A64FC8B83855E3B("MIDSIZED_MESSAGE");
}

void func_259()
{
	unk_0x97C59C4E8349D15F(Local_893.f_41[0]);
	unk_0x97C59C4E8349D15F(Local_893.f_41[1]);
	unk_0x97C59C4E8349D15F(Local_893.f_41[2]);
	func_260(1);
}

void func_260(bool bParam0)
{
	unk_0x97C59C4E8349D15F(func_21());
	if (bParam0)
	{
		unk_0x88172B3983EC5071("gestures@m@standing@casual");
	}
	unk_0x88172B3983EC5071("oddjobs@taxi@");
	unk_0x88172B3983EC5071("oddjobs@towingcome_here");
	unk_0x88172B3983EC5071("misscommon@response");
	unk_0x8378AB3CED5FF44A("TAXI", 2);
	if (!func_24(Global_101154.f_17787, 128))
	{
		func_223(&(Global_101154.f_17787), 128);
	}
}

void func_261(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x26545538B51562AD(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_262(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_263(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_2, 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0x2006A8C1BA2AFE80(uParam1->f_4[iVar0], 0))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0x7E8F7C1D05860F53(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0x2006A8C1BA2AFE80(uParam1->f_10, 0))
	{
		if (func_10(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			unk_0x9846B4D56971A958(&(uParam1->f_10));
			unk_0x9846B4D56971A958(&(uParam1->f_11));
		}
	}
}

void func_264(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
		{
			if (bParam2)
			{
				if (func_378(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_186(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_186(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_255(uParam0, 10, 0f, 1);
				}
			}
			else if (func_378(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_186(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_186(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_255(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_378(uParam0, 10) > 30f)
		{
			if (!func_51())
			{
				if (uParam0->f_112)
				{
					func_186(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_186(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_255(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_181(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_287(uParam0))
			{
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_286(uParam0, 1);
				func_284(5, uParam0);
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_181(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_282(uParam0))
			{
				func_286(uParam0, 1);
				func_284(0, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_181(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_281(uParam0))
			{
				func_286(uParam0, 1);
				func_284(1, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x4C3235E6E203703D(uParam0->f_4);
				func_181(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_97(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_280(uParam0))
			{
				func_286(uParam0, 1);
				func_284(8, uParam0);
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_181(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_279(uParam0))
			{
				func_286(uParam0, 1);
				func_284(6, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_181(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_278(uParam0))
			{
				func_286(uParam0, 1);
				func_284(4, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_181(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_277(uParam0))
			{
				func_284(7, uParam0);
				func_286(uParam0, 1);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_181(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_276(uParam0))
			{
				func_286(uParam0, 1);
				func_284(9, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_181(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_270(uParam0))
			{
				func_286(uParam0, 1);
				func_284(13, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_181(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_269(uParam0))
			{
				func_286(uParam0, 1);
				func_284(14, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_181(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_268(uParam0))
			{
				func_286(uParam0, 1);
				func_284(11, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_181(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_267(uParam0))
			{
				func_286(uParam0, 1);
				func_284(12, uParam0);
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_283(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_266(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_97(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_265(uParam0))
			{
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_286(uParam0, 1);
				func_284(2, uParam0);
				func_283(uParam0);
			}
		}
	}
}

int func_265(var uParam0)
{
	float fVar0;
	
	if (!unk_0xE4F7206742848BAF(uParam0->f_2))
	{
		if ((!unk_0xECD82034ED52600B(uParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xECC01072E61D2F3A(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_181(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_97(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xECC01072E61D2F3A(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_96(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_96(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_266(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_100(uParam0, fParam1);
	}
}

int func_267(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_181(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_96(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_268(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (unk_0x43698C98CC255554(Var0.f_0) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_181(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_97(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x43698C98CC255554(uLocal_342) - unk_0x43698C98CC255554(Var0.f_0)) < 0f)
			{
				func_96(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_97(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_96(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_269(var uParam0)
{
	if (((((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xE02F462DE06D185B(unk_0xA8CFDE65C45F813B(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD2CFFE76B625AE55(uParam0->f_5))
			{
				if ((unk_0xECC01072E61D2F3A(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x2006A8C1BA2AFE80(uParam0->f_5, 0) && !unk_0x32C6487B93CCAF4F(uParam0->f_5, -1)))
				{
					func_181(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_97(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x1A82CEBB20BF3F73(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_97(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x1A82CEBB20BF3F73(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_270(var uParam0)
{
	if (((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_271(uParam0->f_4) && unk_0xECC01072E61D2F3A(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_181(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_96(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_271(int iParam0)
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
	
	unk_0x73C1A9AD53AC8AD8(unk_0xA8CFDE65C45F813B(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x73C1A9AD53AC8AD8(unk_0xA8CFDE65C45F813B(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xED5F844026C08CB7(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_275((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_274(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_272(unk_0xA8CFDE65C45F813B(iParam0, 1), Var15, Var18, Var21);
}

int func_272(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_275(Param6 - Param3) };
	Var3 = { func_275(Param9 - Param3) };
	fVar6 = func_273(Param0, Var0);
	fVar7 = func_273(Param3, Var0);
	fVar8 = func_273(Param6, Var0);
	fVar9 = func_273(Param0, Var3);
	fVar10 = func_273(Param3, Var3);
	fVar11 = func_273(Param9, Var3);
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

float func_273(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_274(struct<3> Param0, int iParam3)
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

Vector3 func_275(struct<3> Param0)
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

int func_276(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			if (unk_0x71A741FE7CE9D57A(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x943B0C3F713F51DE(uParam0->f_4) <= -145f || unk_0x943B0C3F713F51DE(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x943B0C3F713F51DE(uParam0->f_4) <= 35f && unk_0x943B0C3F713F51DE(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x3709CB38CF163ACD(unk_0x4D29100D094E5511());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_181(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_96(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_279(var uParam0)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4A3FB4BE0A14981D(unk_0x4D29100D094E5511());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_181(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_96(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0xF6E7E32D0D604675(uParam0->f_4))
		{
			iVar0 = unk_0x4C3235E6E203703D(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x1393E54C663BBD20(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_186(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_186(uParam0, 72, 1, 0, 1);
				}
				func_96(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_281(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (unk_0x43698C98CC255554(Var0.f_0) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_181(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_96(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xC2331082FBFCB35D(uParam0->f_4) && unk_0x0BAF34551BADE6DC(uParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_181(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_96(&(Local_190[0 /*10*/].f_3));
				func_99(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_283(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_99(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_255(uParam0, 10, 0f, 1);
	unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
}

void func_284(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_285(uParam1, iParam0);
	func_96(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_286(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_287(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0xECC01072E61D2F3A(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_181(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_96(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_288(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_174();
	func_401(2);
	Var0 = { func_305() };
	if ((!unk_0x75CB9E30BA492FF0(&Var0) && func_51()) && !unk_0xC1C5B83BB6719C6C(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x8ACEB4FC9E9EE225();
		unk_0x5BD150B52CE8D356(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (!func_115(uParam0))
			{
				if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_255(uParam0, 3, 0, 0);
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
				func_303(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_115(uParam0))
			{
				if (unk_0xFCFE5DE581193020(uParam0->f_4))
				{
					func_299(uParam0, 4096, 0);
				}
				else
				{
					func_299(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_303(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_303(uParam0, &Var0);
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
				func_303(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_303(uParam0, &Var0);
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_303(uParam0, &Var0);
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
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
				func_303(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_299(uParam0, 0, 0);
			func_303(uParam0, &Var0);
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
				func_303(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_303(uParam0, &Var0);
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
				func_303(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_298(&Var0);
			func_289(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_303(uParam0, &Var0);
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
					func_303(uParam0, &Var0);
				}
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_301(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_255(uParam0, 3, 0f, 1);
	}
}

int func_289(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_297(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_290(sParam2, iParam3, 0);
}

int func_290(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x94DA6AACA7F07289(0);
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
					func_175();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1BF2632AED6B5924())
		{
			return 0;
		}
		if (func_296(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_295();
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
			if (bParam2)
			{
				func_294();
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_293())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
				}
			}
			if (func_33())
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_292();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_291();
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
		func_175();
	}
	return 0;
}

void func_291()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x94DA6AACA7F07289(0);
	Global_15712 = 1;
}

void func_292()
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
}

int func_293()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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

void func_294()
{
	if (func_77(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_93();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_295()
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

bool func_296(int iParam0, int iParam1)
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
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_297(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_298(char* sParam0)
{
	switch (func_3(unk_0x27D769C59BC9D030()))
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

void func_299(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		unk_0xA8ED9F72DC442242(uParam0->f_3, 0);
		unk_0x1393E54C663BBD20(uParam0->f_3);
		unk_0x1545069170501814(uParam0->f_3, 3, 0);
		unk_0x7ED3655E5924C6F4(uParam0->f_3, 17, 1);
		unk_0xF156AA2A744B309E(uParam0->f_3);
		if ((func_105(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_110(uParam0->f_29)) && !bParam2)
		{
			func_300(uParam0);
		}
		else
		{
			unk_0x1545069170501814(uParam0->f_3, 1024, 1);
			unk_0x1545069170501814(uParam0->f_3, 131072, 1);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			unk_0x550B00F01FC4ADF0(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			else
			{
				unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
			}
			unk_0xF2E2A21DDA5A0DA4(0, 0);
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(uParam0->f_3, uVar0);
			unk_0x433C209504FBC7EE(&uVar0);
		}
		unk_0x94DC76C688E7D222(uParam0->f_3, 1);
	}
}

void func_300(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_42(func_43(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xFBDCF3D5834B58D8(uParam0->f_3, 84.9058f);
				unk_0x94DC76C688E7D222(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFBDCF3D5834B58D8(uParam0->f_3, 68.3138f);
				unk_0x94DC76C688E7D222(uParam0->f_3, 1);
			}
			else
			{
				unk_0x89E04CE50E22A89C(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xF156AA2A744B309E(uParam0->f_3);
			unk_0x433C209504FBC7EE(&uVar0);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			unk_0x550B00F01FC4ADF0(0, 0, 0);
			unk_0xF2E2A21DDA5A0DA4(0, 0);
			unk_0xE4A57337AE998385(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0603942C851F9C09(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x10EFF39427987154(0, 1);
				unk_0xE4A57337AE998385(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xD9F9CB5C8842E29C(0, 151.7794f, 0);
				unk_0x0603942C851F9C09(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 20000);
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			else
			{
				unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x878D12AEFBF5BAF0(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x35A830607A198ABC(uParam0->f_29, 15f, 1))
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(uParam0->f_3, uVar0);
			unk_0x433C209504FBC7EE(&uVar0);
		}
		unk_0x94DC76C688E7D222(uParam0->f_3, 1);
	}
}

void func_301(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x1D6AFE0F8AC2F140(uParam0, sParam1, uParam2, func_302(iParam3), 0);
}

int func_302(int iParam0)
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

void func_303(var uParam0, char* sParam1)
{
	if (func_304(uParam0))
	{
		func_289(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_304(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_10(unk_0x27D769C59BC9D030(), uParam0->f_3, 1) < 40f && !unk_0x5EE69620FB6ABC8D(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_305()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
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

int func_306(var uParam0)
{
	return uParam0->f_118;
}

void func_307()
{
	func_336(&Local_463);
	if (func_335(&Local_463, &Local_1012))
	{
		switch (Local_1012.f_27)
		{
			case 0:
				if (Local_463.f_410 == 9)
				{
					if (!func_131(&Local_463))
					{
						if (func_334("TAXI_OBJ_CC1") || unk_0x7B4654D62B7E0E9E(Local_893.f_36[2]))
						{
							Local_1012.f_27++;
						}
						else if (func_164(&Local_463) != 10)
						{
							func_186(&Local_463, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_164(&Local_463) > 10 && func_164(&Local_463) != 15) && !func_131(&Local_463))
				{
					func_186(&Local_463, 15, 1, 0, 0);
					if (bLocal_1011)
					{
					}
					func_180(&Local_463, 7);
				}
				break;
			
			case 2:
				if (!Local_893.f_66)
				{
					Local_893.f_66 = 1;
					bLocal_443 = true;
				}
				if (func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1012.f_27++;
				}
				if (func_378(&Local_463, 11) > 17f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 700f)
				{
					func_186(&Local_463, 95, 1, 0, 0);
					if (bLocal_1011)
					{
					}
				}
				else if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_164(&Local_463) > 10 && func_164(&Local_463) != 16) && !func_131(&Local_463))
				{
					func_186(&Local_463, 16, 1, 0, 0);
					if (bLocal_1011)
					{
					}
				}
				break;
			
			case 4:
				if (func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1012.f_27++;
				}
				if (func_378(&Local_463, 11) > 8f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 700f)
				{
					func_186(&Local_463, 94, 1, 0, 0);
					if (bLocal_1011)
					{
					}
				}
				else if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_378(&Local_463, 11) > 20f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_446)
					{
						iLocal_446 = 1;
					}
					if (!bLocal_444)
					{
						func_186(&Local_463, 96, 1, 0, 0);
						bLocal_444 = true;
						if (bLocal_1011)
						{
						}
					}
				}
				else if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_378(&Local_463, 18) > unk_0x5C02660403071A83(8f, 16f))
				{
				}
				break;
			}
	}
	func_308(&Local_463, &uLocal_1042, &Local_1012, bLocal_1011);
}

int func_308(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_316(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_133(uParam0, 2))
	{
		if (func_315(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xA0F74982C6AAA9D4() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_314(uParam0))
				{
					uParam2->f_7 = { func_313(uParam1) };
					func_289(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_51())
				{
					uParam2->f_13 = { func_189() };
					if (unk_0xC1C5B83BB6719C6C(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_311(uParam1);
					func_255(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_132(uParam0))
				{
					if (func_51())
					{
						func_255(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_310() };
						if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_51())
				{
					uParam2->f_19 = { func_305() };
				}
				else
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_311(uParam1);
					func_255(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_133(uParam0, 14) && !func_51()) && !func_132(uParam0)) && func_378(uParam0, 18) > 1f)
				{
					func_255(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_51())
				{
					if (func_378(uParam0, 18) > 1f)
					{
						if (!unk_0x75CB9E30BA492FF0(&(uParam2->f_1)))
						{
							func_309(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_51())
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_311(uParam1);
					func_255(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_309(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_297(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_290(sParam2, iParam4, 0);
}

struct<6> func_310()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar8 /*6*/])))
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

void func_311(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_223(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_130(), 24);
	}
}

int func_312(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_313(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_223(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_314(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_168("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_168("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_168("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_168("TX_OBJ_GYB_DO", 0, 0) || func_168("TAXI_OBJ_GYB", 0, 0)) || func_168("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_168("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_168("TX_OBJ_CYI_DO", 0, 0) || func_168("TAXI_OBJ_CYI_01", 0, 0)) || func_168("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_168("TX_OBJ_GYN_DO", 0, 0) || func_168("TAXI_OBJ_GYN", 0, 0)) || func_168("TAXI_OBJ_GYN_TG", 0, 0)) || func_168("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_168("TAXI_OBJ_CC1", 0, 0) || func_168("TAXI_OBJ_CC2", 0, 0)) || func_168("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_168("TAXI_OBJ_FTC1", 0, 0) || func_168("TAXI_OBJ_FTC2", 0, 0)) || func_168("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_168("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_168("TAXI_OBJ_GETRUN", 0, 0) || func_168("TAXI_OBJ_DRIVE", 0, 0)) || func_168("TAXI_OBJ_RETURN", 0, 0)) || func_168("TAXI_OBJ_POL", 0, 0)) || func_168("TAXI_OBJ_RUNOUT", 0, 0)) || func_168("TAXI_OBJ_POL", 0, 0));
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_316(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_314(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_133(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_164(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_331(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_51())
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
						func_330(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_327(uParam0, Var0, func_329(uParam0, 2));
				}
				if (func_24(uParam0->f_98, 4))
				{
					func_255(uParam0, 16, 0, 0);
					func_214(uParam0, 0, 0);
				}
				func_150(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_378(uParam0, 16) > 1f)
				{
					func_152(1);
					if (uParam0->f_411 == 9)
					{
						func_208("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_208("TAXI_VIP_RETURN", 7500, 1);
					}
					func_255(uParam0, 16, 0, 0);
					func_214(uParam0, 0, 0);
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
					func_330(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_301(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_378(uParam0, 16) > func_149(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_51()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_164(uParam0))
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
				func_330(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_331(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_289(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_186(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_255(uParam0, 16, 0, 0);
				func_186(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_24(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_333(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_330(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_255(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_208("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_208("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x7B4654D62B7E0E9E(uParam0->f_9))
					{
						uParam0->f_9 = func_178(uParam0->f_17, 1);
					}
					else if (unk_0xD033DA403C7AE3E6(uParam0->f_9) == 0)
					{
						unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
						unk_0x1651233EBDC5526E(uParam0->f_9, uParam0->f_17);
						unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
					}
				}
				func_186(uParam0, 10, 1, 0, 0);
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
				func_188(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_301(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x7B4654D62B7E0E9E(uParam0->f_9))
					{
						uParam0->f_9 = func_178(uParam0->f_17, 1);
					}
					else if (unk_0xD033DA403C7AE3E6(uParam0->f_9) == 0)
					{
						unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
						unk_0x1651233EBDC5526E(uParam0->f_9, uParam0->f_17);
						unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
					}
				}
				func_186(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_326(uParam0, 33554432, Var0, "", 1, 8);
				func_255(uParam0, 16, 0, 0);
				func_186(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_51())
				{
					func_325(uParam0, 0);
					func_223(&(uParam0->f_44), 4);
					func_255(uParam0, 16, 0, 0);
					func_186(uParam0, 13, 0, 0, 0);
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
				func_188(&Var0);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_378(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_188(&Var0);
					}
					func_323(Var0, uParam1);
					func_223(&(uParam0->f_81), 67108864);
					func_255(uParam0, 16, 0, 0);
					func_255(uParam0, 11, 0, 0);
					func_214(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_378(uParam0, 11) > uParam0->f_36)
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
							func_188(&Var0);
						}
					}
					func_323(Var0, uParam1);
					func_255(uParam0, 11, 0, 0);
					func_255(uParam0, 16, 0, 0);
					func_214(uParam0, 0, 0);
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
					func_188(&Var0);
				}
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
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
				func_188(&Var0);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
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
				func_188(&Var0);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_188(&Var0);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				func_223(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 1, 0, 8);
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
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
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
					func_322(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_322(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_323(Var0, uParam1);
				func_331(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 6, 0f, 1);
				func_214(uParam0, 0, 0);
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
					func_322(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_322(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_323(Var0, uParam1);
				func_331(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 6, 0f, 1);
				func_214(uParam0, 0, 0);
				break;
			
			case 12:
				func_208("TAXI_OBJ_GYB", 3500, 1);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_208("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_208("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_208("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
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
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_98, 268435456))
				{
					func_208("TAXI_OBJ_CYI_01", 7500, 1);
					func_223(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_188(&Var0);
				func_323(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_188(&Var0);
				func_323(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_188(&Var0);
				func_323(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 33:
				func_208("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_82, 8192))
				{
					if (func_378(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_188(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_323(Var0, uParam1);
						}
						else
						{
							func_330(uParam0, &Var0, 0, 0, 8);
						}
						func_223(&(uParam0->f_82), 8192);
						func_255(uParam0, 16, 0, 0);
						func_255(uParam0, 11, 0, 0);
						func_214(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_188(&Var0);
					func_330(uParam0, &Var0, 0, 0, 8);
					func_223(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_188(&Var0);
					func_330(uParam0, &Var0, 0, 0, 8);
					func_223(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 46, 1, 0, 0);
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
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_214(uParam0, 0, 0);
				break;
			
			case 139:
				func_208("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_186(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3A5708FEE1B560A9(0, 120);
				if (!func_24(uParam0->f_82, 268435456))
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
					func_223(&(uParam0->f_82), 268435456);
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
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3A5708FEE1B560A9(0, 100);
				if (!func_24(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_223(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_208("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_214(uParam0, 0, 0);
				func_186(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_51())
				{
					func_208("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_214(uParam0, 0, 0);
					func_186(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_208("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_214(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_81, 1))
				{
					func_321(uParam0, 1, Var0, "_sick1", 8);
					func_22(&(uParam0->f_81), 2);
				}
				else if (!func_24(uParam0->f_81, 2))
				{
					func_321(uParam0, 2, Var0, "_sick2", 8);
					func_22(&(uParam0->f_81), 1);
				}
				func_331(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_24(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_24(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_223(&(uParam0->f_81), 2097152);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_255(uParam0, 16, 0, 0);
				func_331(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_214(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_331(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_331(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_331(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_81, 4))
				{
					func_321(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_81, 8))
				{
					func_321(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_321(uParam0, 8, Var0, "_turns3", 8);
					func_22(&(uParam0->f_81), 4);
					func_22(&(uParam0->f_81), 8);
				}
				func_331(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_320(uParam0))
				{
					func_327(uParam0, Var0, func_329(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_301(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_333(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_289(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_333(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_333(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_331(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 128);
					func_22(&(uParam0->f_83), 256);
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 256);
					func_22(&(uParam0->f_83), 512);
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 512);
					func_22(&(uParam0->f_83), 128);
					func_255(uParam0, 16, 0, 0);
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_188(&Var0);
					}
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 1);
					func_22(&(uParam0->f_83), 2);
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_188(&Var0);
					}
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 4);
					}
					else
					{
						func_22(&(uParam0->f_83), 1);
					}
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_188(&Var0);
					}
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 4);
					func_22(&(uParam0->f_83), 1);
					func_255(uParam0, 16, 0, 0);
				}
				func_331(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 4096))
				{
					func_326(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 8192))
				{
					func_326(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_331(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 16384))
				{
					func_326(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 32768))
				{
					func_326(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_331(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_24(uParam0->f_82, 8))
					{
						func_319(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 16))
					{
						func_319(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 32))
					{
						func_319(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_331(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_214(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_333(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_331(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_255(uParam0, 16, 0, 0);
					func_214(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_331(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_331(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_81, 65536))
				{
					func_326(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 131072))
				{
					func_326(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_320(uParam0))
				{
					func_327(uParam0, Var0, func_329(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_301(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_24(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 8);
					func_22(&(uParam0->f_83), 16);
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 16);
					func_22(&(uParam0->f_83), 32);
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 64);
					}
					else
					{
						func_22(&(uParam0->f_83), 8);
					}
					func_255(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 64);
					func_22(&(uParam0->f_83), 8);
					func_255(uParam0, 16, 0, 0);
				}
				func_331(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_51())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_330(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_327(uParam0, Var0, func_329(uParam0, 65));
					func_214(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_51())
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
					func_330(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_327(uParam0, Var0, func_329(uParam0, 66));
					func_214(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_51())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								func_331(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								func_331(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_333(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_331(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_255(uParam0, 16, 0, 0);
								func_214(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_330(uParam0, &Var0, 0, 0, 8);
									func_255(uParam0, 16, 0, 0);
									func_255(uParam0, 11, 0, 0);
									func_214(uParam0, 0, 0);
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
									func_188(&Var0);
									func_330(uParam0, &Var0, 0, 0, 8);
									func_255(uParam0, 16, 0, 0);
									func_255(uParam0, 11, 0, 0);
									func_214(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_330(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_186(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_331(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_82, 1))
				{
					func_319(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 2))
				{
					func_319(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 4))
				{
					func_319(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_214(uParam0, 0, 0);
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
				func_333(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_301(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_255(uParam0, 16, 0, 0);
				func_331(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_320(uParam0))
				{
					func_327(uParam0, Var0, func_329(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_301(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_318(uParam0, Var0, 8);
				}
				func_331(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_83, 1024))
				{
					func_223(&(uParam0->f_83), 1024);
					func_255(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2048))
				{
					func_223(&(uParam0->f_83), 2048);
					func_255(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4096))
				{
					func_223(&(uParam0->f_83), 4096);
					func_255(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_188(&Var0);
					func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_82, 1024))
				{
					func_319(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_82), 2048);
				}
				else if (!func_24(uParam0->f_82, 2048))
				{
					func_319(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_331(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 52, 1, 0, 0);
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
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_301(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_320(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_330(uParam0, &Var0, 0, 0, 8);
						func_186(uParam0, 52, 1, 0, 0);
						func_255(uParam0, 16, 0, 0);
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
						func_330(uParam0, &Var0, 0, 0, 8);
						func_255(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_333(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_255(uParam0, 16, 0, 0);
					func_214(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_331(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_255(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
				{
					func_208("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_81, 262144))
				{
					func_326(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_326(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_326(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_331(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_317(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_82, 134217728))
				{
					func_317(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_331(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 100:
				func_208("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_214(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_188(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_188(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_330(uParam0, &Var0, 0, 0, 8);
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
					func_188(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_82, 65536))
				{
					if (func_378(uParam0, 11) > uParam0->f_36)
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
						func_188(&Var0);
						func_323(Var0, uParam1);
						func_223(&(uParam0->f_82), 65536);
						func_255(uParam0, 16, 0, 0);
						func_255(uParam0, 11, 0, 0);
						func_214(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_82, 131072))
				{
					if (func_378(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_188(&Var0);
						func_323(Var0, uParam1);
						func_223(&(uParam0->f_82), 131072);
						func_255(uParam0, 16, 0, 0);
						func_255(uParam0, 11, 0, 0);
						func_214(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_223(&(uParam0->f_82), 8388608);
				}
				else if (!func_24(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_223(&(uParam0->f_82), 16777216);
				}
				else if (!func_24(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_223(&(uParam0->f_82), 33554432);
				}
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_333(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_188(&Var0);
					func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_330(uParam0, &Var0, 0, 0, 8);
				}
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_323(Var0, uParam1);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_333(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_332(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_186(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_223(&(uParam0->f_81), 2097152);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_188(&Var0);
				func_323(Var0, uParam1);
				func_223(&(uParam0->f_81), 67108864);
				func_255(uParam0, 16, 0, 0);
				func_255(uParam0, 11, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_326(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_301(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_186(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_81, 268435456))
				{
					func_326(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_186(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_208("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_214(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_326(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xE4F7206742848BAF(uParam0->f_3))
						{
							func_301(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_326(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_186(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_208("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_214(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_289(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_255(uParam0, 16, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_81, 16777216))
				{
					func_326(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_214(uParam0, 0, 0);
				break;
			
			case 88:
				func_208("TAXI_TIEFLEE", 7500, 1);
				func_214(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_98, 536870912))
				{
					func_208("TAXI_OBJ_CYI_1B", 7500, 1);
					func_223(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_214(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_188(&Var0);
				func_330(uParam0, &Var0, 0, 0, 8);
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
				func_330(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_330(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 0, 0);
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
				func_330(uParam0, &Var0, 0, 0, 8);
				func_214(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_330(uParam0, &Var0, 1, 0, 8);
				func_186(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_208("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_186(uParam0, 0, 0, 0, 0);
				func_214(uParam0, 0, 0);
				break;
			}
	}
}

void func_317(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_223(&(uParam0->f_82), iParam1);
	func_255(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_188(&Param2);
	}
	func_289(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_318(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_82, 64))
	{
		func_223(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_82, 128))
	{
		func_223(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x3A5708FEE1B560A9(1, 3), 24);
	}
	func_332(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_255(uParam0, 16, 0, 0);
}

void func_319(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_223(&(uParam0->f_82), iParam1);
	func_255(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_188(&Param2);
		}
	}
	func_289(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_320(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_321(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_223(&(uParam0->f_81), iParam1);
	func_255(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_289(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_322(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_233(*uParam0, iVar1))
		{
			func_224(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_188(sParam2);
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

void func_323(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_324(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_223(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x75CB9E30BA492FF0(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_325(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_208("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_208("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_208("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_208("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_208("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_208("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_208("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_208("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_208("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_208("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_208("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_208("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_208("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_326(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_223(&(uParam0->f_81), iParam1);
	func_255(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_188(&Param2);
	}
	func_289(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_327(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_255(uParam0, 16, 0, 0);
	func_255(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xE4F7206742848BAF(uParam0->f_3))
	{
		unk_0x00C2B9392B0A0B43(uParam0->f_3, &cParam1, func_328(uParam0));
	}
}

char* func_328(var uParam0)
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

char* func_329(var uParam0, int iParam1)
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

int func_330(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_255(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_255(uParam0, 17, 0f, 1);
	}
	func_214(uParam0, iParam2, 0);
	return func_289(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_331(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_24(*uParam2, 2))
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
		if (func_24(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_24(*uParam2, 4))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_24(*uParam2, 512))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_24(*uParam2, 16))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_24(*uParam2, 64))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_24(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_24(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_24(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_24(*uParam2, 8192))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_24(*uParam2, 16384))
		{
			if (func_24(*uParam2, 4194304))
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
		if (func_24(*uParam2, 32768))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_24(*uParam2, 65536))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_24(*uParam2, 131072))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_24(*uParam2, 262144))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_24(*uParam2, 524288))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_24(*uParam2, 1048576))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_24(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_24(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_24(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_24(*uParam2, 67108864))
		{
			if (func_24(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_24(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_24(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_24(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_24(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_332(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_297(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_290(sParam2, iParam4, 0);
}

void func_333(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_233(*uParam0, iVar1))
		{
			func_224(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_188(sParam2);
				}
				else
				{
					func_188(sParam2);
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

int func_334(char* sParam0)
{
	if (!unk_0x0275404839C0A19A(sParam0))
	{
		if (func_168(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_335(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_133(uParam0, 9));
}

void func_336(var uParam0)
{
	if (func_133(uParam0, 17))
	{
		if (!func_133(uParam0, 14))
		{
			if (!func_132(uParam0))
			{
				if (!func_51())
				{
					func_140(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_337(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (unk_0xD2CFFE76B625AE55(Global_99866.f_225[3]))
	{
		uParam0->f_4[0] = Global_99866.f_225[3];
		uParam0->f_4[1] = Global_99866.f_225[4];
		uParam0->f_4[2] = Global_99866.f_225[5];
		unk_0xAF3355298F537BB0(uParam0->f_4[0], 1, 1);
		unk_0xAF3355298F537BB0(uParam0->f_4[1], 1, 1);
		unk_0xAF3355298F537BB0(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x91D233CD0204A37F(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = unk_0x91D233CD0204A37F(26, uParam0->f_45[1], unk_0xD7C4E2CB0B216852(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = unk_0x91D233CD0204A37F(26, uParam0->f_45[2], unk_0xD7C4E2CB0B216852(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (unk_0xD2CFFE76B625AE55(Global_99866.f_225[6]))
	{
		uParam0->f_4[3] = Global_99866.f_225[6];
		uParam0->f_4[4] = Global_99866.f_225[7];
		unk_0xAF3355298F537BB0(uParam0->f_4[3], 1, 1);
		unk_0xAF3355298F537BB0(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x91D233CD0204A37F(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = unk_0x91D233CD0204A37F(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (unk_0xD2CFFE76B625AE55(Global_99866.f_222[0]))
	{
		uParam0->f_10 = Global_99866.f_222[0];
		uParam0->f_11 = Global_99866.f_222[1];
		unk_0xAF3355298F537BB0(uParam0->f_10, 1, 1);
		unk_0xAF3355298F537BB0(uParam0->f_11, 1, 1);
	}
	else
	{
		uParam0->f_10 = unk_0x4E76306EE6AE7596(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_11 = unk_0x4E76306EE6AE7596(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var5 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4[iVar1], 0))
		{
			unk_0x09D2BE36C9D2B76F(uParam0->f_4[iVar1]);
			unk_0x433C209504FBC7EE(&uVar0);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			switch (iVar1)
			{
				case 0:
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4[1], 0);
					unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x3D09311EB0F37652(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0x3D09311EB0F37652(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4[0], 0);
					unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x3D09311EB0F37652(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0x3D09311EB0F37652(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4[0], 0);
					unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x3D09311EB0F37652(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0x3D09311EB0F37652(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4[4], 0);
					unk_0x85FD30B510E7C05E(0, uParam0->f_4[4], 3, 2, 2);
					unk_0xAFEA49BE83A57A1A(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4[3], 0);
					unk_0x85FD30B510E7C05E(0, uParam0->f_4[3], 3, 2, 2);
					unk_0xAFEA49BE83A57A1A(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xE4F7206742848BAF((*uParam0)[iVar1]) && (unk_0x810AFFABCBF31E2D((*uParam0)[iVar1], 242628503) != 1 || unk_0x810AFFABCBF31E2D((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0xA8ED9F72DC442242((*uParam0)[iVar1], 1);
			unk_0x09D2BE36C9D2B76F((*uParam0)[iVar1]);
			unk_0x433C209504FBC7EE(&uVar0);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			func_338(uParam0, iVar1, unk_0x3A5708FEE1B560A9(1000, 2000));
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_338(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0xF14C2AE8A3F59CE0(0, (*uParam0)[1], 0);
			unk_0x85FD30B510E7C05E(0, (*uParam0)[1], 3, 2, 2);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0xF14C2AE8A3F59CE0(0, (*uParam0)[0], 0);
			unk_0x85FD30B510E7C05E(0, (*uParam0)[0], 3, 2, 2);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xF14C2AE8A3F59CE0(0, (*uParam0)[0], 0);
			unk_0x85FD30B510E7C05E(0, (*uParam0)[0], 3, 2, 2);
			unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_339()
{
	if (!unk_0x875098323FCA8FE6(Local_893.f_45[0]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_45[1]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_45[2]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_45[3]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(Local_893.f_45[4]))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(joaat("stretch")))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x875098323FCA8FE6(joaat("superd")))
	{
		func_249("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("oddjobs@taxi@gyn@cc@intro"))
	{
		func_249("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_249("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_249("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_999, 1000);
		return 0;
	}
	return 1;
}

bool func_340(var uParam0)
{
	return uParam0->f_117;
}

int func_341(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_347((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_347((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_347((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_345(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
			{
				if (func_347(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_288(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_342(uParam0);
	}
	return 0;
}

void func_342(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_344()) && !func_141(uParam0)) || ((uParam0->f_411 != 9 && func_219(uParam0, 1)) && !func_141(uParam0)))
		{
			uVar0 = func_343(uParam0->f_4);
			unk_0x87EFF3C203462E60(&uVar0);
			uParam0->f_4 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			unk_0xAF3355298F537BB0(uParam0->f_4, 1, 0);
			func_151(uParam0);
			func_144(uParam0, 0);
		}
	}
}

var func_343(var uParam0)
{
	return uParam0;
}

int func_344()
{
	int iVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				if (unk_0x9297C590C99228DC(iVar0, -1) == unk_0x27D769C59BC9D030())
				{
					if (unk_0x753C14DD45ABE554(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_345(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_346(uParam0, 0, 1))
			{
				func_288(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_346(uParam0, 0, 4))
			{
				func_288(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_346(uParam0, 0, 8))
			{
				func_288(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_346(uParam0, 1, 1))
			{
				func_288(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_346(uParam0, 0, 1))
			{
				func_288(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_115(uParam0))
			{
				func_288(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_346(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (!unk_0x5EE69620FB6ABC8D(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_186(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_186(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_347(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x27D769C59BC9D030();
	if (!unk_0x2006A8C1BA2AFE80(iVar0, 0) && !unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_353(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_351(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_350(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_348(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_348(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (iParam7 && unk_0x77F1B7F6C32990D6(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x4C3235E6E203703D(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x4C3235E6E203703D(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x070841EC2D20AB5A();
		if (!unk_0x2006A8C1BA2AFE80(uVar0, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, unk_0x27D769C59BC9D030(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x77F1B7F6C32990D6(iParam0, unk_0x27D769C59BC9D030(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x070841EC2D20AB5A();
		if (!unk_0x2006A8C1BA2AFE80(uVar1, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			if (unk_0x9426D57129B5B113(iParam0))
			{
				if (unk_0x0F12B5F9C73EBD42(iParam0) == unk_0x27D769C59BC9D030())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xB1988D54B2C48CB5(iParam0, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
	{
		if (unk_0x586F22790D5E436F(iParam0))
		{
			return 1;
		}
	}
	if (func_349(unk_0x27D769C59BC9D030(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xBD036012AF60D938(iParam0) && func_9(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x9A4E2270C2271219(iParam0, 0))
		{
			if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), unk_0xD9FFE8E1642C81E2(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), iParam0))
		{
			return 1;
		}
		if (!unk_0x2006A8C1BA2AFE80(uParam1, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam1, unk_0x27D769C59BC9D030(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x4CF6F4DF2C64D299(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7C2070521268C99E(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(iParam0, 1), unk_0xA8CFDE65C45F813B(iParam1, 1)) < 2.5f)
			{
				if (unk_0xB1D18B06E0525A9E(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_350(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x1D01F222CF5E89FA(uParam0, 4))
	{
		if (unk_0x7C2070521268C99E(uParam0) && !unk_0x32A33034ED29B524(iParam0))
		{
			if (unk_0xB1988D54B2C48CB5(uParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x2006A8C1BA2AFE80(uParam1, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	if (unk_0xFFA15D908A6FDCD4(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x667CDB48DB7744AA(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x1D01F222CF5E89FA(uParam0, 2))
	{
		if (unk_0x7C2070521268C99E(uParam0))
		{
			if (unk_0xB1988D54B2C48CB5(iParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xB1D18B06E0525A9E(unk_0x97EA5EA3E7FE8500(iParam1), iParam0, 120f) && unk_0xDE7DE56F6FF55B6A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x9A4E2270C2271219(unk_0x97EA5EA3E7FE8500(iParam1), 0))
			{
				iVar3 = unk_0xD9FFE8E1642C81E2(unk_0x97EA5EA3E7FE8500(iParam1), 0);
			}
			if (unk_0xB0821632434D6AED(iParam0) || func_352(iVar3))
			{
				if (unk_0xB1988D54B2C48CB5(iParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xB1D18B06E0525A9E(unk_0x97EA5EA3E7FE8500(iParam1), iParam0, 120f) && unk_0xDE7DE56F6FF55B6A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x92C13FDA105016D1((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (unk_0x9297C590C99228DC(iParam0, -1) != 0)
			{
				if (unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_10(unk_0x27D769C59BC9D030(), iParam0, 1) < 40f)
						{
							if (unk_0x8C4BD6734BEF3418(unk_0x4D29100D094E5511(), &uVar1))
							{
								if ((unk_0x8F8858152A9B9959(uVar1) && unk_0x35E488C304B2E03E(iVar1) == iParam0) || (unk_0x54F37403E01EFD97(iVar1) && unk_0x97EA5EA3E7FE8500(iVar1) == unk_0x9297C590C99228DC(iParam0, -1)))
								{
									if ((unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()) && unk_0x5FCAE3F8AEC656AF(0, 24)) || (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0x5FCAE3F8AEC656AF(0, 69)))
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

int func_353(int iParam0, var uParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
		{
			if (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), iParam0) || unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0))
			{
				if (unk_0xB1D18B06E0525A9E(iParam0, unk_0x27D769C59BC9D030(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xA0F74982C6AAA9D4();
						}
						else if ((unk_0xA0F74982C6AAA9D4() - uParam1->f_1) > uParam1->f_3)
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

void func_354(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x75CB9E30BA492FF0(&(uParam0->f_124)) && func_51())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_51())
				{
					StringCopy(&(uParam0->f_124), func_130(), 24);
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

void func_355(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_233(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_233(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_233(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_224(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xA0F74982C6AAA9D4();
							}
						}
						else
						{
							func_23(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_233(Local_343.f_1[iVar0 /*4*/], 4) && !func_233(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_224(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_288(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_356(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_133(uParam0, 27))
	{
		func_180(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_378(uParam0, 27) > 5f)
	{
		if (func_347(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_255(uParam0, 27, 0, 0);
			func_255(uParam0, 10, 0, 0);
			func_345(uParam0, &uVar0, uParam1);
		}
		func_342(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_357(uParam0);
	}
	if ((((!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()) && (unk_0x54DA78A82349F5AC(*uParam0) && !unk_0xF92D82BAF297B579(*uParam0))) && (unk_0x54DA78A82349F5AC(uParam0->f_1) && !unk_0xF92D82BAF297B579(uParam0->f_1))) && !unk_0x45252A58A2BF9751()) && !func_51())
	{
		if (func_378(uParam0, 26) > 10f)
		{
			func_140(uParam0, 26, 0);
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
		}
	}
	else if (func_133(uParam0, 26))
	{
		func_140(uParam0, 26, 0);
	}
	return 0;
}

void func_357(var uParam0)
{
	if (!func_377(uParam0->f_429))
	{
		uParam0->f_429 = func_376();
		func_367(&(uParam0->f_429), 0, 0, unk_0x3A5708FEE1B560A9(4, 7), 0, 0, 0);
	}
	else if (func_358(uParam0->f_429))
	{
		func_288(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_358(int iParam0)
{
	return func_359(func_376(), iParam0);
}

int func_359(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_377(iParam1) || !func_377(iParam0))
	{
		return 1;
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
	return 0;
}

int func_360(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_361(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_362(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_363(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_364(int iParam0)
{
	return iParam0 & 15;
}

var func_365(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_366(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_366(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_367(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_365(*uParam0);
	iVar1 = func_364(*uParam0);
	iVar2 = func_363(*uParam0);
	iVar3 = func_362(*uParam0);
	iVar4 = func_361(*uParam0);
	iVar5 = func_360(*uParam0);
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
	iVar6 = func_375(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_375(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_368(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_368(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_374(uParam0, iParam1);
	func_373(uParam0, iParam2);
	func_372(uParam0, iParam3);
	func_371(uParam0, iParam5);
	func_370(uParam0, iParam4);
	func_369(uParam0, iParam6);
}

void func_369(var uParam0, int iParam1)
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

void func_370(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_364(*uParam0);
	iVar1 = func_365(*uParam0);
	if (iParam1 < 1 || iParam1 > func_375(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
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
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_373(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_374(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_375(int iParam0, int iParam1)
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

int func_376()
{
	var uVar0;
	
	func_374(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_373(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_372(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_370(&uVar0, unk_0x388418AD39C0F4DE());
	func_371(&uVar0, unk_0xE3911478C9FE04B2());
	func_369(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

int func_377(int iParam0)
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
	iVar0 = func_360(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_361(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_362(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_365(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_364(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_363(iParam0);
	if (iVar5 < 1 || iVar5 > func_375(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_378(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_181(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_97(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_379()
{
	func_380(&Local_463);
	func_397();
}

void func_380(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_401(2);
	}
}

int func_381(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_51() && func_378(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
			{
				if (unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_233(uParam0->f_85, 32))
					{
						if (!unk_0xFCFE5DE581193020(uParam0->f_4))
						{
							func_299(uParam0, 4160, 0);
						}
						else
						{
							func_299(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_299(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_299(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_299(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
	{
	}
	return 0;
}

void func_382(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_8));
	}
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_9));
	}
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_10));
	}
}

int func_383(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_384()
{
	func_386(&Local_463, 7);
	Local_463.f_410 = 0;
	Local_463.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_463.f_33 = 34.4f;
	Local_463.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_463.f_34 = 251.9658f;
	Local_893.f_41[0] = joaat("a_m_y_business_02");
	Local_893.f_41[1] = joaat("a_m_y_business_02");
	Local_893.f_41[2] = joaat("a_m_y_business_02");
	Local_893.f_45[0] = joaat("a_f_y_beach_01");
	Local_893.f_45[1] = joaat("a_f_y_beach_01");
	Local_893.f_45[2] = joaat("a_f_y_beach_01");
	Local_893.f_45[3] = joaat("a_f_y_beach_01");
	Local_893.f_45[4] = joaat("a_m_y_business_01");
	func_385(&Local_463, 3, 6);
}

void func_385(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_386(var uParam0, int iParam1)
{
	func_396(1);
	func_154();
	func_6(&(uParam0->f_244));
	func_395(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_24(Global_101154.f_17787, 4))
	{
		func_223(&(Global_101154.f_17787), 4);
	}
	func_390(uParam0);
	func_388(uParam0);
	unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 0);
	uParam0->f_102 = (func_387(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x8378AB3CED5FF44A("TAXI", 2);
}

int func_387(int iParam0)
{
	return Global_101154.f_17787.f_39[iParam0];
}

void func_388(var uParam0)
{
	switch (func_63(uParam0))
	{
		case 0:
			func_389(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_389(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_389(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_389(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_389(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_389(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_389(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_389(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_389(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_389(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_389(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_390(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_394(uParam0, 3);
			func_393(uParam0, 14);
			break;
		
		case 1:
			func_394(uParam0, 14);
			func_393(uParam0, 8);
			break;
		
		case 2:
			func_394(uParam0, 8);
			func_393(uParam0, 7);
			break;
		
		case 3:
			func_394(uParam0, 15);
			func_393(uParam0, 6);
			break;
		
		case 4:
			func_394(uParam0, 0);
			func_393(uParam0, 3);
			break;
		
		case 5:
			func_394(uParam0, 6);
			func_393(uParam0, 7);
			break;
		
		case 6:
			func_394(uParam0, 8);
			func_393(uParam0, 15);
			break;
		
		case 7:
			func_394(uParam0, 8);
			func_393(uParam0, 14);
			break;
		
		case 8:
			func_394(uParam0, 7);
			func_393(uParam0, 15);
			break;
		
		case 9:
			func_394(uParam0, unk_0x3A5708FEE1B560A9(0, 17));
			iVar0 = func_392((uParam0->f_418.f_2 + unk_0x3A5708FEE1B560A9(1, 17)), 0, 16);
			func_393(uParam0, iVar0);
			func_391(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_391(var uParam0)
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

int func_392(int iParam0, int iParam1, int iParam2)
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

void func_393(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_394(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_395(var uParam0)
{
	uParam0->f_2 = unk_0x27D769C59BC9D030();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_43() };
	uParam0->f_17 = { func_43() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_140(uParam0, 32, 0);
}

void func_396(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100210, unk_0x3AA961419D971CB2(), 24);
		Global_100204 = 1;
	}
	else
	{
		StringCopy(&Global_100210, "NULL", 24);
		Global_100204 = 0;
	}
}

void func_397()
{
	func_400(&Local_893);
	func_182();
	func_399();
	func_398();
	unk_0x7C3AA2D27E16E2AD();
}

void func_398()
{
	unk_0xFEA2DA05C289B450();
	unk_0x651E63BA2F4975EC("oddjobs@taxi@gyn@cc@hotbox");
}

void func_399()
{
	unk_0x0049DE0B34213B12(Local_893.f_41[0]);
	unk_0x0049DE0B34213B12(Local_893.f_41[1]);
	unk_0x0049DE0B34213B12(Local_893.f_41[2]);
}

void func_400(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x82E739904D3B17C8(uParam0->f_73[iVar0]))
		{
			unk_0x37A0BFC2F0684693(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}

void func_401(int iParam0)
{
	Global_99866.f_22 = iParam0;
}

