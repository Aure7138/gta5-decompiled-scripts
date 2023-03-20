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
	uLocal_77 = unk_0x831D4AD840B7278A();
	uLocal_78 = unk_0x321E776DB596AB12();
	Local_83 = { 500f, 500f, 500f };
	fLocal_450 = 98f;
	fLocal_451 = 55f;
	fLocal_452 = 60f;
	iLocal_999 = 1;
	Local_1001 = { -1284.367f, 295.7437f, 63.83044f };
	Local_1004 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0x2170E7BC25114A22(67))
	{
		func_402(2);
		func_398();
	}
	unk_0x52A56383568A954B(1);
	func_385();
	while (true)
	{
		if (unk_0x7887B64A08364778(Local_463.f_2))
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
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (func_384(&Local_463))
	{
		func_383(&Local_463);
		if (Local_463.f_410 > 0)
		{
			if (func_382(&Local_463, 0))
			{
				func_380();
			}
		}
		else if (func_379(&Local_463, 31) > 5f)
		{
			func_402(2);
			func_398();
		}
	}
	else
	{
		func_357(&Local_463, &uLocal_1083);
		func_356(&Local_463);
		func_355(&Local_463, &uLocal_1000, 0);
		if (Local_463.f_410 < 9)
		{
			func_342(&Local_463, &Local_893, &uLocal_1083);
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
			if (!func_341(&Local_463))
			{
				if (!iLocal_1009)
				{
					if (func_340())
					{
						func_338(&Local_893);
						iLocal_1009 = 1;
					}
				}
				func_308();
			}
			else
			{
				func_289(&Local_463, "Taxi Not Driveable", func_307(&Local_463));
			}
		}
		if (Local_463.f_410 > 3)
		{
			if (!bVar3)
			{
				if (unk_0xA4DB44DF73EF4FE5(Local_463.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0xB529B2A4B7C64D6D(Local_893.f_4[iVar0], 0))
						{
							if (unk_0x7D720C677145C91C(Local_893.f_4[iVar0], Local_463.f_4, 1))
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
					if (!unk_0xB529B2A4B7C64D6D(Local_893.f_4[iVar1], 0))
					{
						if (!unk_0x00B5B0B68211D89B(Local_893.f_4[iVar1]))
						{
							unk_0x37338B7B7C4982DC(Local_893.f_4[iVar1]);
							unk_0x873418BFBF9A6780(&uVar2);
							unk_0x456121A0AAC868D4(&uVar2);
							unk_0xBB8F1D58B7578137(0, Local_463.f_2, 1000f, -1, 0, 0);
							unk_0xCFE67FBB69F1C410(uVar2);
							unk_0x8B06B801B92CEC2D(Local_893.f_4[iVar1], uVar2);
							unk_0x873418BFBF9A6780(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_463.f_410 == 9)
		{
			func_265(&Local_463, 0, 1);
			func_264(&Local_463, &Local_893, 1128792064);
		}
		switch (Local_463.f_410)
		{
			case 0:
				func_263(&(Local_995[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_262(&Local_463, &Local_995);
				func_260();
				func_258();
				func_257();
				func_256(&Local_463, 16, 4f, 0);
				func_253(&Local_463, Local_1001, Local_1004, &Local_893);
				func_252(&Local_463);
				func_251(&Local_463, 1);
				break;
			
			case 1:
				if (func_248())
				{
					func_247();
					func_227();
					func_226(&Local_463);
					func_224(&(Local_463.f_100), 8);
					func_224(&(Local_463.f_100), 2048);
					func_224(&(Local_463.f_100), 256);
					Local_463.f_14 = { Local_1001 };
					Local_463.f_49 = 0;
					func_251(&Local_463, 3);
				}
				break;
			
			case 3:
				if (func_216(&Local_463, 3))
				{
					func_215(&Local_463, 1, 0);
					func_214(&uLocal_1100, Local_1001, 20f, 0);
					func_251(&Local_463, 5);
				}
				break;
			
			case 5:
				func_213();
				if (func_193(&Local_463, &Local_893))
				{
					unk_0xD2C328D8F4EE2645(Local_463.f_428, &(Local_463.f_42), -1);
					func_251(&Local_463, 15);
				}
				break;
			
			case 15:
				if (func_191(&Local_463, &Local_893))
				{
					func_187(&Local_463, 8, 1, 0, 0);
					if (!unk_0xB529B2A4B7C64D6D(Local_893[0], 0))
					{
						unk_0x237B0CFB6EEBD3BA(Local_893[0], 26, 1);
					}
					if (!unk_0xB529B2A4B7C64D6D(Local_893[1], 0))
					{
						unk_0x237B0CFB6EEBD3BA(Local_893[1], 26, 1);
					}
					if (!unk_0xB529B2A4B7C64D6D(Local_893[2], 0))
					{
						unk_0x237B0CFB6EEBD3BA(Local_893[2], 26, 1);
					}
					func_186(&Local_463);
					func_184(&Local_463, 0);
					func_183();
					func_181(&Local_463, 11);
					func_256(&Local_463, 10, 0, 0);
					func_256(&Local_463, 6, 0, 0);
					func_180();
					Local_463.f_36 = unk_0xB5FEA1F26F05B9F5(3f, 10f);
					func_178(&Local_893);
					func_251(&Local_463, 9);
				}
				if (unk_0xA4DB44DF73EF4FE5(Local_463.f_4, 0))
				{
					if (!unk_0x04D83291EB9DE51D(Local_463.f_2, Local_463.f_4, 0))
					{
						func_174(&Local_463, &Local_893);
						func_251(&Local_463, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_1008)
				{
				}
				func_171(&Local_463);
				if (func_128(&Local_463, &Local_893, &Local_1012, &uLocal_1042))
				{
					func_127(&Local_1012, -1, 1);
					if (func_126(&Local_893))
					{
						func_125(&Local_463, 0);
					}
					func_124(&Local_893);
					func_122(&Local_463);
					func_118(&Local_463);
					func_117(&Local_463);
					func_251(&Local_463, 27);
				}
				break;
			
			case 27:
				if (func_106(&Local_463, 1))
				{
					unk_0x873418BFBF9A6780(&uVar2);
					unk_0x456121A0AAC868D4(&uVar2);
					unk_0x1D2CBA8F2F00D745(0, Local_893.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x1EDFE8C8C6BB7CF0(0, 0);
					if (unk_0x9F6C85320868987F(Local_463.f_29, 4f, 1))
					{
						unk_0xD14D1FD0ED7FA7A1(0, Local_463.f_29, 4f, 0);
					}
					else
					{
						unk_0xA7D2EDC881768869(0, 350.8689f, 0);
						unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0xCFE67FBB69F1C410(uVar2);
					unk_0x8B06B801B92CEC2D(Local_463.f_3, uVar2);
					unk_0x7D99F00F48D15ADB(Local_463.f_3, 1);
					func_251(&Local_463, 29);
				}
				break;
			
			case 29:
				if (!unk_0x00B5B0B68211D89B(Local_463.f_3))
				{
					if (func_105(Local_463.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x12A60388636C9B1C(Local_463.f_3, 60, 1);
					}
				}
				if (func_78(&Local_463, &uLocal_1090))
				{
					func_11(1, &Local_463, 0);
					func_256(&Local_463, 31, 0, 0);
					func_251(&Local_463, 30);
				}
				break;
			
			case 30:
				if (!unk_0x00B5B0B68211D89B(Local_463.f_3))
				{
					if (func_105(Local_463.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x12A60388636C9B1C(Local_463.f_3, 60, 1);
					}
					if ((unk_0x1AAFFE4111587B35(Local_463.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || func_9(Local_463.f_3, 1) > 50f) || func_379(&Local_463, 31) > 30f)
					{
						if (unk_0x1AAFFE4111587B35(Local_463.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (func_9(Local_463.f_3, 1) > 50f)
						{
						}
						if (func_379(&Local_463, 31) > 30f)
						{
						}
						unk_0x5457695C257D1470(Local_463.f_3, 0);
						unk_0x42AFB71D42AF78EA(255, Local_463.f_413, joaat("player"));
						unk_0xD4B3FF1E63C36391(&(Local_463.f_3));
						func_398();
					}
				}
				else
				{
					func_398();
				}
				break;
			}
	}
}

float func_9(int iParam0, int iParam1)
{
	return func_10(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5()), iParam0, iParam1);
}

float func_10(int iParam0, int iParam1, int iParam2)
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

void func_11(bool bParam0, var uParam1, bool bParam2)
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
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_383(uParam0);
	if (func_51())
	{
		func_49();
	}
	func_47();
	unk_0x59C0D363E5A5B548();
	unk_0x04890EB0282525A5(1);
	func_44(0);
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		unk_0x70057AC4F7A58052(uParam0->f_4, 0);
		unk_0x3F1BB6177798DB33(uParam0->f_4);
		unk_0xE49CEAAA37CEC2B3(uParam0->f_4);
	}
	func_41(uParam0->f_14, 1);
	func_39(uParam0->f_14, 1, 1114636288);
	func_38(&(uParam0->f_244), 3);
	unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 1);
	if (func_35())
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	}
	unk_0x2DDD8448DE173695(1);
	func_25(0, 1, 1, 0);
	unk_0xFE3C4806D54DF474(1);
	unk_0x6FAE7F32571B33E3(1);
	if (unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		unk_0xAF191D67F49B35C9(*uParam0, 0);
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		unk_0x33E4179F57B9F232(1);
	}
	if (func_24(Global_101652.f_18040, 4))
	{
		func_22(&(Global_101652.f_18040), 4);
		unk_0xFA03BA297FE81584(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x6989DACCC7A558AE("gestures@m@standing@casual");
	unk_0x6989DACCC7A558AE("oddjobs@taxi@");
	unk_0x6989DACCC7A558AE("oddjobs@towingcome_here");
	if (unk_0xA4B4423421E91E97())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x0E4A3783CD75D9CE(unk_0xF3F8195C98263BF5()))
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
	}
	unk_0x08E8EEFC2E7F1B39(unk_0xF2DB717A73826179((func_13(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_14(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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

bool func_15(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x1C079483C9D16F36(&uVar0))
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
	unk_0x28E836DEC7D46F05(uParam0->f_51[0]);
}

void func_20(var uParam0)
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
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_34(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_33())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_34(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_30(unk_0xFB6B3EEFAB2DD12C())) && !func_27(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_26())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_30(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_26()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312731;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_32(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_33()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)
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

int func_35()
{
	if (!func_37() && !func_36())
	{
		if (!unk_0x276A3832AECFBD1C(unk_0xF3F8195C98263BF5()))
		{
			return 1;
		}
	}
	return 0;
}

int func_36()
{
	if (unk_0xAB964FCFAC3C767A(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
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
		unk_0x075CAD5F04ECA8B4(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x56E36EF46CD901B4(Var0, Var3, 1);
		unk_0x6055506B2BE3690D();
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
		unk_0xE6C975AE756267A4(Var0, Var3, iParam3, 1);
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
	if (Global_14604)
	{
		func_45(0, 0);
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
	if (!func_33())
	{
		Global_14443.f_1 = 3;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0))
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

int func_46(int iParam0)
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

void func_47()
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
					func_48(Global_88752[iVar0 /*17*/].f_5, 1);
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
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

void func_49()
{
	Global_14611 = 0;
	func_50();
}

void func_50()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

int func_51()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
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
		func_402(1);
		func_64(15, 1);
	}
	func_224(&(Global_101652.f_18040), 1024);
	if (!func_24(Global_101652.f_18040, 64))
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
		iParam2 = func_29();
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
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_75(&Global_2595490))
	{
		if (func_73(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_66(&Global_2595490, iParam0))
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

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xC588321444C4C223(iParam1))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	func_71(uParam0, (Global_2595489 - 0.5f));
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
	return Global_35777 == iParam0;
}

int func_78(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_51() && func_379(uParam0, 0) > 1f)
			{
				if (func_35())
				{
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
				}
				func_104(uParam0);
				func_22(&(Global_101652.f_18040), 4096);
				func_102(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_103(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xA93E75A5493862BD(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_101(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_95(uParam1, 0))
			{
				func_79(uParam0);
				func_256(uParam0, 0, 0, 0);
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
	
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_81(Global_101652.f_26993[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
					switch (unk_0x0B5EEA126C23F8E6())
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
	func_83(iParam0);
	if (Global_35777 == 15)
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

void func_83(int iParam0)
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

void func_84(int iParam0)
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
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_86() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_86() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_85(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_86() /*10730*/].f_7546.f_10, iParam0);
}

int func_89(bool bParam0)
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
	func_64(27, 1);
	return 1;
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

void func_91(int iParam0, int iParam1)
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

void func_92()
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

int func_93()
{
	func_94();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_94()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_4(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_3(unk_0xD5A676B97920D126());
			if (func_5(iVar0) && (!func_77(14) || Global_100604))
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

int func_95(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_99(&(uParam0->f_2));
	}
	unk_0x7FE30C99EA3439F7(14);
	unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x3CEEA45E4779F6BD(2, 201) || uParam0->f_8)
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
			return (func_14(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_98(var uParam0, int iParam1)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1B215CC37BF52E79(uParam0->f_9);
	unk_0x573CAEB6F4A4E750(iParam1);
	unk_0xBBAAC5B2437ACF2A();
}

void func_99(var uParam0)
{
	func_100(uParam0, 0f);
}

void func_100(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_101(int iParam0)
{
	Global_69957 = iParam0;
	Global_69958 = iParam0;
}

void func_102(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
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
		if (unk_0xF44A5E894FE76438(Local_169.f_4[iVar0 /*3*/], 2))
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
	if (unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam0, 1), Param1, iParam4);
}

int func_106(var uParam0, bool bParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (func_116(uParam0) && func_112(uParam0, 1, 1084227584))
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
		else if (!func_116(uParam0))
		{
			if (bParam1)
			{
				if (func_111(uParam0, 2097152))
				{
					if (unk_0x1774A68441553185(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x1774A68441553185(uParam0->f_3, 451360105) == 7)
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
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0) && unk_0xE4133A0C3C6C74A7(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x7E140C583F91AE2B(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x7E140C583F91AE2B(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_109(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x458C747DC544B598(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x8E92CDAEB8357ABD(Var0, Param1, 0) < unk_0x8E92CDAEB8357ABD(Var3, Param1, 0) && unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x458C747DC544B598(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x8E92CDAEB8357ABD(Var0, Param1, 0) >= unk_0x8E92CDAEB8357ABD(Var3, Param1, 0) && unk_0xD1E7D11D552B5D62(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x458C747DC544B598(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x458C747DC544B598(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_109(int iParam0, int iParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) && !unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
		{
			if (unk_0x98BE504E8B389665(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x98BE504E8B389665(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 2, 0) == iParam0)
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
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_46(1))
			{
				func_44(0);
			}
			if (func_35())
			{
				func_115();
				return 1;
			}
			else if (func_113(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_113(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_114(iParam0);
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

void func_114(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

void func_115()
{
	if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
	}
}

int func_116(var uParam0)
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

void func_117(var uParam0)
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
		func_224(&(uParam0->f_55), 1);
	}
}

void func_118(var uParam0)
{
	func_120();
	unk_0x59C0D363E5A5B548();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_187(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_187(uParam0, 103, 1, 0, 0);
		}
		func_119(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_187(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_187(uParam0, 102, 1, 0, 0);
	}
	func_256(uParam0, 16, 4f, 0);
}

void func_119(int iParam0)
{
	Global_100364.f_221 = iParam0;
}

void func_120()
{
	Global_14611 = 0;
	func_121();
}

void func_121()
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

void func_122(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_123(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_52(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_52(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_123(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_124(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE0FBA7F5811E2E63(uParam0->f_73[iVar0]))
		{
			unk_0xE9445CB924569012(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_440 = 0;
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xB8A73E7DA87B2968(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_126(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_127(var uParam0, int iParam1, bool bParam2)
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

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_166(uParam0, uParam2, uParam1);
	if (func_165(uParam0) >= 14)
	{
		if (iLocal_445)
		{
			if (((func_379(uParam0, 11) > 20f && !func_51()) && !unk_0xE7C48EF8F50001B1()) && !bLocal_443)
			{
				bLocal_443 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_445)
		{
			func_159(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_159(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!unk_0x00B5B0B68211D89B((*uParam1)[uParam1->f_95]) && unk_0x6A0583ECFCCECC9B((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_449)
				{
					if (func_158(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_157(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					unk_0x37338B7B7C4982DC((*uParam1)[uParam1->f_95]);
					unk_0x7AFB953E6654EA8F((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_159(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0x00B5B0B68211D89B((*uParam1)[0]) || unk_0x00B5B0B68211D89B((*uParam1)[1])) || unk_0x00B5B0B68211D89B((*uParam1)[2])) || unk_0x7D720C677145C91C((*uParam1)[1], uParam0->f_4, 1)) || unk_0x7D720C677145C91C((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_289(uParam0, "Passenger injured.", 14);
	}
	if (!func_143(uParam0, uParam1))
	{
		if (!unk_0xD1E7D11D552B5D62(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			unk_0xE9148EE8AA200B60((*uParam1)[0], 0, 0);
			bLocal_447 = true;
			iLocal_448 = 0;
		}
	}
	else
	{
		if (bLocal_447)
		{
			if (unk_0x06F2E112EBC0C4FB(uParam0->f_4, 0, 0))
			{
				if (!iLocal_448)
				{
					unk_0x87D70F1F81DB77D3((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_448 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_289(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0x98BE504E8B389665(uParam0->f_4, 0, 0) == (*uParam1)[0])
			{
				func_178(uParam1);
				bLocal_447 = false;
			}
		}
		func_140(uParam0, 1097859072, 1117782016);
		func_139(uParam0, &(uParam0->f_43));
		if (!bLocal_447 && !unk_0x04D83291EB9DE51D((*uParam1)[0], uParam0->f_4, 0))
		{
			func_289(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_105(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_449)
					{
						func_187(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0x1AAFFE4111587B35(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							if (!unk_0x00B5B0B68211D89B((*uParam1)[2]))
							{
								unk_0x8A3D7569826A325D(&(uParam1->f_36[2]));
								func_120();
								if (uParam1->f_95 == 2)
								{
									unk_0x37338B7B7C4982DC((*uParam1)[2]);
								}
								unk_0x873418BFBF9A6780(&uVar0);
								unk_0x456121A0AAC868D4(&uVar0);
								unk_0xE9148EE8AA200B60(0, 0, 0);
								unk_0x1D2CBA8F2F00D745(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0x1D2CBA8F2F00D745(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0xCFE67FBB69F1C410(uVar0);
								unk_0x8B06B801B92CEC2D((*uParam1)[2], uVar0);
								unk_0x873418BFBF9A6780(&uVar0);
								if (func_379(uParam0, 6) < fLocal_450)
								{
									uParam1->f_55[2] = 1;
									func_187(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_187(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_137(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_135((*uParam1)[2], uParam0->f_4) && func_379(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_124(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
				}
				else if (!func_132(uParam0) && unk_0x0E4A3783CD75D9CE(unk_0xF3F8195C98263BF5()))
				{
					func_130(uParam3);
					func_127(uParam2, -1, 0);
					func_256(uParam0, 6, 0, 0);
					func_256(uParam0, 11, 0, 0);
					func_187(uParam0, 40, 1, 0, 0);
					if (!unk_0x6901135DDCC4904D(uParam1->f_36[1]))
					{
						func_178(uParam1);
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
						func_187(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0x1AAFFE4111587B35(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							if (!unk_0x00B5B0B68211D89B((*uParam1)[1]))
							{
								func_120();
								unk_0x8A3D7569826A325D(&(uParam1->f_36[1]));
								func_129(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_379(uParam0, 6) < fLocal_451)
								{
									uParam1->f_55[1] = 1;
									func_187(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_187(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_137(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_135((*uParam1)[1], uParam0->f_4) && func_379(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
				}
				else if (!func_132(uParam0) && unk_0x0E4A3783CD75D9CE(unk_0xF3F8195C98263BF5()))
				{
					func_130(uParam3);
					func_127(uParam2, -1, 0);
					func_256(uParam0, 6, 0, 0);
					func_256(uParam0, 11, 0, 0);
					func_187(uParam0, 43, 1, 0, 0);
					iLocal_449 = 0;
					if (!unk_0x6901135DDCC4904D(uParam1->f_36[0]))
					{
						func_178(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_105(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_449)
					{
						func_187(uParam0, 99, 1, 0, 0);
						iLocal_449 = 1;
					}
					if (unk_0x1AAFFE4111587B35(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_112(uParam0, 1, 4f))
						{
							unk_0x8A3D7569826A325D(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_120();
							if (func_379(uParam0, 6) < fLocal_452)
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

void func_129(var uParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		if (!unk_0xB529B2A4B7C64D6D(*uParam1, 0))
		{
			Var0 = { unk_0x7E140C583F91AE2B(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x7E140C583F91AE2B(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x8E92CDAEB8357ABD(Var0, Param2, 0) < unk_0x8E92CDAEB8357ABD(Var3, Param2, 0) && unk_0xD1E7D11D552B5D62(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar6 = 131072;
			}
			else if (unk_0x8E92CDAEB8357ABD(Var0, Param2, 0) >= unk_0x8E92CDAEB8357ABD(Var3, Param2, 0) && unk_0xD1E7D11D552B5D62(*uParam1, *uParam0, 2, 0, 0))
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
				unk_0x873418BFBF9A6780(&uVar7);
				unk_0x456121A0AAC868D4(&uVar7);
				unk_0xE9148EE8AA200B60(0, 0, 0);
				unk_0x1D2CBA8F2F00D745(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xD14D1FD0ED7FA7A1(0, Var8, 5f, 0);
				unk_0x1D2CBA8F2F00D745(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xCFE67FBB69F1C410(uVar7);
				unk_0x8B06B801B92CEC2D(*uParam1, uVar7);
			}
			else
			{
				unk_0x873418BFBF9A6780(&uVar7);
				unk_0x456121A0AAC868D4(&uVar7);
				unk_0x458C747DC544B598(0, *uParam0, iVar6);
				unk_0x1D2CBA8F2F00D745(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xD14D1FD0ED7FA7A1(0, Var8, 5f, 0);
				unk_0x1D2CBA8F2F00D745(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xCFE67FBB69F1C410(uVar7);
				unk_0x8B06B801B92CEC2D(*uParam1, uVar7);
			}
		}
	}
}

void func_130(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_131(), 24);
		iVar0++;
	}
	unk_0x59C0D363E5A5B548();
	func_49();
}

var func_131()
{
	var uVar0;
	
	return uVar0;
}

int func_132(var uParam0)
{
	if (func_51())
	{
		return 1;
	}
	if (func_134(uParam0, 17))
	{
		return 1;
	}
	if (func_134(uParam0, 14))
	{
		return 1;
	}
	if (func_133(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_133(var uParam0)
{
	return uParam0->f_110;
}

bool func_134(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_135(int iParam0, int iParam1)
{
	if (func_136(iParam0, iParam1))
	{
		if (unk_0x04D83291EB9DE51D(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
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

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_138(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_138(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_138(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
			unk_0xB8A73E7DA87B2968(uParam0, 2);
		}
	}
}

void func_139(var uParam0, var uParam1)
{
	unk_0xD2C328D8F4EE2645(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_140(var uParam0, float fParam1, float fParam2)
{
	if (func_116(uParam0) && func_24(uParam0->f_44, 4))
	{
		if ((unk_0x0700B6EAA7894D54(uParam0->f_4) || unk_0x78D3CDB884C74FEB(uParam0->f_4) < 3f) && func_142(uParam0))
		{
			if (!func_134(uParam0, 2))
			{
				func_181(uParam0, 2);
			}
			else if (func_116(uParam0))
			{
				if (func_379(uParam0, 2) > fParam1 && !func_134(uParam0, 14))
				{
					if (func_37())
					{
						func_187(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_187(uParam0, 48, 1, 0, 0);
					}
					func_256(uParam0, 2, 0, 0);
					if (func_134(uParam0, 10))
					{
						func_256(uParam0, 10, 0, 0);
					}
				}
				if (!func_134(uParam0, 3))
				{
					func_256(uParam0, 3, 0, 0);
				}
				else if (func_379(uParam0, 3) >= fParam2)
				{
					func_141(uParam0, 3, 0);
					func_289(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_134(uParam0, 2))
			{
				func_141(uParam0, 2, 0);
			}
			if (func_134(uParam0, 3))
			{
				func_141(uParam0, 3, 0);
			}
		}
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)
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

int func_142(var uParam0)
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

int func_143(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		func_289(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_156(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x00B5B0B68211D89B((*uParam1)[iVar0]))
			{
				func_289(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_144(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_144(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_134(uParam0, 14))
			{
				func_152(uParam0);
			}
			func_145(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_145(var uParam0, bool bParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x6901135DDCC4904D(uParam0->f_8))
			{
				unk_0x97C445677A852D45(uParam0->f_8, 0);
				unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
				func_151(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x6901135DDCC4904D(uParam0->f_9))
			{
				unk_0x97C445677A852D45(uParam0->f_9, 0);
				unk_0xD947D2F43FD7F6D7(uParam0->f_9, 0);
				unk_0x59C0D363E5A5B548();
				if (func_116(uParam0))
				{
					func_187(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_151(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_146(uParam0, 0, 0);
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

void func_146(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_383(uParam0);
	}
	if (!unk_0x6901135DDCC4904D(uParam0->f_10))
	{
		uParam0->f_10 = func_149(uParam0->f_4, 1, 0);
		unk_0x2EDAF851B28036F0(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xD947D2F43FD7F6D7(uParam0->f_10, 1);
		func_147(uParam0);
		if (bParam2)
		{
			unk_0x59C0D363E5A5B548();
			func_187(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_147(var uParam0)
{
	func_256(uParam0, 14, 0, 0);
	func_148();
}

void func_148()
{
	int iVar0;
	
	iVar0 = unk_0x80AA649904BB5788();
	if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		unk_0xEC49B508B83FF2C9(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_149(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_150(unk_0x1995B52453EF6537(), 1f, 1f));
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
		unk_0xF563C3AC64885E69(uVar0, func_150(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_150(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_150(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_151(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0x59C0D363E5A5B548();
		func_187(uParam0, iParam3, 1, 0, 0);
		func_224(uParam1, iParam2);
	}
}

void func_152(var uParam0)
{
	func_141(uParam0, 14, 0);
	func_141(uParam0, 15, 0);
	func_155();
	if (func_154())
	{
		func_153(0);
	}
}

void func_153(int iParam0)
{
	Global_16756 = iParam0;
}

int func_154()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_155()
{
	var uVar0;
	
	uVar0 = unk_0x80AA649904BB5788();
	if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
	{
		unk_0xEC49B508B83FF2C9(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_156(var uParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_134(uParam0, 14))
			{
				if (unk_0x6901135DDCC4904D(*uParam1) && unk_0xDCA5942DC912553C(*uParam1) > 0)
				{
					unk_0x97C445677A852D45(*uParam1, 0);
				}
				func_146(uParam0, 0, 0);
				func_187(uParam0, 2, 1, 1, 0);
			}
			else if (func_379(uParam0, 14) > 20f)
			{
				func_289(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_134(uParam0, 14))
			{
				func_152(uParam0);
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

void func_157(var uParam0)
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

int func_158(var uParam0, var uParam1)
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0x873418BFBF9A6780(&uVar0);
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0x1774A68441553185(*uParam0, 242628503) != 1 || unk_0x1774A68441553185(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_159(var uParam0, var uParam1, bool bParam2, bool bParam3)
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
				func_163(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_162(uParam0, uParam1);
				uParam1->f_91 = unk_0x84A97C70FFDEC0C8();
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
				func_161(uParam0, uParam1);
				uParam1->f_91 = unk_0x84A97C70FFDEC0C8();
				uParam1->f_92 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
	uVar0 = func_160(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = unk_0x78D3CDB884C74FEB(uParam0->f_4);
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
				if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
				{
					unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			unk_0xE1BA9C73606A7B7A(uParam1->f_88, "speed", fVar4, 0);
			unk_0xE1BA9C73606A7B7A(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (unk_0x78D3CDB884C74FEB(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x84A97C70FFDEC0C8();
		uParam1->f_63 = 1;
	}
	if ((unk_0x78D3CDB884C74FEB(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = unk_0x84A97C70FFDEC0C8();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x84A97C70FFDEC0C8();
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
					if (unk_0x9A25CBC5E65FF8D4(uParam0->f_4, iVar1))
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0xCC5C4B9DB5D0FF42(uParam0->f_4, iVar1))
					{
						if ((unk_0x84A97C70FFDEC0C8() % 2000) < 50)
						{
						}
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE1BA9C73606A7B7A(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE1BA9C73606A7B7A(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0x84A97C70FFDEC0C8() - uParam1->f_91);
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
					if (unk_0x9A25CBC5E65FF8D4(uParam0->f_4, iVar1))
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0xCC5C4B9DB5D0FF42(uParam0->f_4, iVar1))
					{
						if ((unk_0x84A97C70FFDEC0C8() % 2000) < 50)
						{
						}
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE1BA9C73606A7B7A(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE1BA9C73606A7B7A(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (unk_0x84A97C70FFDEC0C8() - uParam1->f_91);
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
					if (unk_0x9A25CBC5E65FF8D4(uParam0->f_4, iVar1))
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_83[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0xCC5C4B9DB5D0FF42(uParam0->f_4, iVar1))
					{
						if (unk_0xE0FBA7F5811E2E63(uParam1->f_78[iVar1]))
						{
							unk_0xE1BA9C73606A7B7A(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0xE0FBA7F5811E2E63(uParam1->f_73[iVar1]))
					{
						unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0xE1BA9C73606A7B7A(uParam1->f_88, "smoke", fVar8, 0);
				unk_0xE1BA9C73606A7B7A(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x9A25CBC5E65FF8D4(uParam0->f_4, iVar0))
		{
			if (!unk_0xF44A5E894FE76438(uLocal_458[iVar0], 1))
			{
				unk_0xB8A73E7DA87B2968(&(uLocal_458[iVar0]), 1);
			}
			if (unk_0x4AFD1A95C0117800(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_445)
				{
					iLocal_445 = 1;
				}
			}
		}
		else if (unk_0xF44A5E894FE76438(uLocal_458[iVar0], 1))
		{
			unk_0x4EA098C870B73AB7(&(uLocal_458[iVar0]), 1);
		}
		if (!unk_0xCC5C4B9DB5D0FF42(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0xF44A5E894FE76438(uLocal_453[iVar0], 1))
			{
				unk_0xB8A73E7DA87B2968(&(uLocal_453[iVar0]), 1);
			}
			if (!iLocal_445)
			{
				iLocal_445 = 1;
			}
		}
		else if (unk_0xF44A5E894FE76438(uLocal_453[iVar0], 1))
		{
			unk_0x4EA098C870B73AB7(&(uLocal_453[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_161(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_409, 0f, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_415, 0f, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_412, 0f, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_418, 0f, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar0], "smoke", 1f, 0);
			unk_0xE1BA9C73606A7B7A(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_162(var uParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		uParam1->f_88 = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_89 = unk_0xA7EFA150E81030E7("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	unk_0x6F3EEA3CED49DB72(1);
}

void func_163(var uParam0)
{
	func_164(uParam0, 0f);
}

void func_164(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0xF44A5E894FE76438(*uParam0, 4)) + fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_165(var uParam0)
{
	return uParam0->f_416;
}

void func_166(var uParam0, var uParam1, var uParam2)
{
	if (!func_24(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) >= 1)
				{
					if (func_379(uParam0, 9) > 1f)
					{
						func_170(uParam0, unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()));
						func_187(uParam0, 50, 1, 0, 0);
						func_256(uParam0, 9, 0, 0);
						if (unk_0x6901135DDCC4904D(uParam2->f_40))
						{
							unk_0x97C445677A852D45(uParam2->f_40, 0);
							unk_0xD947D2F43FD7F6D7(uParam2->f_40, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_51() && func_379(uParam0, 9) > 4f)
				{
					func_187(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_169("TAXI_OBJ_POL", 0, 0))
				{
					func_187(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x222B4D6308DFC3F1(unk_0xF3F8195C98263BF5(), func_168(uParam0)))
				{
					func_170(uParam0, unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()));
					func_52(6, 0);
				}
				if (!func_133(uParam0))
				{
					if (!unk_0x33688D334D224255())
					{
						if (func_379(uParam0, 16) > 10f)
						{
							func_187(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) < 1)
				{
					if (unk_0x6901135DDCC4904D(uParam2->f_40))
					{
						unk_0x97C445677A852D45(uParam2->f_40, 255);
						unk_0xD947D2F43FD7F6D7(uParam2->f_40, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_51())
				{
					func_187(uParam0, 53, 1, 0, 1);
					func_52(7, func_168(uParam0));
					func_170(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_51())
				{
					func_167(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_167(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_168(var uParam0)
{
	return uParam0->f_106;
}

bool func_169(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC450F7ACA7F40F98(sParam0);
	if (iParam1 == 1)
	{
		unk_0xB1953EBEF4D6BD85(iParam2);
	}
	return unk_0x1B1A26465DF20C87();
}

void func_170(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_171(var uParam0)
{
	if (func_173(uParam0))
	{
		func_172(uParam0);
	}
}

void func_172(var uParam0)
{
	if (unk_0x8AAC0F5C88B4585D() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFDD9C8C921B18ACC();
			func_141(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_379(uParam0, 20) > 3f)
				{
					func_187(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_24(uParam0->f_81, 262144) || !func_24(uParam0->f_81, 1048576))
				{
					if (func_379(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_187(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (func_379(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_187(uParam0, 85, 1, 0, 0);
						func_141(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_379(uParam0, 20) > 8f)
				{
					func_187(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_81, 262144) || func_24(uParam0->f_82, 67108864))
			{
				if (!func_134(uParam0, 22))
				{
					func_181(uParam0, 22);
				}
			}
			if (func_134(uParam0, 22) && func_379(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_24(uParam0->f_81, 1048576))
					{
						func_187(uParam0, 84, 1, 0, 0);
						func_141(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_24(uParam0->f_82, 134217728))
					{
						func_187(uParam0, 85, 1, 0, 0);
						func_141(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_173(var uParam0)
{
	return uParam0->f_120;
}

void func_174(var uParam0, var uParam1)
{
	func_177(uParam0, 1000);
	if ((!unk_0xB529B2A4B7C64D6D((*uParam1)[0], 0) && !unk_0xB529B2A4B7C64D6D((*uParam1)[1], 0)) && !unk_0xB529B2A4B7C64D6D((*uParam1)[2], 0))
	{
		unk_0x8DA3061503F2C4C8((*uParam1)[0]);
		unk_0x8DA3061503F2C4C8((*uParam1)[1]);
		unk_0x8DA3061503F2C4C8((*uParam1)[2]);
	}
	func_175();
	func_152(uParam0);
}

void func_175()
{
	Global_14611 = 0;
	func_176();
}

void func_176()
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

void func_177(var uParam0, int iParam1)
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

void func_178(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!unk_0x6901135DDCC4904D(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_179(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!unk_0x67BFCF43EE96547F(uParam0->f_36[2]))
		{
			unk_0xD947D2F43FD7F6D7(uParam0->f_36[2], 1);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!unk_0x6901135DDCC4904D(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_179(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!unk_0x67BFCF43EE96547F(uParam0->f_36[1]))
		{
			unk_0xD947D2F43FD7F6D7(uParam0->f_36[1], 1);
		}
	}
	else
	{
		if (!unk_0x6901135DDCC4904D(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_179(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!unk_0x67BFCF43EE96547F(uParam0->f_36[0]))
		{
			unk_0xD947D2F43FD7F6D7(uParam0->f_36[0], 1);
		}
	}
}

var func_179(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0xF563C3AC64885E69(uVar0, func_150(unk_0x1995B52453EF6537(), 1f, 1f));
	unk_0xD947D2F43FD7F6D7(uVar0, iParam3);
	return uVar0;
}

void func_180()
{
	func_224(&(Local_463.f_55), 2);
	func_224(&(Local_463.f_55), 4);
	func_224(&(Local_463.f_55), 16);
	func_224(&(Local_463.f_55), 64);
	func_224(&(Local_463.f_55), 256);
	func_224(&(Local_463.f_55), 512);
	func_224(&(Local_463.f_55), 1024);
	func_224(&(Local_463.f_55), 2048);
	func_224(&(Local_463.f_55), 4096);
	func_224(&(Local_463.f_55), 1073741824);
	func_224(&uLocal_1083, 2);
}

void func_181(var uParam0, int iParam1)
{
	func_182(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_182(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_99(uParam0);
	}
}

void func_183()
{
	unk_0x8188DB74546FF484(joaat("stretch"));
	unk_0x8188DB74546FF484(joaat("superd"));
	unk_0x8188DB74546FF484(Local_893.f_45[0]);
	unk_0x8188DB74546FF484(Local_893.f_45[1]);
	unk_0x8188DB74546FF484(Local_893.f_45[2]);
	unk_0x8188DB74546FF484(Local_893.f_45[3]);
	unk_0x8188DB74546FF484(Local_893.f_45[4]);
	unk_0x6989DACCC7A558AE("oddjobs@taxi@gyn@cc@intro");
	unk_0x6989DACCC7A558AE("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x6989DACCC7A558AE("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_184(var uParam0, bool bParam1)
{
	func_185(uParam0);
	if (bParam1)
	{
		if (!unk_0x6901135DDCC4904D(uParam0->f_9))
		{
			uParam0->f_9 = func_179(uParam0->f_17, 1);
		}
		else if (unk_0xDCA5942DC912553C(uParam0->f_9) == 0)
		{
			unk_0x9FF365C8D1405D30(1, 0);
			unk_0x97C445677A852D45(uParam0->f_9, 255);
			unk_0x4B55FF1D49C3A70D(uParam0->f_9, uParam0->f_17);
			unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
		}
	}
}

void func_185(var uParam0)
{
	if (unk_0x6901135DDCC4904D(uParam0->f_8))
	{
		unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
		unk_0x8A3D7569826A325D(&(uParam0->f_8));
	}
}

void func_186(var uParam0)
{
	unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
	unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
	func_177(uParam0, 1000);
}

void func_187(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_256(uParam0, 16, 4f, 0);
		if (func_188(uParam0))
		{
			func_49();
		}
	}
	func_215(uParam0, iParam2, bParam3);
}

int func_188(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_51())
	{
		Var6 = { func_190() };
		if (!unk_0xC55B9553B3EDADE9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xCC257DA11A122B5F(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_189(&Var0);
			if (unk_0xCC257DA11A122B5F(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_189(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_190()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

bool func_191(var uParam0, var uParam1)
{
	return ((func_192((*uParam1)[0], uParam0) && func_192((*uParam1)[1], uParam0)) && func_192((*uParam1)[2], uParam0));
}

int func_192(int iParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam1->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			if (unk_0xE4133A0C3C6C74A7(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_289(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_289(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_193(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_212(uParam0, (*uParam1)[0]);
	func_212(uParam0, (*uParam1)[1]);
	func_212(uParam0, (*uParam1)[2]);
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			func_210(uParam0, 1);
			if (func_35())
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xF3F8195C98263BF5(), 1, 0);
				func_174(uParam0, uParam1);
			}
		}
		else if (unk_0x222B4D6308DFC3F1(unk_0xF3F8195C98263BF5(), 0))
		{
			func_208(uParam0);
		}
		else
		{
			if (func_134(uParam0, 14))
			{
				func_152(uParam0);
				func_207(uParam0, uParam1, 0);
			}
			if (func_134(uParam0, 9))
			{
				func_141(uParam0, 9, 0);
				unk_0x59C0D363E5A5B548();
				if (unk_0x6901135DDCC4904D(uParam0->f_8))
				{
					unk_0x97C445677A852D45(uParam0->f_8, 255);
					unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
				}
			}
			if (!unk_0x00B5B0B68211D89B((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((unk_0x78D3CDB884C74FEB(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_206(uParam0, (*uParam1)[iLocal_433]) > 50f || func_13(&uLocal_434) > 5f)
						{
							func_289(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (unk_0x1774A68441553185((*uParam1)[iLocal_433], 713668775) != 1 || ((func_10(unk_0xD5A676B97920D126(), (*uParam1)[iLocal_433], 1) < 20f && func_205((*uParam1)[iLocal_433], uParam0->f_11, 1) <= 28f) && func_205(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_203(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_202(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_94)
								{
									iVar0 = func_201(uParam0, &uVar1);
									if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
									{
										unk_0xE9148EE8AA200B60(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0x37338B7B7C4982DC((*uParam1)[iVar3]);
									unk_0x873418BFBF9A6780(&uVar2);
									unk_0x456121A0AAC868D4(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0x6A0583ECFCCECC9B((*uParam1)[iVar3], 0))
											{
												unk_0x0988FFC0C75637DF(0, uParam0->f_4, -1, 0, 2);
												unk_0x7AFB953E6654EA8F(0, unk_0x7BC26452241AC7C9(1750, 2250));
												unk_0x87D70F1F81DB77D3(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0x6A0583ECFCCECC9B((*uParam1)[iVar3], 0))
											{
												unk_0x0988FFC0C75637DF(0, uParam0->f_4, -1, 0, 2);
												unk_0x87D70F1F81DB77D3(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0x6A0583ECFCCECC9B((*uParam1)[iVar3], 0))
											{
												unk_0x0988FFC0C75637DF(0, uParam0->f_4, -1, 0, 2);
												unk_0x7AFB953E6654EA8F(0, unk_0x7BC26452241AC7C9(750, 1250));
												unk_0x87D70F1F81DB77D3(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0xCFE67FBB69F1C410(uVar2);
									unk_0x8B06B801B92CEC2D((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_142(uParam0))
							{
								unk_0x37338B7B7C4982DC((*uParam1)[0]);
								unk_0x37338B7B7C4982DC((*uParam1)[1]);
								unk_0x37338B7B7C4982DC((*uParam1)[2]);
							}
							else if ((unk_0x1774A68441553185((*uParam1)[0], 242628503) != 1 && unk_0x1774A68441553185((*uParam1)[0], 242628503) != 0) && func_206(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0x873418BFBF9A6780(&(uParam0->f_243));
								unk_0x456121A0AAC868D4(&(uParam0->f_243));
								unk_0xBE29918F5B8EC2EF(0, uParam0->f_4, 0);
								unk_0x290A57C93304EF16(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0xCFE67FBB69F1C410(uParam0->f_243);
								unk_0x8B06B801B92CEC2D((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_94)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_200(uParam0, 1))
									{
										unk_0x8DA3061503F2C4C8((*uParam1)[0]);
										unk_0x8DA3061503F2C4C8((*uParam1)[1]);
										unk_0x8DA3061503F2C4C8((*uParam1)[2]);
										func_289(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_199(uParam0, uParam1);
							if (func_206(uParam0, (*uParam1)[0]) < fVar4 || func_35())
							{
								if (unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0x6A0583ECFCCECC9B((*uParam1)[0], 0) && unk_0x6A0583ECFCCECC9B((*uParam1)[1], 0)) && unk_0x6A0583ECFCCECC9B((*uParam1)[2], 0))
									{
										func_185(uParam0);
										unk_0x237B0CFB6EEBD3BA((*uParam1)[0], 26, 1);
										unk_0x237B0CFB6EEBD3BA((*uParam1)[1], 26, 1);
										unk_0x237B0CFB6EEBD3BA((*uParam1)[2], 26, 1);
										unk_0x237B0CFB6EEBD3BA((*uParam1)[0], 104, 1);
										func_141(uParam0, 5, 0);
										unk_0xC831E094F3B9BB95();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
								{
								}
								unk_0xB3D5796ACAE84B16(unk_0xC086F8D75730FA3A((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_198(uParam1))
							{
								unk_0x37338B7B7C4982DC((*uParam1)[0]);
								unk_0x37338B7B7C4982DC((*uParam1)[1]);
								unk_0x37338B7B7C4982DC((*uParam1)[2]);
								func_289(uParam0, "Left Passenger", 8);
							}
							if ((func_197(uParam0, uParam1) || func_196(uParam0, uParam1)) || func_195(uParam0, uParam1))
							{
								if (!unk_0x6A0583ECFCCECC9B((*uParam1)[2], 0))
								{
									unk_0x1D2CBA8F2F00D745((*uParam1)[2], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 2;
								}
								if (!unk_0x6A0583ECFCCECC9B((*uParam1)[1], 0))
								{
									unk_0x1D2CBA8F2F00D745((*uParam1)[1], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 1;
								}
								if (!unk_0x6A0583ECFCCECC9B((*uParam1)[0], 0))
								{
									unk_0x1D2CBA8F2F00D745((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_433 = 0;
								}
								unk_0x8A3D7569826A325D(&(uParam0->f_8));
								uParam0->f_8 = func_194((*uParam1)[iLocal_433], 0, 0);
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
				func_289(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_289(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_194(int iParam0, bool bParam1, bool bParam2)
{
	return func_149(iParam0, !bParam1, bParam2);
}

int func_195(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam1)[iVar0]) && !unk_0x6A0583ECFCCECC9B((*uParam1)[iVar0], 0))
		{
			if (func_206(uParam0, (*uParam1)[iVar0]) > 28f)
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
		if (!unk_0x00B5B0B68211D89B((*uParam1)[iVar0]) && !unk_0x6A0583ECFCCECC9B((*uParam1)[iVar0], 0))
		{
			if (func_205(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_197(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam1)[iVar0]) && !unk_0x6A0583ECFCCECC9B((*uParam1)[iVar0], 0))
		{
			if (func_205((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_198(var uParam0)
{
	if ((!unk_0x00B5B0B68211D89B((*uParam0)[0]) && !unk_0x00B5B0B68211D89B((*uParam0)[1])) && !unk_0x00B5B0B68211D89B((*uParam0)[2]))
	{
		if ((unk_0x6A0583ECFCCECC9B((*uParam0)[0], 0) || unk_0x6A0583ECFCCECC9B((*uParam0)[1], 0)) || unk_0x6A0583ECFCCECC9B((*uParam0)[2], 0))
		{
			if ((!unk_0x6A0583ECFCCECC9B((*uParam0)[0], 0) || !unk_0x6A0583ECFCCECC9B((*uParam0)[1], 0)) || !unk_0x6A0583ECFCCECC9B((*uParam0)[2], 0))
			{
				if (!func_16(&uLocal_437))
				{
					func_182(&uLocal_437);
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

void func_199(var uParam0, var uParam1)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x00B5B0B68211D89B((*uParam1)[iLocal_433]))
		{
			if (func_9((*uParam1)[iLocal_433], 1) > 30f)
			{
				if (unk_0x1774A68441553185((*uParam1)[iLocal_433], -1794415470) == 1 || unk_0x1774A68441553185((*uParam1)[iLocal_433], 242628503) == 1)
				{
					func_289(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_200(var uParam0, bool bParam1)
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

int func_201(var uParam0, var uParam1)
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

int func_202(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xB529B2A4B7C64D6D((*uParam1)[0], 0))
	{
		if (!unk_0x27A556D1AF39812E((*uParam1)[iLocal_433]) && func_9((*uParam1)[iLocal_433], 1) < fParam3)
		{
			if (!func_134(uParam0, 5))
			{
				func_256(uParam0, 5, 0, 0);
			}
		}
		else if (func_134(uParam0, 5))
		{
			func_141(uParam0, 5, 0);
		}
		if (((func_379(uParam0, 5) > IntToFloat(iParam2) && unk_0x78D3CDB884C74FEB(uParam0->f_4) < fParam5) && !unk_0x27A556D1AF39812E((*uParam1)[iLocal_433])) || func_9((*uParam1)[iLocal_433], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_203(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uVar10 = unk_0x96C78339A82E0B67(uParam0->f_4, "windscreen");
	Var6 = { unk_0xA277059EBE3B154A(uParam0->f_4, uVar10) };
	Var6 = { unk_0x483D90C99A690DBF(uParam0->f_4, Var6) };
	Var6.f_1 = (Var6.f_1 + 1f);
	Var0 = { unk_0x7E140C583F91AE2B(uParam0->f_4, Var6) };
	Var3 = { unk_0x7E140C583F91AE2B(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0xF9D271D16397C773(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x5457695C257D1470((*uParam1)[0], 1);
			unk_0x5457695C257D1470((*uParam1)[1], 1);
			unk_0x5457695C257D1470((*uParam1)[2], 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_433], 0) <= fParam2 && !uParam0->f_142) && unk_0xC3D3EC28F0EB3C6D((Var0.f_2 - Var3.f_2)) < 5f)
			{
				iVar9 = func_204(&(uParam0->f_409), Var0, Var3, 0);
				if (iVar9 == 0)
				{
					iLocal_87 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x59C0D363E5A5B548();
			func_187(uParam0, 4, 1, 0, 1);
			unk_0x37338B7B7C4982DC((*uParam1)[iLocal_433]);
			unk_0x0988FFC0C75637DF(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x873418BFBF9A6780(&(uParam0->f_243));
			unk_0x456121A0AAC868D4(&(uParam0->f_243));
			unk_0x290A57C93304EF16(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0xBE29918F5B8EC2EF(0, uParam0->f_4, 0);
			unk_0xCFE67FBB69F1C410(uParam0->f_243);
			unk_0x8B06B801B92CEC2D((*uParam1)[iLocal_433], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_87 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_204(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
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

float func_205(int iParam0, struct<3> Param1, int iParam4)
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

float func_206(var uParam0, int iParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (func_142(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_207(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0x6901135DDCC4904D(uParam0->f_8))
			{
				unk_0x97C445677A852D45(uParam0->f_8, 0);
				unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
				func_151(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x6901135DDCC4904D(uParam1->f_36[iVar0]))
					{
						unk_0x97C445677A852D45(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_187(uParam0, 2, 1, 1, 0);
			}
			func_146(uParam0, 0, 0);
		}
		else if (unk_0x6901135DDCC4904D(uParam0->f_10))
		{
			unk_0x8A3D7569826A325D(&(uParam0->f_10));
			if (unk_0x6901135DDCC4904D(uParam0->f_8))
			{
				unk_0x97C445677A852D45(uParam0->f_8, 255);
				unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
				func_151(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x6901135DDCC4904D(uParam1->f_36[iVar0]))
					{
						unk_0x97C445677A852D45(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_208(var uParam0)
{
	func_212(uParam0, uParam0->f_3);
	if (func_142(uParam0))
	{
		if (func_134(uParam0, 14))
		{
			func_152(uParam0);
			if (unk_0x6901135DDCC4904D(uParam0->f_10))
			{
				unk_0x8A3D7569826A325D(&(uParam0->f_10));
			}
		}
	}
	if (!func_134(uParam0, 9))
	{
		if (unk_0x6901135DDCC4904D(uParam0->f_8))
		{
			unk_0x97C445677A852D45(uParam0->f_8, 0);
			unk_0xD947D2F43FD7F6D7(uParam0->f_8, 0);
		}
		func_256(uParam0, 9, 0, 0);
		func_209("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_209(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

void func_210(var uParam0, bool bParam1)
{
	func_212(uParam0, uParam0->f_3);
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0x04D83291EB9DE51D(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_134(uParam0, 14))
			{
				if (func_51())
				{
					func_153(1);
				}
				func_211(uParam0, 11, 1);
				func_145(uParam0, 1);
				func_256(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_116(uParam0))
				{
					if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
					{
					}
					if (unk_0x6A0583ECFCCECC9B(uParam0->f_2, 0))
					{
						if (func_379(uParam0, 15) > 5f)
						{
							func_256(uParam0, 15, 0f, 1);
						}
					}
					if (func_379(uParam0, 14) > 20f)
					{
						func_289(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_379(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_289(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_289(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_211(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_212(var uParam0, int iParam1)
{
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (!unk_0x00B5B0B68211D89B(iParam1))
		{
			if (unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
			{
				if ((unk_0x75D39BAF4D486998(iParam1, joaat("weapon_stungun"), 0) || unk_0x75D39BAF4D486998(iParam1, 0, 2)) || unk_0x75D39BAF4D486998(iParam1, 0, 1))
				{
					func_289(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
			}
		}
	}
}

void func_213()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA4DB44DF73EF4FE5(Local_463.f_4, 0))
	{
		if (func_142(&Local_463))
		{
			if (!iLocal_1010)
			{
				uVar0 = unk_0x96C78339A82E0B67(Local_463.f_4, "window_lf");
				uVar1 = unk_0x96C78339A82E0B67(Local_463.f_4, "window_lr");
				uVar2 = unk_0x96C78339A82E0B67(Local_463.f_4, "window_rf");
				uVar3 = unk_0x96C78339A82E0B67(Local_463.f_4, "window_rr");
				Local_409 = { unk_0xA277059EBE3B154A(Local_463.f_4, uVar0) };
				Local_409 = { unk_0x483D90C99A690DBF(Local_463.f_4, Local_409) };
				Local_421 = { Local_409 };
				Local_409.f_2 = (Local_409.f_2 + 0.15f);
				Local_409.f_1 = (Local_409.f_1 - 0.15f);
				Local_412 = { unk_0xA277059EBE3B154A(Local_463.f_4, uVar1) };
				Local_412 = { unk_0x483D90C99A690DBF(Local_463.f_4, Local_412) };
				Local_424 = { Local_412 };
				Local_412.f_2 = (Local_412.f_2 + 0.15f);
				Local_415 = { unk_0xA277059EBE3B154A(Local_463.f_4, uVar2) };
				Local_415 = { unk_0x483D90C99A690DBF(Local_463.f_4, Local_415) };
				Local_427 = { Local_415 };
				Local_415.f_2 = (Local_415.f_2 + 0.15f);
				Local_415.f_1 = (Local_415.f_1 - 0.15f);
				Local_418 = { unk_0xA277059EBE3B154A(Local_463.f_4, uVar3) };
				Local_418 = { unk_0x483D90C99A690DBF(Local_463.f_4, Local_418) };
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

void func_214(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_40(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_40(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0xDA59400FE5A72CDA(Var0, Var3);
		*uParam0 = unk_0x2B2CCF3F6B9ED3A3(Var0, Var3, 0, 1, 1, 1);
		unk_0x7B2D1A3447B0AD5C(Param1, fParam4, 0);
	}
	else
	{
		unk_0x6055506B2BE3690D();
		unk_0x1AAA727AD9762D22(*uParam0, 0);
	}
}

void func_215(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_256(uParam0, 16, 4f, 0);
		unk_0x59C0D363E5A5B548();
	}
}

int func_216(var uParam0, int iParam1)
{
	if (!unk_0x4A980428C9937F4E(2))
	{
		return 0;
	}
	func_223(12);
	if (func_24(uParam0->f_44, 8))
	{
		if (!func_24(uParam0->f_44, 128))
		{
			if (unk_0x3DFB3BFF04D48E00(unk_0xD5A676B97920D126()) && !func_24(uParam0->f_44, 256))
			{
				func_224(&(uParam0->f_44), 256);
			}
			if (func_24(uParam0->f_44, 256) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				func_187(uParam0, 135, 1, 0, 1);
				func_224(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_220(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_44, 8))
			{
				unk_0xBE29918F5B8EC2EF(uParam0->f_3, unk_0xD5A676B97920D126(), 0);
				func_187(uParam0, 133, 1, 0, 1);
				func_224(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x00B5B0B68211D89B(uParam0->f_3) || unk_0xFCDC1684830866E8(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_289(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x0DBD8FE531FD620D(uParam0->f_2, 0);
		unk_0x70057AC4F7A58052(uParam0->f_4, 1);
		if (unk_0x98BE504E8B389665(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0xBC82BAA0C1572324(uParam0->f_4);
			func_218(uParam0);
			func_52(2, 0);
			bLocal_94 = true;
			func_182(&uLocal_90);
			return 1;
		}
		else
		{
			func_289(uParam0, "No Taxi", 21);
			func_217("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_217(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

void func_218(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		if (func_219())
		{
		}
	}
}

int func_219()
{
	if (unk_0xF44A5E894FE76438(unk_0x7BC26452241AC7C9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
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
				bVar2 = func_222(iVar0);
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
					if (!func_24(uParam0->f_44, 64))
					{
						if (unk_0x4A980428C9937F4E(2))
						{
							func_217("TX_VIP_DMGD", -1);
							if (func_221("TX_VIP_DMGD"))
							{
								func_224(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_44, 32))
					{
						if (unk_0x4A980428C9937F4E(2))
						{
							func_217("TX_VIP_CAR", -1);
							if (func_221("TX_VIP_CAR"))
							{
								func_224(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_44, 16))
					{
						if (unk_0x4A980428C9937F4E(2))
						{
							func_217("TX_VIP_SMALL", -1);
							if (func_221("TX_VIP_SMALL"))
							{
								func_224(&(uParam0->f_44), 16);
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

bool func_221(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

int func_222(int iParam0)
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

void func_223(int iParam0)
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

void func_224(var uParam0, int iParam1)
{
	func_225(uParam0, iParam1);
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_227()
{
	Local_343.f_0 = 0;
	func_244(34052, 34027, 1);
	func_244(33788, 33765, 1);
	func_244(33703, 33678, 1);
	func_244(33606, 33582, 1);
	func_244(33472, 33451, 1);
	func_244(33398, 33373, 1);
	func_244(33231, 33208, 1);
}

int func_228(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_229(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (func_231(uParam0->f_4))
		{
			func_230(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_230(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_231(int iParam0)
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

int func_232(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_233(var uParam0)
{
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		if (func_234(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_235(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_230(uParam0, 11);
	return 1;
}

int func_236(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (unk_0x3ACA21A90E0A949C(uParam0->f_4) && !unk_0xE8112E973BED9DEF(uParam0->f_4))
		{
			if (!func_134(uParam0, 25))
			{
				func_256(uParam0, 25, 0, 0);
			}
			else if (func_379(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_134(uParam0, 25))
		{
			func_141(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_237(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_238(var uParam0)
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

int func_239(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_240(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4, 0))
	{
		if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
		{
			if (unk_0x0700B6EAA7894D54(uParam0->f_4))
			{
				if (func_234(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_241(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_242(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0->f_4))
	{
		if (func_243(uParam0->f_4))
		{
			func_230(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0)
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

void func_244(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_225(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_225(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_245(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_289(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_246(var uParam0)
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

void func_247()
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

int func_248()
{
	if (!unk_0x7AD0E9452821C95D(Local_893.f_41[0]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_41[1]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_41[2]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x52622CA85B1C304B(uLocal_1090))
	{
		return 0;
	}
	if (!func_249(&iLocal_999, 1))
	{
		func_250("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_999, 1000);
		return 0;
	}
	return 1;
}

int func_249(int iParam0, bool bParam1)
{
	if (!unk_0x7AD0E9452821C95D(func_21()))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xD7669BF035CDA5F6("gestures@m@standing@casual"))
		{
			func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xD7669BF035CDA5F6("oddjobs@taxi@"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("oddjobs@towingcome_here"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("misscommon@response"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x4A980428C9937F4E(2))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_250(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x84A97C70FFDEC0C8() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x84A97C70FFDEC0C8();
}

void func_251(var uParam0, int iParam1)
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

void func_252(var uParam0)
{
	if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
	{
		uParam0->f_8 = func_194(uParam0->f_3, 0, 0);
		unk_0x2EDAF851B28036F0(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x9FF365C8D1405D30(1, 0);
		unk_0xD947D2F43FD7F6D7(uParam0->f_8, 1);
	}
}

int func_253(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param4 };
	func_41(uParam0->f_14, 0);
	unk_0xBCDF9E3086B4229C(uParam0->f_14, 25f, 0, 0, 0, 0, 0);
	if (unk_0x7887B64A08364778(Global_100364.f_225[0]))
	{
		(*uParam7)[0] = Global_100364.f_225[0];
		(*uParam7)[1] = Global_100364.f_225[1];
		(*uParam7)[2] = Global_100364.f_225[2];
		unk_0xC53606C390BE2727((*uParam7)[0], 1, 1);
		unk_0xC53606C390BE2727((*uParam7)[1], 1, 1);
		unk_0xC53606C390BE2727((*uParam7)[2], 1, 1);
	}
	else
	{
		(*uParam7)[0] = unk_0x8C855D8124E955CE(26, uParam7->f_41[0], uParam0->f_11, -178.76f, 1, 1);
		(*uParam7)[1] = unk_0x8C855D8124E955CE(26, uParam7->f_41[1], unk_0x7E140C583F91AE2B((*uParam7)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam7)[2] = unk_0x8C855D8124E955CE(26, uParam7->f_41[1], unk_0x7E140C583F91AE2B((*uParam7)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_255(uParam0, uParam7[0]);
	uParam7->f_51[0] = 0;
	uParam7->f_51[1] = 0;
	uParam7->f_51[2] = 0;
	uParam7->f_12[0] = 0;
	uParam7->f_12[1] = 1;
	uParam7->f_12[2] = 2;
	if ((!unk_0x00B5B0B68211D89B((*uParam7)[0]) && !unk_0x00B5B0B68211D89B((*uParam7)[1])) && !unk_0x00B5B0B68211D89B((*uParam7)[2]))
	{
		unk_0xBE29918F5B8EC2EF((*uParam7)[1], (*uParam7)[0], 0);
		unk_0xBE29918F5B8EC2EF((*uParam7)[2], (*uParam7)[0], 0);
		unk_0xBE29918F5B8EC2EF((*uParam7)[0], (*uParam7)[1], 0);
	}
	if (!unk_0x00B5B0B68211D89B((*uParam7)[2]))
	{
		func_7(&(uParam0->f_244), 5, (*uParam7)[2], "TaxiPaulie", 0, 1);
		unk_0x545EC2C7EB66F6DD((*uParam7)[2], "TaxiPaulie");
		unk_0x237B0CFB6EEBD3BA((*uParam7)[2], 317, 1);
	}
	if (!unk_0x00B5B0B68211D89B((*uParam7)[1]))
	{
		func_7(&(uParam0->f_244), 4, (*uParam7)[1], "TaxiClyde", 0, 1);
		unk_0x545EC2C7EB66F6DD((*uParam7)[1], "TaxiClyde");
		unk_0x237B0CFB6EEBD3BA((*uParam7)[1], 317, 1);
	}
	if (!unk_0x00B5B0B68211D89B((*uParam7)[0]))
	{
		func_7(&(uParam0->f_244), 3, (*uParam7)[0], "TaxiDarren", 0, 1);
		unk_0x545EC2C7EB66F6DD((*uParam7)[0], "TaxiDarren");
		unk_0x237B0CFB6EEBD3BA((*uParam7)[0], 317, 1);
		unk_0x5CF7BD3BFEB33582("TAXI_Passenger", &(uParam0->f_413));
		unk_0x42AFB71D42AF78EA(1, uParam0->f_413, joaat("player"));
		unk_0x417BCC1ECC12E9A2((*uParam7)[0], uParam0->f_413);
		func_254((*uParam7)[1], uParam0->f_413);
		func_254((*uParam7)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_254(int iParam0, var uParam1)
{
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		unk_0x417BCC1ECC12E9A2(iParam0, uParam1);
	}
}

void func_255(var uParam0, var uParam1)
{
	if (!unk_0x00B5B0B68211D89B(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_256(var uParam0, int iParam1, float fParam2, bool bParam3)
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

void func_257()
{
	unk_0x9CD38B75BED5A7C7();
	unk_0x49E996A1E39EAAD7("oddjobs@taxi@gyn@cc@hotbox");
}

void func_258()
{
	unk_0x4ACD1E4CBA159ED1(Local_893.f_45[0]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_45[1]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_45[2]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_45[3]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_45[4]);
	unk_0x4ACD1E4CBA159ED1(joaat("stretch"));
	unk_0x4ACD1E4CBA159ED1(joaat("superd"));
	unk_0x49E996A1E39EAAD7("oddjobs@taxi@gyn@cc@intro");
	unk_0x49E996A1E39EAAD7("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x49E996A1E39EAAD7("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_1090 = func_259();
}

var func_259()
{
	return unk_0x542F16A736FAC9A6("MIDSIZED_MESSAGE");
}

void func_260()
{
	unk_0x4ACD1E4CBA159ED1(Local_893.f_41[0]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_41[1]);
	unk_0x4ACD1E4CBA159ED1(Local_893.f_41[2]);
	func_261(1);
}

void func_261(bool bParam0)
{
	unk_0x4ACD1E4CBA159ED1(func_21());
	if (bParam0)
	{
		unk_0x49E996A1E39EAAD7("gestures@m@standing@casual");
	}
	unk_0x49E996A1E39EAAD7("oddjobs@taxi@");
	unk_0x49E996A1E39EAAD7("oddjobs@towingcome_here");
	unk_0x49E996A1E39EAAD7("misscommon@response");
	unk_0x68A99AC5778ED123("TAXI", 2);
	if (!func_24(Global_101652.f_18040, 128))
	{
		func_224(&(Global_101652.f_18040), 128);
	}
}

void func_262(var uParam0, var uParam1)
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

void func_263(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_264(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_2, 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0xB529B2A4B7C64D6D(uParam1->f_4[iVar0], 0))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0xD4B3FF1E63C36391(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0xB529B2A4B7C64D6D(uParam1->f_10, 0))
	{
		if (func_10(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			unk_0xB24D3BF5DABD13AA(&(uParam1->f_10));
			unk_0xB24D3BF5DABD13AA(&(uParam1->f_11));
		}
	}
}

void func_265(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
		{
			if (bParam2)
			{
				if (func_379(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_187(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_187(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_256(uParam0, 10, 0f, 1);
				}
			}
			else if (func_379(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_187(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_187(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_256(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_379(uParam0, 10) > 30f)
		{
			if (!func_51())
			{
				if (uParam0->f_112)
				{
					func_187(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_187(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_256(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_182(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_288(uParam0))
			{
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_287(uParam0, 1);
				func_285(5, uParam0);
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_182(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_283(uParam0))
			{
				func_287(uParam0, 1);
				func_285(0, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_182(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_282(uParam0))
			{
				func_287(uParam0, 1);
				func_285(1, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x7887B64A08364778(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xB38A470B669AC00B(uParam0->f_4);
				func_182(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_97(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_281(uParam0))
			{
				func_287(uParam0, 1);
				func_285(8, uParam0);
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_182(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_280(uParam0))
			{
				func_287(uParam0, 1);
				func_285(6, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_182(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_279(uParam0))
			{
				func_287(uParam0, 1);
				func_285(4, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_182(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_278(uParam0))
			{
				func_285(7, uParam0);
				func_287(uParam0, 1);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_182(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_277(uParam0))
			{
				func_287(uParam0, 1);
				func_285(9, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_182(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_271(uParam0))
			{
				func_287(uParam0, 1);
				func_285(13, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_182(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_270(uParam0))
			{
				func_287(uParam0, 1);
				func_285(14, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_182(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_269(uParam0))
			{
				func_287(uParam0, 1);
				func_285(11, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_182(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_268(uParam0))
			{
				func_287(uParam0, 1);
				func_285(12, uParam0);
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_284(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_267(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_97(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_266(uParam0))
			{
				if (uParam0->f_113)
				{
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_287(uParam0, 1);
				func_285(2, uParam0);
				func_284(uParam0);
			}
		}
	}
}

int func_266(var uParam0)
{
	float fVar0;
	
	if (!unk_0x00B5B0B68211D89B(uParam0->f_2))
	{
		if ((!unk_0x4BF9154155FB7938(uParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x78D3CDB884C74FEB(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_182(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_97(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x78D3CDB884C74FEB(uParam0->f_2);
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

void func_267(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_100(uParam0, fParam1);
	}
}

int func_268(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_182(&(Local_190[12 /*10*/].f_3));
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

int func_269(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
		if (unk_0xC3D3EC28F0EB3C6D(Var0.f_0) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_182(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_97(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0xC3D3EC28F0EB3C6D(uLocal_342) - unk_0xC3D3EC28F0EB3C6D(Var0.f_0)) < 0f)
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

int func_270(var uParam0)
{
	if (((((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xC2F89F29527CAB64(unk_0xC086F8D75730FA3A(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x7887B64A08364778(uParam0->f_5))
			{
				if ((unk_0x78D3CDB884C74FEB(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xB529B2A4B7C64D6D(uParam0->f_5, 0) && !unk_0x06F2E112EBC0C4FB(uParam0->f_5, -1, 0)))
				{
					func_182(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_97(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x88D40E81D8E0AD6F(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_97(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x88D40E81D8E0AD6F(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	if (((unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_272(uParam0->f_4) && unk_0x78D3CDB884C74FEB(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_182(&(Local_190[13 /*10*/].f_3));
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

bool func_272(int iParam0)
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
	Var9 = { func_276((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_275(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_273(unk_0xC086F8D75730FA3A(iParam0, 1), Var15, Var18, Var21);
}

int func_273(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_276(Param6 - Param3) };
	Var3 = { func_276(Param9 - Param3) };
	fVar6 = func_274(Param0, Var0);
	fVar7 = func_274(Param3, Var0);
	fVar8 = func_274(Param6, Var0);
	fVar9 = func_274(Param0, Var3);
	fVar10 = func_274(Param3, Var3);
	fVar11 = func_274(Param9, Var3);
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

float func_274(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_275(struct<3> Param0, int iParam3)
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

Vector3 func_276(struct<3> Param0)
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

int func_277(var uParam0)
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

int func_278(var uParam0)
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

int func_279(var uParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0 = unk_0x0AA0841C3DF2D634(unk_0xFB6B3EEFAB2DD12C());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_182(&(Local_190[4 /*10*/].f_3));
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

int func_280(var uParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		iVar0 = unk_0xA46E10BF441FBC7C(unk_0xFB6B3EEFAB2DD12C());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_182(&(Local_190[6 /*10*/].f_3));
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

int func_281(var uParam0)
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
					func_187(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_187(uParam0, 72, 1, 0, 1);
				}
				func_96(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		Var0 = { unk_0x5ED393E954C4FA70(uParam0->f_4, 1) };
		if (unk_0xC3D3EC28F0EB3C6D(Var0.f_0) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_182(&(Local_190[1 /*10*/].f_3));
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

int func_283(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (!unk_0xE8112E973BED9DEF(uParam0->f_4) && unk_0x7C4BC3264552091A(uParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_182(&(Local_190[0 /*10*/].f_3));
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

void func_284(var uParam0)
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
	func_256(uParam0, 10, 0f, 1);
	unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
}

void func_285(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_286(uParam1, iParam0);
	func_96(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_286(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_287(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_288(var uParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
	{
		if (unk_0x78D3CDB884C74FEB(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_182(&(Local_190[5 /*10*/].f_3));
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

void func_289(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_175();
	func_402(2);
	Var0 = { func_306() };
	if ((!unk_0xC55B9553B3EDADE9(&Var0) && func_51()) && !unk_0xCC257DA11A122B5F(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x59C0D363E5A5B548();
		unk_0x04890EB0282525A5(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			if (!func_116(uParam0))
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
		func_256(uParam0, 3, 0, 0);
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
				func_304(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_116(uParam0))
			{
				if (unk_0x0700B6EAA7894D54(uParam0->f_4))
				{
					func_300(uParam0, 4096, 0);
				}
				else
				{
					func_300(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_304(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_304(uParam0, &Var0);
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
				func_304(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_304(uParam0, &Var0);
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_304(uParam0, &Var0);
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
				func_304(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_300(uParam0, 0, 0);
			func_304(uParam0, &Var0);
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
				func_304(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_304(uParam0, &Var0);
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
				func_304(uParam0, &Var0);
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_299(&Var0);
			func_290(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_304(uParam0, &Var0);
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
					func_304(uParam0, &Var0);
				}
			}
			else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
			{
				func_302(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_256(uParam0, 3, 0f, 1);
	}
}

int func_290(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_298(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_291(sParam2, iParam3, 0);
}

int func_291(char* sParam0, int iParam1, bool bParam2)
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
					func_176();
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
		if (func_297(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_296();
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
				func_295();
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
				if (func_294())
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
			if (func_33())
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
			func_293();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_292();
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
		func_176();
	}
	return 0;
}

void func_292()
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

void func_293()
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

int func_294()
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

void func_295()
{
	if (func_77(14))
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
		Global_14443 = func_93();
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

void func_296()
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

bool func_297(int iParam0, int iParam1)
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

void func_298(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_299(char* sParam0)
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

void func_300(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		unk_0x5457695C257D1470(uParam0->f_3, 0);
		unk_0x3C05FE2296BF5F53(uParam0->f_3);
		unk_0x738326127C161284(uParam0->f_3, 3, 0);
		unk_0x77E24C0B92B4FC24(uParam0->f_3, 17, 1);
		unk_0x37338B7B7C4982DC(uParam0->f_3);
		if ((func_105(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_110(uParam0->f_29)) && !bParam2)
		{
			func_301(uParam0);
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

void func_301(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (func_42(func_43(), uParam0->f_29, 0))
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

void func_302(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x063B714A2080E45E(uParam0, sParam1, uParam2, func_303(iParam3), 0);
}

int func_303(int iParam0)
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

void func_304(var uParam0, char* sParam1)
{
	if (func_305(uParam0))
	{
		func_290(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_305(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
	{
		if (func_10(unk_0xD5A676B97920D126(), uParam0->f_3, 1) < 40f && !unk_0x27A556D1AF39812E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_306()
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

int func_307(var uParam0)
{
	return uParam0->f_118;
}

void func_308()
{
	func_337(&Local_463);
	if (func_336(&Local_463, &Local_1012))
	{
		switch (Local_1012.f_27)
		{
			case 0:
				if (Local_463.f_410 == 9)
				{
					if (!func_132(&Local_463))
					{
						if (func_335("TAXI_OBJ_CC1") || unk_0x6901135DDCC4904D(Local_893.f_36[2]))
						{
							Local_1012.f_27++;
						}
						else if (func_165(&Local_463) != 10)
						{
							func_187(&Local_463, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_165(&Local_463) > 10 && func_165(&Local_463) != 15) && !func_132(&Local_463))
				{
					func_187(&Local_463, 15, 1, 0, 0);
					if (bLocal_1011)
					{
					}
					func_181(&Local_463, 7);
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
				if (func_379(&Local_463, 11) > 17f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 700f)
				{
					func_187(&Local_463, 95, 1, 0, 0);
					if (bLocal_1011)
					{
					}
				}
				else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_165(&Local_463) > 10 && func_165(&Local_463) != 16) && !func_132(&Local_463))
				{
					func_187(&Local_463, 16, 1, 0, 0);
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
				if (func_379(&Local_463, 11) > 8f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 700f)
				{
					func_187(&Local_463, 94, 1, 0, 0);
					if (bLocal_1011)
					{
					}
				}
				else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_379(&Local_463, 11) > 20f || func_105(Local_463.f_4, Local_893.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_446)
					{
						iLocal_446 = 1;
					}
					if (!bLocal_444)
					{
						func_187(&Local_463, 96, 1, 0, 0);
						bLocal_444 = true;
						if (bLocal_1011)
						{
						}
					}
				}
				else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_379(&Local_463, 18) > unk_0xB5FEA1F26F05B9F5(8f, 16f))
				{
				}
				break;
			}
	}
	func_309(&Local_463, &uLocal_1042, &Local_1012, bLocal_1011);
}

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_317(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_134(uParam0, 2))
	{
		if (func_316(uParam1))
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
				if (!func_315(uParam0))
				{
					uParam2->f_7 = { func_314(uParam1) };
					func_290(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_51())
				{
					uParam2->f_13 = { func_190() };
					if (unk_0xCC257DA11A122B5F(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_225(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_256(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_133(uParam0))
				{
					if (func_51())
					{
						func_256(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_311() };
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
				else if (func_51())
				{
					uParam2->f_19 = { func_306() };
				}
				else
				{
					func_225(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_256(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_134(uParam0, 14) && !func_51()) && !func_133(uParam0)) && func_379(uParam0, 18) > 1f)
				{
					func_256(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_51())
				{
					if (func_379(uParam0, 18) > 1f)
					{
						if (!unk_0xC55B9553B3EDADE9(&(uParam2->f_1)))
						{
							func_310(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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
					func_225(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_256(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_310(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_298(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_291(sParam2, iParam4, 0);
}

struct<6> func_311()
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

void func_312(var uParam0)
{
	int iVar0;
	
	iVar0 = func_313(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_224(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_131(), 24);
	}
}

int func_313(var uParam0)
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

struct<6> func_314(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_224(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_315(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_169("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_169("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_169("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_169("TX_OBJ_GYB_DO", 0, 0) || func_169("TAXI_OBJ_GYB", 0, 0)) || func_169("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_169("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_169("TX_OBJ_CYI_DO", 0, 0) || func_169("TAXI_OBJ_CYI_01", 0, 0)) || func_169("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_169("TX_OBJ_GYN_DO", 0, 0) || func_169("TAXI_OBJ_GYN", 0, 0)) || func_169("TAXI_OBJ_GYN_TG", 0, 0)) || func_169("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_169("TAXI_OBJ_CC1", 0, 0) || func_169("TAXI_OBJ_CC2", 0, 0)) || func_169("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_169("TAXI_OBJ_FTC1", 0, 0) || func_169("TAXI_OBJ_FTC2", 0, 0)) || func_169("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_169("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_169("TAXI_OBJ_GETRUN", 0, 0) || func_169("TAXI_OBJ_DRIVE", 0, 0)) || func_169("TAXI_OBJ_RETURN", 0, 0)) || func_169("TAXI_OBJ_POL", 0, 0)) || func_169("TAXI_OBJ_RUNOUT", 0, 0)) || func_169("TAXI_OBJ_POL", 0, 0));
}

int func_316(var uParam0)
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

void func_317(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_315(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_134(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_165(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_332(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
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
						func_331(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 2));
				}
				if (func_24(uParam0->f_98, 4))
				{
					func_256(uParam0, 16, 0, 0);
					func_215(uParam0, 0, 0);
				}
				func_151(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_379(uParam0, 16) > 1f)
				{
					func_153(1);
					if (uParam0->f_411 == 9)
					{
						func_209("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_209("TAXI_VIP_RETURN", 7500, 1);
					}
					func_256(uParam0, 16, 0, 0);
					func_215(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_302(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_379(uParam0, 16) > func_150(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_51()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_165(uParam0))
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
				func_331(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_332(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_290(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_187(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_256(uParam0, 16, 0, 0);
				func_187(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_24(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_334(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_331(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_256(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_209("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_209("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x6901135DDCC4904D(uParam0->f_9))
					{
						uParam0->f_9 = func_179(uParam0->f_17, 1);
					}
					else if (unk_0xDCA5942DC912553C(uParam0->f_9) == 0)
					{
						unk_0x97C445677A852D45(uParam0->f_9, 255);
						unk_0x4B55FF1D49C3A70D(uParam0->f_9, uParam0->f_17);
						unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
					}
				}
				func_187(uParam0, 10, 1, 0, 0);
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
				func_189(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_302(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x6901135DDCC4904D(uParam0->f_9))
					{
						uParam0->f_9 = func_179(uParam0->f_17, 1);
					}
					else if (unk_0xDCA5942DC912553C(uParam0->f_9) == 0)
					{
						unk_0x97C445677A852D45(uParam0->f_9, 255);
						unk_0x4B55FF1D49C3A70D(uParam0->f_9, uParam0->f_17);
						unk_0xD947D2F43FD7F6D7(uParam0->f_9, 1);
					}
				}
				func_187(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_327(uParam0, 33554432, Var0, "", 1, 8);
				func_256(uParam0, 16, 0, 0);
				func_187(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_51())
				{
					func_326(uParam0, 0);
					func_224(&(uParam0->f_44), 4);
					func_256(uParam0, 16, 0, 0);
					func_187(uParam0, 13, 0, 0, 0);
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
				func_189(&Var0);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_379(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_189(&Var0);
					}
					func_324(Var0, uParam1);
					func_224(&(uParam0->f_81), 67108864);
					func_256(uParam0, 16, 0, 0);
					func_256(uParam0, 11, 0, 0);
					func_215(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_379(uParam0, 11) > uParam0->f_36)
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
							func_189(&Var0);
						}
					}
					func_324(Var0, uParam1);
					func_256(uParam0, 11, 0, 0);
					func_256(uParam0, 16, 0, 0);
					func_215(uParam0, 0, 0);
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
					func_189(&Var0);
				}
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
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
				func_189(&Var0);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
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
				func_189(&Var0);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_189(&Var0);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				func_224(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 1, 0, 8);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
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
					func_323(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_323(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_324(Var0, uParam1);
				func_332(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 6, 0f, 1);
				func_215(uParam0, 0, 0);
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
					func_323(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_323(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_324(Var0, uParam1);
				func_332(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 6, 0f, 1);
				func_215(uParam0, 0, 0);
				break;
			
			case 12:
				func_209("TAXI_OBJ_GYB", 3500, 1);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_209("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_209("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_209("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_98, 268435456))
				{
					func_209("TAXI_OBJ_CYI_01", 7500, 1);
					func_224(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_189(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_189(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_189(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 33:
				func_209("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_82, 8192))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_189(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_324(Var0, uParam1);
						}
						else
						{
							func_331(uParam0, &Var0, 0, 0, 8);
						}
						func_224(&(uParam0->f_82), 8192);
						func_256(uParam0, 16, 0, 0);
						func_256(uParam0, 11, 0, 0);
						func_215(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_189(&Var0);
					func_331(uParam0, &Var0, 0, 0, 8);
					func_224(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_189(&Var0);
					func_331(uParam0, &Var0, 0, 0, 8);
					func_224(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 46, 1, 0, 0);
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
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_215(uParam0, 0, 0);
				break;
			
			case 139:
				func_209("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_187(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x7BC26452241AC7C9(0, 120);
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
					func_224(&(uParam0->f_82), 268435456);
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
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x7BC26452241AC7C9(0, 100);
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
					func_224(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_209("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_215(uParam0, 0, 0);
				func_187(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_51())
				{
					func_209("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_215(uParam0, 0, 0);
					func_187(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_209("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_215(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_81, 1))
				{
					func_322(uParam0, 1, Var0, "_sick1", 8);
					func_22(&(uParam0->f_81), 2);
				}
				else if (!func_24(uParam0->f_81, 2))
				{
					func_322(uParam0, 2, Var0, "_sick2", 8);
					func_22(&(uParam0->f_81), 1);
				}
				func_332(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
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
				func_224(&(uParam0->f_81), 2097152);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 16, 0, 0);
				func_332(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_215(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_81, 4))
				{
					func_322(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_81, 8))
				{
					func_322(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_322(uParam0, 8, Var0, "_turns3", 8);
					func_22(&(uParam0->f_81), 4);
					func_22(&(uParam0->f_81), 8);
				}
				func_332(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_321(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_302(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_290(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_334(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_334(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_332(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 128);
					func_22(&(uParam0->f_83), 256);
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 256);
					func_22(&(uParam0->f_83), 512);
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 512);
					func_22(&(uParam0->f_83), 128);
					func_256(uParam0, 16, 0, 0);
				}
				func_215(uParam0, 0, 0);
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
						func_189(&Var0);
					}
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 1);
					func_22(&(uParam0->f_83), 2);
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_189(&Var0);
					}
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 4);
					}
					else
					{
						func_22(&(uParam0->f_83), 1);
					}
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_189(&Var0);
					}
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 4);
					func_22(&(uParam0->f_83), 1);
					func_256(uParam0, 16, 0, 0);
				}
				func_332(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 4096))
				{
					func_327(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 8192))
				{
					func_327(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_332(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 16384))
				{
					func_327(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 32768))
				{
					func_327(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_332(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_24(uParam0->f_82, 8))
					{
						func_320(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 16))
					{
						func_320(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 32))
					{
						func_320(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_215(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_256(uParam0, 16, 0, 0);
					func_215(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_81, 65536))
				{
					func_327(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 131072))
				{
					func_327(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_215(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_321(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_302(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_24(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 8);
					func_22(&(uParam0->f_83), 16);
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 16);
					func_22(&(uParam0->f_83), 32);
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 64);
					}
					else
					{
						func_22(&(uParam0->f_83), 8);
					}
					func_256(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 64);
					func_22(&(uParam0->f_83), 8);
					func_256(uParam0, 16, 0, 0);
				}
				func_332(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 65));
					func_215(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 66));
					func_215(uParam0, 0, 0);
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
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								func_332(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								func_332(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_334(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_332(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_256(uParam0, 16, 0, 0);
								func_215(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_331(uParam0, &Var0, 0, 0, 8);
									func_256(uParam0, 16, 0, 0);
									func_256(uParam0, 11, 0, 0);
									func_215(uParam0, 0, 0);
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
									func_189(&Var0);
									func_331(uParam0, &Var0, 0, 0, 8);
									func_256(uParam0, 16, 0, 0);
									func_256(uParam0, 11, 0, 0);
									func_215(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_187(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_82, 1))
				{
					func_320(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 2))
				{
					func_320(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 4))
				{
					func_320(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_215(uParam0, 0, 0);
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
				func_334(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_302(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_256(uParam0, 16, 0, 0);
				func_332(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_321(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_302(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_319(uParam0, Var0, 8);
				}
				func_332(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_83, 1024))
				{
					func_224(&(uParam0->f_83), 1024);
					func_256(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2048))
				{
					func_224(&(uParam0->f_83), 2048);
					func_256(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4096))
				{
					func_224(&(uParam0->f_83), 4096);
					func_256(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_189(&Var0);
					func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_215(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_82, 1024))
				{
					func_320(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_82), 2048);
				}
				else if (!func_24(uParam0->f_82, 2048))
				{
					func_320(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_215(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 52, 1, 0, 0);
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
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
				{
					func_302(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_321(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_331(uParam0, &Var0, 0, 0, 8);
						func_187(uParam0, 52, 1, 0, 0);
						func_256(uParam0, 16, 0, 0);
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
						func_331(uParam0, &Var0, 0, 0, 8);
						func_256(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_256(uParam0, 16, 0, 0);
					func_215(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_332(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_256(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xAA5B10AEB58EAA13(unk_0xF3F8195C98263BF5()) >= 1)
				{
					func_209("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_215(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_81, 262144))
				{
					func_327(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_327(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_327(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_332(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_318(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_82, 134217728))
				{
					func_318(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_332(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 100:
				func_209("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_215(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_189(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_189(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
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
					func_189(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_82, 65536))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
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
						func_189(&Var0);
						func_324(Var0, uParam1);
						func_224(&(uParam0->f_82), 65536);
						func_256(uParam0, 16, 0, 0);
						func_256(uParam0, 11, 0, 0);
						func_215(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_82, 131072))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_189(&Var0);
						func_324(Var0, uParam1);
						func_224(&(uParam0->f_82), 131072);
						func_256(uParam0, 16, 0, 0);
						func_256(uParam0, 11, 0, 0);
						func_215(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_224(&(uParam0->f_82), 8388608);
				}
				else if (!func_24(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_224(&(uParam0->f_82), 16777216);
				}
				else if (!func_24(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_224(&(uParam0->f_82), 33554432);
				}
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_189(&Var0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_324(Var0, uParam1);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_187(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_224(&(uParam0->f_81), 2097152);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_189(&Var0);
				func_324(Var0, uParam1);
				func_224(&(uParam0->f_81), 67108864);
				func_256(uParam0, 16, 0, 0);
				func_256(uParam0, 11, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_327(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
					{
						func_302(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_187(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_81, 268435456))
				{
					func_327(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_187(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_209("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_215(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_327(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
						{
							func_302(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_327(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_187(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_209("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_215(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_290(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_256(uParam0, 16, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_81, 16777216))
				{
					func_327(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_215(uParam0, 0, 0);
				break;
			
			case 88:
				func_209("TAXI_TIEFLEE", 7500, 1);
				func_215(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_98, 536870912))
				{
					func_209("TAXI_OBJ_CYI_1B", 7500, 1);
					func_224(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_215(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_189(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_215(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_215(uParam0, 0, 0);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_215(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_331(uParam0, &Var0, 1, 0, 8);
				func_187(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_209("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_187(uParam0, 0, 0, 0, 0);
				func_215(uParam0, 0, 0);
				break;
			}
	}
}

void func_318(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_224(&(uParam0->f_82), iParam1);
	func_256(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_189(&Param2);
	}
	func_290(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_319(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_82, 64))
	{
		func_224(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_82, 128))
	{
		func_224(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x7BC26452241AC7C9(1, 3), 24);
	}
	func_333(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_256(uParam0, 16, 0, 0);
}

void func_320(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_224(&(uParam0->f_82), iParam1);
	func_256(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_189(&Param2);
		}
	}
	func_290(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_321(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_322(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_224(&(uParam0->f_81), iParam1);
	func_256(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_290(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_323(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_234(*uParam0, iVar1))
		{
			func_225(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_189(sParam2);
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

void func_324(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_325(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_224(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_325(var uParam0)
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

void func_326(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_209("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_209("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_209("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_209("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_209("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_209("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_209("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_209("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_209("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_209("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_209("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_209("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_209("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_327(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_224(&(uParam0->f_81), iParam1);
	func_256(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_189(&Param2);
	}
	func_290(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_328(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_256(uParam0, 16, 0, 0);
	func_256(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x00B5B0B68211D89B(uParam0->f_3))
	{
		unk_0x1AED12AE709D8F50(uParam0->f_3, &cParam1, func_329(uParam0));
	}
}

char* func_329(var uParam0)
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

char* func_330(var uParam0, int iParam1)
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

int func_331(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_256(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_256(uParam0, 17, 0f, 1);
	}
	func_215(uParam0, iParam2, 0);
	return func_290(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_332(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_333(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_298(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_291(sParam2, iParam4, 0);
}

void func_334(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_234(*uParam0, iVar1))
		{
			func_225(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_189(sParam2);
				}
				else
				{
					func_189(sParam2);
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

int func_335(char* sParam0)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (func_169(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_336(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_134(uParam0, 9));
}

void func_337(var uParam0)
{
	if (func_134(uParam0, 17))
	{
		if (!func_134(uParam0, 14))
		{
			if (!func_133(uParam0))
			{
				if (!func_51())
				{
					func_141(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_338(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (unk_0x7887B64A08364778(Global_100364.f_225[3]))
	{
		uParam0->f_4[0] = Global_100364.f_225[3];
		uParam0->f_4[1] = Global_100364.f_225[4];
		uParam0->f_4[2] = Global_100364.f_225[5];
		unk_0xC53606C390BE2727(uParam0->f_4[0], 1, 1);
		unk_0xC53606C390BE2727(uParam0->f_4[1], 1, 1);
		unk_0xC53606C390BE2727(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x8C855D8124E955CE(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = unk_0x8C855D8124E955CE(26, uParam0->f_45[1], unk_0x7E140C583F91AE2B(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = unk_0x8C855D8124E955CE(26, uParam0->f_45[2], unk_0x7E140C583F91AE2B(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (unk_0x7887B64A08364778(Global_100364.f_225[6]))
	{
		uParam0->f_4[3] = Global_100364.f_225[6];
		uParam0->f_4[4] = Global_100364.f_225[7];
		unk_0xC53606C390BE2727(uParam0->f_4[3], 1, 1);
		unk_0xC53606C390BE2727(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x8C855D8124E955CE(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = unk_0x8C855D8124E955CE(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (unk_0x7887B64A08364778(Global_100364.f_222[0]))
	{
		uParam0->f_10 = Global_100364.f_222[0];
		uParam0->f_11 = Global_100364.f_222[1];
		unk_0xC53606C390BE2727(uParam0->f_10, 1, 1);
		unk_0xC53606C390BE2727(uParam0->f_11, 1, 1);
	}
	else
	{
		uParam0->f_10 = unk_0xDE8A46A23FDCBBFE(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_11 = unk_0xDE8A46A23FDCBBFE(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var5 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_4[iVar1], 0))
		{
			unk_0x8DA3061503F2C4C8(uParam0->f_4[iVar1]);
			unk_0x873418BFBF9A6780(&uVar0);
			unk_0x456121A0AAC868D4(&uVar0);
			switch (iVar1)
			{
				case 0:
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4[1], 0);
					unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xBB64ADC3483D3A47(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xBB64ADC3483D3A47(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4[0], 0);
					unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xBB64ADC3483D3A47(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xBB64ADC3483D3A47(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4[0], 0);
					unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xBB64ADC3483D3A47(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xBB64ADC3483D3A47(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4[4], 0);
					unk_0x0988FFC0C75637DF(0, uParam0->f_4[4], 3, 2, 2);
					unk_0xD24CFC50D5E861E0(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0xBE29918F5B8EC2EF(0, uParam0->f_4[3], 0);
					unk_0x0988FFC0C75637DF(0, uParam0->f_4[3], 3, 2, 2);
					unk_0xD24CFC50D5E861E0(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[iVar1]) && (unk_0x1774A68441553185((*uParam0)[iVar1], 242628503) != 1 || unk_0x1774A68441553185((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0x5457695C257D1470((*uParam0)[iVar1], 1);
			unk_0x8DA3061503F2C4C8((*uParam0)[iVar1]);
			unk_0x873418BFBF9A6780(&uVar0);
			unk_0x456121A0AAC868D4(&uVar0);
			func_339(uParam0, iVar1, unk_0x7BC26452241AC7C9(1000, 2000));
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_339(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0xBE29918F5B8EC2EF(0, (*uParam0)[1], 0);
			unk_0x0988FFC0C75637DF(0, (*uParam0)[1], 3, 2, 2);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0xBE29918F5B8EC2EF(0, (*uParam0)[0], 0);
			unk_0x0988FFC0C75637DF(0, (*uParam0)[0], 3, 2, 2);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xBE29918F5B8EC2EF(0, (*uParam0)[0], 0);
			unk_0x0988FFC0C75637DF(0, (*uParam0)[0], 3, 2, 2);
			unk_0x290A57C93304EF16(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_340()
{
	if (!unk_0x7AD0E9452821C95D(Local_893.f_45[0]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_45[1]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_45[2]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_45[3]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(Local_893.f_45[4]))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(joaat("stretch")))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(joaat("superd")))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("oddjobs@taxi@gyn@cc@intro"))
	{
		func_250("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_250("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_999, 1000);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_250("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_999, 1000);
		return 0;
	}
	return 1;
}

bool func_341(var uParam0)
{
	return uParam0->f_117;
}

int func_342(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_348((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_348((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_348((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_346(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
			{
				if (func_348(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_289(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_343(uParam0);
	}
	return 0;
}

void func_343(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_345()) && !func_142(uParam0)) || ((uParam0->f_411 != 9 && func_220(uParam0, 1)) && !func_142(uParam0)))
		{
			uVar0 = func_344(uParam0->f_4);
			unk_0x9E5138EA66A3E119(&uVar0);
			uParam0->f_4 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			unk_0xC53606C390BE2727(uParam0->f_4, 1, 0);
			func_152(uParam0);
			func_145(uParam0, 0);
		}
	}
}

var func_344(var uParam0)
{
	return uParam0;
}

int func_345()
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
					if (unk_0x960985BE189C5A3B(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_346(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_347(uParam0, 0, 1))
			{
				func_289(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_347(uParam0, 0, 4))
			{
				func_289(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_347(uParam0, 0, 8))
			{
				func_289(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_347(uParam0, 1, 1))
			{
				func_289(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_347(uParam0, 0, 1))
			{
				func_289(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_116(uParam0))
			{
				func_289(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_347(var uParam0, int iParam1, int iParam2)
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
				func_187(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_187(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_348(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xD5A676B97920D126();
	if (!unk_0xB529B2A4B7C64D6D(iVar0, 0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_354(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_352(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_351(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_349(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_349(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_349(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_350(unk_0xD5A676B97920D126(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9B0C8A2FC23E64AB(iParam0) && func_9(iParam0, 1) < 1.5f)
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

int func_350(int iParam0, int iParam1)
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

int func_351(int iParam0, int iParam1, var uParam2)
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

int func_352(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xCF3CEB67F1DDCB15(iParam0) || func_353(iVar3))
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

int func_353(int iParam0)
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
						if (func_10(unk_0xD5A676B97920D126(), iParam0, 1) < 40f)
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

int func_354(int iParam0, var uParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
		{
			if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iParam0) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iParam0))
			{
				if (unk_0x205B4FC17ACAF4C8(iParam0, unk_0xD5A676B97920D126(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
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

void func_355(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xC55B9553B3EDADE9(&(uParam0->f_124)) && func_51())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_51())
				{
					StringCopy(&(uParam0->f_124), func_131(), 24);
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
		if (unk_0x7887B64A08364778(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_234(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_234(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_234(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_225(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x84A97C70FFDEC0C8();
							}
						}
						else
						{
							func_23(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_234(Local_343.f_1[iVar0 /*4*/], 4) && !func_234(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_225(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_289(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_357(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_134(uParam0, 27))
	{
		func_181(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_379(uParam0, 27) > 5f)
	{
		if (func_348(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_256(uParam0, 27, 0, 0);
			func_256(uParam0, 10, 0, 0);
			func_346(uParam0, &uVar0, uParam1);
		}
		func_343(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_358(uParam0);
	}
	if ((((!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()) && (unk_0xE7E9CC62D1C4C0A8(*uParam0) && !unk_0x9FB26939A9557171(*uParam0))) && (unk_0xE7E9CC62D1C4C0A8(uParam0->f_1) && !unk_0x9FB26939A9557171(uParam0->f_1))) && !unk_0xE7C48EF8F50001B1()) && !func_51())
	{
		if (func_379(uParam0, 26) > 10f)
		{
			func_141(uParam0, 26, 0);
			unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
		}
	}
	else if (func_134(uParam0, 26))
	{
		func_141(uParam0, 26, 0);
	}
	return 0;
}

void func_358(var uParam0)
{
	if (!func_378(uParam0->f_429))
	{
		uParam0->f_429 = func_377();
		func_368(&(uParam0->f_429), 0, 0, unk_0x7BC26452241AC7C9(4, 7), 0, 0, 0);
	}
	else if (func_359(uParam0->f_429))
	{
		func_289(uParam0, "Player took too long to make pickup", 9);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_367(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
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
	func_372(uParam0, iParam5);
	func_371(uParam0, iParam4);
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

void func_372(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
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
	
	func_375(&uVar0, unk_0xABA05E2C283C3D5F());
	func_374(&uVar0, unk_0xF72CA3D5BA977203());
	func_373(&uVar0, unk_0x83D6515EE2CBF18C());
	func_371(&uVar0, unk_0x3D13C79BF80EB767());
	func_372(&uVar0, unk_0xA93FEF8677A8AF58());
	func_370(&uVar0, unk_0xAC9128C6933DA69B());
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

float func_379(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_182(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_97(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_380()
{
	func_381(&Local_463);
	func_398();
}

void func_381(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_402(2);
	}
}

int func_382(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_51() && func_379(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0->f_3, 0))
		{
			if (unk_0xA4DB44DF73EF4FE5(uParam0->f_4, 0))
			{
				if (unk_0x04D83291EB9DE51D(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_234(uParam0->f_85, 32))
					{
						if (!unk_0x0700B6EAA7894D54(uParam0->f_4))
						{
							func_300(uParam0, 4160, 0);
						}
						else
						{
							func_300(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_300(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_300(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_300(uParam0, 0, 0);
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

void func_383(var uParam0)
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

int func_384(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	func_387(&Local_463, 7);
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
	func_386(&Local_463, 3, 6);
}

void func_386(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_387(var uParam0, int iParam1)
{
	func_397(1);
	func_155();
	func_6(&(uParam0->f_244));
	func_396(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_24(Global_101652.f_18040, 4))
	{
		func_224(&(Global_101652.f_18040), 4);
	}
	func_391(uParam0);
	func_389(uParam0);
	unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	uParam0->f_102 = (func_388(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x68A99AC5778ED123("TAXI", 2);
}

int func_388(int iParam0)
{
	return Global_101652.f_18040.f_39[iParam0];
}

void func_389(var uParam0)
{
	switch (func_63(uParam0))
	{
		case 0:
			func_390(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_390(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_390(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_390(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_390(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_390(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_390(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_390(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_390(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_390(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_390(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_391(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_395(uParam0, 3);
			func_394(uParam0, 14);
			break;
		
		case 1:
			func_395(uParam0, 14);
			func_394(uParam0, 8);
			break;
		
		case 2:
			func_395(uParam0, 8);
			func_394(uParam0, 7);
			break;
		
		case 3:
			func_395(uParam0, 15);
			func_394(uParam0, 6);
			break;
		
		case 4:
			func_395(uParam0, 0);
			func_394(uParam0, 3);
			break;
		
		case 5:
			func_395(uParam0, 6);
			func_394(uParam0, 7);
			break;
		
		case 6:
			func_395(uParam0, 8);
			func_394(uParam0, 15);
			break;
		
		case 7:
			func_395(uParam0, 8);
			func_394(uParam0, 14);
			break;
		
		case 8:
			func_395(uParam0, 7);
			func_394(uParam0, 15);
			break;
		
		case 9:
			func_395(uParam0, unk_0x7BC26452241AC7C9(0, 17));
			iVar0 = func_393((uParam0->f_418.f_2 + unk_0x7BC26452241AC7C9(1, 17)), 0, 16);
			func_394(uParam0, iVar0);
			func_392(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_392(var uParam0)
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

int func_393(int iParam0, int iParam1, int iParam2)
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

void func_394(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_395(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_396(var uParam0)
{
	uParam0->f_2 = unk_0xD5A676B97920D126();
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
	func_141(uParam0, 32, 0);
}

void func_397(bool bParam0)
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

void func_398()
{
	func_401(&Local_893);
	func_183();
	func_400();
	func_399();
	unk_0x01DFCA3621B68C4A();
}

void func_399()
{
	unk_0x2BC06D600B2B7A9A();
	unk_0x6989DACCC7A558AE("oddjobs@taxi@gyn@cc@hotbox");
}

void func_400()
{
	unk_0x8188DB74546FF484(Local_893.f_41[0]);
	unk_0x8188DB74546FF484(Local_893.f_41[1]);
	unk_0x8188DB74546FF484(Local_893.f_41[2]);
}

void func_401(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE0FBA7F5811E2E63(uParam0->f_73[iVar0]))
		{
			unk_0x912887F867F485C9(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}

void func_402(int iParam0)
{
	Global_100364.f_22 = iParam0;
}

