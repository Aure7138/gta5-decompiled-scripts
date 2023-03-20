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
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	struct<3> Local_408 = { 0, 0, 0 } ;
	struct<3> Local_411 = { 0, 0, 0 } ;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	struct<3> Local_423 = { 0, 0, 0 } ;
	struct<3> Local_426 = { 0, 0, 0 } ;
	struct<3> Local_429 = { 0, 0, 0 } ;
	int iLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	bool bLocal_442 = 0;
	bool bLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	bool bLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	float fLocal_449 = 0f;
	float fLocal_450 = 0f;
	float fLocal_451 = 0f;
	var uLocal_452[4] = { 0, 0, 0, 0 };
	var uLocal_457[4] = { 0, 0, 0, 0 };
	struct<429> Local_462 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_891 = 0;
	struct<27> Local_892 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 3;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 3;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 5;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 3;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 3;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 4;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 4;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 4;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 1;
	var uLocal_987 = 2;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	struct<3> Local_994[1];
	int iLocal_998 = 0;
	var uLocal_999 = 0;
	struct<3> Local_1000 = { 0, 0, 0 } ;
	struct<3> Local_1003 = { 0, 0, 0 } ;
	int iLocal_1006 = 0;
	bool bLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	bool bLocal_1010 = 0;
	struct<28> Local_1011 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 5;
	var uLocal_1042 = 0;
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
	var uLocal_1084 = 1097859072;
	var uLocal_1085 = 1500;
	var uLocal_1086 = 45;
	var uLocal_1087 = 1103626240;
	var uLocal_1088 = 5;
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
	uLocal_76 = unk_0xE30164C14FFD22B6();
	uLocal_77 = unk_0xE1ABDD92C442B1EE();
	Local_82 = { 500f, 500f, 500f };
	fLocal_449 = 98f;
	fLocal_450 = 55f;
	fLocal_451 = 60f;
	iLocal_998 = 1;
	Local_1000 = { -1284.367f, 295.7437f, 63.83044f };
	Local_1003 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0x8D841F1DD3FA555F(67))
	{
		func_400(2);
		func_396();
	}
	unk_0xAE2A9FD3EEF99954(1);
	func_383();
	while (true)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_462.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_462);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x81873881071CD9FE();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x81873881071CD9FE());
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x81873881071CD9FE());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
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
	
	if (func_382(&Local_462))
	{
		func_381(&Local_462);
		if (Local_462.f_410 > 0)
		{
			if (func_380(&Local_462, 0))
			{
				func_378();
			}
		}
		else if (func_377(&Local_462, 31) > 5f)
		{
			func_400(2);
			func_396();
		}
	}
	else
	{
		func_355(&Local_462, &uLocal_1082);
		func_354(&Local_462);
		func_353(&Local_462, &uLocal_999, 0);
		if (Local_462.f_410 < 9)
		{
			func_340(&Local_462, &Local_892, &uLocal_1082);
		}
		if (Local_462.f_410 > 5 && !iLocal_1006)
		{
			iLocal_1006 = 1;
			Local_892.f_16[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_892.f_16[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_892.f_16[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_892.f_26[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_892.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_892.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_462.f_410 > 2)
		{
			if (!func_339(&Local_462))
			{
				if (!iLocal_1008)
				{
					if (func_338())
					{
						func_336(&Local_892);
						iLocal_1008 = 1;
					}
				}
				func_306();
			}
			else
			{
				func_287(&Local_462, "Taxi Not Driveable", func_305(&Local_462));
			}
		}
		if (Local_462.f_410 > 3)
		{
			if (!bVar3)
			{
				if (unk_0x7404950238A154C2(Local_462.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0x930F8FBB8E9537CC(Local_892.f_4[iVar0]))
						{
							if (unk_0xBBEF8270CE27C0EE(Local_892.f_4[iVar0], Local_462.f_4, 1))
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
					if (!unk_0x930F8FBB8E9537CC(Local_892.f_4[iVar1]))
					{
						if (!unk_0x5FEB513A4402FD59(Local_892.f_4[iVar1]))
						{
							unk_0x27CC98B7C879C320(Local_892.f_4[iVar1]);
							unk_0xA3561415EB3DA3A3(&uVar2);
							unk_0xEAD984C2869B8B7C(&uVar2);
							unk_0x754376E2234CBB4A(0, Local_462.f_2, 1000f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uVar2);
							unk_0xC65002CAA1212AF9(Local_892.f_4[iVar1], uVar2);
							unk_0xA3561415EB3DA3A3(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_462.f_410 == 9)
		{
			func_263(&Local_462, 0, 1);
			func_262(&Local_462, &Local_892, 1128792064);
		}
		switch (Local_462.f_410)
		{
			case 0:
				func_261(&(Local_994[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_260(&Local_462, &Local_994);
				func_258();
				func_256();
				func_255();
				func_254(&Local_462, 16, 4f, 0);
				func_251(&Local_462, Local_1000, Local_1003, &Local_892);
				func_250(&Local_462);
				func_249(&Local_462, 1);
				break;
			
			case 1:
				if (func_246())
				{
					func_245();
					func_225();
					func_224(&Local_462);
					func_222(&(Local_462.f_100), 8);
					func_222(&(Local_462.f_100), 2048);
					func_222(&(Local_462.f_100), 256);
					Local_462.f_14 = { Local_1000 };
					Local_462.f_49 = 0;
					func_249(&Local_462, 3);
				}
				break;
			
			case 3:
				if (func_214(&Local_462, 3))
				{
					func_213(&Local_462, 1, 0);
					func_212(&uLocal_1099, Local_1000, 20f, 0);
					func_249(&Local_462, 5);
				}
				break;
			
			case 5:
				func_211();
				if (func_191(&Local_462, &Local_892))
				{
					unk_0x15F87E22A114CC69(Local_462.f_428, &(Local_462.f_42), -1);
					func_249(&Local_462, 15);
				}
				break;
			
			case 15:
				if (func_189(&Local_462, &Local_892))
				{
					func_185(&Local_462, 8, 1, 0, 0);
					if (!unk_0x930F8FBB8E9537CC(Local_892[0]))
					{
						unk_0xCE566DBDCACD245E(Local_892[0], 26, 1);
					}
					if (!unk_0x930F8FBB8E9537CC(Local_892[1]))
					{
						unk_0xCE566DBDCACD245E(Local_892[1], 26, 1);
					}
					if (!unk_0x930F8FBB8E9537CC(Local_892[2]))
					{
						unk_0xCE566DBDCACD245E(Local_892[2], 26, 1);
					}
					func_184(&Local_462);
					func_182(&Local_462, 0);
					func_181();
					func_179(&Local_462, 11);
					func_254(&Local_462, 10, 0, 0);
					func_254(&Local_462, 6, 0, 0);
					func_178();
					Local_462.f_36 = unk_0x3ECD26BA4F631EE2(3f, 10f);
					func_176(&Local_892);
					func_249(&Local_462, 9);
				}
				if (unk_0x7404950238A154C2(Local_462.f_4, 0))
				{
					if (!unk_0x04C377C10639B842(Local_462.f_2, Local_462.f_4, 0))
					{
						func_172(&Local_462, &Local_892);
						func_249(&Local_462, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_1007)
				{
				}
				func_169(&Local_462);
				if (func_126(&Local_462, &Local_892, &Local_1011, &uLocal_1041))
				{
					func_125(&Local_1011, -1, 1);
					if (func_124(&Local_892))
					{
						func_123(&Local_462, 0);
					}
					func_122(&Local_892);
					func_120(&Local_462);
					func_116(&Local_462);
					func_115(&Local_462);
					func_249(&Local_462, 27);
				}
				break;
			
			case 27:
				if (func_105(&Local_462, 1))
				{
					unk_0xA3561415EB3DA3A3(&uVar2);
					unk_0xEAD984C2869B8B7C(&uVar2);
					unk_0xD91194CE3D1E1D77(0, Local_892.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x3E27A0036E184873(0, 0);
					if (unk_0x0A29420931EAA99E(Local_462.f_29, 4f, 1))
					{
						unk_0xFE0C02098B6EFBD1(0, Local_462.f_29, 4f, 0);
					}
					else
					{
						unk_0x5D5CFD0EDDA0BC90(0, 350.8689f, 0);
						unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0x56D9ED1541046AF6(uVar2);
					unk_0xC65002CAA1212AF9(Local_462.f_3, uVar2);
					unk_0x6CB332CB31E9FA96(Local_462.f_3, 1);
					func_249(&Local_462, 29);
				}
				break;
			
			case 29:
				if (!unk_0x5FEB513A4402FD59(Local_462.f_3))
				{
					if (func_104(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x0B895A812F665A52(Local_462.f_3, 60, 1);
					}
				}
				if (func_77(&Local_462, &uLocal_1089))
				{
					func_11(1, &Local_462, 0);
					func_254(&Local_462, 31, 0, 0);
					func_249(&Local_462, 30);
				}
				break;
			
			case 30:
				if (!unk_0x5FEB513A4402FD59(Local_462.f_3))
				{
					if (func_104(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x0B895A812F665A52(Local_462.f_3, 60, 1);
					}
					if ((unk_0x515B65C19A5CA9B1(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || func_9(Local_462.f_3, 1) > 50f) || func_377(&Local_462, 31) > 30f)
					{
						if (unk_0x515B65C19A5CA9B1(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (func_9(Local_462.f_3, 1) > 50f)
						{
						}
						if (func_377(&Local_462, 31) > 30f)
						{
						}
						unk_0x1D15D99A10A15334(Local_462.f_3, 0);
						unk_0xF8E77F310A5B6EAB(255, Local_462.f_413, joaat("player"));
						unk_0x71A8BCA218722FA1(&(Local_462.f_3));
						func_396();
					}
				}
				else
				{
					func_396();
				}
				break;
			}
	}
}

float func_9(int iParam0, int iParam1)
{
	return func_10(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), iParam0, iParam1);
}

float func_10(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0x5FEB513A4402FD59(uParam1->f_3))
		{
			unk_0xCE566DBDCACD245E(uParam1->f_3, 317, 1);
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
	func_381(uParam0);
	if (func_50())
	{
		func_48();
	}
	func_46();
	unk_0xD1C83BD797927DD5();
	unk_0xB8BB626315D394F5(1);
	func_43(0);
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		unk_0x50C9C2E3327FDF31(uParam0->f_4, 0);
		unk_0x298028A164A4361E(uParam0->f_4);
		unk_0x3DD8579AB91A77D6(uParam0->f_4);
	}
	func_40(uParam0->f_14, 1);
	func_38(uParam0->f_14, 1, 1114636288);
	func_37(&(uParam0->f_244), 3);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
	if (func_34())
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	}
	unk_0x0C64B47F8E6AF117(1);
	func_25(0, 1, 1, 0);
	unk_0x3BF4F473786B0150(1);
	unk_0xF1BC58601CA4A5C7(1);
	if (unk_0x42E36F2D658EB2FF(*uParam0))
	{
		unk_0x35B958B469415A23(*uParam0, 0);
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0x0D7089406F6A5C6E(1);
	}
	if (func_24(Global_98931.f_17711, 4))
	{
		func_22(&(Global_98931.f_17711), 4);
		unk_0xB5A91586385F755B(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0xD8323B49BAE93D80("gestures@m@standing@casual");
	unk_0xD8323B49BAE93D80("oddjobs@taxi@");
	unk_0xD8323B49BAE93D80("oddjobs@towingcome_here");
	if (unk_0x1F2C82EFDAD19C5D())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0xF26CA0663D2E037E(unk_0xEC537F0C0E8265EE()))
	{
		unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
	}
	unk_0x0B7846B087E72031(unk_0xF2DB717A73826179((func_13(&uLocal_89) * 1000f)), 12, 0);
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
			return (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x4357449749A521B1(&uVar0))
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
	unk_0x1E44650C8D87E0AD(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_3))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (!unk_0xE5AB05962FA1FF3F(uParam0->f_3, 0))
			{
				unk_0x40C2DE5A3C7D6ACD(uParam0->f_3);
			}
			unk_0x1D15D99A10A15334(uParam0->f_3, 0);
			unk_0xF8E77F310A5B6EAB(255, uParam0->f_413, joaat("player"));
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x71A8BCA218722FA1(&(uParam0->f_3));
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
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_33(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_32())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_31(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_33(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_31(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_26(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_26(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_28(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_29(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_30()
{
	return Global_1312729;
}

int func_31(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_32()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_34()
{
	if (!func_36() && !func_35())
	{
		if (!unk_0x16062BE231E411A0(unk_0xEC537F0C0E8265EE()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (unk_0x968BF1C2C695B61A(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_38(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_39(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_39(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xEB1F3AEB071C6A9E(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xFEA6E2B6E5CAFC2E(Var0, Var3, 1);
		unk_0xB0CC34FB1640F35B();
	}
}

Vector3 func_39(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_40(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_41(Param0, func_42(), 0))
	{
		Var0 = { func_39(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_39(Param0, 1f, 30f, 30f, 10f) };
		unk_0x3DD1ED742E99F292(Var0, Var3, iParam3, 1);
	}
}

bool func_41(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_42()
{
	struct<3> Var0;
	
	return Var0;
}

void func_43(int iParam0)
{
	if (Global_14552)
	{
		func_44(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_32())
	{
		Global_14394.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_45(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88075[iVar0 /*17*/] && !Global_88075[iVar0 /*17*/].f_1)
		{
			if (Global_88075[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88075[iVar0 /*17*/].f_5 != 88 && Global_88075[iVar0 /*17*/].f_5 != 89) && Global_88075[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_88075[iVar0 /*17*/].f_5, 1);
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
			Global_85127[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85127[iParam0 /*2*/] = 0;
	}
}

void func_48()
{
	Global_14559 = 0;
	func_49();
}

void func_49()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_50()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_98931.f_17711.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_98931.f_17711.f_22[0]);
			break;
		
		case 1:
			Global_98931.f_17711.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_98931.f_17711.f_22[1]);
			break;
		
		case 2:
			Global_98931.f_17711.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_98931.f_17711.f_22[2]);
			break;
		
		case 3:
			Global_98931.f_17711.f_22[3]++;
			func_52("Fares Expired ++ ", Global_98931.f_17711.f_22[3]);
			break;
		
		case 13:
			Global_98931.f_17711.f_22[13]++;
			func_52("Passengers run ++ = ", Global_98931.f_17711.f_22[13]);
			break;
		
		case 14:
			Global_98931.f_17711.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_98931.f_17711.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_98931.f_17711.f_22[4])
				{
					Global_98931.f_17711.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_98931.f_17711.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_98931.f_17711.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_98931.f_17711.f_22[5] = (Global_98931.f_17711.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_98931.f_17711.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_98931.f_17711.f_22[6]++;
			}
			else
			{
				Global_98931.f_17711.f_22[6] = (Global_98931.f_17711.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_98931.f_17711.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_98931.f_17711.f_22[7] = (Global_98931.f_17711.f_22[7] + iParam1);
			}
			else
			{
				Global_98931.f_17711.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_98931.f_17711.f_22[7]);
			break;
		
		case 8:
			Global_98931.f_17711.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_98931.f_17711.f_22[8]);
			break;
		
		case 9:
			Global_98931.f_17711.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_98931.f_17711.f_22[9]);
			break;
		
		case 10:
			Global_98931.f_17711.f_22[10] = (Global_98931.f_17711.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_98931.f_17711.f_22[10]);
			break;
		
		case 11:
			Global_98931.f_17711.f_22[11] = (Global_98931.f_17711.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_98931.f_17711.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_98931.f_17711.f_22[12])
			{
				Global_98931.f_17711.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_98931.f_17711.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_98931.f_17711.f_22[12]);
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
		func_400(1);
		func_63(15, 1);
	}
	func_222(&(Global_98931.f_17711), 1024);
	if (!func_24(Global_98931.f_17711, 64))
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
		func_60((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_59(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_58() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_58()
{
	return Global_24946;
}

int func_59(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
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
	if (iParam0 >= 70)
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
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_74(&Global_2550589))
	{
		if (func_72(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
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
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	return (*uParam0)[iParam1] == 70;
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
	func_70(uParam0, (Global_2550588 - 0.5f));
}

void func_69(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_70(var uParam0, float fParam1)
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

float func_71(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
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
	return Global_35443 == iParam0;
}

int func_77(var uParam0, var uParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_50() && func_377(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				}
				func_103(uParam0);
				func_22(&(Global_98931.f_17711), 4096);
				func_101(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_102(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x35D7948F61AA3FEC(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_100(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_94(uParam1, 0))
			{
				func_78(uParam0);
				func_254(uParam0, 0, 0, 0);
				func_100(0);
				iLocal_167 = 7;
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
		func_79(func_92(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_80(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_91();
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
					func_90(99, 1);
					func_89(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_88(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_87(5))
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
							func_89(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_87(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_89(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_87(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_86(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_90(95, iParam3);
					break;
				
				case 1:
					func_90(97, iParam3);
					break;
				
				case 2:
					func_90(96, iParam3);
					break;
			}
			func_90(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_83(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_89(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_82(iParam0);
	if (Global_35443 == 15)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_85() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_85() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_84(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_84(int iParam0)
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

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_86(int iParam0)
{
	func_90(93, iParam0);
	func_90(29, iParam0);
	func_90(30, iParam0);
}

bool func_87(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_85() /*9662*/].f_7252.f_10, iParam0);
}

int func_88(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_91()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_92()
{
	func_93();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_4(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_3(unk_0x81873881071CD9FE());
			if (func_5(iVar0) && (!func_76(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_5(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

int func_94(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_98(&(uParam0->f_2));
	}
	unk_0xC9A352663D97EFC3(14);
	unk_0x88188CE25DF2572C(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x093DEAE9A023FAA0(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_98(&(uParam0->f_5));
				func_97(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_96(&(uParam0->f_5)) > 0.33f)
			{
				func_95(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_96(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_98(&(uParam0->f_5));
			func_97(uParam0, 1051260355);
		}
		else if (func_96(&(uParam0->f_5)) > 0.33f)
		{
			func_95(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_95(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_96(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_97(var uParam0, int iParam1)
{
	unk_0x21ED0FC9B5CC748B(*uParam0, "SHARD_ANIM_OUT");
	unk_0xBD0C54D89298454E(uParam0->f_9);
	unk_0x518198639630AE08(iParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_98(var uParam0)
{
	func_99(uParam0, 0f);
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_100(int iParam0)
{
	Global_69280 = iParam0;
	Global_69281 = iParam0;
}

void func_101(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x21ED0FC9B5CC748B(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0xDB5ED960DFB0E4DF(iParam9);
	unk_0x072D7B028D6C7A05(sParam1);
	unk_0xC3822F70D0E7940B();
	unk_0x6CE839BF5D87A428(sParam7);
	unk_0x6D55FF05D62B91BC(uParam2);
	unk_0x6D55FF05D62B91BC(uParam3);
	unk_0x072D7B028D6C7A05(uParam6);
	unk_0x6D55FF05D62B91BC(uParam5);
	unk_0x6D55FF05D62B91BC(iParam4);
	unk_0xC3822F70D0E7940B();
	unk_0xBA9BA6181F2B6111();
	func_98(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_102(var uParam0)
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

void func_103(var uParam0)
{
	int iVar0;
	
	Local_168.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_168.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_51(11, uParam0->f_56);
	func_51(12, uParam0->f_56);
	iLocal_56[1] = uParam0->f_56;
	iLocal_56[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x236D8AD7EE179F46(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

float func_104(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x930F8FBB8E9537CC(uParam0))
	{
		return -1f;
	}
	return unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1, iParam4);
}

int func_105(var uParam0, bool bParam1)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_114(uParam0) && func_111(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_110(uParam0, 2097152))
				{
					func_106(uParam0);
				}
			}
			else
			{
				func_106(uParam0);
			}
		}
		else if (!func_114(uParam0))
		{
			if (bParam1)
			{
				if (func_110(uParam0, 2097152))
				{
					if (unk_0xFA1212DE7C455679(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xFA1212DE7C455679(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_106(var uParam0)
{
	struct<3> Var0;
	
	if (func_109(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_107(uParam0, Var0);
}

void func_107(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && unk_0x58A69336FE7307D8(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_108(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x0D6E79537424BACE(Var0, Param1, 0) < unk_0x0D6E79537424BACE(Var3, Param1, 0) && unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x0D6E79537424BACE(Var0, Param1, 0) >= unk_0x0D6E79537424BACE(Var3, Param1, 0) && unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_108(int iParam0, int iParam1)
{
	if (!unk_0x930F8FBB8E9537CC(iParam0) && !unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (unk_0x58A69336FE7307D8(iParam0, iParam1))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_109(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_110(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_81, iParam1) && !func_50());
	}
	return func_50();
}

int func_111(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_113();
				return 1;
			}
			else if (func_112(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, 256);
				}
				else
				{
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, 0);
				}
			}
			unk_0x1F501FD3B3C3CF73(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_112(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_113()
{
	if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
	{
		unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
	}
}

int func_114(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			if (unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
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
	if (!func_24(uParam0->f_55, 1))
	{
		func_222(&(uParam0->f_55), 1);
	}
}

void func_116(var uParam0)
{
	func_118();
	unk_0xD1C83BD797927DD5();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_185(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_185(uParam0, 103, 1, 0, 0);
		}
		func_117(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_185(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_185(uParam0, 102, 1, 0, 0);
	}
	func_254(uParam0, 16, 4f, 0);
}

void func_117(int iParam0)
{
	Global_97643.f_221 = iParam0;
}

void func_118()
{
	Global_14559 = 0;
	func_119();
}

void func_119()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_120(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_121(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_51(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_51(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_121(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_122(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D675D69D18A10E9(uParam0->f_73[iVar0]))
		{
			unk_0xA080515881A08702(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_439 = 0;
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_124(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_125(var uParam0, int iParam1, bool bParam2)
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

int func_126(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_164(uParam0, uParam2, uParam1);
	if (func_163(uParam0) >= 14)
	{
		if (iLocal_444)
		{
			if (((func_377(uParam0, 11) > 20f && !func_50()) && !unk_0xDBD19E93A4D01117()) && !bLocal_442)
			{
				bLocal_442 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_444)
		{
			func_157(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_157(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!unk_0x5FEB513A4402FD59((*uParam1)[uParam1->f_95]) && unk_0xE5AB05962FA1FF3F((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_448)
				{
					if (func_156(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_155(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					unk_0x27CC98B7C879C320((*uParam1)[uParam1->f_95]);
					unk_0x52A7A8711E08087B((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_157(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0x5FEB513A4402FD59((*uParam1)[0]) || unk_0x5FEB513A4402FD59((*uParam1)[1])) || unk_0x5FEB513A4402FD59((*uParam1)[2])) || unk_0xBBEF8270CE27C0EE((*uParam1)[1], uParam0->f_4, 1)) || unk_0xBBEF8270CE27C0EE((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_287(uParam0, "Passenger injured.", 14);
	}
	if (!func_141(uParam0, uParam1))
	{
		if (!unk_0xA6D65D92671E7012(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			unk_0x98046F3D16B9CF76((*uParam1)[0], 0, 0);
			bLocal_446 = true;
			iLocal_447 = 0;
		}
	}
	else
	{
		if (bLocal_446)
		{
			if (unk_0xBEB00EB4ADDC2A33(uParam0->f_4, 0))
			{
				if (!iLocal_447)
				{
					unk_0x3C3A95141D01773E((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_447 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_287(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 0) == (*uParam1)[0])
			{
				func_176(uParam1);
				bLocal_446 = false;
			}
		}
		func_138(uParam0, 1097859072, 1117782016);
		func_137(uParam0, &(uParam0->f_43));
		if (!bLocal_446 && !unk_0x04C377C10639B842((*uParam1)[0], uParam0->f_4, 0))
		{
			func_287(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_104(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_448)
					{
						func_185(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x515B65C19A5CA9B1(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_111(uParam0, 1, 4f))
						{
							if (!unk_0x5FEB513A4402FD59((*uParam1)[2]))
							{
								unk_0x0A8175F24237A3D4(&(uParam1->f_36[2]));
								func_118();
								if (uParam1->f_95 == 2)
								{
									unk_0x27CC98B7C879C320((*uParam1)[2]);
								}
								unk_0xA3561415EB3DA3A3(&uVar0);
								unk_0xEAD984C2869B8B7C(&uVar0);
								unk_0x98046F3D16B9CF76(0, 0, 0);
								unk_0xD91194CE3D1E1D77(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0xD91194CE3D1E1D77(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0x56D9ED1541046AF6(uVar0);
								unk_0xC65002CAA1212AF9((*uParam1)[2], uVar0);
								unk_0xA3561415EB3DA3A3(&uVar0);
								if (func_377(uParam0, 6) < fLocal_449)
								{
									uParam1->f_55[2] = 1;
									func_185(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_185(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_135(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_133((*uParam1)[2], uParam0->f_4) && func_377(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_122(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
				}
				else if (!func_130(uParam0) && unk_0xF26CA0663D2E037E(unk_0xEC537F0C0E8265EE()))
				{
					func_128(uParam3);
					func_125(uParam2, -1, 0);
					func_254(uParam0, 6, 0, 0);
					func_254(uParam0, 11, 0, 0);
					func_185(uParam0, 40, 1, 0, 0);
					if (!unk_0xFBACB273AA628CC5(uParam1->f_36[1]))
					{
						func_176(uParam1);
					}
					iLocal_448 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (func_104(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_448)
					{
						func_185(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x515B65C19A5CA9B1(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_111(uParam0, 1, 4f))
						{
							if (!unk_0x5FEB513A4402FD59((*uParam1)[1]))
							{
								func_118();
								unk_0x0A8175F24237A3D4(&(uParam1->f_36[1]));
								func_127(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_377(uParam0, 6) < fLocal_450)
								{
									uParam1->f_55[1] = 1;
									func_185(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_185(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_135(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_133((*uParam1)[1], uParam0->f_4) && func_377(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
				}
				else if (!func_130(uParam0) && unk_0xF26CA0663D2E037E(unk_0xEC537F0C0E8265EE()))
				{
					func_128(uParam3);
					func_125(uParam2, -1, 0);
					func_254(uParam0, 6, 0, 0);
					func_254(uParam0, 11, 0, 0);
					func_185(uParam0, 43, 1, 0, 0);
					iLocal_448 = 0;
					if (!unk_0xFBACB273AA628CC5(uParam1->f_36[0]))
					{
						func_176(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_104(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_448)
					{
						func_185(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x515B65C19A5CA9B1(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_111(uParam0, 1, 4f))
						{
							unk_0x0A8175F24237A3D4(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_118();
							if (func_377(uParam0, 6) < fLocal_451)
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

void func_127(var uParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	
	if (unk_0x7404950238A154C2(*uParam0, 0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam1))
		{
			Var0 = { unk_0xB07F27EC3B05E4EA(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xB07F27EC3B05E4EA(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x0D6E79537424BACE(Var0, Param2, 0) < unk_0x0D6E79537424BACE(Var3, Param2, 0) && unk_0xA6D65D92671E7012(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar6 = 131072;
			}
			else if (unk_0x0D6E79537424BACE(Var0, Param2, 0) >= unk_0x0D6E79537424BACE(Var3, Param2, 0) && unk_0xA6D65D92671E7012(*uParam1, *uParam0, 2, 0, 0))
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
				unk_0xA3561415EB3DA3A3(&uVar7);
				unk_0xEAD984C2869B8B7C(&uVar7);
				unk_0x98046F3D16B9CF76(0, 0, 0);
				unk_0xD91194CE3D1E1D77(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xFE0C02098B6EFBD1(0, Var8, 5f, 0);
				unk_0xD91194CE3D1E1D77(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x56D9ED1541046AF6(uVar7);
				unk_0xC65002CAA1212AF9(*uParam1, uVar7);
			}
			else
			{
				unk_0xA3561415EB3DA3A3(&uVar7);
				unk_0xEAD984C2869B8B7C(&uVar7);
				unk_0x3535A48C04BEA949(0, *uParam0, iVar6);
				unk_0xD91194CE3D1E1D77(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xFE0C02098B6EFBD1(0, Var8, 5f, 0);
				unk_0xD91194CE3D1E1D77(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x56D9ED1541046AF6(uVar7);
				unk_0xC65002CAA1212AF9(*uParam1, uVar7);
			}
		}
	}
}

void func_128(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_129(), 24);
		iVar0++;
	}
	unk_0xD1C83BD797927DD5();
	func_48();
}

var func_129()
{
	var uVar0;
	
	return uVar0;
}

int func_130(var uParam0)
{
	if (func_50())
	{
		return 1;
	}
	if (func_132(uParam0, 17))
	{
		return 1;
	}
	if (func_132(uParam0, 14))
	{
		return 1;
	}
	if (func_131(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_131(var uParam0)
{
	return uParam0->f_110;
}

bool func_132(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_133(int iParam0, int iParam1)
{
	if (func_134(iParam0, iParam1))
	{
		if (unk_0x04C377C10639B842(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_136(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_136(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_136(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
			unk_0xF3148AAF69AF9CBC(uParam0, 2);
		}
	}
}

void func_137(var uParam0, var uParam1)
{
	unk_0x15F87E22A114CC69(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_138(var uParam0, float fParam1, float fParam2)
{
	if (func_114(uParam0) && func_24(uParam0->f_44, 4))
	{
		if ((unk_0x01C5771BE1D8ECE5(uParam0->f_4) || unk_0xA04824262F150982(uParam0->f_4) < 3f) && func_140(uParam0))
		{
			if (!func_132(uParam0, 2))
			{
				func_179(uParam0, 2);
			}
			else if (func_114(uParam0))
			{
				if (func_377(uParam0, 2) > fParam1 && !func_132(uParam0, 14))
				{
					if (func_36())
					{
						func_185(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_185(uParam0, 48, 1, 0, 0);
					}
					func_254(uParam0, 2, 0, 0);
					if (func_132(uParam0, 10))
					{
						func_254(uParam0, 10, 0, 0);
					}
				}
				if (!func_132(uParam0, 3))
				{
					func_254(uParam0, 3, 0, 0);
				}
				else if (func_377(uParam0, 3) >= fParam2)
				{
					func_139(uParam0, 3, 0);
					func_287(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_132(uParam0, 2))
			{
				func_139(uParam0, 2, 0);
			}
			if (func_132(uParam0, 3))
			{
				func_139(uParam0, 3, 0);
			}
		}
	}
}

void func_139(var uParam0, int iParam1, bool bParam2)
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
			func_95(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_95(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_140(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			return 1;
		}
	}
	return 0;
}

int func_141(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		func_287(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_154(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x5FEB513A4402FD59((*uParam1)[iVar0]))
			{
				func_287(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_142(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_132(uParam0, 14))
			{
				func_150(uParam0);
			}
			func_143(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_143(var uParam0, bool bParam1)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 0);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
				func_149(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xFBACB273AA628CC5(uParam0->f_9))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_9, 0);
				unk_0x116FDB7E27590C7F(uParam0->f_9, 0);
				unk_0xD1C83BD797927DD5();
				if (func_114(uParam0))
				{
					func_185(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_149(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_144(uParam0, 0, 0);
		}
		else if (unk_0xFBACB273AA628CC5(uParam0->f_10))
		{
			unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 255);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
			}
			else if (unk_0xFBACB273AA628CC5(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_9, 0);
					unk_0x116FDB7E27590C7F(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
					unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
				}
			}
			unk_0xD1C83BD797927DD5();
		}
	}
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_381(uParam0);
	}
	if (!unk_0xFBACB273AA628CC5(uParam0->f_10))
	{
		uParam0->f_10 = func_147(uParam0->f_4, 1, 0);
		unk_0x2AB7C42FF2AF476D(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x116FDB7E27590C7F(uParam0->f_10, 1);
		func_145(uParam0);
		if (bParam2)
		{
			unk_0xD1C83BD797927DD5();
			func_185(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_145(var uParam0)
{
	func_254(uParam0, 14, 0, 0);
	func_146();
}

void func_146()
{
	int iVar0;
	
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		unk_0x058526005957A956(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_147(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_148(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_148(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_148(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_148(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_149(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0xD1C83BD797927DD5();
		func_185(uParam0, iParam3, 1, 0, 0);
		func_222(uParam1, iParam2);
	}
}

void func_150(var uParam0)
{
	func_139(uParam0, 14, 0);
	func_139(uParam0, 15, 0);
	func_153();
	if (func_152())
	{
		func_151(0);
	}
}

void func_151(int iParam0)
{
	Global_16704 = iParam0;
}

int func_152()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_153()
{
	var uVar0;
	
	uVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x7404950238A154C2(uVar0, 0))
	{
		unk_0x058526005957A956(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_154(var uParam0, var uParam1)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_132(uParam0, 14))
			{
				if (unk_0xFBACB273AA628CC5(*uParam1) && unk_0x8849D149F1DEE8C1(*uParam1) > 0)
				{
					unk_0x9DA87A96BDB876EC(*uParam1, 0);
				}
				func_144(uParam0, 0, 0);
				func_185(uParam0, 2, 1, 1, 0);
			}
			else if (func_377(uParam0, 14) > 20f)
			{
				func_287(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_132(uParam0, 14))
			{
				func_150(uParam0);
			}
			if (unk_0xFBACB273AA628CC5(uParam0->f_10))
			{
				unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			}
			if ((unk_0xFBACB273AA628CC5(*uParam1) && unk_0x8849D149F1DEE8C1(*uParam1) < 255) && unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
			{
				unk_0x9DA87A96BDB876EC(*uParam1, 255);
				unk_0x116FDB7E27590C7F(*uParam1, 1);
			}
		}
	}
}

void func_155(var uParam0)
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

int func_156(var uParam0, var uParam1)
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0xFA1212DE7C455679(*uParam0, 242628503) != 1 || unk_0xFA1212DE7C455679(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_157(var uParam0, var uParam1, bool bParam2, bool bParam3)
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
	
	if (bLocal_442)
	{
		if (!uParam1->f_59)
		{
			if (!func_50())
			{
				func_161(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_160(uParam0, uParam1);
				uParam1->f_91 = unk_0x48E480685981C7D4();
			}
		}
	}
	if (bLocal_443)
	{
		if (!uParam1->f_60)
		{
			if (!func_50())
			{
				uParam1->f_60 = 1;
				func_159(uParam0, uParam1);
				uParam1->f_91 = unk_0x48E480685981C7D4();
				uParam1->f_92 = unk_0x48E480685981C7D4();
			}
		}
	}
	uVar0 = func_158(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = unk_0xA04824262F150982(uParam0->f_4);
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
				if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
				{
					unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			unk_0xE4315E2C8CCAE96E(uParam1->f_88, "speed", fVar4, 0);
			unk_0xE4315E2C8CCAE96E(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (unk_0xA04824262F150982(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x48E480685981C7D4();
		uParam1->f_63 = 1;
	}
	if ((unk_0xA04824262F150982(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = unk_0x48E480685981C7D4();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x48E480685981C7D4();
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
					if (unk_0x340D0D5779173223(uParam0->f_4, iVar1))
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x61B3150BF9145A92(uParam0->f_4, iVar1))
					{
						if ((unk_0x48E480685981C7D4() % 2000) < 50)
						{
						}
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE4315E2C8CCAE96E(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE4315E2C8CCAE96E(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0x48E480685981C7D4() - uParam1->f_91);
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
					if (unk_0x340D0D5779173223(uParam0->f_4, iVar1))
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x61B3150BF9145A92(uParam0->f_4, iVar1))
					{
						if ((unk_0x48E480685981C7D4() % 2000) < 50)
						{
						}
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE4315E2C8CCAE96E(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE4315E2C8CCAE96E(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (unk_0x48E480685981C7D4() - uParam1->f_91);
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
					if (unk_0x340D0D5779173223(uParam0->f_4, iVar1))
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_83[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0x61B3150BF9145A92(uParam0->f_4, iVar1))
					{
						if (unk_0x3D675D69D18A10E9(uParam1->f_78[iVar1]))
						{
							unk_0xE4315E2C8CCAE96E(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0x3D675D69D18A10E9(uParam1->f_73[iVar1]))
					{
						unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE4315E2C8CCAE96E(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE4315E2C8CCAE96E(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_158(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x340D0D5779173223(uParam0->f_4, iVar0))
		{
			if (!unk_0x236D8AD7EE179F46(uLocal_457[iVar0], 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uLocal_457[iVar0]), 1);
			}
			if (unk_0x1E934CB6473D0B93(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_444)
				{
					iLocal_444 = 1;
				}
			}
		}
		else if (unk_0x236D8AD7EE179F46(uLocal_457[iVar0], 1))
		{
			unk_0xC69E84EBBD7166E6(&(uLocal_457[iVar0]), 1);
		}
		if (!unk_0x61B3150BF9145A92(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0x236D8AD7EE179F46(uLocal_452[iVar0], 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uLocal_452[iVar0]), 1);
			}
			if (!iLocal_444)
			{
				iLocal_444 = 1;
			}
		}
		else if (unk_0x236D8AD7EE179F46(uLocal_452[iVar0], 1))
		{
			unk_0xC69E84EBBD7166E6(&(uLocal_452[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_159(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_408, 0f, 0f, 0f, unk_0x3ECD26BA4F631EE2(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_414, 0f, 0f, 0f, unk_0x3ECD26BA4F631EE2(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_411, 0f, 0f, 0f, unk_0x3ECD26BA4F631EE2(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_417, 0f, 0f, 0f, unk_0x3ECD26BA4F631EE2(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar0], "smoke", 1f, 0);
			unk_0xE4315E2C8CCAE96E(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_160(var uParam0, var uParam1)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		uParam1->f_88 = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_89 = unk_0xAB454B9B11E38180("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	unk_0xAF4023B32031AE64(1);
}

void func_161(var uParam0)
{
	func_162(uParam0, 0f);
}

void func_162(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) + fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_163(var uParam0)
{
	return uParam0->f_416;
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	if (!func_24(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
				{
					if (func_377(uParam0, 9) > 1f)
					{
						func_168(uParam0, unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()));
						func_185(uParam0, 50, 1, 0, 0);
						func_254(uParam0, 9, 0, 0);
						if (unk_0xFBACB273AA628CC5(uParam2->f_40))
						{
							unk_0x9DA87A96BDB876EC(uParam2->f_40, 0);
							unk_0x116FDB7E27590C7F(uParam2->f_40, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_50() && func_377(uParam0, 9) > 4f)
				{
					func_185(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_167("TAXI_OBJ_POL", 0, 0))
				{
					func_185(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9C85ECF581158409(unk_0xEC537F0C0E8265EE(), func_166(uParam0)))
				{
					func_168(uParam0, unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()));
					func_51(6, 0);
				}
				if (!func_131(uParam0))
				{
					if (!unk_0xE1772957381F609F())
					{
						if (func_377(uParam0, 16) > 10f)
						{
							func_185(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
				{
					if (unk_0xFBACB273AA628CC5(uParam2->f_40))
					{
						unk_0x9DA87A96BDB876EC(uParam2->f_40, 255);
						unk_0x116FDB7E27590C7F(uParam2->f_40, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_50())
				{
					func_185(uParam0, 53, 1, 0, 1);
					func_51(7, func_166(uParam0));
					func_168(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_50())
				{
					func_165(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_166(var uParam0)
{
	return uParam0->f_106;
}

bool func_167(char* sParam0, int iParam1, int iParam2)
{
	unk_0x35C3DC3A3BE08CC1(sParam0);
	if (iParam1 == 1)
	{
		unk_0x072D7B028D6C7A05(iParam2);
	}
	return unk_0x8BF06EFC37AF94F0();
}

void func_168(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_169(var uParam0)
{
	if (func_171(uParam0))
	{
		func_170(uParam0);
	}
}

void func_170(var uParam0)
{
	if (unk_0x751BF12992F7E3E2() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x2595B211F055F9FB();
			func_139(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_377(uParam0, 20) > 3f)
				{
					func_185(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_24(uParam0->f_81, 262144) || !func_24(uParam0->f_81, 1048576))
				{
					if (func_377(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_185(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (func_377(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_185(uParam0, 85, 1, 0, 0);
						func_139(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_377(uParam0, 20) > 8f)
				{
					func_185(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_81, 262144) || func_24(uParam0->f_82, 67108864))
			{
				if (!func_132(uParam0, 22))
				{
					func_179(uParam0, 22);
				}
			}
			if (func_132(uParam0, 22) && func_377(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_24(uParam0->f_81, 1048576))
					{
						func_185(uParam0, 84, 1, 0, 0);
						func_139(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_24(uParam0->f_82, 134217728))
					{
						func_185(uParam0, 85, 1, 0, 0);
						func_139(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_171(var uParam0)
{
	return uParam0->f_120;
}

void func_172(var uParam0, var uParam1)
{
	func_175(uParam0, 1000);
	if ((!unk_0x930F8FBB8E9537CC((*uParam1)[0]) && !unk_0x930F8FBB8E9537CC((*uParam1)[1])) && !unk_0x930F8FBB8E9537CC((*uParam1)[2]))
	{
		unk_0x1E2B48EE3EC55DCF((*uParam1)[0]);
		unk_0x1E2B48EE3EC55DCF((*uParam1)[1]);
		unk_0x1E2B48EE3EC55DCF((*uParam1)[2]);
	}
	func_173();
	func_150(uParam0);
}

void func_173()
{
	Global_14559 = 0;
	func_174();
}

void func_174()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_175(var uParam0, int iParam1)
{
	if (unk_0x42E36F2D658EB2FF(*uParam0))
	{
		unk_0x35B958B469415A23(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
	}
}

void func_176(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!unk_0xFBACB273AA628CC5(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_177(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!unk_0xCDAC79404D7D2256(uParam0->f_36[2]))
		{
			unk_0x116FDB7E27590C7F(uParam0->f_36[2], 1);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!unk_0xFBACB273AA628CC5(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_177(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!unk_0xCDAC79404D7D2256(uParam0->f_36[1]))
		{
			unk_0x116FDB7E27590C7F(uParam0->f_36[1], 1);
		}
	}
	else
	{
		if (!unk_0xFBACB273AA628CC5(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_177(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!unk_0xCDAC79404D7D2256(uParam0->f_36[0]))
		{
			unk_0x116FDB7E27590C7F(uParam0->f_36[0], 1);
		}
	}
}

var func_177(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_148(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

void func_178()
{
	func_222(&(Local_462.f_55), 2);
	func_222(&(Local_462.f_55), 4);
	func_222(&(Local_462.f_55), 16);
	func_222(&(Local_462.f_55), 64);
	func_222(&(Local_462.f_55), 256);
	func_222(&(Local_462.f_55), 512);
	func_222(&(Local_462.f_55), 1024);
	func_222(&(Local_462.f_55), 2048);
	func_222(&(Local_462.f_55), 4096);
	func_222(&(Local_462.f_55), 1073741824);
	func_222(&uLocal_1082, 2);
}

void func_179(var uParam0, int iParam1)
{
	func_180(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_180(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_98(uParam0);
	}
}

void func_181()
{
	unk_0x887F4488DA99FD21(joaat("stretch"));
	unk_0x887F4488DA99FD21(joaat("superd"));
	unk_0x887F4488DA99FD21(Local_892.f_45[0]);
	unk_0x887F4488DA99FD21(Local_892.f_45[1]);
	unk_0x887F4488DA99FD21(Local_892.f_45[2]);
	unk_0x887F4488DA99FD21(Local_892.f_45[3]);
	unk_0x887F4488DA99FD21(Local_892.f_45[4]);
	unk_0xD8323B49BAE93D80("oddjobs@taxi@gyn@cc@intro");
	unk_0xD8323B49BAE93D80("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0xD8323B49BAE93D80("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_182(var uParam0, bool bParam1)
{
	func_183(uParam0);
	if (bParam1)
	{
		if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
		{
			uParam0->f_9 = func_177(uParam0->f_17, 1);
		}
		else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
		{
			unk_0x0D1C36CA5AEDED55(1, 0);
			unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
			unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
			unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
		}
	}
}

void func_183(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0->f_8))
	{
		unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
		unk_0x0A8175F24237A3D4(&(uParam0->f_8));
	}
}

void func_184(var uParam0)
{
	unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
	unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
	func_175(uParam0, 1000);
}

void func_185(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_254(uParam0, 16, 4f, 0);
		if (func_186(uParam0))
		{
			func_48();
		}
	}
	func_213(uParam0, iParam2, bParam3);
}

int func_186(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_50())
	{
		Var6 = { func_188() };
		if (!unk_0xB318FDA0D1ABDB20(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xD994929E13CC1ED5(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_187(&Var0);
			if (unk_0xD994929E13CC1ED5(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_188()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

bool func_189(var uParam0, var uParam1)
{
	return ((func_190((*uParam1)[0], uParam0) && func_190((*uParam1)[1], uParam0)) && func_190((*uParam1)[2], uParam0));
}

int func_190(int iParam0, var uParam1)
{
	if (unk_0x7404950238A154C2(uParam1->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			if (unk_0x58A69336FE7307D8(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_287(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_287(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_191(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_210(uParam0, (*uParam1)[0]);
	func_210(uParam0, (*uParam1)[1]);
	func_210(uParam0, (*uParam1)[2]);
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			func_208(uParam0, 1);
			if (func_34())
			{
				unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
				func_172(uParam0, uParam1);
			}
		}
		else if (unk_0x9C85ECF581158409(unk_0xEC537F0C0E8265EE(), 0))
		{
			func_206(uParam0);
		}
		else
		{
			if (func_132(uParam0, 14))
			{
				func_150(uParam0);
				func_205(uParam0, uParam1, 0);
			}
			if (func_132(uParam0, 9))
			{
				func_139(uParam0, 9, 0);
				unk_0xD1C83BD797927DD5();
				if (unk_0xFBACB273AA628CC5(uParam0->f_8))
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_8, 255);
					unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
				}
			}
			if (!unk_0x5FEB513A4402FD59((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((unk_0xA04824262F150982(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_204(uParam0, (*uParam1)[iLocal_432]) > 50f || func_13(&uLocal_433) > 5f)
						{
							func_287(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (unk_0xFA1212DE7C455679((*uParam1)[iLocal_432], 713668775) != 1 || ((func_10(unk_0x81873881071CD9FE(), (*uParam1)[iLocal_432], 1) < 20f && func_203((*uParam1)[iLocal_432], uParam0->f_11, 1) <= 28f) && func_203(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_201(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_200(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_93)
								{
									iVar0 = func_199(uParam0, &uVar1);
									if (!unk_0x930F8FBB8E9537CC(iVar0))
									{
										unk_0x98046F3D16B9CF76(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0x27CC98B7C879C320((*uParam1)[iVar3]);
									unk_0xA3561415EB3DA3A3(&uVar2);
									unk_0xEAD984C2869B8B7C(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0xE5AB05962FA1FF3F((*uParam1)[iVar3], 0))
											{
												unk_0xAF625598EDA64AD3(0, uParam0->f_4, -1, 0, 2);
												unk_0x52A7A8711E08087B(0, unk_0x2E0A9E3291F398E3(1750, 2250));
												unk_0x3C3A95141D01773E(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0xE5AB05962FA1FF3F((*uParam1)[iVar3], 0))
											{
												unk_0xAF625598EDA64AD3(0, uParam0->f_4, -1, 0, 2);
												unk_0x3C3A95141D01773E(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0xE5AB05962FA1FF3F((*uParam1)[iVar3], 0))
											{
												unk_0xAF625598EDA64AD3(0, uParam0->f_4, -1, 0, 2);
												unk_0x52A7A8711E08087B(0, unk_0x2E0A9E3291F398E3(750, 1250));
												unk_0x3C3A95141D01773E(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0x56D9ED1541046AF6(uVar2);
									unk_0xC65002CAA1212AF9((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_140(uParam0))
							{
								unk_0x27CC98B7C879C320((*uParam1)[0]);
								unk_0x27CC98B7C879C320((*uParam1)[1]);
								unk_0x27CC98B7C879C320((*uParam1)[2]);
							}
							else if ((unk_0xFA1212DE7C455679((*uParam1)[0], 242628503) != 1 && unk_0xFA1212DE7C455679((*uParam1)[0], 242628503) != 0) && func_204(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
								unk_0xEAD984C2869B8B7C(&(uParam0->f_243));
								unk_0xF88735A9354A45F3(0, uParam0->f_4, 0);
								unk_0x31C1393E4ACFD794(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0x56D9ED1541046AF6(uParam0->f_243);
								unk_0xC65002CAA1212AF9((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_93)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_198(uParam0, 1))
									{
										unk_0x1E2B48EE3EC55DCF((*uParam1)[0]);
										unk_0x1E2B48EE3EC55DCF((*uParam1)[1]);
										unk_0x1E2B48EE3EC55DCF((*uParam1)[2]);
										func_287(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_197(uParam0, uParam1);
							if (func_204(uParam0, (*uParam1)[0]) < fVar4 || func_34())
							{
								if (unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0xE5AB05962FA1FF3F((*uParam1)[0], 0) && unk_0xE5AB05962FA1FF3F((*uParam1)[1], 0)) && unk_0xE5AB05962FA1FF3F((*uParam1)[2], 0))
									{
										func_183(uParam0);
										unk_0xCE566DBDCACD245E((*uParam1)[0], 26, 1);
										unk_0xCE566DBDCACD245E((*uParam1)[1], 26, 1);
										unk_0xCE566DBDCACD245E((*uParam1)[2], 26, 1);
										unk_0xCE566DBDCACD245E((*uParam1)[0], 104, 1);
										func_139(uParam0, 5, 0);
										unk_0x3899C8F3131D270C();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0x48E480685981C7D4() % 1000) < 50)
								{
								}
								unk_0xC918E8450C58D3B0(unk_0xB6AE0DAE06D56288((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_196(uParam1))
							{
								unk_0x27CC98B7C879C320((*uParam1)[0]);
								unk_0x27CC98B7C879C320((*uParam1)[1]);
								unk_0x27CC98B7C879C320((*uParam1)[2]);
								func_287(uParam0, "Left Passenger", 8);
							}
							if ((func_195(uParam0, uParam1) || func_194(uParam0, uParam1)) || func_193(uParam0, uParam1))
							{
								if (!unk_0xE5AB05962FA1FF3F((*uParam1)[2], 0))
								{
									unk_0xD91194CE3D1E1D77((*uParam1)[2], func_39(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 2;
								}
								if (!unk_0xE5AB05962FA1FF3F((*uParam1)[1], 0))
								{
									unk_0xD91194CE3D1E1D77((*uParam1)[1], func_39(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 1;
								}
								if (!unk_0xE5AB05962FA1FF3F((*uParam1)[0], 0))
								{
									unk_0xD91194CE3D1E1D77((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 0;
								}
								unk_0x0A8175F24237A3D4(&(uParam0->f_8));
								uParam0->f_8 = func_192((*uParam1)[iLocal_432], 0, 0);
								func_98(&uLocal_433);
								uParam0->f_48 = 0;
								iLocal_86 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_287(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_287(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_192(int iParam0, bool bParam1, bool bParam2)
{
	return func_147(iParam0, !bParam1, bParam2);
}

int func_193(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5FEB513A4402FD59((*uParam1)[iVar0]) && !unk_0xE5AB05962FA1FF3F((*uParam1)[iVar0], 0))
		{
			if (func_204(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_194(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5FEB513A4402FD59((*uParam1)[iVar0]) && !unk_0xE5AB05962FA1FF3F((*uParam1)[iVar0], 0))
		{
			if (func_203(uParam0->f_4, uParam0->f_11, 1) > 28f)
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
		if (!unk_0x5FEB513A4402FD59((*uParam1)[iVar0]) && !unk_0xE5AB05962FA1FF3F((*uParam1)[iVar0], 0))
		{
			if (func_203((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_196(var uParam0)
{
	if ((!unk_0x5FEB513A4402FD59((*uParam0)[0]) && !unk_0x5FEB513A4402FD59((*uParam0)[1])) && !unk_0x5FEB513A4402FD59((*uParam0)[2]))
	{
		if ((unk_0xE5AB05962FA1FF3F((*uParam0)[0], 0) || unk_0xE5AB05962FA1FF3F((*uParam0)[1], 0)) || unk_0xE5AB05962FA1FF3F((*uParam0)[2], 0))
		{
			if ((!unk_0xE5AB05962FA1FF3F((*uParam0)[0], 0) || !unk_0xE5AB05962FA1FF3F((*uParam0)[1], 0)) || !unk_0xE5AB05962FA1FF3F((*uParam0)[2], 0))
			{
				if (!func_16(&uLocal_436))
				{
					func_180(&uLocal_436);
				}
				else if (func_96(&uLocal_436) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_197(var uParam0, var uParam1)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59((*uParam1)[iLocal_432]))
		{
			if (func_9((*uParam1)[iLocal_432], 1) > 30f)
			{
				if (unk_0xFA1212DE7C455679((*uParam1)[iLocal_432], -1794415470) == 1 || unk_0xFA1212DE7C455679((*uParam1)[iLocal_432], 242628503) == 1)
				{
					func_287(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_198(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 1);
		iVar0[1] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 2);
		iVar0[2] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x86CCCD2FAE9D5E65(iVar0[iVar4]))
			{
				if (unk_0x930F8FBB8E9537CC(iVar0[iVar4]))
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
		if ((unk_0x48E480685981C7D4() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_199(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 1);
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 2);
			if (unk_0x86CCCD2FAE9D5E65(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 0);
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_200(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x930F8FBB8E9537CC((*uParam1)[0]))
	{
		if (!unk_0x895C275673BCEAB0((*uParam1)[iLocal_432]) && func_9((*uParam1)[iLocal_432], 1) < fParam3)
		{
			if (!func_132(uParam0, 5))
			{
				func_254(uParam0, 5, 0, 0);
			}
		}
		else if (func_132(uParam0, 5))
		{
			func_139(uParam0, 5, 0);
		}
		if (((func_377(uParam0, 5) > IntToFloat(iParam2) && unk_0xA04824262F150982(uParam0->f_4) < fParam5) && !unk_0x895C275673BCEAB0((*uParam1)[iLocal_432])) || func_9((*uParam1)[iLocal_432], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uVar10 = unk_0x2430739394FC68FC(uParam0->f_4, "windscreen");
	Var6 = { unk_0xDE2CF83C47088189(uParam0->f_4, uVar10) };
	Var6 = { unk_0xFF603DE3EBE2C5F9(uParam0->f_4, Var6) };
	Var6.f_1 = (Var6.f_1 + 1f);
	Var0 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, Var6) };
	Var3 = { unk_0xB07F27EC3B05E4EA(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x7ED8F4B17883C798(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x1D15D99A10A15334((*uParam1)[0], 1);
			unk_0x1D15D99A10A15334((*uParam1)[1], 1);
			unk_0x1D15D99A10A15334((*uParam1)[2], 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_432], 0) <= fParam2 && !uParam0->f_142) && unk_0xB9AA84B14E04BC20((Var0.f_2 - Var3.f_2)) < 5f)
			{
				iVar9 = func_202(&(uParam0->f_409), Var0, Var3, 0);
				if (iVar9 == 0)
				{
					iLocal_86 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xD1C83BD797927DD5();
			func_185(uParam0, 4, 1, 0, 1);
			unk_0x27CC98B7C879C320((*uParam1)[iLocal_432]);
			unk_0xAF625598EDA64AD3(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
			unk_0xEAD984C2869B8B7C(&(uParam0->f_243));
			unk_0x31C1393E4ACFD794(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0xF88735A9354A45F3(0, uParam0->f_4, 0);
			unk_0x56D9ED1541046AF6(uParam0->f_243);
			unk_0xC65002CAA1212AF9((*uParam1)[iLocal_432], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_86 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_202(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x26CECBCADF60693F(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

float func_203(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

float func_204(var uParam0, int iParam1)
{
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (func_140(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_205(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 0);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
				func_149(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xFBACB273AA628CC5(uParam1->f_36[iVar0]))
					{
						unk_0x9DA87A96BDB876EC(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_185(uParam0, 2, 1, 1, 0);
			}
			func_144(uParam0, 0, 0);
		}
		else if (unk_0xFBACB273AA628CC5(uParam0->f_10))
		{
			unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 255);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
				func_149(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xFBACB273AA628CC5(uParam1->f_36[iVar0]))
					{
						unk_0x9DA87A96BDB876EC(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_206(var uParam0)
{
	func_210(uParam0, uParam0->f_3);
	if (func_140(uParam0))
	{
		if (func_132(uParam0, 14))
		{
			func_150(uParam0);
			if (unk_0xFBACB273AA628CC5(uParam0->f_10))
			{
				unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			}
		}
	}
	if (!func_132(uParam0, 9))
	{
		if (unk_0xFBACB273AA628CC5(uParam0->f_8))
		{
			unk_0x9DA87A96BDB876EC(uParam0->f_8, 0);
			unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
		}
		func_254(uParam0, 9, 0, 0);
		func_207("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_207(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

void func_208(var uParam0, bool bParam1)
{
	func_210(uParam0, uParam0->f_3);
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_132(uParam0, 14))
			{
				if (func_50())
				{
					func_151(1);
				}
				func_209(uParam0, 11, 1);
				func_143(uParam0, 1);
				func_254(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_114(uParam0))
				{
					if ((unk_0x48E480685981C7D4() % 1000) < 50)
					{
					}
					if (unk_0xE5AB05962FA1FF3F(uParam0->f_2, 0))
					{
						if (func_377(uParam0, 15) > 5f)
						{
							func_254(uParam0, 15, 0f, 1);
						}
					}
					if (func_377(uParam0, 14) > 20f)
					{
						func_287(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_377(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_287(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_287(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_209(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_210(var uParam0, int iParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam1))
	{
		if (!unk_0x5FEB513A4402FD59(iParam1))
		{
			if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
			{
				if ((unk_0xB67A763C9B49A25F(iParam1, joaat("weapon_stungun"), 0) || unk_0xB67A763C9B49A25F(iParam1, 0, 2)) || unk_0xB67A763C9B49A25F(iParam1, 0, 1))
				{
					func_287(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			}
		}
	}
}

void func_211()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x7404950238A154C2(Local_462.f_4, 0))
	{
		if (func_140(&Local_462))
		{
			if (!iLocal_1009)
			{
				uVar0 = unk_0x2430739394FC68FC(Local_462.f_4, "window_lf");
				uVar1 = unk_0x2430739394FC68FC(Local_462.f_4, "window_lr");
				uVar2 = unk_0x2430739394FC68FC(Local_462.f_4, "window_rf");
				uVar3 = unk_0x2430739394FC68FC(Local_462.f_4, "window_rr");
				Local_408 = { unk_0xDE2CF83C47088189(Local_462.f_4, uVar0) };
				Local_408 = { unk_0xFF603DE3EBE2C5F9(Local_462.f_4, Local_408) };
				Local_420 = { Local_408 };
				Local_408.f_2 = (Local_408.f_2 + 0.15f);
				Local_408.f_1 = (Local_408.f_1 - 0.15f);
				Local_411 = { unk_0xDE2CF83C47088189(Local_462.f_4, uVar1) };
				Local_411 = { unk_0xFF603DE3EBE2C5F9(Local_462.f_4, Local_411) };
				Local_423 = { Local_411 };
				Local_411.f_2 = (Local_411.f_2 + 0.15f);
				Local_414 = { unk_0xDE2CF83C47088189(Local_462.f_4, uVar2) };
				Local_414 = { unk_0xFF603DE3EBE2C5F9(Local_462.f_4, Local_414) };
				Local_426 = { Local_414 };
				Local_414.f_2 = (Local_414.f_2 + 0.15f);
				Local_414.f_1 = (Local_414.f_1 - 0.15f);
				Local_417 = { unk_0xDE2CF83C47088189(Local_462.f_4, uVar3) };
				Local_417 = { unk_0xFF603DE3EBE2C5F9(Local_462.f_4, Local_417) };
				Local_429 = { Local_417 };
				Local_417.f_2 = (Local_417.f_2 + 0.15f);
				iLocal_1009 = 1;
			}
		}
		else if (iLocal_1009)
		{
			iLocal_1009 = 0;
		}
	}
}

void func_212(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_39(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_39(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0x536B53396BA193B3(Var0, Var3);
		*uParam0 = unk_0x13705C66F125D98D(Var0, Var3, 0, 1, 1, 1);
		unk_0x984F8E3A66FFFEE5(Param1, fParam4, 0);
	}
	else
	{
		unk_0xB0CC34FB1640F35B();
		unk_0xE91F714E010C7127(*uParam0, 0);
	}
}

void func_213(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_254(uParam0, 16, 4f, 0);
		unk_0xD1C83BD797927DD5();
	}
}

int func_214(var uParam0, int iParam1)
{
	if (!unk_0xCD8DA898314F3016(2))
	{
		return 0;
	}
	func_221(12);
	if (func_24(uParam0->f_44, 8))
	{
		if (!func_24(uParam0->f_44, 128))
		{
			if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()) && !func_24(uParam0->f_44, 256))
			{
				func_222(&(uParam0->f_44), 256);
			}
			if (func_24(uParam0->f_44, 256) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				func_185(uParam0, 135, 1, 0, 1);
				func_222(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_218(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_44, 8))
			{
				unk_0xF88735A9354A45F3(uParam0->f_3, unk_0x81873881071CD9FE(), 0);
				func_185(uParam0, 133, 1, 0, 1);
				func_222(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x5FEB513A4402FD59(uParam0->f_3) || unk_0x5EF53977B76418E5(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_287(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xE68E6B44DABA9C05(uParam0->f_2, 0);
		unk_0x50C9C2E3327FDF31(uParam0->f_4, 1);
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x7DB4FC1A893751E2(uParam0->f_4);
			func_216(uParam0);
			func_51(2, 0);
			bLocal_93 = true;
			func_180(&uLocal_89);
			return 1;
		}
		else
		{
			func_287(uParam0, "No Taxi", 21);
			func_215("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_215(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_216(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (func_217())
		{
		}
	}
}

int func_217()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_218(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				iVar1 = unk_0x14B7103DBD149FFE(iVar0);
				bVar2 = func_220(iVar0);
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
				if (unk_0x61A26017817C6AED(iVar1))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x59D35AC211D17FAB(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_44, 64))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_215("TX_VIP_DMGD", -1);
							if (func_219("TX_VIP_DMGD"))
							{
								func_222(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_44, 32))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_215("TX_VIP_CAR", -1);
							if (func_219("TX_VIP_CAR"))
							{
								func_222(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_44, 16))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_215("TX_VIP_SMALL", -1);
							if (func_219("TX_VIP_SMALL"))
							{
								func_222(&(uParam0->f_44), 16);
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

bool func_219(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x2A87B5EC03992FB8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x1E934CB6473D0B93(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 3))
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

void func_221(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		uVar0 = iParam0;
		unk_0x37EDB5361D2913A3(8, &uVar0, 1, 1);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x0D8BE77DF7532733(8, &cVar1);
	}
}

void func_222(var uParam0, int iParam1)
{
	func_223(uParam0, iParam1);
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_225()
{
	Local_342.f_0 = 0;
	func_242(33622, 33597, 1);
	func_242(33358, 33335, 1);
	func_242(33274, 33249, 1);
	func_242(33178, 33154, 1);
	func_242(33044, 33023, 1);
	func_242(32970, 32945, 1);
	func_242(32803, 32780, 1);
}

int func_226(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_227(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (func_229(uParam0->f_4))
		{
			func_228(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_229(int iParam0)
{
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xFF463728B23A0037(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x088B9F587DA37464(iParam0, 0, 40000) || unk_0x088B9F587DA37464(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_230(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_231(var uParam0)
{
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		if (func_232(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_232(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_233(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_228(uParam0, 11);
	return 1;
}

int func_234(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (unk_0x2C237D28F05F0008(uParam0->f_4) && !unk_0x653781B2157A929D(uParam0->f_4))
		{
			if (!func_132(uParam0, 25))
			{
				func_254(uParam0, 25, 0, 0);
			}
			else if (func_377(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_132(uParam0, 25))
		{
			func_139(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_235(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_236(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (unk_0xD135D1F36209168D(uParam0->f_4))
		{
			if (unk_0x088B9F587DA37464(uParam0->f_4, 0, 40000) || unk_0x088B9F587DA37464(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_238(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (unk_0x7404950238A154C2(uParam0->f_4, 0))
		{
			if (unk_0x01C5771BE1D8ECE5(uParam0->f_4))
			{
				if (func_232(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_239(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_240(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (func_241(uParam0->f_4))
		{
			func_228(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xFF463728B23A0037(iParam0) == 0f)
	{
		if (!unk_0x7404950238A154C2(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x088B9F587DA37464(iParam0, 0, 40000) || unk_0x088B9F587DA37464(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_223(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_223(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_243(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_244(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_3))
	{
		if ((unk_0x5FEB513A4402FD59(uParam0->f_3) || unk_0x930F8FBB8E9537CC(uParam0->f_3)) || unk_0x2D2289DC6C760F31(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_245()
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

int func_246()
{
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_41[0]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_41[1]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_41[2]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0xCC8E3BAC62A29F42(uLocal_1089))
	{
		return 0;
	}
	if (!func_247(&iLocal_998, 1))
	{
		func_248("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}

int func_247(int iParam0, bool bParam1)
{
	if (!unk_0x33ACB874CECA2D4B(func_21()))
	{
		func_248("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x8E8B546E1A81D27F("gestures@m@standing@casual"))
		{
			func_248("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x8E8B546E1A81D27F("oddjobs@taxi@"))
	{
		func_248("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("oddjobs@towingcome_here"))
	{
		func_248("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("misscommon@response"))
	{
		func_248("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xCD8DA898314F3016(2))
	{
		func_248("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_248(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x48E480685981C7D4() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x48E480685981C7D4();
}

void func_249(var uParam0, int iParam1)
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

void func_250(var uParam0)
{
	if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
	{
		uParam0->f_8 = func_192(uParam0->f_3, 0, 0);
		unk_0x2AB7C42FF2AF476D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0D1C36CA5AEDED55(1, 0);
		unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
	}
}

int func_251(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param4 };
	func_40(uParam0->f_14, 0);
	unk_0xA450601E968044DB(uParam0->f_14, 25f, 0, 0, 0, 0, 0);
	if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[0]))
	{
		(*uParam7)[0] = Global_97643.f_225[0];
		(*uParam7)[1] = Global_97643.f_225[1];
		(*uParam7)[2] = Global_97643.f_225[2];
		unk_0xD768713E73165208((*uParam7)[0], 1, 1);
		unk_0xD768713E73165208((*uParam7)[1], 1, 1);
		unk_0xD768713E73165208((*uParam7)[2], 1, 1);
	}
	else
	{
		(*uParam7)[0] = unk_0x206897C6DBC12488(26, uParam7->f_41[0], uParam0->f_11, -178.76f, 1, 1);
		(*uParam7)[1] = unk_0x206897C6DBC12488(26, uParam7->f_41[1], unk_0xB07F27EC3B05E4EA((*uParam7)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam7)[2] = unk_0x206897C6DBC12488(26, uParam7->f_41[1], unk_0xB07F27EC3B05E4EA((*uParam7)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_253(uParam0, uParam7[0]);
	uParam7->f_51[0] = 0;
	uParam7->f_51[1] = 0;
	uParam7->f_51[2] = 0;
	uParam7->f_12[0] = 0;
	uParam7->f_12[1] = 1;
	uParam7->f_12[2] = 2;
	if ((!unk_0x5FEB513A4402FD59((*uParam7)[0]) && !unk_0x5FEB513A4402FD59((*uParam7)[1])) && !unk_0x5FEB513A4402FD59((*uParam7)[2]))
	{
		unk_0xF88735A9354A45F3((*uParam7)[1], (*uParam7)[0], 0);
		unk_0xF88735A9354A45F3((*uParam7)[2], (*uParam7)[0], 0);
		unk_0xF88735A9354A45F3((*uParam7)[0], (*uParam7)[1], 0);
	}
	if (!unk_0x5FEB513A4402FD59((*uParam7)[2]))
	{
		func_7(&(uParam0->f_244), 5, (*uParam7)[2], "TaxiPaulie", 0, 1);
		unk_0xEF1A2C5B3EE83E3E((*uParam7)[2], "TaxiPaulie");
		unk_0xCE566DBDCACD245E((*uParam7)[2], 317, 1);
	}
	if (!unk_0x5FEB513A4402FD59((*uParam7)[1]))
	{
		func_7(&(uParam0->f_244), 4, (*uParam7)[1], "TaxiClyde", 0, 1);
		unk_0xEF1A2C5B3EE83E3E((*uParam7)[1], "TaxiClyde");
		unk_0xCE566DBDCACD245E((*uParam7)[1], 317, 1);
	}
	if (!unk_0x5FEB513A4402FD59((*uParam7)[0]))
	{
		func_7(&(uParam0->f_244), 3, (*uParam7)[0], "TaxiDarren", 0, 1);
		unk_0xEF1A2C5B3EE83E3E((*uParam7)[0], "TaxiDarren");
		unk_0xCE566DBDCACD245E((*uParam7)[0], 317, 1);
		unk_0x4865E80F793024CE("TAXI_Passenger", &(uParam0->f_413));
		unk_0xF8E77F310A5B6EAB(1, uParam0->f_413, joaat("player"));
		unk_0x506A601663C5417C((*uParam7)[0], uParam0->f_413);
		func_252((*uParam7)[1], uParam0->f_413);
		func_252((*uParam7)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_252(int iParam0, var uParam1)
{
	if (!unk_0x5FEB513A4402FD59(uParam0))
	{
		unk_0x506A601663C5417C(iParam0, uParam1);
	}
}

void func_253(var uParam0, var uParam1)
{
	if (!unk_0x5FEB513A4402FD59(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_254(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_99(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_98(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_255()
{
	unk_0x18C8823792832C78();
	unk_0x295DC04FC13E025B("oddjobs@taxi@gyn@cc@hotbox");
}

void func_256()
{
	unk_0x32A12757CBF48A33(Local_892.f_45[0]);
	unk_0x32A12757CBF48A33(Local_892.f_45[1]);
	unk_0x32A12757CBF48A33(Local_892.f_45[2]);
	unk_0x32A12757CBF48A33(Local_892.f_45[3]);
	unk_0x32A12757CBF48A33(Local_892.f_45[4]);
	unk_0x32A12757CBF48A33(joaat("stretch"));
	unk_0x32A12757CBF48A33(joaat("superd"));
	unk_0x295DC04FC13E025B("oddjobs@taxi@gyn@cc@intro");
	unk_0x295DC04FC13E025B("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x295DC04FC13E025B("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_1089 = func_257();
}

var func_257()
{
	return unk_0x95EF972E3A07B525("MIDSIZED_MESSAGE");
}

void func_258()
{
	unk_0x32A12757CBF48A33(Local_892.f_41[0]);
	unk_0x32A12757CBF48A33(Local_892.f_41[1]);
	unk_0x32A12757CBF48A33(Local_892.f_41[2]);
	func_259(1);
}

void func_259(bool bParam0)
{
	unk_0x32A12757CBF48A33(func_21());
	if (bParam0)
	{
		unk_0x295DC04FC13E025B("gestures@m@standing@casual");
	}
	unk_0x295DC04FC13E025B("oddjobs@taxi@");
	unk_0x295DC04FC13E025B("oddjobs@towingcome_here");
	unk_0x295DC04FC13E025B("misscommon@response");
	unk_0x86B83C54AF71BD12("TAXI", 2);
	if (!func_24(Global_98931.f_17711, 128))
	{
		func_222(&(Global_98931.f_17711), 128);
	}
}

void func_260(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xC69E84EBBD7166E6(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xC69E84EBBD7166E6(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_261(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_262(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0x930F8FBB8E9537CC(uParam1->f_4[iVar0]))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0x71A8BCA218722FA1(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0x930F8FBB8E9537CC(uParam1->f_10))
	{
		if (func_10(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			unk_0xE0913C01F5C0CC3D(&(uParam1->f_10));
			unk_0xE0913C01F5C0CC3D(&(uParam1->f_11));
		}
	}
}

void func_263(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
		{
			if (bParam2)
			{
				if (func_377(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_185(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_185(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_254(uParam0, 10, 0f, 1);
				}
			}
			else if (func_377(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_185(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_185(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_254(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_377(uParam0, 10) > 30f)
		{
			if (!func_50())
			{
				if (uParam0->f_112)
				{
					func_185(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_185(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_254(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_189[5 /*10*/].f_6)))
		{
			func_180(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_286(uParam0))
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0, 1);
				func_283(5, uParam0);
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_189[0 /*10*/].f_6)))
		{
			func_180(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_281(uParam0))
			{
				func_285(uParam0, 1);
				func_283(0, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_189[1 /*10*/].f_6)))
		{
			func_180(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_280(uParam0))
			{
				func_285(uParam0, 1);
				func_283(1, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x4DC6EF945236C0F7(uParam0->f_4);
				func_180(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_96(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_279(uParam0))
			{
				func_285(uParam0, 1);
				func_283(8, uParam0);
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_189[6 /*10*/].f_6)))
		{
			func_180(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_278(uParam0))
			{
				func_285(uParam0, 1);
				func_283(6, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_189[4 /*10*/].f_6)))
		{
			func_180(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_277(uParam0))
			{
				func_285(uParam0, 1);
				func_283(4, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_189[7 /*10*/].f_6)))
		{
			func_180(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_276(uParam0))
			{
				func_283(7, uParam0);
				func_285(uParam0, 1);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_189[9 /*10*/].f_6)))
		{
			func_180(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
		}
		else if (func_96(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_275(uParam0))
			{
				func_285(uParam0, 1);
				func_283(9, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_189[13 /*10*/].f_6)))
		{
			func_180(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_269(uParam0))
			{
				func_285(uParam0, 1);
				func_283(13, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_6)))
		{
			func_180(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_268(uParam0))
			{
				func_285(uParam0, 1);
				func_283(14, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_189[11 /*10*/].f_6)))
		{
			func_180(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_267(uParam0))
			{
				func_285(uParam0, 1);
				func_283(11, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_189[12 /*10*/].f_6)))
		{
			func_180(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_96(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_266(uParam0))
			{
				func_285(uParam0, 1);
				func_283(12, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_189[2 /*10*/].f_6)))
		{
			func_265(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_96(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_264(uParam0))
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0, 1);
				func_283(2, uParam0);
				func_282(uParam0);
			}
		}
	}
}

int func_264(var uParam0)
{
	float fVar0;
	
	if (!unk_0x5FEB513A4402FD59(uParam0->f_2))
	{
		if ((!unk_0x7E0C455D8C091153(uParam0->f_2) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xA04824262F150982(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_180(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_96(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xA04824262F150982(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_95(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_95(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_265(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_99(uParam0, fParam1);
	}
}

int func_266(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[12 /*10*/].f_3)))
			{
				func_180(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_95(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (unk_0xB9AA84B14E04BC20(Var0.f_0) > 2.5f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[11 /*10*/].f_3)))
			{
				func_180(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.f_0;
			}
			else if (func_96(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0xB9AA84B14E04BC20(uLocal_341) - unk_0xB9AA84B14E04BC20(Var0.f_0)) < 0f)
			{
				func_95(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_96(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_95(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_268(var uParam0)
{
	if (((((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x19DFFDAF59F973CC(unk_0xB6AE0DAE06D56288(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_5))
			{
				if ((unk_0xA04824262F150982(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x930F8FBB8E9537CC(uParam0->f_5) && !unk_0xBEB00EB4ADDC2A33(uParam0->f_5, -1)))
				{
					func_180(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_96(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xF20BCEF13A92EC03(uParam0->f_5))
		{
			func_95(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_96(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_95(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xF20BCEF13A92EC03(uParam0->f_5))
		{
			func_95(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_269(var uParam0)
{
	if (((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_270(uParam0->f_4) && unk_0xA04824262F150982(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_189[13 /*10*/].f_3)))
			{
				func_180(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_95(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_270(int iParam0)
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
	
	unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x5D9B7B3BDF1B2A78(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_274((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_273(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_271(unk_0xB6AE0DAE06D56288(iParam0, 1), Var15, Var18, Var21);
}

int func_271(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_274(Param6 - Param3) };
	Var3 = { func_274(Param9 - Param3) };
	fVar6 = func_272(Param0, Var0);
	fVar7 = func_272(Param3, Var0);
	fVar8 = func_272(Param6, Var0);
	fVar9 = func_272(Param0, Var3);
	fVar10 = func_272(Param3, Var3);
	fVar11 = func_272(Param9, Var3);
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

float func_272(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_273(struct<3> Param0, int iParam3)
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

Vector3 func_274(struct<3> Param0)
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

int func_275(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_276(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			if (unk_0x69F59C68E86FDF3D(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0x1D42B2AC093E96A6(uParam0->f_4) <= -145f || unk_0x1D42B2AC093E96A6(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0x1D42B2AC093E96A6(uParam0->f_4) <= 35f && unk_0x1D42B2AC093E96A6(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_277(var uParam0)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0x123F160AD3FBDBDE(unk_0x1329891157A54C63());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[4 /*10*/].f_3)))
			{
				func_180(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_95(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD72EC1618C933709(unk_0x1329891157A54C63());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[6 /*10*/].f_3)))
			{
				func_180(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_95(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0x03CF5B18BF9EC613(uParam0->f_4))
		{
			iVar0 = unk_0x4DC6EF945236C0F7(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xD24EA1F9FB501BB5(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, 72, 1, 0, 1);
				}
				func_95(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_280(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (unk_0xB9AA84B14E04BC20(Var0.f_0) > 3f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[1 /*10*/].f_3)))
			{
				func_180(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_95(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_281(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x653781B2157A929D(uParam0->f_4) && unk_0x0752B24E8A13FF0E(uParam0->f_4))
		{
			if (!func_16(&(Local_189[0 /*10*/].f_3)))
			{
				func_180(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_95(&(Local_189[0 /*10*/].f_3));
				func_98(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_282(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_98(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_254(uParam0, 10, 0f, 1);
	unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
}

void func_283(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_284(uParam1, iParam0);
	func_95(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_284(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_286(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xA04824262F150982(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_189[5 /*10*/].f_3)))
			{
				func_180(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_96(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_95(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_287(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_173();
	func_400(2);
	Var0 = { func_304() };
	if ((!unk_0xB318FDA0D1ABDB20(&Var0) && func_50()) && !unk_0xD994929E13CC1ED5(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xD1C83BD797927DD5();
		unk_0xB8BB626315D394F5(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (!func_114(uParam0))
			{
				if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_254(uParam0, 3, 0, 0);
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
				func_302(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_114(uParam0))
			{
				if (unk_0x01C5771BE1D8ECE5(uParam0->f_4))
				{
					func_298(uParam0, 4096, 0);
				}
				else
				{
					func_298(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_302(uParam0, &Var0);
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
				func_302(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_302(uParam0, &Var0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_302(uParam0, &Var0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
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
				func_302(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_298(uParam0, 0, 0);
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
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
				func_302(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_302(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
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
				func_302(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_297(&Var0);
			func_288(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_302(uParam0, &Var0);
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
					func_302(uParam0, &Var0);
				}
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_300(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_254(uParam0, 3, 0f, 1);
	}
}

int func_288(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_296(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_289(sParam2, iParam3, 0);
}

int func_289(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_174();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_295(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_294();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_293();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_292())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_32())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_291();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_290();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_174();
	}
	return 0;
}

void func_290()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_291()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_292()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_293()
{
	if (func_76(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_92();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_295(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_296(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_297(char* sParam0)
{
	switch (func_3(unk_0x81873881071CD9FE()))
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

void func_298(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		unk_0x1D15D99A10A15334(uParam0->f_3, 0);
		unk_0xD24EA1F9FB501BB5(uParam0->f_3);
		unk_0x7F5F0D37173E518C(uParam0->f_3, 3, 0);
		unk_0x4B9FA68A3AC8C29D(uParam0->f_3, 17, 1);
		unk_0x27CC98B7C879C320(uParam0->f_3);
		if ((func_104(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_109(uParam0->f_29)) && !bParam2)
		{
			func_299(uParam0);
		}
		else
		{
			unk_0x7F5F0D37173E518C(uParam0->f_3, 1024, 1);
			unk_0x7F5F0D37173E518C(uParam0->f_3, 131072, 1);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			else
			{
				unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
			}
			unk_0x3E27A0036E184873(0, 0);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(uParam0->f_3, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
		unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
	}
}

void func_299(var uParam0)
{
	var uVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_41(func_42(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xC24172029826A66F(uParam0->f_3, 84.9058f);
				unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xC24172029826A66F(uParam0->f_3, 68.3138f);
				unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x27CC98B7C879C320(uParam0->f_3);
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 0);
			unk_0x3E27A0036E184873(0, 0);
			unk_0xD91194CE3D1E1D77(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x8D06698D54D45131(0, 1);
				unk_0xD91194CE3D1E1D77(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x5D5CFD0EDDA0BC90(0, 151.7794f, 0);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 20000);
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			else
			{
				unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x0A29420931EAA99E(uParam0->f_29, 15f, 1))
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(uParam0->f_3, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
		unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
	}
}

void func_300(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, sParam1, uParam2, func_301(iParam3), 0);
}

int func_301(int iParam0)
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

void func_302(var uParam0, char* sParam1)
{
	if (func_303(uParam0))
	{
		func_288(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_303(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_10(unk_0x81873881071CD9FE(), uParam0->f_3, 1) < 40f && !unk_0x895C275673BCEAB0(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_304()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_305(var uParam0)
{
	return uParam0->f_118;
}

void func_306()
{
	func_335(&Local_462);
	if (func_334(&Local_462, &Local_1011))
	{
		switch (Local_1011.f_27)
		{
			case 0:
				if (Local_462.f_410 == 9)
				{
					if (!func_130(&Local_462))
					{
						if (func_333("TAXI_OBJ_CC1") || unk_0xFBACB273AA628CC5(Local_892.f_36[2]))
						{
							Local_1011.f_27++;
						}
						else if (func_163(&Local_462) != 10)
						{
							func_185(&Local_462, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_163(&Local_462) > 10 && func_163(&Local_462) != 15) && !func_130(&Local_462))
				{
					func_185(&Local_462, 15, 1, 0, 0);
					if (bLocal_1010)
					{
					}
					func_179(&Local_462, 7);
				}
				break;
			
			case 2:
				if (!Local_892.f_66)
				{
					Local_892.f_66 = 1;
					bLocal_442 = true;
				}
				if (func_104(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (func_377(&Local_462, 11) > 17f || func_104(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					func_185(&Local_462, 95, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((unk_0x48E480685981C7D4() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_163(&Local_462) > 10 && func_163(&Local_462) != 16) && !func_130(&Local_462))
				{
					func_185(&Local_462, 16, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				break;
			
			case 4:
				if (func_104(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (func_377(&Local_462, 11) > 8f || func_104(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					func_185(&Local_462, 94, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((unk_0x48E480685981C7D4() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_377(&Local_462, 11) > 20f || func_104(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_445)
					{
						iLocal_445 = 1;
					}
					if (!bLocal_443)
					{
						func_185(&Local_462, 96, 1, 0, 0);
						bLocal_443 = true;
						if (bLocal_1010)
						{
						}
					}
				}
				else if ((unk_0x48E480685981C7D4() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_377(&Local_462, 18) > unk_0x3ECD26BA4F631EE2(8f, 16f))
				{
				}
				break;
			}
	}
	func_307(&Local_462, &uLocal_1041, &Local_1011, bLocal_1010);
}

int func_307(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_315(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_132(uParam0, 2))
	{
		if (func_314(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x48E480685981C7D4() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_313(uParam0))
				{
					uParam2->f_7 = { func_312(uParam1) };
					func_288(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_50())
				{
					uParam2->f_13 = { func_188() };
					if (unk_0xD994929E13CC1ED5(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_223(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_254(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_131(uParam0))
				{
					if (func_50())
					{
						func_254(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_309() };
						if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_50())
				{
					uParam2->f_19 = { func_304() };
				}
				else
				{
					func_223(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_254(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_132(uParam0, 14) && !func_50()) && !func_131(uParam0)) && func_377(uParam0, 18) > 1f)
				{
					func_254(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_50())
				{
					if (func_377(uParam0, 18) > 1f)
					{
						if (!unk_0xB318FDA0D1ABDB20(&(uParam2->f_1)))
						{
							func_308(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_50())
				{
					func_223(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_254(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_308(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_296(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_289(sParam2, iParam4, 0);
}

struct<6> func_309()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x7281387C8D4EC316(&(Global_14561[iVar7 /*6*/])))
			{
				return Global_14561[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x7281387C8D4EC316(&(Global_14561[iVar8 /*6*/])))
					{
						return Global_14561[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_310(var uParam0)
{
	int iVar0;
	
	iVar0 = func_311(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_222(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_129(), 24);
	}
}

int func_311(var uParam0)
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

struct<6> func_312(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_222(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_313(var uParam0)
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

int func_314(var uParam0)
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

void func_315(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_313(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_132(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_163(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_330(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_50())
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
						func_329(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_326(uParam0, Var0, func_328(uParam0, 2));
				}
				if (func_24(uParam0->f_98, 4))
				{
					func_254(uParam0, 16, 0, 0);
					func_213(uParam0, 0, 0);
				}
				func_149(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_377(uParam0, 16) > 1f)
				{
					func_151(1);
					if (uParam0->f_411 == 9)
					{
						func_207("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_207("TAXI_VIP_RETURN", 7500, 1);
					}
					func_254(uParam0, 16, 0, 0);
					func_213(uParam0, 0, 0);
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
					func_329(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_300(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_377(uParam0, 16) > func_148(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_50()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_163(uParam0))
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
				func_329(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_330(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_288(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_185(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_254(uParam0, 16, 0, 0);
				func_185(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_24(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_332(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_329(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_254(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_207("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_207("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
					{
						uParam0->f_9 = func_177(uParam0->f_17, 1);
					}
					else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
					{
						unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
						unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
						unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
					}
				}
				func_185(uParam0, 10, 1, 0, 0);
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
				func_187(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_300(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
					{
						uParam0->f_9 = func_177(uParam0->f_17, 1);
					}
					else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
					{
						unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
						unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
						unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
					}
				}
				func_185(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_325(uParam0, 33554432, Var0, "", 1, 8);
				func_254(uParam0, 16, 0, 0);
				func_185(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_50())
				{
					func_324(uParam0, 0);
					func_222(&(uParam0->f_44), 4);
					func_254(uParam0, 16, 0, 0);
					func_185(uParam0, 13, 0, 0, 0);
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
				func_187(&Var0);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_377(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_187(&Var0);
					}
					func_322(Var0, uParam1);
					func_222(&(uParam0->f_81), 67108864);
					func_254(uParam0, 16, 0, 0);
					func_254(uParam0, 11, 0, 0);
					func_213(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_377(uParam0, 11) > uParam0->f_36)
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
							func_187(&Var0);
						}
					}
					func_322(Var0, uParam1);
					func_254(uParam0, 11, 0, 0);
					func_254(uParam0, 16, 0, 0);
					func_213(uParam0, 0, 0);
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
					func_187(&Var0);
				}
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
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
				func_187(&Var0);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
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
				func_187(&Var0);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_187(&Var0);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				func_222(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 1, 0, 8);
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
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
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
					func_321(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_321(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_322(Var0, uParam1);
				func_330(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 6, 0f, 1);
				func_213(uParam0, 0, 0);
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
					func_321(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_321(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_322(Var0, uParam1);
				func_330(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 6, 0f, 1);
				func_213(uParam0, 0, 0);
				break;
			
			case 12:
				func_207("TAXI_OBJ_GYB", 3500, 1);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_207("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_207("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_207("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
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
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_98, 268435456))
				{
					func_207("TAXI_OBJ_CYI_01", 7500, 1);
					func_222(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_187(&Var0);
				func_322(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_187(&Var0);
				func_322(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_187(&Var0);
				func_322(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 33:
				func_207("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_82, 8192))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_187(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_322(Var0, uParam1);
						}
						else
						{
							func_329(uParam0, &Var0, 0, 0, 8);
						}
						func_222(&(uParam0->f_82), 8192);
						func_254(uParam0, 16, 0, 0);
						func_254(uParam0, 11, 0, 0);
						func_213(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_187(&Var0);
					func_329(uParam0, &Var0, 0, 0, 8);
					func_222(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_187(&Var0);
					func_329(uParam0, &Var0, 0, 0, 8);
					func_222(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 46, 1, 0, 0);
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
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_213(uParam0, 0, 0);
				break;
			
			case 139:
				func_207("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_185(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x2E0A9E3291F398E3(0, 120);
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
					func_222(&(uParam0->f_82), 268435456);
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
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x2E0A9E3291F398E3(0, 100);
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
					func_222(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_207("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_213(uParam0, 0, 0);
				func_185(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_50())
				{
					func_207("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_213(uParam0, 0, 0);
					func_185(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_207("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_213(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_81, 1))
				{
					func_320(uParam0, 1, Var0, "_sick1", 8);
					func_22(&(uParam0->f_81), 2);
				}
				else if (!func_24(uParam0->f_81, 2))
				{
					func_320(uParam0, 2, Var0, "_sick2", 8);
					func_22(&(uParam0->f_81), 1);
				}
				func_330(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
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
				func_222(&(uParam0->f_81), 2097152);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 16, 0, 0);
				func_330(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_213(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_330(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_330(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_330(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_81, 4))
				{
					func_320(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_81, 8))
				{
					func_320(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_320(uParam0, 8, Var0, "_turns3", 8);
					func_22(&(uParam0->f_81), 4);
					func_22(&(uParam0->f_81), 8);
				}
				func_330(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_319(uParam0))
				{
					func_326(uParam0, Var0, func_328(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_300(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_332(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_288(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_332(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_332(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_330(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 128);
					func_22(&(uParam0->f_83), 256);
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 256);
					func_22(&(uParam0->f_83), 512);
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 512);
					func_22(&(uParam0->f_83), 128);
					func_254(uParam0, 16, 0, 0);
				}
				func_213(uParam0, 0, 0);
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
						func_187(&Var0);
					}
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 1);
					func_22(&(uParam0->f_83), 2);
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_187(&Var0);
					}
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 4);
					}
					else
					{
						func_22(&(uParam0->f_83), 1);
					}
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_187(&Var0);
					}
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 4);
					func_22(&(uParam0->f_83), 1);
					func_254(uParam0, 16, 0, 0);
				}
				func_330(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 4096))
				{
					func_325(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 8192))
				{
					func_325(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_330(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 16384))
				{
					func_325(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 32768))
				{
					func_325(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_330(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_24(uParam0->f_82, 8))
					{
						func_318(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 16))
					{
						func_318(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 32))
					{
						func_318(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_330(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_213(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_332(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_330(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_254(uParam0, 16, 0, 0);
					func_213(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_330(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_330(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_81, 65536))
				{
					func_325(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 131072))
				{
					func_325(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_213(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_319(uParam0))
				{
					func_326(uParam0, Var0, func_328(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_300(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_24(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 8);
					func_22(&(uParam0->f_83), 16);
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 16);
					func_22(&(uParam0->f_83), 32);
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 64);
					}
					else
					{
						func_22(&(uParam0->f_83), 8);
					}
					func_254(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_222(&(uParam0->f_83), 64);
					func_22(&(uParam0->f_83), 8);
					func_254(uParam0, 16, 0, 0);
				}
				func_330(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_50())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_329(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_326(uParam0, Var0, func_328(uParam0, 65));
					func_213(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_50())
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
					func_329(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_326(uParam0, Var0, func_328(uParam0, 66));
					func_213(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_50())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								func_330(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								func_330(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_332(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_330(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_254(uParam0, 16, 0, 0);
								func_213(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_329(uParam0, &Var0, 0, 0, 8);
									func_254(uParam0, 16, 0, 0);
									func_254(uParam0, 11, 0, 0);
									func_213(uParam0, 0, 0);
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
									func_187(&Var0);
									func_329(uParam0, &Var0, 0, 0, 8);
									func_254(uParam0, 16, 0, 0);
									func_254(uParam0, 11, 0, 0);
									func_213(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_329(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_185(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_330(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_82, 1))
				{
					func_318(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 2))
				{
					func_318(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 4))
				{
					func_318(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_213(uParam0, 0, 0);
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
				func_332(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_300(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_254(uParam0, 16, 0, 0);
				func_330(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_319(uParam0))
				{
					func_326(uParam0, Var0, func_328(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_300(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_317(uParam0, Var0, 8);
				}
				func_330(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_83, 1024))
				{
					func_222(&(uParam0->f_83), 1024);
					func_254(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2048))
				{
					func_222(&(uParam0->f_83), 2048);
					func_254(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4096))
				{
					func_222(&(uParam0->f_83), 4096);
					func_254(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_187(&Var0);
					func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_213(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_82, 1024))
				{
					func_318(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_82), 2048);
				}
				else if (!func_24(uParam0->f_82, 2048))
				{
					func_318(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_213(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_330(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 52, 1, 0, 0);
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
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_300(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_319(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_329(uParam0, &Var0, 0, 0, 8);
						func_185(uParam0, 52, 1, 0, 0);
						func_254(uParam0, 16, 0, 0);
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
						func_329(uParam0, &Var0, 0, 0, 8);
						func_254(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_332(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_254(uParam0, 16, 0, 0);
					func_213(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_330(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_254(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
				{
					func_207("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_213(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_81, 262144))
				{
					func_325(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_325(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_325(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_330(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_316(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_82, 134217728))
				{
					func_316(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_330(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 100:
				func_207("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_213(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_187(&Var0);
				}
				func_222(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_187(&Var0);
				}
				func_222(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_329(uParam0, &Var0, 0, 0, 8);
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
					func_187(&Var0);
				}
				func_222(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_82, 65536))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
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
						func_187(&Var0);
						func_322(Var0, uParam1);
						func_222(&(uParam0->f_82), 65536);
						func_254(uParam0, 16, 0, 0);
						func_254(uParam0, 11, 0, 0);
						func_213(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_82, 131072))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_187(&Var0);
						func_322(Var0, uParam1);
						func_222(&(uParam0->f_82), 131072);
						func_254(uParam0, 16, 0, 0);
						func_254(uParam0, 11, 0, 0);
						func_213(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_222(&(uParam0->f_82), 8388608);
				}
				else if (!func_24(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_222(&(uParam0->f_82), 16777216);
				}
				else if (!func_24(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_222(&(uParam0->f_82), 33554432);
				}
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_332(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_187(&Var0);
					func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_329(uParam0, &Var0, 0, 0, 8);
				}
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_322(Var0, uParam1);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_332(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_331(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_222(&(uParam0->f_81), 2097152);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_187(&Var0);
				func_322(Var0, uParam1);
				func_222(&(uParam0->f_81), 67108864);
				func_254(uParam0, 16, 0, 0);
				func_254(uParam0, 11, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_325(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_300(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_185(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_81, 268435456))
				{
					func_325(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_185(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_207("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_213(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_325(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
						{
							func_300(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_325(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_185(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_207("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_213(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_288(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_254(uParam0, 16, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_81, 16777216))
				{
					func_325(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_213(uParam0, 0, 0);
				break;
			
			case 88:
				func_207("TAXI_TIEFLEE", 7500, 1);
				func_213(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_98, 536870912))
				{
					func_207("TAXI_OBJ_CYI_1B", 7500, 1);
					func_222(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_213(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_187(&Var0);
				func_329(uParam0, &Var0, 0, 0, 8);
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
				func_329(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_329(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 0, 0);
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
				func_329(uParam0, &Var0, 0, 0, 8);
				func_213(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_329(uParam0, &Var0, 1, 0, 8);
				func_185(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_207("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_185(uParam0, 0, 0, 0, 0);
				func_213(uParam0, 0, 0);
				break;
			}
	}
}

void func_316(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_222(&(uParam0->f_82), iParam1);
	func_254(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_187(&Param2);
	}
	func_288(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_317(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_82, 64))
	{
		func_222(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_82, 128))
	{
		func_222(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x2E0A9E3291F398E3(1, 3), 24);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_254(uParam0, 16, 0, 0);
}

void func_318(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_222(&(uParam0->f_82), iParam1);
	func_254(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_187(&Param2);
		}
	}
	func_288(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_319(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_320(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_222(&(uParam0->f_81), iParam1);
	func_254(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_288(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_232(*uParam0, iVar1))
		{
			func_223(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_187(sParam2);
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

void func_322(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_323(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_222(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_323(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xB318FDA0D1ABDB20(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_324(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_207("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_207("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_207("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_207("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_207("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_207("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_207("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_207("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_207("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_207("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_207("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_207("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_207("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_325(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_222(&(uParam0->f_81), iParam1);
	func_254(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_187(&Param2);
	}
	func_288(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_326(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_254(uParam0, 16, 0, 0);
	func_254(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
	{
		unk_0xD6CF200BD8E54A3B(uParam0->f_3, &cParam1, func_327(uParam0));
	}
}

char* func_327(var uParam0)
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

char* func_328(var uParam0, int iParam1)
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

int func_329(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_254(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_254(uParam0, 17, 0f, 1);
	}
	func_213(uParam0, iParam2, 0);
	return func_288(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_330(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_331(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_296(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_289(sParam2, iParam4, 0);
}

void func_332(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_232(*uParam0, iVar1))
		{
			func_223(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_187(sParam2);
				}
				else
				{
					func_187(sParam2);
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

int func_333(char* sParam0)
{
	if (!unk_0x4357449749A521B1(sParam0))
	{
		if (func_167(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_334(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_132(uParam0, 9));
}

void func_335(var uParam0)
{
	if (func_132(uParam0, 17))
	{
		if (!func_132(uParam0, 14))
		{
			if (!func_131(uParam0))
			{
				if (!func_50())
				{
					func_139(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_336(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[3]))
	{
		uParam0->f_4[0] = Global_97643.f_225[3];
		uParam0->f_4[1] = Global_97643.f_225[4];
		uParam0->f_4[2] = Global_97643.f_225[5];
		unk_0xD768713E73165208(uParam0->f_4[0], 1, 1);
		unk_0xD768713E73165208(uParam0->f_4[1], 1, 1);
		unk_0xD768713E73165208(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x206897C6DBC12488(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = unk_0x206897C6DBC12488(26, uParam0->f_45[1], unk_0xB07F27EC3B05E4EA(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = unk_0x206897C6DBC12488(26, uParam0->f_45[2], unk_0xB07F27EC3B05E4EA(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[6]))
	{
		uParam0->f_4[3] = Global_97643.f_225[6];
		uParam0->f_4[4] = Global_97643.f_225[7];
		unk_0xD768713E73165208(uParam0->f_4[3], 1, 1);
		unk_0xD768713E73165208(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x206897C6DBC12488(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = unk_0x206897C6DBC12488(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_222[0]))
	{
		uParam0->f_10 = Global_97643.f_222[0];
		uParam0->f_11 = Global_97643.f_222[1];
		unk_0xD768713E73165208(uParam0->f_10, 1, 1);
		unk_0xD768713E73165208(uParam0->f_11, 1, 1);
	}
	else
	{
		uParam0->f_10 = unk_0xE00F8DEA9778FC87(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_11 = unk_0xE00F8DEA9778FC87(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var5 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_4[iVar1]))
		{
			unk_0x1E2B48EE3EC55DCF(uParam0->f_4[iVar1]);
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			switch (iVar1)
			{
				case 0:
					unk_0xF88735A9354A45F3(0, uParam0->f_4[1], 0);
					unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xCEF5C750AC257B88(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xCEF5C750AC257B88(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					unk_0xF88735A9354A45F3(0, uParam0->f_4[0], 0);
					unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xCEF5C750AC257B88(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xCEF5C750AC257B88(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					unk_0xF88735A9354A45F3(0, uParam0->f_4[0], 0);
					unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xCEF5C750AC257B88(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xCEF5C750AC257B88(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					unk_0xF88735A9354A45F3(0, uParam0->f_4[4], 0);
					unk_0xAF625598EDA64AD3(0, uParam0->f_4[4], 3, 2, 2);
					unk_0x95F2470F44364D4F(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0xF88735A9354A45F3(0, uParam0->f_4[3], 0);
					unk_0xAF625598EDA64AD3(0, uParam0->f_4[3], 3, 2, 2);
					unk_0x95F2470F44364D4F(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x5FEB513A4402FD59((*uParam0)[iVar1]) && (unk_0xFA1212DE7C455679((*uParam0)[iVar1], 242628503) != 1 || unk_0xFA1212DE7C455679((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0x1D15D99A10A15334((*uParam0)[iVar1], 1);
			unk_0x1E2B48EE3EC55DCF((*uParam0)[iVar1]);
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			func_337(uParam0, iVar1, unk_0x2E0A9E3291F398E3(1000, 2000));
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_337(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0xF88735A9354A45F3(0, (*uParam0)[1], 0);
			unk_0xAF625598EDA64AD3(0, (*uParam0)[1], 3, 2, 2);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0xF88735A9354A45F3(0, (*uParam0)[0], 0);
			unk_0xAF625598EDA64AD3(0, (*uParam0)[0], 3, 2, 2);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xF88735A9354A45F3(0, (*uParam0)[0], 0);
			unk_0xAF625598EDA64AD3(0, (*uParam0)[0], 3, 2, 2);
			unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_338()
{
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_45[0]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_45[1]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_45[2]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_45[3]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(Local_892.f_45[4]))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("stretch")))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("superd")))
	{
		func_248("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("oddjobs@taxi@gyn@cc@intro"))
	{
		func_248("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_248("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_248("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}

bool func_339(var uParam0)
{
	return uParam0->f_117;
}

int func_340(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_346((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_346((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_346((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_344(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0x7404950238A154C2(uParam0->f_4, 0))
			{
				if (func_346(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_287(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_341(uParam0);
	}
	return 0;
}

void func_341(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_343()) && !func_140(uParam0)) || ((uParam0->f_411 != 9 && func_218(uParam0, 1)) && !func_140(uParam0)))
		{
			uVar0 = func_342(uParam0->f_4);
			unk_0x3C6E68D2D7F41A39(&uVar0);
			uParam0->f_4 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			unk_0xD768713E73165208(uParam0->f_4, 1, 0);
			func_150(uParam0);
			func_143(uParam0, 0);
		}
	}
}

var func_342(var uParam0)
{
	return uParam0;
}

int func_343()
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
				{
					if (unk_0xCC6B00B8460CDA0E(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_344(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_345(uParam0, 0, 1))
			{
				func_287(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_345(uParam0, 0, 4))
			{
				func_287(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_345(uParam0, 0, 8))
			{
				func_287(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_345(uParam0, 1, 1))
			{
				func_287(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_345(uParam0, 0, 1))
			{
				func_287(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_114(uParam0))
			{
				func_287(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_345(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (!unk_0x895C275673BCEAB0(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_185(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_185(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_346(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x81873881071CD9FE();
	if (!unk_0x930F8FBB8E9537CC(iVar0) && !unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_352(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_350(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_349(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_347(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_347(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (iParam7 && unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0x4DC6EF945236C0F7(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0x4DC6EF945236C0F7(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar0))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (unk_0x70847137E3B37A59(iParam0))
			{
				if (unk_0x5470663D3086F340(iParam0) == unk_0x81873881071CD9FE())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
		{
			if (unk_0x515B65C19A5CA9B1(iParam0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA696433F321F3321(unk_0x81873881071CD9FE()))
	{
		if (unk_0x5460056E19D91D7F(iParam0))
		{
			return 1;
		}
	}
	if (func_348(unk_0x81873881071CD9FE(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xD81BC0FD4D47CC04(iParam0) && func_9(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), unk_0xE68E6B44DABA9C05(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iParam0))
		{
			return 1;
		}
		if (!unk_0x930F8FBB8E9537CC(uParam1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam1, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_348(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xADBE95599A01932F(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1)) < 2.5f)
			{
				if (unk_0x598CCC94D95857D9(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_349(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2B738BBCCA41F260(uParam0, 4))
	{
		if (unk_0xADBE95599A01932F(uParam0) && !unk_0xC0DEC39E5B9D1886(iParam0))
		{
			if (unk_0x515B65C19A5CA9B1(uParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x930F8FBB8E9537CC(uParam1))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	if (unk_0x544121698BDAB87E(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x03322A5547317A3D(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x2B738BBCCA41F260(uParam0, 2))
	{
		if (unk_0xADBE95599A01932F(uParam0))
		{
			if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x8F1CCE5AF629C4D3(iParam1), 0))
			{
				iVar3 = unk_0xE68E6B44DABA9C05(unk_0x8F1CCE5AF629C4D3(iParam1), 0);
			}
			if (unk_0x2881A00480A747EC(iParam0) || func_351(iVar3))
			{
				if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x6DF2A27FBC647AEC((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam0, -1) != 0)
			{
				if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_10(unk_0x81873881071CD9FE(), iParam0, 1) < 40f)
						{
							if (unk_0x257893CA44B56646(unk_0x1329891157A54C63(), &uVar1))
							{
								if ((unk_0xCF8AA94BAD0F766A(uVar1) && unk_0x522C7043B2B961F9(iVar1) == iParam0) || (unk_0xCF0C46D719D5302C(iVar1) && unk_0x8F1CCE5AF629C4D3(iVar1) == unk_0xB0B9E53CEFDB16AA(iParam0, -1)))
								{
									if ((unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && unk_0xCAD9951C953F5B2D(0, 24)) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xCAD9951C953F5B2D(0, 69)))
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

int func_352(int iParam0, var uParam1)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
			{
				if (unk_0x598CCC94D95857D9(iParam0, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x48E480685981C7D4();
						}
						else if ((unk_0x48E480685981C7D4() - uParam1->f_1) > uParam1->f_3)
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

void func_353(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xB318FDA0D1ABDB20(&(uParam0->f_124)) && func_50())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_50())
				{
					StringCopy(&(uParam0->f_124), func_129(), 24);
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

void func_354(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_232(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_232(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_232(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_223(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x48E480685981C7D4();
							}
						}
						else
						{
							func_23(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_232(Local_342.f_1[iVar0 /*4*/], 4) && !func_232(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_223(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_287(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_355(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_132(uParam0, 27))
	{
		func_179(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_377(uParam0, 27) > 5f)
	{
		if (func_346(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_254(uParam0, 27, 0, 0);
			func_254(uParam0, 10, 0, 0);
			func_344(uParam0, &uVar0, uParam1);
		}
		func_341(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_356(uParam0);
	}
	if ((((!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()) && (unk_0x42E36F2D658EB2FF(*uParam0) && !unk_0x6B6362BE9BFD1ACA(*uParam0))) && (unk_0x42E36F2D658EB2FF(uParam0->f_1) && !unk_0x6B6362BE9BFD1ACA(uParam0->f_1))) && !unk_0xDBD19E93A4D01117()) && !func_50())
	{
		if (func_377(uParam0, 26) > 10f)
		{
			func_139(uParam0, 26, 0);
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
		}
	}
	else if (func_132(uParam0, 26))
	{
		func_139(uParam0, 26, 0);
	}
	return 0;
}

void func_356(var uParam0)
{
	if (!func_376(uParam0->f_429))
	{
		uParam0->f_429 = func_375();
		func_366(&(uParam0->f_429), 0, 0, unk_0x2E0A9E3291F398E3(4, 7), 0, 0, 0);
	}
	else if (func_357(uParam0->f_429))
	{
		func_287(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_357(int iParam0)
{
	return func_358(func_375(), iParam0);
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_376(iParam1) || !func_376(iParam0))
	{
		return 1;
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
	return 0;
}

int func_359(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_360(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_361(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_362(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_363(int iParam0)
{
	return iParam0 & 15;
}

var func_364(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_365(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_365(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_366(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_364(*uParam0);
	iVar1 = func_363(*uParam0);
	iVar2 = func_362(*uParam0);
	iVar3 = func_361(*uParam0);
	iVar4 = func_360(*uParam0);
	iVar5 = func_359(*uParam0);
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
	iVar6 = func_374(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_374(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_367(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_367(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_373(uParam0, iParam1);
	func_372(uParam0, iParam2);
	func_371(uParam0, iParam3);
	func_370(uParam0, iParam5);
	func_369(uParam0, iParam4);
	func_368(uParam0, iParam6);
}

void func_368(var uParam0, int iParam1)
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

void func_369(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_363(*uParam0);
	iVar1 = func_364(*uParam0);
	if (iParam1 < 1 || iParam1 > func_374(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_370(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_371(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_372(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_373(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_374(int iParam0, int iParam1)
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

int func_375()
{
	var uVar0;
	
	func_373(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_372(&uVar0, unk_0x25B31B877207A3A9());
	func_371(&uVar0, unk_0x0C937048CF6952B5());
	func_369(&uVar0, unk_0x8B6B3DD84CE74978());
	func_370(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_368(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

int func_376(int iParam0)
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
	iVar0 = func_359(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_360(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_361(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_364(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_363(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_362(iParam0);
	if (iVar5 < 1 || iVar5 > func_374(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_377(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_180(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_96(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_378()
{
	func_379(&Local_462);
	func_396();
}

void func_379(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_400(2);
	}
}

int func_380(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_50() && func_377(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (unk_0x7404950238A154C2(uParam0->f_4, 0))
			{
				if (unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_232(uParam0->f_85, 32))
					{
						if (!unk_0x01C5771BE1D8ECE5(uParam0->f_4))
						{
							func_298(uParam0, 4160, 0);
						}
						else
						{
							func_298(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_298(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_298(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_298(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x48E480685981C7D4() % 1000) < 50)
	{
	}
	return 0;
}

void func_381(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0->f_8))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_8));
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_9))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_9));
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_10))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_10));
	}
}

int func_382(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_383()
{
	func_385(&Local_462, 7);
	Local_462.f_410 = 0;
	Local_462.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_462.f_33 = 34.4f;
	Local_462.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_462.f_34 = 251.9658f;
	Local_892.f_41[0] = joaat("a_m_y_business_02");
	Local_892.f_41[1] = joaat("a_m_y_business_02");
	Local_892.f_41[2] = joaat("a_m_y_business_02");
	Local_892.f_45[0] = joaat("a_f_y_beach_01");
	Local_892.f_45[1] = joaat("a_f_y_beach_01");
	Local_892.f_45[2] = joaat("a_f_y_beach_01");
	Local_892.f_45[3] = joaat("a_f_y_beach_01");
	Local_892.f_45[4] = joaat("a_m_y_business_01");
	func_384(&Local_462, 3, 6);
}

void func_384(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_385(var uParam0, int iParam1)
{
	func_395(1);
	func_153();
	func_6(&(uParam0->f_244));
	func_394(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_24(Global_98931.f_17711, 4))
	{
		func_222(&(Global_98931.f_17711), 4);
	}
	func_389(uParam0);
	func_387(uParam0);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	uParam0->f_102 = (func_386(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x86B83C54AF71BD12("TAXI", 2);
}

int func_386(int iParam0)
{
	return Global_98931.f_17711.f_39[iParam0];
}

void func_387(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0:
			func_388(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_388(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_388(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_388(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_388(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_388(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_388(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_388(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_388(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_388(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_388(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_389(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_393(uParam0, 3);
			func_392(uParam0, 14);
			break;
		
		case 1:
			func_393(uParam0, 14);
			func_392(uParam0, 8);
			break;
		
		case 2:
			func_393(uParam0, 8);
			func_392(uParam0, 7);
			break;
		
		case 3:
			func_393(uParam0, 15);
			func_392(uParam0, 6);
			break;
		
		case 4:
			func_393(uParam0, 0);
			func_392(uParam0, 3);
			break;
		
		case 5:
			func_393(uParam0, 6);
			func_392(uParam0, 7);
			break;
		
		case 6:
			func_393(uParam0, 8);
			func_392(uParam0, 15);
			break;
		
		case 7:
			func_393(uParam0, 8);
			func_392(uParam0, 14);
			break;
		
		case 8:
			func_393(uParam0, 7);
			func_392(uParam0, 15);
			break;
		
		case 9:
			func_393(uParam0, unk_0x2E0A9E3291F398E3(0, 17));
			iVar0 = func_391((uParam0->f_418.f_2 + unk_0x2E0A9E3291F398E3(1, 17)), 0, 16);
			func_392(uParam0, iVar0);
			func_390(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_390(var uParam0)
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

int func_391(int iParam0, int iParam1, int iParam2)
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

void func_392(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_393(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_394(var uParam0)
{
	uParam0->f_2 = unk_0x81873881071CD9FE();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_42() };
	uParam0->f_17 = { func_42() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_139(uParam0, 32, 0);
}

void func_395(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_97987, unk_0x11CA2334E341B424(), 24);
		Global_97981 = 1;
	}
	else
	{
		StringCopy(&Global_97987, "NULL", 24);
		Global_97981 = 0;
	}
}

void func_396()
{
	func_399(&Local_892);
	func_181();
	func_398();
	func_397();
	unk_0xC23A229F78DAD92A();
}

void func_397()
{
	unk_0x954FB3FC1E04A7A9();
	unk_0xD8323B49BAE93D80("oddjobs@taxi@gyn@cc@hotbox");
}

void func_398()
{
	unk_0x887F4488DA99FD21(Local_892.f_41[0]);
	unk_0x887F4488DA99FD21(Local_892.f_41[1]);
	unk_0x887F4488DA99FD21(Local_892.f_41[2]);
}

void func_399(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D675D69D18A10E9(uParam0->f_73[iVar0]))
		{
			unk_0x82463470A763AABA(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}

void func_400(int iParam0)
{
	Global_97643.f_22 = iParam0;
}

