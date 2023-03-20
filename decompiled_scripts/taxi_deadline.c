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
	struct<411> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
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
	var uLocal_845 = 0;
	int iLocal_846 = 0;
	float fLocal_847 = 0f;
	var uLocal_848 = 0;
	struct<3> Local_849 = { 0, 0, 0 } ;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	bool bLocal_861 = 0;
	struct<28> Local_862 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 5;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	int iLocal_933 = 0;
	struct<2> Local_934 = { 0, 0 } ;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 1097859072;
	var uLocal_939 = 1500;
	var uLocal_940 = 45;
	var uLocal_941 = 1103626240;
	var uLocal_942 = 5;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	float fLocal_956[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_964[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_987[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
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
	uLocal_77 = unk_0x41A93ECFFBBAC499();
	uLocal_78 = unk_0xEF74E92BF5AB1FC4();
	Local_83 = { 500f, 500f, 500f };
	iLocal_839 = joaat("g_m_m_chigoon_02");
	iLocal_844 = 1;
	Local_849 = { 344.7458f, 452.1832f, 145.9936f };
	iLocal_955 = 2;
	if (unk_0x89522B8E487D4EF9(67))
	{
		func_401(2);
		func_399();
	}
	unk_0x3F95CDEE236B6AD7(1);
	func_386();
	while (true)
	{
		if (unk_0xD51CFE69539DB6D8(Local_409.f_2))
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
	uParam0->f_2 = unk_0xE7869D5D7816A9B6();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xE7869D5D7816A9B6());
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xE7869D5D7816A9B6());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
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
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_385(&Local_409))
	{
		func_384(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_383(&Local_409, 0))
			{
				func_381();
			}
		}
		else if (func_380(&Local_409, 31) > 5f)
		{
			func_401(2);
			func_399();
		}
	}
	else
	{
		func_379(&Local_409);
		func_358(&Local_409, &uLocal_936);
		func_353();
		func_352(&Local_409, &uLocal_845, 0);
		func_351(&Local_409);
		if (Local_409.f_410 == 9)
		{
			func_350(&Local_409);
			func_326(&Local_409, 0, 1);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_325(&Local_409))
			{
				func_290();
			}
			else
			{
				func_273(&Local_409, "Taxi Not Driveable", func_289(&Local_409));
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_270();
				func_269(&Local_409, 16, 4f, 0);
				func_266(&Local_409, func_268(iLocal_955), func_268(iLocal_954), "TaxiKwak", iLocal_839, 180.6f, 1114636288);
				func_264(&Local_409);
				func_263(&Local_409, 1);
				break;
			
			case 1:
				if (func_261())
				{
					func_260();
					func_259(&(Local_840[0 /*3*/]), "TAXI_SC_BN_03", 200);
					func_258(&Local_409, &Local_840);
					Local_409.f_14 = { func_268(iLocal_955) };
					func_238();
					func_237(&Local_409);
					func_263(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_230(&Local_409, 1))
				{
					if (!unk_0x76B2D234F1895632(Local_409.f_3))
					{
						unk_0x497AFDFE79EEFE4F(Local_409.f_3, 0, 0, 0, 0);
						unk_0x497AFDFE79EEFE4F(Local_409.f_3, 2, 1, 0, 0);
						unk_0x497AFDFE79EEFE4F(Local_409.f_3, 3, 1, 0, 0);
						unk_0x497AFDFE79EEFE4F(Local_409.f_3, 4, 0, 1, 0);
						unk_0x497AFDFE79EEFE4F(Local_409.f_3, 8, 1, 1, 0);
					}
					func_229(&Local_409, 1, 0);
					func_263(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_201(&Local_409, 0, 1109393408))
				{
					func_263(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_200(&Local_409))
				{
					Local_409.f_17 = { Local_849 };
					iLocal_933 = func_186();
					Local_934 = { func_181(iLocal_933) };
					Local_409.f_136 = { Local_934 };
					fLocal_847 = 210f;
					func_180(&uLocal_852);
					func_176(&Local_409, 9, 1, 0, 0);
					func_175(&Local_409);
					func_174();
					func_263(&Local_409, 9);
				}
				if (unk_0xC45A34912542C4EB(Local_409.f_4, 0))
				{
					if (!unk_0x8AF655CC5761C7A2(Local_409.f_2, Local_409.f_4, 0))
					{
						func_172(&Local_409);
						func_263(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				func_168();
				if (func_167(&uLocal_852) > (fLocal_847 + 10f))
				{
					if (!func_166())
					{
						func_273(&Local_409, "Player did not hit the deadline", 20);
					}
					else
					{
						func_164();
					}
				}
				if (func_123(&Local_409, func_163(), 7f, 30f))
				{
					if (!func_166())
					{
						func_122(&Local_862, 15, 1);
						unk_0x5B62CAB9B0D6ABF1(&(Local_409.f_9));
						if (func_380(&Local_409, 7) < fLocal_956[5] || Local_409.f_56 >= Local_409.f_59)
						{
							func_121(&Local_409, 0);
						}
						if (func_167(&uLocal_852) > 210f)
						{
							Local_409.f_56 = 0;
						}
						func_119(&Local_409);
						func_115(&Local_409);
						func_114(&Local_409);
						if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
						{
							unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 26, 1);
						}
						func_263(&Local_409, 27);
					}
					else
					{
						func_164();
					}
				}
				break;
			
			case 27:
				if (func_104(&Local_409, 1))
				{
					func_102(0);
					if (!unk_0x76B2D234F1895632(Local_409.f_3))
					{
						if (func_100(func_101(), Local_409.f_29, 0))
						{
							unk_0x151F32CB40BE730C(Local_409.f_3, 84.9058f);
							unk_0x8D6671D78D1F569B(Local_409.f_3, 1);
						}
						else
						{
							unk_0x33A90AD8FA327B72(&uLocal_848);
							unk_0x94026C1D1DB14225(&uLocal_848);
							unk_0xCD7A5BCC47D00FB2(0, 0, 0);
							unk_0x44C7AD5B54E267EE(0);
							unk_0x33E113E52A91C5C3(0, Local_409.f_29, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x33E113E52A91C5C3(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
							unk_0x911ECBCE73F8EC3F(uLocal_848);
							unk_0xC2C4A3A9FF2FBFFF(Local_409.f_3, uLocal_848);
							unk_0x8D6671D78D1F569B(Local_409.f_3, 1);
						}
					}
					func_263(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_70(&Local_409, &uLocal_943))
				{
					func_9(1, &Local_409, 1);
					func_263(&Local_409, 30);
				}
				break;
			
			case 30:
				func_399();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_44(uParam1);
		if (!unk_0xAF437D7C802AB246(uParam1->f_3))
		{
			unk_0x1C26C4B0DAB91B21(uParam1->f_3, 317, 1);
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
	func_384(uParam0);
	if (func_166())
	{
		func_40();
	}
	func_38();
	unk_0x00400F14096FE01D();
	unk_0x1D208E4A4E1D4FFE(1);
	func_35(0);
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		unk_0x8100F8AA27EE924B(uParam0->f_4, 0);
		unk_0xFA1A9835C7DE4F2A(uParam0->f_4);
		unk_0x814812A00D591F4F(uParam0->f_4);
	}
	func_34(uParam0->f_14, 1);
	func_32(uParam0->f_14, 1, 1114636288);
	func_31(&(uParam0->f_244), 3);
	unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 1);
	if (func_28())
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
	}
	unk_0xD60DE78AB9B18914(1);
	func_19(0, 1, 1, 0);
	unk_0xA8010B7497A9230B(1);
	unk_0xE242D0D27B122FAC(1);
	if (unk_0xCF686B56FD5328B5(*uParam0))
	{
		unk_0x74FF6D08DE291367(*uParam0, 0);
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		unk_0x1B8E0930AB96444B(1);
	}
	if (func_18(Global_99155.f_17711, 4))
	{
		func_16(&(Global_99155.f_17711), 4);
		unk_0x7E38E815EF844C74(func_15(), 0);
	}
	if (bParam1)
	{
		func_14(uParam0);
	}
	func_13(uParam0);
	unk_0x8B10CC9832827D27("gestures@m@standing@casual");
	unk_0x8B10CC9832827D27("oddjobs@taxi@");
	unk_0x8B10CC9832827D27("oddjobs@towingcome_here");
	if (unk_0xC8FFCE1611C4F73B())
	{
		func_11(uParam0->f_411);
	}
	if (!unk_0x4844BC1882594FDB(unk_0xBFAE5F9DEC53DAE2()))
	{
		unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	}
	unk_0x2A788D80D436EF63(unk_0xF2DB717A73826179((func_167(&uLocal_90) * 1000f)), 12, 0);
}

void func_11(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_12(iParam0)}, 6);
		if (!unk_0x356491C12DAD1A37(&uVar0))
		{
		}
	}
}

struct<8> func_12(int iParam0)
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

void func_13(var uParam0)
{
	unk_0x4C17FD5BCB6C8DDD(uParam0->f_51[0]);
}

void func_14(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (!unk_0x51374A0BB2871E6E(uParam0->f_3, 0))
			{
				unk_0x2E4D4E5B335FC291(uParam0->f_3);
			}
			unk_0x9BEE7E791BC4D38B(uParam0->f_3, 0);
			unk_0xA9CA101B50B90993(255, uParam0->f_413, joaat("player"));
			if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x506D42CB68AE4EA5(&(uParam0->f_3));
		}
	}
}

int func_15()
{
	return joaat("taxi");
}

void func_16(var uParam0, int iParam1)
{
	func_17(uParam0, iParam1);
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_19(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_27(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_26())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_25(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_27(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_25(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_20(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
	}
}

int func_20(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312746;
}

int func_25(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

int func_28()
{
	if (!func_30() && !func_29())
	{
		if (!unk_0xC970788FCA6269B6(unk_0xBFAE5F9DEC53DAE2()))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (unk_0xFF6891E21E7FC193(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_31(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_32(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_33(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_33(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x39895086D78BEA60(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x3EB6E5FC1FA6912C(Var0, Var3, 1);
		unk_0x1D23906D962EED92();
	}
}

Vector3 func_33(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_34(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_100(Param0, func_101(), 0))
	{
		Var0 = { func_33(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_33(Param0, 1f, 30f, 30f, 10f) };
		unk_0xBDF0A810DD6A47D3(Var0, Var3, iParam3, 1);
	}
}

void func_35(int iParam0)
{
	if (Global_14571)
	{
		func_36(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_26())
	{
		Global_14413.f_1 = 3;
	}
}

void func_36(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88291[iVar0 /*17*/] && !Global_88291[iVar0 /*17*/].f_1)
		{
			if (Global_88291[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88291[iVar0 /*17*/].f_5 != 88 && Global_88291[iVar0 /*17*/].f_5 != 89) && Global_88291[iVar0 /*17*/].f_5 != 92)
				{
					func_39(Global_88291[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85343[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85343[iParam0 /*2*/] = 0;
	}
}

void func_40()
{
	Global_14578 = 0;
	func_41();
}

void func_41()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_99155.f_17711.f_22[0]++;
			func_43("Fares Completed ++ = ", Global_99155.f_17711.f_22[0]);
			break;
		
		case 1:
			Global_99155.f_17711.f_22[1]++;
			func_43("Fares Failed ++ = ", Global_99155.f_17711.f_22[1]);
			break;
		
		case 2:
			Global_99155.f_17711.f_22[2]++;
			func_43("Fares Accepted ++ ", Global_99155.f_17711.f_22[2]);
			break;
		
		case 3:
			Global_99155.f_17711.f_22[3]++;
			func_43("Fares Expired ++ ", Global_99155.f_17711.f_22[3]);
			break;
		
		case 13:
			Global_99155.f_17711.f_22[13]++;
			func_43("Passengers run ++ = ", Global_99155.f_17711.f_22[13]);
			break;
		
		case 14:
			Global_99155.f_17711.f_22[14]++;
			func_43("Passenger Forced to Pay ++ = ", Global_99155.f_17711.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_99155.f_17711.f_22[4])
				{
					Global_99155.f_17711.f_22[4] = iParam1;
					func_43("This distance ", iParam1);
					func_43(" is longer than current best", Global_99155.f_17711.f_22[4]);
				}
				else
				{
					func_43("Longest Distance Not Beat ", Global_99155.f_17711.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_99155.f_17711.f_22[5] = (Global_99155.f_17711.f_22[5] + iParam1);
			func_43("Total Distance w/ Passenger = ", Global_99155.f_17711.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_99155.f_17711.f_22[6]++;
			}
			else
			{
				Global_99155.f_17711.f_22[6] = (Global_99155.f_17711.f_22[6] + iParam1);
			}
			func_43("Wanted Levels ++ = ", Global_99155.f_17711.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_99155.f_17711.f_22[7] = (Global_99155.f_17711.f_22[7] + iParam1);
			}
			else
			{
				Global_99155.f_17711.f_22[7]++;
			}
			func_43("Wanted Levels Lost = ", Global_99155.f_17711.f_22[7]);
			break;
		
		case 8:
			Global_99155.f_17711.f_22[8]++;
			func_43("Taxis wrecked ++ = ", Global_99155.f_17711.f_22[8]);
			break;
		
		case 9:
			Global_99155.f_17711.f_22[9]++;
			func_43("Horn Honked ++ = ", Global_99155.f_17711.f_22[9]);
			break;
		
		case 10:
			Global_99155.f_17711.f_22[10] = (Global_99155.f_17711.f_22[10] + iParam1);
			func_43("Total Money Earned = ", Global_99155.f_17711.f_22[10]);
			break;
		
		case 11:
			Global_99155.f_17711.f_22[11] = (Global_99155.f_17711.f_22[11] + iParam1);
			func_43("Total Tips Earned = ", Global_99155.f_17711.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_99155.f_17711.f_22[12])
			{
				Global_99155.f_17711.f_22[12] = iParam1;
				func_43("New Highest Tip = ", Global_99155.f_17711.f_22[12]);
			}
			else
			{
				func_43("Highest Tip Not Reached = ", Global_99155.f_17711.f_22[12]);
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
		func_401(1);
		func_56(15, 1);
	}
	func_54(&(Global_99155.f_17711), 1024);
	if (!func_18(Global_99155.f_17711, 64))
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
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_50(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_49() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
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
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

int func_49()
{
	return Global_25034;
}

int func_50(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_57(iParam0, iParam1);
}

int func_57(int iParam0, int iParam1)
{
	if (func_69(14) && !func_68(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_67(&Global_2558814))
	{
		if (func_65(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_58(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
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
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_69(14) && !func_68(iParam1))
	{
		return 0;
	}
	if (func_65(uParam0, iParam1))
	{
		return 0;
	}
	if (func_64(uParam0) < 0f)
	{
		func_63(uParam0, 0);
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
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_69(14) && !func_68(iParam1))
	{
		return 0;
	}
	if (func_65(uParam0, iParam1))
	{
		return 0;
	}
	if (func_64(uParam0) < 0f)
	{
		func_63(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_62(uParam0, iVar0);
		iVar0++;
	}
	func_63(uParam0, (Global_2558813 - 0.5f));
}

void func_62(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_63(var uParam0, float fParam1)
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

float func_64(var uParam0)
{
	return uParam0->f_72;
}

bool func_65(var uParam0, int iParam1)
{
	return func_66(uParam0, iParam1) != -1;
}

int func_66(var uParam0, int iParam1)
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

bool func_67(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_68(int iParam0)
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

bool func_69(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_70(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_166() && func_380(uParam0, 0) > 1f)
			{
				if (func_28())
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
				}
				func_99(uParam0);
				func_16(&(Global_99155.f_17711), 4096);
				func_97(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_98(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xCC18B241D266EF14(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_96(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_87(uParam1, 0))
			{
				func_71(uParam0);
				func_269(uParam0, 0, 0, 0);
				func_96(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_72(func_85(), 21, iVar0, 0, 0);
		func_42(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_73(Global_99155.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x56DCF5665F92F9BD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x39DEDCCD70293F58(iVar1, iVar0, 1);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
					switch (unk_0x87F8C006AA576A39())
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
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
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
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
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
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_75(iParam0);
	if (Global_35619 == 15)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_76(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_78() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_78() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_77(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_78() /*10169*/].f_7698.f_10, iParam0);
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_56(27, 1);
	return 1;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_84()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

int func_85()
{
	func_86();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_86()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_4(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_3(unk_0xE7869D5D7816A9B6());
			if (func_5(iVar0) && (!func_69(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_5(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

int func_87(var uParam0, int iParam1)
{
	if (!func_95(&(uParam0->f_2)))
	{
		func_93(&(uParam0->f_2));
	}
	unk_0x1B7A773B18DF3DB0(14);
	unk_0xE2B331FD5EEF4684(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x958B4351DD28B142(2, 201) || uParam0->f_8)
		{
			if (!func_95(&(uParam0->f_5)))
			{
				func_93(&(uParam0->f_5));
				func_92(uParam0, 1051260355);
			}
		}
		if (func_95(&(uParam0->f_5)))
		{
			if (func_89(&(uParam0->f_5)) > 0.33f)
			{
				func_88(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_89(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_95(&(uParam0->f_5)))
		{
			func_93(&(uParam0->f_5));
			func_92(uParam0, 1051260355);
		}
		else if (func_89(&(uParam0->f_5)) > 0.33f)
		{
			func_88(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_89(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_91(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_90(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_90(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_91(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

void func_92(var uParam0, int iParam1)
{
	unk_0xA4F3B84032D46C13(*uParam0, "SHARD_ANIM_OUT");
	unk_0x43C93E686A1E92C5(uParam0->f_9);
	unk_0x73B039A1CD485226(iParam1);
	unk_0xFF141057ED7B4C73();
}

void func_93(var uParam0)
{
	func_94(uParam0, 0f);
}

void func_94(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_90(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_95(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

void func_96(int iParam0)
{
	Global_69496 = iParam0;
	Global_69497 = iParam0;
}

void func_97(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xA4F3B84032D46C13(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x33D37B75FC2BCC8C("STRING");
	unk_0xC498567F546E6683(iParam9);
	unk_0x9359E7CC54335EB9(sParam1);
	unk_0x057886C01DDC535D();
	unk_0x33D37B75FC2BCC8C(sParam7);
	unk_0x8D23CF083336DA9B(uParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x9359E7CC54335EB9(uParam6);
	unk_0x8D23CF083336DA9B(uParam5);
	unk_0x8D23CF083336DA9B(iParam4);
	unk_0x057886C01DDC535D();
	unk_0xFF141057ED7B4C73();
	func_93(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_98(var uParam0)
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

void func_99(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_42(11, uParam0->f_56);
	func_42(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xB519E5386FBF69E5(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_100(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_101()
{
	struct<3> Var0;
	
	return Var0;
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		func_103();
		unk_0x57196288096F5B83(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 0);
		unk_0x57196288096F5B83(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 0);
		unk_0x57196288096F5B83(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 0);
		unk_0x57196288096F5B83(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 0);
	}
	else
	{
		unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0);
		unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0);
	}
}

void func_103()
{
	unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0);
	unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0);
	unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0);
	unk_0x0A68276D9EBE091F(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0);
}

int func_104(var uParam0, bool bParam1)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (func_113(uParam0) && func_110(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_109(uParam0, 2097152))
				{
					func_105(uParam0);
				}
			}
			else
			{
				func_105(uParam0);
			}
		}
		else if (!func_113(uParam0))
		{
			if (bParam1)
			{
				if (func_109(uParam0, 2097152))
				{
					if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_105(var uParam0)
{
	struct<3> Var0;
	
	if (func_108(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_106(uParam0, Var0);
}

void func_106(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3) && unk_0xF50745B40235B5B8(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_107(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x663F1B23D2C4D20A(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xF18329472591CFE6(Var0, Param1, 0) < unk_0xF18329472591CFE6(Var3, Param1, 0) && unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x663F1B23D2C4D20A(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xF18329472591CFE6(Var0, Param1, 0) >= unk_0xF18329472591CFE6(Var3, Param1, 0) && unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x663F1B23D2C4D20A(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x663F1B23D2C4D20A(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_107(int iParam0, int iParam1)
{
	if (!unk_0x76B2D234F1895632(iParam0) && !unk_0x76B2D234F1895632(iParam1))
	{
		if (unk_0xF50745B40235B5B8(iParam0, iParam1))
		{
			if (unk_0xBD6B21D725712BDE(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xBD6B21D725712BDE(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xBD6B21D725712BDE(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xBD6B21D725712BDE(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_108(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_18(uParam0->f_81, iParam1) && !func_166());
	}
	return func_166();
}

int func_110(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_37(1))
			{
				func_35(0);
			}
			if (func_28())
			{
				func_112();
				return 1;
			}
			else if (func_111(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, 256);
				}
				else
				{
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, 0);
				}
			}
			unk_0x5A4DA86F0AB35256(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_111(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8CCCC48313B0F20F(0, 71, 1);
	unk_0x8CCCC48313B0F20F(0, 72, 1);
	unk_0x8CCCC48313B0F20F(0, 76, 1);
	unk_0x8CCCC48313B0F20F(0, 73, 1);
	unk_0x8CCCC48313B0F20F(0, 59, 1);
	unk_0x8CCCC48313B0F20F(0, 60, 1);
	if (bParam5)
	{
		unk_0x8CCCC48313B0F20F(0, 75, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 74, 1);
	unk_0x8CCCC48313B0F20F(0, 86, 1);
	unk_0x8CCCC48313B0F20F(0, 81, 1);
	unk_0x8CCCC48313B0F20F(0, 82, 1);
	unk_0x8CCCC48313B0F20F(0, 138, 1);
	unk_0x8CCCC48313B0F20F(0, 136, 1);
	unk_0x8CCCC48313B0F20F(0, 114, 1);
	unk_0x8CCCC48313B0F20F(0, 107, 1);
	unk_0x8CCCC48313B0F20F(0, 110, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 87, 1);
	unk_0x8CCCC48313B0F20F(0, 88, 1);
	unk_0x8CCCC48313B0F20F(0, 113, 1);
	unk_0x8CCCC48313B0F20F(0, 115, 1);
	unk_0x8CCCC48313B0F20F(0, 116, 1);
	unk_0x8CCCC48313B0F20F(0, 117, 1);
	unk_0x8CCCC48313B0F20F(0, 118, 1);
	unk_0x8CCCC48313B0F20F(0, 119, 1);
	unk_0x8CCCC48313B0F20F(0, 131, 1);
	unk_0x8CCCC48313B0F20F(0, 132, 1);
	unk_0x8CCCC48313B0F20F(0, 123, 1);
	unk_0x8CCCC48313B0F20F(0, 126, 1);
	unk_0x8CCCC48313B0F20F(0, 129, 1);
	unk_0x8CCCC48313B0F20F(0, 130, 1);
	unk_0x8CCCC48313B0F20F(0, 133, 1);
	unk_0x8CCCC48313B0F20F(0, 134, 1);
	unk_0x01E20DCCA2C958A3();
	if ((unk_0x9D40BBF80D8F5E8A() - Global_29) > 500)
	{
		unk_0x1B9F8E5CCC384F1E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9D40BBF80D8F5E8A();
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x7F38A542899D217A(unk_0xD4F0FC8FFEDE152B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_112()
{
	if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
	}
}

int func_113(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_114(var uParam0)
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
	if (!func_18(uParam0->f_55, 1))
	{
		func_54(&(uParam0->f_55), 1);
	}
}

void func_115(var uParam0)
{
	func_117();
	unk_0x00400F14096FE01D();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_176(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_176(uParam0, 103, 1, 0, 0);
		}
		func_116(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_176(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_176(uParam0, 102, 1, 0, 0);
	}
	func_269(uParam0, 16, 4f, 0);
}

void func_116(int iParam0)
{
	Global_97867.f_221 = iParam0;
}

void func_117()
{
	Global_14578 = 0;
	func_118();
}

void func_118()
{
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xACA77D3E6C847C83();
		Global_16723 = 0;
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_119(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_120(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_42(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_42(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_120(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x9956FB0E4B50ECB8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
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

int func_123(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xDE185266FE919B68() && !unk_0x845A95C48FA19489()) && !unk_0xA864A37DA392324A()) && !unk_0xAEF17BDE274A1247()) && !uParam0->f_142)
	{
		if (func_145(uParam0))
		{
			func_144(uParam0, &(uParam0->f_43));
			func_139(uParam0);
			func_138(uParam0);
			func_135(uParam0);
			func_130(uParam0, fParam2, fParam3);
			func_127(uParam0);
			return func_124(uParam0, iParam1);
		}
	}
	return 0;
}

int func_124(var uParam0, int iParam1)
{
	if (func_53(uParam0) == 2)
	{
		if (unk_0x3761EA7F8628B81A(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_126(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1) && func_125(1, 1, 1)) && unk_0x0E9BAAAE8317091B(uParam0->f_4))
		{
			return func_110(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x3761EA7F8628B81A(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1) && func_125(1, 1, 1)) && unk_0x0E9BAAAE8317091B(uParam0->f_4))
	{
		return func_110(uParam0, 1, iParam1);
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

float func_126(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

void func_127(var uParam0)
{
	float fVar0;
	
	if ((func_113(uParam0) && func_18(uParam0->f_81, 67108864)) && unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
	{
		if ((unk_0x9D40BBF80D8F5E8A() - iLocal_97) >= 10000)
		{
			fVar0 = func_128(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x9D40BBF80D8F5E8A();
		}
		if (iLocal_96 >= 2 && !func_166())
		{
			func_176(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x9D40BBF80D8F5E8A() % 4000) < 50)
		{
			if (!func_113(uParam0))
			{
			}
			if (!func_18(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_128(struct<3> Param0, int iParam3)
{
	return func_129(unk_0x91B73D905EA38F6B(unk_0xBFAE5F9DEC53DAE2()), Param0, iParam3);
}

float func_129(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x76B2D234F1895632(uParam0))
	{
		return -1f;
	}
	return unk_0xF18329472591CFE6(unk_0x1141852D07400777(iParam0, 1), Param1, iParam4);
}

void func_130(var uParam0, float fParam1, float fParam2)
{
	if (func_113(uParam0) && func_18(uParam0->f_44, 4))
	{
		if ((unk_0x6D30046757C9C4F9(uParam0->f_4) || unk_0xD4F0FC8FFEDE152B(uParam0->f_4) < 3f) && func_134(uParam0))
		{
			if (!func_133(uParam0, 2))
			{
				func_132(uParam0, 2);
			}
			else if (func_113(uParam0))
			{
				if (func_380(uParam0, 2) > fParam1 && !func_133(uParam0, 14))
				{
					if (func_30())
					{
						func_176(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_176(uParam0, 48, 1, 0, 0);
					}
					func_269(uParam0, 2, 0, 0);
					if (func_133(uParam0, 10))
					{
						func_269(uParam0, 10, 0, 0);
					}
				}
				if (!func_133(uParam0, 3))
				{
					func_269(uParam0, 3, 0, 0);
				}
				else if (func_380(uParam0, 3) >= fParam2)
				{
					func_131(uParam0, 3, 0);
					func_273(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_133(uParam0, 2))
			{
				func_131(uParam0, 2, 0);
			}
			if (func_133(uParam0, 3))
			{
				func_131(uParam0, 3, 0);
			}
		}
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)
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
			func_88(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_88(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_132(var uParam0, int iParam1)
{
	func_180(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_133(var uParam0, int iParam1)
{
	return func_95(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_134(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	if (func_137(uParam0))
	{
		func_136(uParam0);
	}
}

void func_136(var uParam0)
{
	if (unk_0xC2CAF88DF2FA5D09() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x7510FF7BD6BD3BAE();
			func_131(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_380(uParam0, 20) > 3f)
				{
					func_176(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_18(uParam0->f_81, 262144) || !func_18(uParam0->f_81, 1048576))
				{
					if (func_380(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_176(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (func_380(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_176(uParam0, 85, 1, 0, 0);
						func_131(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_380(uParam0, 20) > 8f)
				{
					func_176(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_18(uParam0->f_81, 262144) || func_18(uParam0->f_82, 67108864))
			{
				if (!func_133(uParam0, 22))
				{
					func_132(uParam0, 22);
				}
			}
			if (func_133(uParam0, 22) && func_380(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_18(uParam0->f_81, 1048576))
					{
						func_176(uParam0, 84, 1, 0, 0);
						func_131(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_18(uParam0->f_82, 134217728))
					{
						func_176(uParam0, 85, 1, 0, 0);
						func_131(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_137(var uParam0)
{
	return uParam0->f_120;
}

void func_138(var uParam0)
{
	if (unk_0x3F029B262D36DD77(unk_0xBFAE5F9DEC53DAE2()) && !func_18(uParam0->f_44, 2))
	{
		func_54(&(uParam0->f_44), 2);
	}
	else if (!unk_0x3F029B262D36DD77(unk_0xBFAE5F9DEC53DAE2()) && func_18(uParam0->f_44, 2))
	{
		func_16(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_42(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_176(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_139(var uParam0)
{
	if (!func_18(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
				{
					if (func_380(uParam0, 9) > 1f)
					{
						func_143(uParam0, unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()));
						if (uParam0->f_410 != 22)
						{
							func_176(uParam0, 50, 1, 1, 0);
						}
						func_269(uParam0, 9, 0, 0);
						if (unk_0xD11595488376CB53(uParam0->f_9))
						{
							unk_0x95FCF148333C6A88(uParam0->f_9, 0);
							unk_0x1AD7485666C5160C(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_166() && func_380(uParam0, 9) > 4f)
				{
					func_176(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_142("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_176(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x51AFBB2BC4E2AAFD(unk_0xBFAE5F9DEC53DAE2(), func_141(uParam0)))
				{
					func_143(uParam0, unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()));
					func_42(6, 0);
				}
				if (!func_140(uParam0))
				{
					if (!unk_0xF0A330A29F97AA7E())
					{
						if (func_380(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_176(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
				{
					if (func_142("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x00400F14096FE01D();
					}
					if (unk_0xD11595488376CB53(uParam0->f_9))
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_166())
				{
					if (uParam0->f_410 != 22)
					{
						func_176(uParam0, 53, 1, 0, 1);
					}
					func_42(7, func_141(uParam0));
					func_143(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_166())
				{
					func_131(uParam0, 9, 0);
					func_269(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_140(var uParam0)
{
	return uParam0->f_110;
}

int func_141(var uParam0)
{
	return uParam0->f_106;
}

bool func_142(char* sParam0, int iParam1, int iParam2)
{
	unk_0x589BB5028182386C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x9359E7CC54335EB9(iParam2);
	}
	return unk_0x9E606060DFAF139A();
}

void func_143(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_144(var uParam0, var uParam1)
{
	unk_0xB63C332FD6AA5D49(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_145(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (!unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1) && !unk_0xF3140D055686CF79(uParam0->f_3))
			{
				func_273(uParam0, "Passenger left car.", 9);
			}
			else if (func_159(uParam0))
			{
				if (func_142("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x621ABFDE5A901516("TAXI_OBJ_PICKUP");
				}
				if (unk_0xDE185266FE919B68())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
				{
				}
				func_146(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_146(var uParam0, bool bParam1)
{
	func_158(uParam0, uParam0->f_3);
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_133(uParam0, 14))
			{
				if (func_166())
				{
					func_157(1);
				}
				func_156(uParam0, 11, 1);
				func_149(uParam0, 1);
				func_269(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_113(uParam0))
				{
					if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
					{
					}
					if (unk_0x51374A0BB2871E6E(uParam0->f_2, 0))
					{
						if (func_380(uParam0, 15) > 5f)
						{
							func_269(uParam0, 15, 0f, 1);
						}
					}
					if (func_380(uParam0, 14) > 20f)
					{
						func_273(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_380(uParam0, 14) > 20f)
				{
					if (func_147(uParam0->f_4, 1) > 40f)
					{
						func_273(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_273(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_147(int iParam0, int iParam1)
{
	return func_148(unk_0x91B73D905EA38F6B(unk_0xBFAE5F9DEC53DAE2()), iParam0, iParam1);
}

float func_148(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

void func_149(var uParam0, bool bParam1)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xD11595488376CB53(uParam0->f_8))
			{
				unk_0x95FCF148333C6A88(uParam0->f_8, 0);
				unk_0x1AD7485666C5160C(uParam0->f_8, 0);
				func_155(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xD11595488376CB53(uParam0->f_9))
			{
				unk_0x95FCF148333C6A88(uParam0->f_9, 0);
				unk_0x1AD7485666C5160C(uParam0->f_9, 0);
				unk_0x00400F14096FE01D();
				if (func_113(uParam0))
				{
					func_176(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_155(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_150(uParam0, 0, 0);
		}
		else if (unk_0xD11595488376CB53(uParam0->f_10))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
			if (unk_0xD11595488376CB53(uParam0->f_8))
			{
				unk_0x95FCF148333C6A88(uParam0->f_8, 255);
				unk_0x1AD7485666C5160C(uParam0->f_8, 1);
			}
			else if (unk_0xD11595488376CB53(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x95FCF148333C6A88(uParam0->f_9, 0);
					unk_0x1AD7485666C5160C(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x95FCF148333C6A88(uParam0->f_9, 255);
					unk_0x1AD7485666C5160C(uParam0->f_9, 1);
				}
			}
			unk_0x00400F14096FE01D();
		}
	}
}

void func_150(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_384(uParam0);
	}
	if (!unk_0xD11595488376CB53(uParam0->f_10))
	{
		uParam0->f_10 = func_153(uParam0->f_4, 1, 0);
		unk_0x227FC39A4871C64F(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x1AD7485666C5160C(uParam0->f_10, 1);
		func_151(uParam0);
		if (bParam2)
		{
			unk_0x00400F14096FE01D();
			func_176(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_151(var uParam0)
{
	func_269(uParam0, 14, 0, 0);
	func_152();
}

void func_152()
{
	int iVar0;
	
	iVar0 = unk_0xA0B1717D806F4901();
	if (unk_0xC45A34912542C4EB(iVar0, 0))
	{
		unk_0x3A8AEDC6680712C1(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_154(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_154(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_154(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_18(*uParam1, iParam2))
	{
		unk_0x00400F14096FE01D();
		func_176(uParam0, iParam3, 1, 0, 0);
		func_54(uParam1, iParam2);
	}
}

void func_156(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_157(int iParam0)
{
	Global_16723 = iParam0;
}

void func_158(var uParam0, int iParam1)
{
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (!unk_0xAF437D7C802AB246(iParam1))
		{
			if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
			{
				if ((unk_0xA180067B477D9371(iParam1, joaat("weapon_stungun"), 0) || unk_0xA180067B477D9371(iParam1, 0, 2)) || unk_0xA180067B477D9371(iParam1, 0, 1))
				{
					func_273(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
			}
		}
	}
}

int func_159(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_133(uParam0, 14))
			{
				func_160(uParam0);
			}
			func_149(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_160(var uParam0)
{
	func_131(uParam0, 14, 0);
	func_131(uParam0, 15, 0);
	func_162();
	if (func_161())
	{
		func_157(0);
	}
}

int func_161()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	var uVar0;
	
	uVar0 = unk_0xA0B1717D806F4901();
	if (unk_0xC45A34912542C4EB(uVar0, 0))
	{
		unk_0x3A8AEDC6680712C1(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

float func_163()
{
	float fVar0;
	
	fVar0 = unk_0xD4F0FC8FFEDE152B(Local_409.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_164()
{
	Global_14578 = 0;
	func_165();
}

void func_165()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

int func_166()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

float func_167(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_91(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_90(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_168()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = unk_0xF2DB717A73826179(((fLocal_847 - func_167(&uLocal_852)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1010 = true;
		if (!iLocal_1012)
		{
			unk_0xCC18B241D266EF14(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1012 = 1;
		}
	}
	func_169(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
	if (!bLocal_1010)
	{
		if (!iLocal_1011)
		{
			fVar1 = func_89(&uLocal_852);
			if (((((((((((((((fLocal_847 - fVar1) < 1f || (fLocal_847 - fVar1) < 1.5f) || (fLocal_847 - fVar1) < 2f) || (fLocal_847 - fVar1) < 2.5f) || (fLocal_847 - fVar1) < 3f) || (fLocal_847 - fVar1) < 3.5f) || (fLocal_847 - fVar1) < 4f) || (fLocal_847 - fVar1) < 4.5f) || (fLocal_847 - fVar1) < 5f) || (fLocal_847 - fVar1) < 6f) || (fLocal_847 - fVar1) < 7f) || (fLocal_847 - fVar1) < 8f) || (fLocal_847 - fVar1) < 9f) || (fLocal_847 - fVar1) < 10f) || (fLocal_847 - fVar1) < 11f)
			{
				unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_1011 = 1;
				iLocal_1013 = unk_0x9D40BBF80D8F5E8A();
			}
		}
		else
		{
			fVar2 = func_89(&uLocal_852);
			if (((fLocal_847 - fVar2) < 5.5f && (unk_0x9D40BBF80D8F5E8A() - iLocal_1013) > 500) || ((fLocal_847 - fVar2) < 11f && (unk_0x9D40BBF80D8F5E8A() - iLocal_1013) > 1000))
			{
				iLocal_1011 = 0;
			}
		}
	}
}

void func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_171(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339895.f_1 = 1;
		func_170(7, iVar0);
		Global_1339895.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339895.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339895.f_3988.f_172[iVar0] = iParam2;
		Global_1339895.f_3988.f_216[iVar0] = iParam3;
		Global_1339895.f_3988.f_183[iVar0] = iParam4;
		Global_1339895.f_3988.f_194[iVar0] = iParam5;
		Global_1339895.f_3988.f_249[iVar0] = iParam6;
		Global_1339895.f_3988.f_260[iVar0] = iParam7;
		Global_1339895.f_3988.f_205[iVar0] = iParam8;
		Global_1339895.f_3988.f_314[iVar0] = iParam9;
		Global_1339895.f_3988.f_325[iVar0] = iParam10;
		Global_1339895.f_3988.f_357[iVar0] = iParam11;
		Global_1339895.f_3988.f_238[iVar0] = iParam12;
		Global_1339895.f_3988.f_271[iVar0] = iParam13;
		Global_1339895.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_170(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1339895.f_4594[iParam0]), iParam1);
}

bool func_171(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1339895.f_4594[iParam0], iParam1);
}

void func_172(var uParam0)
{
	func_173(uParam0, 1000);
	if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xDE31B2587775EDAD(uParam0->f_3);
		unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
	}
	func_164();
	func_160(uParam0);
}

void func_173(var uParam0, int iParam1)
{
	if (unk_0xCF686B56FD5328B5(*uParam0))
	{
		unk_0x74FF6D08DE291367(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x538689EF05955EF7(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
	}
}

void func_174()
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
	func_54(&uLocal_936, 2);
	func_132(&Local_409, 7);
}

void func_175(var uParam0)
{
	unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
	unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	func_173(uParam0, 1000);
}

void func_176(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_269(uParam0, 16, 4f, 0);
		if (func_177(uParam0))
		{
			func_40();
		}
	}
	func_229(uParam0, iParam2, bParam3);
}

int func_177(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_166())
	{
		Var6 = { func_179() };
		if (!unk_0xF6917DE0E003509D(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x04E7E853E31F41A3(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_178(&Var0);
			if (unk_0x04E7E853E31F41A3(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_179()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

void func_180(var uParam0)
{
	if (!func_95(uParam0))
	{
		func_93(uParam0);
	}
}

struct<2> func_181(int iParam0)
{
	struct<2> Var0;
	char cVar2[0];
	char cVar3[0];
	
	StringCopy(&cVar2, func_183(func_185(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_182(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_183(func_182(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_182(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

var func_183(int iParam0)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_184(&cVar0);
}

var func_184(char[4] cParam0)
{
	return cParam0;
}

int func_185(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_186()
{
	int iVar0;
	
	iVar0 = func_191();
	func_189(&iVar0, 3);
	func_187(&iVar0, 30);
	return iVar0;
}

void func_187(int iParam0, int iParam1)
{
	if ((func_182(*iParam0) + iParam1) > 59)
	{
		func_188(iParam0, ((func_182(*iParam0) + iParam1) - 60));
		func_189(iParam0, 1);
	}
	else
	{
		func_188(iParam0, (func_182(*iParam0) + iParam1));
	}
}

void func_188(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_189(int iParam0, int iParam1)
{
	if ((func_185(*iParam0) + iParam1) > 23)
	{
		func_190(iParam0, ((func_185(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_190(iParam0, (func_185(*iParam0) + iParam1));
	}
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_191()
{
	var uVar0;
	
	func_199(&uVar0, unk_0x0CE219089BDB83C5());
	func_188(&uVar0, unk_0x1B24A2CA27443F7B());
	func_190(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_194(&uVar0, unk_0x2DA3502053F9E535());
	func_193(&uVar0, unk_0xEB4EA596232DA76E());
	func_192(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_192(var uParam0, int iParam1)
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

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_196(*uParam0);
	if (iParam1 < 1 || iParam1 > func_195(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_195(int iParam0, int iParam1)
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

var func_196(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_197(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_197(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_198(int iParam0)
{
	return iParam0 & 15;
}

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_200(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if ((unk_0xF3140D055686CF79(uParam0->f_3) && (unk_0x9D40BBF80D8F5E8A() - iLocal_89) > 500) || unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
			{
			}
			func_146(uParam0, 1);
			if (func_28())
			{
				unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
			}
			if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 2106541073) == 1 || unk_0xC47857E5E74EA5AF(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xDE31B2587775EDAD(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
			}
		}
		else if (unk_0x51AFBB2BC4E2AAFD(unk_0xBFAE5F9DEC53DAE2(), 0))
		{
			func_227(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x33A90AD8FA327B72(&uVar3);
				unk_0x94026C1D1DB14225(&uVar3);
				unk_0x33E113E52A91C5C3(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x58F62EDF6111D598(0, uParam0->f_4, 0);
				unk_0x911ECBCE73F8EC3F(uVar3);
				unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_133(uParam0, 14))
			{
				func_160(uParam0);
				func_149(uParam0, 0);
			}
			if (func_133(uParam0, 9))
			{
				func_131(uParam0, 9, 0);
				unk_0x00400F14096FE01D();
				if (unk_0xD11595488376CB53(uParam0->f_8))
				{
					unk_0x95FCF148333C6A88(uParam0->f_8, 255);
					unk_0x1AD7485666C5160C(uParam0->f_8, 1);
				}
			}
			if (!unk_0x76B2D234F1895632(uParam0->f_3))
			{
				fVar4 = ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_226(uParam0, uParam0->f_3) > 300f)
				{
					func_273(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 || ((func_148(unk_0xE7869D5D7816A9B6(), uParam0->f_3, 1) < 20f && func_126(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_126(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_223(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_222(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_221(uParam0->f_4, uParam0->f_3);
								iVar0 = func_220(uParam0, &iVar1);
								if (!unk_0x76B2D234F1895632(iVar0))
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
										unk_0xCD7A5BCC47D00FB2(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xCD7A5BCC47D00FB2(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x76B2D234F1895632(iVar0))
											{
												unk_0xCD7A5BCC47D00FB2(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xFA2C5C2D054C888E(uParam0->f_3);
							unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_134(uParam0))
							{
								unk_0xFA2C5C2D054C888E(uParam0->f_3);
							}
							else if (((unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 0) && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 7) && func_226(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x33A90AD8FA327B72(&(uParam0->f_243));
								unk_0x94026C1D1DB14225(&(uParam0->f_243));
								unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xDCF460AE46C9489C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x911ECBCE73F8EC3F(uParam0->f_243);
								unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x8CAD7018AB2D288A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_148(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_219(uParam0, 1))
								{
									unk_0xDE31B2587775EDAD(uParam0->f_3);
									func_273(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_218(uParam0->f_4))
								{
									unk_0xDE31B2587775EDAD(uParam0->f_3);
									func_273(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_216(uParam0);
						if (func_226(uParam0, uParam0->f_3) < fVar4 || func_28())
						{
							if (unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_203(uParam0))
								{
									func_202(uParam0);
									iLocal_89 = unk_0x9D40BBF80D8F5E8A();
									unk_0x1C26C4B0DAB91B21(uParam0->f_3, 26, 1);
									func_131(uParam0, 5, 0);
									unk_0x59192BA17AF112CB();
									unk_0xB63C332FD6AA5D49(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD9404A1491ECECC4(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_202(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_8))
	{
		unk_0x1AD7485666C5160C(uParam0->f_8, 0);
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_8));
	}
}

int func_203(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_215("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
	{
		func_214();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_212(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_110(uParam0, 0, 1084227584) && func_125(1, 1, 1))
			{
				if (func_219(uParam0, 1))
				{
					iLocal_88 = unk_0x9D40BBF80D8F5E8A();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_273(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_221(uParam0->f_4, uParam0->f_3);
				iVar9 = func_220(uParam0, &iVar10);
				if (!unk_0x76B2D234F1895632(iVar9))
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
						unk_0xCD7A5BCC47D00FB2(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xCD7A5BCC47D00FB2(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x76B2D234F1895632(iVar9))
						{
							unk_0xCD7A5BCC47D00FB2(iVar9, 0, 4096);
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
			iVar12 = func_211(&(uParam0->f_409), unk_0xBD306D8AFEF4E078(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xBD306D8AFEF4E078(uParam0->f_4, Var0), 1);
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
				func_210(0, 0, 1);
				unk_0xB0A7E0A62FB61A06(unk_0x1141852D07400777(uParam0->f_4, 1), 3f, 0);
				unk_0xFF08C54E7EC23A77(unk_0x1141852D07400777(uParam0->f_4, 1), 25f, 0);
				unk_0x1D208E4A4E1D4FFE(1);
				unk_0x00400F14096FE01D();
				func_117();
				func_229(uParam0, 0, 0);
				Var13 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, Var6) };
				unk_0x88A973CE47FBEF95(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(uParam0->f_3, func_208(uParam0));
				func_207(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x34F8B34A8E9D3B57(*uParam0, unk_0xBD306D8AFEF4E078(uParam0->f_4, Var0));
				unk_0xB98C70F0FFEA713A(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x63498CF6CF35C6A2(*uParam0, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				unk_0xA573D5E64CDFAF83(uParam0->f_3, 0, 0);
				unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_215("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
			{
				if (!unk_0x51374A0BB2871E6E(uParam0->f_3, 0))
				{
					unk_0x0CC1C59D57D7212B(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x64BC661927CC9D64(uParam0->f_4, func_206(uParam0->f_7), 1);
				}
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				unk_0x74FF6D08DE291367(*uParam0, 0);
				unk_0x74FF6D08DE291367(uParam0->f_1, 0);
				unk_0x7FB81B1DD14A3BE4(0);
				unk_0x6EF372C057320AD4(0, 1065353216);
				unk_0x2D3BB3EF936C4B76(800);
				unk_0x1D208E4A4E1D4FFE(1);
				unk_0x00400F14096FE01D();
				func_117();
				func_229(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xDE185266FE919B68() && !unk_0x845A95C48FA19489())
			{
				func_204(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			unk_0x74FF6D08DE291367(*uParam0, 0);
			unk_0x74FF6D08DE291367(uParam0->f_1, 0);
			unk_0x7FB81B1DD14A3BE4(0);
			unk_0x6EF372C057320AD4(0, 1065353216);
			func_204(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
			{
				if (unk_0xF3140D055686CF79(uParam0->f_3) || unk_0x51374A0BB2871E6E(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -1794415470) != 1 && unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -1794415470) != 0)
				{
					unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_204(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	}
	unk_0xD60DE78AB9B18914(1);
	func_19(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA8010B7497A9230B(1);
		unk_0xE242D0D27B122FAC(1);
	}
	func_205(23, 0);
}

void func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_25278, iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_25278, iParam0);
	}
}

int func_206(int iParam0)
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

void func_207(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xCF686B56FD5328B5(*uParam0))
	{
		*uParam0 = unk_0xF90D4D0A9F2F4A42(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_208(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_101() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_209(unk_0x1141852D07400777(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_209(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2C393A56EDEECDE4((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, iParam0);
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x86F1B61A4BF04972(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 15f);
	}
	unk_0xD60DE78AB9B18914(iParam1);
	func_35(0);
	func_19(1, 1, iParam2, 0);
	unk_0xA8010B7497A9230B(0);
	unk_0xE242D0D27B122FAC(0);
	func_205(23, 1);
}

int func_211(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x1EAB9962ED64CF16(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x9CBE058E2C3ABB72(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_212(int iParam0)
{
	if (func_213() && unk_0x9D40BBF80D8F5E8A() >= iParam0 + 1000)
	{
		unk_0x6A6E764D1DB633C7(500);
		while (!unk_0xAEF17BDE274A1247())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_35(0);
		func_164();
		return 1;
	}
	return 0;
}

int func_213()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_214()
{
	if (func_30())
	{
		unk_0xCA3345CE8849CB88("appInternet");
	}
	if (func_29())
	{
		unk_0xCA3345CE8849CB88("appCamera");
	}
	if (func_37(1))
	{
		func_35(0);
	}
}

void func_215(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x9D40BBF80D8F5E8A() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x9D40BBF80D8F5E8A();
}

void func_216(var uParam0)
{
	var uVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (func_147(uParam0->f_3, 1) > 30f || func_217(uParam0))
			{
				if (unk_0xC47857E5E74EA5AF(uParam0->f_3, -1794415470) == 1 || unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) == 1)
				{
					unk_0x33A90AD8FA327B72(&uVar0);
					unk_0x94026C1D1DB14225(&uVar0);
					unk_0x58F62EDF6111D598(0, uParam0->f_4, 0);
					unk_0xDCF460AE46C9489C(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x33E113E52A91C5C3(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x911ECBCE73F8EC3F(uVar0);
					unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
					func_273(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_217(var uParam0)
{
	if ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 3f && func_380(uParam0, 5) > 15f) || unk_0xD1ED65515DA55794(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x3F916E486684A3A8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x087B4B9B00A33D4D(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 3))
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

int func_219(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xBD6B21D725712BDE(uParam0->f_4, 1);
		iVar0[1] = unk_0xBD6B21D725712BDE(uParam0->f_4, 2);
		iVar0[2] = unk_0xBD6B21D725712BDE(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(iVar0[iVar4]))
			{
				if (unk_0x76B2D234F1895632(iVar0[iVar4]))
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
		if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_220(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 1);
		if (unk_0xD51CFE69539DB6D8(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 2);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 0);
				if (unk_0xD51CFE69539DB6D8(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x25ECA1DD55F6CB7F(iParam0);
	Var0 = { unk_0x61CBEF33034AF6B9(iParam0, unk_0x1141852D07400777(iParam1, 1)) };
	if (unk_0x1B2DC87EFB36DF80(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x1B2DC87EFB36DF80(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_222(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (!unk_0x51AAB57E2FC16B14(uParam0->f_3) && func_147(uParam0->f_3, 1) < fParam2)
		{
			if (!func_133(uParam0, 5))
			{
				func_269(uParam0, 5, 0, 0);
			}
		}
		else if (func_133(uParam0, 5))
		{
			func_131(uParam0, 5, 0);
		}
		if (((func_380(uParam0, 5) > IntToFloat(iParam1) && unk_0xD4F0FC8FFEDE152B(uParam0->f_4) < fParam4) && !unk_0x51AAB57E2FC16B14(uParam0->f_3)) || func_147(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_223(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x56ADDC5BECDDD8A5(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x56ADDC5BECDDD8A5(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x242AD66021ED4052(uParam0->f_4, iVar18) };
		Var6 = { unk_0x61CBEF33034AF6B9(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, Var6) };
	Var3 = { unk_0xBD306D8AFEF4E078(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x25464EB6EAD8ED1B(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x9BEE7E791BC4D38B(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_148(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x7F38A542899D217A((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x1EAB9962ED64CF16(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x9CBE058E2C3ABB72(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 0)
			{
				unk_0x33A90AD8FA327B72(&(uParam0->f_243));
				unk_0x94026C1D1DB14225(&(uParam0->f_243));
				unk_0xDCF460AE46C9489C(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
				unk_0x1A13F6831AEE500F(uParam0->f_243, 1);
				unk_0x911ECBCE73F8EC3F(uParam0->f_243);
				unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x00400F14096FE01D();
			if (uParam0->f_411 != 9)
			{
				if (!func_18(uParam0->f_44, 128))
				{
					func_176(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_224(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xFA2C5C2D054C888E(uParam0->f_3);
			unk_0x6A8BCE61F660B8D0(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x33A90AD8FA327B72(&(uParam0->f_243));
			unk_0x94026C1D1DB14225(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xDCF460AE46C9489C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
			unk_0x911ECBCE73F8EC3F(uParam0->f_243);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
			unk_0x33A90AD8FA327B72(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x8CAD7018AB2D288A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_224(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x63170E828689585A(uParam0, sParam1, uParam2, func_225(iParam3), 0);
}

int func_225(int iParam0)
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

float func_226(var uParam0, int iParam1)
{
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		if (func_134(uParam0))
		{
			return func_148(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_227(var uParam0)
{
	func_158(uParam0, uParam0->f_3);
	if (func_134(uParam0))
	{
		if (func_133(uParam0, 14))
		{
			func_160(uParam0);
			if (unk_0xD11595488376CB53(uParam0->f_10))
			{
				unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
			}
		}
	}
	if (!func_133(uParam0, 9))
	{
		if (unk_0xD11595488376CB53(uParam0->f_8))
		{
			unk_0x95FCF148333C6A88(uParam0->f_8, 0);
			unk_0x1AD7485666C5160C(uParam0->f_8, 0);
		}
		func_269(uParam0, 9, 0, 0);
		func_228("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_228(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 1);
}

void func_229(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_40();
		func_269(uParam0, 16, 4f, 0);
		unk_0x00400F14096FE01D();
	}
}

int func_230(var uParam0, int iParam1)
{
	if (!unk_0x4D15A085E079AB18(2))
	{
		return 0;
	}
	func_236(12);
	if (func_18(uParam0->f_44, 8))
	{
		if (!func_18(uParam0->f_44, 128))
		{
			if (unk_0x5DD29D700F7A48AB(unk_0xE7869D5D7816A9B6()) && !func_18(uParam0->f_44, 256))
			{
				func_54(&(uParam0->f_44), 256);
			}
			if (func_18(uParam0->f_44, 256) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				func_176(uParam0, 135, 1, 0, 1);
				func_54(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_234(uParam0, iParam1))
	{
		if (func_147(uParam0->f_3, 1) < 35f)
		{
			if (!func_18(uParam0->f_44, 8))
			{
				unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
				func_176(uParam0, 133, 1, 0, 1);
				func_54(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xAF437D7C802AB246(uParam0->f_3) || unk_0xF05AC1C00BC1230B(uParam0->f_3)) || func_147(uParam0->f_3, 1) > 400f)
		{
			func_273(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF0295FF51F2D7803(uParam0->f_2, 0);
		unk_0x8100F8AA27EE924B(uParam0->f_4, 1);
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x2EA9D513624CAB16(uParam0->f_4);
			func_232(uParam0);
			func_42(2, 0);
			bLocal_94 = true;
			func_180(&uLocal_90);
			return 1;
		}
		else
		{
			func_273(uParam0, "No Taxi", 21);
			func_231("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_231(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_232(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (func_233())
		{
		}
	}
}

int func_233()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_234(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				iVar1 = unk_0x1B2DC87EFB36DF80(iVar0);
				bVar2 = func_218(iVar0);
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
				if (unk_0x3937C84F74FAABA4(iVar1))
				{
					if (unk_0xBD6B21D725712BDE(iVar0, -1) == unk_0xE7869D5D7816A9B6())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x25ECA1DD55F6CB7F(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_18(uParam0->f_44, 64))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_231("TX_VIP_DMGD", -1);
							if (func_235("TX_VIP_DMGD"))
							{
								func_54(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_18(uParam0->f_44, 32))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_231("TX_VIP_CAR", -1);
							if (func_235("TX_VIP_CAR"))
							{
								func_54(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_18(uParam0->f_44, 16))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_231("TX_VIP_SMALL", -1);
							if (func_235("TX_VIP_SMALL"))
							{
								func_54(&(uParam0->f_44), 16);
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
			func_16(&(uParam0->f_44), 16);
			func_16(&(uParam0->f_44), 64);
			func_16(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_235(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_236(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xA4844394CE04D85D() || unk_0xFD563D1BF81A2CB8())
	{
		uVar0 = iParam0;
		unk_0x52D7AD2E007B9DFC(8, &uVar0, 1, 1);
	}
	else if (unk_0x26A43F8C0E764E33() || unk_0x7ECD3D8283875DD1())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x492EDD75C56D6606(8, &cVar1);
	}
}

void func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_17(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_238()
{
	Local_343.f_0 = 0;
	func_255(32120, 32095, 1);
	func_255(31856, 31833, 1);
	func_255(31772, 31747, 1);
	func_255(31676, 31652, 1);
	func_255(31542, 31521, 1);
	func_255(31468, 31443, 1);
	func_255(31301, 31278, 1);
}

int func_239(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_240(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (func_242(uParam0->f_4))
		{
			func_241(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_242(int iParam0)
{
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF4E8009A18C52112(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xF675ACE4149620B8(iParam0, 0, 40000) || unk_0xF675ACE4149620B8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_244(var uParam0)
{
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
	{
		if (func_245(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_245(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_246(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_241(uParam0, 11);
	return 1;
}

int func_247(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (unk_0xA7D2A868253353BE(uParam0->f_4) && !unk_0x0E9BAAAE8317091B(uParam0->f_4))
		{
			if (!func_133(uParam0, 25))
			{
				func_269(uParam0, 25, 0, 0);
			}
			else if (func_380(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_133(uParam0, 25))
		{
			func_131(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_248(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_249(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (unk_0xFA7BE9A102B98E76(uParam0->f_4))
		{
			if (unk_0xF675ACE4149620B8(uParam0->f_4, 0, 40000) || unk_0xF675ACE4149620B8(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_251(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
		{
			if (unk_0x6D30046757C9C4F9(uParam0->f_4))
			{
				if (func_245(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_253(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (func_254(uParam0->f_4))
		{
			func_241(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF4E8009A18C52112(iParam0) == 0f)
	{
		if (!unk_0xC45A34912542C4EB(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xF675ACE4149620B8(iParam0, 0, 40000) || unk_0xF675ACE4149620B8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_55(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_55(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_273(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_257(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		if ((unk_0xAF437D7C802AB246(uParam0->f_3) || unk_0x76B2D234F1895632(uParam0->f_3)) || unk_0x9DD85FBDD5BC3BF1(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_258(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x73817D396768E4C6(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x73817D396768E4C6(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_259(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_260()
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

int func_261()
{
	if (!unk_0x5053BF6D5604065B(iLocal_839))
	{
		func_215("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_844, 1000);
		return 0;
	}
	if (!unk_0x4A4851D44CDF03C0(uLocal_943))
	{
		return 0;
	}
	if (!func_262(&iLocal_844, 1))
	{
		func_215("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_844, 1000);
		return 0;
	}
	return 1;
}

int func_262(int iParam0, bool bParam1)
{
	if (!unk_0x5053BF6D5604065B(func_15()))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x2917D5E1CB5CE43A("gestures@m@standing@casual"))
		{
			func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x2917D5E1CB5CE43A("oddjobs@taxi@"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("oddjobs@towingcome_here"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("misscommon@response"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x4D15A085E079AB18(2))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_263(var uParam0, int iParam1)
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

int func_264(var uParam0)
{
	if (!unk_0xAF437D7C802AB246(uParam0->f_3))
	{
		uParam0->f_8 = func_265(uParam0->f_3, 0, 0);
		unk_0x27955D546C265CFD(1, 0);
		unk_0x1AD7485666C5160C(uParam0->f_8, 1);
		unk_0x227FC39A4871C64F(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x6A8BCE61F660B8D0(uParam0->f_3, unk_0xE7869D5D7816A9B6(), -1, 2048, 4);
	}
	return 1;
}

int func_265(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_266(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		func_267(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_34(uParam0->f_14, 0);
		unk_0xB0A7E0A62FB61A06(uParam0->f_14, 2f, 0);
		func_32(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x1E9F26C09DC24B58(uParam0->f_11);
		}
		else if (unk_0xD51CFE69539DB6D8(Global_97867.f_225[0]))
		{
			uParam0->f_3 = Global_97867.f_225[0];
			unk_0x20BB4B94CC6DDC9A(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xA7F4088D9A2629CC(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x0814FB03E16A03C1(uParam0->f_3, sParam7);
		unk_0xC31A3F1982C7B12B(uParam0->f_3, 112, 1);
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			unk_0x29627C73E3F24F9A(uParam0->f_3, 250);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 32, 0);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 104, 1);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 177, 1);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 116, 0);
			unk_0x103FCC2BD24292A3("TAXI_Passenger", &(uParam0->f_413));
			unk_0xA9CA101B50B90993(1, uParam0->f_413, joaat("player"));
			unk_0xA9CA101B50B90993(2, uParam0->f_413, joaat("COP"));
			unk_0x690C5239500171FE(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_267(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xF68E25367BD354F6(Param1, 20f, 5f, 0);
}

Vector3 func_268(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_101() };
	switch (iParam0)
	{
		case 0:
			Var0 = { 924.2684f, 50.078f, 79.7647f };
			break;
		
		case 1:
			Var0 = { 916.0502f, 39.3504f, 79.7647f };
			break;
		
		case 2:
			Var0 = { 1971.246f, 3741.517f, 31.3268f };
			break;
		
		case 3:
			Var0 = { 2004.278f, 3752.319f, 31.4156f };
			break;
		
		case 4:
			Var0 = { 1410.891f, 3596.068f, 33.8351f };
			break;
		
		case 5:
			Var0 = { -1383.06f, -972.8339f, 8.014f };
			break;
		
		case 6:
			Var0 = { -1399.197f, -944.1848f, 9.4306f };
			break;
		
		case 7:
			Var0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
		
		case 8:
			Var0 = { -1390.765f, -584.3324f, 29.2306f };
			break;
		
		case 9:
			Var0 = { -1410.223f, -590.6025f, 29.3669f };
			break;
		
		case 10:
			Var0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
	}
	return Var0;
}

void func_269(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_94(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_93(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_94(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_93(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_270()
{
	unk_0x801429C020C467BA(iLocal_839);
	uLocal_943 = func_272();
	func_271(1);
}

void func_271(bool bParam0)
{
	unk_0x801429C020C467BA(func_15());
	if (bParam0)
	{
		unk_0x2B0BB514F9140141("gestures@m@standing@casual");
	}
	unk_0x2B0BB514F9140141("oddjobs@taxi@");
	unk_0x2B0BB514F9140141("oddjobs@towingcome_here");
	unk_0x2B0BB514F9140141("misscommon@response");
	unk_0x36A3D6FBED10EF81("TAXI", 2);
	if (!func_18(Global_99155.f_17711, 128))
	{
		func_54(&(Global_99155.f_17711), 128);
	}
}

var func_272()
{
	return unk_0xE3C796DC28BC3254("MIDSIZED_MESSAGE");
}

void func_273(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_164();
	func_401(2);
	Var0 = { func_288() };
	if ((!unk_0xF6917DE0E003509D(&Var0) && func_166()) && !unk_0x04E7E853E31F41A3(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x00400F14096FE01D();
		unk_0x1D208E4A4E1D4FFE(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (!func_113(uParam0))
			{
				if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_269(uParam0, 3, 0, 0);
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
				func_286(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_113(uParam0))
			{
				if (unk_0x6D30046757C9C4F9(uParam0->f_4))
				{
					func_284(uParam0, 4096, 0);
				}
				else
				{
					func_284(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_286(uParam0, &Var0);
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
				func_286(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_286(uParam0, &Var0);
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_286(uParam0, &Var0);
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_42(8, 0);
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
				func_286(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_284(uParam0, 0, 0);
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_42(8, 0);
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
				func_286(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_286(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_42(8, 0);
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
				func_286(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_283(&Var0);
			func_274(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_286(uParam0, &Var0);
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
					func_286(uParam0, &Var0);
				}
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_42(3, 0);
		}
		func_269(uParam0, 3, 0f, 1);
	}
}

int func_274(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_282(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_275(sParam2, iParam3, 0);
}

int func_275(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xDA09A6E60FE9645E(0);
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
					func_165();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_281(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_280();
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_279();
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_278())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_26())
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_277();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_276();
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
		func_165();
	}
	return 0;
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_277()
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_278()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_279()
{
	if (func_69(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_85();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_280()
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

bool func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_282(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_283(char* sParam0)
{
	switch (func_3(unk_0xE7869D5D7816A9B6()))
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

void func_284(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		unk_0x9BEE7E791BC4D38B(uParam0->f_3, 0);
		unk_0x29FD5B1A4BA65801(uParam0->f_3);
		unk_0x7346544C767CFCBF(uParam0->f_3, 3, 0);
		unk_0x7E3DC7ED30B648F0(uParam0->f_3, 17, 1);
		unk_0xFA2C5C2D054C888E(uParam0->f_3);
		if ((func_129(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_108(uParam0->f_29)) && !bParam2)
		{
			func_285(uParam0);
		}
		else
		{
			unk_0x7346544C767CFCBF(uParam0->f_3, 1024, 1);
			unk_0x7346544C767CFCBF(uParam0->f_3, 131072, 1);
			unk_0x94026C1D1DB14225(&uVar0);
			unk_0xCD7A5BCC47D00FB2(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			else
			{
				unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
			}
			unk_0x732BBAB72712004C(0, 0);
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
		}
		unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
	}
}

void func_285(var uParam0)
{
	var uVar0;
	
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (func_100(func_101(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x151F32CB40BE730C(uParam0->f_3, 84.9058f);
				unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x151F32CB40BE730C(uParam0->f_3, 68.3138f);
				unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
			}
			else
			{
				unk_0x5EE92E5069683596(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xFA2C5C2D054C888E(uParam0->f_3);
			unk_0x33A90AD8FA327B72(&uVar0);
			unk_0x94026C1D1DB14225(&uVar0);
			unk_0xCD7A5BCC47D00FB2(0, 0, 0);
			unk_0x732BBAB72712004C(0, 0);
			unk_0x33E113E52A91C5C3(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x236D757920F01F00(0, 1);
				unk_0x33E113E52A91C5C3(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xF78809EA8A08F2D1(0, 151.7794f, 0);
				unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 20000);
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			else
			{
				unk_0xDCF460AE46C9489C(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x22E8CF9DF233BFE5(uParam0->f_29, 15f, 1))
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
		}
		unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
	}
}

void func_286(var uParam0, char* sParam1)
{
	if (func_287(uParam0))
	{
		func_274(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_287(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (func_148(unk_0xE7869D5D7816A9B6(), uParam0->f_3, 1) < 40f && !unk_0x51AAB57E2FC16B14(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_288()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x465F47E0FBFEFAEE();
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

int func_289(var uParam0)
{
	return uParam0->f_118;
}

void func_290()
{
	func_324(&Local_409);
	if (func_323(&Local_409, &Local_862))
	{
		switch (Local_862.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_322(&Local_409))
					{
						if (func_321("TX_OBJ_DL_DO") || unk_0xD11595488376CB53(Local_409.f_9))
						{
							Local_862.f_27++;
						}
						else if (func_320(&Local_409) != 10)
						{
							func_176(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (func_320(&Local_409) > 10 && func_320(&Local_409) != 16)
				{
					func_54(&(Local_409.f_81), 67108864);
					func_176(&Local_409, 16, 1, 0, 0);
					if (bLocal_861)
					{
					}
				}
				break;
			
			case 2:
				if (func_380(&Local_409, 18) > unk_0x8AF26D6D6BBE6931(8f, 14f))
				{
					if (!func_137(&Local_409))
					{
						func_319(&Local_409, 0);
						Local_862.f_27++;
						if (bLocal_861)
						{
						}
					}
				}
				break;
			}
	}
	func_291(&Local_409, &uLocal_892, &Local_862, bLocal_861);
}

int func_291(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_300(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_133(uParam0, 2))
	{
		if (func_299(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x9D40BBF80D8F5E8A() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_298(uParam0))
				{
					uParam2->f_7 = { func_297(uParam1) };
					func_274(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_166())
				{
					uParam2->f_13 = { func_179() };
					if (unk_0x04E7E853E31F41A3(&(uParam2->f_13), &(uParam2->f_7)))
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
					func_294(uParam1);
					func_269(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_140(uParam0))
				{
					if (func_166())
					{
						func_269(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_293() };
						if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_166())
				{
					uParam2->f_19 = { func_288() };
				}
				else
				{
					func_55(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_294(uParam1);
					func_269(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_133(uParam0, 14) && !func_166()) && !func_140(uParam0)) && func_380(uParam0, 18) > 1f)
				{
					func_269(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_166())
				{
					if (func_380(uParam0, 18) > 1f)
					{
						if (!unk_0xF6917DE0E003509D(&(uParam2->f_1)))
						{
							func_292(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_166())
				{
					func_55(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_294(uParam1);
					func_269(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_292(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_282(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_275(sParam2, iParam4, 0);
}

struct<6> func_293()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x465F47E0FBFEFAEE();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar8 /*6*/])))
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

void func_294(var uParam0)
{
	int iVar0;
	
	iVar0 = func_296(uParam0);
	if (iVar0 > -1)
	{
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_54(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_295(), 24);
	}
}

var func_295()
{
	var uVar0;
	
	return uVar0;
}

int func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_297(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_54(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_298(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_142("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_142("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_142("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_142("TX_OBJ_GYB_DO", 0, 0) || func_142("TAXI_OBJ_GYB", 0, 0)) || func_142("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_142("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_142("TX_OBJ_CYI_DO", 0, 0) || func_142("TAXI_OBJ_CYI_01", 0, 0)) || func_142("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_142("TX_OBJ_GYN_DO", 0, 0) || func_142("TAXI_OBJ_GYN", 0, 0)) || func_142("TAXI_OBJ_GYN_TG", 0, 0)) || func_142("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_142("TAXI_OBJ_CC1", 0, 0) || func_142("TAXI_OBJ_CC2", 0, 0)) || func_142("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_142("TAXI_OBJ_FTC1", 0, 0) || func_142("TAXI_OBJ_FTC2", 0, 0)) || func_142("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_142("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_142("TAXI_OBJ_GETRUN", 0, 0) || func_142("TAXI_OBJ_DRIVE", 0, 0)) || func_142("TAXI_OBJ_RETURN", 0, 0)) || func_142("TAXI_OBJ_POL", 0, 0)) || func_142("TAXI_OBJ_RUNOUT", 0, 0)) || func_142("TAXI_OBJ_POL", 0, 0));
}

int func_299(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_300(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_298(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_133(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_320(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_316(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_166())
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
						func_315(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 2));
				}
				if (func_18(uParam0->f_98, 4))
				{
					func_269(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				func_155(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_380(uParam0, 16) > 1f)
				{
					func_157(1);
					if (uParam0->f_411 == 9)
					{
						func_228("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_228("TAXI_VIP_RETURN", 7500, 1);
					}
					func_269(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
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
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_224(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_380(uParam0, 16) > func_154(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_166()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_320(uParam0))
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
				func_315(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_316(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_274(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_176(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_269(uParam0, 16, 0, 0);
				func_176(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_18(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_318(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_315(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_269(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_228("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_228("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD11595488376CB53(uParam0->f_9))
					{
						uParam0->f_9 = func_311(uParam0->f_17, 1);
					}
					else if (unk_0x86EA9787AE151BBA(uParam0->f_9) == 0)
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x4CF4101B43DF5CB0(uParam0->f_9, uParam0->f_17);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
				}
				func_176(uParam0, 10, 1, 0, 0);
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
				func_178(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_224(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD11595488376CB53(uParam0->f_9))
					{
						uParam0->f_9 = func_311(uParam0->f_17, 1);
					}
					else if (unk_0x86EA9787AE151BBA(uParam0->f_9) == 0)
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x4CF4101B43DF5CB0(uParam0->f_9, uParam0->f_17);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
				}
				func_176(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_310(uParam0, 33554432, Var0, "", 1, 8);
				func_269(uParam0, 16, 0, 0);
				func_176(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_166())
				{
					func_309(uParam0, 0);
					func_54(&(uParam0->f_44), 4);
					func_269(uParam0, 16, 0, 0);
					func_176(uParam0, 13, 0, 0, 0);
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
				func_178(&Var0);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_380(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_178(&Var0);
					}
					func_307(Var0, uParam1);
					func_54(&(uParam0->f_81), 67108864);
					func_269(uParam0, 16, 0, 0);
					func_269(uParam0, 11, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_380(uParam0, 11) > uParam0->f_36)
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
							func_178(&Var0);
						}
					}
					func_307(Var0, uParam1);
					func_269(uParam0, 11, 0, 0);
					func_269(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
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
					func_178(&Var0);
				}
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
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
				func_178(&Var0);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
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
				func_178(&Var0);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_178(&Var0);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				func_54(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 1, 0, 8);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
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
					func_306(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_306(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_307(Var0, uParam1);
				func_316(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 6, 0f, 1);
				func_229(uParam0, 0, 0);
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
					func_306(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_306(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_307(Var0, uParam1);
				func_316(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 6, 0f, 1);
				func_229(uParam0, 0, 0);
				break;
			
			case 12:
				func_228("TAXI_OBJ_GYB", 3500, 1);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_228("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_228("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_228("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_18(uParam0->f_98, 268435456))
				{
					func_228("TAXI_OBJ_CYI_01", 7500, 1);
					func_54(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_178(&Var0);
				func_307(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_178(&Var0);
				func_307(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_178(&Var0);
				func_307(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 33:
				func_228("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_18(uParam0->f_82, 8192))
				{
					if (func_380(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_178(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_307(Var0, uParam1);
						}
						else
						{
							func_315(uParam0, &Var0, 0, 0, 8);
						}
						func_54(&(uParam0->f_82), 8192);
						func_269(uParam0, 16, 0, 0);
						func_269(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_18(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_178(&Var0);
					func_315(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_18(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_178(&Var0);
					func_315(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 46, 1, 0, 0);
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
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_229(uParam0, 0, 0);
				break;
			
			case 139:
				func_228("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_176(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0ADD324BC46177EF(0, 120);
				if (!func_18(uParam0->f_82, 268435456))
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
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0ADD324BC46177EF(0, 100);
				if (!func_18(uParam0->f_82, 268435456))
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
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_228("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_229(uParam0, 0, 0);
				func_176(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_166())
				{
					func_228("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_229(uParam0, 0, 0);
					func_176(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_228("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_229(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_18(uParam0->f_81, 1))
				{
					func_305(uParam0, 1, Var0, "_sick1", 8);
					func_16(&(uParam0->f_81), 2);
				}
				else if (!func_18(uParam0->f_81, 2))
				{
					func_305(uParam0, 2, Var0, "_sick2", 8);
					func_16(&(uParam0->f_81), 1);
				}
				func_316(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_18(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_18(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_54(&(uParam0->f_81), 2097152);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_269(uParam0, 16, 0, 0);
				func_316(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_229(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_18(uParam0->f_81, 4))
				{
					func_305(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_18(uParam0->f_81, 8))
				{
					func_305(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_305(uParam0, 8, Var0, "_turns3", 8);
					func_16(&(uParam0->f_81), 4);
					func_16(&(uParam0->f_81), 8);
				}
				func_316(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_224(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_274(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_318(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_318(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_316(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_18(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 128);
					func_16(&(uParam0->f_83), 256);
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 256);
					func_16(&(uParam0->f_83), 512);
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 512);
					func_16(&(uParam0->f_83), 128);
					func_269(uParam0, 16, 0, 0);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_178(&Var0);
					}
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 1);
					func_16(&(uParam0->f_83), 2);
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_178(&Var0);
					}
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 4);
					}
					else
					{
						func_16(&(uParam0->f_83), 1);
					}
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_178(&Var0);
					}
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 4);
					func_16(&(uParam0->f_83), 1);
					func_269(uParam0, 16, 0, 0);
				}
				func_316(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 4096))
				{
					func_310(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 8192))
				{
					func_310(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_316(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 16384))
				{
					func_310(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 32768))
				{
					func_310(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_316(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_18(uParam0->f_82, 8))
					{
						func_303(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 16))
					{
						func_303(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 32))
					{
						func_303(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_229(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_269(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_18(uParam0->f_81, 65536))
				{
					func_310(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 131072))
				{
					func_310(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_224(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_18(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 8);
					func_16(&(uParam0->f_83), 16);
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 16);
					func_16(&(uParam0->f_83), 32);
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 64);
					}
					else
					{
						func_16(&(uParam0->f_83), 8);
					}
					func_269(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 64);
					func_16(&(uParam0->f_83), 8);
					func_269(uParam0, 16, 0, 0);
				}
				func_316(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_166())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 65));
					func_229(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_166())
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
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 66));
					func_229(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_166())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								func_316(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								func_316(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_318(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_316(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_269(uParam0, 16, 0, 0);
								func_229(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_315(uParam0, &Var0, 0, 0, 8);
									func_269(uParam0, 16, 0, 0);
									func_269(uParam0, 11, 0, 0);
									func_229(uParam0, 0, 0);
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
									func_178(&Var0);
									func_315(uParam0, &Var0, 0, 0, 8);
									func_269(uParam0, 16, 0, 0);
									func_269(uParam0, 11, 0, 0);
									func_229(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_176(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_18(uParam0->f_82, 1))
				{
					func_303(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 2))
				{
					func_303(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 4))
				{
					func_303(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_229(uParam0, 0, 0);
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
				func_318(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_224(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_269(uParam0, 16, 0, 0);
				func_316(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_224(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_302(uParam0, Var0, 8);
				}
				func_316(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_18(uParam0->f_83, 1024))
				{
					func_54(&(uParam0->f_83), 1024);
					func_269(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2048))
				{
					func_54(&(uParam0->f_83), 2048);
					func_269(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4096))
				{
					func_54(&(uParam0->f_83), 4096);
					func_269(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_178(&Var0);
					func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_18(uParam0->f_82, 1024))
				{
					func_303(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_16(&(uParam0->f_82), 2048);
				}
				else if (!func_18(uParam0->f_82, 2048))
				{
					func_303(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 52, 1, 0, 0);
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
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_224(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_304(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_315(uParam0, &Var0, 0, 0, 8);
						func_176(uParam0, 52, 1, 0, 0);
						func_269(uParam0, 16, 0, 0);
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
						func_315(uParam0, &Var0, 0, 0, 8);
						func_269(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_269(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_316(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_269(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
				{
					func_228("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_18(uParam0->f_81, 262144))
				{
					func_310(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_310(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_310(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_316(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_301(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_18(uParam0->f_82, 134217728))
				{
					func_301(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_316(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 100:
				func_228("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_229(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_178(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_178(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
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
					func_178(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_18(uParam0->f_82, 65536))
				{
					if (func_380(uParam0, 11) > uParam0->f_36)
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
						func_178(&Var0);
						func_307(Var0, uParam1);
						func_54(&(uParam0->f_82), 65536);
						func_269(uParam0, 16, 0, 0);
						func_269(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_18(uParam0->f_82, 131072))
				{
					if (func_380(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_178(&Var0);
						func_307(Var0, uParam1);
						func_54(&(uParam0->f_82), 131072);
						func_269(uParam0, 16, 0, 0);
						func_269(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_18(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_54(&(uParam0->f_82), 8388608);
				}
				else if (!func_18(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_54(&(uParam0->f_82), 16777216);
				}
				else if (!func_18(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_54(&(uParam0->f_82), 33554432);
				}
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_178(&Var0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_307(Var0, uParam1);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_176(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_54(&(uParam0->f_81), 2097152);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_178(&Var0);
				func_307(Var0, uParam1);
				func_54(&(uParam0->f_81), 67108864);
				func_269(uParam0, 16, 0, 0);
				func_269(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_18(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_310(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_224(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_176(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_18(uParam0->f_81, 268435456))
				{
					func_310(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_176(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_228("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_229(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_18(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_310(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xAF437D7C802AB246(uParam0->f_3))
						{
							func_224(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_310(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_176(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_228("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_229(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_274(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_269(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_18(uParam0->f_81, 16777216))
				{
					func_310(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 88:
				func_228("TAXI_TIEFLEE", 7500, 1);
				func_229(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_18(uParam0->f_98, 536870912))
				{
					func_228("TAXI_OBJ_CYI_1B", 7500, 1);
					func_54(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_229(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_178(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_229(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_229(uParam0, 0, 0);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_229(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_315(uParam0, &Var0, 1, 0, 8);
				func_176(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_228("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_176(uParam0, 0, 0, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			}
	}
}

void func_301(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_54(&(uParam0->f_82), iParam1);
	func_269(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_178(&Param2);
	}
	func_274(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_302(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_18(uParam0->f_82, 64))
	{
		func_54(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_18(uParam0->f_82, 128))
	{
		func_54(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x0ADD324BC46177EF(1, 3), 24);
	}
	func_317(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_269(uParam0, 16, 0, 0);
}

void func_303(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_54(&(uParam0->f_82), iParam1);
	func_269(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_178(&Param2);
		}
	}
	func_274(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_304(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_54(&(uParam0->f_81), iParam1);
	func_269(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_274(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_306(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_178(sParam2);
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

void func_307(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_308(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_54(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_308(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xF6917DE0E003509D(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_309(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_228("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_228("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_228("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_228("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_228("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_228("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_228("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_228("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_228("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_228("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_228("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_228("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_228("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_310(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_54(&(uParam0->f_81), iParam1);
	func_269(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_178(&Param2);
	}
	func_274(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_311(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_154(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

void func_312(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_269(uParam0, 16, 0, 0);
	func_269(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xAF437D7C802AB246(uParam0->f_3))
	{
		unk_0xDDC391F01DFCE539(uParam0->f_3, &cParam1, func_313(uParam0));
	}
}

char* func_313(var uParam0)
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

char* func_314(var uParam0, int iParam1)
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

int func_315(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_269(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_269(uParam0, 17, 0f, 1);
	}
	func_229(uParam0, iParam2, 0);
	return func_274(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_316(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_18(*uParam2, 2))
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
		if (func_18(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_18(*uParam2, 4))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_18(*uParam2, 512))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_18(*uParam2, 16))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_18(*uParam2, 64))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_18(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_18(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_18(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_18(*uParam2, 8192))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_18(*uParam2, 16384))
		{
			if (func_18(*uParam2, 4194304))
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
		if (func_18(*uParam2, 32768))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_18(*uParam2, 65536))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_18(*uParam2, 131072))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_18(*uParam2, 262144))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_18(*uParam2, 524288))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_18(*uParam2, 1048576))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_18(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_18(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_18(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_18(*uParam2, 67108864))
		{
			if (func_18(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_18(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_18(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_18(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_18(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_317(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_282(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_275(sParam2, iParam4, 0);
}

void func_318(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_178(sParam2);
				}
				else
				{
					func_178(sParam2);
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

void func_319(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_320(var uParam0)
{
	return uParam0->f_416;
}

int func_321(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (func_142(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(var uParam0)
{
	if (func_166())
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
	if (func_140(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_323(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_133(uParam0, 9));
}

void func_324(var uParam0)
{
	if (func_133(uParam0, 17))
	{
		if (!func_133(uParam0, 14))
		{
			if (!func_140(uParam0))
			{
				if (!func_166())
				{
					func_131(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_325(var uParam0)
{
	return uParam0->f_117;
}

void func_326(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
		{
			if (bParam2)
			{
				if (func_380(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_176(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_176(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_269(uParam0, 10, 0f, 1);
				}
			}
			else if (func_380(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_176(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_176(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_269(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_380(uParam0, 10) > 30f)
		{
			if (!func_166())
			{
				if (uParam0->f_112)
				{
					func_176(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_176(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_269(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_18(uParam0->f_100, 64))
	{
		if (!func_95(&(Local_190[5 /*10*/].f_6)))
		{
			func_180(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_349(uParam0))
			{
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_348(uParam0, 1);
				func_346(5, uParam0);
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 1))
	{
		if (!func_95(&(Local_190[0 /*10*/].f_6)))
		{
			func_180(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_344(uParam0))
			{
				func_348(uParam0, 1);
				func_346(0, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2))
	{
		if (!func_95(&(Local_190[1 /*10*/].f_6)))
		{
			func_180(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_343(uParam0))
			{
				func_348(uParam0, 1);
				func_346(1, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2048))
	{
		if (!func_95(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8219941CC4732B36(uParam0->f_4);
				func_180(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_89(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_342(uParam0))
			{
				func_348(uParam0, 1);
				func_346(8, uParam0);
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 128))
	{
		if (!func_95(&(Local_190[6 /*10*/].f_6)))
		{
			func_180(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_341(uParam0))
			{
				func_348(uParam0, 1);
				func_346(6, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32))
	{
		if (!func_95(&(Local_190[4 /*10*/].f_6)))
		{
			func_180(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_340(uParam0))
			{
				func_348(uParam0, 1);
				func_346(4, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 256))
	{
		if (!func_95(&(Local_190[7 /*10*/].f_6)))
		{
			func_180(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_339(uParam0))
			{
				func_346(7, uParam0);
				func_348(uParam0, 1);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8))
	{
		if (!func_95(&(Local_190[9 /*10*/].f_6)))
		{
			func_180(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
		}
		else if (func_89(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_338(uParam0))
			{
				func_348(uParam0, 1);
				func_346(9, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 16384))
	{
		if (!func_95(&(Local_190[13 /*10*/].f_6)))
		{
			func_180(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_332(uParam0))
			{
				func_348(uParam0, 1);
				func_346(13, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32768))
	{
		if (!func_95(&(Local_190[14 /*10*/].f_6)))
		{
			func_180(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_331(uParam0))
			{
				func_348(uParam0, 1);
				func_346(14, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4096))
	{
		if (!func_95(&(Local_190[11 /*10*/].f_6)))
		{
			func_180(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_330(uParam0))
			{
				func_348(uParam0, 1);
				func_346(11, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8192))
	{
		if (!func_95(&(Local_190[12 /*10*/].f_6)))
		{
			func_180(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_89(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_329(uParam0))
			{
				func_348(uParam0, 1);
				func_346(12, uParam0);
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4))
	{
		if (!func_95(&(Local_190[2 /*10*/].f_6)))
		{
			func_328(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_89(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_327(uParam0))
			{
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_348(uParam0, 1);
				func_346(2, uParam0);
				func_345(uParam0);
			}
		}
	}
}

int func_327(var uParam0)
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(uParam0->f_2))
	{
		if ((!unk_0x960D953E3623A78D(uParam0->f_2) && !func_95(&(Local_190[0 /*10*/].f_3))) && !func_95(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_95(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xD4F0FC8FFEDE152B(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_180(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_89(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xD4F0FC8FFEDE152B(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_88(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_88(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_328(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		func_94(uParam0, fParam1);
	}
}

int func_329(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_95(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_95(&(Local_190[12 /*10*/].f_3)))
			{
				func_180(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_88(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_95(&(Local_190[0 /*10*/].f_3))) && !func_95(&(Local_190[1 /*10*/].f_3))) && !func_95(&(Local_190[5 /*10*/].f_3))) && !func_95(&(Local_190[9 /*10*/].f_3))) && !func_95(&(Local_190[7 /*10*/].f_3))) && !func_95(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (unk_0x7F38A542899D217A(Var0.f_0) > 2.5f && !func_95(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_95(&(Local_190[11 /*10*/].f_3)))
			{
				func_180(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_89(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x7F38A542899D217A(uLocal_342) - unk_0x7F38A542899D217A(Var0.f_0)) < 0f)
			{
				func_88(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_89(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_88(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_331(var uParam0)
{
	if (((((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_95(&(Local_190[0 /*10*/].f_3))) && !func_95(&(Local_190[8 /*10*/].f_3))) && !func_95(&(Local_190[5 /*10*/].f_3))) && !func_95(&(Local_190[9 /*10*/].f_3))) && !func_95(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_95(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD51CFE69539DB6D8(uParam0->f_5))
			{
				if ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 15f && func_148(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x76B2D234F1895632(uParam0->f_5) && !unk_0xD12071DBE8393EC8(uParam0->f_5, -1)))
				{
					func_180(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_89(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_148(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x3B2CF3CC08ABF68C(uParam0->f_5))
		{
			func_88(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_89(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_88(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x3B2CF3CC08ABF68C(uParam0->f_5))
		{
			func_88(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_332(var uParam0)
{
	if (((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_95(&(Local_190[9 /*10*/].f_3))) && !func_95(&(Local_190[7 /*10*/].f_3))) && !func_95(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_333(uParam0->f_4) && unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 15f)
		{
			if (!func_95(&(Local_190[13 /*10*/].f_3)))
			{
				func_180(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_88(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_333(int iParam0)
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
	
	unk_0x534DA90AB4BE425C(unk_0x1141852D07400777(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x534DA90AB4BE425C(unk_0x1141852D07400777(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xBDD6CC4AE1223F7F(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_337((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_336(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_334(unk_0x1141852D07400777(iParam0, 1), Var15, Var18, Var21);
}

int func_334(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_337(Param6 - Param3) };
	Var3 = { func_337(Param9 - Param3) };
	fVar6 = func_335(Param0, Var0);
	fVar7 = func_335(Param3, Var0);
	fVar8 = func_335(Param6, Var0);
	fVar9 = func_335(Param0, Var3);
	fVar10 = func_335(Param3, Var3);
	fVar11 = func_335(Param9, Var3);
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

float func_335(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_336(struct<3> Param0, int iParam3)
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

Vector3 func_337(struct<3> Param0)
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

int func_338(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_339(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			if (unk_0xD1ED65515DA55794(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xB24C64718049BB39(uParam0->f_4) <= -145f || unk_0xB24C64718049BB39(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xB24C64718049BB39(uParam0->f_4) <= 35f && unk_0xB24C64718049BB39(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_340(var uParam0)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0x18862BBFC3D2ED50(unk_0x3F80C6638E3A1A90());
		if (iVar0 == 0)
		{
			if (!func_95(&(Local_190[4 /*10*/].f_3)))
			{
				func_180(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_88(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_341(var uParam0)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0x58611A5F6463C46E(unk_0x3F80C6638E3A1A90());
		if (iVar0 == 0)
		{
			if (!func_95(&(Local_190[6 /*10*/].f_3)))
			{
				func_180(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_88(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_342(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0x641FE3AF0CF996E3(uParam0->f_4))
		{
			iVar0 = unk_0x8219941CC4732B36(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x29FD5B1A4BA65801(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_176(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_176(uParam0, 72, 1, 0, 1);
				}
				func_88(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_343(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (unk_0x7F38A542899D217A(Var0.f_0) > 3f && !func_95(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_95(&(Local_190[1 /*10*/].f_3)))
			{
				func_180(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_88(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_344(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x0E9BAAAE8317091B(uParam0->f_4) && unk_0x47EF9ED961F4F559(uParam0->f_4))
		{
			if (!func_95(&(Local_190[0 /*10*/].f_3)))
			{
				func_180(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_88(&(Local_190[0 /*10*/].f_3));
				func_93(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_95(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_93(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_269(uParam0, 10, 0f, 1);
	unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
}

void func_346(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_347(uParam1, iParam0);
	func_88(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_347(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_348(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_349(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 25f)
		{
			if (!func_95(&(Local_190[5 /*10*/].f_3)))
			{
				func_180(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_89(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_88(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_350(var uParam0)
{
	if (!func_134(uParam0))
	{
		if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
		{
		}
		func_146(uParam0, 1);
	}
	else if (func_133(uParam0, 14))
	{
		func_160(uParam0);
		func_149(uParam0, 0);
	}
}

void func_351(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_245(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_245(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_245(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_55(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x9D40BBF80D8F5E8A();
							}
						}
						else
						{
							func_17(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_245(Local_343.f_1[iVar0 /*4*/], 4) && !func_245(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_55(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_273(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_352(var uParam0, var uParam1, bool bParam2)
{
	if (!func_18(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF6917DE0E003509D(&(uParam0->f_124)) && func_166())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_166())
				{
					StringCopy(&(uParam0->f_124), func_295(), 24);
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

void func_353()
{
	if ((unk_0xF2DB717A73826179((func_380(&Local_409, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_357(&Local_409, 27, fLocal_956[0]))
	{
		switch (iLocal_846)
		{
			case 0:
				func_355();
				Local_409.f_39 = fLocal_956[1];
				Local_409.f_40 = fLocal_956[2];
				iLocal_846++;
				break;
			
			case 1:
				func_354(26, 27, Local_409.f_39);
				break;
			}
	}
}

int func_354(int iParam0, int iParam1, float fParam2)
{
	if (func_133(&Local_409, 7))
	{
		if (iLocal_1014 < 22)
		{
			if (!func_166())
			{
				if (func_380(&Local_409, 7) <= (fLocal_964[iLocal_1014] + 6f) && func_380(&Local_409, 7) >= (fLocal_964[iLocal_1014] - 6f))
				{
					if (func_128(Local_409.f_17, 0) <= fLocal_987[iLocal_1014] && iLocal_1015 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1015++;
							func_176(&Local_409, iParam0, 1, 0, 0);
							func_93(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_95(&uLocal_855))
						{
							if (func_89(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1015++;
								func_176(&Local_409, iParam0, 1, 0, 0);
								func_88(&uLocal_855);
								func_93(&uLocal_855);
							}
						}
						return 1;
					}
					else if (func_128(Local_409.f_17, 0) > fLocal_987[iLocal_1014] && iLocal_1016 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1016++;
							func_176(&Local_409, iParam1, 1, 0, 0);
							func_93(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_95(&uLocal_855))
						{
							if (func_89(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1016++;
								func_176(&Local_409, iParam1, 1, 0, 0);
								func_88(&uLocal_855);
								func_93(&uLocal_855);
							}
						}
						return 1;
					}
				}
				else if (func_380(&Local_409, 7) > (fLocal_964[iLocal_1014] + 6f))
				{
					iLocal_1014++;
					return 1;
				}
			}
		}
		else if (func_380(&Local_409, 7) >= fParam2 && func_128(Local_409.f_17, 0) > 50f)
		{
			if (!func_166())
			{
				if (!func_95(&uLocal_858))
				{
					func_93(&uLocal_858);
				}
				else if (func_89(&uLocal_858) > 4f)
				{
					func_176(&Local_409, iParam1, 1, 0, 0);
				}
			}
			else if (func_95(&uLocal_858))
			{
				func_88(&uLocal_858);
			}
			return 1;
		}
	}
	return 0;
}

void func_355()
{
	if (iLocal_955 == 2)
	{
		iLocal_953 = 3;
		iLocal_954 = 4;
		fLocal_956[0] = 210f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 3150f;
		fLocal_956[3] = 105f;
		fLocal_956[4] = 1800f;
		fLocal_956[5] = 150f;
		fLocal_956[6] = 200f;
	}
	else
	{
		iLocal_953 = 9;
		iLocal_954 = 10;
		fLocal_956[0] = 140f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 1780f;
		fLocal_956[3] = 90f;
		fLocal_956[4] = 900f;
		fLocal_956[5] = 120f;
		fLocal_956[6] = 228f;
	}
	fLocal_964[0] = 70.05005f;
	fLocal_987[0] = 3090.417f;
	fLocal_964[1] = 76.25293f;
	fLocal_987[1] = 2929.083f;
	fLocal_964[2] = 82.69312f;
	fLocal_987[2] = 2759.83f;
	fLocal_964[3] = 88.34399f;
	fLocal_987[3] = 2576.061f;
	fLocal_964[4] = 94.97803f;
	fLocal_987[4] = 2350.886f;
	fLocal_964[5] = 100.7981f;
	fLocal_987[5] = 2177.442f;
	fLocal_964[6] = 106.467f;
	fLocal_987[6] = 2016.681f;
	fLocal_964[7] = 112.929f;
	fLocal_987[7] = 1839.417f;
	fLocal_964[8] = 118.4209f;
	fLocal_987[8] = 1689.62f;
	fLocal_964[9] = 124.4241f;
	fLocal_987[9] = 1526.638f;
	fLocal_964[10] = 130.76f;
	fLocal_987[10] = 1356.039f;
	fLocal_964[11] = 136.7f;
	fLocal_987[11] = 1184.013f;
	fLocal_964[12] = 142.573f;
	fLocal_987[12] = 1034.024f;
	fLocal_964[13] = 148.2161f;
	fLocal_987[13] = 894.6225f;
	fLocal_964[14] = 154.4321f;
	fLocal_987[14] = 756.5219f;
	fLocal_964[15] = 160.2749f;
	fLocal_987[15] = 669.364f;
	fLocal_964[16] = 166.25f;
	fLocal_987[16] = 570.2953f;
	fLocal_964[17] = 172.251f;
	fLocal_987[17] = 521.977f;
	fLocal_964[18] = 178.606f;
	fLocal_987[18] = 340.7466f;
	fLocal_964[19] = 184.6809f;
	fLocal_987[19] = 224.3091f;
	fLocal_964[20] = 190.708f;
	fLocal_987[20] = 126.9535f;
	fLocal_964[21] = 193.062f;
	fLocal_987[21] = 81.80421f;
	Local_409.f_23 = { func_268(iLocal_953) };
	Local_409.f_33 = func_356(iLocal_953);
	Local_409.f_26 = { func_268(1) };
	Local_409.f_34 = func_356(1);
	Local_409.f_29 = { 328.6758f, 443.9846f, 144.2298f };
}

float func_356(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 328.48f;
			break;
		
		case 1:
			fVar0 = 328.48f;
			break;
		
		case 2:
			fVar0 = 239.143f;
			break;
		
		case 3:
			fVar0 = 121.2021f;
			break;
		
		case 5:
			fVar0 = 268.6f;
			break;
		
		case 6:
			fVar0 = 218.5f;
			break;
		
		case 8:
			fVar0 = 268.6f;
			break;
		
		case 9:
			fVar0 = 301.6025f;
			break;
	}
	return fVar0;
}

int func_357(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_133(uParam0, 7))
		{
			func_132(uParam0, 23);
			if (func_380(uParam0, 7) > fParam2 && func_380(uParam0, 23) > 35f)
			{
				func_269(uParam0, 23, 0, 0);
				func_176(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_358(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_133(uParam0, 27))
	{
		func_132(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_380(uParam0, 27) > 5f)
	{
		if (func_372(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_269(uParam0, 27, 0, 0);
			func_269(uParam0, 10, 0, 0);
			func_370(uParam0, &uVar0, uParam1);
		}
		func_367(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_359(uParam0);
	}
	if ((((!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()) && (unk_0xCF686B56FD5328B5(*uParam0) && !unk_0x64DEF1DE79E83BEB(*uParam0))) && (unk_0xCF686B56FD5328B5(uParam0->f_1) && !unk_0x64DEF1DE79E83BEB(uParam0->f_1))) && !unk_0x13ACC601BB29A690()) && !func_166())
	{
		if (func_380(uParam0, 26) > 10f)
		{
			func_131(uParam0, 26, 0);
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
		}
	}
	else if (func_133(uParam0, 26))
	{
		func_131(uParam0, 26, 0);
	}
	return 0;
}

void func_359(var uParam0)
{
	if (!func_366(uParam0->f_429))
	{
		uParam0->f_429 = func_191();
		func_364(&(uParam0->f_429), 0, 0, unk_0x0ADD324BC46177EF(4, 7), 0, 0, 0);
	}
	else if (func_360(uParam0->f_429))
	{
		func_273(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_360(int iParam0)
{
	return func_361(func_191(), iParam0);
}

int func_361(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_366(iParam1) || !func_366(iParam0))
	{
		return 1;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
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
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
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
	return 0;
}

int func_362(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_363(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

void func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_196(*uParam0);
	iVar1 = func_198(*uParam0);
	iVar2 = func_363(*uParam0);
	iVar3 = func_185(*uParam0);
	iVar4 = func_182(*uParam0);
	iVar5 = func_362(*uParam0);
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
	iVar6 = func_195(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_195(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_365(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_365(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(uParam0, iParam1);
	func_188(uParam0, iParam2);
	func_190(uParam0, iParam3);
	func_193(uParam0, iParam5);
	func_194(uParam0, iParam4);
	func_192(uParam0, iParam6);
}

int func_366(int iParam0)
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
	iVar0 = func_362(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_182(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_185(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_196(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_198(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_363(iParam0);
	if (iVar5 < 1 || iVar5 > func_195(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_367(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_369()) && !func_134(uParam0)) || ((uParam0->f_411 != 9 && func_234(uParam0, 1)) && !func_134(uParam0)))
		{
			uVar0 = func_368(uParam0->f_4);
			unk_0x52B01BD1A77FF6DE(&uVar0);
			uParam0->f_4 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			unk_0x20BB4B94CC6DDC9A(uParam0->f_4, 1, 0);
			func_160(uParam0);
			func_149(uParam0, 0);
		}
	}
}

var func_368(var uParam0)
{
	return uParam0;
}

int func_369()
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) == unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x7579897B912B3328(iVar0, func_15()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_370(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_371(uParam0, 0, 1))
			{
				func_273(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_371(uParam0, 0, 4))
			{
				func_273(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_371(uParam0, 0, 8))
			{
				func_273(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_371(uParam0, 1, 1))
			{
				func_273(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_371(uParam0, 0, 1))
			{
				func_273(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_18(*uParam2, 2) && func_113(uParam0))
			{
				func_273(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_371(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (!unk_0x51AAB57E2FC16B14(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_176(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_176(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_372(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xE7869D5D7816A9B6();
	if (!unk_0x76B2D234F1895632(iVar0) && !unk_0x76B2D234F1895632(iParam0))
	{
		if (!func_18(*uParam2, 1))
		{
			if (func_378(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_18(*uParam2, 2))
		{
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_18(*uParam2, 4))
		{
			if (func_376(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_18(*uParam2, 8))
		{
			if (func_375(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_18(*uParam2, 128);
		if (bParam4)
		{
			if (func_373(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_18(*uParam2, 16))
		{
			if (func_373(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (iParam7 && unk_0x915685CA559C211B(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x8219941CC4732B36(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x8219941CC4732B36(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(uVar0))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(uVar1))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			if (unk_0x4231F56FA5885AE9(iParam0))
			{
				if (unk_0x9D84FB8703BD7832(iParam0) == unk_0xE7869D5D7816A9B6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x3761EA7F8628B81A(iParam0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xAA6E5BDAAA361C61(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x7048B4332456CDFF(iParam0))
		{
			return 1;
		}
	}
	if (func_374(unk_0xE7869D5D7816A9B6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8E2CF6ACCED3BD0F(iParam0) && func_147(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x76B2D234F1895632(uParam1))
		{
			if (unk_0x915685CA559C211B(iParam1, unk_0xE7869D5D7816A9B6(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5E99B63A819500A5(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xD0C9DCB982CB2D78(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(iParam1, 1)) < 2.5f)
			{
				if (unk_0xFA68268DB708808B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_375(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x72957E5DA83E879F(uParam0, 4))
	{
		if (unk_0xD0C9DCB982CB2D78(uParam0) && !unk_0x678D45DA30B158ED(iParam0))
		{
			if (unk_0x3761EA7F8628B81A(uParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_376(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var0 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	if (unk_0x742CA22C114D89E4(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x8B527A53714D07F2(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72957E5DA83E879F(uParam0, 2))
	{
		if (unk_0xD0C9DCB982CB2D78(uParam0))
		{
			if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x51374A0BB2871E6E(unk_0x10E754B2E0DF2A70(iParam1), 0))
			{
				iVar3 = unk_0xF0295FF51F2D7803(unk_0x10E754B2E0DF2A70(iParam1), 0);
			}
			if (unk_0xA7AC3687807201B4(iParam0) || func_377(iVar3))
			{
				if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xC77E15B3AC49D8CF((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0xBD6B21D725712BDE(iParam0, -1) != 0)
			{
				if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_148(unk_0xE7869D5D7816A9B6(), iParam0, 1) < 40f)
						{
							if (unk_0xAA0DBF98A1199035(unk_0x3F80C6638E3A1A90(), &uVar1))
							{
								if ((unk_0x8C1ED5BB2888BA25(uVar1) && unk_0xE59FAD6B5E1AA42D(iVar1) == iParam0) || (unk_0x41B17741CACC905E(iVar1) && unk_0x10E754B2E0DF2A70(iVar1) == unk_0xBD6B21D725712BDE(iParam0, -1)))
								{
									if ((unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()) && unk_0x6BBF308E0A0F9AD4(0, 24)) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x6BBF308E0A0F9AD4(0, 69)))
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

int func_378(int iParam0, var uParam1)
{
	if (!unk_0x76B2D234F1895632(uParam0))
	{
		if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))
		{
			if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iParam0) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iParam0))
			{
				if (unk_0xFA68268DB708808B(iParam0, unk_0xE7869D5D7816A9B6(), 90f))
				{
					if (func_147(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9D40BBF80D8F5E8A();
						}
						else if ((unk_0x9D40BBF80D8F5E8A() - uParam1->f_1) > uParam1->f_3)
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

void func_379(var uParam0)
{
	if (!func_18(uParam0->f_98, 2))
	{
		if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
		{
			if (func_129(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xC797AB6C3A6482E1(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_54(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_380(var uParam0, int iParam1)
{
	if (!func_95(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_180(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_89(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_381()
{
	func_382(&Local_409);
	func_399();
}

void func_382(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_401(2);
	}
}

int func_383(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_166() && func_380(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
			{
				if (unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_53(uParam0) == 0 || func_245(uParam0->f_85, 32))
					{
						if (!unk_0x6D30046757C9C4F9(uParam0->f_4))
						{
							func_284(uParam0, 4160, 0);
						}
						else
						{
							func_284(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_284(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_284(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_284(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
	{
	}
	return 0;
}

void func_384(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_8))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_8));
	}
	if (unk_0xD11595488376CB53(uParam0->f_9))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_9));
	}
	if (unk_0xD11595488376CB53(uParam0->f_10))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
	}
}

int func_385(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_386()
{
	func_388(&Local_409, 2);
	Local_409.f_410 = 0;
	func_387(&Local_409, 3, 6);
	Local_409.f_6 = 2f;
}

void func_387(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_388(var uParam0, int iParam1)
{
	func_398(1);
	func_162();
	func_6(&(uParam0->f_244));
	func_397(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_18(Global_99155.f_17711, 4))
	{
		func_54(&(Global_99155.f_17711), 4);
	}
	func_392(uParam0);
	func_390(uParam0);
	unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
	uParam0->f_102 = (func_389(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x36A3D6FBED10EF81("TAXI", 2);
}

int func_389(int iParam0)
{
	return Global_99155.f_17711.f_39[iParam0];
}

void func_390(var uParam0)
{
	switch (func_53(uParam0))
	{
		case 0:
			func_391(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_391(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_391(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_391(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_391(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_391(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_391(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_391(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_391(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_391(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_391(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_392(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_396(uParam0, 3);
			func_395(uParam0, 14);
			break;
		
		case 1:
			func_396(uParam0, 14);
			func_395(uParam0, 8);
			break;
		
		case 2:
			func_396(uParam0, 8);
			func_395(uParam0, 7);
			break;
		
		case 3:
			func_396(uParam0, 15);
			func_395(uParam0, 6);
			break;
		
		case 4:
			func_396(uParam0, 0);
			func_395(uParam0, 3);
			break;
		
		case 5:
			func_396(uParam0, 6);
			func_395(uParam0, 7);
			break;
		
		case 6:
			func_396(uParam0, 8);
			func_395(uParam0, 15);
			break;
		
		case 7:
			func_396(uParam0, 8);
			func_395(uParam0, 14);
			break;
		
		case 8:
			func_396(uParam0, 7);
			func_395(uParam0, 15);
			break;
		
		case 9:
			func_396(uParam0, unk_0x0ADD324BC46177EF(0, 17));
			iVar0 = func_394((uParam0->f_418.f_2 + unk_0x0ADD324BC46177EF(1, 17)), 0, 16);
			func_395(uParam0, iVar0);
			func_393(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_393(var uParam0)
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

int func_394(int iParam0, int iParam1, int iParam2)
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

void func_395(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_396(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_397(var uParam0)
{
	uParam0->f_2 = unk_0xE7869D5D7816A9B6();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_101() };
	uParam0->f_17 = { func_101() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_131(uParam0, 32, 0);
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98211, unk_0x959E7FA37C0D0892(), 24);
		Global_98205 = 1;
	}
	else
	{
		StringCopy(&Global_98211, "NULL", 24);
		Global_98205 = 0;
	}
}

void func_399()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 26, 0);
	}
	func_400();
	func_103();
	unk_0x52F20802944F8DCE();
}

void func_400()
{
	unk_0x839E9476E54502A2(iLocal_839);
}

void func_401(int iParam0)
{
	Global_97867.f_22 = iParam0;
}

