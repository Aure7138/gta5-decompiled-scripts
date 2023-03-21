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
	uLocal_77 = unk_0x8FB19B229BCF8953();
	uLocal_78 = unk_0x355073A98A8FF72A();
	Local_83 = { 500f, 500f, 500f };
	iLocal_839 = joaat("g_m_m_chigoon_02");
	iLocal_844 = 1;
	Local_849 = { 344.7458f, 452.1832f, 145.9936f };
	iLocal_955 = 2;
	if (unk_0x76BF814AB8D4CAB8(67))
	{
		func_407(2);
		func_405();
	}
	unk_0x955FF17089AF6072(1);
	func_392();
	while (true)
	{
		if (unk_0x31F12808DC47A9E5(Local_409.f_2))
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
	uParam0->f_2 = unk_0x18F7BE9ACB7D08F4();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x18F7BE9ACB7D08F4());
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x18F7BE9ACB7D08F4());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_391(&Local_409))
	{
		func_390(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_389(&Local_409, 0))
			{
				func_387();
			}
		}
		else if (func_386(&Local_409, 31) > 5f)
		{
			func_407(2);
			func_405();
		}
	}
	else
	{
		func_385(&Local_409);
		func_364(&Local_409, &uLocal_936);
		func_359();
		func_358(&Local_409, &uLocal_845, 0);
		func_357(&Local_409);
		if (Local_409.f_410 == 9)
		{
			func_356(&Local_409);
			func_332(&Local_409, 0, 1);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_331(&Local_409))
			{
				func_296();
			}
			else
			{
				func_279(&Local_409, "Taxi Not Driveable", func_295(&Local_409));
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_276();
				func_275(&Local_409, 16, 4f, 0);
				func_272(&Local_409, func_274(iLocal_955), func_274(iLocal_954), "TaxiKwak", iLocal_839, 180.6f, 1114636288);
				func_270(&Local_409);
				func_269(&Local_409, 1);
				break;
			
			case 1:
				if (func_267())
				{
					func_266();
					func_265(&(Local_840[0 /*3*/]), "TAXI_SC_BN_03", 200);
					func_264(&Local_409, &Local_840);
					Local_409.f_14 = { func_274(iLocal_955) };
					func_244();
					func_243(&Local_409);
					func_269(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_236(&Local_409, 1))
				{
					if (!unk_0x74C2FE037DFC8B4A(Local_409.f_3, 0))
					{
						unk_0xDEA702F2138E0B35(Local_409.f_3, 0, 0, 0, 0);
						unk_0xDEA702F2138E0B35(Local_409.f_3, 2, 1, 0, 0);
						unk_0xDEA702F2138E0B35(Local_409.f_3, 3, 1, 0, 0);
						unk_0xDEA702F2138E0B35(Local_409.f_3, 4, 0, 1, 0);
						unk_0xDEA702F2138E0B35(Local_409.f_3, 8, 1, 1, 0);
					}
					func_235(&Local_409, 1, 0);
					func_269(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_207(&Local_409, 0, 1109393408))
				{
					func_269(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_206(&Local_409))
				{
					Local_409.f_17 = { Local_849 };
					iLocal_933 = func_192();
					Local_934 = { func_187(iLocal_933) };
					Local_409.f_136 = { Local_934 };
					fLocal_847 = 210f;
					func_186(&uLocal_852);
					func_182(&Local_409, 9, 1, 0, 0);
					func_181(&Local_409);
					func_180();
					func_269(&Local_409, 9);
				}
				if (unk_0xC4B84EB67F78C1F0(Local_409.f_4, 0))
				{
					if (!unk_0x88B79D32B518C327(Local_409.f_2, Local_409.f_4, 0))
					{
						func_178(&Local_409);
						func_269(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				func_174();
				if (func_173(&uLocal_852) > (fLocal_847 + 10f))
				{
					if (!func_172())
					{
						func_279(&Local_409, "Player did not hit the deadline", 20);
					}
					else
					{
						func_170();
					}
				}
				if (func_129(&Local_409, func_169(), 7f, 30f))
				{
					if (!func_172())
					{
						func_128(&Local_862, 15, 1);
						unk_0x40D517D991458154(&(Local_409.f_9));
						if (func_386(&Local_409, 7) < fLocal_956[5] || Local_409.f_56 >= Local_409.f_59)
						{
							func_127(&Local_409, 0);
						}
						if (func_173(&uLocal_852) > 210f)
						{
							Local_409.f_56 = 0;
						}
						func_125(&Local_409);
						func_121(&Local_409);
						func_120(&Local_409);
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 26, 1);
						}
						func_269(&Local_409, 27);
					}
					else
					{
						func_170();
					}
				}
				break;
			
			case 27:
				if (func_109(&Local_409, 1))
				{
					func_107(0);
					if (!unk_0x74C2FE037DFC8B4A(Local_409.f_3, 0))
					{
						if (func_105(func_106(), Local_409.f_29, 0))
						{
							unk_0xB88121FF8A34A66F(Local_409.f_3, 84.9058f);
							unk_0x10F31830C95ED2E5(Local_409.f_3, 1);
						}
						else
						{
							unk_0x56C7B20E11B37066(&uLocal_848);
							unk_0xC8BEB049F3BFC0AB(&uLocal_848);
							unk_0x5941F8B2A813BBA8(0, 0, 0);
							unk_0x81D9C52E2A8DA464(0);
							unk_0xA303A4837FBB8DDE(0, Local_409.f_29, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0xA303A4837FBB8DDE(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
							unk_0xAFDA7B8F83B2CA58(uLocal_848);
							unk_0x73F69DD57B7E92A9(Local_409.f_3, uLocal_848);
							unk_0x10F31830C95ED2E5(Local_409.f_3, 1);
						}
					}
					func_269(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_71(&Local_409, &uLocal_943))
				{
					func_9(1, &Local_409, 1);
					func_269(&Local_409, 30);
				}
				break;
			
			case 30:
				func_405();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_45(uParam1);
		if (!unk_0x0FAE113CE72ED842(uParam1->f_3))
		{
			unk_0x764AFC5A3A16C2B0(uParam1->f_3, 317, 1);
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
	func_390(uParam0);
	if (func_172())
	{
		func_41();
	}
	func_39();
	unk_0x08FC50794202A47C();
	unk_0xEFF1F12403847394(1);
	func_36(0);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		unk_0xE58E53D56F33BF17(uParam0->f_4, 0);
		unk_0x84854164769BB257(uParam0->f_4);
		unk_0xF584C5576016093C(uParam0->f_4);
	}
	func_35(uParam0->f_14, 1);
	func_33(uParam0->f_14, 1, 1114636288);
	func_32(&(uParam0->f_244), 3);
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 1);
	if (func_29())
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_19(0, 1, 1, 0);
	unk_0x77B57B2BB7F3EA0A(1);
	unk_0x4A3AD9384F0AAEA0(1);
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		unk_0x9A8BE560E024CAB0(1);
	}
	if (func_18(Global_104551.f_19067, 4))
	{
		func_16(&(Global_104551.f_19067), 4);
		unk_0x116D235ABEF5CE46(func_15(), 0);
	}
	if (bParam1)
	{
		func_14(uParam0);
	}
	func_13(uParam0);
	unk_0x334F1DD67B2EC86A("gestures@m@standing@casual");
	unk_0x334F1DD67B2EC86A("oddjobs@taxi@");
	unk_0x334F1DD67B2EC86A("oddjobs@towingcome_here");
	if (unk_0xA1C84586015AE5DB())
	{
		func_11(uParam0->f_411);
	}
	if (!unk_0xA126D857D0E10968(unk_0x0A91D180DDC7A1B8()))
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0x0690219D4566637A(unk_0xF2DB717A73826179((func_173(&uLocal_90) * 1000f)), 12, 0);
}

void func_11(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_12(iParam0)}, 6);
		if (!unk_0xE0C4A595CD61B7F2(&uVar0))
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
	unk_0x7886AA7E3680A3D4(uParam0->f_51[0]);
}

void func_14(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
			{
				unk_0x456E65E2EDE3381E(uParam0->f_3);
			}
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
			unk_0xFB5F4D76105A21B5(255, uParam0->f_413, joaat("player"));
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xDBE64C5761554FBF(&(uParam0->f_3));
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
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_28(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_27())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_26(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_28(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_26(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_24(unk_0x8CFC7D6E1DA5D304())) && !func_21(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_20())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_24(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_20()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_21(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_22(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_23()
{
	return Global_1312736;
}

int func_24(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return 1;
	}
	if (func_25())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_25()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_26(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_27()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_29()
{
	if (!func_31() && !func_30())
	{
		if (!unk_0x2102D86657DB9A09(unk_0x0A91D180DDC7A1B8()))
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
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
		unk_0x9E1C273D1197BF71(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x52756EBA46F4FA41(Var0, Var3, 1);
		unk_0xEE0B7B5DD68BDE7A();
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
	
	if (!func_105(Param0, func_106(), 0))
	{
		Var0 = { func_34(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_34(Param0, 1f, 30f, 30f, 10f) };
		unk_0x3B4B46A2A779D56E(Var0, Var3, iParam3, 1);
	}
}

void func_36(int iParam0)
{
	if (Global_14615)
	{
		func_37(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_27())
	{
		Global_14453.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_89907[iVar0 /*17*/] && !Global_89907[iVar0 /*17*/].f_1)
		{
			if (Global_89907[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89907[iVar0 /*17*/].f_5 != 88 && Global_89907[iVar0 /*17*/].f_5 != 89) && Global_89907[iVar0 /*17*/].f_5 != 92)
				{
					func_40(Global_89907[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_41()
{
	Global_14622 = 0;
	func_42();
}

void func_42()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_104551.f_19067.f_22[0]++;
			func_44("Fares Completed ++ = ", Global_104551.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104551.f_19067.f_22[1]++;
			func_44("Fares Failed ++ = ", Global_104551.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104551.f_19067.f_22[2]++;
			func_44("Fares Accepted ++ ", Global_104551.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104551.f_19067.f_22[3]++;
			func_44("Fares Expired ++ ", Global_104551.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104551.f_19067.f_22[13]++;
			func_44("Passengers run ++ = ", Global_104551.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104551.f_19067.f_22[14]++;
			func_44("Passenger Forced to Pay ++ = ", Global_104551.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104551.f_19067.f_22[4])
				{
					Global_104551.f_19067.f_22[4] = iParam1;
					func_44("This distance ", iParam1);
					func_44(" is longer than current best", Global_104551.f_19067.f_22[4]);
				}
				else
				{
					func_44("Longest Distance Not Beat ", Global_104551.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104551.f_19067.f_22[5] = (Global_104551.f_19067.f_22[5] + iParam1);
			func_44("Total Distance w/ Passenger = ", Global_104551.f_19067.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_104551.f_19067.f_22[6]++;
			}
			else
			{
				Global_104551.f_19067.f_22[6] = (Global_104551.f_19067.f_22[6] + iParam1);
			}
			func_44("Wanted Levels ++ = ", Global_104551.f_19067.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_104551.f_19067.f_22[7] = (Global_104551.f_19067.f_22[7] + iParam1);
			}
			else
			{
				Global_104551.f_19067.f_22[7]++;
			}
			func_44("Wanted Levels Lost = ", Global_104551.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104551.f_19067.f_22[8]++;
			func_44("Taxis wrecked ++ = ", Global_104551.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104551.f_19067.f_22[9]++;
			func_44("Horn Honked ++ = ", Global_104551.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104551.f_19067.f_22[10] = (Global_104551.f_19067.f_22[10] + iParam1);
			func_44("Total Money Earned = ", Global_104551.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104551.f_19067.f_22[11] = (Global_104551.f_19067.f_22[11] + iParam1);
			func_44("Total Tips Earned = ", Global_104551.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104551.f_19067.f_22[12])
			{
				Global_104551.f_19067.f_22[12] = iParam1;
				func_44("New Highest Tip = ", Global_104551.f_19067.f_22[12]);
			}
			else
			{
				func_44("Highest Tip Not Reached = ", Global_104551.f_19067.f_22[12]);
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
		func_407(1);
		func_57(15, 1);
	}
	func_55(&(Global_104551.f_19067), 1024);
	if (!func_18(Global_104551.f_19067, 64))
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_51(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_50() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_50()
{
	return Global_25233;
}

int func_51(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 78)
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
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_68(&Global_4267379))
	{
		if (func_66(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_59(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
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
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	return (*uParam0)[iParam1] == 78;
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
	func_64(uParam0, (Global_4267378 - 0.5f));
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_64(var uParam0, float fParam1)
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

float func_65(var uParam0)
{
	return uParam0->f_80;
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
	return uParam0->f_79 == 1;
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
	return Global_35859 == iParam0;
}

int func_71(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_172() && func_386(uParam0, 0) > 1f)
			{
				if (func_29())
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				}
				func_104(uParam0);
				func_16(&(Global_104551.f_19067), 4096);
				func_101(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_103(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x929C3CBA660376D5(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_100(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_91(uParam1, 0))
			{
				func_72(uParam0);
				func_275(uParam0, 0, 0, 0);
				func_100(0);
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
		func_73(func_89(), 21, iVar0, 0, 0);
		func_43(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_74(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
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
							func_86(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
					switch (unk_0x088BDDE9EE449CE6())
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
		func_77(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_77(iVar1);
	}
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
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
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_76(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_52(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_79() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_79() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_78(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_81(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_82(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_79() /*12062*/].f_7637.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar1 = func_84(iParam0, iParam1);
	uVar2 = func_83(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_57(27, 1);
	return 1;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_88()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_89()
{
	func_90();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_90()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_4(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_3(unk_0x18F7BE9ACB7D08F4());
			if (func_5(iVar0) && (!func_70(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_5(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

int func_91(var uParam0, int iParam1)
{
	if (!func_99(&(uParam0->f_2)))
	{
		func_97(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 201) || uParam0->f_8)
		{
			if (!func_99(&(uParam0->f_5)))
			{
				func_97(&(uParam0->f_5));
				func_96(uParam0, 1051260355);
			}
		}
		if (func_99(&(uParam0->f_5)))
		{
			if (func_93(&(uParam0->f_5)) > 0.33f)
			{
				func_92(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_93(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_99(&(uParam0->f_5)))
		{
			func_97(&(uParam0->f_5));
			func_96(uParam0, 1051260355);
		}
		else if (func_93(&(uParam0->f_5)) > 0.33f)
		{
			func_92(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_93(var uParam0)
{
	if (func_99(uParam0))
	{
		if (func_95(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_94(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_94(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_95(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

void func_96(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SHARD_ANIM_OUT");
	unk_0x22DD5585E00B80C3(uParam0->f_9);
	unk_0x954263F3D07BEFC2(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_97(var uParam0)
{
	func_98(uParam0, 0f);
}

void func_98(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_94(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_99(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_100(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_101(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, func_102());
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0x70A9E4720D71C2D5(iParam9);
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59(sParam7);
	unk_0x3A12001DBF78DC62(uParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0xBEFD1ED9B6BE5127(uParam6);
	unk_0x3A12001DBF78DC62(uParam5);
	unk_0x3A12001DBF78DC62(iParam4);
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
	func_97(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_102()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
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
	func_43(11, uParam0->f_56);
	func_43(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xB03A1684359C50A1(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_105(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_106()
{
	struct<3> Var0;
	
	return Var0;
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		func_108();
		unk_0xB3CE7CCA48611094(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 0);
		unk_0xB3CE7CCA48611094(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 0);
		unk_0xB3CE7CCA48611094(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 0);
		unk_0xB3CE7CCA48611094(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 0);
	}
	else
	{
		unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0);
		unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0);
	}
}

void func_108()
{
	unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0);
	unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0);
	unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0);
	unk_0xC505EADC48C86B8C(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0);
}

int func_109(var uParam0, bool bParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_119(uParam0) && func_115(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_114(uParam0, 2097152))
				{
					func_110(uParam0);
				}
			}
			else
			{
				func_110(uParam0);
			}
		}
		else if (!func_119(uParam0))
		{
			if (bParam1)
			{
				if (func_114(uParam0, 2097152))
				{
					if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_110(var uParam0)
{
	struct<3> Var0;
	
	if (func_113(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_111(uParam0, Var0);
}

void func_111(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && unk_0x160400EAEE246B4D(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_112(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) < unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) >= unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_112(int iParam0, int iParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (unk_0x160400EAEE246B4D(iParam0, iParam1))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_113(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_114(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_18(uParam0->f_81, iParam1) && !func_172());
	}
	return func_172();
}

int func_115(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_38(1))
			{
				func_36(0);
			}
			if (func_29())
			{
				func_118();
				return 1;
			}
			else if (func_116(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 256);
				}
				else
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 0);
				}
			}
			unk_0x0D984C74D0E76505(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_116(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_117(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

void func_118()
{
	if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	}
}

int func_119(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_120(var uParam0)
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
		func_55(&(uParam0->f_55), 1);
	}
}

void func_121(var uParam0)
{
	func_123();
	unk_0x08FC50794202A47C();
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
		func_122(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_182(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_182(uParam0, 102, 1, 0, 0);
	}
	func_275(uParam0, 16, 4f, 0);
}

void func_122(int iParam0)
{
	Global_103261.f_221 = iParam0;
}

void func_123()
{
	Global_14622 = 0;
	func_124();
}

void func_124()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_125(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_126(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_43(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_43(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_126(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xD2A9C3F486236CC5(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_128(var uParam0, int iParam1, bool bParam2)
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

int func_129(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5()) && !unk_0xBC13F084F3B1B544()) && !unk_0xEC0ECEF2AF3FDA8D()) && !uParam0->f_142)
	{
		if (func_151(uParam0))
		{
			func_150(uParam0, &(uParam0->f_43));
			func_145(uParam0);
			func_144(uParam0);
			func_141(uParam0);
			func_136(uParam0, fParam2, fParam3);
			func_133(uParam0);
			return func_130(uParam0, iParam1);
		}
	}
	return 0;
}

int func_130(var uParam0, int iParam1)
{
	if (func_54(uParam0) == 2)
	{
		if (unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_132(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_131(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
		{
			return func_115(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_131(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
	{
		return func_115(uParam0, 1, iParam1);
	}
	return 0;
}

int func_131(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xED304DF0BE5BEBDD())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bParam0)
		{
			if (unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
				{
					return 0;
				}
			}
		}
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x39B21DBADBAFCF25(iVar0) < 0.95f || unk_0x39B21DBADBAFCF25(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!unk_0x91FFC4C24A972415(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

float func_132(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

void func_133(var uParam0)
{
	float fVar0;
	
	if ((func_119(uParam0) && func_18(uParam0->f_81, 67108864)) && unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
	{
		if ((unk_0x5AFB8ED811F05E4D() - iLocal_97) >= 10000)
		{
			fVar0 = func_134(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x5AFB8ED811F05E4D();
		}
		if (iLocal_96 >= 2 && !func_172())
		{
			func_182(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x5AFB8ED811F05E4D() % 4000) < 50)
		{
			if (!func_119(uParam0))
			{
			}
			if (!func_18(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_134(struct<3> Param0, int iParam3)
{
	return func_135(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), Param0, iParam3);
}

float func_135(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), Param1, iParam4);
}

void func_136(var uParam0, float fParam1, float fParam2)
{
	if (func_119(uParam0) && func_18(uParam0->f_44, 4))
	{
		if ((unk_0xF00EF9585E7FAC26(uParam0->f_4) || unk_0x2A72627520A107B5(uParam0->f_4) < 3f) && func_140(uParam0))
		{
			if (!func_139(uParam0, 2))
			{
				func_138(uParam0, 2);
			}
			else if (func_119(uParam0))
			{
				if (func_386(uParam0, 2) > fParam1 && !func_139(uParam0, 14))
				{
					if (func_31())
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_182(uParam0, 48, 1, 0, 0);
					}
					func_275(uParam0, 2, 0, 0);
					if (func_139(uParam0, 10))
					{
						func_275(uParam0, 10, 0, 0);
					}
				}
				if (!func_139(uParam0, 3))
				{
					func_275(uParam0, 3, 0, 0);
				}
				else if (func_386(uParam0, 3) >= fParam2)
				{
					func_137(uParam0, 3, 0);
					func_279(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_139(uParam0, 2))
			{
				func_137(uParam0, 2, 0);
			}
			if (func_139(uParam0, 3))
			{
				func_137(uParam0, 3, 0);
			}
		}
	}
}

void func_137(var uParam0, int iParam1, bool bParam2)
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
			func_92(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_92(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_138(var uParam0, int iParam1)
{
	func_186(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_139(var uParam0, int iParam1)
{
	return func_99(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_140(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			return 1;
		}
	}
	return 0;
}

void func_141(var uParam0)
{
	if (func_143(uParam0))
	{
		func_142(uParam0);
	}
}

void func_142(var uParam0)
{
	if (unk_0x278E531440F0A177() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFE4CC02D61DA2398();
			func_137(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_386(uParam0, 20) > 3f)
				{
					func_182(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_18(uParam0->f_81, 262144) || !func_18(uParam0->f_81, 1048576))
				{
					if (func_386(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_182(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (func_386(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_182(uParam0, 85, 1, 0, 0);
						func_137(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_386(uParam0, 20) > 8f)
				{
					func_182(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_18(uParam0->f_81, 262144) || func_18(uParam0->f_82, 67108864))
			{
				if (!func_139(uParam0, 22))
				{
					func_138(uParam0, 22);
				}
			}
			if (func_139(uParam0, 22) && func_386(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_18(uParam0->f_81, 1048576))
					{
						func_182(uParam0, 84, 1, 0, 0);
						func_137(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_18(uParam0->f_82, 134217728))
					{
						func_182(uParam0, 85, 1, 0, 0);
						func_137(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_143(var uParam0)
{
	return uParam0->f_120;
}

void func_144(var uParam0)
{
	if (unk_0xB652E7D7A4FA5349(unk_0x0A91D180DDC7A1B8()) && !func_18(uParam0->f_44, 2))
	{
		func_55(&(uParam0->f_44), 2);
	}
	else if (!unk_0xB652E7D7A4FA5349(unk_0x0A91D180DDC7A1B8()) && func_18(uParam0->f_44, 2))
	{
		func_16(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_43(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_182(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_145(var uParam0)
{
	if (!func_18(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					if (func_386(uParam0, 9) > 1f)
					{
						func_149(uParam0, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
						if (uParam0->f_410 != 22)
						{
							func_182(uParam0, 50, 1, 1, 0);
						}
						func_275(uParam0, 9, 0, 0);
						if (unk_0xE769D9B5158D0F11(uParam0->f_9))
						{
							unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
							unk_0x63EECA6600F1090E(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_172() && func_386(uParam0, 9) > 4f)
				{
					func_182(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_148("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_182(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), func_147(uParam0)))
				{
					func_149(uParam0, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
					func_43(6, 0);
				}
				if (!func_146(uParam0))
				{
					if (!unk_0x85FDEF76CDBAD589())
					{
						if (func_386(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_182(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					if (func_148("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x08FC50794202A47C();
					}
					if (unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_172())
				{
					if (uParam0->f_410 != 22)
					{
						func_182(uParam0, 53, 1, 0, 1);
					}
					func_43(7, func_147(uParam0));
					func_149(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_172())
				{
					func_137(uParam0, 9, 0);
					func_275(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_146(var uParam0)
{
	return uParam0->f_110;
}

int func_147(var uParam0)
{
	return uParam0->f_106;
}

bool func_148(char* sParam0, int iParam1, int iParam2)
{
	unk_0x096CAD0A8332D384(sParam0);
	if (iParam1 == 1)
	{
		unk_0xBEFD1ED9B6BE5127(iParam2);
	}
	return unk_0x45CD208BAEE25DF4();
}

void func_149(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_150(var uParam0, var uParam1)
{
	unk_0x205C6BBC993A91EA(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_151(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (!unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1) && !unk_0xDB5E52F2078862CA(uParam0->f_3))
			{
				func_279(uParam0, "Passenger left car.", 9);
			}
			else if (func_165(uParam0))
			{
				if (func_148("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x9A279C737383BE86("TAXI_OBJ_PICKUP");
				}
				if (unk_0xC8AB6A5E6C1E6613())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
				{
				}
				func_152(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_152(var uParam0, bool bParam1)
{
	func_164(uParam0, uParam0->f_3);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_139(uParam0, 14))
			{
				if (func_172())
				{
					func_163(1);
				}
				func_162(uParam0, 11, 1);
				func_155(uParam0, 1);
				func_275(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_119(uParam0))
				{
					if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
					{
					}
					if (unk_0x657B649BA2AD3582(uParam0->f_2, 0))
					{
						if (func_386(uParam0, 15) > 5f)
						{
							func_275(uParam0, 15, 0f, 1);
						}
					}
					if (func_386(uParam0, 14) > 20f)
					{
						func_279(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_386(uParam0, 14) > 20f)
				{
					if (func_153(uParam0->f_4, 1) > 40f)
					{
						func_279(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_279(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_153(int iParam0, int iParam1)
{
	return func_154(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), iParam0, iParam1);
}

float func_154(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

void func_155(var uParam0, bool bParam1)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
				unk_0x63EECA6600F1090E(uParam0->f_8, 0);
				func_161(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
				unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				unk_0x08FC50794202A47C();
				if (func_119(uParam0))
				{
					func_182(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_161(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_156(uParam0, 0, 0);
		}
		else if (unk_0xE769D9B5158D0F11(uParam0->f_10))
		{
			unk_0x40D517D991458154(&(uParam0->f_10));
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
				unk_0x63EECA6600F1090E(uParam0->f_8, 1);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
					unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
					unk_0x63EECA6600F1090E(uParam0->f_9, 1);
				}
			}
			unk_0x08FC50794202A47C();
		}
	}
}

void func_156(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_390(uParam0);
	}
	if (!unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		uParam0->f_10 = func_159(uParam0->f_4, 1, 0);
		unk_0x61C2EC67C90074E5(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x63EECA6600F1090E(uParam0->f_10, 1);
		func_157(uParam0);
		if (bParam2)
		{
			unk_0x08FC50794202A47C();
			func_182(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_157(var uParam0)
{
	func_275(uParam0, 14, 0, 0);
	func_158();
}

void func_158()
{
	int iVar0;
	
	iVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_159(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_160(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_160(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_160(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_160(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_161(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_18(*uParam1, iParam2))
	{
		unk_0x08FC50794202A47C();
		func_182(uParam0, iParam3, 1, 0, 0);
		func_55(uParam1, iParam2);
	}
}

void func_162(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_163(int iParam0)
{
	Global_16767 = iParam0;
}

void func_164(var uParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (!unk_0x0FAE113CE72ED842(iParam1))
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				if ((unk_0x4F653234AAF19B1C(iParam1, joaat("weapon_stungun"), 0) || unk_0x4F653234AAF19B1C(iParam1, 0, 2)) || unk_0x4F653234AAF19B1C(iParam1, 0, 1))
				{
					func_279(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
			}
		}
	}
}

int func_165(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_139(uParam0, 14))
			{
				func_166(uParam0);
			}
			func_155(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_166(var uParam0)
{
	func_137(uParam0, 14, 0);
	func_137(uParam0, 15, 0);
	func_168();
	if (func_167())
	{
		func_163(0);
	}
}

int func_167()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_168()
{
	var uVar0;
	
	uVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

float func_169()
{
	float fVar0;
	
	fVar0 = unk_0x2A72627520A107B5(Local_409.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_170()
{
	Global_14622 = 0;
	func_171();
}

void func_171()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

int func_172()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

float func_173(var uParam0)
{
	if (func_99(uParam0))
	{
		if (func_95(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_94(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_174()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = unk_0xF2DB717A73826179(((fLocal_847 - func_173(&uLocal_852)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1010 = true;
		if (!iLocal_1012)
		{
			unk_0x929C3CBA660376D5(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1012 = 1;
		}
	}
	func_175(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	if (!bLocal_1010)
	{
		if (!iLocal_1011)
		{
			fVar1 = func_93(&uLocal_852);
			if (((((((((((((((fLocal_847 - fVar1) < 1f || (fLocal_847 - fVar1) < 1.5f) || (fLocal_847 - fVar1) < 2f) || (fLocal_847 - fVar1) < 2.5f) || (fLocal_847 - fVar1) < 3f) || (fLocal_847 - fVar1) < 3.5f) || (fLocal_847 - fVar1) < 4f) || (fLocal_847 - fVar1) < 4.5f) || (fLocal_847 - fVar1) < 5f) || (fLocal_847 - fVar1) < 6f) || (fLocal_847 - fVar1) < 7f) || (fLocal_847 - fVar1) < 8f) || (fLocal_847 - fVar1) < 9f) || (fLocal_847 - fVar1) < 10f) || (fLocal_847 - fVar1) < 11f)
			{
				unk_0x929C3CBA660376D5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_1011 = 1;
				iLocal_1013 = unk_0x5AFB8ED811F05E4D();
			}
		}
		else
		{
			fVar2 = func_93(&uLocal_852);
			if (((fLocal_847 - fVar2) < 5.5f && (unk_0x5AFB8ED811F05E4D() - iLocal_1013) > 500) || ((fLocal_847 - fVar2) < 11f && (unk_0x5AFB8ED811F05E4D() - iLocal_1013) > 1000))
			{
				iLocal_1011 = 0;
			}
		}
	}
}

void func_175(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_177(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_176(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_176(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_177(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

void func_178(var uParam0)
{
	func_179(uParam0, 1000);
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xD9FCA20C1C5553F7(uParam0->f_3);
		unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
	}
	func_170();
	func_166(uParam0);
}

void func_179(var uParam0, int iParam1)
{
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xF5F744EF9F4DB21E(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
	}
}

void func_180()
{
	func_55(&(Local_409.f_55), 2);
	func_55(&(Local_409.f_55), 4);
	func_55(&(Local_409.f_55), 16);
	func_55(&(Local_409.f_55), 64);
	func_55(&(Local_409.f_55), 256);
	func_55(&(Local_409.f_55), 512);
	func_55(&(Local_409.f_55), 1024);
	func_55(&(Local_409.f_55), 2048);
	func_55(&(Local_409.f_55), 4096);
	func_55(&(Local_409.f_55), 1073741824);
	func_55(&(Local_409.f_100), 8);
	func_55(&(Local_409.f_100), 2048);
	func_55(&(Local_409.f_100), 256);
	func_55(&uLocal_936, 2);
	func_138(&Local_409, 7);
}

void func_181(var uParam0)
{
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	func_179(uParam0, 1000);
}

void func_182(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_275(uParam0, 16, 4f, 0);
		if (func_183(uParam0))
		{
			func_41();
		}
	}
	func_235(uParam0, iParam2, bParam3);
}

int func_183(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_172())
	{
		Var6 = { func_185() };
		if (!unk_0xFAFFA408239A026B(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_184(&Var0);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
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
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_186(var uParam0)
{
	if (!func_99(uParam0))
	{
		func_97(uParam0);
	}
}

struct<2> func_187(int iParam0)
{
	struct<2> Var0;
	char cVar2[0];
	char cVar3[0];
	
	StringCopy(&cVar2, func_189(func_191(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_188(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_189(func_188(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_188(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

var func_189(int iParam0)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_190(&cVar0);
}

var func_190(char[4] cParam0)
{
	return cParam0;
}

int func_191(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_192()
{
	int iVar0;
	
	iVar0 = func_197();
	func_195(&iVar0, 3);
	func_193(&iVar0, 30);
	return iVar0;
}

void func_193(int iParam0, int iParam1)
{
	if ((func_188(*iParam0) + iParam1) > 59)
	{
		func_194(iParam0, ((func_188(*iParam0) + iParam1) - 60));
		func_195(iParam0, 1);
	}
	else
	{
		func_194(iParam0, (func_188(*iParam0) + iParam1));
	}
}

void func_194(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_195(int iParam0, int iParam1)
{
	if ((func_191(*iParam0) + iParam1) > 23)
	{
		func_196(iParam0, ((func_191(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_196(iParam0, (func_191(*iParam0) + iParam1));
	}
}

void func_196(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_197()
{
	var uVar0;
	
	func_205(&uVar0, unk_0xB093145A4ED05C87());
	func_194(&uVar0, unk_0x4BF279EB036481A0());
	func_196(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_200(&uVar0, unk_0x518720E0DE404FFC());
	func_199(&uVar0, unk_0x5E3E9A684A609866());
	func_198(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_198(var uParam0, int iParam1)
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

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(*uParam0);
	iVar1 = func_202(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_201(int iParam0, int iParam1)
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

var func_202(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_203(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_203(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_204(int iParam0)
{
	return iParam0 & 15;
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_206(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if ((unk_0xDB5E52F2078862CA(uParam0->f_3) && (unk_0x5AFB8ED811F05E4D() - iLocal_89) > 500) || unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_207(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
			{
			}
			func_152(uParam0, 1);
			if (func_29())
			{
				unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
			}
			if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xD9FCA20C1C5553F7(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), 0))
		{
			func_233(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x56C7B20E11B37066(&uVar3);
				unk_0xC8BEB049F3BFC0AB(&uVar3);
				unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
				unk_0xAFDA7B8F83B2CA58(uVar3);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_139(uParam0, 14))
			{
				func_166(uParam0);
				func_155(uParam0, 0);
			}
			if (func_139(uParam0, 9))
			{
				func_137(uParam0, 9, 0);
				unk_0x08FC50794202A47C();
				if (unk_0xE769D9B5158D0F11(uParam0->f_8))
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
					unk_0x63EECA6600F1090E(uParam0->f_8, 1);
				}
			}
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x2A72627520A107B5(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_232(uParam0, uParam0->f_3) > 300f)
				{
					func_279(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 || ((func_154(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 20f && func_132(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_132(uParam0->f_4, uParam0->f_11, 1) <= 28f))
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
								uParam0->f_7 = func_227(uParam0->f_4, uParam0->f_3);
								iVar0 = func_226(uParam0, &iVar1);
								if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
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
										unk_0x5941F8B2A813BBA8(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x5941F8B2A813BBA8(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
											{
												unk_0x5941F8B2A813BBA8(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x267F7A2DFDFFB077(uParam0->f_3);
							unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_140(uParam0))
							{
								unk_0x267F7A2DFDFFB077(uParam0->f_3);
							}
							else if (((unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0) && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 7) && func_232(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x56C7B20E11B37066(&(uParam0->f_243));
								unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
								unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
								unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x700F262B92196AB4(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_154(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_225(uParam0, 1))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_279(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_224(uParam0->f_4))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_279(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_222(uParam0);
						if (func_232(uParam0, uParam0->f_3) < fVar4 || func_29())
						{
							if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_209(uParam0))
								{
									func_208(uParam0);
									iLocal_89 = unk_0x5AFB8ED811F05E4D();
									unk_0x764AFC5A3A16C2B0(uParam0->f_3, 26, 1);
									func_137(uParam0, 5, 0);
									unk_0x49704B3BB3A3F2E7();
									unk_0x205C6BBC993A91EA(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xC1EC3CD3D3C6690B(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_208(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
}

int func_209(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_221("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		func_220();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_218(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_115(uParam0, 0, 1084227584) && func_131(1, 1, 1))
			{
				if (func_225(uParam0, 1))
				{
					iLocal_88 = unk_0x5AFB8ED811F05E4D();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_279(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_227(uParam0->f_4, uParam0->f_3);
				iVar9 = func_226(uParam0, &iVar10);
				if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
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
						unk_0x5941F8B2A813BBA8(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x5941F8B2A813BBA8(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
						{
							unk_0x5941F8B2A813BBA8(iVar9, 0, 4096);
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
			iVar12 = func_217(&(uParam0->f_409), unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0), 1);
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
				func_216(0, 0, 1);
				unk_0xE6B6928D4EED07B1(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 3f, 0);
				unk_0x5E791DD328BCDC42(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 25f, 0);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_123();
				func_235(uParam0, 0, 0);
				Var13 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
				unk_0x990FFD4FB6ADD630(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uParam0->f_3, func_214(uParam0));
				func_213(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xF6910B463A17E809(*uParam0, unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0));
				unk_0xEEBA7A992DA7B65A(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x2C535610856B3F4D(*uParam0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				unk_0x8F2E6C470A0005D4(uParam0->f_3, 0, 0);
				unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_221("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
				{
					unk_0x8D77EFA08616AD64(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xFC8F21F2629FD98F(uParam0->f_4, func_212(uParam0->f_7), 1);
				}
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				unk_0x13AD763DBD687842(*uParam0, 0);
				unk_0x13AD763DBD687842(uParam0->f_1, 0);
				unk_0xA3F41A1968319181(0);
				unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				unk_0x8359CF51370FC969(800);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_123();
				func_235(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5())
			{
				func_210(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			unk_0x13AD763DBD687842(*uParam0, 0);
			unk_0x13AD763DBD687842(uParam0->f_1, 0);
			unk_0xA3F41A1968319181(0);
			unk_0x4CCECEB2EA5D6A82(0, 1065353216);
			func_210(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (unk_0xDB5E52F2078862CA(uParam0->f_3) || unk_0x657B649BA2AD3582(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 0)
				{
					unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_210(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_19(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x77B57B2BB7F3EA0A(1);
		unk_0x4A3AD9384F0AAEA0(1);
	}
	func_211(23, 0);
}

void func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

int func_212(int iParam0)
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

void func_213(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		*uParam0 = unk_0x2F192286DA6346A2(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_214(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_106() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_215(unk_0x761660F5CE986DC4(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_215(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x7F21F40674579303((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_216(int iParam0, int iParam1, int iParam2)
{
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, iParam0);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x65A28A348055034B(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 15f);
	}
	unk_0xC7321FA901D43FA2(iParam1);
	func_36(0);
	func_19(1, 1, iParam2, 0);
	unk_0x77B57B2BB7F3EA0A(0);
	unk_0x4A3AD9384F0AAEA0(0);
	func_211(23, 1);
}

int func_217(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_218(int iParam0)
{
	if (func_219() && unk_0x5AFB8ED811F05E4D() >= iParam0 + 1000)
	{
		unk_0xFF91FEC6E57575E4(500);
		while (!unk_0xEC0ECEF2AF3FDA8D())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_36(0);
		func_170();
		return 1;
	}
	return 0;
}

int func_219()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	if (func_31())
	{
		unk_0x983D86B7F4F283B8("appInternet");
	}
	if (func_30())
	{
		unk_0x983D86B7F4F283B8("appCamera");
	}
	if (func_38(1))
	{
		func_36(0);
	}
}

void func_221(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x5AFB8ED811F05E4D() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x5AFB8ED811F05E4D();
}

void func_222(var uParam0)
{
	var uVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (func_153(uParam0->f_3, 1) > 30f || func_223(uParam0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, -1794415470) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) == 1)
				{
					unk_0x56C7B20E11B37066(&uVar0);
					unk_0xC8BEB049F3BFC0AB(&uVar0);
					unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
					unk_0xB5746603774C4C9D(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xAFDA7B8F83B2CA58(uVar0);
					unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
					func_279(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_223(var uParam0)
{
	if ((unk_0x2A72627520A107B5(uParam0->f_4) > 3f && func_386(uParam0, 5) > 15f) || unk_0xA8CA97883F68F589(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x9308517E4356A987(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xEA44DF1A202A5946(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 3))
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

int func_225(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x31F12808DC47A9E5(iVar0[iVar4]))
			{
				if (unk_0x74C2FE037DFC8B4A(iVar0[iVar4], 0))
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
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_226(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		if (unk_0x31F12808DC47A9E5(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xE4752B503DF3FEC0(iParam0);
	Var0 = { unk_0xCC9FF9C751023D2A(iParam0, unk_0x761660F5CE986DC4(iParam1, 1)) };
	if (unk_0x4F69FBD64CDF125B(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_228(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3) && func_153(uParam0->f_3, 1) < fParam2)
		{
			if (!func_139(uParam0, 5))
			{
				func_275(uParam0, 5, 0, 0);
			}
		}
		else if (func_139(uParam0, 5))
		{
			func_137(uParam0, 5, 0);
		}
		if (((func_386(uParam0, 5) > IntToFloat(iParam1) && unk_0x2A72627520A107B5(uParam0->f_4) < fParam4) && !unk_0xD76674575E7BA743(uParam0->f_3)) || func_153(uParam0->f_3, 1) <= fParam3)
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
	
	iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x79CEF243729F54F9(uParam0->f_4, iVar18) };
		Var6 = { unk_0xCC9FF9C751023D2A(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
	Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x33DBF622738C10E9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_154(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x36E1A96E1D63ED91((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x96011BB04BED3CD0(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xA3F56DCC3ACBDEC5(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0)
			{
				unk_0x56C7B20E11B37066(&(uParam0->f_243));
				unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x8F251305F4CAD788(uParam0->f_243, 1);
				unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x08FC50794202A47C();
			if (uParam0->f_411 != 9)
			{
				if (!func_18(uParam0->f_44, 128))
				{
					func_182(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_230(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x6016A20BFEAEFE11(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x700F262B92196AB4(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_230(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, uParam2, func_231(iParam3), 0);
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
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (func_140(uParam0))
		{
			return func_154(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_233(var uParam0)
{
	func_164(uParam0, uParam0->f_3);
	if (func_140(uParam0))
	{
		if (func_139(uParam0, 14))
		{
			func_166(uParam0);
			if (unk_0xE769D9B5158D0F11(uParam0->f_10))
			{
				unk_0x40D517D991458154(&(uParam0->f_10));
			}
		}
	}
	if (!func_139(uParam0, 9))
	{
		if (unk_0xE769D9B5158D0F11(uParam0->f_8))
		{
			unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
			unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		}
		func_275(uParam0, 9, 0, 0);
		func_234("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_234(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

void func_235(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_41();
		func_275(uParam0, 16, 4f, 0);
		unk_0x08FC50794202A47C();
	}
}

int func_236(var uParam0, int iParam1)
{
	if (!unk_0x9F22E45F3CF7EACA(2))
	{
		return 0;
	}
	func_242(12);
	if (func_18(uParam0->f_44, 8))
	{
		if (!func_18(uParam0->f_44, 128))
		{
			if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()) && !func_18(uParam0->f_44, 256))
			{
				func_55(&(uParam0->f_44), 256);
			}
			if (func_18(uParam0->f_44, 256) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				func_182(uParam0, 135, 1, 0, 1);
				func_55(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_240(uParam0, iParam1))
	{
		if (func_153(uParam0->f_3, 1) < 35f)
		{
			if (!func_18(uParam0->f_44, 8))
			{
				unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
				func_182(uParam0, 133, 1, 0, 1);
				func_55(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x0FAE113CE72ED842(uParam0->f_3) || unk_0x3ECC58F70B51B88E(uParam0->f_3)) || func_153(uParam0->f_3, 1) > 400f)
		{
			func_279(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x5AD687C3474F04B4(uParam0->f_2, 0);
		unk_0xE58E53D56F33BF17(uParam0->f_4, 1);
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x2859D31D18BD568A(uParam0->f_4);
			func_238(uParam0);
			func_43(2, 0);
			bLocal_94 = true;
			func_186(&uLocal_90);
			return 1;
		}
		else
		{
			func_279(uParam0, "No Taxi", 21);
			func_237("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_237(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_238(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (func_239())
		{
		}
	}
}

int func_239()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				iVar1 = unk_0x4F69FBD64CDF125B(iVar0);
				bVar2 = func_224(iVar0);
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
				if (unk_0x881022B41FD53CD6(iVar1))
				{
					if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xE4752B503DF3FEC0(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_18(uParam0->f_44, 64))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_237("TX_VIP_DMGD", -1);
							if (func_241("TX_VIP_DMGD"))
							{
								func_55(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_18(uParam0->f_44, 32))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_237("TX_VIP_CAR", -1);
							if (func_241("TX_VIP_CAR"))
							{
								func_55(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_18(uParam0->f_44, 16))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_237("TX_VIP_SMALL", -1);
							if (func_241("TX_VIP_SMALL"))
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
			func_16(&(uParam0->f_44), 16);
			func_16(&(uParam0->f_44), 64);
			func_16(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_241(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_242(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		uVar0 = iParam0;
		unk_0x7B7CECD66CFA2F8F(8, &uVar0, 1, 1);
	}
	else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x096B0E6C117BD7BF(8, &cVar1);
	}
}

void func_243(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_17(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_244()
{
	Local_343.f_0 = 0;
	func_261(34436, 34411, 1);
	func_261(34172, 34149, 1);
	func_261(34087, 34062, 1);
	func_261(33990, 33966, 1);
	func_261(33856, 33835, 1);
	func_261(33782, 33757, 1);
	func_261(33615, 33592, 1);
}

int func_245(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_246(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_248(uParam0->f_4))
		{
			func_247(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_247(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_248(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_250(var uParam0)
{
	if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		if (func_251(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_247(uParam0, 11);
	return 1;
}

int func_253(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (unk_0xE1F715CDDC50FD7F(uParam0->f_4) && !unk_0x19160618B3657F0E(uParam0->f_4))
		{
			if (!func_139(uParam0, 25))
			{
				func_275(uParam0, 25, 0, 0);
			}
			else if (func_386(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_139(uParam0, 25))
		{
			func_137(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_254(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_255(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0x17D9B02D2AC9770A(uParam0->f_4))
		{
			if (unk_0x08438F954B83E80B(uParam0->f_4, 0, 40000) || unk_0x08438F954B83E80B(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_257(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
			{
				if (func_251(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_258(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_259(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_260(uParam0->f_4))
		{
			func_247(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) == 0f)
	{
		if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_261(int iParam0, int iParam1, bool bParam2)
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

int func_262(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_279(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_263(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if ((unk_0x0FAE113CE72ED842(uParam0->f_3) || unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0)) || unk_0x25A40FAC128F45B0(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_264(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x62148293B793073B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x62148293B793073B(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_265(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_266()
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

int func_267()
{
	if (!unk_0xEDFE27D1AEA0EA7F(iLocal_839))
	{
		func_221("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_844, 1000);
		return 0;
	}
	if (!unk_0x5C716BBF766E1C70(uLocal_943))
	{
		return 0;
	}
	if (!func_268(&iLocal_844, 1))
	{
		func_221("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_844, 1000);
		return 0;
	}
	return 1;
}

int func_268(int iParam0, bool bParam1)
{
	if (!unk_0xEDFE27D1AEA0EA7F(func_15()))
	{
		func_221("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x028356968FDD2DF2("gestures@m@standing@casual"))
		{
			func_221("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@taxi@"))
	{
		func_221("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@towingcome_here"))
	{
		func_221("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("misscommon@response"))
	{
		func_221("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x9F22E45F3CF7EACA(2))
	{
		func_221("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_269(var uParam0, int iParam1)
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

int func_270(var uParam0)
{
	if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
	{
		uParam0->f_8 = func_271(uParam0->f_3, 0, 0);
		unk_0x14172FEAD9C1EA26(1, 0);
		unk_0x63EECA6600F1090E(uParam0->f_8, 1);
		unk_0x61C2EC67C90074E5(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x6016A20BFEAEFE11(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 4);
	}
	return 1;
}

int func_271(int iParam0, bool bParam1, bool bParam2)
{
	return func_159(iParam0, !bParam1, bParam2);
}

int func_272(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		func_273(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_35(uParam0->f_14, 0);
		unk_0xE6B6928D4EED07B1(uParam0->f_14, 2f, 0);
		func_33(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xC0AF3316B9E3D71B(uParam0->f_11);
		}
		else if (unk_0x31F12808DC47A9E5(Global_103261.f_225[0]))
		{
			uParam0->f_3 = Global_103261.f_225[0];
			unk_0x337F2213526139E0(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x364B87C5C64BD100(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x2F51E4FCC3B20959(uParam0->f_3, sParam7);
		unk_0xB05E48165A6F6058(uParam0->f_3, 112, 1);
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			unk_0xC74F690FB603E9C5(uParam0->f_3, 250);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 32, 0);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 104, 1);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 177, 1);
			unk_0x764AFC5A3A16C2B0(uParam0->f_3, 116, 0);
			unk_0x48E76A4B7B58B77A("TAXI_Passenger", &(uParam0->f_413));
			unk_0xFB5F4D76105A21B5(1, uParam0->f_413, joaat("player"));
			unk_0xFB5F4D76105A21B5(2, uParam0->f_413, joaat("COP"));
			unk_0x641E77554763EF06(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x1ABF7AC8776154B1(Param1, 20f, 5f, 0);
}

Vector3 func_274(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_106() };
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

void func_275(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_98(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_97(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_97(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_276()
{
	unk_0x9016574B77A748EE(iLocal_839);
	uLocal_943 = func_278();
	func_277(1);
}

void func_277(bool bParam0)
{
	unk_0x9016574B77A748EE(func_15());
	if (bParam0)
	{
		unk_0x831CD0FBFB26EC7E("gestures@m@standing@casual");
	}
	unk_0x831CD0FBFB26EC7E("oddjobs@taxi@");
	unk_0x831CD0FBFB26EC7E("oddjobs@towingcome_here");
	unk_0x831CD0FBFB26EC7E("misscommon@response");
	unk_0x8E058779F430F4D7("TAXI", 2);
	if (!func_18(Global_104551.f_19067, 128))
	{
		func_55(&(Global_104551.f_19067), 128);
	}
}

var func_278()
{
	return unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
}

void func_279(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_170();
	func_407(2);
	Var0 = { func_294() };
	if ((!unk_0xFAFFA408239A026B(&Var0) && func_172()) && !unk_0x9D39145AD645E383(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x08FC50794202A47C();
		unk_0xEFF1F12403847394(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!func_119(uParam0))
			{
				if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_275(uParam0, 3, 0, 0);
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
				func_292(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
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
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_119(uParam0))
			{
				if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
				{
					func_290(uParam0, 4096, 0);
				}
				else
				{
					func_290(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_292(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_292(uParam0, &Var0);
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
				func_292(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_230(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_292(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_292(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
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
				func_292(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_230(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_290(uParam0, 0, 0);
			func_292(uParam0, &Var0);
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
				func_292(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_292(uParam0, &Var0);
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
				func_292(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_289(&Var0);
			func_280(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_292(uParam0, &Var0);
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
					func_292(uParam0, &Var0);
				}
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_43(3, 0);
		}
		func_275(uParam0, 3, 0f, 1);
	}
}

int func_280(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_281(sParam2, iParam3, 0);
}

int func_281(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_287(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_286();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_285();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_284())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_283();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_282();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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

void func_282()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_283()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_284()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_285()
{
	if (func_70(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_89();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_288(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_289(char* sParam0)
{
	switch (func_3(unk_0x18F7BE9ACB7D08F4()))
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

void func_290(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
		unk_0xA3F48AA4B6323A62(uParam0->f_3);
		unk_0x470C9634914699C0(uParam0->f_3, 3, 0);
		unk_0x273FE09AE985A00A(uParam0->f_3, 17, 1);
		unk_0x267F7A2DFDFFB077(uParam0->f_3);
		if ((func_135(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_113(uParam0->f_29)) && !bParam2)
		{
			func_291(uParam0);
		}
		else
		{
			unk_0x470C9634914699C0(uParam0->f_3, 1024, 1);
			unk_0x470C9634914699C0(uParam0->f_3, 131072, 1);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
			}
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

void func_291(var uParam0)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_105(func_106(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 84.9058f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 68.3138f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x56C7B20E11B37066(&uVar0);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, 0);
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xA303A4837FBB8DDE(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x37B842A4CEC2630C(0, 1);
				unk_0xA303A4837FBB8DDE(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x8A32C8BCE5987E9B(0, 151.7794f, 0);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 20000);
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xB6B12179F5BB7520(uParam0->f_29, 15f, 1))
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

void func_292(var uParam0, char* sParam1)
{
	if (func_293(uParam0))
	{
		func_280(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_293(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_154(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 40f && !unk_0xD76674575E7BA743(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_294()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		if (iVar6 > -1)
		{
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_295(var uParam0)
{
	return uParam0->f_118;
}

void func_296()
{
	func_330(&Local_409);
	if (func_329(&Local_409, &Local_862))
	{
		switch (Local_862.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_328(&Local_409))
					{
						if (func_327("TX_OBJ_DL_DO") || unk_0xE769D9B5158D0F11(Local_409.f_9))
						{
							Local_862.f_27++;
						}
						else if (func_326(&Local_409) != 10)
						{
							func_182(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (func_326(&Local_409) > 10 && func_326(&Local_409) != 16)
				{
					func_55(&(Local_409.f_81), 67108864);
					func_182(&Local_409, 16, 1, 0, 0);
					if (bLocal_861)
					{
					}
				}
				break;
			
			case 2:
				if (func_386(&Local_409, 18) > unk_0x3D81861E1A1652A9(8f, 14f))
				{
					if (!func_143(&Local_409))
					{
						func_325(&Local_409, 0);
						Local_862.f_27++;
						if (bLocal_861)
						{
						}
					}
				}
				break;
			}
	}
	func_297(&Local_409, &uLocal_892, &Local_862, bLocal_861);
}

int func_297(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_306(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_139(uParam0, 2))
	{
		if (func_305(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x5AFB8ED811F05E4D() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_304(uParam0))
				{
					uParam2->f_7 = { func_303(uParam1) };
					func_280(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_172())
				{
					uParam2->f_13 = { func_185() };
					if (unk_0x9D39145AD645E383(&(uParam2->f_13), &(uParam2->f_7)))
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
					func_300(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_146(uParam0))
				{
					if (func_172())
					{
						func_275(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_299() };
						if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_172())
				{
					uParam2->f_19 = { func_294() };
				}
				else
				{
					func_56(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_300(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_139(uParam0, 14) && !func_172()) && !func_146(uParam0)) && func_386(uParam0, 18) > 1f)
				{
					func_275(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_172())
				{
					if (func_386(uParam0, 18) > 1f)
					{
						if (!unk_0xFAFFA408239A026B(&(uParam2->f_1)))
						{
							func_298(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_172())
				{
					func_56(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_300(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_298(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_281(sParam2, iParam4, 0);
}

struct<6> func_299()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar7 /*6*/])))
			{
				return Global_14624[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar8 /*6*/])))
					{
						return Global_14624[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_300(var uParam0)
{
	int iVar0;
	
	iVar0 = func_302(uParam0);
	if (iVar0 > -1)
	{
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_55(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_301(), 24);
	}
}

var func_301()
{
	var uVar0;
	
	return uVar0;
}

int func_302(var uParam0)
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

struct<6> func_303(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_55(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_304(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_148("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_148("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_148("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_148("TX_OBJ_GYB_DO", 0, 0) || func_148("TAXI_OBJ_GYB", 0, 0)) || func_148("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_148("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_148("TX_OBJ_CYI_DO", 0, 0) || func_148("TAXI_OBJ_CYI_01", 0, 0)) || func_148("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_148("TX_OBJ_GYN_DO", 0, 0) || func_148("TAXI_OBJ_GYN", 0, 0)) || func_148("TAXI_OBJ_GYN_TG", 0, 0)) || func_148("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_148("TAXI_OBJ_CC1", 0, 0) || func_148("TAXI_OBJ_CC2", 0, 0)) || func_148("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_148("TAXI_OBJ_FTC1", 0, 0) || func_148("TAXI_OBJ_FTC2", 0, 0)) || func_148("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_148("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_148("TAXI_OBJ_GETRUN", 0, 0) || func_148("TAXI_OBJ_DRIVE", 0, 0)) || func_148("TAXI_OBJ_RETURN", 0, 0)) || func_148("TAXI_OBJ_POL", 0, 0)) || func_148("TAXI_OBJ_RUNOUT", 0, 0)) || func_148("TAXI_OBJ_POL", 0, 0));
}

int func_305(var uParam0)
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

void func_306(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_304(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_139(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_326(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_322(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_172())
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
						func_321(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_318(uParam0, Var0, func_320(uParam0, 2));
				}
				if (func_18(uParam0->f_98, 4))
				{
					func_275(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				func_161(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_386(uParam0, 16) > 1f)
				{
					func_163(1);
					if (uParam0->f_411 == 9)
					{
						func_234("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_234("TAXI_VIP_RETURN", 7500, 1);
					}
					func_275(uParam0, 16, 0, 0);
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
					func_321(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_386(uParam0, 16) > func_160(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_172()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_326(uParam0))
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
				func_321(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_322(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_280(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_182(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_275(uParam0, 16, 0, 0);
				func_182(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_18(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_324(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_321(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_275(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_275(uParam0, 16, 0, 0);
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
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_317(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
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
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_230(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_317(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
				}
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_316(uParam0, 33554432, Var0, "", 1, 8);
				func_275(uParam0, 16, 0, 0);
				func_182(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_172())
				{
					func_315(uParam0, 0);
					func_55(&(uParam0->f_44), 4);
					func_275(uParam0, 16, 0, 0);
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
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_386(uParam0, 11) > uParam0->f_36)
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
					func_313(Var0, uParam1);
					func_55(&(uParam0->f_81), 67108864);
					func_275(uParam0, 16, 0, 0);
					func_275(uParam0, 11, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_386(uParam0, 11) > uParam0->f_36)
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
					func_313(Var0, uParam1);
					func_275(uParam0, 11, 0, 0);
					func_275(uParam0, 16, 0, 0);
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
					func_184(&Var0);
				}
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
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
				func_184(&Var0);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
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
				func_184(&Var0);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_184(&Var0);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				func_55(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 1, 0, 8);
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
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
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
					func_312(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_312(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_313(Var0, uParam1);
				func_322(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 6, 0f, 1);
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
					func_312(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_312(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_313(Var0, uParam1);
				func_322(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 6, 0f, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 12:
				func_234("TAXI_OBJ_GYB", 3500, 1);
				func_275(uParam0, 16, 0, 0);
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
				func_275(uParam0, 16, 0, 0);
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
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_18(uParam0->f_98, 268435456))
				{
					func_234("TAXI_OBJ_CYI_01", 7500, 1);
					func_55(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_184(&Var0);
				func_313(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_184(&Var0);
				func_313(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_184(&Var0);
				func_313(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 33:
				func_234("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_18(uParam0->f_82, 8192))
				{
					if (func_386(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_184(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_313(Var0, uParam1);
						}
						else
						{
							func_321(uParam0, &Var0, 0, 0, 8);
						}
						func_55(&(uParam0->f_82), 8192);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_18(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_184(&Var0);
					func_321(uParam0, &Var0, 0, 0, 8);
					func_55(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_18(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_184(&Var0);
					func_321(uParam0, &Var0, 0, 0, 8);
					func_55(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
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
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_235(uParam0, 0, 0);
				break;
			
			case 139:
				func_234("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_182(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 120);
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
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 100);
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
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_234("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_235(uParam0, 0, 0);
				func_182(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_172())
				{
					func_234("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_235(uParam0, 0, 0);
					func_182(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_234("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_235(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_18(uParam0->f_81, 1))
				{
					func_311(uParam0, 1, Var0, "_sick1", 8);
					func_16(&(uParam0->f_81), 2);
				}
				else if (!func_18(uParam0->f_81, 2))
				{
					func_311(uParam0, 2, Var0, "_sick2", 8);
					func_16(&(uParam0->f_81), 1);
				}
				func_322(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
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
				func_55(&(uParam0->f_81), 2097152);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_322(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_322(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_322(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_322(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_18(uParam0->f_81, 4))
				{
					func_311(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_18(uParam0->f_81, 8))
				{
					func_311(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_311(uParam0, 8, Var0, "_turns3", 8);
					func_16(&(uParam0->f_81), 4);
					func_16(&(uParam0->f_81), 8);
				}
				func_322(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_310(uParam0))
				{
					func_318(uParam0, Var0, func_320(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_324(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_280(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_324(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_324(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_322(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_18(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 128);
					func_16(&(uParam0->f_83), 256);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 256);
					func_16(&(uParam0->f_83), 512);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 512);
					func_16(&(uParam0->f_83), 128);
					func_275(uParam0, 16, 0, 0);
				}
				func_235(uParam0, 0, 0);
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
						func_184(&Var0);
					}
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 1);
					func_16(&(uParam0->f_83), 2);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_184(&Var0);
					}
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 4);
					}
					else
					{
						func_16(&(uParam0->f_83), 1);
					}
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_184(&Var0);
					}
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 4);
					func_16(&(uParam0->f_83), 1);
					func_275(uParam0, 16, 0, 0);
				}
				func_322(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 4096))
				{
					func_316(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 8192))
				{
					func_316(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_322(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 16384))
				{
					func_316(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 32768))
				{
					func_316(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_322(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_18(uParam0->f_82, 8))
					{
						func_309(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 16))
					{
						func_309(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 32))
					{
						func_309(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_322(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_235(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_324(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_322(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_275(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_322(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_322(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_18(uParam0->f_81, 65536))
				{
					func_316(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 131072))
				{
					func_316(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_310(uParam0))
				{
					func_318(uParam0, Var0, func_320(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_18(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 8);
					func_16(&(uParam0->f_83), 16);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 16);
					func_16(&(uParam0->f_83), 32);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 64);
					}
					else
					{
						func_16(&(uParam0->f_83), 8);
					}
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_55(&(uParam0->f_83), 64);
					func_16(&(uParam0->f_83), 8);
					func_275(uParam0, 16, 0, 0);
				}
				func_322(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_172())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_321(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_318(uParam0, Var0, func_320(uParam0, 65));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_172())
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
					func_321(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_318(uParam0, Var0, func_320(uParam0, 66));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_172())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								func_322(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								func_322(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_324(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_322(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_275(uParam0, 16, 0, 0);
								func_235(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_321(uParam0, &Var0, 0, 0, 8);
									func_275(uParam0, 16, 0, 0);
									func_275(uParam0, 11, 0, 0);
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
									func_184(&Var0);
									func_321(uParam0, &Var0, 0, 0, 8);
									func_275(uParam0, 16, 0, 0);
									func_275(uParam0, 11, 0, 0);
									func_235(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_321(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_182(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_322(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_18(uParam0->f_82, 1))
				{
					func_309(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 2))
				{
					func_309(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 4))
				{
					func_309(uParam0, 4, Var0, "_close3", 8, 0);
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
				func_324(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_275(uParam0, 16, 0, 0);
				func_322(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_310(uParam0))
				{
					func_318(uParam0, Var0, func_320(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_230(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_308(uParam0, Var0, 8);
				}
				func_322(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_18(uParam0->f_83, 1024))
				{
					func_55(&(uParam0->f_83), 1024);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2048))
				{
					func_55(&(uParam0->f_83), 2048);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4096))
				{
					func_55(&(uParam0->f_83), 4096);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_184(&Var0);
					func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_18(uParam0->f_82, 1024))
				{
					func_309(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_16(&(uParam0->f_82), 2048);
				}
				else if (!func_18(uParam0->f_82, 2048))
				{
					func_309(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_322(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
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
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_230(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_310(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_321(uParam0, &Var0, 0, 0, 8);
						func_182(uParam0, 52, 1, 0, 0);
						func_275(uParam0, 16, 0, 0);
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
						func_321(uParam0, &Var0, 0, 0, 8);
						func_275(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_324(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_275(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_322(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_275(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					func_234("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_18(uParam0->f_81, 262144))
				{
					func_316(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_316(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_316(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_322(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_307(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_18(uParam0->f_82, 134217728))
				{
					func_307(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_322(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
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
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_184(&Var0);
				}
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_184(&Var0);
				}
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_321(uParam0, &Var0, 0, 0, 8);
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
				func_55(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_18(uParam0->f_82, 65536))
				{
					if (func_386(uParam0, 11) > uParam0->f_36)
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
						func_313(Var0, uParam1);
						func_55(&(uParam0->f_82), 65536);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_18(uParam0->f_82, 131072))
				{
					if (func_386(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_184(&Var0);
						func_313(Var0, uParam1);
						func_55(&(uParam0->f_82), 131072);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_18(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_55(&(uParam0->f_82), 8388608);
				}
				else if (!func_18(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_55(&(uParam0->f_82), 16777216);
				}
				else if (!func_18(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_55(&(uParam0->f_82), 33554432);
				}
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_324(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_184(&Var0);
					func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_321(uParam0, &Var0, 0, 0, 8);
				}
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_313(Var0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_324(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_323(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				func_182(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_55(&(uParam0->f_81), 2097152);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_184(&Var0);
				func_313(Var0, uParam1);
				func_55(&(uParam0->f_81), 67108864);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_18(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_316(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_230(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_182(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_18(uParam0->f_81, 268435456))
				{
					func_316(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_182(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_234("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_235(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_18(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_316(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
						{
							func_230(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_316(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_182(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_234("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_235(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_280(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_18(uParam0->f_81, 16777216))
				{
					func_316(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 88:
				func_234("TAXI_TIEFLEE", 7500, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_18(uParam0->f_98, 536870912))
				{
					func_234("TAXI_OBJ_CYI_1B", 7500, 1);
					func_55(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_235(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_184(&Var0);
				func_321(uParam0, &Var0, 0, 0, 8);
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
				func_321(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_321(uParam0, &Var0, 0, 0, 8);
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
				func_321(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_321(uParam0, &Var0, 1, 0, 8);
				func_182(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_234("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_182(uParam0, 0, 0, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			}
	}
}

void func_307(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_55(&(uParam0->f_82), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_184(&Param2);
	}
	func_280(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_308(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_18(uParam0->f_82, 64))
	{
		func_55(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_18(uParam0->f_82, 128))
	{
		func_55(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x61E9B3BFA06B017B(1, 3), 24);
	}
	func_323(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_275(uParam0, 16, 0, 0);
}

void func_309(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_55(&(uParam0->f_82), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_184(&Param2);
		}
	}
	func_280(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_310(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_311(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_55(&(uParam0->f_81), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_280(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_251(*uParam0, iVar1))
		{
			func_56(uParam0, iVar1);
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

void func_313(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_314(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_55(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_314(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xFAFFA408239A026B(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_315(var uParam0, bool bParam1)
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

void func_316(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_55(&(uParam0->f_81), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_184(&Param2);
	}
	func_280(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_317(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_160(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

void func_318(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_275(uParam0, 16, 0, 0);
	func_275(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
	{
		unk_0x410B23415DE0EFFE(uParam0->f_3, &cParam1, func_319(uParam0));
	}
}

char* func_319(var uParam0)
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

char* func_320(var uParam0, int iParam1)
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

int func_321(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_275(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_275(uParam0, 17, 0f, 1);
	}
	func_235(uParam0, iParam2, 0);
	return func_280(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_322(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_323(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_281(sParam2, iParam4, 0);
}

void func_324(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_251(*uParam0, iVar1))
		{
			func_56(uParam0, iVar1);
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

void func_325(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_326(var uParam0)
{
	return uParam0->f_416;
}

int func_327(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (func_148(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(var uParam0)
{
	if (func_172())
	{
		return 1;
	}
	if (func_139(uParam0, 17))
	{
		return 1;
	}
	if (func_139(uParam0, 14))
	{
		return 1;
	}
	if (func_146(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_329(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_139(uParam0, 9));
}

void func_330(var uParam0)
{
	if (func_139(uParam0, 17))
	{
		if (!func_139(uParam0, 14))
		{
			if (!func_146(uParam0))
			{
				if (!func_172())
				{
					func_137(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_331(var uParam0)
{
	return uParam0->f_117;
}

void func_332(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
		{
			if (bParam2)
			{
				if (func_386(uParam0, 10) > (20f + 10f))
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
					func_275(uParam0, 10, 0f, 1);
				}
			}
			else if (func_386(uParam0, 10) > 20f)
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
				func_275(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_386(uParam0, 10) > 30f)
		{
			if (!func_172())
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
				func_275(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_18(uParam0->f_100, 64))
	{
		if (!func_99(&(Local_190[5 /*10*/].f_6)))
		{
			func_186(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_355(uParam0))
			{
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_354(uParam0, 1);
				func_352(5, uParam0);
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 1))
	{
		if (!func_99(&(Local_190[0 /*10*/].f_6)))
		{
			func_186(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_350(uParam0))
			{
				func_354(uParam0, 1);
				func_352(0, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2))
	{
		if (!func_99(&(Local_190[1 /*10*/].f_6)))
		{
			func_186(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_349(uParam0))
			{
				func_354(uParam0, 1);
				func_352(1, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2048))
	{
		if (!func_99(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x0A088F357EF627CA(uParam0->f_4);
				func_186(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_93(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_348(uParam0))
			{
				func_354(uParam0, 1);
				func_352(8, uParam0);
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 128))
	{
		if (!func_99(&(Local_190[6 /*10*/].f_6)))
		{
			func_186(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_347(uParam0))
			{
				func_354(uParam0, 1);
				func_352(6, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32))
	{
		if (!func_99(&(Local_190[4 /*10*/].f_6)))
		{
			func_186(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_346(uParam0))
			{
				func_354(uParam0, 1);
				func_352(4, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 256))
	{
		if (!func_99(&(Local_190[7 /*10*/].f_6)))
		{
			func_186(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_345(uParam0))
			{
				func_352(7, uParam0);
				func_354(uParam0, 1);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8))
	{
		if (!func_99(&(Local_190[9 /*10*/].f_6)))
		{
			func_186(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
		}
		else if (func_93(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_344(uParam0))
			{
				func_354(uParam0, 1);
				func_352(9, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 16384))
	{
		if (!func_99(&(Local_190[13 /*10*/].f_6)))
		{
			func_186(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_338(uParam0))
			{
				func_354(uParam0, 1);
				func_352(13, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32768))
	{
		if (!func_99(&(Local_190[14 /*10*/].f_6)))
		{
			func_186(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_337(uParam0))
			{
				func_354(uParam0, 1);
				func_352(14, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4096))
	{
		if (!func_99(&(Local_190[11 /*10*/].f_6)))
		{
			func_186(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_336(uParam0))
			{
				func_354(uParam0, 1);
				func_352(11, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8192))
	{
		if (!func_99(&(Local_190[12 /*10*/].f_6)))
		{
			func_186(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_335(uParam0))
			{
				func_354(uParam0, 1);
				func_352(12, uParam0);
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_351(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4))
	{
		if (!func_99(&(Local_190[2 /*10*/].f_6)))
		{
			func_334(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_93(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_333(uParam0))
			{
				if (uParam0->f_113)
				{
					func_182(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_182(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_354(uParam0, 1);
				func_352(2, uParam0);
				func_351(uParam0);
			}
		}
	}
}

int func_333(var uParam0)
{
	float fVar0;
	
	if (!unk_0x0FAE113CE72ED842(uParam0->f_2))
	{
		if ((!unk_0x647522908459DE3C(uParam0->f_2) && !func_99(&(Local_190[0 /*10*/].f_3))) && !func_99(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_99(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_186(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_93(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_92(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_92(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_334(var uParam0, float fParam1)
{
	if (!func_99(uParam0))
	{
		func_98(uParam0, fParam1);
	}
}

int func_335(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_99(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_99(&(Local_190[12 /*10*/].f_3)))
			{
				func_186(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_92(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_336(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_99(&(Local_190[0 /*10*/].f_3))) && !func_99(&(Local_190[1 /*10*/].f_3))) && !func_99(&(Local_190[5 /*10*/].f_3))) && !func_99(&(Local_190[9 /*10*/].f_3))) && !func_99(&(Local_190[7 /*10*/].f_3))) && !func_99(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 2.5f && !func_99(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_99(&(Local_190[11 /*10*/].f_3)))
			{
				func_186(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_93(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x36E1A96E1D63ED91(uLocal_342) - unk_0x36E1A96E1D63ED91(Var0.f_0)) < 0f)
			{
				func_92(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_93(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_92(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_337(var uParam0)
{
	if (((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_99(&(Local_190[0 /*10*/].f_3))) && !func_99(&(Local_190[8 /*10*/].f_3))) && !func_99(&(Local_190[5 /*10*/].f_3))) && !func_99(&(Local_190[9 /*10*/].f_3))) && !func_99(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_99(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x31F12808DC47A9E5(uParam0->f_5))
			{
				if ((unk_0x2A72627520A107B5(uParam0->f_4) > 15f && func_154(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x74C2FE037DFC8B4A(uParam0->f_5, 0) && !unk_0x74B8CA477787A438(uParam0->f_5, -1, 0)))
				{
					func_186(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_93(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_154(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_93(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_338(var uParam0)
{
	if (((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_99(&(Local_190[9 /*10*/].f_3))) && !func_99(&(Local_190[7 /*10*/].f_3))) && !func_99(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_339(uParam0->f_4) && unk_0x2A72627520A107B5(uParam0->f_4) > 15f)
		{
			if (!func_99(&(Local_190[13 /*10*/].f_3)))
			{
				func_186(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_92(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_339(int iParam0)
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
	
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x476830DD71AB24D5(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_343((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_342(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_340(unk_0x761660F5CE986DC4(iParam0, 1), Var15, Var18, Var21);
}

int func_340(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_343(Param6 - Param3) };
	Var3 = { func_343(Param9 - Param3) };
	fVar6 = func_341(Param0, Var0);
	fVar7 = func_341(Param3, Var0);
	fVar8 = func_341(Param6, Var0);
	fVar9 = func_341(Param0, Var3);
	fVar10 = func_341(Param3, Var3);
	fVar11 = func_341(Param9, Var3);
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

float func_341(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_342(struct<3> Param0, int iParam3)
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

Vector3 func_343(struct<3> Param0)
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

int func_344(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_345(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0xA8CA97883F68F589(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= -145f || unk_0x9E5922B97DC397E0(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= 35f && unk_0x9E5922B97DC397E0(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_346(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC132DB93814AA1EB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_99(&(Local_190[4 /*10*/].f_3)))
			{
				func_186(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_92(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_347(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x69C5769F62E2EDCB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_99(&(Local_190[6 /*10*/].f_3)))
			{
				func_186(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_92(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_348(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x5BEDB1779AE301BA(uParam0->f_4))
		{
			iVar0 = unk_0x0A088F357EF627CA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA3F48AA4B6323A62(uParam0->f_4);
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
				func_92(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_349(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 3f && !func_99(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_99(&(Local_190[1 /*10*/].f_3)))
			{
				func_186(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_92(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_350(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x19160618B3657F0E(uParam0->f_4) && unk_0x2409C4B1759B2661(uParam0->f_4))
		{
			if (!func_99(&(Local_190[0 /*10*/].f_3)))
			{
				func_186(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_92(&(Local_190[0 /*10*/].f_3));
				func_97(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_351(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_99(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_97(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_275(uParam0, 10, 0f, 1);
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
}

void func_352(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_353(uParam1, iParam0);
	func_92(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_353(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_354(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_355(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x2A72627520A107B5(uParam0->f_4) > 25f)
		{
			if (!func_99(&(Local_190[5 /*10*/].f_3)))
			{
				func_186(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_92(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_356(var uParam0)
{
	if (!func_140(uParam0))
	{
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
		func_152(uParam0, 1);
	}
	else if (func_139(uParam0, 14))
	{
		func_166(uParam0);
		func_155(uParam0, 0);
	}
}

void func_357(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_251(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_251(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_251(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_56(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x5AFB8ED811F05E4D();
							}
						}
						else
						{
							func_17(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_251(Local_343.f_1[iVar0 /*4*/], 4) && !func_251(Local_343.f_1[iVar0 /*4*/], 8))
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
			func_279(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_358(var uParam0, var uParam1, bool bParam2)
{
	if (!func_18(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xFAFFA408239A026B(&(uParam0->f_124)) && func_172())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_172())
				{
					StringCopy(&(uParam0->f_124), func_301(), 24);
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

void func_359()
{
	if ((unk_0xF2DB717A73826179((func_386(&Local_409, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_363(&Local_409, 27, fLocal_956[0]))
	{
		switch (iLocal_846)
		{
			case 0:
				func_361();
				Local_409.f_39 = fLocal_956[1];
				Local_409.f_40 = fLocal_956[2];
				iLocal_846++;
				break;
			
			case 1:
				func_360(26, 27, Local_409.f_39);
				break;
			}
	}
}

int func_360(int iParam0, int iParam1, float fParam2)
{
	if (func_139(&Local_409, 7))
	{
		if (iLocal_1014 < 22)
		{
			if (!func_172())
			{
				if (func_386(&Local_409, 7) <= (fLocal_964[iLocal_1014] + 6f) && func_386(&Local_409, 7) >= (fLocal_964[iLocal_1014] - 6f))
				{
					if (func_134(Local_409.f_17, 0) <= fLocal_987[iLocal_1014] && iLocal_1015 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1015++;
							func_182(&Local_409, iParam0, 1, 0, 0);
							func_97(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_99(&uLocal_855))
						{
							if (func_93(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1015++;
								func_182(&Local_409, iParam0, 1, 0, 0);
								func_92(&uLocal_855);
								func_97(&uLocal_855);
							}
						}
						return 1;
					}
					else if (func_134(Local_409.f_17, 0) > fLocal_987[iLocal_1014] && iLocal_1016 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1016++;
							func_182(&Local_409, iParam1, 1, 0, 0);
							func_97(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_99(&uLocal_855))
						{
							if (func_93(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1016++;
								func_182(&Local_409, iParam1, 1, 0, 0);
								func_92(&uLocal_855);
								func_97(&uLocal_855);
							}
						}
						return 1;
					}
				}
				else if (func_386(&Local_409, 7) > (fLocal_964[iLocal_1014] + 6f))
				{
					iLocal_1014++;
					return 1;
				}
			}
		}
		else if (func_386(&Local_409, 7) >= fParam2 && func_134(Local_409.f_17, 0) > 50f)
		{
			if (!func_172())
			{
				if (!func_99(&uLocal_858))
				{
					func_97(&uLocal_858);
				}
				else if (func_93(&uLocal_858) > 4f)
				{
					func_182(&Local_409, iParam1, 1, 0, 0);
				}
			}
			else if (func_99(&uLocal_858))
			{
				func_92(&uLocal_858);
			}
			return 1;
		}
	}
	return 0;
}

void func_361()
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
	Local_409.f_23 = { func_274(iLocal_953) };
	Local_409.f_33 = func_362(iLocal_953);
	Local_409.f_26 = { func_274(1) };
	Local_409.f_34 = func_362(1);
	Local_409.f_29 = { 328.6758f, 443.9846f, 144.2298f };
}

float func_362(int iParam0)
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

int func_363(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_139(uParam0, 7))
		{
			func_138(uParam0, 23);
			if (func_386(uParam0, 7) > fParam2 && func_386(uParam0, 23) > 35f)
			{
				func_275(uParam0, 23, 0, 0);
				func_182(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_364(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_139(uParam0, 27))
	{
		func_138(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_386(uParam0, 27) > 5f)
	{
		if (func_378(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_275(uParam0, 27, 0, 0);
			func_275(uParam0, 10, 0, 0);
			func_376(uParam0, &uVar0, uParam1);
		}
		func_373(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_365(uParam0);
	}
	if ((((!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && (unk_0x5400DC5FAEBF30F0(*uParam0) && !unk_0xEFEFF8C622C1C559(*uParam0))) && (unk_0x5400DC5FAEBF30F0(uParam0->f_1) && !unk_0xEFEFF8C622C1C559(uParam0->f_1))) && !unk_0xC45919BF593ACF15()) && !func_172())
	{
		if (func_386(uParam0, 26) > 10f)
		{
			func_137(uParam0, 26, 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	else if (func_139(uParam0, 26))
	{
		func_137(uParam0, 26, 0);
	}
	return 0;
}

void func_365(var uParam0)
{
	if (!func_372(uParam0->f_429))
	{
		uParam0->f_429 = func_197();
		func_370(&(uParam0->f_429), 0, 0, unk_0x61E9B3BFA06B017B(4, 7), 0, 0, 0);
	}
	else if (func_366(uParam0->f_429))
	{
		func_279(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_366(int iParam0)
{
	return func_367(func_197(), iParam0);
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_372(iParam1) || !func_372(iParam0))
	{
		return 1;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
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
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
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
	return 0;
}

int func_368(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_369(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

void func_370(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_204(*uParam0);
	iVar2 = func_369(*uParam0);
	iVar3 = func_191(*uParam0);
	iVar4 = func_188(*uParam0);
	iVar5 = func_368(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_371(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_371(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_205(uParam0, iParam1);
	func_194(uParam0, iParam2);
	func_196(uParam0, iParam3);
	func_199(uParam0, iParam5);
	func_200(uParam0, iParam4);
	func_198(uParam0, iParam6);
}

int func_372(int iParam0)
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
	iVar0 = func_368(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_188(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_191(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_202(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_204(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_369(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_373(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_375()) && !func_140(uParam0)) || ((uParam0->f_411 != 9 && func_240(uParam0, 1)) && !func_140(uParam0)))
		{
			uVar0 = func_374(uParam0->f_4);
			unk_0xE13BCCF275C3DEAF(&uVar0);
			uParam0->f_4 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0x337F2213526139E0(uParam0->f_4, 1, 0);
			func_166(uParam0);
			func_155(uParam0, 0);
		}
	}
}

var func_374(var uParam0)
{
	return uParam0;
}

int func_375()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x0665EB554F07889E(iVar0, func_15()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_376(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_377(uParam0, 0, 1))
			{
				func_279(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_377(uParam0, 0, 4))
			{
				func_279(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_377(uParam0, 0, 8))
			{
				func_279(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_377(uParam0, 1, 1))
			{
				func_279(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_377(uParam0, 0, 1))
			{
				func_279(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_18(*uParam2, 2) && func_119(uParam0))
			{
				func_279(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_377(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3))
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

int func_378(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x18F7BE9ACB7D08F4();
	if (!unk_0x74C2FE037DFC8B4A(iVar0, 0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (!func_18(*uParam2, 1))
		{
			if (func_384(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_18(*uParam2, 2))
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_18(*uParam2, 4))
		{
			if (func_382(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_18(*uParam2, 8))
		{
			if (func_381(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_18(*uParam2, 128);
		if (bParam4)
		{
			if (func_379(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_18(*uParam2, 16))
		{
			if (func_379(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (iParam7 && unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_379(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x0A088F357EF627CA(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x0A088F357EF627CA(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar0, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x422DF8890E5A5CBB(iParam0))
			{
				if (unk_0x6D26723515A59351(iParam0) == unk_0x18F7BE9ACB7D08F4())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x8673F2F1802ADEF7(iParam0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFAF0B14C4EABEC60(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x4DF63D23F735EE44(iParam0))
		{
			return 1;
		}
	}
	if (func_380(unk_0x18F7BE9ACB7D08F4(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x0B90D19A63676F41(iParam0) && func_153(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x657B649BA2AD3582(iParam0, 0))
		{
			if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), unk_0x5AD687C3474F04B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), iParam0))
		{
			return 1;
		}
		if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam1, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xAADA5865C8BFAE94(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 1), unk_0x761660F5CE986DC4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_381(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9381BBF272130ED6(uParam0, 4))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0) && !unk_0x11879DABC3CC8D46(iParam0))
		{
			if (unk_0x8673F2F1802ADEF7(uParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_382(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	if (unk_0x70832328F090DD95(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x4114A6218866E595(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9381BBF272130ED6(uParam0, 2))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0))
		{
			if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x657B649BA2AD3582(unk_0x6DE4035D8BAB73B4(iParam1), 0))
			{
				iVar3 = unk_0x5AD687C3474F04B4(unk_0x6DE4035D8BAB73B4(iParam1), 0);
			}
			if (unk_0xEEDFFBA2DC1CCDB0(iParam0) || func_383(iVar3))
			{
				if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xAB3BDB14DC75494C((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam0, -1, 0) != 0)
			{
				if (unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_154(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 40f)
						{
							if (unk_0x8E085EFABAAA911F(unk_0x8CFC7D6E1DA5D304(), &uVar1))
							{
								if ((unk_0x978B4E1292EBBE41(uVar1) && unk_0x00ABCA0241A97143(iVar1) == iParam0) || (unk_0xB6C2454233C8F532(iVar1) && unk_0x6DE4035D8BAB73B4(iVar1) == unk_0x4983F8C51A0C0AF3(iParam0, -1, 0)))
								{
									if ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && unk_0x02EA7C5633421A0F(0, 24)) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x02EA7C5633421A0F(0, 69)))
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

int func_384(int iParam0, var uParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
		{
			if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 90f))
				{
					if (func_153(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x5AFB8ED811F05E4D();
						}
						else if ((unk_0x5AFB8ED811F05E4D() - uParam1->f_1) > uParam1->f_3)
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

void func_385(var uParam0)
{
	if (!func_18(uParam0->f_98, 2))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (func_135(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xE54597236B7D8C63(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_55(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_386(var uParam0, int iParam1)
{
	if (!func_99(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_186(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_93(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_387()
{
	func_388(&Local_409);
	func_405();
}

void func_388(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_407(2);
	}
}

int func_389(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_172() && func_386(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
			{
				if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_54(uParam0) == 0 || func_251(uParam0->f_85, 32))
					{
						if (!unk_0xF00EF9585E7FAC26(uParam0->f_4))
						{
							func_290(uParam0, 4160, 0);
						}
						else
						{
							func_290(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_290(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_290(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_290(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
	{
	}
	return 0;
}

void func_390(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_9))
	{
		unk_0x40D517D991458154(&(uParam0->f_9));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		unk_0x40D517D991458154(&(uParam0->f_10));
	}
}

int func_391(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_392()
{
	func_394(&Local_409, 2);
	Local_409.f_410 = 0;
	func_393(&Local_409, 3, 6);
	Local_409.f_6 = 2f;
}

void func_393(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_394(var uParam0, int iParam1)
{
	func_404(1);
	func_168();
	func_6(&(uParam0->f_244));
	func_403(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_18(Global_104551.f_19067, 4))
	{
		func_55(&(Global_104551.f_19067), 4);
	}
	func_398(uParam0);
	func_396(uParam0);
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	uParam0->f_102 = (func_395(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x8E058779F430F4D7("TAXI", 2);
}

int func_395(int iParam0)
{
	return Global_104551.f_19067.f_39[iParam0];
}

void func_396(var uParam0)
{
	switch (func_54(uParam0))
	{
		case 0:
			func_397(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_397(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_397(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_397(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_397(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_397(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_397(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_397(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_397(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_397(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_397(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_398(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_402(uParam0, 3);
			func_401(uParam0, 14);
			break;
		
		case 1:
			func_402(uParam0, 14);
			func_401(uParam0, 8);
			break;
		
		case 2:
			func_402(uParam0, 8);
			func_401(uParam0, 7);
			break;
		
		case 3:
			func_402(uParam0, 15);
			func_401(uParam0, 6);
			break;
		
		case 4:
			func_402(uParam0, 0);
			func_401(uParam0, 3);
			break;
		
		case 5:
			func_402(uParam0, 6);
			func_401(uParam0, 7);
			break;
		
		case 6:
			func_402(uParam0, 8);
			func_401(uParam0, 15);
			break;
		
		case 7:
			func_402(uParam0, 8);
			func_401(uParam0, 14);
			break;
		
		case 8:
			func_402(uParam0, 7);
			func_401(uParam0, 15);
			break;
		
		case 9:
			func_402(uParam0, unk_0x61E9B3BFA06B017B(0, 17));
			iVar0 = func_400((uParam0->f_418.f_2 + unk_0x61E9B3BFA06B017B(1, 17)), 0, 16);
			func_401(uParam0, iVar0);
			func_399(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_399(var uParam0)
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

int func_400(int iParam0, int iParam1, int iParam2)
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

void func_401(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_402(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_403(var uParam0)
{
	uParam0->f_2 = unk_0x18F7BE9ACB7D08F4();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_106() };
	uParam0->f_17 = { func_106() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_137(uParam0, 32, 0);
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103607, unk_0xFCA64981FEF7C913(), 24);
		Global_103601 = 1;
	}
	else
	{
		StringCopy(&Global_103607, "NULL", 24);
		Global_103601 = 0;
	}
}

void func_405()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 26, 0);
	}
	func_406();
	func_108();
	unk_0x810C5D6462DD69E6();
}

void func_406()
{
	unk_0x419C9117019F2E5A(iLocal_839);
}

void func_407(int iParam0)
{
	Global_103261.f_22 = iParam0;
}

