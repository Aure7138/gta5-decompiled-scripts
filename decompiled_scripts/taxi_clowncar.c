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
	uLocal_76 = unk_0xF41BA26D26B4196D();
	uLocal_77 = unk_0xFA8D3ADA9D2E2615();
	Local_82 = { 500f, 500f, 500f };
	fLocal_449 = 98f;
	fLocal_450 = 55f;
	fLocal_451 = 60f;
	iLocal_998 = 1;
	Local_1000 = { -1284.367f, 295.7437f, 63.83044f };
	Local_1003 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0xC11469DCA6FC3BB5(67))
	{
		func_397(2);
		func_393();
	}
	unk_0x36694B456BE80D0A(1);
	func_380();
	while (true)
	{
		if (unk_0xD42BD6EB2E0F1677(Local_462.f_2))
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
	uParam0->f_2 = unk_0x096275889B8E0EE0();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x096275889B8E0EE0());
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
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x096275889B8E0EE0());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
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
	
	if (func_379(&Local_462))
	{
		func_378(&Local_462);
		if (Local_462.f_410 > 0)
		{
			if (func_377(&Local_462, 0))
			{
				func_375();
			}
		}
		else if (func_374(&Local_462, 31) > 5f)
		{
			func_397(2);
			func_393();
		}
	}
	else
	{
		func_352(&Local_462, &uLocal_1082);
		func_351(&Local_462);
		func_350(&Local_462, &uLocal_999, 0);
		if (Local_462.f_410 < 9)
		{
			func_337(&Local_462, &Local_892, &uLocal_1082);
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
			if (!func_336(&Local_462))
			{
				if (!iLocal_1008)
				{
					if (func_335())
					{
						func_333(&Local_892);
						iLocal_1008 = 1;
					}
				}
				func_303();
			}
			else
			{
				func_284(&Local_462, "Taxi Not Driveable", func_302(&Local_462));
			}
		}
		if (Local_462.f_410 > 3)
		{
			if (!bVar3)
			{
				if (unk_0xB86D29B10F627379(Local_462.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0x7D5B1F88E7504BBA(Local_892.f_4[iVar0]))
						{
							if (unk_0x7B6E7BEC1143AC86(Local_892.f_4[iVar0], Local_462.f_4, 1))
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
					if (!unk_0x7D5B1F88E7504BBA(Local_892.f_4[iVar1]))
					{
						if (!unk_0x6CFF81397164A1D3(Local_892.f_4[iVar1]))
						{
							unk_0x0F1ABE64C3C18E5A(Local_892.f_4[iVar1]);
							unk_0x5EC7E18324A7D03D(&uVar2);
							unk_0xF4BF3E3D7FE56705(&uVar2);
							unk_0x06C6AD4F38E8412D(0, Local_462.f_2, 1000f, -1, 0, 0);
							unk_0xFF7E39890B2840DD(uVar2);
							unk_0xD59C10966EB589EA(Local_892.f_4[iVar1], uVar2);
							unk_0x5EC7E18324A7D03D(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_462.f_410 == 9)
		{
			func_260(&Local_462, 0, 1);
			func_259(&Local_462, &Local_892, 1128792064);
		}
		switch (Local_462.f_410)
		{
			case 0:
				func_258(&(Local_994[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_257(&Local_462, &Local_994);
				func_255();
				func_253();
				func_252();
				func_251(&Local_462, 16, 4f, 0);
				func_248(&Local_462, Local_1000, Local_1003, &Local_892);
				func_247(&Local_462);
				func_246(&Local_462, 1);
				break;
			
			case 1:
				if (func_243())
				{
					func_242();
					func_222();
					func_221(&Local_462);
					func_219(&(Local_462.f_100), 8);
					func_219(&(Local_462.f_100), 2048);
					func_219(&(Local_462.f_100), 256);
					Local_462.f_14 = { Local_1000 };
					Local_462.f_49 = 0;
					func_246(&Local_462, 3);
				}
				break;
			
			case 3:
				if (func_211(&Local_462, 3))
				{
					func_210(&Local_462, 1, 0);
					func_209(&uLocal_1099, Local_1000, 20f, 0);
					func_246(&Local_462, 5);
				}
				break;
			
			case 5:
				func_208();
				if (func_188(&Local_462, &Local_892))
				{
					unk_0xC1204B79D6DBB702(Local_462.f_428, &(Local_462.f_42), -1);
					func_246(&Local_462, 15);
				}
				break;
			
			case 15:
				if (func_186(&Local_462, &Local_892))
				{
					func_182(&Local_462, 8, 1, 0, 0);
					if (!unk_0x7D5B1F88E7504BBA(Local_892[0]))
					{
						unk_0x020E173F318C12DA(Local_892[0], 26, 1);
					}
					if (!unk_0x7D5B1F88E7504BBA(Local_892[1]))
					{
						unk_0x020E173F318C12DA(Local_892[1], 26, 1);
					}
					if (!unk_0x7D5B1F88E7504BBA(Local_892[2]))
					{
						unk_0x020E173F318C12DA(Local_892[2], 26, 1);
					}
					func_181(&Local_462);
					func_179(&Local_462, 0);
					func_178();
					func_176(&Local_462, 11);
					func_251(&Local_462, 10, 0, 0);
					func_251(&Local_462, 6, 0, 0);
					func_175();
					Local_462.f_36 = unk_0xE29F927A961F8AAA(3f, 10f);
					func_173(&Local_892);
					func_246(&Local_462, 9);
				}
				if (unk_0xB86D29B10F627379(Local_462.f_4, 0))
				{
					if (!unk_0x9C8E4D238C999648(Local_462.f_2, Local_462.f_4, 0))
					{
						func_169(&Local_462, &Local_892);
						func_246(&Local_462, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_1007)
				{
				}
				func_166(&Local_462);
				if (func_123(&Local_462, &Local_892, &Local_1011, &uLocal_1041))
				{
					func_122(&Local_1011, -1, 1);
					if (func_121(&Local_892))
					{
						func_120(&Local_462, 0);
					}
					func_119(&Local_892);
					func_117(&Local_462);
					func_113(&Local_462);
					func_112(&Local_462);
					func_246(&Local_462, 27);
				}
				break;
			
			case 27:
				if (func_102(&Local_462, 1))
				{
					unk_0x5EC7E18324A7D03D(&uVar2);
					unk_0xF4BF3E3D7FE56705(&uVar2);
					unk_0x14A4402A811D03C0(0, Local_892.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0xDB78F60EE139DBA5(0, 0);
					if (unk_0x3782A69349E282A1(Local_462.f_29, 4f, 1))
					{
						unk_0xBC4621AF9C75D5A4(0, Local_462.f_29, 4f, 0);
					}
					else
					{
						unk_0xD54B51DB3BD1FB16(0, 350.8689f, 0);
						unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0xFF7E39890B2840DD(uVar2);
					unk_0xD59C10966EB589EA(Local_462.f_3, uVar2);
					unk_0x2AD4789CBFD829EC(Local_462.f_3, 1);
					func_246(&Local_462, 29);
				}
				break;
			
			case 29:
				if (!unk_0x6CFF81397164A1D3(Local_462.f_3))
				{
					if (func_101(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x28AC5FC91EA70789(Local_462.f_3, 60, 1);
					}
				}
				if (func_74(&Local_462, &uLocal_1089))
				{
					func_11(1, &Local_462, 0);
					func_251(&Local_462, 31, 0, 0);
					func_246(&Local_462, 30);
				}
				break;
			
			case 30:
				if (!unk_0x6CFF81397164A1D3(Local_462.f_3))
				{
					if (func_101(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x28AC5FC91EA70789(Local_462.f_3, 60, 1);
					}
					if ((unk_0x5E58342602E94718(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || func_9(Local_462.f_3, 1) > 50f) || func_374(&Local_462, 31) > 30f)
					{
						if (unk_0x5E58342602E94718(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (func_9(Local_462.f_3, 1) > 50f)
						{
						}
						if (func_374(&Local_462, 31) > 30f)
						{
						}
						unk_0x49876BF356F39E66(Local_462.f_3, 0);
						unk_0x9E0FEFE102840007(255, Local_462.f_413, joaat("player"));
						unk_0xEB7C3FF98F454165(&(Local_462.f_3));
						func_393();
					}
				}
				else
				{
					func_393();
				}
				break;
			}
	}
}

float func_9(int iParam0, int iParam1)
{
	return func_10(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), iParam0, iParam1);
}

float func_10(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	if (!unk_0x7D5B1F88E7504BBA(iParam1))
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Var3, iParam2);
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0x6CFF81397164A1D3(uParam1->f_3))
		{
			unk_0x020E173F318C12DA(uParam1->f_3, 317, 1);
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
	func_378(uParam0);
	if (func_50())
	{
		func_48();
	}
	func_46();
	unk_0x00686F7B3723B82F();
	unk_0x0BFC2C61FB5B6CA1(1);
	func_43(0);
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		unk_0x252253C8A45AA1FC(uParam0->f_4, 0);
		unk_0x6D839E22AD2AE8B7(uParam0->f_4);
		unk_0x23B5F9A86F231B72(uParam0->f_4);
	}
	func_40(uParam0->f_14, 1);
	func_38(uParam0->f_14, 1, 1114636288);
	func_37(&(uParam0->f_244), 3);
	unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 1);
	if (func_34())
	{
		unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
	}
	unk_0x980EFD348FD52E74(1);
	func_25(0, 1, 1, 0);
	unk_0x1B3DA717B9AFF828(1);
	unk_0xD63FE3AF9FB3D53F(1);
	if (unk_0x153AD457764FD704(*uParam0))
	{
		unk_0x4E67E0B6D7FD5145(*uParam0, 0);
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		unk_0xB90411F480457A6C(1);
	}
	if (func_24(Global_97353.f_17351, 4))
	{
		func_22(&(Global_97353.f_17351), 4);
		unk_0x57F925DF866E2CBD(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x4763145053A33D46("gestures@m@standing@casual");
	unk_0x4763145053A33D46("oddjobs@taxi@");
	unk_0x4763145053A33D46("oddjobs@towingcome_here");
	if (unk_0x4C82BD446C34CACD())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x7964097FCE4C244B(unk_0x47E385B0D957C8D4()))
	{
		unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 1, 0);
	}
	unk_0x1CC5CCD07F14CD17(unk_0xF2DB717A73826179((func_13(&uLocal_89) * 1000f)), 12, 0);
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
			return (func_14(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x602102324604D96B(&uVar0))
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
	unk_0xFE9AB3354ACE6C9C(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_3))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
		{
			if (!unk_0x52BE10F427339B39(uParam0->f_3, 0))
			{
				unk_0xF75B54D7038487AF(uParam0->f_3);
			}
			unk_0x49876BF356F39E66(uParam0->f_3, 0);
			unk_0x9E0FEFE102840007(255, uParam0->f_413, joaat("player"));
			if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x5CCBE40879FC8E8E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x5CCBE40879FC8E8E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x5CCBE40879FC8E8E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x5CCBE40879FC8E8E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xEB7C3FF98F454165(&(uParam0->f_3));
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
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_33(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_32())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_31(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_33(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_31(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_26(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
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
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_28(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_29(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_30()
{
	return Global_1312737;
}

int func_31(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_32()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_34()
{
	if (!func_36() && !func_35())
	{
		if (!unk_0xB78350754157C00F(unk_0x47E385B0D957C8D4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (unk_0x8E34C953364A76DD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if (unk_0x8E34C953364A76DD(joaat("appinternet")) > 0)
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
		unk_0xEDF13ED104B0FF6B(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xC77E39B7E42156B8(Var0, Var3, 1);
		unk_0xA47145093063CDF4();
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
	
	if (!func_41(Param0, func_42()))
	{
		Var0 = { func_39(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_39(Param0, 1f, 30f, 30f, 10f) };
		unk_0xBBB134FB9D50C0CC(Var0, Var3, iParam3, 1);
	}
}

bool func_41(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_42()
{
	struct<3> Var0;
	
	return Var0;
}

void func_43(int iParam0)
{
	if (Global_14551)
	{
		func_44(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_32())
	{
		Global_14393.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_45(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
		if (Global_87300[iVar0 /*17*/] && !Global_87300[iVar0 /*17*/].f_1)
		{
			if (Global_87300[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87300[iVar0 /*17*/].f_5 != 88 && Global_87300[iVar0 /*17*/].f_5 != 89) && Global_87300[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_87300[iVar0 /*17*/].f_5, 1);
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
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_48()
{
	Global_14558 = 0;
	func_49();
}

void func_49()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

int func_50()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
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
			Global_97353.f_17351.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_97353.f_17351.f_22[0]);
			break;
		
		case 1:
			Global_97353.f_17351.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_97353.f_17351.f_22[1]);
			break;
		
		case 2:
			Global_97353.f_17351.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_97353.f_17351.f_22[2]);
			break;
		
		case 3:
			Global_97353.f_17351.f_22[3]++;
			func_52("Fares Expired ++ ", Global_97353.f_17351.f_22[3]);
			break;
		
		case 13:
			Global_97353.f_17351.f_22[13]++;
			func_52("Passengers run ++ = ", Global_97353.f_17351.f_22[13]);
			break;
		
		case 14:
			Global_97353.f_17351.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_97353.f_17351.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_97353.f_17351.f_22[4])
				{
					Global_97353.f_17351.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_97353.f_17351.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_97353.f_17351.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_97353.f_17351.f_22[5] = (Global_97353.f_17351.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_97353.f_17351.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_97353.f_17351.f_22[6]++;
			}
			else
			{
				Global_97353.f_17351.f_22[6] = (Global_97353.f_17351.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_97353.f_17351.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_97353.f_17351.f_22[7] = (Global_97353.f_17351.f_22[7] + iParam1);
			}
			else
			{
				Global_97353.f_17351.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_97353.f_17351.f_22[7]);
			break;
		
		case 8:
			Global_97353.f_17351.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_97353.f_17351.f_22[8]);
			break;
		
		case 9:
			Global_97353.f_17351.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_97353.f_17351.f_22[9]);
			break;
		
		case 10:
			Global_97353.f_17351.f_22[10] = (Global_97353.f_17351.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_97353.f_17351.f_22[10]);
			break;
		
		case 11:
			Global_97353.f_17351.f_22[11] = (Global_97353.f_17351.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_97353.f_17351.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_97353.f_17351.f_22[12])
			{
				Global_97353.f_17351.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_97353.f_17351.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_97353.f_17351.f_22[12]);
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
		func_397(1);
		func_63(15, 1);
	}
	func_219(&(Global_97353.f_17351), 1024);
	if (!func_24(Global_97353.f_17351, 64))
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
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_59(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_58() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
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
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

int func_58()
{
	return Global_24444;
}

int func_59(int iParam0, int iParam1)
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_73(&Global_2544859))
	{
		if (func_71(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
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
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_69(&(uParam0->f_62), (8f - 0.5f));
}

void func_69(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_70(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_71(var uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)
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

bool func_73(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_74(var uParam0, var uParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_50() && func_374(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				}
				func_100(uParam0);
				func_22(&(Global_97353.f_17351), 4096);
				func_98(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_99(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xB906B139171B1845(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_97(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_92(uParam1, 0))
			{
				func_75(uParam0);
				func_251(uParam0, 0, 0, 0);
				func_97(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_76(func_89(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_77(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x380F22FED8D528A4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xA4DDF5DF95E65EED(iVar1, iVar0, 1);
	}
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_88();
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
					func_87(99, 1);
					func_86(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_85(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_84(5))
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
							func_86(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_84(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_86(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBC2C927F5C264960())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_84(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_83(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				
				case 1:
					func_87(97, iParam3);
					break;
				
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_80(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_80(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_86(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_79(iParam0);
	if (Global_34913 == 15)
	{
		func_78(0);
	}
	return 1;
}

void func_78(bool bParam0)
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
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_82() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_82() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_81(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_81(int iParam0)
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

int func_82()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0)
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_84(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_82() /*8053*/].f_5756.f_10, iParam0);
}

int func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_88()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_89()
{
	func_90();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_90()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_4(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_3(unk_0x096275889B8E0EE0());
			if (func_5(iVar0) && (!func_91(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_5(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_91(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_92(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_96(&(uParam0->f_2));
	}
	unk_0xB5F6539FA93ECBF6(14);
	unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xCCBB0BB9790E1F47(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_96(&(uParam0->f_5));
				func_95(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_94(&(uParam0->f_5)) > 0.33f)
			{
				func_93(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_94(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_96(&(uParam0->f_5));
			func_95(uParam0, 1051260355);
		}
		else if (func_94(&(uParam0->f_5)) > 0.33f)
		{
			func_93(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_94(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_95(var uParam0, int iParam1)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "SHARD_ANIM_OUT");
	unk_0xA734310215BCF528(uParam0->f_9);
	unk_0xBC38230AD29DBDD4(iParam1);
	unk_0xD4D85E4148B638AD();
}

void func_96(var uParam0)
{
	func_69(uParam0, 0f);
}

void func_97(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_98(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x164FB269C22AF51C("STRING");
	unk_0xB07108C8201910EA(iParam9);
	unk_0x734AB59A7DBD1DAA(sParam1);
	unk_0x5BB4D22B8B03A30B();
	unk_0x164FB269C22AF51C(sParam7);
	unk_0xF00CED653959DE03(uParam2);
	unk_0xF00CED653959DE03(uParam3);
	unk_0x734AB59A7DBD1DAA(uParam6);
	unk_0xF00CED653959DE03(uParam5);
	unk_0xF00CED653959DE03(iParam4);
	unk_0x5BB4D22B8B03A30B();
	unk_0xD4D85E4148B638AD();
	func_96(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_99(var uParam0)
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

void func_100(var uParam0)
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
		if (unk_0x4ED6CFDFE8D4131A(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

float func_101(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x7D5B1F88E7504BBA(uParam0))
	{
		return -1f;
	}
	return unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(iParam0, 1), Param1, iParam4);
}

int func_102(var uParam0, bool bParam1)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
	{
		if (func_111(uParam0) && func_108(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					func_103(uParam0);
				}
			}
			else
			{
				func_103(uParam0);
			}
		}
		else if (!func_111(uParam0))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					if (unk_0x04932A97CB319DE0(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x04932A97CB319DE0(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_103(var uParam0)
{
	struct<3> Var0;
	
	if (func_106(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_104(uParam0, Var0);
}

void func_104(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3) && unk_0xEB8F1713A0FC1B96(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xC899C78DB72CCBCC(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xC899C78DB72CCBCC(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_105(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x8889F46BFCE53C65(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x0BE7F4E3CDBAFB28(Var0, Param1, 0) < unk_0x0BE7F4E3CDBAFB28(Var3, Param1, 0) && unk_0x80DDCCB2F4A3EB57(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x8889F46BFCE53C65(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x0BE7F4E3CDBAFB28(Var0, Param1, 0) >= unk_0x0BE7F4E3CDBAFB28(Var3, Param1, 0) && unk_0x80DDCCB2F4A3EB57(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x8889F46BFCE53C65(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x8889F46BFCE53C65(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_105(int iParam0, int iParam1)
{
	if (!unk_0x7D5B1F88E7504BBA(iParam0) && !unk_0x7D5B1F88E7504BBA(iParam1))
	{
		if (unk_0xEB8F1713A0FC1B96(iParam0, iParam1))
		{
			if (unk_0xD214895E39AA3787(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xD214895E39AA3787(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xD214895E39AA3787(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xD214895E39AA3787(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_106(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_81, iParam1) && !func_50());
	}
	return func_50();
}

int func_108(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0x9C8E4D238C999648(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_110();
				return 1;
			}
			else if (func_109(uParam0->f_4, fParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 0, 256);
				}
				else
				{
					unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 0, 0);
				}
			}
			unk_0x1F96E509AF259528(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_109(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x562F5D788AF3FA80(0, 71, 1);
	unk_0x562F5D788AF3FA80(0, 72, 1);
	unk_0x562F5D788AF3FA80(0, 76, 1);
	unk_0x562F5D788AF3FA80(0, 73, 1);
	unk_0x562F5D788AF3FA80(0, 59, 1);
	unk_0x562F5D788AF3FA80(0, 60, 1);
	if (bParam5)
	{
		unk_0x562F5D788AF3FA80(0, 75, 1);
	}
	unk_0x562F5D788AF3FA80(0, 80, 1);
	unk_0x562F5D788AF3FA80(0, 69, 1);
	unk_0x562F5D788AF3FA80(0, 70, 1);
	unk_0x562F5D788AF3FA80(0, 68, 1);
	unk_0x562F5D788AF3FA80(0, 74, 1);
	unk_0x562F5D788AF3FA80(0, 86, 1);
	unk_0x562F5D788AF3FA80(0, 81, 1);
	unk_0x562F5D788AF3FA80(0, 82, 1);
	unk_0x562F5D788AF3FA80(0, 138, 1);
	unk_0x562F5D788AF3FA80(0, 136, 1);
	unk_0x562F5D788AF3FA80(0, 114, 1);
	unk_0x562F5D788AF3FA80(0, 107, 1);
	unk_0x562F5D788AF3FA80(0, 110, 1);
	unk_0x562F5D788AF3FA80(0, 89, 1);
	unk_0x562F5D788AF3FA80(0, 89, 1);
	unk_0x562F5D788AF3FA80(0, 87, 1);
	unk_0x562F5D788AF3FA80(0, 88, 1);
	unk_0x562F5D788AF3FA80(0, 113, 1);
	unk_0x562F5D788AF3FA80(0, 115, 1);
	unk_0x562F5D788AF3FA80(0, 116, 1);
	unk_0x562F5D788AF3FA80(0, 117, 1);
	unk_0x562F5D788AF3FA80(0, 118, 1);
	unk_0x562F5D788AF3FA80(0, 119, 1);
	unk_0x562F5D788AF3FA80(0, 131, 1);
	unk_0x562F5D788AF3FA80(0, 132, 1);
	unk_0x562F5D788AF3FA80(0, 123, 1);
	unk_0x562F5D788AF3FA80(0, 126, 1);
	unk_0x562F5D788AF3FA80(0, 129, 1);
	unk_0x562F5D788AF3FA80(0, 130, 1);
	unk_0x562F5D788AF3FA80(0, 133, 1);
	unk_0x562F5D788AF3FA80(0, 134, 1);
	unk_0x56C881CEAD564D26();
	if ((unk_0x4F67E8ECA7D3F667() - Global_28) > 500)
	{
		unk_0x334357D0C82BAE3D(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x4F67E8ECA7D3F667();
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		if (unk_0x134549B388167CBF(unk_0xFB6BA510A533DF81(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_110()
{
	if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
	{
		unk_0xA50674CBC79771CC(unk_0x217E9DC48139933D());
	}
}

int func_111(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
		{
			if (unk_0x9C8E4D238C999648(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_112(var uParam0)
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
		func_219(&(uParam0->f_55), 1);
	}
}

void func_113(var uParam0)
{
	func_115();
	unk_0x00686F7B3723B82F();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_182(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_182(uParam0, 103, 1, 0, 0);
		}
		func_114(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_182(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_182(uParam0, 102, 1, 0, 0);
	}
	func_251(uParam0, 16, 4f, 0);
}

void func_114(int iParam0)
{
	Global_96066.f_221 = iParam0;
}

void func_115()
{
	Global_14558 = 0;
	func_116();
}

void func_116()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_117(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_118(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_51(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_51(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_118(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_119(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x9DD5AFF561E88F2A(uParam0->f_73[iVar0]))
		{
			unk_0x22970F3A088B133B(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_439 = 0;
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xF73FBE4845C43B5B(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_121(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_122(var uParam0, int iParam1, bool bParam2)
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

int func_123(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_161(uParam0, uParam2, uParam1);
	if (func_160(uParam0) >= 14)
	{
		if (iLocal_444)
		{
			if (((func_374(uParam0, 11) > 20f && !func_50()) && !unk_0x24D15F45F410375F()) && !bLocal_442)
			{
				bLocal_442 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_444)
		{
			func_154(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_154(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!unk_0x6CFF81397164A1D3((*uParam1)[uParam1->f_95]) && unk_0x52BE10F427339B39((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_448)
				{
					if (func_153(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_152(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					unk_0x0F1ABE64C3C18E5A((*uParam1)[uParam1->f_95]);
					unk_0xD984B17E68AE4E17((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_154(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0x6CFF81397164A1D3((*uParam1)[0]) || unk_0x6CFF81397164A1D3((*uParam1)[1])) || unk_0x6CFF81397164A1D3((*uParam1)[2])) || unk_0x7B6E7BEC1143AC86((*uParam1)[1], uParam0->f_4, 1)) || unk_0x7B6E7BEC1143AC86((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_284(uParam0, "Passenger injured.", 14);
	}
	if (!func_138(uParam0, uParam1))
	{
		if (!unk_0x80DDCCB2F4A3EB57(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			unk_0x36DBE8E570B9FBCE((*uParam1)[0], 0, 0);
			bLocal_446 = true;
			iLocal_447 = 0;
		}
	}
	else
	{
		if (bLocal_446)
		{
			if (unk_0xE052C1B1CAA4ECE4(uParam0->f_4, 0))
			{
				if (!iLocal_447)
				{
					unk_0x12C24A48BF610759((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_447 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_284(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0xD214895E39AA3787(uParam0->f_4, 0) == (*uParam1)[0])
			{
				func_173(uParam1);
				bLocal_446 = false;
			}
		}
		func_135(uParam0, 1097859072, 1117782016);
		func_134(uParam0, &(uParam0->f_43));
		if (!bLocal_446 && !unk_0x9C8E4D238C999648((*uParam1)[0], uParam0->f_4, 0))
		{
			func_284(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_101(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_448)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x5E58342602E94718(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!unk_0x6CFF81397164A1D3((*uParam1)[2]))
							{
								unk_0xF2C3C9DA47AAA54A(&(uParam1->f_36[2]));
								func_115();
								if (uParam1->f_95 == 2)
								{
									unk_0x0F1ABE64C3C18E5A((*uParam1)[2]);
								}
								unk_0x5EC7E18324A7D03D(&uVar0);
								unk_0xF4BF3E3D7FE56705(&uVar0);
								unk_0x36DBE8E570B9FBCE(0, 0, 0);
								unk_0x14A4402A811D03C0(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0x14A4402A811D03C0(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0xFF7E39890B2840DD(uVar0);
								unk_0xD59C10966EB589EA((*uParam1)[2], uVar0);
								unk_0x5EC7E18324A7D03D(&uVar0);
								if (func_374(uParam0, 6) < fLocal_449)
								{
									uParam1->f_55[2] = 1;
									func_182(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_182(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_130((*uParam1)[2], uParam0->f_4) && func_374(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_119(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 1, 0);
				}
				else if (!func_127(uParam0) && unk_0x7964097FCE4C244B(unk_0x47E385B0D957C8D4()))
				{
					func_125(uParam3);
					func_122(uParam2, -1, 0);
					func_251(uParam0, 6, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_182(uParam0, 40, 1, 0, 0);
					if (!unk_0xCD82FA174080B3B1(uParam1->f_36[1]))
					{
						func_173(uParam1);
					}
					iLocal_448 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (func_101(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_448)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x5E58342602E94718(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!unk_0x6CFF81397164A1D3((*uParam1)[1]))
							{
								func_115();
								unk_0xF2C3C9DA47AAA54A(&(uParam1->f_36[1]));
								func_124(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_374(uParam0, 6) < fLocal_450)
								{
									uParam1->f_55[1] = 1;
									func_182(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_182(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_130((*uParam1)[1], uParam0->f_4) && func_374(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 1, 0);
				}
				else if (!func_127(uParam0) && unk_0x7964097FCE4C244B(unk_0x47E385B0D957C8D4()))
				{
					func_125(uParam3);
					func_122(uParam2, -1, 0);
					func_251(uParam0, 6, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_182(uParam0, 43, 1, 0, 0);
					iLocal_448 = 0;
					if (!unk_0xCD82FA174080B3B1(uParam1->f_36[0]))
					{
						func_173(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_101(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_448)
					{
						func_182(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (unk_0x5E58342602E94718(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							unk_0xF2C3C9DA47AAA54A(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_115();
							if (func_374(uParam0, 6) < fLocal_451)
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

void func_124(var uParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	
	if (unk_0xB86D29B10F627379(*uParam0, 0))
	{
		if (!unk_0x7D5B1F88E7504BBA(*uParam1))
		{
			Var0 = { unk_0xC899C78DB72CCBCC(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xC899C78DB72CCBCC(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x0BE7F4E3CDBAFB28(Var0, Param2, 0) < unk_0x0BE7F4E3CDBAFB28(Var3, Param2, 0) && unk_0x80DDCCB2F4A3EB57(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar6 = 131072;
			}
			else if (unk_0x0BE7F4E3CDBAFB28(Var0, Param2, 0) >= unk_0x0BE7F4E3CDBAFB28(Var3, Param2, 0) && unk_0x80DDCCB2F4A3EB57(*uParam1, *uParam0, 2, 0, 0))
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
				unk_0x5EC7E18324A7D03D(&uVar7);
				unk_0xF4BF3E3D7FE56705(&uVar7);
				unk_0x36DBE8E570B9FBCE(0, 0, 0);
				unk_0x14A4402A811D03C0(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xBC4621AF9C75D5A4(0, Var8, 5f, 0);
				unk_0x14A4402A811D03C0(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xFF7E39890B2840DD(uVar7);
				unk_0xD59C10966EB589EA(*uParam1, uVar7);
			}
			else
			{
				unk_0x5EC7E18324A7D03D(&uVar7);
				unk_0xF4BF3E3D7FE56705(&uVar7);
				unk_0x8889F46BFCE53C65(0, *uParam0, iVar6);
				unk_0x14A4402A811D03C0(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xBC4621AF9C75D5A4(0, Var8, 5f, 0);
				unk_0x14A4402A811D03C0(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xFF7E39890B2840DD(uVar7);
				unk_0xD59C10966EB589EA(*uParam1, uVar7);
			}
		}
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
	unk_0x00686F7B3723B82F();
	func_48();
}

var func_126()
{
	var uVar0;
	
	return uVar0;
}

int func_127(var uParam0)
{
	if (func_50())
	{
		return 1;
	}
	if (func_129(uParam0, 17))
	{
		return 1;
	}
	if (func_129(uParam0, 14))
	{
		return 1;
	}
	if (func_128(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128(var uParam0)
{
	return uParam0->f_110;
}

bool func_129(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_130(int iParam0, int iParam1)
{
	if (func_131(iParam0, iParam1))
	{
		if (unk_0x9C8E4D238C999648(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	if (unk_0xB86D29B10F627379(iParam1, 0))
	{
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_133(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_133(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_133(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
			unk_0xF73FBE4845C43B5B(uParam0, 2);
		}
	}
}

void func_134(var uParam0, var uParam1)
{
	unk_0xC1204B79D6DBB702(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_135(var uParam0, float fParam1, float fParam2)
{
	if (func_111(uParam0) && func_24(uParam0->f_44, 4))
	{
		if ((unk_0x78C3311A73135241(uParam0->f_4) || unk_0xFB6BA510A533DF81(uParam0->f_4) < 3f) && func_137(uParam0))
		{
			if (!func_129(uParam0, 2))
			{
				func_176(uParam0, 2);
			}
			else if (func_111(uParam0))
			{
				if (func_374(uParam0, 2) > fParam1 && !func_129(uParam0, 14))
				{
					if (func_36())
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					func_251(uParam0, 2, 0, 0);
					if (func_129(uParam0, 10))
					{
						func_251(uParam0, 10, 0, 0);
					}
				}
				if (!func_129(uParam0, 3))
				{
					func_251(uParam0, 3, 0, 0);
				}
				else if (func_374(uParam0, 3) >= fParam2)
				{
					func_136(uParam0, 3, 0);
					func_284(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_129(uParam0, 2))
			{
				func_136(uParam0, 2, 0);
			}
			if (func_129(uParam0, 3))
			{
				func_136(uParam0, 3, 0);
			}
		}
	}
}

void func_136(var uParam0, int iParam1, bool bParam2)
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
			func_93(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_93(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_137(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xD214895E39AA3787(uParam0->f_4, -1) == unk_0x096275889B8E0EE0())
		{
			return 1;
		}
	}
	return 0;
}

int func_138(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		func_284(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_151(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6CFF81397164A1D3((*uParam1)[iVar0]))
			{
				func_284(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_139(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xD214895E39AA3787(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
			}
			func_140(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_140(var uParam0, bool bParam1)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCD82FA174080B3B1(uParam0->f_8))
			{
				unk_0x42BFBF3ADF7FF654(uParam0->f_8, 0);
				unk_0xA1BFA381D71B6D00(uParam0->f_8, 0);
				func_146(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCD82FA174080B3B1(uParam0->f_9))
			{
				unk_0x42BFBF3ADF7FF654(uParam0->f_9, 0);
				unk_0xA1BFA381D71B6D00(uParam0->f_9, 0);
				unk_0x00686F7B3723B82F();
				if (func_111(uParam0))
				{
					func_182(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_146(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_141(uParam0, 0, 0);
		}
		else if (unk_0xCD82FA174080B3B1(uParam0->f_10))
		{
			unk_0xF2C3C9DA47AAA54A(&(uParam0->f_10));
			if (unk_0xCD82FA174080B3B1(uParam0->f_8))
			{
				unk_0x42BFBF3ADF7FF654(uParam0->f_8, 255);
				unk_0xA1BFA381D71B6D00(uParam0->f_8, 1);
			}
			else if (unk_0xCD82FA174080B3B1(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x42BFBF3ADF7FF654(uParam0->f_9, 0);
					unk_0xA1BFA381D71B6D00(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x42BFBF3ADF7FF654(uParam0->f_9, 255);
					unk_0xA1BFA381D71B6D00(uParam0->f_9, 1);
				}
			}
			unk_0x00686F7B3723B82F();
		}
	}
}

void func_141(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_378(uParam0);
	}
	if (!unk_0xCD82FA174080B3B1(uParam0->f_10))
	{
		uParam0->f_10 = func_144(uParam0->f_4, 1, 0);
		unk_0x0A062D6D7C0B2C2C(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xA1BFA381D71B6D00(uParam0->f_10, 1);
		func_142(uParam0);
		if (bParam2)
		{
			unk_0x00686F7B3723B82F();
			func_182(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_142(var uParam0)
{
	func_251(uParam0, 14, 0, 0);
	func_143();
}

void func_143()
{
	int iVar0;
	
	iVar0 = unk_0x2F96E7720B0B19EA();
	if (unk_0xB86D29B10F627379(iVar0, 0))
	{
		unk_0x6856F5517E486379(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_144(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_145(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_145(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_145(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0x00686F7B3723B82F();
		func_182(uParam0, iParam3, 1, 0, 0);
		func_219(uParam1, iParam2);
	}
}

void func_147(var uParam0)
{
	func_136(uParam0, 14, 0);
	func_136(uParam0, 15, 0);
	func_150();
	if (func_149())
	{
		func_148(0);
	}
}

void func_148(int iParam0)
{
	Global_16703 = iParam0;
}

int func_149()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	var uVar0;
	
	uVar0 = unk_0x2F96E7720B0B19EA();
	if (unk_0xB86D29B10F627379(uVar0, 0))
	{
		unk_0x6856F5517E486379(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_151(var uParam0, var uParam1)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x9C8E4D238C999648(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_129(uParam0, 14))
			{
				if (unk_0xCD82FA174080B3B1(*uParam1) && unk_0x007B3A1D4454D389(*uParam1) > 0)
				{
					unk_0x42BFBF3ADF7FF654(*uParam1, 0);
				}
				func_141(uParam0, 0, 0);
				func_182(uParam0, 2, 1, 1, 0);
			}
			else if (func_374(uParam0, 14) > 20f)
			{
				func_284(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
			}
			if (unk_0xCD82FA174080B3B1(uParam0->f_10))
			{
				unk_0xF2C3C9DA47AAA54A(&(uParam0->f_10));
			}
			if ((unk_0xCD82FA174080B3B1(*uParam1) && unk_0x007B3A1D4454D389(*uParam1) < 255) && unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) < 1)
			{
				unk_0x42BFBF3ADF7FF654(*uParam1, 255);
				unk_0xA1BFA381D71B6D00(*uParam1, 1);
			}
		}
	}
}

void func_152(var uParam0)
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

int func_153(var uParam0, var uParam1)
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0x5EC7E18324A7D03D(&uVar0);
			unk_0xF4BF3E3D7FE56705(&uVar0);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0x04932A97CB319DE0(*uParam0, 242628503) != 1 || unk_0x04932A97CB319DE0(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_154(var uParam0, var uParam1, bool bParam2, bool bParam3)
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
				func_158(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_157(uParam0, uParam1);
				uParam1->f_91 = unk_0x4F67E8ECA7D3F667();
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
				func_156(uParam0, uParam1);
				uParam1->f_91 = unk_0x4F67E8ECA7D3F667();
				uParam1->f_92 = unk_0x4F67E8ECA7D3F667();
			}
		}
	}
	uVar0 = func_155(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = unk_0xFB6BA510A533DF81(uParam0->f_4);
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
				if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
				{
					unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			unk_0x3674F389B0FACD80(uParam1->f_88, "speed", fVar4, 0);
			unk_0x3674F389B0FACD80(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (unk_0xFB6BA510A533DF81(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x4F67E8ECA7D3F667();
		uParam1->f_63 = 1;
	}
	if ((unk_0xFB6BA510A533DF81(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = unk_0x4F67E8ECA7D3F667();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0x4F67E8ECA7D3F667();
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
					if (unk_0x7AE191143C7A9107(uParam0->f_4, iVar1))
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x0E7910A63E05B12C(uParam0->f_4, iVar1))
					{
						if ((unk_0x4F67E8ECA7D3F667() % 2000) < 50)
						{
						}
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x3674F389B0FACD80(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x3674F389B0FACD80(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0x4F67E8ECA7D3F667() - uParam1->f_91);
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
					if (unk_0x7AE191143C7A9107(uParam0->f_4, iVar1))
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x0E7910A63E05B12C(uParam0->f_4, iVar1))
					{
						if ((unk_0x4F67E8ECA7D3F667() % 2000) < 50)
						{
						}
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x3674F389B0FACD80(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x3674F389B0FACD80(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (unk_0x4F67E8ECA7D3F667() - uParam1->f_91);
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
					if (unk_0x7AE191143C7A9107(uParam0->f_4, iVar1))
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_83[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0x0E7910A63E05B12C(uParam0->f_4, iVar1))
					{
						if (unk_0x9DD5AFF561E88F2A(uParam1->f_78[iVar1]))
						{
							unk_0x3674F389B0FACD80(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0x9DD5AFF561E88F2A(uParam1->f_73[iVar1]))
					{
						unk_0x3674F389B0FACD80(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x3674F389B0FACD80(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x3674F389B0FACD80(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7AE191143C7A9107(uParam0->f_4, iVar0))
		{
			if (!unk_0x4ED6CFDFE8D4131A(uLocal_457[iVar0], 1))
			{
				unk_0xF73FBE4845C43B5B(&(uLocal_457[iVar0]), 1);
			}
			if (unk_0x569AC305E3306447(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_444)
				{
					iLocal_444 = 1;
				}
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(uLocal_457[iVar0], 1))
		{
			unk_0x7D1D4A3602B6AD4E(&(uLocal_457[iVar0]), 1);
		}
		if (!unk_0x0E7910A63E05B12C(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0x4ED6CFDFE8D4131A(uLocal_452[iVar0], 1))
			{
				unk_0xF73FBE4845C43B5B(&(uLocal_452[iVar0]), 1);
			}
			if (!iLocal_444)
			{
				iLocal_444 = 1;
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(uLocal_452[iVar0], 1))
		{
			unk_0x7D1D4A3602B6AD4E(&(uLocal_452[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_156(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_408, 0f, 0f, 0f, unk_0xE29F927A961F8AAA(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_414, 0f, 0f, 0f, unk_0xE29F927A961F8AAA(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_411, 0f, 0f, 0f, unk_0xE29F927A961F8AAA(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_417, 0f, 0f, 0f, unk_0xE29F927A961F8AAA(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x3674F389B0FACD80(uParam1->f_73[iVar0], "smoke", 1f, 0);
			unk_0x3674F389B0FACD80(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_157(var uParam0, var uParam1)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		uParam1->f_88 = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_89 = unk_0xBD41E1440CE39800("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	unk_0xADE3829D3FCB323E(1);
}

void func_158(var uParam0)
{
	func_159(uParam0, 0f);
}

void func_159(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) + fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_160(var uParam0)
{
	return uParam0->f_416;
}

void func_161(var uParam0, var uParam1, var uParam2)
{
	if (!func_24(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) >= 1)
				{
					if (func_374(uParam0, 9) > 1f)
					{
						func_165(uParam0, unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()));
						func_182(uParam0, 50, 1, 0, 0);
						func_251(uParam0, 9, 0, 0);
						if (unk_0xCD82FA174080B3B1(uParam2->f_40))
						{
							unk_0x42BFBF3ADF7FF654(uParam2->f_40, 0);
							unk_0xA1BFA381D71B6D00(uParam2->f_40, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_50() && func_374(uParam0, 9) > 4f)
				{
					func_182(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_164("TAXI_OBJ_POL", 0, 0))
				{
					func_182(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xE1C0AD4C24324C36(unk_0x47E385B0D957C8D4(), func_163(uParam0)))
				{
					func_165(uParam0, unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()));
					func_51(6, 0);
				}
				if (!func_128(uParam0))
				{
					if (!unk_0x200E87988220C592())
					{
						if (func_374(uParam0, 16) > 10f)
						{
							func_182(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) < 1)
				{
					if (unk_0xCD82FA174080B3B1(uParam2->f_40))
					{
						unk_0x42BFBF3ADF7FF654(uParam2->f_40, 255);
						unk_0xA1BFA381D71B6D00(uParam2->f_40, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_50())
				{
					func_182(uParam0, 53, 1, 0, 1);
					func_51(7, func_163(uParam0));
					func_165(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_50())
				{
					func_162(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_163(var uParam0)
{
	return uParam0->f_106;
}

bool func_164(char* sParam0, int iParam1, int iParam2)
{
	unk_0x7CDCFA485F54BA2B(sParam0);
	if (iParam1 == 1)
	{
		unk_0x734AB59A7DBD1DAA(iParam2);
	}
	return unk_0x48D05CF5BD17A852();
}

void func_165(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_166(var uParam0)
{
	if (func_168(uParam0))
	{
		func_167(uParam0);
	}
}

void func_167(var uParam0)
{
	if (unk_0x66D2167DCA986F83() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x6445877A7DF7B2FA();
			func_136(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_374(uParam0, 20) > 3f)
				{
					func_182(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_24(uParam0->f_81, 262144) || !func_24(uParam0->f_81, 1048576))
				{
					if (func_374(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_182(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (func_374(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_182(uParam0, 85, 1, 0, 0);
						func_136(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_374(uParam0, 20) > 8f)
				{
					func_182(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_81, 262144) || func_24(uParam0->f_82, 67108864))
			{
				if (!func_129(uParam0, 22))
				{
					func_176(uParam0, 22);
				}
			}
			if (func_129(uParam0, 22) && func_374(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_24(uParam0->f_81, 1048576))
					{
						func_182(uParam0, 84, 1, 0, 0);
						func_136(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_24(uParam0->f_82, 134217728))
					{
						func_182(uParam0, 85, 1, 0, 0);
						func_136(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_168(var uParam0)
{
	return uParam0->f_120;
}

void func_169(var uParam0, var uParam1)
{
	func_172(uParam0, 1000);
	if ((!unk_0x7D5B1F88E7504BBA((*uParam1)[0]) && !unk_0x7D5B1F88E7504BBA((*uParam1)[1])) && !unk_0x7D5B1F88E7504BBA((*uParam1)[2]))
	{
		unk_0xFA8B88A1EF049B33((*uParam1)[0]);
		unk_0xFA8B88A1EF049B33((*uParam1)[1]);
		unk_0xFA8B88A1EF049B33((*uParam1)[2]);
	}
	func_170();
	func_147(uParam0);
}

void func_170()
{
	Global_14558 = 0;
	func_171();
}

void func_171()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_172(var uParam0, int iParam1)
{
	if (unk_0x153AD457764FD704(*uParam0))
	{
		unk_0x4E67E0B6D7FD5145(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x33281167E4942E4F(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
	}
}

void func_173(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!unk_0xCD82FA174080B3B1(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_174(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!unk_0x022CF4385FAF61D9(uParam0->f_36[2]))
		{
			unk_0xA1BFA381D71B6D00(uParam0->f_36[2], 1);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!unk_0xCD82FA174080B3B1(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_174(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!unk_0x022CF4385FAF61D9(uParam0->f_36[1]))
		{
			unk_0xA1BFA381D71B6D00(uParam0->f_36[1], 1);
		}
	}
	else
	{
		if (!unk_0xCD82FA174080B3B1(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_174(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!unk_0x022CF4385FAF61D9(uParam0->f_36[0]))
		{
			unk_0xA1BFA381D71B6D00(uParam0->f_36[0], 1);
		}
	}
}

var func_174(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xAFE7B0E5A6396BD2(Param0);
	unk_0x17D3E31025A05A57(uVar0, func_145(unk_0x03A753E2C8458335(), 1f, 1f));
	unk_0xA1BFA381D71B6D00(uVar0, iParam3);
	return uVar0;
}

void func_175()
{
	func_219(&(Local_462.f_55), 2);
	func_219(&(Local_462.f_55), 4);
	func_219(&(Local_462.f_55), 16);
	func_219(&(Local_462.f_55), 64);
	func_219(&(Local_462.f_55), 256);
	func_219(&(Local_462.f_55), 512);
	func_219(&(Local_462.f_55), 1024);
	func_219(&(Local_462.f_55), 2048);
	func_219(&(Local_462.f_55), 4096);
	func_219(&(Local_462.f_55), 1073741824);
	func_219(&uLocal_1082, 2);
}

void func_176(var uParam0, int iParam1)
{
	func_177(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_177(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_96(uParam0);
	}
}

void func_178()
{
	unk_0x4AD96EF928BD4F9A(joaat("stretch"));
	unk_0x4AD96EF928BD4F9A(joaat("superd"));
	unk_0x4AD96EF928BD4F9A(Local_892.f_45[0]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_45[1]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_45[2]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_45[3]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_45[4]);
	unk_0x4763145053A33D46("oddjobs@taxi@gyn@cc@intro");
	unk_0x4763145053A33D46("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x4763145053A33D46("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_179(var uParam0, bool bParam1)
{
	func_180(uParam0);
	if (bParam1)
	{
		if (!unk_0xCD82FA174080B3B1(uParam0->f_9))
		{
			uParam0->f_9 = func_174(uParam0->f_17, 1);
		}
		else if (unk_0x007B3A1D4454D389(uParam0->f_9) == 0)
		{
			unk_0x5DE61C90DDECFA2D(1, 0);
			unk_0x42BFBF3ADF7FF654(uParam0->f_9, 255);
			unk_0x4FF674F5E23D49CE(uParam0->f_9, uParam0->f_17);
			unk_0xA1BFA381D71B6D00(uParam0->f_9, 1);
		}
	}
}

void func_180(var uParam0)
{
	if (unk_0xCD82FA174080B3B1(uParam0->f_8))
	{
		unk_0xA1BFA381D71B6D00(uParam0->f_8, 0);
		unk_0xF2C3C9DA47AAA54A(&(uParam0->f_8));
	}
}

void func_181(var uParam0)
{
	unk_0x270B63A641BE32F2(unk_0x217E9DC48139933D());
	unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 1, 0);
	func_172(uParam0, 1000);
}

void func_182(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_251(uParam0, 16, 4f, 0);
		if (func_183(uParam0))
		{
			func_48();
		}
	}
	func_210(uParam0, iParam2, bParam3);
}

int func_183(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_50())
	{
		Var6 = { func_185() };
		if (!unk_0x2CF12F9ACF18F048(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xD3852F22AB713A1F(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_184(&Var0);
			if (unk_0xD3852F22AB713A1F(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_185()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

bool func_186(var uParam0, var uParam1)
{
	return ((func_187((*uParam1)[0], uParam0) && func_187((*uParam1)[1], uParam0)) && func_187((*uParam1)[2], uParam0));
}

int func_187(int iParam0, var uParam1)
{
	if (unk_0xB86D29B10F627379(uParam1->f_4, 0))
	{
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			if (unk_0xEB8F1713A0FC1B96(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_284(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_284(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_188(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_207(uParam0, (*uParam1)[0]);
	func_207(uParam0, (*uParam1)[1]);
	func_207(uParam0, (*uParam1)[2]);
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x9C8E4D238C999648(uParam0->f_2, uParam0->f_4, 0))
		{
			func_205(uParam0, 1);
			if (func_34())
			{
				unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 1, 0);
				func_169(uParam0, uParam1);
			}
		}
		else if (unk_0xE1C0AD4C24324C36(unk_0x47E385B0D957C8D4(), 0))
		{
			func_203(uParam0);
		}
		else
		{
			if (func_129(uParam0, 14))
			{
				func_147(uParam0);
				func_202(uParam0, uParam1, 0);
			}
			if (func_129(uParam0, 9))
			{
				func_136(uParam0, 9, 0);
				unk_0x00686F7B3723B82F();
				if (unk_0xCD82FA174080B3B1(uParam0->f_8))
				{
					unk_0x42BFBF3ADF7FF654(uParam0->f_8, 255);
					unk_0xA1BFA381D71B6D00(uParam0->f_8, 1);
				}
			}
			if (!unk_0x6CFF81397164A1D3((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((unk_0xFB6BA510A533DF81(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_201(uParam0, (*uParam1)[iLocal_432]) > 50f || func_13(&uLocal_433) > 5f)
						{
							func_284(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (unk_0x04932A97CB319DE0((*uParam1)[iLocal_432], 713668775) != 1 || ((func_10(unk_0x096275889B8E0EE0(), (*uParam1)[iLocal_432], 1) < 20f && func_200((*uParam1)[iLocal_432], uParam0->f_11, 1) <= 28f) && func_200(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_198(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_197(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_93)
								{
									iVar0 = func_196(uParam0, &uVar1);
									if (!unk_0x7D5B1F88E7504BBA(iVar0))
									{
										unk_0x36DBE8E570B9FBCE(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0x0F1ABE64C3C18E5A((*uParam1)[iVar3]);
									unk_0x5EC7E18324A7D03D(&uVar2);
									unk_0xF4BF3E3D7FE56705(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0x52BE10F427339B39((*uParam1)[iVar3], 0))
											{
												unk_0xD4648EA39998A07B(0, uParam0->f_4, -1, 0, 2);
												unk_0xD984B17E68AE4E17(0, unk_0x9C1C462D7B1DD1F9(1750, 2250));
												unk_0x12C24A48BF610759(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0x52BE10F427339B39((*uParam1)[iVar3], 0))
											{
												unk_0xD4648EA39998A07B(0, uParam0->f_4, -1, 0, 2);
												unk_0x12C24A48BF610759(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0x52BE10F427339B39((*uParam1)[iVar3], 0))
											{
												unk_0xD4648EA39998A07B(0, uParam0->f_4, -1, 0, 2);
												unk_0xD984B17E68AE4E17(0, unk_0x9C1C462D7B1DD1F9(750, 1250));
												unk_0x12C24A48BF610759(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0xFF7E39890B2840DD(uVar2);
									unk_0xD59C10966EB589EA((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_137(uParam0))
							{
								unk_0x0F1ABE64C3C18E5A((*uParam1)[0]);
								unk_0x0F1ABE64C3C18E5A((*uParam1)[1]);
								unk_0x0F1ABE64C3C18E5A((*uParam1)[2]);
							}
							else if ((unk_0x04932A97CB319DE0((*uParam1)[0], 242628503) != 1 && unk_0x04932A97CB319DE0((*uParam1)[0], 242628503) != 0) && func_201(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0x5EC7E18324A7D03D(&(uParam0->f_243));
								unk_0xF4BF3E3D7FE56705(&(uParam0->f_243));
								unk_0xFE920E72A4B34285(0, uParam0->f_4, 0);
								unk_0x8DBC05C86F873CC9(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0xFF7E39890B2840DD(uParam0->f_243);
								unk_0xD59C10966EB589EA((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_93)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_195(uParam0, 1))
									{
										unk_0xFA8B88A1EF049B33((*uParam1)[0]);
										unk_0xFA8B88A1EF049B33((*uParam1)[1]);
										unk_0xFA8B88A1EF049B33((*uParam1)[2]);
										func_284(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_194(uParam0, uParam1);
							if (func_201(uParam0, (*uParam1)[0]) < fVar4 || func_34())
							{
								if (unk_0x9C8E4D238C999648(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0x52BE10F427339B39((*uParam1)[0], 0) && unk_0x52BE10F427339B39((*uParam1)[1], 0)) && unk_0x52BE10F427339B39((*uParam1)[2], 0))
									{
										func_180(uParam0);
										unk_0x020E173F318C12DA((*uParam1)[0], 26, 1);
										unk_0x020E173F318C12DA((*uParam1)[1], 26, 1);
										unk_0x020E173F318C12DA((*uParam1)[2], 26, 1);
										unk_0x020E173F318C12DA((*uParam1)[0], 104, 1);
										func_136(uParam0, 5, 0);
										unk_0x4D3771237C79FF41();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
								{
								}
								unk_0xB76C24CA1204844D(unk_0xA86D5F069399F44D((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_193(uParam1))
							{
								unk_0x0F1ABE64C3C18E5A((*uParam1)[0]);
								unk_0x0F1ABE64C3C18E5A((*uParam1)[1]);
								unk_0x0F1ABE64C3C18E5A((*uParam1)[2]);
								func_284(uParam0, "Left Passenger", 8);
							}
							if ((func_192(uParam0, uParam1) || func_191(uParam0, uParam1)) || func_190(uParam0, uParam1))
							{
								if (!unk_0x52BE10F427339B39((*uParam1)[2], 0))
								{
									unk_0x14A4402A811D03C0((*uParam1)[2], func_39(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 2;
								}
								if (!unk_0x52BE10F427339B39((*uParam1)[1], 0))
								{
									unk_0x14A4402A811D03C0((*uParam1)[1], func_39(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 1;
								}
								if (!unk_0x52BE10F427339B39((*uParam1)[0], 0))
								{
									unk_0x14A4402A811D03C0((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 0;
								}
								unk_0xF2C3C9DA47AAA54A(&(uParam0->f_8));
								uParam0->f_8 = func_189((*uParam1)[iLocal_432], 0, 0);
								func_96(&uLocal_433);
								uParam0->f_48 = 0;
								iLocal_86 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_284(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_284(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_189(int iParam0, bool bParam1, bool bParam2)
{
	return func_144(iParam0, !bParam1, bParam2);
}

int func_190(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam1)[iVar0]) && !unk_0x52BE10F427339B39((*uParam1)[iVar0], 0))
		{
			if (func_201(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam1)[iVar0]) && !unk_0x52BE10F427339B39((*uParam1)[iVar0], 0))
		{
			if (func_200(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_192(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam1)[iVar0]) && !unk_0x52BE10F427339B39((*uParam1)[iVar0], 0))
		{
			if (func_200((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_193(var uParam0)
{
	if ((!unk_0x6CFF81397164A1D3((*uParam0)[0]) && !unk_0x6CFF81397164A1D3((*uParam0)[1])) && !unk_0x6CFF81397164A1D3((*uParam0)[2]))
	{
		if ((unk_0x52BE10F427339B39((*uParam0)[0], 0) || unk_0x52BE10F427339B39((*uParam0)[1], 0)) || unk_0x52BE10F427339B39((*uParam0)[2], 0))
		{
			if ((!unk_0x52BE10F427339B39((*uParam0)[0], 0) || !unk_0x52BE10F427339B39((*uParam0)[1], 0)) || !unk_0x52BE10F427339B39((*uParam0)[2], 0))
			{
				if (!func_16(&uLocal_436))
				{
					func_177(&uLocal_436);
				}
				else if (func_94(&uLocal_436) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_194(var uParam0, var uParam1)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x6CFF81397164A1D3((*uParam1)[iLocal_432]))
		{
			if (func_9((*uParam1)[iLocal_432], 1) > 30f)
			{
				if (unk_0x04932A97CB319DE0((*uParam1)[iLocal_432], -1794415470) == 1 || unk_0x04932A97CB319DE0((*uParam1)[iLocal_432], 242628503) == 1)
				{
					func_284(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_195(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xD214895E39AA3787(uParam0->f_4, 1);
		iVar0[1] = unk_0xD214895E39AA3787(uParam0->f_4, 2);
		iVar0[2] = unk_0xD214895E39AA3787(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD42BD6EB2E0F1677(iVar0[iVar4]))
			{
				if (unk_0x7D5B1F88E7504BBA(iVar0[iVar4]))
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
		if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_196(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD214895E39AA3787(uParam0->f_4, 1);
		if (unk_0xD42BD6EB2E0F1677(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xD214895E39AA3787(uParam0->f_4, 2);
			if (unk_0xD42BD6EB2E0F1677(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xD214895E39AA3787(uParam0->f_4, 0);
				if (unk_0xD42BD6EB2E0F1677(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_197(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x7D5B1F88E7504BBA((*uParam1)[0]))
	{
		if (!unk_0x140188E884645624((*uParam1)[iLocal_432]) && func_9((*uParam1)[iLocal_432], 1) < fParam3)
		{
			if (!func_129(uParam0, 5))
			{
				func_251(uParam0, 5, 0, 0);
			}
		}
		else if (func_129(uParam0, 5))
		{
			func_136(uParam0, 5, 0);
		}
		if (((func_374(uParam0, 5) > IntToFloat(iParam2) && unk_0xFB6BA510A533DF81(uParam0->f_4) < fParam5) && !unk_0x140188E884645624((*uParam1)[iLocal_432])) || func_9((*uParam1)[iLocal_432], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uVar10 = unk_0xBACA8FE9C76C124E(uParam0->f_4, "windscreen");
	Var6 = { unk_0x82CFA50E34681CA5(uParam0->f_4, uVar10) };
	Var6 = { unk_0x497C6B1A2C9AE69C(uParam0->f_4, Var6) };
	Var6.f_1 = (Var6.f_1 + 1f);
	Var0 = { unk_0xC899C78DB72CCBCC(uParam0->f_4, Var6) };
	Var3 = { unk_0xC899C78DB72CCBCC(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6A3E157475DBFCD9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x49876BF356F39E66((*uParam1)[0], 1);
			unk_0x49876BF356F39E66((*uParam1)[1], 1);
			unk_0x49876BF356F39E66((*uParam1)[2], 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_432], 0) <= fParam2 && !uParam0->f_142) && unk_0x134549B388167CBF((Var0.f_2 - Var3.f_2)) < 5f)
			{
				iVar9 = func_199(&(uParam0->f_409), Var0, Var3, 0);
				if (iVar9 == 0)
				{
					iLocal_86 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x00686F7B3723B82F();
			func_182(uParam0, 4, 1, 0, 1);
			unk_0x0F1ABE64C3C18E5A((*uParam1)[iLocal_432]);
			unk_0xD4648EA39998A07B(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x5EC7E18324A7D03D(&(uParam0->f_243));
			unk_0xF4BF3E3D7FE56705(&(uParam0->f_243));
			unk_0x8DBC05C86F873CC9(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0xFE920E72A4B34285(0, uParam0->f_4, 0);
			unk_0xFF7E39890B2840DD(uParam0->f_243);
			unk_0xD59C10966EB589EA((*uParam1)[iLocal_432], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_86 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_199(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xD1B966852E9F6951(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xEDE8AC7C5108FB1D(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

float func_200(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Param1, iParam4);
}

float func_201(var uParam0, int iParam1)
{
	if (!unk_0x7D5B1F88E7504BBA(iParam1))
	{
		if (func_137(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_202(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0xCD82FA174080B3B1(uParam0->f_8))
			{
				unk_0x42BFBF3ADF7FF654(uParam0->f_8, 0);
				unk_0xA1BFA381D71B6D00(uParam0->f_8, 0);
				func_146(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xCD82FA174080B3B1(uParam1->f_36[iVar0]))
					{
						unk_0x42BFBF3ADF7FF654(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_182(uParam0, 2, 1, 1, 0);
			}
			func_141(uParam0, 0, 0);
		}
		else if (unk_0xCD82FA174080B3B1(uParam0->f_10))
		{
			unk_0xF2C3C9DA47AAA54A(&(uParam0->f_10));
			if (unk_0xCD82FA174080B3B1(uParam0->f_8))
			{
				unk_0x42BFBF3ADF7FF654(uParam0->f_8, 255);
				unk_0xA1BFA381D71B6D00(uParam0->f_8, 1);
				func_146(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xCD82FA174080B3B1(uParam1->f_36[iVar0]))
					{
						unk_0x42BFBF3ADF7FF654(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_203(var uParam0)
{
	func_207(uParam0, uParam0->f_3);
	if (func_137(uParam0))
	{
		if (func_129(uParam0, 14))
		{
			func_147(uParam0);
			if (unk_0xCD82FA174080B3B1(uParam0->f_10))
			{
				unk_0xF2C3C9DA47AAA54A(&(uParam0->f_10));
			}
		}
	}
	if (!func_129(uParam0, 9))
	{
		if (unk_0xCD82FA174080B3B1(uParam0->f_8))
		{
			unk_0x42BFBF3ADF7FF654(uParam0->f_8, 0);
			unk_0xA1BFA381D71B6D00(uParam0->f_8, 0);
		}
		func_251(uParam0, 9, 0, 0);
		func_204("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_204(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 1);
}

void func_205(var uParam0, bool bParam1)
{
	func_207(uParam0, uParam0->f_3);
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x9C8E4D238C999648(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_129(uParam0, 14))
			{
				if (func_50())
				{
					func_148(1);
				}
				func_206(uParam0, 11, 1);
				func_140(uParam0, 1);
				func_251(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_111(uParam0))
				{
					if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
					{
					}
					if (unk_0x52BE10F427339B39(uParam0->f_2, 0))
					{
						if (func_374(uParam0, 15) > 5f)
						{
							func_251(uParam0, 15, 0f, 1);
						}
					}
					if (func_374(uParam0, 14) > 20f)
					{
						func_284(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_374(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_284(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_284(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_206(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_207(var uParam0, int iParam1)
{
	if (unk_0xD42BD6EB2E0F1677(iParam1))
	{
		if (!unk_0x6CFF81397164A1D3(iParam1))
		{
			if (unk_0xDA4A4B9B96E20092(unk_0x217E9DC48139933D()))
			{
				if ((unk_0x9AEF296D79974B27(iParam1, joaat("weapon_stungun"), 0) || unk_0x9AEF296D79974B27(iParam1, 0, 2)) || unk_0x9AEF296D79974B27(iParam1, 0, 1))
				{
					func_284(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x270B63A641BE32F2(unk_0x217E9DC48139933D());
			}
		}
	}
}

void func_208()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xB86D29B10F627379(Local_462.f_4, 0))
	{
		if (func_137(&Local_462))
		{
			if (!iLocal_1009)
			{
				uVar0 = unk_0xBACA8FE9C76C124E(Local_462.f_4, "window_lf");
				uVar1 = unk_0xBACA8FE9C76C124E(Local_462.f_4, "window_lr");
				uVar2 = unk_0xBACA8FE9C76C124E(Local_462.f_4, "window_rf");
				uVar3 = unk_0xBACA8FE9C76C124E(Local_462.f_4, "window_rr");
				Local_408 = { unk_0x82CFA50E34681CA5(Local_462.f_4, uVar0) };
				Local_408 = { unk_0x497C6B1A2C9AE69C(Local_462.f_4, Local_408) };
				Local_420 = { Local_408 };
				Local_408.f_2 = (Local_408.f_2 + 0.15f);
				Local_408.f_1 = (Local_408.f_1 - 0.15f);
				Local_411 = { unk_0x82CFA50E34681CA5(Local_462.f_4, uVar1) };
				Local_411 = { unk_0x497C6B1A2C9AE69C(Local_462.f_4, Local_411) };
				Local_423 = { Local_411 };
				Local_411.f_2 = (Local_411.f_2 + 0.15f);
				Local_414 = { unk_0x82CFA50E34681CA5(Local_462.f_4, uVar2) };
				Local_414 = { unk_0x497C6B1A2C9AE69C(Local_462.f_4, Local_414) };
				Local_426 = { Local_414 };
				Local_414.f_2 = (Local_414.f_2 + 0.15f);
				Local_414.f_1 = (Local_414.f_1 - 0.15f);
				Local_417 = { unk_0x82CFA50E34681CA5(Local_462.f_4, uVar3) };
				Local_417 = { unk_0x497C6B1A2C9AE69C(Local_462.f_4, Local_417) };
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

void func_209(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_39(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { func_39(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		unk_0xEC40E7864AB23E9D(Var0, Var3);
		*uParam0 = unk_0x55686F8055FF786B(Var0, Var3, 0, 1, 1, 1);
		unk_0x06139B2CBC513B29(Param1, fParam4, 0);
	}
	else
	{
		unk_0xA47145093063CDF4();
		unk_0xE2E2B535953BF59E(*uParam0, 0);
	}
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_251(uParam0, 16, 4f, 0);
		unk_0x00686F7B3723B82F();
	}
}

int func_211(var uParam0, int iParam1)
{
	if (!unk_0x6C01088174B23EE3(2))
	{
		return 0;
	}
	func_218(12);
	if (func_24(uParam0->f_44, 8))
	{
		if (!func_24(uParam0->f_44, 128))
		{
			if (unk_0x38A6E30A4266B89C(unk_0x096275889B8E0EE0()) && !func_24(uParam0->f_44, 256))
			{
				func_219(&(uParam0->f_44), 256);
			}
			if (func_24(uParam0->f_44, 256) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				func_182(uParam0, 135, 1, 0, 1);
				func_219(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_215(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_44, 8))
			{
				unk_0xFE920E72A4B34285(uParam0->f_3, unk_0x096275889B8E0EE0(), 0);
				func_182(uParam0, 133, 1, 0, 1);
				func_219(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x6CFF81397164A1D3(uParam0->f_3) || unk_0x78413032BDA99B80(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_284(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xB3598EA616C3FFC3(uParam0->f_2, 0);
		unk_0x252253C8A45AA1FC(uParam0->f_4, 1);
		if (unk_0xD214895E39AA3787(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0xC70FA903C59F6BC1(uParam0->f_4);
			func_213(uParam0);
			func_51(2, 0);
			bLocal_93 = true;
			func_177(&uLocal_89);
			return 1;
		}
		else
		{
			func_284(uParam0, "No Taxi", 21);
			func_212("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_212(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_213(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_4))
	{
		if (func_214())
		{
		}
	}
}

int func_214()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
			if (unk_0xB86D29B10F627379(iVar0, 0))
			{
				iVar1 = unk_0xDA76A9F39210D365(iVar0);
				bVar2 = func_217(iVar0);
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
				if (unk_0x9BA1FF16AC7AD1BD(iVar1))
				{
					if (unk_0xD214895E39AA3787(iVar0, -1) == unk_0x096275889B8E0EE0())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xA9C55F1C15E62E06(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_44, 64))
					{
						if (unk_0x6C01088174B23EE3(2))
						{
							func_212("TX_VIP_DMGD", -1);
							if (func_216("TX_VIP_DMGD"))
							{
								func_219(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_44, 32))
					{
						if (unk_0x6C01088174B23EE3(2))
						{
							func_212("TX_VIP_CAR", -1);
							if (func_216("TX_VIP_CAR"))
							{
								func_219(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_44, 16))
					{
						if (unk_0x6C01088174B23EE3(2))
						{
							func_212("TX_VIP_SMALL", -1);
							if (func_216("TX_VIP_SMALL"))
							{
								func_219(&(uParam0->f_44), 16);
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

bool func_216(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xA8E6DDEBFADD66C2(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xA8E6DDEBFADD66C2(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xA8E6DDEBFADD66C2(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xA8E6DDEBFADD66C2(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x9BA1FF16AC7AD1BD(unk_0xDA76A9F39210D365(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x569AC305E3306447(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x569AC305E3306447(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x569AC305E3306447(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x569AC305E3306447(iParam0, 3))
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

void func_218(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
	{
		uVar0 = iParam0;
		unk_0x067FB80C077FC449(8, &uVar0, 1, 1);
	}
	else if (unk_0x588D1C657C1F9299() || unk_0x88CFAE250D3E0C71())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xADD49A5C2FA505B1(8, &cVar1);
	}
}

void func_219(var uParam0, int iParam1)
{
	func_220(uParam0, iParam1);
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_222()
{
	Local_342.f_0 = 0;
	func_239(33267, 33242, 1);
	func_239(33003, 32980, 1);
	func_239(32919, 32894, 1);
	func_239(32823, 32799, 1);
	func_239(32689, 32668, 1);
	func_239(32615, 32590, 1);
	func_239(32448, 32425, 1);
}

int func_223(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_224(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_4))
	{
		if (func_226(uParam0->f_4))
		{
			func_225(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_225(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_226(int iParam0)
{
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x90DBFFAC43B22081(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x1ABA9753939503C5(iParam0, 0, 40000) || unk_0x1ABA9753939503C5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_228(var uParam0)
{
	if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
	{
		if (func_229(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_230(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_225(uParam0, 11);
	return 1;
}

int func_231(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_4))
	{
		if (unk_0xDDE5C125AC446723(uParam0->f_4) && !unk_0x0D5D119529654EE0(uParam0->f_4))
		{
			if (!func_129(uParam0, 25))
			{
				func_251(uParam0, 25, 0, 0);
			}
			else if (func_374(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_129(uParam0, 25))
		{
			func_136(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_232(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_233(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_4))
	{
		if (unk_0xC184697E72E6A57C(uParam0->f_4))
		{
			if (unk_0x1ABA9753939503C5(uParam0->f_4, 0, 40000) || unk_0x1ABA9753939503C5(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_235(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_4))
	{
		if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
		{
			if (unk_0x78C3311A73135241(uParam0->f_4))
			{
				if (func_229(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_236(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_237(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_4))
	{
		if (func_238(uParam0->f_4))
		{
			func_225(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x90DBFFAC43B22081(iParam0) == 0f)
	{
		if (!unk_0xB86D29B10F627379(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x1ABA9753939503C5(iParam0, 0, 40000) || unk_0x1ABA9753939503C5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_239(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_220(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_220(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_240(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_284(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_241(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_3))
	{
		if ((unk_0x6CFF81397164A1D3(uParam0->f_3) || unk_0x7D5B1F88E7504BBA(uParam0->f_3)) || unk_0x1BD7C371CE257C3E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
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

int func_243()
{
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_41[0]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_41[1]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_41[2]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x64BAE9BE701E6C19(uLocal_1089))
	{
		return 0;
	}
	if (!func_244(&iLocal_998, 1))
	{
		func_245("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}

int func_244(int iParam0, bool bParam1)
{
	if (!unk_0x1283B8B89DD5D1B6(func_21()))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x27FF6FE8009B40CA("gestures@m@standing@casual"))
		{
			func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x27FF6FE8009B40CA("oddjobs@taxi@"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA("oddjobs@towingcome_here"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA("misscommon@response"))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x6C01088174B23EE3(2))
	{
		func_245("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_245(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x4F67E8ECA7D3F667() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x4F67E8ECA7D3F667();
}

void func_246(var uParam0, int iParam1)
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

void func_247(var uParam0)
{
	if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
	{
		uParam0->f_8 = func_189(uParam0->f_3, 0, 0);
		unk_0x0A062D6D7C0B2C2C(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x5DE61C90DDECFA2D(1, 0);
		unk_0xA1BFA381D71B6D00(uParam0->f_8, 1);
	}
}

int func_248(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param4 };
	func_40(uParam0->f_14, 0);
	unk_0x894DDE7F2D919046(uParam0->f_14, 25f, 0, 0, 0, 0, 0);
	if (unk_0xD42BD6EB2E0F1677(Global_96066.f_225[0]))
	{
		(*uParam7)[0] = Global_96066.f_225[0];
		(*uParam7)[1] = Global_96066.f_225[1];
		(*uParam7)[2] = Global_96066.f_225[2];
		unk_0xDC19C288082E586E((*uParam7)[0], 1, 1);
		unk_0xDC19C288082E586E((*uParam7)[1], 1, 1);
		unk_0xDC19C288082E586E((*uParam7)[2], 1, 1);
	}
	else
	{
		(*uParam7)[0] = unk_0x9066DFD4D92E6773(26, uParam7->f_41[0], uParam0->f_11, -178.76f, 1, 1);
		(*uParam7)[1] = unk_0x9066DFD4D92E6773(26, uParam7->f_41[1], unk_0xC899C78DB72CCBCC((*uParam7)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam7)[2] = unk_0x9066DFD4D92E6773(26, uParam7->f_41[1], unk_0xC899C78DB72CCBCC((*uParam7)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_250(uParam0, uParam7[0]);
	uParam7->f_51[0] = 0;
	uParam7->f_51[1] = 0;
	uParam7->f_51[2] = 0;
	uParam7->f_12[0] = 0;
	uParam7->f_12[1] = 1;
	uParam7->f_12[2] = 2;
	if ((!unk_0x6CFF81397164A1D3((*uParam7)[0]) && !unk_0x6CFF81397164A1D3((*uParam7)[1])) && !unk_0x6CFF81397164A1D3((*uParam7)[2]))
	{
		unk_0xFE920E72A4B34285((*uParam7)[1], (*uParam7)[0], 0);
		unk_0xFE920E72A4B34285((*uParam7)[2], (*uParam7)[0], 0);
		unk_0xFE920E72A4B34285((*uParam7)[0], (*uParam7)[1], 0);
	}
	if (!unk_0x6CFF81397164A1D3((*uParam7)[2]))
	{
		func_7(&(uParam0->f_244), 5, (*uParam7)[2], "TaxiPaulie", 0, 1);
		unk_0xD937A3C5EF78C429((*uParam7)[2], "TaxiPaulie");
		unk_0x020E173F318C12DA((*uParam7)[2], 317, 1);
	}
	if (!unk_0x6CFF81397164A1D3((*uParam7)[1]))
	{
		func_7(&(uParam0->f_244), 4, (*uParam7)[1], "TaxiClyde", 0, 1);
		unk_0xD937A3C5EF78C429((*uParam7)[1], "TaxiClyde");
		unk_0x020E173F318C12DA((*uParam7)[1], 317, 1);
	}
	if (!unk_0x6CFF81397164A1D3((*uParam7)[0]))
	{
		func_7(&(uParam0->f_244), 3, (*uParam7)[0], "TaxiDarren", 0, 1);
		unk_0xD937A3C5EF78C429((*uParam7)[0], "TaxiDarren");
		unk_0x020E173F318C12DA((*uParam7)[0], 317, 1);
		unk_0x352AB5EAB2338B18("TAXI_Passenger", &(uParam0->f_413));
		unk_0x9E0FEFE102840007(1, uParam0->f_413, joaat("player"));
		unk_0x6ECBACF91786FB7A((*uParam7)[0], uParam0->f_413);
		func_249((*uParam7)[1], uParam0->f_413);
		func_249((*uParam7)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_249(int iParam0, var uParam1)
{
	if (!unk_0x6CFF81397164A1D3(uParam0))
	{
		unk_0x6ECBACF91786FB7A(iParam0, uParam1);
	}
}

void func_250(var uParam0, var uParam1)
{
	if (!unk_0x6CFF81397164A1D3(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_251(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_69(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_96(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_69(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_96(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_252()
{
	unk_0x001FF43843028E0C();
	unk_0xA862A2AD321F94B4("oddjobs@taxi@gyn@cc@hotbox");
}

void func_253()
{
	unk_0xFA28FE3A6246FC30(Local_892.f_45[0]);
	unk_0xFA28FE3A6246FC30(Local_892.f_45[1]);
	unk_0xFA28FE3A6246FC30(Local_892.f_45[2]);
	unk_0xFA28FE3A6246FC30(Local_892.f_45[3]);
	unk_0xFA28FE3A6246FC30(Local_892.f_45[4]);
	unk_0xFA28FE3A6246FC30(joaat("stretch"));
	unk_0xFA28FE3A6246FC30(joaat("superd"));
	unk_0xA862A2AD321F94B4("oddjobs@taxi@gyn@cc@intro");
	unk_0xA862A2AD321F94B4("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0xA862A2AD321F94B4("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_1089 = func_254();
}

var func_254()
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_255()
{
	unk_0xFA28FE3A6246FC30(Local_892.f_41[0]);
	unk_0xFA28FE3A6246FC30(Local_892.f_41[1]);
	unk_0xFA28FE3A6246FC30(Local_892.f_41[2]);
	func_256(1);
}

void func_256(bool bParam0)
{
	unk_0xFA28FE3A6246FC30(func_21());
	if (bParam0)
	{
		unk_0xA862A2AD321F94B4("gestures@m@standing@casual");
	}
	unk_0xA862A2AD321F94B4("oddjobs@taxi@");
	unk_0xA862A2AD321F94B4("oddjobs@towingcome_here");
	unk_0xA862A2AD321F94B4("misscommon@response");
	unk_0x7C11D0C2EFACD80D("TAXI", 2);
	if (!func_24(Global_97353.f_17351, 128))
	{
		func_219(&(Global_97353.f_17351), 128);
	}
}

void func_257(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF73FBE4845C43B5B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x7D1D4A3602B6AD4E(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_258(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_259(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0x7D5B1F88E7504BBA(uParam1->f_4[iVar0]))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0xEB7C3FF98F454165(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam1->f_10))
	{
		if (func_10(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			unk_0x6C9B2BE03BBD5C98(&(uParam1->f_10));
			unk_0x6C9B2BE03BBD5C98(&(uParam1->f_11));
		}
	}
}

void func_260(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) == 0)
		{
			if (bParam2)
			{
				if (func_374(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_182(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_182(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_251(uParam0, 10, 0f, 1);
				}
			}
			else if (func_374(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_182(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_182(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_251(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_374(uParam0, 10) > 30f)
		{
			if (!func_50())
			{
				if (uParam0->f_112)
				{
					func_182(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_182(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_251(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_189[5 /*10*/].f_6)))
		{
			func_177(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_283(uParam0))
			{
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0, 1);
				func_280(5, uParam0);
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_189[0 /*10*/].f_6)))
		{
			func_177(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_278(uParam0))
			{
				func_282(uParam0, 1);
				func_280(0, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_189[1 /*10*/].f_6)))
		{
			func_177(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_277(uParam0))
			{
				func_282(uParam0, 1);
				func_280(1, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0xD42BD6EB2E0F1677(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x82368787EA73C0F7(uParam0->f_4);
				func_177(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_276(uParam0))
			{
				func_282(uParam0, 1);
				func_280(8, uParam0);
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_189[6 /*10*/].f_6)))
		{
			func_177(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_275(uParam0))
			{
				func_282(uParam0, 1);
				func_280(6, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_189[4 /*10*/].f_6)))
		{
			func_177(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_274(uParam0))
			{
				func_282(uParam0, 1);
				func_280(4, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_189[7 /*10*/].f_6)))
		{
			func_177(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_273(uParam0))
			{
				func_280(7, uParam0);
				func_282(uParam0, 1);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_189[9 /*10*/].f_6)))
		{
			func_177(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x270B63A641BE32F2(unk_0x217E9DC48139933D());
		}
		else if (func_94(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_272(uParam0))
			{
				func_282(uParam0, 1);
				func_280(9, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_189[13 /*10*/].f_6)))
		{
			func_177(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_266(uParam0))
			{
				func_282(uParam0, 1);
				func_280(13, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_6)))
		{
			func_177(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_265(uParam0))
			{
				func_282(uParam0, 1);
				func_280(14, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_189[11 /*10*/].f_6)))
		{
			func_177(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_264(uParam0))
			{
				func_282(uParam0, 1);
				func_280(11, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_189[12 /*10*/].f_6)))
		{
			func_177(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_263(uParam0))
			{
				func_282(uParam0, 1);
				func_280(12, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_189[2 /*10*/].f_6)))
		{
			func_262(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_261(uParam0))
			{
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_282(uParam0, 1);
				func_280(2, uParam0);
				func_279(uParam0);
			}
		}
	}
}

int func_261(var uParam0)
{
	float fVar0;
	
	if (!unk_0x6CFF81397164A1D3(uParam0->f_2))
	{
		if ((!unk_0x82A66DCC07835AD4(uParam0->f_2) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xFB6BA510A533DF81(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_177(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_94(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xFB6BA510A533DF81(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_93(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_93(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_262(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_69(uParam0, fParam1);
	}
}

int func_263(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		Var0 = { unk_0xF2DB09816A419DC5(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[12 /*10*/].f_3)))
			{
				func_177(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_264(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xB86D29B10F627379(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0xF2DB09816A419DC5(uParam0->f_4, 1) };
		if (unk_0x134549B388167CBF(Var0.f_0) > 2.5f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[11 /*10*/].f_3)))
			{
				func_177(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.f_0;
			}
			else if (func_94(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0x134549B388167CBF(uLocal_341) - unk_0x134549B388167CBF(Var0.f_0)) < 0f)
			{
				func_93(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_94(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_93(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_265(var uParam0)
{
	if (((((unk_0xB86D29B10F627379(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x52F45D033645181B(unk_0xA86D5F069399F44D(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD42BD6EB2E0F1677(uParam0->f_5))
			{
				if ((unk_0xFB6BA510A533DF81(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x7D5B1F88E7504BBA(uParam0->f_5) && !unk_0xE052C1B1CAA4ECE4(uParam0->f_5, -1)))
				{
					func_177(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x695D7C26DE65C423(uParam0->f_5))
		{
			func_93(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_94(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_93(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x695D7C26DE65C423(uParam0->f_5))
		{
			func_93(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_266(var uParam0)
{
	if (((unk_0xB86D29B10F627379(uParam0->f_4, 0) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_267(uParam0->f_4) && unk_0xFB6BA510A533DF81(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_189[13 /*10*/].f_3)))
			{
				func_177(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_267(int iParam0)
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
	
	unk_0x5A6D8DF6FBC5D0C4(unk_0xA86D5F069399F44D(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x5A6D8DF6FBC5D0C4(unk_0xA86D5F069399F44D(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x7FFFF183DA1030FB(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_271((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_270(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_268(unk_0xA86D5F069399F44D(iParam0, 1), Var15, Var18, Var21);
}

int func_268(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_271(Param6 - Param3) };
	Var3 = { func_271(Param9 - Param3) };
	fVar6 = func_269(Param0, Var0);
	fVar7 = func_269(Param3, Var0);
	fVar8 = func_269(Param6, Var0);
	fVar9 = func_269(Param0, Var3);
	fVar10 = func_269(Param3, Var3);
	fVar11 = func_269(Param9, Var3);
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

float func_269(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_270(struct<3> Param0, int iParam3)
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

Vector3 func_271(struct<3> Param0)
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

int func_272(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xD214895E39AA3787(uParam0->f_4, -1) == unk_0x096275889B8E0EE0())
		{
			if (unk_0xDA4A4B9B96E20092(unk_0x217E9DC48139933D()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_273(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xD214895E39AA3787(uParam0->f_4, -1) == unk_0x096275889B8E0EE0())
		{
			if (unk_0x109DE3DA41AAD94A(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0xBF966536FA8B6879(uParam0->f_4) <= -145f || unk_0xBF966536FA8B6879(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0xBF966536FA8B6879(uParam0->f_4) <= 35f && unk_0xBF966536FA8B6879(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_274(var uParam0)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		iVar0 = unk_0x377C934728A7B522(unk_0x217E9DC48139933D());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[4 /*10*/].f_3)))
			{
				func_177(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_93(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_275(var uParam0)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		iVar0 = unk_0x7C32F398D6EB56DD(unk_0x217E9DC48139933D());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[6 /*10*/].f_3)))
			{
				func_177(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_276(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xDF18751EC74F90FF(uParam0->f_4))
		{
			iVar0 = unk_0x82368787EA73C0F7(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xBB19AC7D4DCEFD0F(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_277(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		Var0 = { unk_0xF2DB09816A419DC5(uParam0->f_4, 1) };
		if (unk_0x134549B388167CBF(Var0.f_0) > 3f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[1 /*10*/].f_3)))
			{
				func_177(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_93(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (!unk_0x0D5D119529654EE0(uParam0->f_4) && unk_0xC1DB1F019BEDAE9D(uParam0->f_4))
		{
			if (!func_16(&(Local_189[0 /*10*/].f_3)))
			{
				func_177(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_93(&(Local_189[0 /*10*/].f_3));
				func_96(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_279(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_96(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_251(uParam0, 10, 0f, 1);
	unk_0x270B63A641BE32F2(unk_0x217E9DC48139933D());
}

void func_280(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_281(uParam1, iParam0);
	func_93(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_281(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_282(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_283(var uParam0)
{
	if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
	{
		if (unk_0xFB6BA510A533DF81(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_189[5 /*10*/].f_3)))
			{
				func_177(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_94(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_284(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_170();
	func_397(2);
	Var0 = { func_301() };
	if ((!unk_0x2CF12F9ACF18F048(&Var0) && func_50()) && !unk_0xD3852F22AB713A1F(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x00686F7B3723B82F();
		unk_0x0BFC2C61FB5B6CA1(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
		{
			if (!func_111(uParam0))
			{
				if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x5CCBE40879FC8E8E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x5CCBE40879FC8E8E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xDEE49D5CA6C49148(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x5CCBE40879FC8E8E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_251(uParam0, 3, 0, 0);
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
				func_299(uParam0, &Var0);
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_111(uParam0))
			{
				if (unk_0x78C3311A73135241(uParam0->f_4))
				{
					func_295(uParam0, 4096, 0);
				}
				else
				{
					func_295(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_299(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_299(uParam0, &Var0);
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
				func_299(uParam0, &Var0);
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x384D4765395E006C(unk_0x217E9DC48139933D(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_299(uParam0, &Var0);
			unk_0x384D4765395E006C(unk_0x217E9DC48139933D(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_299(uParam0, &Var0);
			unk_0x384D4765395E006C(unk_0x217E9DC48139933D(), 1, 0);
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
				func_299(uParam0, &Var0);
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_295(uParam0, 0, 0);
			func_299(uParam0, &Var0);
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
				func_299(uParam0, &Var0);
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_299(uParam0, &Var0);
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
				func_299(uParam0, &Var0);
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_294(&Var0);
			func_285(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_299(uParam0, &Var0);
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
					func_299(uParam0, &Var0);
				}
			}
			else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
			{
				func_297(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_251(uParam0, 3, 0f, 1);
	}
}

int func_285(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_293(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_286(sParam2, iParam3, 0);
}

int func_286(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x89EEEEF0CEB4D045(0);
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
					func_171();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_292(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_291();
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_290();
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_289())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_288();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_287();
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
		func_171();
	}
	return 0;
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_288()
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_289()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_290()
{
	if (func_91(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		Global_14393 = func_89();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_291()
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

bool func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_293(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_294(char* sParam0)
{
	switch (func_3(unk_0x096275889B8E0EE0()))
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

void func_295(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
	{
		unk_0x49876BF356F39E66(uParam0->f_3, 0);
		unk_0xBB19AC7D4DCEFD0F(uParam0->f_3);
		unk_0xF6482620334B0094(uParam0->f_3, 3, 0);
		unk_0x32A582AACCBCAEFE(uParam0->f_3, 17, 1);
		unk_0x0F1ABE64C3C18E5A(uParam0->f_3);
		if ((func_101(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_106(uParam0->f_29)) && !bParam2)
		{
			func_296(uParam0);
		}
		else
		{
			unk_0xF6482620334B0094(uParam0->f_3, 1024, 1);
			unk_0xF6482620334B0094(uParam0->f_3, 131072, 1);
			unk_0xF4BF3E3D7FE56705(&uVar0);
			unk_0x36DBE8E570B9FBCE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x4736475B6CFB795C(0, 1193033728, 0);
			}
			else
			{
				unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
			}
			unk_0xDB78F60EE139DBA5(0, 0);
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA(uParam0->f_3, uVar0);
			unk_0x5EC7E18324A7D03D(&uVar0);
		}
		unk_0x2AD4789CBFD829EC(uParam0->f_3, 1);
	}
}

void func_296(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
	{
		if (func_41(func_42(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xCF2B9C0645C4651B(uParam0->f_3, 84.9058f);
				unk_0x2AD4789CBFD829EC(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xCF2B9C0645C4651B(uParam0->f_3, 68.3138f);
				unk_0x2AD4789CBFD829EC(uParam0->f_3, 1);
			}
			else
			{
				unk_0x4736475B6CFB795C(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x0F1ABE64C3C18E5A(uParam0->f_3);
			unk_0x5EC7E18324A7D03D(&uVar0);
			unk_0xF4BF3E3D7FE56705(&uVar0);
			unk_0x36DBE8E570B9FBCE(0, 0, 0);
			unk_0xDB78F60EE139DBA5(0, 0);
			unk_0x14A4402A811D03C0(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x00FC27B7F6BC5E62(0, 1);
				unk_0x14A4402A811D03C0(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xD54B51DB3BD1FB16(0, 151.7794f, 0);
				unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xBC4621AF9C75D5A4(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xBC4621AF9C75D5A4(0, uParam0->f_29, 15f, 20000);
				unk_0x4736475B6CFB795C(0, 1193033728, 0);
			}
			else
			{
				unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x8DBC05C86F873CC9(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x3782A69349E282A1(uParam0->f_29, 15f, 1))
			{
				unk_0xBC4621AF9C75D5A4(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x4736475B6CFB795C(0, 1193033728, 0);
			}
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA(uParam0->f_3, uVar0);
			unk_0x5EC7E18324A7D03D(&uVar0);
		}
		unk_0x2AD4789CBFD829EC(uParam0->f_3, 1);
	}
}

void func_297(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(uParam0, sParam1, uParam2, func_298(iParam3), 0);
}

int func_298(int iParam0)
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

void func_299(var uParam0, char* sParam1)
{
	if (func_300(uParam0))
	{
		func_285(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_300(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
	{
		if (func_10(unk_0x096275889B8E0EE0(), uParam0->f_3, 1) < 40f && !unk_0x140188E884645624(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_301()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xEA4E13D1CA640059();
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

int func_302(var uParam0)
{
	return uParam0->f_118;
}

void func_303()
{
	func_332(&Local_462);
	if (func_331(&Local_462, &Local_1011))
	{
		switch (Local_1011.f_27)
		{
			case 0:
				if (Local_462.f_410 == 9)
				{
					if (!func_127(&Local_462))
					{
						if (func_330("TAXI_OBJ_CC1") || unk_0xCD82FA174080B3B1(Local_892.f_36[2]))
						{
							Local_1011.f_27++;
						}
						else if (func_160(&Local_462) != 10)
						{
							func_182(&Local_462, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_160(&Local_462) > 10 && func_160(&Local_462) != 15) && !func_127(&Local_462))
				{
					func_182(&Local_462, 15, 1, 0, 0);
					if (bLocal_1010)
					{
					}
					func_176(&Local_462, 7);
				}
				break;
			
			case 2:
				if (!Local_892.f_66)
				{
					Local_892.f_66 = 1;
					bLocal_442 = true;
				}
				if (func_101(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (func_374(&Local_462, 11) > 17f || func_101(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					func_182(&Local_462, 95, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_160(&Local_462) > 10 && func_160(&Local_462) != 16) && !func_127(&Local_462))
				{
					func_182(&Local_462, 16, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				break;
			
			case 4:
				if (func_101(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (func_374(&Local_462, 11) > 8f || func_101(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					func_182(&Local_462, 94, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_374(&Local_462, 11) > 20f || func_101(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_445)
					{
						iLocal_445 = 1;
					}
					if (!bLocal_443)
					{
						func_182(&Local_462, 96, 1, 0, 0);
						bLocal_443 = true;
						if (bLocal_1010)
						{
						}
					}
				}
				else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_374(&Local_462, 18) > unk_0xE29F927A961F8AAA(8f, 16f))
				{
				}
				break;
			}
	}
	func_304(&Local_462, &uLocal_1041, &Local_1011, bLocal_1010);
}

int func_304(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_312(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_129(uParam0, 2))
	{
		if (func_311(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x4F67E8ECA7D3F667() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_310(uParam0))
				{
					uParam2->f_7 = { func_309(uParam1) };
					func_285(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_50())
				{
					uParam2->f_13 = { func_185() };
					if (unk_0xD3852F22AB713A1F(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_220(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_128(uParam0))
				{
					if (func_50())
					{
						func_251(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_306() };
						if (unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) >= 1)
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
					uParam2->f_19 = { func_301() };
				}
				else
				{
					func_220(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_129(uParam0, 14) && !func_50()) && !func_128(uParam0)) && func_374(uParam0, 18) > 1f)
				{
					func_251(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_50())
				{
					if (func_374(uParam0, 18) > 1f)
					{
						if (!unk_0x2CF12F9ACF18F048(&(uParam2->f_1)))
						{
							func_305(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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
					func_220(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_307(uParam1);
					func_251(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_305(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_293(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_286(sParam2, iParam4, 0);
}

struct<6> func_306()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xEA4E13D1CA640059();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x73C258C68D6F55B6(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x73C258C68D6F55B6(&(Global_14560[iVar8 /*6*/])))
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

void func_307(var uParam0)
{
	int iVar0;
	
	iVar0 = func_308(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_219(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
	}
}

int func_308(var uParam0)
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

struct<6> func_309(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_219(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_310(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_164("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_164("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_164("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_164("TX_OBJ_GYB_DO", 0, 0) || func_164("TAXI_OBJ_GYB", 0, 0)) || func_164("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_164("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_164("TX_OBJ_CYI_DO", 0, 0) || func_164("TAXI_OBJ_CYI_01", 0, 0)) || func_164("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_164("TX_OBJ_GYN_DO", 0, 0) || func_164("TAXI_OBJ_GYN", 0, 0)) || func_164("TAXI_OBJ_GYN_TG", 0, 0)) || func_164("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_164("TAXI_OBJ_CC1", 0, 0) || func_164("TAXI_OBJ_CC2", 0, 0)) || func_164("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_164("TAXI_OBJ_FTC1", 0, 0) || func_164("TAXI_OBJ_FTC2", 0, 0)) || func_164("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_164("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_164("TAXI_OBJ_GETRUN", 0, 0) || func_164("TAXI_OBJ_DRIVE", 0, 0)) || func_164("TAXI_OBJ_RETURN", 0, 0)) || func_164("TAXI_OBJ_POL", 0, 0)) || func_164("TAXI_OBJ_RUNOUT", 0, 0)) || func_164("TAXI_OBJ_POL", 0, 0));
}

int func_311(var uParam0)
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

void func_312(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_310(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_129(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_160(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_327(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
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
						func_326(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 2));
				}
				if (func_24(uParam0->f_98, 4))
				{
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				func_146(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_374(uParam0, 16) > 1f)
				{
					func_148(1);
					if (uParam0->f_411 == 9)
					{
						func_204("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_204("TAXI_VIP_RETURN", 7500, 1);
					}
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
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
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
				{
					func_297(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_374(uParam0, 16) > func_145(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_50()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_160(uParam0))
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
				func_326(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_327(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_285(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_182(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_251(uParam0, 16, 0, 0);
				func_182(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_24(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_329(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_326(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_251(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_204("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_204("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCD82FA174080B3B1(uParam0->f_9))
					{
						uParam0->f_9 = func_174(uParam0->f_17, 1);
					}
					else if (unk_0x007B3A1D4454D389(uParam0->f_9) == 0)
					{
						unk_0x42BFBF3ADF7FF654(uParam0->f_9, 255);
						unk_0x4FF674F5E23D49CE(uParam0->f_9, uParam0->f_17);
						unk_0xA1BFA381D71B6D00(uParam0->f_9, 1);
					}
				}
				func_182(uParam0, 10, 1, 0, 0);
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
				func_184(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_297(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCD82FA174080B3B1(uParam0->f_9))
					{
						uParam0->f_9 = func_174(uParam0->f_17, 1);
					}
					else if (unk_0x007B3A1D4454D389(uParam0->f_9) == 0)
					{
						unk_0x42BFBF3ADF7FF654(uParam0->f_9, 255);
						unk_0x4FF674F5E23D49CE(uParam0->f_9, uParam0->f_17);
						unk_0xA1BFA381D71B6D00(uParam0->f_9, 1);
					}
				}
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_322(uParam0, 33554432, Var0, "", 1, 8);
				func_251(uParam0, 16, 0, 0);
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_50())
				{
					func_321(uParam0, 0);
					func_219(&(uParam0->f_44), 4);
					func_251(uParam0, 16, 0, 0);
					func_182(uParam0, 13, 0, 0, 0);
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
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_374(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_184(&Var0);
					}
					func_319(Var0, uParam1);
					func_219(&(uParam0->f_81), 67108864);
					func_251(uParam0, 16, 0, 0);
					func_251(uParam0, 11, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_374(uParam0, 11) > uParam0->f_36)
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
							func_184(&Var0);
						}
					}
					func_319(Var0, uParam1);
					func_251(uParam0, 11, 0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
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
					func_184(&Var0);
				}
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
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
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
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
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				func_219(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 1, 0, 8);
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
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
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
					func_318(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_318(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_319(Var0, uParam1);
				func_327(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 6, 0f, 1);
				func_210(uParam0, 0, 0);
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
					func_318(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_318(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_319(Var0, uParam1);
				func_327(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 6, 0f, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 12:
				func_204("TAXI_OBJ_GYB", 3500, 1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_204("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_204("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_204("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
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
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_98, 268435456))
				{
					func_204("TAXI_OBJ_CYI_01", 7500, 1);
					func_219(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 33:
				func_204("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_82, 8192))
				{
					if (func_374(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_184(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_319(Var0, uParam1);
						}
						else
						{
							func_326(uParam0, &Var0, 0, 0, 8);
						}
						func_219(&(uParam0->f_82), 8192);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_184(&Var0);
					func_326(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_184(&Var0);
					func_326(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 46, 1, 0, 0);
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
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_210(uParam0, 0, 0);
				break;
			
			case 139:
				func_204("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_182(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x9C1C462D7B1DD1F9(0, 120);
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
					func_219(&(uParam0->f_82), 268435456);
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
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x9C1C462D7B1DD1F9(0, 100);
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
					func_219(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_204("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_210(uParam0, 0, 0);
				func_182(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_50())
				{
					func_204("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_210(uParam0, 0, 0);
					func_182(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_204("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_210(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_81, 1))
				{
					func_317(uParam0, 1, Var0, "_sick1", 8);
					func_22(&(uParam0->f_81), 2);
				}
				else if (!func_24(uParam0->f_81, 2))
				{
					func_317(uParam0, 2, Var0, "_sick2", 8);
					func_22(&(uParam0->f_81), 1);
				}
				func_327(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
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
				func_219(&(uParam0->f_81), 2097152);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 16, 0, 0);
				func_327(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_327(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_81, 4))
				{
					func_317(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_81, 8))
				{
					func_317(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_317(uParam0, 8, Var0, "_turns3", 8);
					func_22(&(uParam0->f_81), 4);
					func_22(&(uParam0->f_81), 8);
				}
				func_327(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
					{
						func_297(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_285(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_329(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_329(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_327(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 128);
					func_22(&(uParam0->f_83), 256);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 256);
					func_22(&(uParam0->f_83), 512);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 512);
					func_22(&(uParam0->f_83), 128);
					func_251(uParam0, 16, 0, 0);
				}
				func_210(uParam0, 0, 0);
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
						func_184(&Var0);
					}
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 1);
					func_22(&(uParam0->f_83), 2);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_184(&Var0);
					}
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 4);
					}
					else
					{
						func_22(&(uParam0->f_83), 1);
					}
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_184(&Var0);
					}
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 4);
					func_22(&(uParam0->f_83), 1);
					func_251(uParam0, 16, 0, 0);
				}
				func_327(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 4096))
				{
					func_322(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 8192))
				{
					func_322(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_327(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(uParam0->f_81, 16384))
				{
					func_322(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_24(uParam0->f_81, 32768))
				{
					func_322(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_327(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_24(uParam0->f_82, 8))
					{
						func_315(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 16))
					{
						func_315(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 32))
					{
						func_315(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_327(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_210(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_327(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_327(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_327(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_81, 65536))
				{
					func_322(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 131072))
				{
					func_322(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
					{
						func_297(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_24(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 8);
					func_22(&(uParam0->f_83), 16);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 16);
					func_22(&(uParam0->f_83), 32);
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 64);
					}
					else
					{
						func_22(&(uParam0->f_83), 8);
					}
					func_251(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 64);
					func_22(&(uParam0->f_83), 8);
					func_251(uParam0, 16, 0, 0);
				}
				func_327(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
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
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 65));
					func_210(uParam0, 0, 0);
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
					func_326(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_323(uParam0, Var0, func_325(uParam0, 66));
					func_210(uParam0, 0, 0);
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
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								func_327(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								func_327(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_329(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_327(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_251(uParam0, 16, 0, 0);
								func_210(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_326(uParam0, &Var0, 0, 0, 8);
									func_251(uParam0, 16, 0, 0);
									func_251(uParam0, 11, 0, 0);
									func_210(uParam0, 0, 0);
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
									func_184(&Var0);
									func_326(uParam0, &Var0, 0, 0, 8);
									func_251(uParam0, 16, 0, 0);
									func_251(uParam0, 11, 0, 0);
									func_210(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_326(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_182(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_327(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_82, 1))
				{
					func_315(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 2))
				{
					func_315(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 4))
				{
					func_315(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_210(uParam0, 0, 0);
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
				func_329(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
				{
					func_297(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_251(uParam0, 16, 0, 0);
				func_327(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_316(uParam0))
				{
					func_323(uParam0, Var0, func_325(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
					{
						func_297(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_314(uParam0, Var0, 8);
				}
				func_327(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_83, 1024))
				{
					func_219(&(uParam0->f_83), 1024);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2048))
				{
					func_219(&(uParam0->f_83), 2048);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4096))
				{
					func_219(&(uParam0->f_83), 4096);
					func_251(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_184(&Var0);
					func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_82, 1024))
				{
					func_315(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_82), 2048);
				}
				else if (!func_24(uParam0->f_82, 2048))
				{
					func_315(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_327(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 52, 1, 0, 0);
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
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
				{
					func_297(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_316(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_326(uParam0, &Var0, 0, 0, 8);
						func_182(uParam0, 52, 1, 0, 0);
						func_251(uParam0, 16, 0, 0);
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
						func_326(uParam0, &Var0, 0, 0, 8);
						func_251(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_251(uParam0, 16, 0, 0);
					func_210(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_327(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xABC532F9098BFD9D(unk_0x47E385B0D957C8D4()) >= 1)
				{
					func_204("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_81, 262144))
				{
					func_322(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_322(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_322(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_327(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_313(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_82, 134217728))
				{
					func_313(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_327(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 100:
				func_204("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_210(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_184(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_184(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
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
					func_184(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_82, 65536))
				{
					if (func_374(uParam0, 11) > uParam0->f_36)
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
						func_184(&Var0);
						func_319(Var0, uParam1);
						func_219(&(uParam0->f_82), 65536);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_82, 131072))
				{
					if (func_374(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_184(&Var0);
						func_319(Var0, uParam1);
						func_219(&(uParam0->f_82), 131072);
						func_251(uParam0, 16, 0, 0);
						func_251(uParam0, 11, 0, 0);
						func_210(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_219(&(uParam0->f_82), 8388608);
				}
				else if (!func_24(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_219(&(uParam0->f_82), 16777216);
				}
				else if (!func_24(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_219(&(uParam0->f_82), 33554432);
				}
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_184(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_326(uParam0, &Var0, 0, 0, 8);
				}
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_319(Var0, uParam1);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_219(&(uParam0->f_81), 2097152);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_184(&Var0);
				func_319(Var0, uParam1);
				func_219(&(uParam0->f_81), 67108864);
				func_251(uParam0, 16, 0, 0);
				func_251(uParam0, 11, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_322(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
					{
						func_297(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_182(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_81, 268435456))
				{
					func_322(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_182(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_204("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_210(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_322(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
						{
							func_297(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_322(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_182(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_204("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_210(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_285(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_251(uParam0, 16, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_81, 16777216))
				{
					func_322(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_210(uParam0, 0, 0);
				break;
			
			case 88:
				func_204("TAXI_TIEFLEE", 7500, 1);
				func_210(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_98, 536870912))
				{
					func_204("TAXI_OBJ_CYI_1B", 7500, 1);
					func_219(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_210(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_184(&Var0);
				func_326(uParam0, &Var0, 0, 0, 8);
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
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
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
				func_326(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_326(uParam0, &Var0, 1, 0, 8);
				func_182(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_204("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_182(uParam0, 0, 0, 0, 0);
				func_210(uParam0, 0, 0);
				break;
			}
	}
}

void func_313(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_219(&(uParam0->f_82), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_184(&Param2);
	}
	func_285(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_314(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_82, 64))
	{
		func_219(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_82, 128))
	{
		func_219(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x9C1C462D7B1DD1F9(1, 3), 24);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_251(uParam0, 16, 0, 0);
}

void func_315(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_219(&(uParam0->f_82), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_184(&Param2);
		}
	}
	func_285(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_316(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_317(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_219(&(uParam0->f_81), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_285(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_318(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_229(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_184(sParam2);
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

void func_319(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_320(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_219(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_320(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2CF12F9ACF18F048(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_321(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_204("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_204("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_204("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_204("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_204("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_204("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_204("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_204("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_204("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_204("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_204("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_204("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_204("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_322(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_219(&(uParam0->f_81), iParam1);
	func_251(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_184(&Param2);
	}
	func_285(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_323(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_251(uParam0, 16, 0, 0);
	func_251(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x6CFF81397164A1D3(uParam0->f_3))
	{
		unk_0x8AAB2EF5F2D65031(uParam0->f_3, &cParam1, func_324(uParam0));
	}
}

char* func_324(var uParam0)
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

char* func_325(var uParam0, int iParam1)
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

int func_326(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_251(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_251(uParam0, 17, 0f, 1);
	}
	func_210(uParam0, iParam2, 0);
	return func_285(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_328(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_293(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_286(sParam2, iParam4, 0);
}

void func_329(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_229(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_184(sParam2);
				}
				else
				{
					func_184(sParam2);
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

int func_330(char* sParam0)
{
	if (!unk_0x602102324604D96B(sParam0))
	{
		if (func_164(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_331(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_129(uParam0, 9));
}

void func_332(var uParam0)
{
	if (func_129(uParam0, 17))
	{
		if (!func_129(uParam0, 14))
		{
			if (!func_128(uParam0))
			{
				if (!func_50())
				{
					func_136(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_333(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (unk_0xD42BD6EB2E0F1677(Global_96066.f_225[3]))
	{
		uParam0->f_4[0] = Global_96066.f_225[3];
		uParam0->f_4[1] = Global_96066.f_225[4];
		uParam0->f_4[2] = Global_96066.f_225[5];
		unk_0xDC19C288082E586E(uParam0->f_4[0], 1, 1);
		unk_0xDC19C288082E586E(uParam0->f_4[1], 1, 1);
		unk_0xDC19C288082E586E(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x9066DFD4D92E6773(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = unk_0x9066DFD4D92E6773(26, uParam0->f_45[1], unk_0xC899C78DB72CCBCC(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = unk_0x9066DFD4D92E6773(26, uParam0->f_45[2], unk_0xC899C78DB72CCBCC(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (unk_0xD42BD6EB2E0F1677(Global_96066.f_225[6]))
	{
		uParam0->f_4[3] = Global_96066.f_225[6];
		uParam0->f_4[4] = Global_96066.f_225[7];
		unk_0xDC19C288082E586E(uParam0->f_4[3], 1, 1);
		unk_0xDC19C288082E586E(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x9066DFD4D92E6773(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = unk_0x9066DFD4D92E6773(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (unk_0xD42BD6EB2E0F1677(Global_96066.f_222[0]))
	{
		uParam0->f_10 = Global_96066.f_222[0];
		uParam0->f_11 = Global_96066.f_222[1];
		unk_0xDC19C288082E586E(uParam0->f_10, 1, 1);
		unk_0xDC19C288082E586E(uParam0->f_11, 1, 1);
	}
	else
	{
		uParam0->f_10 = unk_0xF757863E1E2D8F12(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_11 = unk_0xF757863E1E2D8F12(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var5 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_4[iVar1]))
		{
			unk_0xFA8B88A1EF049B33(uParam0->f_4[iVar1]);
			unk_0x5EC7E18324A7D03D(&uVar0);
			unk_0xF4BF3E3D7FE56705(&uVar0);
			switch (iVar1)
			{
				case 0:
					unk_0xFE920E72A4B34285(0, uParam0->f_4[1], 0);
					unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xAF2345A328AF713D(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xAF2345A328AF713D(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					unk_0xFE920E72A4B34285(0, uParam0->f_4[0], 0);
					unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xAF2345A328AF713D(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xAF2345A328AF713D(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					unk_0xFE920E72A4B34285(0, uParam0->f_4[0], 0);
					unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xAF2345A328AF713D(0, Var2, 1f, 20000, 1193033728, 1056964608);
					unk_0xAF2345A328AF713D(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					unk_0xFE920E72A4B34285(0, uParam0->f_4[4], 0);
					unk_0xD4648EA39998A07B(0, uParam0->f_4[4], 3, 2, 2);
					unk_0xB7915D7C100167E8(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0xFE920E72A4B34285(0, uParam0->f_4[3], 0);
					unk_0xD4648EA39998A07B(0, uParam0->f_4[3], 3, 2, 2);
					unk_0xB7915D7C100167E8(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar1]) && (unk_0x04932A97CB319DE0((*uParam0)[iVar1], 242628503) != 1 || unk_0x04932A97CB319DE0((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0x49876BF356F39E66((*uParam0)[iVar1], 1);
			unk_0xFA8B88A1EF049B33((*uParam0)[iVar1]);
			unk_0x5EC7E18324A7D03D(&uVar0);
			unk_0xF4BF3E3D7FE56705(&uVar0);
			func_334(uParam0, iVar1, unk_0x9C1C462D7B1DD1F9(1000, 2000));
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_334(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0xFE920E72A4B34285(0, (*uParam0)[1], 0);
			unk_0xD4648EA39998A07B(0, (*uParam0)[1], 3, 2, 2);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0xFE920E72A4B34285(0, (*uParam0)[0], 0);
			unk_0xD4648EA39998A07B(0, (*uParam0)[0], 3, 2, 2);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xFE920E72A4B34285(0, (*uParam0)[0], 0);
			unk_0xD4648EA39998A07B(0, (*uParam0)[0], 3, 2, 2);
			unk_0x8DBC05C86F873CC9(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_335()
{
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_45[0]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_45[1]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_45[2]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_45[3]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(Local_892.f_45[4]))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(joaat("stretch")))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(joaat("superd")))
	{
		func_245("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA("oddjobs@taxi@gyn@cc@intro"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_245("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}

bool func_336(var uParam0)
{
	return uParam0->f_117;
}

int func_337(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_343((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_343((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_343((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_341(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
			{
				if (func_343(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_284(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_338(uParam0);
	}
	return 0;
}

void func_338(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_340()) && !func_137(uParam0)) || ((uParam0->f_411 != 9 && func_215(uParam0, 1)) && !func_137(uParam0)))
		{
			uVar0 = func_339(uParam0->f_4);
			unk_0x4971D2F8162B9674(&uVar0);
			uParam0->f_4 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
			unk_0xDC19C288082E586E(uParam0->f_4, 1, 0);
			func_147(uParam0);
			func_140(uParam0, 0);
		}
	}
}

var func_339(var uParam0)
{
	return uParam0;
}

int func_340()
{
	int iVar0;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
			if (unk_0xB86D29B10F627379(iVar0, 0))
			{
				if (unk_0xD214895E39AA3787(iVar0, -1) == unk_0x096275889B8E0EE0())
				{
					if (unk_0x0045A54EC7A22455(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_341(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_342(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_342(uParam0, 0, 4))
			{
				func_284(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_342(uParam0, 0, 8))
			{
				func_284(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_342(uParam0, 1, 1))
			{
				func_284(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_342(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_111(uParam0))
			{
				func_284(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_342(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
	{
		if (!unk_0x140188E884645624(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_182(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_182(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_343(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x096275889B8E0EE0();
	if (!unk_0x7D5B1F88E7504BBA(iVar0) && !unk_0x7D5B1F88E7504BBA(iParam0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_349(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_347(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_346(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_344(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_344(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (iParam7 && unk_0x7B6E7BEC1143AC86(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0x82368787EA73C0F7(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0x82368787EA73C0F7(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = unk_0x2F96E7720B0B19EA();
		if (!unk_0x7D5B1F88E7504BBA(uVar0))
		{
			if (unk_0x7B6E7BEC1143AC86(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x2F96E7720B0B19EA();
		if (!unk_0x7D5B1F88E7504BBA(uVar1))
		{
			if (unk_0x7B6E7BEC1143AC86(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			if (unk_0x1E8A2C0DC15A2CCA(iParam0))
			{
				if (unk_0x82387EE8392EE1FC(iParam0) == unk_0x096275889B8E0EE0())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x5E58342602E94718(iParam0, unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xDA4A4B9B96E20092(unk_0x217E9DC48139933D()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xAF07880B2C9F7277(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xD4FDF44B24648D1D(iParam0))
		{
			return 1;
		}
	}
	if (func_345(unk_0x096275889B8E0EE0(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x14BDA64F4D0D5E1D(iParam0) && func_9(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x52BE10F427339B39(iParam0, 0))
		{
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), unk_0xB3598EA616C3FFC3(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iParam0))
		{
			return 1;
		}
		if (!unk_0x7D5B1F88E7504BBA(uParam1))
		{
			if (unk_0x7B6E7BEC1143AC86(iParam1, unk_0x096275889B8E0EE0(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xB60CECFCFC33C802(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x69BBBA1223D4C644(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(iParam0, 1), unk_0xA86D5F069399F44D(iParam1, 1)) < 2.5f)
			{
				if (unk_0x9B4CC17D919C8FC4(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x0878A3DD21BC848A(uParam0, 4))
	{
		if (unk_0x69BBBA1223D4C644(uParam0) && !unk_0x3ED6DDEF9C89FB87(iParam0))
		{
			if (unk_0x5E58342602E94718(uParam1, unk_0xA86D5F069399F44D(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x7D5B1F88E7504BBA(uParam1))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam1, 1) };
	}
	if (unk_0xC652FD308772D79E(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xC153E5BCCF411814(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x0878A3DD21BC848A(uParam0, 2))
	{
		if (unk_0x69BBBA1223D4C644(uParam0))
		{
			if (unk_0x5E58342602E94718(iParam1, unk_0xA86D5F069399F44D(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x9B4CC17D919C8FC4(unk_0x0F16D042BD640EA3(iParam1), iParam0, 120f) && unk_0xD46F9DF1D1273423(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x52BE10F427339B39(unk_0x0F16D042BD640EA3(iParam1), 0))
			{
				iVar3 = unk_0xB3598EA616C3FFC3(unk_0x0F16D042BD640EA3(iParam1), 0);
			}
			if (unk_0x54A6BAC0E0415FCB(iParam0) || func_348(iVar3))
			{
				if (unk_0x5E58342602E94718(iParam1, unk_0xA86D5F069399F44D(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x9B4CC17D919C8FC4(unk_0x0F16D042BD640EA3(iParam1), iParam0, 120f) && unk_0xD46F9DF1D1273423(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x05B0061EFDFC8941((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (unk_0xB86D29B10F627379(iParam0, 0))
		{
			if (unk_0xD214895E39AA3787(iParam0, -1) != 0)
			{
				if (unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_10(unk_0x096275889B8E0EE0(), iParam0, 1) < 40f)
						{
							if (unk_0xA6817C110B830EAD(unk_0x217E9DC48139933D(), &uVar1))
							{
								if ((unk_0xC3D96AF45FCCEC4C(uVar1) && unk_0xDF1E5AAC561AFC59(iVar1) == iParam0) || (unk_0xCF8176912DDA4EA5(iVar1) && unk_0x0F16D042BD640EA3(iVar1) == unk_0xD214895E39AA3787(iParam0, -1)))
								{
									if ((unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()) && unk_0x2503EB2EA811EC9A(0, 24)) || (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && unk_0x2503EB2EA811EC9A(0, 69)))
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

int func_349(int iParam0, var uParam1)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
		{
			if (unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iParam0) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0))
			{
				if (unk_0x9B4CC17D919C8FC4(iParam0, unk_0x096275889B8E0EE0(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x4F67E8ECA7D3F667();
						}
						else if ((unk_0x4F67E8ECA7D3F667() - uParam1->f_1) > uParam1->f_3)
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

void func_350(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x2CF12F9ACF18F048(&(uParam0->f_124)) && func_50())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_50())
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

void func_351(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xD42BD6EB2E0F1677(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_229(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_229(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_229(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_220(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x4F67E8ECA7D3F667();
							}
						}
						else
						{
							func_23(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_229(Local_342.f_1[iVar0 /*4*/], 4) && !func_229(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_220(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_284(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_352(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_129(uParam0, 27))
	{
		func_176(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_374(uParam0, 27) > 5f)
	{
		if (func_343(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_251(uParam0, 27, 0, 0);
			func_251(uParam0, 10, 0, 0);
			func_341(uParam0, &uVar0, uParam1);
		}
		func_338(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_353(uParam0);
	}
	if ((((!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()) && (unk_0x153AD457764FD704(*uParam0) && !unk_0x63EFCC7E1810B8E6(*uParam0))) && (unk_0x153AD457764FD704(uParam0->f_1) && !unk_0x63EFCC7E1810B8E6(uParam0->f_1))) && !unk_0x24D15F45F410375F()) && !func_50())
	{
		if (func_374(uParam0, 26) > 10f)
		{
			func_136(uParam0, 26, 0);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
		}
	}
	else if (func_129(uParam0, 26))
	{
		func_136(uParam0, 26, 0);
	}
	return 0;
}

void func_353(var uParam0)
{
	if (!func_373(uParam0->f_429))
	{
		uParam0->f_429 = func_372();
		func_363(&(uParam0->f_429), 0, 0, unk_0x9C1C462D7B1DD1F9(4, 7), 0, 0, 0);
	}
	else if (func_354(uParam0->f_429))
	{
		func_284(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_354(int iParam0)
{
	return func_355(func_372(), iParam0);
}

int func_355(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_373(iParam1) || !func_373(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_357(iParam0);
	iVar1 = func_357(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_356(iParam0);
	iVar1 = func_356(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_357(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_358(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_359(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_360(int iParam0)
{
	return iParam0 & 15;
}

var func_361(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_362(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_362(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_363(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_361(*uParam0);
	iVar1 = func_360(*uParam0);
	iVar2 = func_359(*uParam0);
	iVar3 = func_358(*uParam0);
	iVar4 = func_357(*uParam0);
	iVar5 = func_356(*uParam0);
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
	iVar6 = func_371(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_371(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_364(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_370(uParam0, iParam1);
	func_369(uParam0, iParam2);
	func_368(uParam0, iParam3);
	func_367(uParam0, iParam4);
	func_366(uParam0, iParam5);
	func_365(uParam0, iParam6);
}

void func_365(var uParam0, int iParam1)
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

void func_366(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_367(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_360(*uParam0);
	iVar1 = func_361(*uParam0);
	if (iParam1 < 1 || iParam1 > func_371(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_368(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_369(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_370(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_371(int iParam0, int iParam1)
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

int func_372()
{
	var uVar0;
	
	func_370(&uVar0, unk_0xB6101ABE62B5F080());
	func_369(&uVar0, unk_0x4E162231B823DBBF());
	func_368(&uVar0, unk_0xC82CF208C2B19199());
	func_367(&uVar0, unk_0xDF2FD796C54480A5());
	func_366(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_365(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

int func_373(int iParam0)
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
	iVar0 = func_356(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_357(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_358(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_361(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_360(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_359(iParam0);
	if (iVar5 < 1 || iVar5 > func_371(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_374(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_177(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_375()
{
	func_376(&Local_462);
	func_393();
}

void func_376(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_397(2);
	}
}

int func_377(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_50() && func_374(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_3))
		{
			if (unk_0xB86D29B10F627379(uParam0->f_4, 0))
			{
				if (unk_0x9C8E4D238C999648(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_229(uParam0->f_85, 32))
					{
						if (!unk_0x78C3311A73135241(uParam0->f_4))
						{
							func_295(uParam0, 4160, 0);
						}
						else
						{
							func_295(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_295(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_295(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_295(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
	{
	}
	return 0;
}

void func_378(var uParam0)
{
	if (unk_0xCD82FA174080B3B1(uParam0->f_8))
	{
		unk_0xF2C3C9DA47AAA54A(&(uParam0->f_8));
	}
	if (unk_0xCD82FA174080B3B1(uParam0->f_9))
	{
		unk_0xF2C3C9DA47AAA54A(&(uParam0->f_9));
	}
	if (unk_0xCD82FA174080B3B1(uParam0->f_10))
	{
		unk_0xF2C3C9DA47AAA54A(&(uParam0->f_10));
	}
}

int func_379(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_380()
{
	func_382(&Local_462, 7);
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
	func_381(&Local_462, 3, 6);
}

void func_381(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_382(var uParam0, int iParam1)
{
	func_392(1);
	func_150();
	func_6(&(uParam0->f_244));
	func_391(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_24(Global_97353.f_17351, 4))
	{
		func_219(&(Global_97353.f_17351), 4);
	}
	func_386(uParam0);
	func_384(uParam0);
	unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	uParam0->f_102 = (func_383(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x7C11D0C2EFACD80D("TAXI", 2);
}

int func_383(int iParam0)
{
	return Global_97353.f_17351.f_39[iParam0];
}

void func_384(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0:
			func_385(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_385(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_385(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_385(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_385(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_385(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_385(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_385(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_385(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_385(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_385(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_386(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_390(uParam0, 3);
			func_389(uParam0, 14);
			break;
		
		case 1:
			func_390(uParam0, 14);
			func_389(uParam0, 8);
			break;
		
		case 2:
			func_390(uParam0, 8);
			func_389(uParam0, 7);
			break;
		
		case 3:
			func_390(uParam0, 15);
			func_389(uParam0, 6);
			break;
		
		case 4:
			func_390(uParam0, 0);
			func_389(uParam0, 3);
			break;
		
		case 5:
			func_390(uParam0, 6);
			func_389(uParam0, 7);
			break;
		
		case 6:
			func_390(uParam0, 8);
			func_389(uParam0, 15);
			break;
		
		case 7:
			func_390(uParam0, 8);
			func_389(uParam0, 14);
			break;
		
		case 8:
			func_390(uParam0, 7);
			func_389(uParam0, 15);
			break;
		
		case 9:
			func_390(uParam0, unk_0x9C1C462D7B1DD1F9(0, 17));
			iVar0 = func_388((uParam0->f_418.f_2 + unk_0x9C1C462D7B1DD1F9(1, 17)), 0, 16);
			func_389(uParam0, iVar0);
			func_387(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_387(var uParam0)
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

int func_388(int iParam0, int iParam1, int iParam2)
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

void func_389(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_390(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_391(var uParam0)
{
	uParam0->f_2 = unk_0x096275889B8E0EE0();
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
	func_136(uParam0, 32, 0);
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96409, unk_0x8F77B33B6A34D8BA(), 24);
		Global_96403 = 1;
	}
	else
	{
		StringCopy(&Global_96409, "NULL", 24);
		Global_96403 = 0;
	}
}

void func_393()
{
	func_396(&Local_892);
	func_178();
	func_395();
	func_394();
	unk_0x5E8B6D17FF91CD59();
}

void func_394()
{
	unk_0x042F9049EA419E86();
	unk_0x4763145053A33D46("oddjobs@taxi@gyn@cc@hotbox");
}

void func_395()
{
	unk_0x4AD96EF928BD4F9A(Local_892.f_41[0]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_41[1]);
	unk_0x4AD96EF928BD4F9A(Local_892.f_41[2]);
}

void func_396(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x9DD5AFF561E88F2A(uParam0->f_73[iVar0]))
		{
			unk_0x459598F579C98929(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}

void func_397(int iParam0)
{
	Global_96066.f_22 = iParam0;
}

