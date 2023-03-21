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
	struct<418> Local_413 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_831 = -1;
	var uLocal_832 = -1;
	var uLocal_833 = -1;
	var uLocal_834 = -1;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	struct<3> Local_845 = { 0, 0, 0 } ;
	struct<3> Local_848 = { 0, 0, 0 } ;
	struct<3> Local_851 = { 0, 0, 0 } ;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857 = { 0, 0, 0 } ;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	bool bLocal_863 = 0;
	int iLocal_864 = 0;
	bool bLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	var uLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	char cLocal_878[24] = "";
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	char cLocal_884[24] = "";
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	char cLocal_890[24] = "";
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	char cLocal_896[24] = "";
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	char cLocal_902[24] = "";
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	char cLocal_908[24] = "";
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	char cLocal_914[24] = "";
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	char cLocal_920[24] = "";
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	char cLocal_926[24] = "";
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	struct<6> Local_932 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 1097859072;
	var uLocal_941 = 1500;
	var uLocal_942 = 45;
	var uLocal_943 = 1103626240;
	var uLocal_944 = 5;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955[2] = { 0, 0 };
	int iLocal_958 = 0;
	var uLocal_959[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	bool bLocal_971 = 0;
	struct<28> Local_972 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 5;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
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
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
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
	uLocal_77 = unk_0xD736C0AC62BF73AD();
	uLocal_78 = unk_0x880E0FAC08C6FA65();
	Local_83 = { 500f, 500f, 500f };
	Local_845 = { 342.6987f, -996.7599f, 28.2438f };
	Local_848 = { 321.1089f, -996.4285f, 28.20932f };
	Local_851 = { -1042.946f, -2689.55f, 12.7572f };
	Local_854 = { -1044.808f, -2694.138f, 12.728f };
	Local_857 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_871 = 1;
	iLocal_875 = -1;
	StringCopy(&cLocal_878, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_884, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_890, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_896, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_902, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_908, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_914, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_920, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_926, "txm8_thank3F_2", 24);
	if (unk_0xE8A79675302ED812(67))
	{
		func_433(2);
		func_430();
	}
	unk_0x25A523E067E06F54(1);
	func_417(5);
	while (true)
	{
		if (unk_0x724D816EA203A79E(Local_413.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_413);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xBC25C936A095B5BA());
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
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xBC25C936A095B5BA());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
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
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	var uVar0;
	int iVar1;
	
	if (func_416(&Local_413))
	{
		if (func_415(&Local_413, bLocal_863))
		{
			func_413();
		}
	}
	else
	{
		func_412(&Local_413);
		func_378(&Local_413, &uLocal_938);
		if (Local_413.f_410 != 28 && Local_413.f_410 != 30)
		{
			func_377(&Local_413);
		}
		func_376(&Local_413, &uLocal_873, 0);
		if (Local_413.f_410 > 2)
		{
			if (((Local_413.f_410 == 21 || Local_413.f_410 == 25) || Local_413.f_410 == 9) || Local_413.f_410 == 22)
			{
				func_375(&Local_413);
			}
			if (!func_374(&Local_413))
			{
				func_344();
			}
			else
			{
				func_328(&Local_413, "Taxi Not Driveable", func_343(&Local_413));
			}
		}
		if (Local_413.f_410 == 9 || Local_413.f_410 == 22)
		{
			func_305(&Local_413, 0, 1);
		}
		if (Local_413.f_410 == 17 || Local_413.f_410 == 21)
		{
			if (func_304(&Local_413) && func_294(1, 1, 0))
			{
				func_281(&uLocal_45, Local_857, 0, 0, 1, 1, 1);
			}
			else
			{
				func_280(&uLocal_45, 0, 0);
			}
			if (func_279(&Local_413) && func_294(1, 1, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_872, 3))
				{
					func_278("TAXI_HNT_CAM", -1);
					unk_0xF0059F27F7BB6680(&iLocal_872, 3);
					if (unk_0xFA30DFD0084E92FE(iLocal_872, 4))
					{
						unk_0x7CB6FD92BE491AD9(&iLocal_872, 4);
					}
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(iLocal_872, 4))
			{
				unk_0x7456702622C62EA0(1);
				unk_0xF0059F27F7BB6680(&iLocal_872, 4);
			}
		}
		switch (Local_413.f_410)
		{
			case 0:
				func_275();
				func_274(&Local_413, 16, 4f, 0);
				func_271(&Local_413, Local_851, Local_854, "TaxiDerrick", func_273(0), 116.1366f, 10f);
				func_269(&Local_413);
				func_268(&Local_413, 1);
				break;
			
			case 1:
				if (func_266())
				{
					unk_0xB2CB6EAA6B280A84("TAXI_Pursuers", &iLocal_970);
					func_265();
					func_245();
					func_244(&(Local_409[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_243(&Local_413, &Local_409);
					func_242(&Local_413);
					Local_413.f_14 = { Local_851 };
					func_268(&Local_413, 3);
				}
				break;
			
			case 3:
				if (func_236(&Local_413, 1))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_413.f_3, 0))
					{
						unk_0xB0031DDAE4FF0BC3(Local_413.f_3, 8, 0, 0, 0);
						unk_0x4106FAF8AA1D69D5(Local_413.f_3, iLocal_970);
						unk_0xEC9E10B23689A01D(Local_413.f_3, 1);
					}
					unk_0xA7FBEF44EF04D534(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 1, 0, 1);
					unk_0xA902E18EDF6FA0C8(0, 1166638144, Local_413.f_413);
					unk_0xA902E18EDF6FA0C8(0, -1865950624, Local_413.f_413);
					unk_0xA902E18EDF6FA0C8(0, 296331235, Local_413.f_413);
					unk_0x2CA123B0622F495C(func_273(0));
					func_235(&Local_413, 1, 0);
					func_268(&Local_413, 5);
				}
				break;
			
			case 5:
				if (func_211(&Local_413, 0, 1109393408))
				{
					Local_413.f_17 = { func_210(0) };
					iLocal_860 = 1;
					func_268(&Local_413, 15);
				}
				break;
			
			case 15:
				if (func_209(&Local_413))
				{
					func_206(&Local_413, 9, 1, 0, 0);
					func_205(&Local_413);
					func_204();
					func_203(func_210(-1), 0, 1114636288);
					func_268(&Local_413, 9);
				}
				if (unk_0xE59B7F5A03335350(Local_413.f_4, 0))
				{
					if (!unk_0x62F3A07C43FFB568(Local_413.f_2, Local_413.f_4, 0))
					{
						func_198(&Local_413);
						func_268(&Local_413, 5);
					}
				}
				break;
			
			case 9:
				if (!func_197(Local_413.f_82, 16384) && func_196(&Local_413) != 35)
				{
					if (func_195(&Local_413))
					{
						if (func_279(&Local_413))
						{
							if (func_194(Local_413.f_4, Local_413.f_17, 1) <= 80f)
							{
								func_192(&uLocal_1002);
								func_191(&Local_972, 4, 0);
								func_206(&Local_413, 35, 1, 1, 0);
								unk_0x6E52C7765A0F4382(0);
							}
						}
					}
				}
				if (!iLocal_870)
				{
					if (func_195(&Local_413))
					{
						if (func_279(&Local_413))
						{
							if (func_194(Local_413.f_4, Local_413.f_17, 1) <= 100f)
							{
								unk_0xD2A8FC9FE0044C83(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_870 = 1;
							}
						}
					}
				}
				if (func_174(&Local_413, 1086324736, 1097859072, 1117782016))
				{
					iLocal_860 = 0;
					unk_0x7781946F1FC054FA(Local_413.f_9, 0);
					Local_413.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_413.f_34 = 238.52f;
					func_274(&Local_413, 6, 0, 0);
					func_172(&(Local_413.f_81), 67108864);
					func_206(&Local_413, 28, 1, 1, 0);
					Local_413.f_417 = 29;
					func_268(&Local_413, 16);
				}
				break;
			
			case 16:
				if (!unk_0x36CEFBE9B745A58D(Local_413.f_3))
				{
					if (func_195(&Local_413))
					{
						func_170(&Local_413, Local_845);
					}
					else if (unk_0xF4FCC3C1048FF2AB(Local_413.f_3, 451360105) == 7)
					{
						unk_0x02DAF06EA4F08219(&uLocal_844);
						unk_0xC5A6DFE2B8987B17(&uLocal_844);
						unk_0x346129B364057FF6(0, Local_845, 1.5f, 40000, 1048576000, 0, 1193033728);
						unk_0x346129B364057FF6(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0x346129B364057FF6(0, Local_848, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0x535008C596714F9E(uLocal_844);
						unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
						unk_0x02DAF06EA4F08219(&uLocal_844);
						unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
						func_274(&Local_413, 6, 0, 0);
						func_268(&Local_413, 17);
						iLocal_861 = 0;
					}
				}
				break;
			
			case 17:
				if (!unk_0x36CEFBE9B745A58D(Local_413.f_3))
				{
				}
				if (!iLocal_861)
				{
					func_162();
				}
				if (func_279(&Local_413))
				{
					if (!unk_0x4DBCE270B354E123(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0))
					{
						if (func_194(Local_413.f_4, Local_413.f_17, 1) > 250f)
						{
							func_328(&Local_413, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_160(Local_413.f_3, 1) > 10f)
						{
							if (unk_0xB1D6718ACE798CBB(Local_413.f_9) == 0 && !bLocal_863)
							{
								func_157(&Local_413, 1);
								unk_0xBB5629E7D44054AE("TAXI_OBJ_CYI_01");
							}
							func_206(&Local_413, 57, 1, 0, 1);
						}
					}
					else if (unk_0x2DA8CA50A72528FB(Local_413.f_9) && unk_0xB1D6718ACE798CBB(Local_413.f_9) > 0)
					{
						unk_0x7781946F1FC054FA(Local_413.f_9, 0);
						unk_0x0BBAABB52887CF8C(Local_413.f_9, 0);
						func_206(&Local_413, 29, 1, 0, 1);
						unk_0xBB5629E7D44054AE("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_862)
					{
						iLocal_862 = 1;
					}
					func_146(&Local_413, 1);
				}
				if (((unk_0x4DBCE270B354E123(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0) && unk_0x4DBCE270B354E123(Local_413.f_3, Local_848, 5f, 5f, 5f, false, 1, 0)) && func_304(&Local_413)) && !iLocal_861)
				{
					if (!unk_0x36CEFBE9B745A58D(Local_413.f_3))
					{
						if (unk_0x41A5D6415E2CC10E(Local_413.f_3))
						{
							unk_0xF0059F27F7BB6680(&uLocal_938, 8);
							unk_0x7A535CE1F001F3FE(Local_413.f_3, joaat("weapon_combatpistol"), 50, 0, 1);
							unk_0xAD955309D7708805(Local_413.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, joaat("FIRING_PATTERN_BURST_FIRE"));
							unk_0xDC078F87049ECECE(Local_413.f_3, 0, 0);
							unk_0x30034548191398D0(Local_413.f_3, 0);
							unk_0x1E5C2A1EAB944289(Local_413.f_3, 1);
							unk_0x641B19E156645A92(Local_413.f_3, 339.9392f, -992.9357f, 28.3731f, 1, 0, 0, 1);
							iLocal_861 = 1;
							func_274(&Local_413, 6, 0, 0);
						}
					}
				}
				if (iLocal_861)
				{
					if ((func_144(&Local_413, 6) > 8f && unk_0x4DBCE270B354E123(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0)) && func_304(&Local_413))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_413.f_3))
						{
							if (unk_0x41A5D6415E2CC10E(Local_413.f_3))
							{
								unk_0x7CB6FD92BE491AD9(&uLocal_938, 8);
								unk_0xDC078F87049ECECE(Local_413.f_3, 1, 0);
								unk_0x30034548191398D0(Local_413.f_3, 1);
								unk_0x1E5C2A1EAB944289(Local_413.f_3, 0);
								unk_0x641B19E156645A92(Local_413.f_3, Local_848, 1, 0, 0, 1);
								unk_0xB0031DDAE4FF0BC3(Local_413.f_3, 8, 1, 0, 0);
								if (unk_0xE59B7F5A03335350(Local_413.f_4, 0))
								{
									unk_0xC8FD3EBBB90E8D7F(Local_413.f_3, 118, 0);
									unk_0x49D46EE47C9CCB66(Local_413.f_3);
									uVar0 = func_143(Local_413.f_4, Local_413.f_3);
									unk_0x02DAF06EA4F08219(&uLocal_844);
									unk_0xC5A6DFE2B8987B17(&uLocal_844);
									unk_0xA2DBAE5B6ADB4DC9(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, 0, 786603, -1082130432);
									unk_0x0D042F5C6172D20A(0, 1);
									unk_0x74C219E0C7FC4E4B(0, 0);
									unk_0xD179FA0466FA4FE3(0, Local_413.f_4, 40000, uVar0, 1073741824, 1, 0);
									unk_0x535008C596714F9E(uLocal_844);
									unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
									unk_0x02DAF06EA4F08219(&uLocal_844);
									func_274(&Local_413, 6, 0, 0);
									if (unk_0x2DA8CA50A72528FB(Local_413.f_9))
									{
										unk_0x7781946F1FC054FA(Local_413.f_9, 0);
										unk_0x0BBAABB52887CF8C(Local_413.f_9, 0);
									}
									unk_0x806480CBE8DA756E(Local_413.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_268(&Local_413, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_144(&Local_413, 6) > 23f)
				{
					if (!unk_0x36CEFBE9B745A58D(Local_413.f_3))
					{
						unk_0xA4E856A8CD53B8DF(Local_413.f_3);
						unk_0x3D3F19B39A42CF7A(Local_413.f_3, unk_0xBC25C936A095B5BA(), -1, 0);
					}
					func_328(&Local_413, "player didn't let teh Passenger in", 8);
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				if ((unk_0x4DBCE270B354E123(Local_413.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, 1, 0) && unk_0x4DBCE270B354E123(Local_413.f_4, Local_413.f_17, 10f, 10f, 10f, false, 1, 0)) && iLocal_861)
				{
					unk_0xFB3EF14E3F131640(344.5906f, -996.409f, 28.30219f, 4, 1056964608, 1, 0, 1065353216, 0);
					unk_0x10B5C0C7337B8420(iLocal_875, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0, 0, 0);
					iLocal_861 = 0;
				}
				if (func_195(&Local_413))
				{
					unk_0x6E52C7765A0F4382(1);
					unk_0xED946BB96C5E9C4A(unk_0xFC1CAE18F3ECBF2D(), 2, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xFC1CAE18F3ECBF2D(), 0);
					unk_0xD6423910AAD8A379("TAXI_CUT_U_IN");
					func_203(func_210(0), 1, 1114636288);
					unk_0xA902E18EDF6FA0C8(5, Local_413.f_413, joaat("COP"));
					func_141(6, 2);
					func_206(&Local_413, 49, 1, 0, 0);
					if (unk_0x2DA8CA50A72528FB(Local_413.f_9))
					{
						unk_0x0BBAABB52887CF8C(Local_413.f_9, 0);
						unk_0x07B8ECB35A4ED3AC(&(Local_413.f_9));
					}
					func_280(&uLocal_45, 0, 0);
					func_274(&Local_413, 6, 0, 0);
					func_274(&Local_413, 9, 0, 0);
					func_274(&Local_413, 7, 0, 0);
					func_268(&Local_413, 25);
				}
				break;
			
			case 25:
				func_140(&Local_413, &(Local_413.f_43));
				if (func_197(Local_413.f_44, 4))
				{
					func_138(&(Local_413.f_44), 4);
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) > 0)
				{
					if (!func_137(&Local_413))
					{
						if (!unk_0xE6711F601F11B66B())
						{
							if ((func_144(&Local_413, 16) > unk_0x55AEFCD285ECC0F2(15f, 25f) && iLocal_877 < 8) || func_144(&Local_413, 16) > unk_0x55AEFCD285ECC0F2(25f, 35f))
							{
								if (func_196(&Local_413) != 51)
								{
									func_206(&Local_413, 51, 1, 0, 0);
									iLocal_877++;
								}
								else
								{
									func_235(&Local_413, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1 && func_144(&Local_413, 6) > 10f)
				{
					unk_0xC1300D0F3A74E20B("TAXI_CUT_U_IN");
					func_268(&Local_413, 26);
					func_172(&(Local_413.f_44), 1);
				}
				break;
			
			case 26:
				func_140(&Local_413, &(Local_413.f_43));
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) > 0)
				{
					if (!func_137(&Local_413))
					{
						if (!unk_0xE6711F601F11B66B())
						{
							if ((func_144(&Local_413, 16) > unk_0x55AEFCD285ECC0F2(15f, 25f) && iLocal_877 < 8) || func_144(&Local_413, 16) > unk_0x55AEFCD285ECC0F2(25f, 35f))
							{
								if (func_196(&Local_413) != 51)
								{
									func_206(&Local_413, 51, 1, 0, 0);
									iLocal_877++;
								}
								else
								{
									func_235(&Local_413, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1 && func_144(&Local_413, 9) > 2f)
				{
					if (func_144(&Local_413, 9) <= 180f)
					{
						func_136(&Local_413, 0);
					}
					unk_0xA902E18EDF6FA0C8(0, Local_413.f_413, joaat("COP"));
					Local_413.f_17 = { func_210(5) };
					func_141(7, 2);
					func_135(&Local_413);
					func_134(&Local_413, 9, 0);
					func_134(&Local_413, 2, 0);
					func_134(&Local_413, 3, 0);
					if (!func_197(Local_413.f_44, 4))
					{
						func_172(&(Local_413.f_44), 4);
					}
					Local_413.f_116 = 1;
					func_268(&Local_413, 14);
				}
				break;
			
			case 14:
				if (!func_132(&Local_413))
				{
					func_129();
					func_157(&Local_413, 1);
					func_128();
					func_268(&Local_413, 22);
				}
				break;
			
			case 22:
				if (!bLocal_865)
				{
					if (Local_413.f_417 == 33 && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
					{
						bLocal_865 = true;
						func_172(&(Local_413.f_44), 4);
						func_127(&iLocal_875);
						Local_972.f_27++;
					}
				}
				if (bLocal_865)
				{
					if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) > 0)
					{
						if (unk_0x2DA8CA50A72528FB(Local_413.f_9))
						{
							unk_0x0BBAABB52887CF8C(Local_413.f_9, 0);
							unk_0x07B8ECB35A4ED3AC(&(Local_413.f_9));
						}
					}
					else
					{
						func_157(&Local_413, 1);
					}
				}
				if (func_197(Local_413.f_44, 1) && bLocal_865)
				{
					func_138(&(Local_413.f_44), 1);
					if (bLocal_971)
					{
					}
				}
				if (!func_197(Local_413.f_82, 32768) && func_196(&Local_413) != 36)
				{
					if (func_195(&Local_413))
					{
						if (func_279(&Local_413))
						{
							if (func_194(Local_413.f_4, Local_413.f_17, 1) <= 300f)
							{
								if (!func_126())
								{
									func_206(&Local_413, 36, 1, 1, 0);
								}
								else
								{
									func_124();
								}
								if (iLocal_864 && !iLocal_867)
								{
									unk_0x6C5F5B5F6894CCE3(Local_413.f_17, 3f, 0, 0, 0, 0);
									uLocal_968 = unk_0x1DAA351326EA3537(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0, 1, 1, 1);
									uLocal_955[0] = unk_0x01B3635C3E8EDD81(6, func_273(3), -1036.502f, -2742.986f, 20.16969f, 0, 1, 1);
									uLocal_955[1] = unk_0x01B3635C3E8EDD81(6, func_273(3), -1043.706f, -2739.234f, 19.16969f, 0, 1, 1);
									unk_0x7A535CE1F001F3FE(uLocal_955[0], joaat("weapon_carbinerifle"), -1, 1, 1);
									unk_0x7A535CE1F001F3FE(uLocal_955[1], joaat("weapon_carbinerifle"), -1, 1, 1);
									if (unk_0xABB25056487DF1D7(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
									{
										unk_0xBE2047F9F9DE6F43(uLocal_955[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										unk_0xA3A7138EAD2268A0(uLocal_955[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (unk_0xABB25056487DF1D7(-1043.706f, -2739.234f, 19.16969f, 5f, 1))
									{
										unk_0xBE2047F9F9DE6F43(uLocal_955[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										unk_0xA3A7138EAD2268A0(uLocal_955[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_867 = 1;
								}
							}
						}
					}
				}
				if (func_174(&Local_413, 1086324736, 1097859072, 1117782016))
				{
					Local_972.f_0 = 0;
					unk_0x07B8ECB35A4ED3AC(&(Local_413.f_9));
					func_122(&Local_413);
					func_118(&Local_413);
					func_117();
					func_268(&Local_413, 27);
				}
				break;
			
			case 27:
				if (func_115() && !iLocal_866)
				{
					func_114(&Local_413, &iVar1);
					uLocal_843 = unk_0xB6896943DA475493(joaat("p_banknote_s"), unk_0x541C2AEF053615BC(Local_413.f_3, 1), 1, 1, 0);
					unk_0x5DBE04849460E608(uLocal_843, Local_413.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!unk_0x36CEFBE9B745A58D(Local_413.f_3) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						unk_0xE896C0AD02364F2A(Local_413.f_3, "oddjobs@taxi@cyi", func_113(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "oddjobs@taxi@cyi", func_112(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x1F000DD52A4C4208(uLocal_843, func_111(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0, 0);
					}
					iLocal_866 = 1;
				}
				if (func_103(&Local_413, 1))
				{
					unk_0x02DAF06EA4F08219(&uLocal_844);
					unk_0xC5A6DFE2B8987B17(&uLocal_844);
					unk_0xA3981DED4FC2E56E(0, 0, 0);
					unk_0x0D042F5C6172D20A(0, 0);
					unk_0x44C98C11ED6DD327(0);
					unk_0x346129B364057FF6(0, Local_413.f_29, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					unk_0x535008C596714F9E(uLocal_844);
					unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
					unk_0x22321800954A532E(Local_413.f_3, 1);
					unk_0x806480CBE8DA756E(Local_413.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_268(&Local_413, 29);
				}
				break;
			
			case 29:
				if (func_72(&Local_413, &uLocal_945))
				{
					if (iLocal_864 || iLocal_874 == -1)
					{
						func_268(&Local_413, 28);
					}
					else
					{
						func_11(1, &Local_413, 1);
						func_268(&Local_413, 30);
					}
				}
				break;
			
			case 28:
				if (func_9())
				{
					func_11(1, &Local_413, 1);
					func_268(&Local_413, 30);
				}
				break;
			
			case 30:
				func_430();
				break;
			}
	}
}

int func_9()
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	Var1 = { Var1 };
	if (iLocal_874 > 2)
	{
		unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
	}
	switch (iLocal_874)
	{
		case -1:
			iLocal_874++;
			break;
		
		case 0:
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			unk_0x6E52C7765A0F4382(0);
			unk_0x02DAF06EA4F08219(&uVar0);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 256);
			unk_0x346129B364057FF6(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 1048576000, 0, 1193033728);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(Local_413.f_3, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
			iLocal_969 = unk_0x61C05BF08A1E0EFE(func_273(4), -1067.146f, -2579.632f, 19.7762f, 150f, 1, 1, 0);
			iLocal_958 = unk_0xFD8987C090669BD5(iLocal_969, 26, func_273(3), -1, 1, 1);
			func_274(&Local_413, 9, 0, 0);
			iLocal_874++;
			break;
		
		case 1:
			if (func_144(&Local_413, 9) > 0.5f)
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_413.f_3, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(uLocal_955[0], 0))
					{
						unk_0x56F2E1B5599188FA(uLocal_955[0], Local_413.f_3, -1, 2049, 3);
						func_7(&(Local_413.f_244), 4, uLocal_955[0], "TaxiOJCop1", 0, 1);
						unk_0x36C3B58DA78A2679(uLocal_955[0], "TaxiOJCop1");
					}
					if (!unk_0x1D403DFADBC2DE3C(uLocal_955[1], 0))
					{
						unk_0x56F2E1B5599188FA(uLocal_955[1], Local_413.f_3, -1, 2049, 3);
					}
				}
				iLocal_874++;
			}
			break;
		
		case 2:
			if ((!unk_0x1D403DFADBC2DE3C(uLocal_955[0], 0) && !unk_0x1D403DFADBC2DE3C(uLocal_955[1], 0)) && !unk_0x1D403DFADBC2DE3C(Local_413.f_3, 0))
			{
				if (unk_0x0C265B3C448E6954(Local_413.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0, 1, 0))
				{
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0xD0231395241DBA85(0, Local_413.f_3, Local_413.f_3, 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x57D65255D3D3B6A7(0, Local_413.f_3, -1, 0);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(uLocal_955[0], uVar0);
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0x22321800954A532E(uLocal_955[0], 1);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0xDE2D2B13F24A979D(0, 1500);
					unk_0x57D65255D3D3B6A7(0, Local_413.f_3, 2000, 0);
					unk_0xD0231395241DBA85(0, Local_413.f_3, Local_413.f_3, 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x57D65255D3D3B6A7(0, Local_413.f_3, -1, 0);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(uLocal_955[1], uVar0);
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0x22321800954A532E(uLocal_955[1], 1);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0x85DB484A637CEAB9(0, uLocal_955[0], 3);
					unk_0x56F2E1B5599188FA(0, uLocal_955[0], -1, 2049, 3);
					unk_0xDE2D2B13F24A979D(0, 1000);
					unk_0x2A2F7485FD2B9A29(0, -1, 0, -1, 0);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(Local_413.f_3, uVar0);
					unk_0x02DAF06EA4F08219(&uVar0);
					func_206(&Local_413, 54, 1, 0, 0);
					iLocal_876 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uLocal_959, -1);
					iVar4 = 0;
					while (iVar4 < iLocal_876)
					{
						if (((((uLocal_959[iVar4] != unk_0xBC25C936A095B5BA() && uLocal_959[iVar4] != Local_413.f_3) && uLocal_959[iVar4] != uLocal_955[1]) && uLocal_959[iVar4] != uLocal_955[0]) && uLocal_959[iVar4] != iLocal_958) && !unk_0x5CAE759AE8219D20(uLocal_959[iVar4]))
						{
							unk_0x77815D3407C6700D(uLocal_959[iVar4], 1, 1);
							unk_0x5558ED6D4A2DEC93(uLocal_959[iVar4], Local_413.f_3, 100f, -1, 0, 0);
						}
						iVar4++;
					}
					func_274(&Local_413, 9, 0, 0);
					iLocal_874++;
				}
			}
			break;
		
		case 3:
			if (func_144(&Local_413, 9) > 5f && !func_126())
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_970, joaat("COP"));
				unk_0xA902E18EDF6FA0C8(5, joaat("COP"), iLocal_970);
				unk_0x9CDD10270A1ACF6F(Local_413.f_3, &iVar5, 1);
				if (iVar5 == joaat("weapon_unarmed"))
				{
					unk_0x7A535CE1F001F3FE(Local_413.f_3, joaat("weapon_combatpistol"), -1, 0, 1);
				}
				unk_0x91629AC1E1F78419(Local_413.f_3, 13, 1);
				unk_0x91629AC1E1F78419(Local_413.f_3, 24, 1);
				unk_0x54480313BB3E8DD0(Local_413.f_3, 2);
				unk_0xEA2C4A582CD26EF5(Local_413.f_3, 1);
				unk_0xFC3C88E2313FA926(Local_413.f_3, 80);
				unk_0xB90F3BE2A1EF63DB(Local_413.f_3, 50f, 0);
				func_274(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			if ((unk_0xD9C1758D86688CEA(uLocal_955[0], unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(uLocal_955[1], unk_0xBC25C936A095B5BA(), 1)) && !unk_0x36CEFBE9B745A58D(Local_413.f_3))
			{
				unk_0x5558ED6D4A2DEC93(Local_413.f_3, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
				func_274(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 4:
			if (unk_0x1D403DFADBC2DE3C(Local_413.f_3, 0))
			{
				if (!unk_0x1D403DFADBC2DE3C(uLocal_955[0], 0))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_955[0]);
					if (unk_0xABB25056487DF1D7(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
					{
						unk_0xBE2047F9F9DE6F43(uLocal_955[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						unk_0xA3A7138EAD2268A0(uLocal_955[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					unk_0x22321800954A532E(uLocal_955[0], 1);
				}
				if (!unk_0x1D403DFADBC2DE3C(uLocal_955[1], 0))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_955[1]);
					Var1 = { unk_0x541C2AEF053615BC(Local_413.f_3, 0) };
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0x5A996221BB5E3258(0, Var1, Var1, 1f, 0, 3f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xF90A8AD825CA2E0C(0, Var1, 500, 0, 0);
					unk_0x4BED3C9D6EF14C38(0, Var1, -1, 2049, 3);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(uLocal_955[1], uVar0);
					unk_0x22321800954A532E(uLocal_955[0], 1);
				}
				return 1;
			}
			else
			{
				if (func_144(&Local_413, 9) > 6f)
				{
					func_206(&Local_413, 140, 1, 0, 1);
					func_274(&Local_413, 9, 0, 0);
				}
				if (unk_0x1D403DFADBC2DE3C(uLocal_955[0], 0) && unk_0x1D403DFADBC2DE3C(uLocal_955[1], 0))
				{
					unk_0xA4E856A8CD53B8DF(Local_413.f_3);
					unk_0x5558ED6D4A2DEC93(Local_413.f_3, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
				}
				if (func_160(Local_413.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_274(&Local_413, 9, 0, 0);
			iLocal_874++;
			break;
		
		case 5:
			if (func_144(&Local_413, 9) > 2f)
			{
				func_274(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 6:
			if (func_144(&Local_413, 9) > 2f)
			{
				Var1 = { unk_0x1483995DFFF0DEEA(iLocal_969, func_10(5)) };
				func_274(&Local_413, 9, 0, 0);
				iLocal_874++;
			}
			break;
		
		case 7:
			if (func_144(&Local_413, 9) >= 1f)
			{
				iLocal_874++;
			}
			break;
		
		case 8:
			iLocal_874++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_10(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 4:
			Var0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 6:
			Var0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 5:
			Var0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 1:
			Var0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 2:
			Var0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 3:
			Var0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 7:
			Var0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 8:
			Var0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return Var0;
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_48(uParam1);
		if (!unk_0x36CEFBE9B745A58D(uParam1->f_3))
		{
			unk_0xC8FD3EBBB90E8D7F(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_141(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_47(uParam0);
	if (func_126())
	{
		func_45();
	}
	func_43();
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	func_40(0);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		unk_0xA73D1278857991A2(uParam0->f_4, 0);
		unk_0xE421FE22DE8008EB(uParam0->f_4);
		unk_0xBF86DE1BFE3AA5CF(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_203(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 1);
	if (func_32())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_22(0, 1, 1, 0, 0);
	unk_0x43F06392C4EF25E0(1);
	unk_0x59B038076F830627(1);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
		unk_0x4AED68BFACFB14CB(1);
	}
	if (func_197(Global_105220.f_19068, 4))
	{
		func_138(&(Global_105220.f_19068), 4);
		unk_0x8510BC031C24B862(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x4EA570997E107F35("gestures@m@standing@casual");
	unk_0x4EA570997E107F35("oddjobs@taxi@");
	unk_0x4EA570997E107F35("oddjobs@towingcome_here");
	if (unk_0x57D316754A262B34())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
	}
	unk_0x739C5CCC39AE3137(unk_0xF2DB717A73826179((func_13(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0xEAEFBBEC1AEA464B(&uVar0))
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
	unk_0x0E330AFCF19FCA1E(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_3))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (!unk_0x5237AF95232D78C5(uParam0->f_3, 0))
			{
				unk_0x9E410F8AFFC2894E(uParam0->f_3);
			}
			unk_0x2E35C4FA5F0ED22F(uParam0->f_3, 0);
			unk_0xA902E18EDF6FA0C8(255, uParam0->f_413, joaat("player"));
			if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x02537C8C1BEEB477(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_31(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_30())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_31(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_27(unk_0xB5CEFD608600A09F())) && !func_24(unk_0xB5CEFD608600A09F(), 0)) && !func_23()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_27(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_23()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
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

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0xE7A89C39746A63AC(unk_0xFC1CAE18F3ECBF2D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
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
		unk_0x379ACE23D404525C(Var0, Var3, iParam3, 1);
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
	if (Global_14659)
	{
		func_41(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_30())
	{
		Global_14493.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
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
		if (Global_90033[iVar0 /*17*/] && !Global_90033[iVar0 /*17*/].f_1)
		{
			if (Global_90033[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90033[iVar0 /*17*/].f_5 != 88 && Global_90033[iVar0 /*17*/].f_5 != 89) && Global_90033[iVar0 /*17*/].f_5 != 92)
				{
					func_44(Global_90033[iVar0 /*17*/].f_5, 1);
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
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

void func_45()
{
	Global_14666 = 0;
	func_46();
}

void func_46()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

void func_47(var uParam0)
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_9));
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_10))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_10));
	}
}

void func_48(var uParam0)
{
	func_141(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_433(1);
		func_58(15, 1);
	}
	func_172(&(Global_105220.f_19068), 1024);
	if (!func_197(Global_105220.f_19068, 64))
	{
		func_49(func_56(func_57(uParam0)), 0, 0);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)
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
		func_55((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = iParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_54(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_53() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

int func_53()
{
	return Global_25277;
}

int func_54(int iParam0, int iParam1)
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
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_56(int iParam0)
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

int func_57(var uParam0)
{
	return uParam0->f_411;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

int func_59(int iParam0, int iParam1)
{
	if (func_71(14) && !func_70(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_69(&Global_4267702))
	{
		if (func_67(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_60(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_71(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	func_63(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_61(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_71(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_62(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64(uParam0, iVar0);
		iVar0++;
	}
	func_65(uParam0, (Global_4267701 - 0.5f));
}

void func_64(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_65(var uParam0, float fParam1)
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

float func_66(var uParam0)
{
	return uParam0->f_80;
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
	return uParam0->f_79 == 1;
}

int func_70(int iParam0)
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

bool func_71(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_72(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_126() && func_144(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
				}
				func_102(uParam0);
				func_138(&(Global_105220.f_19068), 4096);
				func_99(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_101(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xC4BA30B532FE260F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_98(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_92(uParam1, 0))
			{
				func_73(uParam0);
				func_274(uParam0, 0, 0, 0);
				func_98(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_73(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_74(func_90(), 21, iVar0, 0, 0);
		func_141(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_75(Global_105220.f_28021[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_89();
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
					func_88(99, 1);
					func_87(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_82(5))
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
							func_87(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_82(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_87(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_82(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_81(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_88(95, iParam3);
					break;
				
				case 1:
					func_88(97, iParam3);
					break;
				
				case 2:
					func_88(96, iParam3);
					break;
			}
			func_88(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_78(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_78(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_87(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_77(iParam0);
	if (Global_35905 == 15)
	{
		func_76(0);
	}
	return 1;
}

void func_76(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_78(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_55(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_80() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_80() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_79(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_79(int iParam0)
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
		
		default:
	}
	return "";
}

int func_80()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_81(int iParam0)
{
	func_88(93, iParam0);
	func_88(29, iParam0);
	func_88(30, iParam0);
}

bool func_82(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_83(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_80() /*12171*/].f_7688.f_10, iParam0);
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_58(27, 1);
	return 1;
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_89()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

int func_90()
{
	func_91();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_91()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_4(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_3(unk_0xBC25C936A095B5BA());
			if (func_5(iVar0) && (!func_71(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_5(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

int func_92(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_96(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x694514BD37EC4E94(2, 201) || uParam0->f_8)
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
			return (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_95(var uParam0, int iParam1)
{
	unk_0x29CD142125FE177B(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1E1FB49121565EB6(uParam0->f_9);
	unk_0xD44E04EBBDC4CE88(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_96(var uParam0)
{
	func_97(uParam0, 0f);
}

void func_97(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(uParam0, 1);
	unk_0x7CB6FD92BE491AD9(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_98(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

void func_99(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x29CD142125FE177B(*uParam0, func_100());
	unk_0x57016C44F10111F0("STRING");
	unk_0x449F0674640D94C0(iParam9);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x64989E60CF560CA1();
	unk_0x57016C44F10111F0(sParam7);
	unk_0xAA5C5BF0489E5553(uParam2);
	unk_0xAA5C5BF0489E5553(uParam3);
	unk_0xC9C304D0AABE1335(uParam6);
	unk_0xAA5C5BF0489E5553(uParam5);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x64989E60CF560CA1();
	unk_0xF9FBC2F3F73D94C9();
	func_96(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_100()
{
	if (unk_0x7AF0088ABFA713B6())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_101(var uParam0)
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

void func_102(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_141(11, uParam0->f_56);
	func_141(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xFA30DFD0084E92FE(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_103(var uParam0, bool bParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_195(uParam0) && func_107(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
				{
					func_104(uParam0);
				}
			}
			else
			{
				func_104(uParam0);
			}
		}
		else if (!func_195(uParam0))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
				{
					if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_104(var uParam0)
{
	struct<3> Var0;
	
	if (func_105(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_170(uParam0, Var0);
}

int func_105(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_106(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_197(uParam0->f_81, iParam1) && !func_126());
	}
	return func_126();
}

int func_107(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_110();
				return 1;
			}
			else if (func_108(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 0, 256);
				}
				else
				{
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 0, 0);
				}
			}
			unk_0x44126473C39898E7(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_108(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_109(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_110()
{
	if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
	{
		unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	}
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_114(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 1, 0);
		if (unk_0x724D816EA203A79E(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 2, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 0, 0);
				if (unk_0x724D816EA203A79E(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_115()
{
	Local_932 = { func_116() };
	if ((((((((unk_0x3362CDE8460ED38B(&cLocal_878, &Local_932) || unk_0x3362CDE8460ED38B(&cLocal_884, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_890, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_896, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_902, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_908, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_914, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_920, &Local_932)) || unk_0x3362CDE8460ED38B(&cLocal_926, &Local_932))
	{
		return 1;
	}
	return 0;
}

struct<6> func_116()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		iVar6 = unk_0xC0A904C0F2775676();
		iVar6 = (iVar6 + Global_16810);
		if (iVar6 > -1)
		{
			return Global_14668[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_117()
{
	if (Local_413.f_56 >= Local_413.f_59)
	{
		Local_413.f_56 = 10000;
	}
	else if (Local_413.f_56 <= 0)
	{
		Local_413.f_56 = 0;
	}
	else
	{
		Local_413.f_56 = 5000;
	}
}

void func_118(var uParam0)
{
	func_120();
	unk_0xEB233A3B7635D2AC();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_206(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_206(uParam0, 103, 1, 0, 0);
		}
		func_119(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_206(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_206(uParam0, 102, 1, 0, 0);
	}
	func_274(uParam0, 16, 4f, 0);
}

void func_119(int iParam0)
{
	Global_103930.f_221 = iParam0;
}

void func_120()
{
	Global_14666 = 0;
	func_121();
}

void func_121()
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_16811 = 0;
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
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
	func_141(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_141(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_123(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_124()
{
	Global_14666 = 0;
	func_125();
}

void func_125()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

int func_126()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x38FF8CB6377D36F6(*iParam0);
		unk_0x26D344275839A25E(*iParam0);
		*iParam0 = -1;
	}
}

void func_128()
{
	unk_0x522053D86D6E1C7A("oddjobs@taxi@cyi");
	unk_0xF243B7A14FCFD0F4(joaat("p_banknote_s"));
}

void func_129()
{
	if (func_144(&Local_413, 7) < 75f && !iLocal_864)
	{
		Local_413.f_57 += 12;
		func_206(&Local_413, 30, 1, 0, 1);
	}
	else if (func_144(&Local_413, 7) > 150f || iLocal_864)
	{
		Local_413.f_57 = -10;
		func_206(&Local_413, 32, 1, 0, 1);
		iLocal_864 = 1;
		func_130();
	}
	else
	{
		Local_413.f_57 += 5;
		func_206(&Local_413, 31, 1, 0, 1);
	}
}

void func_130()
{
	unk_0xF243B7A14FCFD0F4(func_273(3));
	unk_0xF243B7A14FCFD0F4(func_273(4));
	unk_0x1B2A7C8188ADBE04(0, func_131(1));
}

char* func_131(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_132(var uParam0)
{
	if (func_126())
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
	if (func_137(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
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

void func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_96(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_274(uParam0, 10, 0f, 1);
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_137(var uParam0)
{
	return uParam0->f_110;
}

void func_138(var uParam0, int iParam1)
{
	func_139(uParam0, iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(var uParam0, var uParam1)
{
	unk_0x70870CD1718D74F0(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_105220.f_19068.f_22[0]++;
			func_142("Fares Completed ++ = ", Global_105220.f_19068.f_22[0]);
			break;
		
		case 1:
			Global_105220.f_19068.f_22[1]++;
			func_142("Fares Failed ++ = ", Global_105220.f_19068.f_22[1]);
			break;
		
		case 2:
			Global_105220.f_19068.f_22[2]++;
			func_142("Fares Accepted ++ ", Global_105220.f_19068.f_22[2]);
			break;
		
		case 3:
			Global_105220.f_19068.f_22[3]++;
			func_142("Fares Expired ++ ", Global_105220.f_19068.f_22[3]);
			break;
		
		case 13:
			Global_105220.f_19068.f_22[13]++;
			func_142("Passengers run ++ = ", Global_105220.f_19068.f_22[13]);
			break;
		
		case 14:
			Global_105220.f_19068.f_22[14]++;
			func_142("Passenger Forced to Pay ++ = ", Global_105220.f_19068.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_105220.f_19068.f_22[4])
				{
					Global_105220.f_19068.f_22[4] = iParam1;
					func_142("This distance ", iParam1);
					func_142(" is longer than current best", Global_105220.f_19068.f_22[4]);
				}
				else
				{
					func_142("Longest Distance Not Beat ", Global_105220.f_19068.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_105220.f_19068.f_22[5] = (Global_105220.f_19068.f_22[5] + iParam1);
			func_142("Total Distance w/ Passenger = ", Global_105220.f_19068.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_105220.f_19068.f_22[6]++;
			}
			else
			{
				Global_105220.f_19068.f_22[6] = (Global_105220.f_19068.f_22[6] + iParam1);
			}
			func_142("Wanted Levels ++ = ", Global_105220.f_19068.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_105220.f_19068.f_22[7] = (Global_105220.f_19068.f_22[7] + iParam1);
			}
			else
			{
				Global_105220.f_19068.f_22[7]++;
			}
			func_142("Wanted Levels Lost = ", Global_105220.f_19068.f_22[7]);
			break;
		
		case 8:
			Global_105220.f_19068.f_22[8]++;
			func_142("Taxis wrecked ++ = ", Global_105220.f_19068.f_22[8]);
			break;
		
		case 9:
			Global_105220.f_19068.f_22[9]++;
			func_142("Horn Honked ++ = ", Global_105220.f_19068.f_22[9]);
			break;
		
		case 10:
			Global_105220.f_19068.f_22[10] = (Global_105220.f_19068.f_22[10] + iParam1);
			func_142("Total Money Earned = ", Global_105220.f_19068.f_22[10]);
			break;
		
		case 11:
			Global_105220.f_19068.f_22[11] = (Global_105220.f_19068.f_22[11] + iParam1);
			func_142("Total Tips Earned = ", Global_105220.f_19068.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_105220.f_19068.f_22[12])
			{
				Global_105220.f_19068.f_22[12] = iParam1;
				func_142("New Highest Tip = ", Global_105220.f_19068.f_22[12]);
			}
			else
			{
				func_142("Highest Tip Not Reached = ", Global_105220.f_19068.f_22[12]);
			}
			break;
	}
}

void func_142(char* sParam0, int iParam1)
{
}

int func_143(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x524ABB0435146845(iParam0);
	Var0 = { unk_0x1483995DFFF0DEEA(iParam0, unk_0x541C2AEF053615BC(iParam1, 1)) };
	if (unk_0x6F79ECA8C83E4357(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

float func_144(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_145(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_145(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_96(uParam0);
	}
}

void func_146(var uParam0, bool bParam1)
{
	func_156(uParam0, uParam0->f_3);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_133(uParam0, 14))
			{
				if (func_126())
				{
					func_155(1);
				}
				func_154(uParam0, 11, 1);
				func_147(uParam0, 1);
				func_274(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_195(uParam0))
				{
					if ((unk_0x105601648511CC64() % 1000) < 50)
					{
					}
					if (unk_0x5237AF95232D78C5(uParam0->f_2, 0))
					{
						if (func_144(uParam0, 15) > 5f)
						{
							func_274(uParam0, 15, 0f, 1);
						}
					}
					if (func_144(uParam0, 14) > 20f)
					{
						func_328(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_144(uParam0, 14) > 20f)
				{
					if (func_160(uParam0->f_4, 1) > 40f)
					{
						func_328(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_328(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_147(var uParam0, bool bParam1)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, 0);
				func_153(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				unk_0x7781946F1FC054FA(uParam0->f_9, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_9, 0);
				unk_0xEB233A3B7635D2AC();
				if (func_195(uParam0))
				{
					func_206(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_153(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_148(uParam0, 0, 0);
		}
		else if (unk_0x2DA8CA50A72528FB(uParam0->f_10))
		{
			unk_0x07B8ECB35A4ED3AC(&(uParam0->f_10));
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 255);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, 1);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7781946F1FC054FA(uParam0->f_9, 0);
					unk_0x0BBAABB52887CF8C(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7781946F1FC054FA(uParam0->f_9, 255);
					unk_0x0BBAABB52887CF8C(uParam0->f_9, 1);
				}
			}
			unk_0xEB233A3B7635D2AC();
		}
	}
}

void func_148(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_47(uParam0);
	}
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_10))
	{
		uParam0->f_10 = func_151(uParam0->f_4, 1, 0);
		unk_0x436D0272182E484D(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x0BBAABB52887CF8C(uParam0->f_10, 1);
		func_149(uParam0);
		if (bParam2)
		{
			unk_0xEB233A3B7635D2AC();
			func_206(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_149(var uParam0)
{
	func_274(uParam0, 14, 0, 0);
	func_150();
}

void func_150()
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_151(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_152(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_152(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_152(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_152(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_197(*uParam1, iParam2))
	{
		unk_0xEB233A3B7635D2AC();
		func_206(uParam0, iParam3, 1, 0, 0);
		func_172(uParam1, iParam2);
	}
}

void func_154(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_155(int iParam0)
{
	Global_16811 = iParam0;
}

void func_156(var uParam0, int iParam1)
{
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				if ((unk_0xD2B7EC731CF3F2D6(iParam1, joaat("weapon_stungun"), 0) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 2)) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 1))
				{
					func_328(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			}
		}
	}
}

void func_157(var uParam0, bool bParam1)
{
	func_159(uParam0);
	if (bParam1)
	{
		if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
		{
			uParam0->f_9 = func_158(uParam0->f_17, 1);
		}
		else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
		{
			unk_0xC2A76C105FD557E3(1, 0);
			unk_0x7781946F1FC054FA(uParam0->f_9, 255);
			unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_17);
			unk_0x0BBAABB52887CF8C(uParam0->f_9, 1);
		}
	}
}

var func_158(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_152(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

void func_159(var uParam0)
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x0BBAABB52887CF8C(uParam0->f_8, 0);
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
}

float func_160(int iParam0, int iParam1)
{
	return func_161(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, iParam1);
}

float func_161(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

void func_162()
{
	if (bLocal_971)
	{
		func_169("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_871, 1000);
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_413.f_3, 0))
	{
		switch (iLocal_1043)
		{
			case 0:
				if (func_194(Local_413.f_3, Local_845, 1) < 16f)
				{
					iLocal_1043 = 1;
				}
				break;
			
			case 1:
				if (func_160(Local_413.f_3, 1) < 10f)
				{
					unk_0x7A535CE1F001F3FE(Local_413.f_3, joaat("weapon_combatpistol"), 50, 1, 1);
					unk_0x02DAF06EA4F08219(&uLocal_844);
					unk_0xC5A6DFE2B8987B17(&uLocal_844);
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(uLocal_844);
					unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
					unk_0x02DAF06EA4F08219(&uLocal_844);
					func_274(&Local_413, 12, 0, 0);
					iLocal_1043 = 2;
				}
				break;
			
			case 2:
				if (func_144(&Local_413, 12) > 1.5f)
				{
					if (iLocal_1044 != 5)
					{
						if (!unk_0x1D403DFADBC2DE3C(Local_413.f_2, 0))
						{
							if (unk_0xE59B7F5A03335350(Local_413.f_4, 0))
							{
								if (unk_0x62F3A07C43FFB568(Local_413.f_2, Local_413.f_4, 0))
								{
									func_206(&Local_413, 56, 1, 0, 0);
								}
								else
								{
									func_206(&Local_413, 55, 1, 1, 0);
								}
							}
						}
						iLocal_868 = 0;
						iLocal_862 = 1;
						func_274(&Local_413, 12, 0, 0);
						func_167(&Local_413, 6);
						iLocal_1043 = 3;
					}
					else
					{
						func_134(&Local_413, 12, 0);
						iLocal_1043 = 9;
					}
				}
				break;
			
			case 3:
				if (func_160(Local_413.f_3, 1) >= 10f)
				{
					iLocal_1043 = 5;
				}
				else if (iLocal_869)
				{
					if (!func_126() && !unk_0xE6711F601F11B66B())
					{
						if (!iLocal_868)
						{
							func_274(&Local_413, 12, 0, 0);
							iLocal_868 = 1;
						}
						else if (func_144(&Local_413, 12) > 5f)
						{
							func_134(&Local_413, 12, 0);
							iLocal_1043 = 9;
						}
					}
				}
				else if (!iLocal_869)
				{
					if (func_165("txm8_lvMe1") || func_165("txm8_lvMe2"))
					{
						iLocal_869 = 1;
					}
				}
				break;
			
			case 5:
				func_163(&Local_413, 6);
				if (unk_0xF4FCC3C1048FF2AB(Local_413.f_3, 242628503) != 7)
				{
					unk_0x02DAF06EA4F08219(&uLocal_844);
					unk_0xC5A6DFE2B8987B17(&uLocal_844);
					unk_0x346129B364057FF6(0, Local_845, 1f, 40000, 1048576000, 0, 1193033728);
					unk_0x346129B364057FF6(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0x346129B364057FF6(0, Local_848, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0x535008C596714F9E(uLocal_844);
					unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
					unk_0x02DAF06EA4F08219(&uLocal_844);
					iLocal_1044 = 5;
					iLocal_1043 = 0;
				}
				break;
			
			case 9:
				if (func_133(&Local_413, 12))
				{
					if (func_144(&Local_413, 12) > 2f)
					{
						func_274(&Local_413, 6, 0, 0);
						unk_0x02DAF06EA4F08219(&uLocal_844);
						unk_0xC5A6DFE2B8987B17(&uLocal_844);
						unk_0x3D3F19B39A42CF7A(0, unk_0xBC25C936A095B5BA(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x535008C596714F9E(uLocal_844);
						unk_0xA8E6405305C0D7DF(Local_413.f_3, uLocal_844);
						unk_0x02DAF06EA4F08219(&uLocal_844);
						unk_0xA902E18EDF6FA0C8(5, Local_413.f_413, joaat("player"));
						unk_0x22321800954A532E(Local_413.f_3, 1);
						bLocal_863 = true;
						if (unk_0x2DA8CA50A72528FB(Local_413.f_9) && unk_0xB1D6718ACE798CBB(Local_413.f_9) > 0)
						{
							unk_0x7781946F1FC054FA(Local_413.f_9, 0);
							unk_0x0BBAABB52887CF8C(Local_413.f_9, 0);
							unk_0xBB5629E7D44054AE("TAXI_OBJ_CYI_1B");
						}
						iLocal_1043 = 10;
					}
				}
				else
				{
					func_274(&Local_413, 12, 0, 0);
					if (!unk_0x1D403DFADBC2DE3C(Local_413.f_2, 0))
					{
						if (unk_0xE59B7F5A03335350(Local_413.f_4, 0))
						{
							if (unk_0x62F3A07C43FFB568(Local_413.f_2, Local_413.f_4, 0))
							{
								func_206(&Local_413, 56, 1, 0, 0);
							}
							else
							{
								func_206(&Local_413, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!unk_0xE6711F601F11B66B() && func_144(&Local_413, 6) > 2f)
				{
					func_328(&Local_413, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_163(var uParam0, int iParam1)
{
	if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_164(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_164(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			uParam0->f_1 = (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0x7CB6FD92BE491AD9(uParam0, 2);
		}
	}
}

int func_165(char* sParam0)
{
	var uVar0;
	
	if (func_126())
	{
		MemCopy(&uVar0, {func_166()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_166()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		return Global_15419;
	}
	return Var0;
}

void func_167(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_168(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_168(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_168(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
			unk_0xF0059F27F7BB6680(uParam0, 2);
		}
	}
}

void func_169(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x105601648511CC64() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x105601648511CC64();
}

void func_170(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && unk_0x25EF720B1CAB1E23(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xA4455714F3DCE207(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xA4455714F3DCE207(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_171(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xF0F2FC9DE291567F(Var0, Param1, 0) < unk_0xF0F2FC9DE291567F(Var3, Param1, 0) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xF0F2FC9DE291567F(Var0, Param1, 0) >= unk_0xF0F2FC9DE291567F(Var3, Param1, 0) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_171(int iParam0, int iParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_172(var uParam0, int iParam1)
{
	func_173(uParam0, iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_174(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC()) && !unk_0x422F9EDE839E6ABB()) && !unk_0x17FAADF9916EF741()) && !uParam0->f_142)
	{
		if (func_190(uParam0))
		{
			func_140(uParam0, &(uParam0->f_43));
			func_186(uParam0);
			func_185(uParam0);
			func_182(uParam0);
			func_180(uParam0, fParam2, fParam3);
			func_178(uParam0);
			return func_175(uParam0, iParam1);
		}
	}
	return 0;
}

int func_175(var uParam0, int iParam1)
{
	if (func_57(uParam0) == 2)
	{
		if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_177(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_176(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			return func_107(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_176(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
	{
		return func_107(uParam0, 1, iParam1);
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

float func_177(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

void func_178(var uParam0)
{
	float fVar0;
	
	if ((func_195(uParam0) && func_197(uParam0->f_81, 67108864)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if ((unk_0x105601648511CC64() - iLocal_97) >= 10000)
		{
			fVar0 = func_179(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x105601648511CC64();
		}
		if (iLocal_96 >= 2 && !func_126())
		{
			func_206(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x105601648511CC64() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x105601648511CC64() % 4000) < 50)
		{
			if (!func_195(uParam0))
			{
			}
			if (!func_197(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_179(struct<3> Param0, int iParam3)
{
	return func_194(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), Param0, iParam3);
}

void func_180(var uParam0, float fParam1, float fParam2)
{
	if (func_195(uParam0) && func_197(uParam0->f_44, 4))
	{
		if ((unk_0xB66CFDE6B830965A(uParam0->f_4) || unk_0x8910237449BB6F79(uParam0->f_4) < 3f) && func_304(uParam0))
		{
			if (!func_133(uParam0, 2))
			{
				func_181(uParam0, 2);
			}
			else if (func_195(uParam0))
			{
				if (func_144(uParam0, 2) > fParam1 && !func_133(uParam0, 14))
				{
					if (func_34())
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					func_274(uParam0, 2, 0, 0);
					if (func_133(uParam0, 10))
					{
						func_274(uParam0, 10, 0, 0);
					}
				}
				if (!func_133(uParam0, 3))
				{
					func_274(uParam0, 3, 0, 0);
				}
				else if (func_144(uParam0, 3) >= fParam2)
				{
					func_134(uParam0, 3, 0);
					func_328(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_133(uParam0, 2))
			{
				func_134(uParam0, 2, 0);
			}
			if (func_133(uParam0, 3))
			{
				func_134(uParam0, 3, 0);
			}
		}
	}
}

void func_181(var uParam0, int iParam1)
{
	func_145(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_182(var uParam0)
{
	if (func_184(uParam0))
	{
		func_183(uParam0);
	}
}

void func_183(var uParam0)
{
	if (unk_0xFFAEC2D4BAF978BE() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x93DD0CE3F3963C56();
			func_134(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_144(uParam0, 20) > 3f)
				{
					func_206(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_197(uParam0->f_81, 262144) || !func_197(uParam0->f_81, 1048576))
				{
					if (func_144(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_206(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_197(uParam0->f_82, 67108864))
				{
					if (func_144(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_206(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_144(uParam0, 20) > 8f)
				{
					func_206(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_197(uParam0->f_81, 262144) || func_197(uParam0->f_82, 67108864))
			{
				if (!func_133(uParam0, 22))
				{
					func_181(uParam0, 22);
				}
			}
			if (func_133(uParam0, 22) && func_144(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_197(uParam0->f_81, 1048576))
					{
						func_206(uParam0, 84, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_197(uParam0->f_82, 134217728))
					{
						func_206(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_184(var uParam0)
{
	return uParam0->f_120;
}

void func_185(var uParam0)
{
	if (unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && !func_197(uParam0->f_44, 2))
	{
		func_172(&(uParam0->f_44), 2);
	}
	else if (!unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && func_197(uParam0->f_44, 2))
	{
		func_138(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_141(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_206(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_186(var uParam0)
{
	if (!func_197(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					if (func_144(uParam0, 9) > 1f)
					{
						func_189(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
						if (uParam0->f_410 != 22)
						{
							func_206(uParam0, 50, 1, 1, 0);
						}
						func_274(uParam0, 9, 0, 0);
						if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
						{
							unk_0x7781946F1FC054FA(uParam0->f_9, 0);
							unk_0x0BBAABB52887CF8C(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_126() && func_144(uParam0, 9) > 4f)
				{
					func_206(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_188("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), func_187(uParam0)))
				{
					func_189(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
					func_141(6, 0);
				}
				if (!func_137(uParam0))
				{
					if (!unk_0xE6711F601F11B66B())
					{
						if (func_144(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_206(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					if (func_188("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xEB233A3B7635D2AC();
					}
					if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_126())
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 53, 1, 0, 1);
					}
					func_141(7, func_187(uParam0));
					func_189(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_126())
				{
					func_134(uParam0, 9, 0);
					func_274(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_187(var uParam0)
{
	return uParam0->f_106;
}

bool func_188(char* sParam0, int iParam1, int iParam2)
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(iParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_189(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_190(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (!unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1) && !unk_0x8F1FDD0A40DC834A(uParam0->f_3))
			{
				func_328(uParam0, "Passenger left car.", 9);
			}
			else if (func_279(uParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xBB5629E7D44054AE("TAXI_OBJ_PICKUP");
				}
				if (unk_0x726D9204B160D23E())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				func_146(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_191(var uParam0, int iParam1, bool bParam2)
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

void func_192(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_193(), 24);
		iVar0++;
	}
	unk_0xEB233A3B7635D2AC();
	func_45();
}

var func_193()
{
	var uVar0;
	
	return uVar0;
}

float func_194(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x1D403DFADBC2DE3C(uParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), Param1, iParam4);
}

int func_195(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_196(var uParam0)
{
	return uParam0->f_416;
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0)
{
	func_202(uParam0, 1000);
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x49D46EE47C9CCB66(uParam0->f_3);
		unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
	}
	func_124();
	func_199(uParam0);
}

void func_199(var uParam0)
{
	func_134(uParam0, 14, 0);
	func_134(uParam0, 15, 0);
	func_201();
	if (func_200())
	{
		func_155(0);
	}
}

int func_200()
{
	if (Global_16811 == 1)
	{
		return 1;
	}
	return 0;
}

void func_201()
{
	var uVar0;
	
	uVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(uVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_202(var uParam0, int iParam1)
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x062C9995BFD27B2A(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
	}
}

void func_203(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x6935EBF9868982DC(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x832ADB79A274D4E9(Var0, Var3, 1);
		unk_0x02DD9F29D9655E48();
	}
}

void func_204()
{
	func_172(&(Local_413.f_55), 2);
	func_172(&(Local_413.f_55), 4);
	func_172(&(Local_413.f_55), 16);
	func_172(&(Local_413.f_55), 64);
	func_172(&(Local_413.f_55), 256);
	func_172(&(Local_413.f_55), 512);
	func_172(&(Local_413.f_55), 1024);
	func_172(&(Local_413.f_55), 2048);
	func_172(&(Local_413.f_55), 4096);
	func_172(&(Local_413.f_100), 8);
	func_172(&(Local_413.f_100), 2048);
	func_172(&(Local_413.f_100), 256);
	func_172(&uLocal_938, 2);
}

void func_205(var uParam0)
{
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
	func_202(uParam0, 1000);
}

void func_206(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_274(uParam0, 16, 4f, 0);
		if (func_207(uParam0))
		{
			func_45();
		}
	}
	func_235(uParam0, iParam2, bParam3);
}

int func_207(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_126())
	{
		Var6 = { func_166() };
		if (!unk_0xF1734B55490E9045(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x3362CDE8460ED38B(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_208(&Var0);
			if (unk_0x3362CDE8460ED38B(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_209(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if ((unk_0x8F1FDD0A40DC834A(uParam0->f_3) && (unk_0x105601648511CC64() - iLocal_89) > 500) || unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_210(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 1:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 2:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 3:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 4:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 5:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 6:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 7:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 8:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return func_39();
}

int func_211(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x105601648511CC64() % 1000) < 50)
			{
			}
			func_146(uParam0, 1);
			if (func_32())
			{
				unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
			}
			if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 2106541073) == 1 || unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x49D46EE47C9CCB66(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), 0))
		{
			func_233(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x02DAF06EA4F08219(&uVar3);
				unk_0xC5A6DFE2B8987B17(&uVar3);
				unk_0x346129B364057FF6(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
				unk_0x535008C596714F9E(uVar3);
				unk_0xA8E6405305C0D7DF(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_133(uParam0, 14))
			{
				func_199(uParam0);
				func_147(uParam0, 0);
			}
			if (func_133(uParam0, 9))
			{
				func_134(uParam0, 9, 0);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
				{
					unk_0x7781946F1FC054FA(uParam0->f_8, 255);
					unk_0x0BBAABB52887CF8C(uParam0->f_8, 1);
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x8910237449BB6F79(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_232(uParam0, uParam0->f_3) > 300f)
				{
					func_328(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 || ((func_161(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 20f && func_177(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_177(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_229(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_228(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_143(uParam0->f_4, uParam0->f_3);
								iVar0 = func_114(uParam0, &iVar1);
								if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
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
										unk_0xA3981DED4FC2E56E(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xA3981DED4FC2E56E(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
											{
												unk_0xA3981DED4FC2E56E(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xA4E856A8CD53B8DF(uParam0->f_3);
							unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_304(uParam0))
							{
								unk_0xA4E856A8CD53B8DF(uParam0->f_3);
							}
							else if (((unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 0) && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 7) && func_232(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x02DAF06EA4F08219(&(uParam0->f_243));
								unk_0xC5A6DFE2B8987B17(&(uParam0->f_243));
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x535008C596714F9E(uParam0->f_243);
								unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x1D3127CFE7D9B190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_161(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_227(uParam0, 1))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_328(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_226(uParam0->f_4))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_328(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_224(uParam0);
						if (func_232(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_212(uParam0))
								{
									func_159(uParam0);
									iLocal_89 = unk_0x105601648511CC64();
									unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 26, 1);
									func_134(uParam0, 5, 0);
									unk_0x0A6ECD5BD15B1522();
									unk_0x70870CD1718D74F0(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xF0B851960DDCE3D8(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_212(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_169("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		func_223();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_221(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_107(uParam0, 0, 1084227584) && func_176(1, 1, 1))
			{
				if (func_227(uParam0, 1))
				{
					iLocal_88 = unk_0x105601648511CC64();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_328(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_143(uParam0->f_4, uParam0->f_3);
				iVar9 = func_114(uParam0, &iVar10);
				if (!unk_0x1D403DFADBC2DE3C(iVar9, 0))
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
						unk_0xA3981DED4FC2E56E(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xA3981DED4FC2E56E(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x1D403DFADBC2DE3C(iVar9, 0))
						{
							unk_0xA3981DED4FC2E56E(iVar9, 0, 4096);
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
			iVar12 = func_220(&(uParam0->f_409), unk_0xA4455714F3DCE207(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xA4455714F3DCE207(uParam0->f_4, Var0), 1);
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
				func_219(0, 0, 1);
				unk_0xA0C0B32E74BE8DB7(unk_0x541C2AEF053615BC(uParam0->f_4, 1), 3f, 0);
				unk_0x4516EDD0A096FB5B(unk_0x541C2AEF053615BC(uParam0->f_4, 1), 25f, 0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_120();
				func_235(uParam0, 0, 0);
				Var13 = { unk_0xA4455714F3DCE207(uParam0->f_4, Var6) };
				unk_0x641B19E156645A92(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(uParam0->f_3, func_217(uParam0));
				func_216(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x6125108F6208C1F6(*uParam0, unk_0xA4455714F3DCE207(uParam0->f_4, Var0));
				unk_0xA65BD9EDFDFA4D71(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x348665177DBFB93B(*uParam0, 1);
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				unk_0x2EB4D46478766D87(uParam0->f_3, 0, 0);
				unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_169("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
			{
				if (!unk_0x5237AF95232D78C5(uParam0->f_3, 0))
				{
					unk_0xBD53A029D0155A42(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x82948B11F55E5713(uParam0->f_4, func_215(uParam0->f_7), 1);
				}
				unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
				unk_0x4EC087603E1DEF9C(*uParam0, 0);
				unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
				unk_0xF3F01A78937DC905(0);
				unk_0x2B9AEC08E469E384(0, 1065353216);
				unk_0x829FA4611BD56B44(800);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_120();
				func_235(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
			{
				func_213(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
			unk_0x4EC087603E1DEF9C(*uParam0, 0);
			unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
			unk_0xF3F01A78937DC905(0);
			unk_0x2B9AEC08E469E384(0, 1065353216);
			func_213(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
			{
				if (unk_0x8F1FDD0A40DC834A(uParam0->f_3) || unk_0x5237AF95232D78C5(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -1794415470) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -1794415470) != 0)
				{
					unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_213(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_22(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(1);
		unk_0x59B038076F830627(1);
	}
	func_214(23, 0);
}

void func_214(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_25522, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_25522, iParam0);
	}
}

int func_215(int iParam0)
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

void func_216(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		*uParam0 = unk_0x585DE1CBEEB2D27D(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_217(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xA4455714F3DCE207(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_218(unk_0x541C2AEF053615BC(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_218(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xFDC254CE02DB0919((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 0, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(0);
	unk_0x59B038076F830627(0);
	func_214(23, 1);
}

int func_220(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA20E4A82503CECB3(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xB0695CD48A28A3A9(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_221(int iParam0)
{
	if (func_222() && unk_0x105601648511CC64() >= iParam0 + 1000)
	{
		unk_0x7A41D32A383895D8(500);
		while (!unk_0x17FAADF9916EF741())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_124();
		return 1;
	}
	return 0;
}

int func_222()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_223()
{
	if (func_34())
	{
		unk_0xA451DE3BE57FDA90("appInternet");
	}
	if (func_33())
	{
		unk_0xA451DE3BE57FDA90("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

void func_224(var uParam0)
{
	var uVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (func_160(uParam0->f_3, 1) > 30f || func_225(uParam0))
			{
				if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, -1794415470) == 1 || unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) == 1)
				{
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
					unk_0xE896C0AD02364F2A(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x346129B364057FF6(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(uParam0->f_3, uVar0);
					func_328(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_225(var uParam0)
{
	if ((unk_0x8910237449BB6F79(uParam0->f_4) > 3f && func_144(uParam0, 5) > 15f) || unk_0x8730A01B72F31307(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xA499BE1E93004FF2(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 3))
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

int func_227(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x3187EF5798B5D209(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x3187EF5798B5D209(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x3187EF5798B5D209(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x724D816EA203A79E(iVar0[iVar4]))
			{
				if (unk_0x1D403DFADBC2DE3C(iVar0[iVar4], 0))
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
		if ((unk_0x105601648511CC64() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_228(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (!unk_0x41A5D6415E2CC10E(uParam0->f_3) && func_160(uParam0->f_3, 1) < fParam2)
		{
			if (!func_133(uParam0, 5))
			{
				func_274(uParam0, 5, 0, 0);
			}
		}
		else if (func_133(uParam0, 5))
		{
			func_134(uParam0, 5, 0);
		}
		if (((func_144(uParam0, 5) > IntToFloat(iParam1) && unk_0x8910237449BB6F79(uParam0->f_4) < fParam4) && !unk_0x41A5D6415E2CC10E(uParam0->f_3)) || func_160(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_229(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xB5B60A04E1654409(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xB5B60A04E1654409(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x3EA3A28A85F8C32F(uParam0->f_4, iVar18) };
		Var6 = { unk_0x1483995DFFF0DEEA(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xA4455714F3DCE207(uParam0->f_4, Var6) };
	Var3 = { unk_0xA4455714F3DCE207(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x9689CECD9CFDA876(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x2E35C4FA5F0ED22F(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_161(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x357058E632979E65((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xA20E4A82503CECB3(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xB0695CD48A28A3A9(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 0)
			{
				unk_0x02DAF06EA4F08219(&(uParam0->f_243));
				unk_0xC5A6DFE2B8987B17(&(uParam0->f_243));
				unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0xAFD74A5E065F57E0(uParam0->f_243, 1);
				unk_0x535008C596714F9E(uParam0->f_243);
				unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xEB233A3B7635D2AC();
			if (uParam0->f_411 != 9)
			{
				if (!func_197(uParam0->f_44, 128))
				{
					func_206(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_230(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xA4E856A8CD53B8DF(uParam0->f_3);
			unk_0x56F2E1B5599188FA(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x02DAF06EA4F08219(&(uParam0->f_243));
			unk_0xC5A6DFE2B8987B17(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
			unk_0x535008C596714F9E(uParam0->f_243);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_243);
			unk_0x02DAF06EA4F08219(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x1D3127CFE7D9B190(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_230(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x7E80A36CD8BDF4D1(uParam0, sParam1, uParam2, func_231(iParam3), 0);
}

int func_231(int iParam0)
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

float func_232(var uParam0, int iParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_304(uParam0))
		{
			return func_161(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_233(var uParam0)
{
	func_156(uParam0, uParam0->f_3);
	if (func_304(uParam0))
	{
		if (func_133(uParam0, 14))
		{
			func_199(uParam0);
			if (unk_0x2DA8CA50A72528FB(uParam0->f_10))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam0->f_10));
			}
		}
	}
	if (!func_133(uParam0, 9))
	{
		if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
		{
			unk_0x7781946F1FC054FA(uParam0->f_8, 0);
			unk_0x0BBAABB52887CF8C(uParam0->f_8, 0);
		}
		func_274(uParam0, 9, 0, 0);
		func_234("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_234(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_235(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_274(uParam0, 16, 4f, 0);
		unk_0xEB233A3B7635D2AC();
	}
}

int func_236(var uParam0, int iParam1)
{
	if (!unk_0xFA9040D29FE330BD(2))
	{
		return 0;
	}
	func_241(12);
	if (func_197(uParam0->f_44, 8))
	{
		if (!func_197(uParam0->f_44, 128))
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && !func_197(uParam0->f_44, 256))
			{
				func_172(&(uParam0->f_44), 256);
			}
			if (func_197(uParam0->f_44, 256) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				func_206(uParam0, 135, 1, 0, 1);
				func_172(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_239(uParam0, iParam1))
	{
		if (func_160(uParam0->f_3, 1) < 35f)
		{
			if (!func_197(uParam0->f_44, 8))
			{
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
				func_206(uParam0, 133, 1, 0, 1);
				func_172(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x889DA6CE8E4DB344(uParam0->f_3)) || func_160(uParam0->f_3, 1) > 400f)
		{
			func_328(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x9FE9D386222EEE47(uParam0->f_2, 0);
		unk_0xA73D1278857991A2(uParam0->f_4, 1);
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x0E622862E5E566BB(uParam0->f_4);
			func_237(uParam0);
			func_141(2, 0);
			bLocal_94 = true;
			func_145(&uLocal_90);
			return 1;
		}
		else
		{
			func_328(uParam0, "No Taxi", 21);
			func_278("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_237(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (func_238())
		{
		}
	}
}

int func_238()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_239(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
				bVar2 = func_226(iVar0);
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
				if (unk_0x7C28D15641461C68(iVar1))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x524ABB0435146845(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_197(uParam0->f_44, 64))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_278("TX_VIP_DMGD", -1);
							if (func_240("TX_VIP_DMGD"))
							{
								func_172(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_197(uParam0->f_44, 32))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_278("TX_VIP_CAR", -1);
							if (func_240("TX_VIP_CAR"))
							{
								func_172(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_197(uParam0->f_44, 16))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_278("TX_VIP_SMALL", -1);
							if (func_240("TX_VIP_SMALL"))
							{
								func_172(&(uParam0->f_44), 16);
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
			func_138(&(uParam0->f_44), 16);
			func_138(&(uParam0->f_44), 64);
			func_138(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_240(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_241(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		uVar0 = iParam0;
		unk_0xCEFBE636B33A557B(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x785F3AE9C51AE93D(8, &cVar1);
	}
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_139(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_243(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF0059F27F7BB6680(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_244(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_245()
{
	Local_343.f_0 = 0;
	func_262(40634, 40609, 1);
	func_262(40370, 40347, 1);
	func_262(40285, 40260, 1);
	func_262(40188, 40164, 1);
	func_262(40054, 40033, 1);
	func_262(39980, 39955, 1);
	func_262(39813, 39790, 1);
}

int func_246(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_247(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_249(uParam0->f_4))
		{
			func_248(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_248(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_249(int iParam0)
{
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x77F5C030D3238E26(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xBCDD4514E5CAE591(iParam0, 0, 40000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_251(var uParam0)
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		if (func_252(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_253(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_248(uParam0, 11);
	return 1;
}

int func_254(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (unk_0x149E9368A11035DE(uParam0->f_4) && !unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			if (!func_133(uParam0, 25))
			{
				func_274(uParam0, 25, 0, 0);
			}
			else if (func_144(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_133(uParam0, 25))
		{
			func_134(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_256(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xB9FEB746FD810A52(uParam0->f_4))
		{
			if (unk_0xBCDD4514E5CAE591(uParam0->f_4, 0, 40000) || unk_0xBCDD4514E5CAE591(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_257(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_258(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (unk_0xB66CFDE6B830965A(uParam0->f_4))
			{
				if (func_252(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_261(uParam0->f_4))
		{
			func_248(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x77F5C030D3238E26(iParam0) == 0f)
	{
		if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xBCDD4514E5CAE591(iParam0, 0, 40000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_173(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_173(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_263(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_328(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_264(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_3))
	{
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0)) || unk_0x7544D2465B934445(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_265()
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

int func_266()
{
	if (!func_267(&iLocal_871, 1))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_871, 1000);
		return 0;
	}
	if (!unk_0xA7F138B5B1AB2CF6(uLocal_945))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(func_273(0)))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_871, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_871, 1000);
		return 0;
	}
	return 1;
}

int func_267(int iParam0, bool bParam1)
{
	if (!unk_0xD6513D668481290A(func_21()))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF9E082857622D91E("gestures@m@standing@casual"))
		{
			func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF9E082857622D91E("oddjobs@taxi@"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("oddjobs@towingcome_here"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("misscommon@response"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xFA9040D29FE330BD(2))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_268(var uParam0, int iParam1)
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

int func_269(var uParam0)
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		uParam0->f_8 = func_270(uParam0->f_3, 0, 0);
		unk_0xC2A76C105FD557E3(1, 0);
		unk_0x0BBAABB52887CF8C(uParam0->f_8, 1);
		unk_0x436D0272182E484D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x56F2E1B5599188FA(uParam0->f_3, unk_0xBC25C936A095B5BA(), -1, 2048, 4);
	}
	return 1;
}

int func_270(int iParam0, bool bParam1, bool bParam2)
{
	return func_151(iParam0, !bParam1, bParam2);
}

int func_271(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x724D816EA203A79E(uParam0->f_3))
	{
		func_272(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0xA0C0B32E74BE8DB7(uParam0->f_14, 2f, 0);
		func_203(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xD65D4CDDC3AC5774(uParam0->f_11);
		}
		else if (unk_0x724D816EA203A79E(Global_103930.f_225[0]))
		{
			uParam0->f_3 = Global_103930.f_225[0];
			unk_0x77815D3407C6700D(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x01B3635C3E8EDD81(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x36C3B58DA78A2679(uParam0->f_3, sParam7);
		unk_0x2E9860A2B72187F5(uParam0->f_3, 112, 1);
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			unk_0xAF9FC4463EA3090B(uParam0->f_3, 250);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 32, 0);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 104, 1);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 177, 1);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 116, 0);
			unk_0xB2CB6EAA6B280A84("TAXI_Passenger", &(uParam0->f_413));
			unk_0xA902E18EDF6FA0C8(1, uParam0->f_413, joaat("player"));
			unk_0xA902E18EDF6FA0C8(2, uParam0->f_413, joaat("COP"));
			unk_0x4106FAF8AA1D69D5(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_272(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xF0EA164D7EE8F57D(Param1, 20f, 5f, 0);
}

int func_273(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_274(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_97(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
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
		func_97(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_96(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_275()
{
	func_277(1);
	unk_0xF243B7A14FCFD0F4(func_273(0));
	uLocal_945 = func_276();
	unk_0x284F2ACE6839D3C0("Alarms", 0, -1);
	unk_0x522053D86D6E1C7A("MOVE_P_M_ZERO_RUCKSACK");
}

var func_276()
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

void func_277(bool bParam0)
{
	unk_0xF243B7A14FCFD0F4(func_21());
	if (bParam0)
	{
		unk_0x522053D86D6E1C7A("gestures@m@standing@casual");
	}
	unk_0x522053D86D6E1C7A("oddjobs@taxi@");
	unk_0x522053D86D6E1C7A("oddjobs@towingcome_here");
	unk_0x522053D86D6E1C7A("misscommon@response");
	unk_0x900CF084251DED26("TAXI", 2);
	if (!func_197(Global_105220.f_19068, 128))
	{
		func_172(&(Global_105220.f_19068), 128);
	}
}

void func_278(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_279(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_133(uParam0, 14))
			{
				func_199(uParam0);
			}
			func_147(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_240(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_240(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

void func_281(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_240(iVar0))
	{
		func_293();
	}
	if (!unk_0xBFFAD293E2DA992B())
	{
		if (func_288(uParam0, bParam6, bParam8, 0))
		{
			func_287(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_286(iVar0))
			{
				if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if ((unk_0x33CC9445B2DF9387(Param1, 1f) && !unk_0xF16DAFF595E80F7C()) && iParam7)
					{
						if (!func_240(iVar0))
						{
							func_278(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_285(1);
							}
						}
					}
				}
			}
		}
		else if (func_286(iVar0))
		{
			if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
			{
				if ((unk_0x33CC9445B2DF9387(Param1, 1f) && !unk_0xF16DAFF595E80F7C()) && iParam7)
				{
					if (!func_240(iVar0))
					{
						func_278(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
						{
							func_285(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xEAEFBBEC1AEA464B(iVar0))
		{
			if (func_240(iVar0) && unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				func_280(uParam0, iVar0, 1);
			}
		}
		if (!func_288(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_284(uParam0))
			{
				func_282(uParam0);
			}
		}
	}
}

void func_282(var uParam0)
{
	if (func_283(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_283(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_284(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_285(bool bParam0)
{
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_105220.f_10020.f_100++;
			}
			return Global_105220.f_10020.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_105220.f_10020.f_101++;
			}
			return Global_105220.f_10020.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_105220.f_10020.f_102++;
			}
			return Global_105220.f_10020.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_286(char* sParam0)
{
	if (!func_294(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_240(sParam0)) || func_240("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (func_285(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_285(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_285(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_287(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x4AED68BFACFB14CB(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x7EA10E956229CFA8(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), Param1, -1, iVar2, iVar3);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_288(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_284(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_291(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_290(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_290(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_284(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_294(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_293();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_294(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_294(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_294(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_294(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_293()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

int func_294(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_302() || func_301(Global_4456448.f_148478)) || func_300())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_299(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_298(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_295(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_295(int iParam0)
{
	if (iParam0 != func_297())
	{
		if (func_296(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_296(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_296(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_297()
{
	return -1;
}

int func_298(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
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
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_299(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

var func_300()
{
	return Global_2447942.f_16;
}

bool func_301(int iParam0)
{
	return iParam0 == 51;
}

var func_302()
{
	return Global_2447942.f_15;
}

bool func_303()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

int func_304(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			return 1;
		}
	}
	return 0;
}

void func_305(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (bParam2)
			{
				if (func_144(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_206(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_206(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_274(uParam0, 10, 0f, 1);
				}
			}
			else if (func_144(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_206(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_206(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_274(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_144(uParam0, 10) > 30f)
		{
			if (!func_126())
			{
				if (uParam0->f_112)
				{
					func_206(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_206(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_274(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_197(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_145(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_327(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_326(uParam0, 1);
				func_324(5, uParam0);
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_145(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_326(uParam0, 1);
				func_324(0, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_145(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				func_326(uParam0, 1);
				func_324(1, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x724D816EA203A79E(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8D66276473ABD7CC(uParam0->f_4);
				func_145(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_321(uParam0))
			{
				func_326(uParam0, 1);
				func_324(8, uParam0);
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_145(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_320(uParam0))
			{
				func_326(uParam0, 1);
				func_324(6, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_145(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_319(uParam0))
			{
				func_326(uParam0, 1);
				func_324(4, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_145(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_324(7, uParam0);
				func_326(uParam0, 1);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_145(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
		}
		else if (func_94(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_317(uParam0))
			{
				func_326(uParam0, 1);
				func_324(9, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_145(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_311(uParam0))
			{
				func_326(uParam0, 1);
				func_324(13, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_145(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_310(uParam0))
			{
				func_326(uParam0, 1);
				func_324(14, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_145(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_309(uParam0))
			{
				func_326(uParam0, 1);
				func_324(11, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_145(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_308(uParam0))
			{
				func_326(uParam0, 1);
				func_324(12, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_307(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_306(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_326(uParam0, 1);
				func_324(2, uParam0);
				func_135(uParam0);
			}
		}
	}
}

int func_306(var uParam0)
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_2))
	{
		if ((!unk_0x63276C96B907C69E(uParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x8910237449BB6F79(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_145(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_94(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x8910237449BB6F79(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_93(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_93(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_307(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_97(uParam0, fParam1);
	}
}

int func_308(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		Var0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_145(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(Var0.f_0) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_145(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_94(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x357058E632979E65(uLocal_342) - unk_0x357058E632979E65(Var0.f_0)) < 0f)
			{
				func_93(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_94(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_93(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	if (((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x724D816EA203A79E(uParam0->f_5))
			{
				if ((unk_0x8910237449BB6F79(uParam0->f_4) > 15f && func_161(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0) && !unk_0x1AAF0C23233C57AF(uParam0->f_5, -1, 0)))
				{
					func_145(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_161(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_94(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	if (((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_312(uParam0->f_4) && unk_0x8910237449BB6F79(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_145(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_312(int iParam0)
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
	
	unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x15EA9596CBD1F90D(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_316((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_315(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_313(unk_0x541C2AEF053615BC(iParam0, 1), Var15, Var18, Var21);
}

int func_313(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_316(Param6 - Param3) };
	Var3 = { func_316(Param9 - Param3) };
	fVar6 = func_314(Param0, Var0);
	fVar7 = func_314(Param3, Var0);
	fVar8 = func_314(Param6, Var0);
	fVar9 = func_314(Param0, Var3);
	fVar10 = func_314(Param3, Var3);
	fVar11 = func_314(Param9, Var3);
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

float func_314(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_315(struct<3> Param0, int iParam3)
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

Vector3 func_316(struct<3> Param0)
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

int func_317(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			if (unk_0x8730A01B72F31307(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x637D801AD41A6525(uParam0->f_4) <= -145f || unk_0x637D801AD41A6525(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x637D801AD41A6525(uParam0->f_4) <= 35f && unk_0x637D801AD41A6525(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDE2406913267F913(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_145(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_93(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_320(var uParam0)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2D2916537452B0DE(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_145(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8B2EFFDCF3FE7E80(uParam0->f_4))
		{
			iVar0 = unk_0x8D66276473ABD7CC(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x5502708AECB47F5D(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_322(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		Var0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(Var0.f_0) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_145(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_93(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x58F9E0EA914AEF2C(uParam0->f_4) && unk_0x2A348A3A98B80B13(uParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_145(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_93(&(Local_190[0 /*10*/].f_3));
				func_96(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_324(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_325(uParam1, iParam0);
	func_93(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_325(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_326(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_327(var uParam0)
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8910237449BB6F79(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_145(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_93(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_328(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_124();
	func_433(2);
	Var0 = { func_116() };
	if ((!unk_0xF1734B55490E9045(&Var0) && func_126()) && !unk_0x3362CDE8460ED38B(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xEB233A3B7635D2AC();
		unk_0x7456702622C62EA0(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (!func_195(uParam0))
			{
				if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_274(uParam0, 3, 0, 0);
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
				func_341(uParam0, &Var0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_195(uParam0))
			{
				if (unk_0xB66CFDE6B830965A(uParam0->f_4))
				{
					func_339(uParam0, 4096, 0);
				}
				else
				{
					func_339(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_341(uParam0, &Var0);
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
				func_341(uParam0, &Var0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_341(uParam0, &Var0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_341(uParam0, &Var0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_141(8, 0);
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
				func_341(uParam0, &Var0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_339(uParam0, 0, 0);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_141(8, 0);
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
				func_341(uParam0, &Var0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_141(8, 0);
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
				func_341(uParam0, &Var0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_338(&Var0);
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
			func_341(uParam0, &Var0);
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
					func_341(uParam0, &Var0);
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_141(3, 0);
		}
		func_274(uParam0, 3, 0f, 1);
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
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_330(sParam2, iParam3, 0);
}

int func_330(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_125();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_336(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_335();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_334();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_333())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_332();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_331();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_125();
	}
	return 0;
}

void func_331()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_332()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_333()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
	if (func_71(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_90();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_335()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_336(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_338(char* sParam0)
{
	switch (func_3(unk_0xBC25C936A095B5BA()))
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

void func_339(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		unk_0x2E35C4FA5F0ED22F(uParam0->f_3, 0);
		unk_0x5502708AECB47F5D(uParam0->f_3);
		unk_0xABA7AE40608505F2(uParam0->f_3, 3, 0);
		unk_0x91629AC1E1F78419(uParam0->f_3, 17, 1);
		unk_0xA4E856A8CD53B8DF(uParam0->f_3);
		if ((func_194(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_105(uParam0->f_29)) && !bParam2)
		{
			func_340(uParam0);
		}
		else
		{
			unk_0xABA7AE40608505F2(uParam0->f_3, 1024, 1);
			unk_0xABA7AE40608505F2(uParam0->f_3, 131072, 1);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
			}
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
		unk_0x22321800954A532E(uParam0->f_3, 1);
	}
}

void func_340(var uParam0)
{
	var uVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x019CE76D5286C95C(uParam0->f_3, 84.9058f);
				unk_0x22321800954A532E(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x019CE76D5286C95C(uParam0->f_3, 68.3138f);
				unk_0x22321800954A532E(uParam0->f_3, 1);
			}
			else
			{
				unk_0x8CE2798B9A7027EC(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xA4E856A8CD53B8DF(uParam0->f_3);
			unk_0x02DAF06EA4F08219(&uVar0);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 0);
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x346129B364057FF6(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xC8D68BDC49FEF571(0, 1);
				unk_0x346129B364057FF6(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xC0FDCDB0DF739C50(0, 151.7794f, 0);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_29, 15f, 20000);
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xABB25056487DF1D7(uParam0->f_29, 15f, 1))
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
		unk_0x22321800954A532E(uParam0->f_3, 1);
	}
}

void func_341(var uParam0, char* sParam1)
{
	if (func_342(uParam0))
	{
		func_329(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_342(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_161(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 40f && !unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(var uParam0)
{
	return uParam0->f_118;
}

void func_344()
{
	func_373(&Local_413);
	if (func_372(&Local_413, &Local_972))
	{
		switch (Local_972.f_27)
		{
			case 0:
				if (Local_413.f_410 == 9)
				{
					if (!func_132(&Local_413))
					{
						if (func_371("TX_OBJ_CYI_DO") || unk_0x2DA8CA50A72528FB(Local_413.f_9))
						{
							Local_972.f_27++;
						}
						else if (func_196(&Local_413) != 10)
						{
							func_206(&Local_413, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_196(&Local_413) > 10 && func_196(&Local_413) != 15) && !func_132(&Local_413))
				{
					func_206(&Local_413, 15, 1, 0, 0);
					func_181(&Local_413, 7);
				}
				break;
			
			case 2:
				if (func_144(&Local_413, 18) > 2f)
				{
					func_206(&Local_413, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_144(&Local_413, 18) > 2f)
				{
					func_206(&Local_413, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					if ((((func_196(&Local_413) != 33 && !func_370(&Local_413)) && !func_132(&Local_413)) && !bLocal_865) && Local_413.f_410 > 9)
					{
						if (func_144(&Local_413, 18) > 2f)
						{
							func_206(&Local_413, 33, 1, 0, 1);
							func_274(&Local_413, 16, 4f, 0);
							if (bLocal_971)
							{
							}
						}
					}
					else
					{
						if (func_196(&Local_413) != 33)
						{
						}
						if (!func_370(&Local_413))
						{
						}
						if (!func_132(&Local_413))
						{
						}
						if (!bLocal_865)
						{
						}
						if (Local_413.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_144(&Local_413, 16) > 4f && func_196(&Local_413) != 34) && !func_132(&Local_413)) && !func_370(&Local_413))
				{
					func_206(&Local_413, 34, 1, 0, 0);
					if (bLocal_971)
					{
					}
				}
				break;
			
			case 7:
				Local_972.f_27++;
				break;
			}
	}
	func_345(&Local_413, &uLocal_1002, &Local_972, bLocal_971);
}

int func_345(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_352(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_133(uParam0, 2))
	{
		if (func_351(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x105601648511CC64() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_370(uParam0))
				{
					uParam2->f_7 = { func_350(uParam1) };
					func_329(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_126())
				{
					uParam2->f_13 = { func_166() };
					if (unk_0x3362CDE8460ED38B(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_173(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_348(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_137(uParam0))
				{
					if (func_126())
					{
						func_274(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_347() };
						if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_126())
				{
					uParam2->f_19 = { func_116() };
				}
				else
				{
					func_173(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_348(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_133(uParam0, 14) && !func_126()) && !func_137(uParam0)) && func_144(uParam0, 18) > 1f)
				{
					func_274(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_126())
				{
					if (func_144(uParam0, 18) > 1f)
					{
						if (!unk_0xF1734B55490E9045(&(uParam2->f_1)))
						{
							func_346(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_126())
				{
					func_173(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_348(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_346(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_337(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 1;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_330(sParam2, iParam4, 0);
}

struct<6> func_347()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		iVar6 = unk_0xC0A904C0F2775676();
		iVar6 = (iVar6 + Global_16810);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar7 /*6*/])))
			{
				return Global_14668[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar8 /*6*/])))
					{
						return Global_14668[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14668[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_348(var uParam0)
{
	int iVar0;
	
	iVar0 = func_349(uParam0);
	if (iVar0 > -1)
	{
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_172(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_193(), 24);
	}
}

int func_349(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_350(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_172(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_351(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_352(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_370(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_133(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_196(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_367(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_126())
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
						func_366(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_363(uParam0, Var0, func_365(uParam0, 2));
				}
				if (func_197(uParam0->f_98, 4))
				{
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				func_153(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_144(uParam0, 16) > 1f)
				{
					func_155(1);
					if (uParam0->f_411 == 9)
					{
						func_234("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_234("TAXI_VIP_RETURN", 7500, 1);
					}
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
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
					func_366(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_144(uParam0, 16) > func_152(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_126()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_196(uParam0))
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
				func_366(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_367(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_329(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_206(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_274(uParam0, 16, 0, 0);
				func_206(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_197(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_369(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_366(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_274(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_234("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_234("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_158(uParam0->f_17, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_17);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, 1);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
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
				func_208(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_230(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_158(uParam0->f_17, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_17);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, 1);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_362(uParam0, 33554432, Var0, "", 1, 8);
				func_274(uParam0, 16, 0, 0);
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_126())
				{
					func_361(uParam0, 0);
					func_172(&(uParam0->f_44), 4);
					func_274(uParam0, 16, 0, 0);
					func_206(uParam0, 13, 0, 0, 0);
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
				func_208(&Var0);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_144(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_208(&Var0);
					}
					func_359(Var0, uParam1);
					func_172(&(uParam0->f_81), 67108864);
					func_274(uParam0, 16, 0, 0);
					func_274(uParam0, 11, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_144(uParam0, 11) > uParam0->f_36)
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
							func_208(&Var0);
						}
					}
					func_359(Var0, uParam1);
					func_274(uParam0, 11, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
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
					func_208(&Var0);
				}
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_208(&Var0);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_208(&Var0);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_208(&Var0);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				func_172(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 1, 0, 8);
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
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
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
					func_358(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_359(Var0, uParam1);
				func_367(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_235(uParam0, 0, 0);
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
					func_358(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_359(Var0, uParam1);
				func_367(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 12:
				func_234("TAXI_OBJ_GYB", 3500, 1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_234("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_234("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_234("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_197(uParam0->f_98, 268435456))
				{
					func_234("TAXI_OBJ_CYI_01", 7500, 1);
					func_172(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_208(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_208(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_208(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 33:
				func_234("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_197(uParam0->f_82, 8192))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_208(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_359(Var0, uParam1);
						}
						else
						{
							func_366(uParam0, &Var0, 0, 0, 8);
						}
						func_172(&(uParam0->f_82), 8192);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_197(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_208(&Var0);
					func_366(uParam0, &Var0, 0, 0, 8);
					func_172(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_197(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_208(&Var0);
					func_366(uParam0, &Var0, 0, 0, 8);
					func_172(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 46, 1, 0, 0);
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
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_235(uParam0, 0, 0);
				break;
			
			case 139:
				func_234("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_206(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x491B2241281A03B7(0, 120);
				if (!func_197(uParam0->f_82, 268435456))
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
					func_172(&(uParam0->f_82), 268435456);
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
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x491B2241281A03B7(0, 100);
				if (!func_197(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_172(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_234("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_235(uParam0, 0, 0);
				func_206(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_126())
				{
					func_234("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_235(uParam0, 0, 0);
					func_206(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_234("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_235(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_197(uParam0->f_81, 1))
				{
					func_357(uParam0, 1, Var0, "_sick1", 8);
					func_138(&(uParam0->f_81), 2);
				}
				else if (!func_197(uParam0->f_81, 2))
				{
					func_357(uParam0, 2, Var0, "_sick2", 8);
					func_138(&(uParam0->f_81), 1);
				}
				func_367(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_197(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_197(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_172(&(uParam0->f_81), 2097152);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_367(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_367(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_367(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_367(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_197(uParam0->f_81, 4))
				{
					func_357(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_197(uParam0->f_81, 8))
				{
					func_357(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_357(uParam0, 8, Var0, "_turns3", 8);
					func_138(&(uParam0->f_81), 4);
					func_138(&(uParam0->f_81), 8);
				}
				func_367(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_356(uParam0))
				{
					func_363(uParam0, Var0, func_365(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_369(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_329(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_369(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_369(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_367(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_197(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 128);
					func_138(&(uParam0->f_83), 256);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 256);
					func_138(&(uParam0->f_83), 512);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 512);
					func_138(&(uParam0->f_83), 128);
					func_274(uParam0, 16, 0, 0);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_197(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 1);
					func_138(&(uParam0->f_83), 2);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 4);
					}
					else
					{
						func_138(&(uParam0->f_83), 1);
					}
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 4);
					func_138(&(uParam0->f_83), 1);
					func_274(uParam0, 16, 0, 0);
				}
				func_367(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_197(uParam0->f_81, 4096))
				{
					func_362(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_197(uParam0->f_81, 8192))
				{
					func_362(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_367(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_197(uParam0->f_81, 16384))
				{
					func_362(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_197(uParam0->f_81, 32768))
				{
					func_362(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_367(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_197(uParam0->f_82, 8))
					{
						func_355(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 16))
					{
						func_355(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 32))
					{
						func_355(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_367(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_235(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_369(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_367(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_367(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_367(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_197(uParam0->f_81, 65536))
				{
					func_362(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 131072))
				{
					func_362(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_356(uParam0))
				{
					func_363(uParam0, Var0, func_365(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_197(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 8);
					func_138(&(uParam0->f_83), 16);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 16);
					func_138(&(uParam0->f_83), 32);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 64);
					}
					else
					{
						func_138(&(uParam0->f_83), 8);
					}
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 64);
					func_138(&(uParam0->f_83), 8);
					func_274(uParam0, 16, 0, 0);
				}
				func_367(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_126())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_366(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_363(uParam0, Var0, func_365(uParam0, 65));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_126())
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
					func_366(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_363(uParam0, Var0, func_365(uParam0, 66));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_126())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								func_367(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								func_367(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_369(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_367(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_274(uParam0, 16, 0, 0);
								func_235(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_366(uParam0, &Var0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_235(uParam0, 0, 0);
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
									func_208(&Var0);
									func_366(uParam0, &Var0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_235(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_366(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_206(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_367(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_197(uParam0->f_82, 1))
				{
					func_355(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 2))
				{
					func_355(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 4))
				{
					func_355(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_235(uParam0, 0, 0);
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
				func_369(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_367(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_356(uParam0))
				{
					func_363(uParam0, Var0, func_365(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_230(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_354(uParam0, Var0, 8);
				}
				func_367(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_197(uParam0->f_83, 1024))
				{
					func_172(&(uParam0->f_83), 1024);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2048))
				{
					func_172(&(uParam0->f_83), 2048);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 4096))
				{
					func_172(&(uParam0->f_83), 4096);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_208(&Var0);
					func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_197(uParam0->f_82, 1024))
				{
					func_355(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_138(&(uParam0->f_82), 2048);
				}
				else if (!func_197(uParam0->f_82, 2048))
				{
					func_355(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_367(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 52, 1, 0, 0);
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
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_230(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_356(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_366(uParam0, &Var0, 0, 0, 8);
						func_206(uParam0, 52, 1, 0, 0);
						func_274(uParam0, 16, 0, 0);
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
						func_366(uParam0, &Var0, 0, 0, 8);
						func_274(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_369(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_367(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					func_234("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_197(uParam0->f_81, 262144))
				{
					func_362(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_362(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_362(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_367(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_197(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_353(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_197(uParam0->f_82, 134217728))
				{
					func_353(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_367(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 100:
				func_234("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_235(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_366(uParam0, &Var0, 0, 0, 8);
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
					func_208(&Var0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_197(uParam0->f_82, 65536))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
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
						func_208(&Var0);
						func_359(Var0, uParam1);
						func_172(&(uParam0->f_82), 65536);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_197(uParam0->f_82, 131072))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_208(&Var0);
						func_359(Var0, uParam1);
						func_172(&(uParam0->f_82), 131072);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_197(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_172(&(uParam0->f_82), 8388608);
				}
				else if (!func_197(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_172(&(uParam0->f_82), 16777216);
				}
				else if (!func_197(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_172(&(uParam0->f_82), 33554432);
				}
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_369(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_208(&Var0);
					func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_366(uParam0, &Var0, 0, 0, 8);
				}
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_359(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_369(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_368(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_172(&(uParam0->f_81), 2097152);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_208(&Var0);
				func_359(Var0, uParam1);
				func_172(&(uParam0->f_81), 67108864);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_197(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_362(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_230(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_206(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_197(uParam0->f_81, 268435456))
				{
					func_362(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_206(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_234("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_235(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_197(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_362(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
						{
							func_230(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_362(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_206(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_234("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_235(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_329(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_197(uParam0->f_81, 16777216))
				{
					func_362(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 88:
				func_234("TAXI_TIEFLEE", 7500, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_197(uParam0->f_98, 536870912))
				{
					func_234("TAXI_OBJ_CYI_1B", 7500, 1);
					func_172(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_235(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_208(&Var0);
				func_366(uParam0, &Var0, 0, 0, 8);
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
				func_366(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_366(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 0, 0);
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
				func_366(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_366(uParam0, &Var0, 1, 0, 8);
				func_206(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_234("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_206(uParam0, 0, 0, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			}
	}
}

void func_353(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_172(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_354(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_197(uParam0->f_82, 64))
	{
		func_172(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_197(uParam0->f_82, 128))
	{
		func_172(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x491B2241281A03B7(1, 3), 24);
	}
	func_368(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_274(uParam0, 16, 0, 0);
}

void func_355(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_172(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_208(&Param2);
		}
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_356(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_172(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_358(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_252(*uParam0, iVar1))
		{
			func_173(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_208(sParam2);
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

void func_359(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_360(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_172(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xF1734B55490E9045(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_361(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_234("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_234("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_234("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_234("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_234("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_234("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_234("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_234("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_234("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_234("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_234("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_234("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_362(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_172(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_329(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_363(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_274(uParam0, 16, 0, 0);
	func_274(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		unk_0xD508385315EA1DAC(uParam0->f_3, &cParam1, func_364(uParam0));
	}
}

char* func_364(var uParam0)
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

char* func_365(var uParam0, int iParam1)
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

int func_366(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_274(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_274(uParam0, 17, 0f, 1);
	}
	func_235(uParam0, iParam2, 0);
	return func_329(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_367(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_197(*uParam2, 2))
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
		if (func_197(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_197(*uParam2, 4))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_197(*uParam2, 512))
		{
			if (!func_197(*uParam2, 4096))
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
		if (func_197(*uParam2, 16))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_197(*uParam2, 64))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_197(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_197(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_197(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_197(*uParam2, 8192))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_197(*uParam2, 16384))
		{
			if (func_197(*uParam2, 4194304))
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
		if (func_197(*uParam2, 32768))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_197(*uParam2, 65536))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_197(*uParam2, 131072))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_197(*uParam2, 262144))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_197(*uParam2, 524288))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_197(*uParam2, 1048576))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_197(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_197(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_197(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_197(*uParam2, 67108864))
		{
			if (func_197(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_197(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_197(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_197(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_197(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_368(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_337(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 1;
	Global_16793 = 0;
	Global_16797 = 0;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_330(sParam2, iParam4, 0);
}

void func_369(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_252(*uParam0, iVar1))
		{
			func_173(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_208(sParam2);
				}
				else
				{
					func_208(sParam2);
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

int func_370(var uParam0)
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

int func_371(char* sParam0)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (func_188(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_372(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_133(uParam0, 9));
}

void func_373(var uParam0)
{
	if (func_133(uParam0, 17))
	{
		if (!func_133(uParam0, 14))
		{
			if (!func_137(uParam0))
			{
				if (!func_126())
				{
					func_134(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_374(var uParam0)
{
	return uParam0->f_117;
}

void func_375(var uParam0)
{
	if (!func_304(uParam0))
	{
		if ((unk_0x105601648511CC64() % 1000) < 50)
		{
		}
		func_146(uParam0, 1);
	}
	else if (func_133(uParam0, 14))
	{
		func_199(uParam0);
		func_147(uParam0, 0);
	}
}

void func_376(var uParam0, var uParam1, bool bParam2)
{
	if (!func_197(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF1734B55490E9045(&(uParam0->f_124)) && func_126())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_126())
				{
					StringCopy(&(uParam0->f_124), func_193(), 24);
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

void func_377(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_252(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_252(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_252(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_173(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x105601648511CC64();
							}
						}
						else
						{
							func_139(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_252(Local_343.f_1[iVar0 /*4*/], 4) && !func_252(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_173(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_328(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_378(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_133(uParam0, 27))
	{
		func_181(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_144(uParam0, 27) > 5f)
	{
		if (func_405(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_274(uParam0, 27, 0, 0);
			func_274(uParam0, 10, 0, 0);
			func_403(uParam0, &uVar0, uParam1);
		}
		func_400(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_379(uParam0);
	}
	if ((((!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) && (unk_0xEF0E25DA0CB6E8FF(*uParam0) && !unk_0xEDEA6C8F42EE05F6(*uParam0))) && (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1) && !unk_0xEDEA6C8F42EE05F6(uParam0->f_1))) && !unk_0x4B8E3E5901E59EB8()) && !func_126())
	{
		if (func_144(uParam0, 26) > 10f)
		{
			func_134(uParam0, 26, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
		}
	}
	else if (func_133(uParam0, 26))
	{
		func_134(uParam0, 26, 0);
	}
	return 0;
}

void func_379(var uParam0)
{
	if (!func_399(uParam0->f_429))
	{
		uParam0->f_429 = func_398();
		func_389(&(uParam0->f_429), 0, 0, unk_0x491B2241281A03B7(4, 7), 0, 0, 0);
	}
	else if (func_380(uParam0->f_429))
	{
		func_328(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_380(int iParam0)
{
	return func_381(func_398(), iParam0);
}

int func_381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_399(iParam1) || !func_399(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_382(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_383(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_384(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_385(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_386(int iParam0)
{
	return iParam0 & 15;
}

var func_387(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_388(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_388(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_389(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_387(*uParam0);
	iVar1 = func_386(*uParam0);
	iVar2 = func_385(*uParam0);
	iVar3 = func_384(*uParam0);
	iVar4 = func_383(*uParam0);
	iVar5 = func_382(*uParam0);
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
	iVar6 = func_397(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_397(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_390(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_396(uParam0, iParam1);
	func_395(uParam0, iParam2);
	func_394(uParam0, iParam3);
	func_393(uParam0, iParam5);
	func_392(uParam0, iParam4);
	func_391(uParam0, iParam6);
}

void func_391(var uParam0, int iParam1)
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

void func_392(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_386(*uParam0);
	iVar1 = func_387(*uParam0);
	if (iParam1 < 1 || iParam1 > func_397(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_394(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_396(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_397(int iParam0, int iParam1)
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

int func_398()
{
	var uVar0;
	
	func_396(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_395(&uVar0, unk_0x7E09057438B9D216());
	func_394(&uVar0, unk_0x6E06C0DB9B43570D());
	func_392(&uVar0, unk_0xBE14F159908E4EE5());
	func_393(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_391(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

int func_399(int iParam0)
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
	iVar0 = func_382(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_383(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_384(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_387(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_386(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_385(iParam0);
	if (iVar5 < 1 || iVar5 > func_397(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_400(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_402()) && !func_304(uParam0)) || ((uParam0->f_411 != 9 && func_239(uParam0, 1)) && !func_304(uParam0)))
		{
			uVar0 = func_401(uParam0->f_4);
			unk_0x91BCA7FA73FFCDF2(&uVar0);
			uParam0->f_4 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			unk_0x77815D3407C6700D(uParam0->f_4, 1, 0);
			func_199(uParam0);
			func_147(uParam0, 0);
		}
	}
}

var func_401(var uParam0)
{
	return uParam0;
}

int func_402()
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5E87CB0495C97732(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_403(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_404(uParam0, 0, 1))
			{
				func_328(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_404(uParam0, 0, 4))
			{
				func_328(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_404(uParam0, 0, 8))
			{
				func_328(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_404(uParam0, 1, 1))
			{
				func_328(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_404(uParam0, 0, 1))
			{
				func_328(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_197(*uParam2, 2) && func_195(uParam0))
			{
				func_328(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_404(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (!unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_206(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_206(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_405(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_197(*uParam2, 1))
		{
			if (func_411(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_197(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_197(*uParam2, 4))
		{
			if (func_409(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_197(*uParam2, 8))
		{
			if (func_408(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_197(*uParam2, 128);
		if (bParam4)
		{
			if (func_406(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_197(*uParam2, 16))
		{
			if (func_406(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x724D816EA203A79E(iParam0))
	{
		if (iParam7 && unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(uVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(uVar1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0xA4813477CC5DD00F(iParam0))
			{
				if (unk_0x33213E99DDEE4631(iParam0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD1071273B19F81DF(iParam0))
		{
			return 1;
		}
	}
	if (func_407(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_160(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(uParam1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(iParam1, 1)) < 2.5f)
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x72C9157015C2151B(uParam0, 4))
	{
		if (unk_0x32E373675659FDB0(uParam0) && !unk_0x75F706B6889D7D86(iParam0))
		{
			if (unk_0x4DBCE270B354E123(uParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x1D403DFADBC2DE3C(uParam1, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	if (unk_0x04880508C862E589(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB7CB92A84A7518CD(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72C9157015C2151B(uParam0, 2))
	{
		if (unk_0x32E373675659FDB0(uParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0x399F7937FFE4DEBF(iParam1), 0))
			{
				iVar3 = unk_0x9FE9D386222EEE47(unk_0x399F7937FFE4DEBF(iParam1), 0);
			}
			if (unk_0x042228744678C7D4(iParam0) || func_410(iVar3))
			{
				if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x876474582C5DECDE((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(iParam0, -1, 0) != 0)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_161(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
						{
							if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &uVar1))
							{
								if ((unk_0xD27AC0E9B78CFDD7(uVar1) && unk_0x233ED4CD1F1A42C1(iVar1) == iParam0) || (unk_0x386592AF38881675(iVar1) && unk_0x399F7937FFE4DEBF(iVar1) == unk_0x3187EF5798B5D209(iParam0, -1, 0)))
								{
									if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
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

int func_411(int iParam0, var uParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_160(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x105601648511CC64();
						}
						else if ((unk_0x105601648511CC64() - uParam1->f_1) > uParam1->f_3)
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

void func_412(var uParam0)
{
	if (!func_197(uParam0->f_98, 2))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (func_194(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xEDAD35A0D81ED3FB(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_172(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_413()
{
	func_414(&Local_413);
	func_430();
}

void func_414(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_433(2);
	}
}

int func_415(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_126() && func_144(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_57(uParam0) == 0 || func_252(uParam0->f_85, 32))
					{
						if (!unk_0xB66CFDE6B830965A(uParam0->f_4))
						{
							func_339(uParam0, 4160, 0);
						}
						else
						{
							func_339(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_339(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_339(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_339(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x105601648511CC64() % 1000) < 50)
	{
	}
	return 0;
}

int func_416(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_417(int iParam0)
{
	func_419(&Local_413, iParam0);
	Local_413.f_410 = 0;
	func_418(&Local_413, 2, 8);
	Local_413.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_413.f_33 = 202.9f;
	Local_413.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_413.f_34 = 262.6098f;
	Local_413.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}

void func_418(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_419(var uParam0, var uParam1)
{
	func_429(1);
	func_201();
	func_6(&(uParam0->f_244));
	func_428(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_197(Global_105220.f_19068, 4))
	{
		func_172(&(Global_105220.f_19068), 4);
	}
	func_423(uParam0);
	func_421(uParam0);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	uParam0->f_102 = (func_420(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x900CF084251DED26("TAXI", 2);
}

int func_420(int iParam0)
{
	return Global_105220.f_19068.f_39[iParam0];
}

void func_421(var uParam0)
{
	switch (func_57(uParam0))
	{
		case 0:
			func_422(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_422(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_422(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_422(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_422(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_422(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_422(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_422(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_422(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_422(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_422(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_423(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_427(uParam0, 3);
			func_426(uParam0, 14);
			break;
		
		case 1:
			func_427(uParam0, 14);
			func_426(uParam0, 8);
			break;
		
		case 2:
			func_427(uParam0, 8);
			func_426(uParam0, 7);
			break;
		
		case 3:
			func_427(uParam0, 15);
			func_426(uParam0, 6);
			break;
		
		case 4:
			func_427(uParam0, 0);
			func_426(uParam0, 3);
			break;
		
		case 5:
			func_427(uParam0, 6);
			func_426(uParam0, 7);
			break;
		
		case 6:
			func_427(uParam0, 8);
			func_426(uParam0, 15);
			break;
		
		case 7:
			func_427(uParam0, 8);
			func_426(uParam0, 14);
			break;
		
		case 8:
			func_427(uParam0, 7);
			func_426(uParam0, 15);
			break;
		
		case 9:
			func_427(uParam0, unk_0x491B2241281A03B7(0, 17));
			iVar0 = func_425((uParam0->f_418.f_2 + unk_0x491B2241281A03B7(1, 17)), 0, 16);
			func_426(uParam0, iVar0);
			func_424(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_424(var uParam0)
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

int func_425(int iParam0, int iParam1, int iParam2)
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

void func_426(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_428(var uParam0)
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
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
	func_134(uParam0, 32, 0);
}

void func_429(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_104276, unk_0x1377080E9B0BD993(), 24);
		Global_104270 = 1;
	}
	else
	{
		StringCopy(&Global_104276, "NULL", 24);
		Global_104270 = 0;
	}
}

void func_430()
{
	int iVar0;
	
	func_203(func_210(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x1D403DFADBC2DE3C(uLocal_955[iVar0], 0))
		{
			unk_0x02537C8C1BEEB477(&(uLocal_955[iVar0]));
		}
		iVar0++;
	}
	unk_0x2CA123B0622F495C(func_273(0));
	func_127(&iLocal_875);
	unk_0x83D9DF6EBA99B30C(0);
	unk_0x6E52C7765A0F4382(1);
	unk_0xC32C243942383443();
	unk_0xC1300D0F3A74E20B("TAXI_CUT_U_IN");
	unk_0x4EA570997E107F35("MOVE_P_M_ZERO_RUCKSACK");
	func_432();
	func_431();
	func_280(&uLocal_45, 0, 0);
	unk_0x483687B0FCA5415A(uLocal_968, 0);
	if (unk_0x724D816EA203A79E(uLocal_843))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_843);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_431()
{
	unk_0x2CA123B0622F495C(func_273(3));
	unk_0x2CA123B0622F495C(func_273(4));
	unk_0x4F5DAC981AF98536(0, func_131(1));
}

void func_432()
{
}

void func_433(int iParam0)
{
	Global_103930.f_22 = iParam0;
}

