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
	uLocal_77 = unk_0x99F9E6870B7B7C2D();
	uLocal_78 = unk_0x09990A2B9C8684F0();
	Local_83 = { 500f, 500f, 500f };
	iLocal_839 = joaat("g_m_m_chigoon_02");
	iLocal_844 = 1;
	Local_849 = { 344.7458f, 452.1832f, 145.9936f };
	iLocal_955 = 2;
	if (unk_0x5EBD03AF78E7B4DB(67))
	{
		func_408(2);
		func_406();
	}
	unk_0xD07EE91CE9B6D4CF(1);
	func_393();
	while (true)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_409.f_2))
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
	uParam0->f_2 = unk_0xA19140A5C42D8715();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xA19140A5C42D8715());
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
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
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
		return Global_106070.f_28022[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xA19140A5C42D8715());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
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
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_392(&Local_409))
	{
		func_391(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_390(&Local_409, 0))
			{
				func_388();
			}
		}
		else if (func_387(&Local_409, 31) > 5f)
		{
			func_408(2);
			func_406();
		}
	}
	else
	{
		func_386(&Local_409);
		func_365(&Local_409, &uLocal_936);
		func_360();
		func_359(&Local_409, &uLocal_845, 0);
		func_358(&Local_409);
		if (Local_409.f_410 == 9)
		{
			func_357(&Local_409);
			func_333(&Local_409, 0, 1);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_332(&Local_409))
			{
				func_297();
			}
			else
			{
				func_280(&Local_409, "Taxi Not Driveable", func_296(&Local_409));
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_277();
				func_276(&Local_409, 16, 4f, 0);
				func_273(&Local_409, func_275(iLocal_955), func_275(iLocal_954), "TaxiKwak", iLocal_839, 180.6f, 1114636288);
				func_271(&Local_409);
				func_270(&Local_409, 1);
				break;
			
			case 1:
				if (func_268())
				{
					func_267();
					func_266(&(Local_840[0 /*3*/]), "TAXI_SC_BN_03", 200);
					func_265(&Local_409, &Local_840);
					Local_409.f_14 = { func_275(iLocal_955) };
					func_245();
					func_244(&Local_409);
					func_270(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_237(&Local_409, 1))
				{
					if (!unk_0x7112137033807390(Local_409.f_3, 0))
					{
						unk_0x72A0FF8C49CFFC0D(Local_409.f_3, 0, 0, 0, 0);
						unk_0x72A0FF8C49CFFC0D(Local_409.f_3, 2, 1, 0, 0);
						unk_0x72A0FF8C49CFFC0D(Local_409.f_3, 3, 1, 0, 0);
						unk_0x72A0FF8C49CFFC0D(Local_409.f_3, 4, 0, 1, 0);
						unk_0x72A0FF8C49CFFC0D(Local_409.f_3, 8, 1, 1, 0);
					}
					func_236(&Local_409, 1, 0);
					func_270(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_208(&Local_409, 0, 1109393408))
				{
					func_270(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_207(&Local_409))
				{
					Local_409.f_17 = { Local_849 };
					iLocal_933 = func_193();
					Local_934 = { func_188(iLocal_933) };
					Local_409.f_136 = { Local_934 };
					fLocal_847 = 210f;
					func_187(&uLocal_852);
					func_183(&Local_409, 9, 1, 0, 0);
					func_182(&Local_409);
					func_181();
					func_270(&Local_409, 9);
				}
				if (unk_0x1095F403F52B42E1(Local_409.f_4, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(Local_409.f_2, Local_409.f_4, 0))
					{
						func_179(&Local_409);
						func_270(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				func_175();
				if (func_174(&uLocal_852) > (fLocal_847 + 10f))
				{
					if (!func_173())
					{
						func_280(&Local_409, "Player did not hit the deadline", 20);
					}
					else
					{
						func_171();
					}
				}
				if (func_130(&Local_409, func_170(), 7f, 30f))
				{
					if (!func_173())
					{
						func_129(&Local_862, 15, 1);
						unk_0xE1623437A3194332(&(Local_409.f_9));
						if (func_387(&Local_409, 7) < fLocal_956[5] || Local_409.f_56 >= Local_409.f_59)
						{
							func_128(&Local_409, 0);
						}
						if (func_174(&uLocal_852) > 210f)
						{
							Local_409.f_56 = 0;
						}
						func_126(&Local_409);
						func_122(&Local_409);
						func_121(&Local_409);
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 26, 1);
						}
						func_270(&Local_409, 27);
					}
					else
					{
						func_171();
					}
				}
				break;
			
			case 27:
				if (func_110(&Local_409, 1))
				{
					func_108(0);
					if (!unk_0x7112137033807390(Local_409.f_3, 0))
					{
						if (func_106(func_107(), Local_409.f_29, 0))
						{
							unk_0x92DDCF53AA47A63D(Local_409.f_3, 84.9058f);
							unk_0xD738221C247C8B71(Local_409.f_3, 1);
						}
						else
						{
							unk_0x3A95A0A3221D4208(&uLocal_848);
							unk_0x2F89329397A277BC(&uLocal_848);
							unk_0xCB482EF95FAE4D73(0, 0, 0);
							unk_0x53FF9BDD8529ACD2(0);
							unk_0x956B3CF461C0C1C9(0, Local_409.f_29, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x956B3CF461C0C1C9(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 1048576000, 0, 1193033728);
							unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
							unk_0x301F42EEE3C40328(uLocal_848);
							unk_0xE1072FA2FECBAD96(Local_409.f_3, uLocal_848);
							unk_0xD738221C247C8B71(Local_409.f_3, 1);
						}
					}
					func_270(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_72(&Local_409, &uLocal_943))
				{
					func_9(1, &Local_409, 1);
					func_270(&Local_409, 30);
				}
				break;
			
			case 30:
				func_406();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_46(uParam1);
		if (!unk_0x4915F4759304D5CF(uParam1->f_3))
		{
			unk_0x13E0A8160525AE55(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_44(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)
{
	func_391(uParam0);
	if (func_173())
	{
		func_42();
	}
	func_40();
	unk_0x4F93066CECE72793();
	unk_0x135C61E339DABBAC(1);
	func_36(0);
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		unk_0x0BE3742BB3253F0E(uParam0->f_4, 0);
		unk_0x66B55FD5AB9DEACD(uParam0->f_4);
		unk_0x1EDE128D9797328A(uParam0->f_4);
	}
	func_35(uParam0->f_14, 1);
	func_33(uParam0->f_14, 1, 1114636288);
	func_32(&(uParam0->f_244), 3);
	unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, 1);
	if (func_29())
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_19(0, 1, 1, 0, 0);
	unk_0xDC374DA4DC566237(1);
	unk_0x85685830EFB9A55E(1);
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x77F0486CE0E598D5(*uParam0, 0);
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
		unk_0xB9514DB95C310944(1);
	}
	if (func_18(Global_106070.f_19069, 4))
	{
		func_16(&(Global_106070.f_19069), 4);
		unk_0xFC00A668AFC2126D(func_15(), 0);
	}
	if (bParam1)
	{
		func_14(uParam0);
	}
	func_13(uParam0);
	unk_0x4DC885EA8D6AF7FC("gestures@m@standing@casual");
	unk_0x4DC885EA8D6AF7FC("oddjobs@taxi@");
	unk_0x4DC885EA8D6AF7FC("oddjobs@towingcome_here");
	if (unk_0x18F86E07E41D913F())
	{
		func_11(uParam0->f_411);
	}
	if (!unk_0x02B9944258987761(unk_0xA6580F898F4E801C()))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 1, 0);
	}
	unk_0x4CA80915EDAE5C7E(unk_0xF2DB717A73826179((func_174(&uLocal_90) * 1000f)), 12, 0);
}

void func_11(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_12(iParam0)}, 6);
		if (!unk_0x7032042E5696FFD7(&uVar0))
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
	unk_0x68A8A5048E18500B(uParam0->f_51[0]);
}

void func_14(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			if (!unk_0x5D7DFE2058701942(uParam0->f_3, 0))
			{
				unk_0xDFF3E4D2D9D51DAE(uParam0->f_3);
			}
			unk_0x1F4E5EFBFE503FB3(uParam0->f_3, 0);
			unk_0x80E7C4A78224C8F9(255, uParam0->f_413, joaat("player"));
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x7E4E83D33161D01A(&(uParam0->f_3));
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

void func_19(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_28(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(0);
			}
			if (!func_27())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_26(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_28(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_26(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_24(unk_0xD4E735F4B6A956AC())) && !func_21(unk_0xD4E735F4B6A956AC(), 0)) && !func_20()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_24(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_20()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_21(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_22(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
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
	if (Global_1312837[iVar1] == 1)
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
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_25()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_26(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_27()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

int func_29()
{
	if (!func_31() && !func_30())
	{
		if (!unk_0xECEC0B592ADDCDE7(unk_0xA6580F898F4E801C()))
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
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
		unk_0x68184E06469338F4(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x387E83E60256EA18(Var0, Var3, 1);
		unk_0xD9F4F897224699B4();
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
	
	if (!func_106(Param0, func_107(), 0))
	{
		Var0 = { func_34(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_34(Param0, 1f, 30f, 30f, 10f) };
		unk_0x413F34FCFABEDE4B(Var0, Var3, iParam3, 1);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14681)
	{
		func_37(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_27())
	{
		Global_14513.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90260[iVar0 /*17*/] && !Global_90260[iVar0 /*17*/].f_1)
		{
			if (Global_90260[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90260[iVar0 /*17*/].f_5 != 88 && Global_90260[iVar0 /*17*/].f_5 != 89) && Global_90260[iVar0 /*17*/].f_5 != 92)
				{
					func_41(Global_90260[iVar0 /*17*/].f_5, 1);
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
			Global_87312[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87312[iParam0 /*2*/] = 0;
	}
}

void func_42()
{
	Global_14688 = 0;
	func_43();
}

void func_43()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
	}
}

void func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106070.f_19069.f_22[0]++;
			func_45("Fares Completed ++ = ", Global_106070.f_19069.f_22[0]);
			break;
		
		case 1:
			Global_106070.f_19069.f_22[1]++;
			func_45("Fares Failed ++ = ", Global_106070.f_19069.f_22[1]);
			break;
		
		case 2:
			Global_106070.f_19069.f_22[2]++;
			func_45("Fares Accepted ++ ", Global_106070.f_19069.f_22[2]);
			break;
		
		case 3:
			Global_106070.f_19069.f_22[3]++;
			func_45("Fares Expired ++ ", Global_106070.f_19069.f_22[3]);
			break;
		
		case 13:
			Global_106070.f_19069.f_22[13]++;
			func_45("Passengers run ++ = ", Global_106070.f_19069.f_22[13]);
			break;
		
		case 14:
			Global_106070.f_19069.f_22[14]++;
			func_45("Passenger Forced to Pay ++ = ", Global_106070.f_19069.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106070.f_19069.f_22[4])
				{
					Global_106070.f_19069.f_22[4] = iParam1;
					func_45("This distance ", iParam1);
					func_45(" is longer than current best", Global_106070.f_19069.f_22[4]);
				}
				else
				{
					func_45("Longest Distance Not Beat ", Global_106070.f_19069.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106070.f_19069.f_22[5] = (Global_106070.f_19069.f_22[5] + iParam1);
			func_45("Total Distance w/ Passenger = ", Global_106070.f_19069.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106070.f_19069.f_22[6]++;
			}
			else
			{
				Global_106070.f_19069.f_22[6] = (Global_106070.f_19069.f_22[6] + iParam1);
			}
			func_45("Wanted Levels ++ = ", Global_106070.f_19069.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106070.f_19069.f_22[7] = (Global_106070.f_19069.f_22[7] + iParam1);
			}
			else
			{
				Global_106070.f_19069.f_22[7]++;
			}
			func_45("Wanted Levels Lost = ", Global_106070.f_19069.f_22[7]);
			break;
		
		case 8:
			Global_106070.f_19069.f_22[8]++;
			func_45("Taxis wrecked ++ = ", Global_106070.f_19069.f_22[8]);
			break;
		
		case 9:
			Global_106070.f_19069.f_22[9]++;
			func_45("Horn Honked ++ = ", Global_106070.f_19069.f_22[9]);
			break;
		
		case 10:
			Global_106070.f_19069.f_22[10] = (Global_106070.f_19069.f_22[10] + iParam1);
			func_45("Total Money Earned = ", Global_106070.f_19069.f_22[10]);
			break;
		
		case 11:
			Global_106070.f_19069.f_22[11] = (Global_106070.f_19069.f_22[11] + iParam1);
			func_45("Total Tips Earned = ", Global_106070.f_19069.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106070.f_19069.f_22[12])
			{
				Global_106070.f_19069.f_22[12] = iParam1;
				func_45("New Highest Tip = ", Global_106070.f_19069.f_22[12]);
			}
			else
			{
				func_45("Highest Tip Not Reached = ", Global_106070.f_19069.f_22[12]);
			}
			break;
	}
}

void func_45(char* sParam0, int iParam1)
{
}

void func_46(var uParam0)
{
	func_44(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_408(1);
		func_58(15, 1);
	}
	func_56(&(Global_106070.f_19069), 1024);
	if (!func_18(Global_106070.f_19069, 64))
	{
		func_47(func_54(func_55(uParam0)), 0, 0);
	}
}

void func_47(int iParam0, int iParam1, int iParam2)
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
		func_53((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = iParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
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
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853))
	{
		func_52(13, unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_51() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_51()
{
	return Global_25459;
}

int func_52(int iParam0, int iParam1)
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
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_54(int iParam0)
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

int func_55(var uParam0)
{
	return uParam0->f_411;
}

void func_56(var uParam0, int iParam1)
{
	func_57(uParam0, iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
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
	if (unk_0x16E6CF5D5B848918(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_69(&Global_4268566))
	{
		if (func_67(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xFA4FDE2EBD31459D(iParam0))
		{
			return 0;
		}
		if (unk_0x16E6CF5D5B848918(iParam0))
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
	
	if (unk_0x16E6CF5D5B848918(iParam1))
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
	
	if (unk_0x16E6CF5D5B848918(iParam1))
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
	func_65(uParam0, (Global_4268565 - 0.5f));
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
	return Global_36117 == iParam0;
}

int func_72(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_173() && func_387(uParam0, 0) > 1f)
			{
				if (func_29())
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
				}
				func_105(uParam0);
				func_16(&(Global_106070.f_19069), 4096);
				func_102(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_104(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xE11F00B4AC919F45(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_101(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_92(uParam1, 0))
			{
				func_73(uParam0);
				func_276(uParam0, 0, 0, 0);
				func_101(0);
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
		func_44(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_75(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x2AD48F3CEBA882E9(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x93180BE33E7149EF(iVar1, iVar0, 1);
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
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
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
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
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
					switch (unk_0xB09979570758BDAD())
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
	iVar5 = (Global_53355[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53355[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53355[iVar2] = 2147483647;
				}
				else
				{
					Global_53355[iVar2] = (Global_53355[iVar2] + iParam3);
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
				if ((Global_53355[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53355[iVar2];
			Global_53355[iVar2] = (Global_53355[iVar2] - iParam3);
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
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106070.f_20536.f_233[iVar2 /*69*/]++;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_1++;
		if (Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_77(iParam0);
	if (Global_36117 == 15)
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
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_78(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_53(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_53(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_53(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_53(137, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_80() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_80() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_79(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
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
	if (iParam0 == 9)
	{
		return func_83(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_83(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_83(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_80() /*12745*/].f_8178.f_10, iParam0);
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x16E6CF5D5B848918(27))
	{
		return 0;
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2AD48F3CEBA882E9(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x93180BE33E7149EF(joaat("num_cash_spent"), iVar1, 1);
		func_52(27, iVar1);
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
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_89()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53355[0] == iVar0)
		{
			Global_53355[0] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53355[1] == iVar0)
		{
			Global_53355[1] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53355[2] == iVar0)
		{
			Global_53355[2] = iVar0;
		}
	}
}

int func_90()
{
	func_91();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_91()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_4(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_3(unk_0xA19140A5C42D8715());
			if (func_5(iVar0) && (!func_71(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_5(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

int func_92(var uParam0, int iParam1)
{
	if (!func_100(&(uParam0->f_2)))
	{
		func_98(&(uParam0->f_2));
	}
	unk_0xD8C147DA332E7F06(14);
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xDF0ADAD7E584090D(2, 201) || uParam0->f_8)
		{
			if (!func_100(&(uParam0->f_5)))
			{
				func_98(&(uParam0->f_5));
				func_97(uParam0, 1051260355);
			}
		}
		if (func_100(&(uParam0->f_5)))
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
		if (!func_100(&(uParam0->f_5)))
		{
			func_98(&(uParam0->f_5));
			func_97(uParam0, 1051260355);
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
	if (func_100(uParam0))
	{
		if (func_96(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_95(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_95(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xFD34717937104F1C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar2 = unk_0xFFCC7EBF88BDEE54();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xFD34717937104F1C()) / 1000f);
}

bool func_96(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

void func_97(var uParam0, int iParam1)
{
	unk_0x31A9E530D137684F(*uParam0, "SHARD_ANIM_OUT");
	unk_0x380580A1A1667F69(uParam0->f_9);
	unk_0xD8B5988E85F72BE5(iParam1);
	unk_0x271C1332F482646C();
}

void func_98(var uParam0)
{
	func_99(uParam0, 0f);
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_95(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(uParam0, 1);
	unk_0xFA57C719261AA55D(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_101(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_102(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x31A9E530D137684F(*uParam0, func_103());
	unk_0x390B339C943A8A54("STRING");
	unk_0xBA9FB571BCB6C1BD(iParam9);
	unk_0x4FDA9E6EF359F8A9(sParam1);
	unk_0xD481829E3E36543B();
	unk_0x390B339C943A8A54(sParam7);
	unk_0xCDA87E1DA52C8C9D(uParam2);
	unk_0xCDA87E1DA52C8C9D(uParam3);
	unk_0x4FDA9E6EF359F8A9(uParam6);
	unk_0xCDA87E1DA52C8C9D(uParam5);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xD481829E3E36543B();
	unk_0x271C1332F482646C();
	func_98(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_103()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_104(var uParam0)
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

void func_105(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_44(11, uParam0->f_56);
	func_44(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x05EFB6A616B6FADE(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_106(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_107()
{
	struct<3> Var0;
	
	return Var0;
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		func_109();
		unk_0x7954F628CA598930(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 0);
		unk_0x7954F628CA598930(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 0);
		unk_0x7954F628CA598930(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 0);
		unk_0x7954F628CA598930(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 0);
	}
	else
	{
		unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0);
		unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0);
		unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0);
	}
}

void func_109()
{
	unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0);
	unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0);
	unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0);
	unk_0xBCBBCCE17410A0A8(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0);
}

int func_110(var uParam0, bool bParam1)
{
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (func_120(uParam0) && func_116(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_115(uParam0, 2097152))
				{
					func_111(uParam0);
				}
			}
			else
			{
				func_111(uParam0);
			}
		}
		else if (!func_120(uParam0))
		{
			if (bParam1)
			{
				if (func_115(uParam0, 2097152))
				{
					if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0)
{
	struct<3> Var0;
	
	if (func_114(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_112(uParam0, Var0);
}

void func_112(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0) && unk_0xB10F7FE89663CB5B(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x3201284584C7CD83(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_113(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xFBA5AC89E66201B2(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x499324B3EF19C288(Var0, Param1, 0) < unk_0x499324B3EF19C288(Var3, Param1, 0) && unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xFBA5AC89E66201B2(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x499324B3EF19C288(Var0, Param1, 0) >= unk_0x499324B3EF19C288(Var3, Param1, 0) && unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xFBA5AC89E66201B2(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xFBA5AC89E66201B2(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_113(int iParam0, int iParam1)
{
	if (!unk_0x7112137033807390(iParam0, 0) && !unk_0x7112137033807390(iParam1, 0))
	{
		if (unk_0xB10F7FE89663CB5B(iParam0, iParam1))
		{
			if (unk_0xB0D49A1F9F054602(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_114(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_115(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_18(uParam0->f_81, iParam1) && !func_173());
	}
	return func_173();
}

int func_116(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_38(1))
			{
				func_36(0);
			}
			if (func_29())
			{
				func_119();
				return 1;
			}
			else if (func_117(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 0, 256);
				}
				else
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 0, 0);
				}
			}
			unk_0x7CE8BDE02895D2F9(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_117(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD481A812073CCF02(0, 71, 1);
	unk_0xD481A812073CCF02(0, 72, 1);
	unk_0xD481A812073CCF02(0, 76, 1);
	unk_0xD481A812073CCF02(0, 73, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	if (bParam5)
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
	unk_0xD481A812073CCF02(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD481A812073CCF02(0, 69, 1);
		unk_0xD481A812073CCF02(0, 70, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
	}
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 86, 1);
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 138, 1);
	unk_0xD481A812073CCF02(0, 136, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 107, 1);
	unk_0xD481A812073CCF02(0, 110, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 87, 1);
	unk_0xD481A812073CCF02(0, 88, 1);
	unk_0xD481A812073CCF02(0, 113, 1);
	unk_0xD481A812073CCF02(0, 115, 1);
	unk_0xD481A812073CCF02(0, 116, 1);
	unk_0xD481A812073CCF02(0, 117, 1);
	unk_0xD481A812073CCF02(0, 118, 1);
	unk_0xD481A812073CCF02(0, 119, 1);
	unk_0xD481A812073CCF02(0, 131, 1);
	unk_0xD481A812073CCF02(0, 132, 1);
	unk_0xD481A812073CCF02(0, 123, 1);
	unk_0xD481A812073CCF02(0, 126, 1);
	unk_0xD481A812073CCF02(0, 129, 1);
	unk_0xD481A812073CCF02(0, 130, 1);
	unk_0xD481A812073CCF02(0, 133, 1);
	unk_0xD481A812073CCF02(0, 134, 1);
	unk_0x8BCFD05DF9BB6004();
	func_118(iParam0);
	if ((unk_0xFD34717937104F1C() - Global_29) > 500)
	{
		unk_0x0185AEECD1FF63F3(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xFD34717937104F1C();
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x69C0BB7D03EE045D(unk_0xEAA5CEF8875FEEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xE276FD46E2FAC906(iParam0))
		{
			if (unk_0x7FBA23EA56BC811C(iParam0))
			{
				unk_0xAA99F8210C8FE6FD(iParam0, 0);
			}
		}
	}
}

void func_119()
{
	if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
	{
		unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
	}
}

int func_120(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(var uParam0)
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
		func_56(&(uParam0->f_55), 1);
	}
}

void func_122(var uParam0)
{
	func_124();
	unk_0x4F93066CECE72793();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_183(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_183(uParam0, 103, 1, 0, 0);
		}
		func_123(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_183(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_183(uParam0, 102, 1, 0, 0);
	}
	func_276(uParam0, 16, 4f, 0);
}

void func_123(int iParam0)
{
	Global_104780.f_221 = iParam0;
}

void func_124()
{
	Global_14688 = 0;
	func_125();
}

void func_125()
{
	if (unk_0x904275961B875DEB())
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_126(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_127(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_44(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_44(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_127(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_128(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_129(var uParam0, int iParam1, bool bParam2)
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

int func_130(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971()) && !unk_0x607776744A243309()) && !unk_0x71364F510A1CB69F()) && !uParam0->f_142)
	{
		if (func_152(uParam0))
		{
			func_151(uParam0, &(uParam0->f_43));
			func_146(uParam0);
			func_145(uParam0);
			func_142(uParam0);
			func_137(uParam0, fParam2, fParam3);
			func_134(uParam0);
			return func_131(uParam0, iParam1);
		}
	}
	return 0;
}

int func_131(var uParam0, int iParam1)
{
	if (func_55(uParam0) == 2)
	{
		if (unk_0xA60C975CBAB69F34(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_133(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1) && func_132(1, 1, 1)) && unk_0x678F978B0FAD24D2(uParam0->f_4))
		{
			return func_116(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xA60C975CBAB69F34(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1) && func_132(1, 1, 1)) && unk_0x678F978B0FAD24D2(uParam0->f_4))
	{
		return func_116(uParam0, 1, iParam1);
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x95129531A8C1F3B9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (bParam0)
		{
			if (unk_0x7112137033807390(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xC5F2C603295DE6F0(iVar0) < 0.95f || unk_0xC5F2C603295DE6F0(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

float func_133(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	return unk_0x499324B3EF19C288(Var0, Param1, iParam4);
}

void func_134(var uParam0)
{
	float fVar0;
	
	if ((func_120(uParam0) && func_18(uParam0->f_81, 67108864)) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
	{
		if ((unk_0xFD34717937104F1C() - iLocal_97) >= 10000)
		{
			fVar0 = func_135(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0xFD34717937104F1C();
		}
		if (iLocal_96 >= 2 && !func_173())
		{
			func_183(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0xFD34717937104F1C() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xFD34717937104F1C() % 4000) < 50)
		{
			if (!func_120(uParam0))
			{
			}
			if (!func_18(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_135(struct<3> Param0, int iParam3)
{
	return func_136(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), Param0, iParam3);
}

float func_136(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x7112137033807390(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam0, 1), Param1, iParam4);
}

void func_137(var uParam0, float fParam1, float fParam2)
{
	if (func_120(uParam0) && func_18(uParam0->f_44, 4))
	{
		if ((unk_0x097275D546C9735F(uParam0->f_4) || unk_0xEAA5CEF8875FEEED(uParam0->f_4) < 3f) && func_141(uParam0))
		{
			if (!func_140(uParam0, 2))
			{
				func_139(uParam0, 2);
			}
			else if (func_120(uParam0))
			{
				if (func_387(uParam0, 2) > fParam1 && !func_140(uParam0, 14))
				{
					if (func_31())
					{
						func_183(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_183(uParam0, 48, 1, 0, 0);
					}
					func_276(uParam0, 2, 0, 0);
					if (func_140(uParam0, 10))
					{
						func_276(uParam0, 10, 0, 0);
					}
				}
				if (!func_140(uParam0, 3))
				{
					func_276(uParam0, 3, 0, 0);
				}
				else if (func_387(uParam0, 3) >= fParam2)
				{
					func_138(uParam0, 3, 0);
					func_280(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_140(uParam0, 2))
			{
				func_138(uParam0, 2, 0);
			}
			if (func_140(uParam0, 3))
			{
				func_138(uParam0, 3, 0);
			}
		}
	}
}

void func_138(var uParam0, int iParam1, bool bParam2)
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

void func_139(var uParam0, int iParam1)
{
	func_187(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_140(var uParam0, int iParam1)
{
	return func_100(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_141(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			return 1;
		}
	}
	return 0;
}

void func_142(var uParam0)
{
	if (func_144(uParam0))
	{
		func_143(uParam0);
	}
}

void func_143(var uParam0)
{
	if (unk_0x61D1CE85B7C84825() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x7D8590E7AD7006E8();
			func_138(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_387(uParam0, 20) > 3f)
				{
					func_183(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_18(uParam0->f_81, 262144) || !func_18(uParam0->f_81, 1048576))
				{
					if (func_387(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_183(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (func_387(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_183(uParam0, 85, 1, 0, 0);
						func_138(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_387(uParam0, 20) > 8f)
				{
					func_183(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_18(uParam0->f_81, 262144) || func_18(uParam0->f_82, 67108864))
			{
				if (!func_140(uParam0, 22))
				{
					func_139(uParam0, 22);
				}
			}
			if (func_140(uParam0, 22) && func_387(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_18(uParam0->f_81, 1048576))
					{
						func_183(uParam0, 84, 1, 0, 0);
						func_138(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_18(uParam0->f_82, 134217728))
					{
						func_183(uParam0, 85, 1, 0, 0);
						func_138(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_144(var uParam0)
{
	return uParam0->f_120;
}

void func_145(var uParam0)
{
	if (unk_0x0099F119B7ADB4B3(unk_0xA6580F898F4E801C()) && !func_18(uParam0->f_44, 2))
	{
		func_56(&(uParam0->f_44), 2);
	}
	else if (!unk_0x0099F119B7ADB4B3(unk_0xA6580F898F4E801C()) && func_18(uParam0->f_44, 2))
	{
		func_16(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_44(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_183(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_146(var uParam0)
{
	if (!func_18(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
				{
					if (func_387(uParam0, 9) > 1f)
					{
						func_150(uParam0, unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()));
						if (uParam0->f_410 != 22)
						{
							func_183(uParam0, 50, 1, 1, 0);
						}
						func_276(uParam0, 9, 0, 0);
						if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
						{
							unk_0xE8C2974337833D20(uParam0->f_9, 0);
							unk_0x3E46F0AAE4B470FB(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_173() && func_387(uParam0, 9) > 4f)
				{
					func_183(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_149("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_183(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x122A8778D4027A82(unk_0xA6580F898F4E801C(), func_148(uParam0)))
				{
					func_150(uParam0, unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()));
					func_44(6, 0);
				}
				if (!func_147(uParam0))
				{
					if (!unk_0x904275961B875DEB())
					{
						if (func_387(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_183(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
				{
					if (func_149("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x4F93066CECE72793();
					}
					if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_173())
				{
					if (uParam0->f_410 != 22)
					{
						func_183(uParam0, 53, 1, 0, 1);
					}
					func_44(7, func_148(uParam0));
					func_150(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_173())
				{
					func_138(uParam0, 9, 0);
					func_276(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_147(var uParam0)
{
	return uParam0->f_110;
}

int func_148(var uParam0)
{
	return uParam0->f_106;
}

bool func_149(char* sParam0, int iParam1, int iParam2)
{
	unk_0x783C05630CCAF363(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4FDA9E6EF359F8A9(iParam2);
	}
	return unk_0x0818E99A91733016();
}

void func_150(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_151(var uParam0, var uParam1)
{
	unk_0xB13032FADD612FC1(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_152(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (!unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1) && !unk_0x3D77D31E25961596(uParam0->f_3))
			{
				func_280(uParam0, "Passenger left car.", 9);
			}
			else if (func_166(uParam0))
			{
				if (func_149("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xB9509A39A48644C4("TAXI_OBJ_PICKUP");
				}
				if (unk_0x3A83743561B4F70C())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xFD34717937104F1C() % 1000) < 50)
				{
				}
				func_153(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_153(var uParam0, bool bParam1)
{
	func_165(uParam0, uParam0->f_3);
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_140(uParam0, 14))
			{
				if (func_173())
				{
					func_164(1);
				}
				func_163(uParam0, 11, 1);
				func_156(uParam0, 1);
				func_276(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_120(uParam0))
				{
					if ((unk_0xFD34717937104F1C() % 1000) < 50)
					{
					}
					if (unk_0x5D7DFE2058701942(uParam0->f_2, 0))
					{
						if (func_387(uParam0, 15) > 5f)
						{
							func_276(uParam0, 15, 0f, 1);
						}
					}
					if (func_387(uParam0, 14) > 20f)
					{
						func_280(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_387(uParam0, 14) > 20f)
				{
					if (func_154(uParam0->f_4, 1) > 40f)
					{
						func_280(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_280(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_154(int iParam0, int iParam1)
{
	return func_155(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), iParam0, iParam1);
}

float func_155(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		Var3 = { unk_0xE2BBD32891C18569(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xE2BBD32891C18569(iParam1, 0) };
	}
	return unk_0x499324B3EF19C288(Var0, Var3, iParam2);
}

void func_156(var uParam0, bool bParam1)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
			{
				unk_0xE8C2974337833D20(uParam0->f_8, 0);
				unk_0x3E46F0AAE4B470FB(uParam0->f_8, 0);
				func_162(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
			{
				unk_0xE8C2974337833D20(uParam0->f_9, 0);
				unk_0x3E46F0AAE4B470FB(uParam0->f_9, 0);
				unk_0x4F93066CECE72793();
				if (func_120(uParam0))
				{
					func_183(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_162(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_157(uParam0, 0, 0);
		}
		else if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
		{
			unk_0xE1623437A3194332(&(uParam0->f_10));
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
			{
				unk_0xE8C2974337833D20(uParam0->f_8, 255);
				unk_0x3E46F0AAE4B470FB(uParam0->f_8, 1);
			}
			else if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xE8C2974337833D20(uParam0->f_9, 0);
					unk_0x3E46F0AAE4B470FB(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xE8C2974337833D20(uParam0->f_9, 255);
					unk_0x3E46F0AAE4B470FB(uParam0->f_9, 1);
				}
			}
			unk_0x4F93066CECE72793();
		}
	}
}

void func_157(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_391(uParam0);
	}
	if (!unk_0xCE3CB618AFE55EFB(uParam0->f_10))
	{
		uParam0->f_10 = func_160(uParam0->f_4, 1, 0);
		unk_0xC4F12E446CCE89F5(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x3E46F0AAE4B470FB(uParam0->f_10, 1);
		func_158(uParam0);
		if (bParam2)
		{
			unk_0x4F93066CECE72793();
			func_183(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_158(var uParam0)
{
	func_276(uParam0, 14, 0, 0);
	func_159();
}

void func_159()
{
	int iVar0;
	
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		unk_0x6020229E34827A69(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_161(unk_0x4C9BACA8D249CB13(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF46EDCACB3804F87(uVar0, bParam1);
		}
		else
		{
			unk_0x570128B7829A8EAA(uVar0, 2);
		}
	}
	else if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_161(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(uVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_161(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_161(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_162(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_18(*uParam1, iParam2))
	{
		unk_0x4F93066CECE72793();
		func_183(uParam0, iParam3, 1, 0, 0);
		func_56(uParam1, iParam2);
	}
}

void func_163(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_164(int iParam0)
{
	Global_16833 = iParam0;
}

void func_165(var uParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (!unk_0x4915F4759304D5CF(iParam1))
		{
			if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
			{
				if ((unk_0xDAA9E4FC4EBF1081(iParam1, joaat("weapon_stungun"), 0) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 2)) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 1))
				{
					func_280(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			}
		}
	}
}

int func_166(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_140(uParam0, 14))
			{
				func_167(uParam0);
			}
			func_156(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_167(var uParam0)
{
	func_138(uParam0, 14, 0);
	func_138(uParam0, 15, 0);
	func_169();
	if (func_168())
	{
		func_164(0);
	}
}

int func_168()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	var uVar0;
	
	uVar0 = unk_0xC409B91AC4749F88();
	if (unk_0x1095F403F52B42E1(uVar0, 0))
	{
		unk_0x6020229E34827A69(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

float func_170()
{
	float fVar0;
	
	fVar0 = unk_0xEAA5CEF8875FEEED(Local_409.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_171()
{
	Global_14688 = 0;
	func_172();
}

void func_172()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

int func_173()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

float func_174(var uParam0)
{
	if (func_100(uParam0))
	{
		if (func_96(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_95(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_175()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = unk_0xF2DB717A73826179(((fLocal_847 - func_174(&uLocal_852)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1010 = true;
		if (!iLocal_1012)
		{
			unk_0xE11F00B4AC919F45(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1012 = 1;
		}
	}
	func_176(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	if (!bLocal_1010)
	{
		if (!iLocal_1011)
		{
			fVar1 = func_94(&uLocal_852);
			if (((((((((((((((fLocal_847 - fVar1) < 1f || (fLocal_847 - fVar1) < 1.5f) || (fLocal_847 - fVar1) < 2f) || (fLocal_847 - fVar1) < 2.5f) || (fLocal_847 - fVar1) < 3f) || (fLocal_847 - fVar1) < 3.5f) || (fLocal_847 - fVar1) < 4f) || (fLocal_847 - fVar1) < 4.5f) || (fLocal_847 - fVar1) < 5f) || (fLocal_847 - fVar1) < 6f) || (fLocal_847 - fVar1) < 7f) || (fLocal_847 - fVar1) < 8f) || (fLocal_847 - fVar1) < 9f) || (fLocal_847 - fVar1) < 10f) || (fLocal_847 - fVar1) < 11f)
			{
				unk_0xE11F00B4AC919F45(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_1011 = 1;
				iLocal_1013 = unk_0xFD34717937104F1C();
			}
		}
		else
		{
			fVar2 = func_94(&uLocal_852);
			if (((fLocal_847 - fVar2) < 5.5f && (unk_0xFD34717937104F1C() - iLocal_1013) > 500) || ((fLocal_847 - fVar2) < 11f && (unk_0xFD34717937104F1C() - iLocal_1013) > 1000))
			{
				iLocal_1011 = 0;
			}
		}
	}
}

void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_178(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_177(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_177(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_178(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

void func_179(var uParam0)
{
	func_180(uParam0, 1000);
	if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x836A6A722DEA63F1(uParam0->f_3);
		unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
	}
	func_171();
	func_167(uParam0);
}

void func_180(var uParam0, int iParam1)
{
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x77F0486CE0E598D5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x8E88E73F74A9FF79(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
	}
}

void func_181()
{
	func_56(&(Local_409.f_55), 2);
	func_56(&(Local_409.f_55), 4);
	func_56(&(Local_409.f_55), 16);
	func_56(&(Local_409.f_55), 64);
	func_56(&(Local_409.f_55), 256);
	func_56(&(Local_409.f_55), 512);
	func_56(&(Local_409.f_55), 1024);
	func_56(&(Local_409.f_55), 2048);
	func_56(&(Local_409.f_55), 4096);
	func_56(&(Local_409.f_55), 1073741824);
	func_56(&(Local_409.f_100), 8);
	func_56(&(Local_409.f_100), 2048);
	func_56(&(Local_409.f_100), 256);
	func_56(&uLocal_936, 2);
	func_139(&Local_409, 7);
}

void func_182(var uParam0)
{
	unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 1, 0);
	func_180(uParam0, 1000);
}

void func_183(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_276(uParam0, 16, 4f, 0);
		if (func_184(uParam0))
		{
			func_42();
		}
	}
	func_236(uParam0, iParam2, bParam3);
}

int func_184(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_173())
	{
		Var6 = { func_186() };
		if (!unk_0x429D45A6C6520026(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x3CAC2741CC1A631F(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_185(&Var0);
			if (unk_0x3CAC2741CC1A631F(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_185(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_186()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

void func_187(var uParam0)
{
	if (!func_100(uParam0))
	{
		func_98(uParam0);
	}
}

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char cVar2[0];
	char cVar3[0];
	
	StringCopy(&cVar2, func_190(func_192(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_189(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_190(func_189(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_189(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

var func_190(int iParam0)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_191(&cVar0);
}

var func_191(char[4] cParam0)
{
	return cParam0;
}

int func_192(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_193()
{
	int iVar0;
	
	iVar0 = func_198();
	func_196(&iVar0, 3);
	func_194(&iVar0, 30);
	return iVar0;
}

void func_194(int iParam0, int iParam1)
{
	if ((func_189(*iParam0) + iParam1) > 59)
	{
		func_195(iParam0, ((func_189(*iParam0) + iParam1) - 60));
		func_196(iParam0, 1);
	}
	else
	{
		func_195(iParam0, (func_189(*iParam0) + iParam1));
	}
}

void func_195(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_196(int iParam0, int iParam1)
{
	if ((func_192(*iParam0) + iParam1) > 23)
	{
		func_197(iParam0, ((func_192(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_197(iParam0, (func_192(*iParam0) + iParam1));
	}
}

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_198()
{
	var uVar0;
	
	func_206(&uVar0, unk_0xC5B07C33AC7BB174());
	func_195(&uVar0, unk_0x65DA628D62901275());
	func_197(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_201(&uVar0, unk_0xC9A0B68BA813CF99());
	func_200(&uVar0, unk_0x897D202BD69186D5());
	func_199(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_199(var uParam0, int iParam1)
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

void func_200(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_201(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_202(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_202(int iParam0, int iParam1)
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

var func_203(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_204(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_207(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if ((unk_0x3D77D31E25961596(uParam0->f_3) && (unk_0xFD34717937104F1C() - iLocal_89) > 500) || unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_208(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xFD34717937104F1C() % 1000) < 50)
			{
			}
			func_153(uParam0, 1);
			if (func_29())
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 1, 0);
			}
			if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 2106541073) == 1 || unk_0xF9D4EF1338E38AFB(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x836A6A722DEA63F1(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if (unk_0x122A8778D4027A82(unk_0xA6580F898F4E801C(), 0))
		{
			func_234(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x3A95A0A3221D4208(&uVar3);
				unk_0x2F89329397A277BC(&uVar3);
				unk_0x956B3CF461C0C1C9(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x0177431263151C4E(0, uParam0->f_4, 0);
				unk_0x301F42EEE3C40328(uVar3);
				unk_0xE1072FA2FECBAD96(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_140(uParam0, 14))
			{
				func_167(uParam0);
				func_156(uParam0, 0);
			}
			if (func_140(uParam0, 9))
			{
				func_138(uParam0, 9, 0);
				unk_0x4F93066CECE72793();
				if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
				{
					unk_0xE8C2974337833D20(uParam0->f_8, 255);
					unk_0x3E46F0AAE4B470FB(uParam0->f_8, 1);
				}
			}
			if (!unk_0x7112137033807390(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_233(uParam0, uParam0->f_3) > 300f)
				{
					func_280(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 || ((func_155(unk_0xA19140A5C42D8715(), uParam0->f_3, 1) < 20f && func_133(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_133(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_230(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_229(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_228(uParam0->f_4, uParam0->f_3);
								iVar0 = func_227(uParam0, &iVar1);
								if (!unk_0x7112137033807390(iVar0, 0))
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
										unk_0xCB482EF95FAE4D73(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xCB482EF95FAE4D73(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x7112137033807390(iVar0, 0))
											{
												unk_0xCB482EF95FAE4D73(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x9568B1B58F78FF36(uParam0->f_3);
							unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_141(uParam0))
							{
								unk_0x9568B1B58F78FF36(uParam0->f_3);
							}
							else if (((unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 0) && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 7) && func_233(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x3A95A0A3221D4208(&(uParam0->f_243));
								unk_0x2F89329397A277BC(&(uParam0->f_243));
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x3F01127ECD227890(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x301F42EEE3C40328(uParam0->f_243);
								unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x39AA033597761444(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_155(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_226(uParam0, 1))
								{
									unk_0x836A6A722DEA63F1(uParam0->f_3);
									func_280(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_225(uParam0->f_4))
								{
									unk_0x836A6A722DEA63F1(uParam0->f_3);
									func_280(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_223(uParam0);
						if (func_233(uParam0, uParam0->f_3) < fVar4 || func_29())
						{
							if (unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_210(uParam0))
								{
									func_209(uParam0);
									iLocal_89 = unk_0xFD34717937104F1C();
									unk_0x13E0A8160525AE55(uParam0->f_3, 26, 1);
									func_138(uParam0, 5, 0);
									unk_0x89DDBC94D1BF5F10();
									unk_0xB13032FADD612FC1(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xFC03CFA3CE79D871(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_209(var uParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
	{
		unk_0x3E46F0AAE4B470FB(uParam0->f_8, 0);
		unk_0xE1623437A3194332(&(uParam0->f_8));
	}
}

int func_210(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_222("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
	{
		func_221();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_219(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_116(uParam0, 0, 1084227584) && func_132(1, 1, 1))
			{
				if (func_226(uParam0, 1))
				{
					iLocal_88 = unk_0xFD34717937104F1C();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_280(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_228(uParam0->f_4, uParam0->f_3);
				iVar9 = func_227(uParam0, &iVar10);
				if (!unk_0x7112137033807390(iVar9, 0))
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
						unk_0xCB482EF95FAE4D73(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xCB482EF95FAE4D73(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x7112137033807390(iVar9, 0))
						{
							unk_0xCB482EF95FAE4D73(iVar9, 0, 4096);
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
			iVar12 = func_218(&(uParam0->f_409), unk_0x3201284584C7CD83(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x3201284584C7CD83(uParam0->f_4, Var0), 1);
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
				func_217(0, 0, 1);
				unk_0x3521B10FB737CE36(unk_0xE2BBD32891C18569(uParam0->f_4, 1), 3f, 0);
				unk_0x39F8A3E01BC1A69B(unk_0xE2BBD32891C18569(uParam0->f_4, 1), 25f, 0);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				func_124();
				func_236(uParam0, 0, 0);
				Var13 = { unk_0x3201284584C7CD83(uParam0->f_4, Var6) };
				unk_0x4299736016AECE26(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(uParam0->f_3, func_215(uParam0));
				func_214(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x057123F3A835FE47(*uParam0, unk_0x3201284584C7CD83(uParam0->f_4, Var0));
				unk_0xA62406CE1190BF91(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x930701157A4B9374(*uParam0, 1);
				unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
				unk_0x3A3E4B7C6FBE305D(uParam0->f_3, 0, 0);
				unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_222("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
			{
				if (!unk_0x5D7DFE2058701942(uParam0->f_3, 0))
				{
					unk_0x692D5500D82E4F5D(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x6B6894ACFD0185EF(uParam0->f_4, func_213(uParam0->f_7), 1);
				}
				unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
				unk_0x77F0486CE0E598D5(*uParam0, 0);
				unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
				unk_0xD87B76260C547F31(0);
				unk_0xAA32DD4848CF93E0(0, 1065353216);
				unk_0x70C1F5AA59767FE6(800);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				func_124();
				func_236(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971())
			{
				func_211(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
			unk_0x77F0486CE0E598D5(*uParam0, 0);
			unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
			unk_0xD87B76260C547F31(0);
			unk_0xAA32DD4848CF93E0(0, 1065353216);
			func_211(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
			{
				if (unk_0x3D77D31E25961596(uParam0->f_3) || unk_0x5D7DFE2058701942(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), -1794415470) != 1 && unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), -1794415470) != 0)
				{
					unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_211(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 1, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_19(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0xDC374DA4DC566237(1);
		unk_0x85685830EFB9A55E(1);
	}
	func_212(23, 0);
}

void func_212(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_25704, iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_25704, iParam0);
	}
}

int func_213(int iParam0)
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

void func_214(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x37B568B777BC65F9(*uParam0))
	{
		*uParam0 = unk_0x74677C414DD7F53C(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_215(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_107() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x3201284584C7CD83(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x3201284584C7CD83(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_216(unk_0xE2BBD32891C18569(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_216(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x0C1B8F3F6EFDC58B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), 0, iParam0);
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 15f);
	}
	unk_0x8E1BB215B75D51A5(iParam1);
	func_36(0);
	func_19(1, 1, iParam2, 0, 0);
	unk_0xDC374DA4DC566237(0);
	unk_0x85685830EFB9A55E(0);
	func_212(23, 1);
}

int func_218(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x931DC90E31FA1705(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x7C00B4755E048785(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_219(int iParam0)
{
	if (func_220() && unk_0xFD34717937104F1C() >= iParam0 + 1000)
	{
		unk_0x9662BE461F9FDF9E(500);
		while (!unk_0x71364F510A1CB69F())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_36(0);
		func_171();
		return 1;
	}
	return 0;
}

int func_220()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xDF0ADAD7E584090D(0, 18) || unk_0xDF0ADAD7E584090D(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_221()
{
	if (func_31())
	{
		unk_0xE38A3C362F1CFBF3("appInternet");
	}
	if (func_30())
	{
		unk_0xE38A3C362F1CFBF3("appCamera");
	}
	if (func_38(1))
	{
		func_36(0);
	}
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xFD34717937104F1C() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xFD34717937104F1C();
}

void func_223(var uParam0)
{
	var uVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (func_154(uParam0->f_3, 1) > 30f || func_224(uParam0))
			{
				if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, -1794415470) == 1 || unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) == 1)
				{
					unk_0x3A95A0A3221D4208(&uVar0);
					unk_0x2F89329397A277BC(&uVar0);
					unk_0x0177431263151C4E(0, uParam0->f_4, 0);
					unk_0x3F01127ECD227890(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x956B3CF461C0C1C9(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x301F42EEE3C40328(uVar0);
					unk_0xE1072FA2FECBAD96(uParam0->f_3, uVar0);
					func_280(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_224(var uParam0)
{
	if ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 3f && func_387(uParam0, 5) > 15f) || unk_0xEE9EA5C5862BBFA3(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xB7223494EA10AF2F(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x39FC9AD10285F177(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 3))
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

int func_226(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xB0D49A1F9F054602(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xB0D49A1F9F054602(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xB0D49A1F9F054602(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xDC5D81351D6A4DDB(iVar0[iVar4]))
			{
				if (unk_0x7112137033807390(iVar0[iVar4], 0))
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
		if ((unk_0xFD34717937104F1C() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_227(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 1, 0);
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 2, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xD63FAD81FAF5E0CB(iParam0);
	Var0 = { unk_0x61141C81AF57CBDC(iParam0, unk_0xE2BBD32891C18569(iParam1, 1)) };
	if (unk_0x8F474E419F56E48D(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x5860446BFB759B77(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x5860446BFB759B77(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x5860446BFB759B77(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x5860446BFB759B77(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_229(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (!unk_0xCDDABFAF231CF3DD(uParam0->f_3) && func_154(uParam0->f_3, 1) < fParam2)
		{
			if (!func_140(uParam0, 5))
			{
				func_276(uParam0, 5, 0, 0);
			}
		}
		else if (func_140(uParam0, 5))
		{
			func_138(uParam0, 5, 0);
		}
		if (((func_387(uParam0, 5) > IntToFloat(iParam1) && unk_0xEAA5CEF8875FEEED(uParam0->f_4) < fParam4) && !unk_0xCDDABFAF231CF3DD(uParam0->f_3)) || func_154(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_230(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x4F9AEAB2CC029A5C(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x4F9AEAB2CC029A5C(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xB31A4B66C16032CC(uParam0->f_4, iVar18) };
		Var6 = { unk_0x61141C81AF57CBDC(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x3201284584C7CD83(uParam0->f_4, Var6) };
	Var3 = { unk_0x3201284584C7CD83(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x29D902B60F2CD9AB(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x1F4E5EFBFE503FB3(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_155(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x69C0BB7D03EE045D((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x931DC90E31FA1705(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x7C00B4755E048785(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 0)
			{
				unk_0x3A95A0A3221D4208(&(uParam0->f_243));
				unk_0x2F89329397A277BC(&(uParam0->f_243));
				unk_0x3F01127ECD227890(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x4C9989F866EF6731(uParam0->f_243, 1);
				unk_0x301F42EEE3C40328(uParam0->f_243);
				unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x4F93066CECE72793();
			if (uParam0->f_411 != 9)
			{
				if (!func_18(uParam0->f_44, 128))
				{
					func_183(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_231(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x9568B1B58F78FF36(uParam0->f_3);
			unk_0x22DD1D053CFF9707(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x3A95A0A3221D4208(&(uParam0->f_243));
			unk_0x2F89329397A277BC(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
			unk_0x301F42EEE3C40328(uParam0->f_243);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
			unk_0x3A95A0A3221D4208(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x39AA033597761444(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_231(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(uParam0, sParam1, uParam2, func_232(iParam3), 0);
}

int func_232(int iParam0)
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

float func_233(var uParam0, int iParam1)
{
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		if (func_141(uParam0))
		{
			return func_155(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_234(var uParam0)
{
	func_165(uParam0, uParam0->f_3);
	if (func_141(uParam0))
	{
		if (func_140(uParam0, 14))
		{
			func_167(uParam0);
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
			{
				unk_0xE1623437A3194332(&(uParam0->f_10));
			}
		}
	}
	if (!func_140(uParam0, 9))
	{
		if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
		{
			unk_0xE8C2974337833D20(uParam0->f_8, 0);
			unk_0x3E46F0AAE4B470FB(uParam0->f_8, 0);
		}
		func_276(uParam0, 9, 0, 0);
		func_235("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_235(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

void func_236(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_42();
		func_276(uParam0, 16, 4f, 0);
		unk_0x4F93066CECE72793();
	}
}

int func_237(var uParam0, int iParam1)
{
	if (!unk_0xD744813D9841CA9A(2))
	{
		return 0;
	}
	func_243(12);
	if (func_18(uParam0->f_44, 8))
	{
		if (!func_18(uParam0->f_44, 128))
		{
			if (unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()) && !func_18(uParam0->f_44, 256))
			{
				func_56(&(uParam0->f_44), 256);
			}
			if (func_18(uParam0->f_44, 256) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				func_183(uParam0, 135, 1, 0, 1);
				func_56(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_241(uParam0, iParam1))
	{
		if (func_154(uParam0->f_3, 1) < 35f)
		{
			if (!func_18(uParam0->f_44, 8))
			{
				unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
				func_183(uParam0, 133, 1, 0, 1);
				func_56(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x4915F4759304D5CF(uParam0->f_3) || unk_0x8B9D3A1A7C2D3C6B(uParam0->f_3)) || func_154(uParam0->f_3, 1) > 400f)
		{
			func_280(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xCAEB6CE71A2C7212(uParam0->f_2, 0);
		unk_0x0BE3742BB3253F0E(uParam0->f_4, 1);
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x5941346047B1E7C4(uParam0->f_4);
			func_239(uParam0);
			func_44(2, 0);
			bLocal_94 = true;
			func_187(&uLocal_90);
			return 1;
		}
		else
		{
			func_280(uParam0, "No Taxi", 21);
			func_238("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_238(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

void func_239(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (func_240())
		{
		}
	}
}

int func_240()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_241(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				iVar1 = unk_0x8F474E419F56E48D(iVar0);
				bVar2 = func_225(iVar0);
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
				if (unk_0x425CD7B17352316F(iVar1))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xD63FAD81FAF5E0CB(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_18(uParam0->f_44, 64))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_238("TX_VIP_DMGD", -1);
							if (func_242("TX_VIP_DMGD"))
							{
								func_56(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_18(uParam0->f_44, 32))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_238("TX_VIP_CAR", -1);
							if (func_242("TX_VIP_CAR"))
							{
								func_56(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_18(uParam0->f_44, 16))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_238("TX_VIP_SMALL", -1);
							if (func_242("TX_VIP_SMALL"))
							{
								func_56(&(uParam0->f_44), 16);
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

bool func_242(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_243(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		uVar0 = iParam0;
		unk_0x14D4D10C8FD9E0DD(8, &uVar0, 1, 1);
	}
	else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5182FF270C9DCEBC(8, &cVar1);
	}
}

void func_244(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_17(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_245()
{
	Local_343.f_0 = 0;
	func_262(34961, 34936, 1);
	func_262(34697, 34674, 1);
	func_262(34612, 34587, 1);
	func_262(34515, 34491, 1);
	func_262(34381, 34360, 1);
	func_262(34307, 34282, 1);
	func_262(34140, 34117, 1);
}

int func_246(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_280(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_247(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
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
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2F78D19B3446544E(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xEB9F2352179A557A(iParam0, 0, 40000) || unk_0xEB9F2352179A557A(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_280(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_251(var uParam0)
{
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
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
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
	{
		if (unk_0x4374EED90C523366(uParam0->f_4) && !unk_0x678F978B0FAD24D2(uParam0->f_4))
		{
			if (!func_140(uParam0, 25))
			{
				func_276(uParam0, 25, 0, 0);
			}
			else if (func_387(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_140(uParam0, 25))
		{
			func_138(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_280(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_256(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (unk_0x048D67718BE95EFE(uParam0->f_4))
		{
			if (unk_0xEB9F2352179A557A(uParam0->f_4, 0, 40000) || unk_0xEB9F2352179A557A(uParam0->f_4, 1, 40000))
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
	func_280(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_258(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
		{
			if (unk_0x097275D546C9735F(uParam0->f_4))
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
	func_280(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
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
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2F78D19B3446544E(iParam0) == 0f)
	{
		if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xEB9F2352179A557A(iParam0, 0, 40000) || unk_0xEB9F2352179A557A(iParam0, 1, 40000))
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
	func_57(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_57(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_263(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_280(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_264(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		if ((unk_0x4915F4759304D5CF(uParam0->f_3) || unk_0x7112137033807390(uParam0->f_3, 0)) || unk_0x463E3A48A46C9195(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xFA57C719261AA55D(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_266(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_267()
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

int func_268()
{
	if (!unk_0x7FC99CCC73354033(iLocal_839))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_844, 1000);
		return 0;
	}
	if (!unk_0x0FA486DE15EB3004(uLocal_943))
	{
		return 0;
	}
	if (!func_269(&iLocal_844, 1))
	{
		func_222("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_844, 1000);
		return 0;
	}
	return 1;
}

int func_269(int iParam0, bool bParam1)
{
	if (!unk_0x7FC99CCC73354033(func_15()))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x39C2D9AB77873F84("gestures@m@standing@casual"))
		{
			func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x39C2D9AB77873F84("oddjobs@taxi@"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("oddjobs@towingcome_here"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("misscommon@response"))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD744813D9841CA9A(2))
	{
		func_222("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_270(var uParam0, int iParam1)
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

int func_271(var uParam0)
{
	if (!unk_0x4915F4759304D5CF(uParam0->f_3))
	{
		uParam0->f_8 = func_272(uParam0->f_3, 0, 0);
		unk_0xFE046D9ED16748E7(1, 0);
		unk_0x3E46F0AAE4B470FB(uParam0->f_8, 1);
		unk_0xC4F12E446CCE89F5(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x22DD1D053CFF9707(uParam0->f_3, unk_0xA19140A5C42D8715(), -1, 2048, 4);
	}
	return 1;
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	return func_160(iParam0, !bParam1, bParam2);
}

int func_273(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		func_274(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_35(uParam0->f_14, 0);
		unk_0x3521B10FB737CE36(uParam0->f_14, 2f, 0);
		func_33(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x06031220D387D5BC(uParam0->f_11);
		}
		else if (unk_0xDC5D81351D6A4DDB(Global_104780.f_225[0]))
		{
			uParam0->f_3 = Global_104780.f_225[0];
			unk_0x1F7948851FB36E88(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x35C6E06B120EB2E3(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x4FE3554969185993(uParam0->f_3, sParam7);
		unk_0xB0D7019224A3A443(uParam0->f_3, 112, 1);
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			unk_0xA45E1AA8B9CF45AD(uParam0->f_3, 250);
			unk_0x13E0A8160525AE55(uParam0->f_3, 32, 0);
			unk_0x13E0A8160525AE55(uParam0->f_3, 104, 1);
			unk_0x13E0A8160525AE55(uParam0->f_3, 177, 1);
			unk_0x13E0A8160525AE55(uParam0->f_3, 116, 0);
			unk_0x94E87D83163B4BEB("TAXI_Passenger", &(uParam0->f_413));
			unk_0x80E7C4A78224C8F9(1, uParam0->f_413, joaat("player"));
			unk_0x80E7C4A78224C8F9(2, uParam0->f_413, joaat("COP"));
			unk_0xDFA901280292A2FB(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x0477993AA6A894D2(Param1, 20f, 5f, 0);
}

Vector3 func_275(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_107() };
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

void func_276(var uParam0, int iParam1, float fParam2, bool bParam3)
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

void func_277()
{
	unk_0xCACEBBBEAD8F262E(iLocal_839);
	uLocal_943 = func_279();
	func_278(1);
}

void func_278(bool bParam0)
{
	unk_0xCACEBBBEAD8F262E(func_15());
	if (bParam0)
	{
		unk_0x6D68030C791111E0("gestures@m@standing@casual");
	}
	unk_0x6D68030C791111E0("oddjobs@taxi@");
	unk_0x6D68030C791111E0("oddjobs@towingcome_here");
	unk_0x6D68030C791111E0("misscommon@response");
	unk_0x6A633E13B2A856AE("TAXI", 2);
	if (!func_18(Global_106070.f_19069, 128))
	{
		func_56(&(Global_106070.f_19069), 128);
	}
}

var func_279()
{
	return unk_0xB00CD6895BDB01A0("MIDSIZED_MESSAGE");
}

void func_280(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_171();
	func_408(2);
	Var0 = { func_295() };
	if ((!unk_0x429D45A6C6520026(&Var0) && func_173()) && !unk_0x3CAC2741CC1A631F(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x4F93066CECE72793();
		unk_0x135C61E339DABBAC(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			if (!func_120(uParam0))
			{
				if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xED3CB2E0519060F1(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_276(uParam0, 3, 0, 0);
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
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_120(uParam0))
			{
				if (unk_0x097275D546C9735F(uParam0->f_4))
				{
					func_291(uParam0, 4096, 0);
				}
				else
				{
					func_291(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_293(uParam0, &Var0);
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
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_293(uParam0, &Var0);
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_293(uParam0, &Var0);
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_44(8, 0);
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
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_291(uParam0, 0, 0);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_44(8, 0);
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
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_44(8, 0);
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
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_290(&Var0);
			func_281(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_293(uParam0, &Var0);
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
					func_293(uParam0, &Var0);
				}
			}
			else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_44(3, 0);
		}
		func_276(uParam0, 3, 0f, 1);
	}
}

int func_281(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_289(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_282(sParam2, iParam3, 0);
}

int func_282(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_172();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_288(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_287();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_286();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_285())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
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
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_284();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_283();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_172();
	}
	return 0;
}

void func_283()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_284()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_285()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_286()
{
	if (func_71(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_90();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_288(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_289(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

void func_290(char* sParam0)
{
	switch (func_3(unk_0xA19140A5C42D8715()))
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

void func_291(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		unk_0x1F4E5EFBFE503FB3(uParam0->f_3, 0);
		unk_0xDCB46BFC2265476A(uParam0->f_3);
		unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 3, 0);
		unk_0x3B7A32E04BBE59A5(uParam0->f_3, 17, 1);
		unk_0x9568B1B58F78FF36(uParam0->f_3);
		if ((func_136(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_114(uParam0->f_29)) && !bParam2)
		{
			func_292(uParam0);
		}
		else
		{
			unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 1024, 1);
			unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 131072, 1);
			unk_0x2F89329397A277BC(&uVar0);
			unk_0xCB482EF95FAE4D73(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			else
			{
				unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
			}
			unk_0x00135C6A6DDEC2EA(0, 0);
			unk_0x301F42EEE3C40328(uVar0);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, uVar0);
			unk_0x3A95A0A3221D4208(&uVar0);
		}
		unk_0xD738221C247C8B71(uParam0->f_3, 1);
	}
}

void func_292(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (func_106(func_107(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x92DDCF53AA47A63D(uParam0->f_3, 84.9058f);
				unk_0xD738221C247C8B71(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x92DDCF53AA47A63D(uParam0->f_3, 68.3138f);
				unk_0xD738221C247C8B71(uParam0->f_3, 1);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x9568B1B58F78FF36(uParam0->f_3);
			unk_0x3A95A0A3221D4208(&uVar0);
			unk_0x2F89329397A277BC(&uVar0);
			unk_0xCB482EF95FAE4D73(0, 0, 0);
			unk_0x00135C6A6DDEC2EA(0, 0);
			unk_0x956B3CF461C0C1C9(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xAE78871D9D6411E7(0, 1);
				unk_0x956B3CF461C0C1C9(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x47D73A216DD513C8(0, 151.7794f, 0);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 20000);
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xCFA037D3F2BAF3E3(uParam0->f_29, 15f, 1))
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			unk_0x301F42EEE3C40328(uVar0);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, uVar0);
			unk_0x3A95A0A3221D4208(&uVar0);
		}
		unk_0xD738221C247C8B71(uParam0->f_3, 1);
	}
}

void func_293(var uParam0, char* sParam1)
{
	if (func_294(uParam0))
	{
		func_281(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_294(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (func_155(unk_0xA19140A5C42D8715(), uParam0->f_3, 1) < 40f && !unk_0xCDDABFAF231CF3DD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_295()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar6 = unk_0x55CF08D5383E90A2();
		iVar6 = (iVar6 + Global_16832);
		if (iVar6 > -1)
		{
			return Global_14690[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_296(var uParam0)
{
	return uParam0->f_118;
}

void func_297()
{
	func_331(&Local_409);
	if (func_330(&Local_409, &Local_862))
	{
		switch (Local_862.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_329(&Local_409))
					{
						if (func_328("TX_OBJ_DL_DO") || unk_0xCE3CB618AFE55EFB(Local_409.f_9))
						{
							Local_862.f_27++;
						}
						else if (func_327(&Local_409) != 10)
						{
							func_183(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (func_327(&Local_409) > 10 && func_327(&Local_409) != 16)
				{
					func_56(&(Local_409.f_81), 67108864);
					func_183(&Local_409, 16, 1, 0, 0);
					if (bLocal_861)
					{
					}
				}
				break;
			
			case 2:
				if (func_387(&Local_409, 18) > unk_0xF59B9063EDAC7451(8f, 14f))
				{
					if (!func_144(&Local_409))
					{
						func_326(&Local_409, 0);
						Local_862.f_27++;
						if (bLocal_861)
						{
						}
					}
				}
				break;
			}
	}
	func_298(&Local_409, &uLocal_892, &Local_862, bLocal_861);
}

int func_298(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_307(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_140(uParam0, 2))
	{
		if (func_306(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xFD34717937104F1C() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_305(uParam0))
				{
					uParam2->f_7 = { func_304(uParam1) };
					func_281(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_173())
				{
					uParam2->f_13 = { func_186() };
					if (unk_0x3CAC2741CC1A631F(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_57(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_301(uParam1);
					func_276(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_147(uParam0))
				{
					if (func_173())
					{
						func_276(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_300() };
						if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_173())
				{
					uParam2->f_19 = { func_295() };
				}
				else
				{
					func_57(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_301(uParam1);
					func_276(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_140(uParam0, 14) && !func_173()) && !func_147(uParam0)) && func_387(uParam0, 18) > 1f)
				{
					func_276(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_173())
				{
					if (func_387(uParam0, 18) > 1f)
					{
						if (!unk_0x429D45A6C6520026(&(uParam2->f_1)))
						{
							func_299(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_173())
				{
					func_57(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_301(uParam1);
					func_276(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_299(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_289(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 1;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_282(sParam2, iParam4, 0);
}

struct<6> func_300()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar6 = unk_0x55CF08D5383E90A2();
		iVar6 = (iVar6 + Global_16832);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar7 /*6*/])))
			{
				return Global_14690[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar8 /*6*/])))
					{
						return Global_14690[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14690[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_301(var uParam0)
{
	int iVar0;
	
	iVar0 = func_303(uParam0);
	if (iVar0 > -1)
	{
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_56(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_302(), 24);
	}
}

var func_302()
{
	var uVar0;
	
	return uVar0;
}

int func_303(var uParam0)
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

struct<6> func_304(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_56(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_305(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_149("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_149("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_149("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_149("TX_OBJ_GYB_DO", 0, 0) || func_149("TAXI_OBJ_GYB", 0, 0)) || func_149("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_149("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_149("TX_OBJ_CYI_DO", 0, 0) || func_149("TAXI_OBJ_CYI_01", 0, 0)) || func_149("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_149("TX_OBJ_GYN_DO", 0, 0) || func_149("TAXI_OBJ_GYN", 0, 0)) || func_149("TAXI_OBJ_GYN_TG", 0, 0)) || func_149("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_149("TAXI_OBJ_CC1", 0, 0) || func_149("TAXI_OBJ_CC2", 0, 0)) || func_149("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_149("TAXI_OBJ_FTC1", 0, 0) || func_149("TAXI_OBJ_FTC2", 0, 0)) || func_149("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_149("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_149("TAXI_OBJ_GETRUN", 0, 0) || func_149("TAXI_OBJ_DRIVE", 0, 0)) || func_149("TAXI_OBJ_RETURN", 0, 0)) || func_149("TAXI_OBJ_POL", 0, 0)) || func_149("TAXI_OBJ_RUNOUT", 0, 0)) || func_149("TAXI_OBJ_POL", 0, 0));
}

int func_306(var uParam0)
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

void func_307(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_305(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_140(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_327(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_323(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_173())
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
						func_322(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_319(uParam0, Var0, func_321(uParam0, 2));
				}
				if (func_18(uParam0->f_98, 4))
				{
					func_276(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				func_162(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_387(uParam0, 16) > 1f)
				{
					func_164(1);
					if (uParam0->f_411 == 9)
					{
						func_235("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_235("TAXI_VIP_RETURN", 7500, 1);
					}
					func_276(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
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
					func_322(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_231(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_387(uParam0, 16) > func_161(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_173()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_327(uParam0))
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
				func_322(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_323(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_281(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_183(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_276(uParam0, 16, 0, 0);
				func_183(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_18(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_325(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_322(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_276(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_235("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_235("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						uParam0->f_9 = func_318(uParam0->f_17, 1);
					}
					else if (unk_0x1C05D741948BDE08(uParam0->f_9) == 0)
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x382EC7CC6BB2D812(uParam0->f_9, uParam0->f_17);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, 1);
					}
				}
				func_183(uParam0, 10, 1, 0, 0);
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
				func_185(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_231(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						uParam0->f_9 = func_318(uParam0->f_17, 1);
					}
					else if (unk_0x1C05D741948BDE08(uParam0->f_9) == 0)
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x382EC7CC6BB2D812(uParam0->f_9, uParam0->f_17);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, 1);
					}
				}
				func_183(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_317(uParam0, 33554432, Var0, "", 1, 8);
				func_276(uParam0, 16, 0, 0);
				func_183(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_173())
				{
					func_316(uParam0, 0);
					func_56(&(uParam0->f_44), 4);
					func_276(uParam0, 16, 0, 0);
					func_183(uParam0, 13, 0, 0, 0);
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
				func_185(&Var0);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_387(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_185(&Var0);
					}
					func_314(Var0, uParam1);
					func_56(&(uParam0->f_81), 67108864);
					func_276(uParam0, 16, 0, 0);
					func_276(uParam0, 11, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_387(uParam0, 11) > uParam0->f_36)
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
							func_185(&Var0);
						}
					}
					func_314(Var0, uParam1);
					func_276(uParam0, 11, 0, 0);
					func_276(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
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
					func_185(&Var0);
				}
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
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
				func_185(&Var0);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
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
				func_185(&Var0);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_185(&Var0);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				func_56(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 1, 0, 8);
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
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
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
					func_313(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_313(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_314(Var0, uParam1);
				func_323(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
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
					func_313(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_313(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_314(Var0, uParam1);
				func_323(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 12:
				func_235("TAXI_OBJ_GYB", 3500, 1);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_235("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_235("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_235("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
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
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_18(uParam0->f_98, 268435456))
				{
					func_235("TAXI_OBJ_CYI_01", 7500, 1);
					func_56(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_185(&Var0);
				func_314(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_185(&Var0);
				func_314(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_185(&Var0);
				func_314(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 33:
				func_235("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_18(uParam0->f_82, 8192))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_185(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_314(Var0, uParam1);
						}
						else
						{
							func_322(uParam0, &Var0, 0, 0, 8);
						}
						func_56(&(uParam0->f_82), 8192);
						func_276(uParam0, 16, 0, 0);
						func_276(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_18(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_185(&Var0);
					func_322(uParam0, &Var0, 0, 0, 8);
					func_56(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_18(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_185(&Var0);
					func_322(uParam0, &Var0, 0, 0, 8);
					func_56(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 46, 1, 0, 0);
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
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_236(uParam0, 0, 0);
				break;
			
			case 139:
				func_235("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_183(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x22C775856F4633CA(0, 120);
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
					func_56(&(uParam0->f_82), 268435456);
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
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x22C775856F4633CA(0, 100);
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
					func_56(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_235("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_236(uParam0, 0, 0);
				func_183(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_173())
				{
					func_235("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_236(uParam0, 0, 0);
					func_183(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_235("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_236(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_18(uParam0->f_81, 1))
				{
					func_312(uParam0, 1, Var0, "_sick1", 8);
					func_16(&(uParam0->f_81), 2);
				}
				else if (!func_18(uParam0->f_81, 2))
				{
					func_312(uParam0, 2, Var0, "_sick2", 8);
					func_16(&(uParam0->f_81), 1);
				}
				func_323(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
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
				func_56(&(uParam0->f_81), 2097152);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_276(uParam0, 16, 0, 0);
				func_323(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_323(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_323(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_323(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_18(uParam0->f_81, 4))
				{
					func_312(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_18(uParam0->f_81, 8))
				{
					func_312(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_312(uParam0, 8, Var0, "_turns3", 8);
					func_16(&(uParam0->f_81), 4);
					func_16(&(uParam0->f_81), 8);
				}
				func_323(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_311(uParam0))
				{
					func_319(uParam0, Var0, func_321(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_231(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_325(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_281(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_325(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_325(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_323(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_18(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 128);
					func_16(&(uParam0->f_83), 256);
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 256);
					func_16(&(uParam0->f_83), 512);
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 512);
					func_16(&(uParam0->f_83), 128);
					func_276(uParam0, 16, 0, 0);
				}
				func_236(uParam0, 0, 0);
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
						func_185(&Var0);
					}
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 1);
					func_16(&(uParam0->f_83), 2);
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_185(&Var0);
					}
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 4);
					}
					else
					{
						func_16(&(uParam0->f_83), 1);
					}
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_185(&Var0);
					}
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 4);
					func_16(&(uParam0->f_83), 1);
					func_276(uParam0, 16, 0, 0);
				}
				func_323(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 4096))
				{
					func_317(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 8192))
				{
					func_317(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_323(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 16384))
				{
					func_317(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 32768))
				{
					func_317(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_323(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_18(uParam0->f_82, 8))
					{
						func_310(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 16))
					{
						func_310(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 32))
					{
						func_310(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_323(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_236(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_325(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_323(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_276(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_323(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_323(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_18(uParam0->f_81, 65536))
				{
					func_317(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 131072))
				{
					func_317(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_311(uParam0))
				{
					func_319(uParam0, Var0, func_321(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_231(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_18(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 8);
					func_16(&(uParam0->f_83), 16);
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 16);
					func_16(&(uParam0->f_83), 32);
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 64);
					}
					else
					{
						func_16(&(uParam0->f_83), 8);
					}
					func_276(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_56(&(uParam0->f_83), 64);
					func_16(&(uParam0->f_83), 8);
					func_276(uParam0, 16, 0, 0);
				}
				func_323(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_173())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_322(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_319(uParam0, Var0, func_321(uParam0, 65));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_173())
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
					func_322(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_319(uParam0, Var0, func_321(uParam0, 66));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_173())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								func_323(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								func_323(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_325(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_323(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_276(uParam0, 16, 0, 0);
								func_236(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_322(uParam0, &Var0, 0, 0, 8);
									func_276(uParam0, 16, 0, 0);
									func_276(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
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
									func_185(&Var0);
									func_322(uParam0, &Var0, 0, 0, 8);
									func_276(uParam0, 16, 0, 0);
									func_276(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_322(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_183(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_323(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_18(uParam0->f_82, 1))
				{
					func_310(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 2))
				{
					func_310(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 4))
				{
					func_310(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_236(uParam0, 0, 0);
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
				func_325(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_231(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_276(uParam0, 16, 0, 0);
				func_323(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_311(uParam0))
				{
					func_319(uParam0, Var0, func_321(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_231(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_309(uParam0, Var0, 8);
				}
				func_323(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_18(uParam0->f_83, 1024))
				{
					func_56(&(uParam0->f_83), 1024);
					func_276(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2048))
				{
					func_56(&(uParam0->f_83), 2048);
					func_276(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4096))
				{
					func_56(&(uParam0->f_83), 4096);
					func_276(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_185(&Var0);
					func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_18(uParam0->f_82, 1024))
				{
					func_310(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_16(&(uParam0->f_82), 2048);
				}
				else if (!func_18(uParam0->f_82, 2048))
				{
					func_310(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_323(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 52, 1, 0, 0);
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
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_231(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_311(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_322(uParam0, &Var0, 0, 0, 8);
						func_183(uParam0, 52, 1, 0, 0);
						func_276(uParam0, 16, 0, 0);
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
						func_322(uParam0, &Var0, 0, 0, 8);
						func_276(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_325(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_276(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_323(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_276(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
				{
					func_235("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_18(uParam0->f_81, 262144))
				{
					func_317(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_317(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_317(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_323(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_308(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_18(uParam0->f_82, 134217728))
				{
					func_308(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_323(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 100:
				func_235("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_236(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_185(&Var0);
				}
				func_56(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_185(&Var0);
				}
				func_56(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_322(uParam0, &Var0, 0, 0, 8);
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
					func_185(&Var0);
				}
				func_56(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_18(uParam0->f_82, 65536))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
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
						func_185(&Var0);
						func_314(Var0, uParam1);
						func_56(&(uParam0->f_82), 65536);
						func_276(uParam0, 16, 0, 0);
						func_276(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_18(uParam0->f_82, 131072))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_185(&Var0);
						func_314(Var0, uParam1);
						func_56(&(uParam0->f_82), 131072);
						func_276(uParam0, 16, 0, 0);
						func_276(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_18(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_56(&(uParam0->f_82), 8388608);
				}
				else if (!func_18(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_56(&(uParam0->f_82), 16777216);
				}
				else if (!func_18(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_56(&(uParam0->f_82), 33554432);
				}
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_325(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_185(&Var0);
					func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_322(uParam0, &Var0, 0, 0, 8);
				}
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_314(Var0, uParam1);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_325(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_324(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_183(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_56(&(uParam0->f_81), 2097152);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_185(&Var0);
				func_314(Var0, uParam1);
				func_56(&(uParam0->f_81), 67108864);
				func_276(uParam0, 16, 0, 0);
				func_276(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_18(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_317(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_231(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_183(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_18(uParam0->f_81, 268435456))
				{
					func_317(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_183(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_235("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_236(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_18(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_317(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x4915F4759304D5CF(uParam0->f_3))
						{
							func_231(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_317(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_183(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_235("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_236(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_281(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_276(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_18(uParam0->f_81, 16777216))
				{
					func_317(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 88:
				func_235("TAXI_TIEFLEE", 7500, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_18(uParam0->f_98, 536870912))
				{
					func_235("TAXI_OBJ_CYI_1B", 7500, 1);
					func_56(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_236(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_185(&Var0);
				func_322(uParam0, &Var0, 0, 0, 8);
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
				func_322(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_322(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
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
				func_322(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_322(uParam0, &Var0, 1, 0, 8);
				func_183(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_235("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_183(uParam0, 0, 0, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			}
	}
}

void func_308(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_56(&(uParam0->f_82), iParam1);
	func_276(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_185(&Param2);
	}
	func_281(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_309(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_18(uParam0->f_82, 64))
	{
		func_56(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_18(uParam0->f_82, 128))
	{
		func_56(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x22C775856F4633CA(1, 3), 24);
	}
	func_324(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_276(uParam0, 16, 0, 0);
}

void func_310(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_56(&(uParam0->f_82), iParam1);
	func_276(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_185(&Param2);
		}
	}
	func_281(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_311(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_312(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_56(&(uParam0->f_81), iParam1);
	func_276(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_281(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_313(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
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
			func_57(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_185(sParam2);
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

void func_314(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_315(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_56(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x429D45A6C6520026(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_316(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_235("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_235("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_235("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_235("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_235("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_235("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_235("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_235("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_235("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_235("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_235("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_235("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_317(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_56(&(uParam0->f_81), iParam1);
	func_276(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_185(&Param2);
	}
	func_281(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_318(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA70969818F182A36(Param0);
	unk_0x575CF00E129E0CE1(uVar0, func_161(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(uVar0, iParam3);
	return uVar0;
}

void func_319(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_276(uParam0, 16, 0, 0);
	func_276(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x4915F4759304D5CF(uParam0->f_3))
	{
		unk_0x5746E1C0B9380990(uParam0->f_3, &cParam1, func_320(uParam0));
	}
}

char* func_320(var uParam0)
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

char* func_321(var uParam0, int iParam1)
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

int func_322(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_276(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_276(uParam0, 17, 0f, 1);
	}
	func_236(uParam0, iParam2, 0);
	return func_281(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_323(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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

int func_324(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_289(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_282(sParam2, iParam4, 0);
}

void func_325(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
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
			func_57(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_185(sParam2);
				}
				else
				{
					func_185(sParam2);
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

void func_326(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_327(var uParam0)
{
	return uParam0->f_416;
}

int func_328(char* sParam0)
{
	if (!unk_0x7032042E5696FFD7(sParam0))
	{
		if (func_149(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	if (func_173())
	{
		return 1;
	}
	if (func_140(uParam0, 17))
	{
		return 1;
	}
	if (func_140(uParam0, 14))
	{
		return 1;
	}
	if (func_147(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_330(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_140(uParam0, 9));
}

void func_331(var uParam0)
{
	if (func_140(uParam0, 17))
	{
		if (!func_140(uParam0, 14))
		{
			if (!func_147(uParam0))
			{
				if (!func_173())
				{
					func_138(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_332(var uParam0)
{
	return uParam0->f_117;
}

void func_333(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
		{
			if (bParam2)
			{
				if (func_387(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_183(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_183(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_276(uParam0, 10, 0f, 1);
				}
			}
			else if (func_387(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_183(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_183(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_276(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_387(uParam0, 10) > 30f)
		{
			if (!func_173())
			{
				if (uParam0->f_112)
				{
					func_183(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_183(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_276(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_18(uParam0->f_100, 64))
	{
		if (!func_100(&(Local_190[5 /*10*/].f_6)))
		{
			func_187(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_356(uParam0))
			{
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_355(uParam0, 1);
				func_353(5, uParam0);
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 1))
	{
		if (!func_100(&(Local_190[0 /*10*/].f_6)))
		{
			func_187(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_351(uParam0))
			{
				func_355(uParam0, 1);
				func_353(0, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2))
	{
		if (!func_100(&(Local_190[1 /*10*/].f_6)))
		{
			func_187(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_350(uParam0))
			{
				func_355(uParam0, 1);
				func_353(1, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2048))
	{
		if (!func_100(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x24A1A7BF4ED94B71(uParam0->f_4);
				func_187(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_349(uParam0))
			{
				func_355(uParam0, 1);
				func_353(8, uParam0);
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 128))
	{
		if (!func_100(&(Local_190[6 /*10*/].f_6)))
		{
			func_187(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_348(uParam0))
			{
				func_355(uParam0, 1);
				func_353(6, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32))
	{
		if (!func_100(&(Local_190[4 /*10*/].f_6)))
		{
			func_187(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_347(uParam0))
			{
				func_355(uParam0, 1);
				func_353(4, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 256))
	{
		if (!func_100(&(Local_190[7 /*10*/].f_6)))
		{
			func_187(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_346(uParam0))
			{
				func_353(7, uParam0);
				func_355(uParam0, 1);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8))
	{
		if (!func_100(&(Local_190[9 /*10*/].f_6)))
		{
			func_187(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
		}
		else if (func_94(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_345(uParam0))
			{
				func_355(uParam0, 1);
				func_353(9, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 16384))
	{
		if (!func_100(&(Local_190[13 /*10*/].f_6)))
		{
			func_187(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_339(uParam0))
			{
				func_355(uParam0, 1);
				func_353(13, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32768))
	{
		if (!func_100(&(Local_190[14 /*10*/].f_6)))
		{
			func_187(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_338(uParam0))
			{
				func_355(uParam0, 1);
				func_353(14, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4096))
	{
		if (!func_100(&(Local_190[11 /*10*/].f_6)))
		{
			func_187(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_337(uParam0))
			{
				func_355(uParam0, 1);
				func_353(11, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8192))
	{
		if (!func_100(&(Local_190[12 /*10*/].f_6)))
		{
			func_187(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_336(uParam0))
			{
				func_355(uParam0, 1);
				func_353(12, uParam0);
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_352(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4))
	{
		if (!func_100(&(Local_190[2 /*10*/].f_6)))
		{
			func_335(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_334(uParam0))
			{
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_355(uParam0, 1);
				func_353(2, uParam0);
				func_352(uParam0);
			}
		}
	}
}

int func_334(var uParam0)
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(uParam0->f_2))
	{
		if ((!unk_0x9661F58DC617631D(uParam0->f_2) && !func_100(&(Local_190[0 /*10*/].f_3))) && !func_100(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_100(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xEAA5CEF8875FEEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_187(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_94(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xEAA5CEF8875FEEED(uParam0->f_2);
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

void func_335(var uParam0, float fParam1)
{
	if (!func_100(uParam0))
	{
		func_99(uParam0, fParam1);
	}
}

int func_336(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		Var0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_100(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_100(&(Local_190[12 /*10*/].f_3)))
			{
				func_187(&(Local_190[12 /*10*/].f_3));
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

int func_337(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_100(&(Local_190[0 /*10*/].f_3))) && !func_100(&(Local_190[1 /*10*/].f_3))) && !func_100(&(Local_190[5 /*10*/].f_3))) && !func_100(&(Local_190[9 /*10*/].f_3))) && !func_100(&(Local_190[7 /*10*/].f_3))) && !func_100(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (unk_0x69C0BB7D03EE045D(Var0.f_0) > 2.5f && !func_100(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_100(&(Local_190[11 /*10*/].f_3)))
			{
				func_187(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_94(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x69C0BB7D03EE045D(uLocal_342) - unk_0x69C0BB7D03EE045D(Var0.f_0)) < 0f)
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

int func_338(var uParam0)
{
	if (((((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_100(&(Local_190[0 /*10*/].f_3))) && !func_100(&(Local_190[8 /*10*/].f_3))) && !func_100(&(Local_190[5 /*10*/].f_3))) && !func_100(&(Local_190[9 /*10*/].f_3))) && !func_100(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_100(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_5))
			{
				if ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 15f && func_155(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x7112137033807390(uParam0->f_5, 0) && !unk_0x588F5E48C78F1C73(uParam0->f_5, -1, 0)))
				{
					func_187(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_155(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x6C55C22D72D438C8(uParam0->f_5))
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_94(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x6C55C22D72D438C8(uParam0->f_5))
		{
			func_93(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_339(var uParam0)
{
	if (((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_100(&(Local_190[9 /*10*/].f_3))) && !func_100(&(Local_190[7 /*10*/].f_3))) && !func_100(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_340(uParam0->f_4) && unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 15f)
		{
			if (!func_100(&(Local_190[13 /*10*/].f_3)))
			{
				func_187(&(Local_190[13 /*10*/].f_3));
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

bool func_340(int iParam0)
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
	
	unk_0x5D260ECB08BF5B88(unk_0xE2BBD32891C18569(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x5D260ECB08BF5B88(unk_0xE2BBD32891C18569(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xF3DFF37E04D42116(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_344((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_343(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_341(unk_0xE2BBD32891C18569(iParam0, 1), Var15, Var18, Var21);
}

int func_341(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_344(Param6 - Param3) };
	Var3 = { func_344(Param9 - Param3) };
	fVar6 = func_342(Param0, Var0);
	fVar7 = func_342(Param3, Var0);
	fVar8 = func_342(Param6, Var0);
	fVar9 = func_342(Param0, Var3);
	fVar10 = func_342(Param3, Var3);
	fVar11 = func_342(Param9, Var3);
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

float func_342(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_343(struct<3> Param0, int iParam3)
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

Vector3 func_344(struct<3> Param0)
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

int func_345(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_346(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			if (unk_0xEE9EA5C5862BBFA3(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x83ED9EAE6B660383(uParam0->f_4) <= -145f || unk_0x83ED9EAE6B660383(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x83ED9EAE6B660383(uParam0->f_4) <= 35f && unk_0x83ED9EAE6B660383(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_347(var uParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0x516E54B08EC3C5A2(unk_0xD4E735F4B6A956AC());
		if (iVar0 == 0)
		{
			if (!func_100(&(Local_190[4 /*10*/].f_3)))
			{
				func_187(&(Local_190[4 /*10*/].f_3));
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

int func_348(var uParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0x979D31722AEEC6AF(unk_0xD4E735F4B6A956AC());
		if (iVar0 == 0)
		{
			if (!func_100(&(Local_190[6 /*10*/].f_3)))
			{
				func_187(&(Local_190[6 /*10*/].f_3));
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

int func_349(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xFD2A0C4CDE18D862(uParam0->f_4))
		{
			iVar0 = unk_0x24A1A7BF4ED94B71(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xDCB46BFC2265476A(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_183(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_183(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_350(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		Var0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (unk_0x69C0BB7D03EE045D(Var0.f_0) > 3f && !func_100(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_100(&(Local_190[1 /*10*/].f_3)))
			{
				func_187(&(Local_190[1 /*10*/].f_3));
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

int func_351(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x678F978B0FAD24D2(uParam0->f_4) && unk_0x26D28D230F871E8D(uParam0->f_4))
		{
			if (!func_100(&(Local_190[0 /*10*/].f_3)))
			{
				func_187(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_94(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_93(&(Local_190[0 /*10*/].f_3));
				func_98(&(Local_190[1 /*10*/].f_6));
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

void func_352(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_100(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_98(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_276(uParam0, 10, 0f, 1);
	unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
}

void func_353(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_354(uParam1, iParam0);
	func_93(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_354(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_355(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_356(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 25f)
		{
			if (!func_100(&(Local_190[5 /*10*/].f_3)))
			{
				func_187(&(Local_190[5 /*10*/].f_3));
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

void func_357(var uParam0)
{
	if (!func_141(uParam0))
	{
		if ((unk_0xFD34717937104F1C() % 1000) < 50)
		{
		}
		func_153(uParam0, 1);
	}
	else if (func_140(uParam0, 14))
	{
		func_167(uParam0);
		func_156(uParam0, 0);
	}
}

void func_358(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
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
								func_57(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xFD34717937104F1C();
							}
						}
						else
						{
							func_17(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_252(Local_343.f_1[iVar0 /*4*/], 4) && !func_252(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_57(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_280(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_359(var uParam0, var uParam1, bool bParam2)
{
	if (!func_18(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x429D45A6C6520026(&(uParam0->f_124)) && func_173())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_173())
				{
					StringCopy(&(uParam0->f_124), func_302(), 24);
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

void func_360()
{
	if ((unk_0xF2DB717A73826179((func_387(&Local_409, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_364(&Local_409, 27, fLocal_956[0]))
	{
		switch (iLocal_846)
		{
			case 0:
				func_362();
				Local_409.f_39 = fLocal_956[1];
				Local_409.f_40 = fLocal_956[2];
				iLocal_846++;
				break;
			
			case 1:
				func_361(26, 27, Local_409.f_39);
				break;
			}
	}
}

int func_361(int iParam0, int iParam1, float fParam2)
{
	if (func_140(&Local_409, 7))
	{
		if (iLocal_1014 < 22)
		{
			if (!func_173())
			{
				if (func_387(&Local_409, 7) <= (fLocal_964[iLocal_1014] + 6f) && func_387(&Local_409, 7) >= (fLocal_964[iLocal_1014] - 6f))
				{
					if (func_135(Local_409.f_17, 0) <= fLocal_987[iLocal_1014] && iLocal_1015 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1015++;
							func_183(&Local_409, iParam0, 1, 0, 0);
							func_98(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_100(&uLocal_855))
						{
							if (func_94(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1015++;
								func_183(&Local_409, iParam0, 1, 0, 0);
								func_93(&uLocal_855);
								func_98(&uLocal_855);
							}
						}
						return 1;
					}
					else if (func_135(Local_409.f_17, 0) > fLocal_987[iLocal_1014] && iLocal_1016 < 8)
					{
						if (!iLocal_1017)
						{
							iLocal_1014++;
							iLocal_1016++;
							func_183(&Local_409, iParam1, 1, 0, 0);
							func_98(&uLocal_855);
							iLocal_1017 = 1;
						}
						if (func_100(&uLocal_855))
						{
							if (func_94(&uLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1016++;
								func_183(&Local_409, iParam1, 1, 0, 0);
								func_93(&uLocal_855);
								func_98(&uLocal_855);
							}
						}
						return 1;
					}
				}
				else if (func_387(&Local_409, 7) > (fLocal_964[iLocal_1014] + 6f))
				{
					iLocal_1014++;
					return 1;
				}
			}
		}
		else if (func_387(&Local_409, 7) >= fParam2 && func_135(Local_409.f_17, 0) > 50f)
		{
			if (!func_173())
			{
				if (!func_100(&uLocal_858))
				{
					func_98(&uLocal_858);
				}
				else if (func_94(&uLocal_858) > 4f)
				{
					func_183(&Local_409, iParam1, 1, 0, 0);
				}
			}
			else if (func_100(&uLocal_858))
			{
				func_93(&uLocal_858);
			}
			return 1;
		}
	}
	return 0;
}

void func_362()
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
	Local_409.f_23 = { func_275(iLocal_953) };
	Local_409.f_33 = func_363(iLocal_953);
	Local_409.f_26 = { func_275(1) };
	Local_409.f_34 = func_363(1);
	Local_409.f_29 = { 328.6758f, 443.9846f, 144.2298f };
}

float func_363(int iParam0)
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

int func_364(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_140(uParam0, 7))
		{
			func_139(uParam0, 23);
			if (func_387(uParam0, 7) > fParam2 && func_387(uParam0, 23) > 35f)
			{
				func_276(uParam0, 23, 0, 0);
				func_183(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_365(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_140(uParam0, 27))
	{
		func_139(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_387(uParam0, 27) > 5f)
	{
		if (func_379(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_276(uParam0, 27, 0, 0);
			func_276(uParam0, 10, 0, 0);
			func_377(uParam0, &uVar0, uParam1);
		}
		func_374(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_366(uParam0);
	}
	if ((((!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) && (unk_0x37B568B777BC65F9(*uParam0) && !unk_0xC3553172354FFB69(*uParam0))) && (unk_0x37B568B777BC65F9(uParam0->f_1) && !unk_0xC3553172354FFB69(uParam0->f_1))) && !unk_0x8187CC9EB2D7CFE6()) && !func_173())
	{
		if (func_387(uParam0, 26) > 10f)
		{
			func_138(uParam0, 26, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
		}
	}
	else if (func_140(uParam0, 26))
	{
		func_138(uParam0, 26, 0);
	}
	return 0;
}

void func_366(var uParam0)
{
	if (!func_373(uParam0->f_429))
	{
		uParam0->f_429 = func_198();
		func_371(&(uParam0->f_429), 0, 0, unk_0x22C775856F4633CA(4, 7), 0, 0, 0);
	}
	else if (func_367(uParam0->f_429))
	{
		func_280(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_367(int iParam0)
{
	return func_368(func_198(), iParam0);
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_373(iParam1) || !func_373(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
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
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
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
	return 0;
}

int func_369(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_370(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

void func_371(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_370(*uParam0);
	iVar3 = func_192(*uParam0);
	iVar4 = func_189(*uParam0);
	iVar5 = func_369(*uParam0);
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
	iVar6 = func_202(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_202(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_372(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_206(uParam0, iParam1);
	func_195(uParam0, iParam2);
	func_197(uParam0, iParam3);
	func_200(uParam0, iParam5);
	func_201(uParam0, iParam4);
	func_199(uParam0, iParam6);
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
	iVar0 = func_369(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_189(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_192(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_370(iParam0);
	if (iVar5 < 1 || iVar5 > func_202(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_374(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_376()) && !func_141(uParam0)) || ((uParam0->f_411 != 9 && func_241(uParam0, 1)) && !func_141(uParam0)))
		{
			uVar0 = func_375(uParam0->f_4);
			unk_0x69C8D2CAA0701F42(&uVar0);
			uParam0->f_4 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			unk_0x1F7948851FB36E88(uParam0->f_4, 1, 0);
			func_167(uParam0);
			func_156(uParam0, 0);
		}
	}
}

var func_375(var uParam0)
{
	return uParam0;
}

int func_376()
{
	int iVar0;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
				{
					if (unk_0xD3C4AB5E628133C1(iVar0, func_15()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_377(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_378(uParam0, 0, 1))
			{
				func_280(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_378(uParam0, 0, 4))
			{
				func_280(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_378(uParam0, 0, 8))
			{
				func_280(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_378(uParam0, 1, 1))
			{
				func_280(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_378(uParam0, 0, 1))
			{
				func_280(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_18(*uParam2, 2) && func_120(uParam0))
			{
				func_280(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_378(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (!unk_0xCDDABFAF231CF3DD(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_183(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_183(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_379(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA19140A5C42D8715();
	if (!unk_0x7112137033807390(iVar0, 0) && !unk_0x7112137033807390(iParam0, 0))
	{
		if (!func_18(*uParam2, 1))
		{
			if (func_385(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_18(*uParam2, 2))
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_18(*uParam2, 4))
		{
			if (func_383(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_18(*uParam2, 8))
		{
			if (func_382(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_18(*uParam2, 128);
		if (bParam4)
		{
			if (func_380(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_18(*uParam2, 16))
		{
			if (func_380(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (iParam7 && unk_0xDEAEC99031DCB92A(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x24A1A7BF4ED94B71(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x24A1A7BF4ED94B71(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(uVar0, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(uVar1, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x97B2B0016AD3C7C6(iParam0))
			{
				if (unk_0xA8D84E6AD4EB2356(iParam0) == unk_0xA19140A5C42D8715())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
		{
			if (unk_0xA60C975CBAB69F34(iParam0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x51421B7F2A039FED(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x9910CE19E16B00A7(iParam0))
		{
			return 1;
		}
	}
	if (func_381(unk_0xA19140A5C42D8715(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x685AE6AF34B35D3B(iParam0) && func_154(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), unk_0xCAEB6CE71A2C7212(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iParam0))
		{
			return 1;
		}
		if (!unk_0x7112137033807390(uParam1, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam1, unk_0xA19140A5C42D8715(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_381(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x41CA0CDBE31A440F(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xE2BBD32891C18569(iParam0, 1), unk_0xE2BBD32891C18569(iParam1, 1)) < 2.5f)
			{
				if (unk_0xC42DE41AEED00E7B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_382(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x852B8F739A2072BE(uParam0, 4))
	{
		if (unk_0x41CA0CDBE31A440F(uParam0) && !unk_0x07F5A0B42D3F3491(iParam0))
		{
			if (unk_0xA60C975CBAB69F34(uParam1, unk_0xE2BBD32891C18569(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_383(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x7112137033807390(uParam1, 0))
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam1, 1) };
	}
	if (unk_0x9809FE4B550B1EFE(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB3CB9098064F83A7(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x852B8F739A2072BE(uParam0, 2))
	{
		if (unk_0x41CA0CDBE31A440F(uParam0))
		{
			if (unk_0xA60C975CBAB69F34(iParam1, unk_0xE2BBD32891C18569(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xC42DE41AEED00E7B(unk_0xA2EA4BA455370F3C(iParam1), iParam0, 120f) && unk_0x58DE86018EA47551(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5D7DFE2058701942(unk_0xA2EA4BA455370F3C(iParam1), 0))
			{
				iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xA2EA4BA455370F3C(iParam1), 0);
			}
			if (unk_0x1CD6AC2CF787DFCB(iParam0) || func_384(iVar3))
			{
				if (unk_0xA60C975CBAB69F34(iParam1, unk_0xE2BBD32891C18569(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xC42DE41AEED00E7B(unk_0xA2EA4BA455370F3C(iParam1), iParam0, 120f) && unk_0x58DE86018EA47551(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x0AF5F990243ADDFB((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xB0D49A1F9F054602(iParam0, -1, 0) != 0)
			{
				if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_155(unk_0xA19140A5C42D8715(), iParam0, 1) < 40f)
						{
							if (unk_0x779AE368CB4F1259(unk_0xD4E735F4B6A956AC(), &uVar1))
							{
								if ((unk_0xFAC06EE780B57279(uVar1) && unk_0xB86D86A5DBBC79F0(iVar1) == iParam0) || (unk_0x281590680327CDEA(iVar1) && unk_0xA2EA4BA455370F3C(iVar1) == unk_0xB0D49A1F9F054602(iParam0, -1, 0)))
								{
									if ((unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) && unk_0xD73B1037F6BD4B90(0, 24)) || (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0xD73B1037F6BD4B90(0, 69)))
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

int func_385(int iParam0, var uParam1)
{
	if (!unk_0x7112137033807390(uParam0, 0))
	{
		if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
		{
			if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
			{
				if (unk_0xC42DE41AEED00E7B(iParam0, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_154(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xFD34717937104F1C();
						}
						else if ((unk_0xFD34717937104F1C() - uParam1->f_1) > uParam1->f_3)
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

void func_386(var uParam0)
{
	if (!func_18(uParam0->f_98, 2))
	{
		if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
		{
			if (func_136(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x01AF8CB960828C2B(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_56(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_387(var uParam0, int iParam1)
{
	if (!func_100(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_187(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_388()
{
	func_389(&Local_409);
	func_406();
}

void func_389(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_408(2);
	}
}

int func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_173() && func_387(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
			{
				if (unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_55(uParam0) == 0 || func_252(uParam0->f_85, 32))
					{
						if (!unk_0x097275D546C9735F(uParam0->f_4))
						{
							func_291(uParam0, 4160, 0);
						}
						else
						{
							func_291(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_291(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_291(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_291(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xFD34717937104F1C() % 1000) < 50)
	{
	}
	return 0;
}

void func_391(var uParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
	{
		unk_0xE1623437A3194332(&(uParam0->f_8));
	}
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
	{
		unk_0xE1623437A3194332(&(uParam0->f_9));
	}
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
	{
		unk_0xE1623437A3194332(&(uParam0->f_10));
	}
}

int func_392(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_393()
{
	func_395(&Local_409, 2);
	Local_409.f_410 = 0;
	func_394(&Local_409, 3, 6);
	Local_409.f_6 = 2f;
}

void func_394(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_395(var uParam0, int iParam1)
{
	func_405(1);
	func_169();
	func_6(&(uParam0->f_244));
	func_404(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_18(Global_106070.f_19069, 4))
	{
		func_56(&(Global_106070.f_19069), 4);
	}
	func_399(uParam0);
	func_397(uParam0);
	unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, 0);
	uParam0->f_102 = (func_396(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x6A633E13B2A856AE("TAXI", 2);
}

int func_396(int iParam0)
{
	return Global_106070.f_19069.f_39[iParam0];
}

void func_397(var uParam0)
{
	switch (func_55(uParam0))
	{
		case 0:
			func_398(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_398(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_398(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_398(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_398(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_398(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_398(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_398(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_398(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_398(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_398(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_399(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_403(uParam0, 3);
			func_402(uParam0, 14);
			break;
		
		case 1:
			func_403(uParam0, 14);
			func_402(uParam0, 8);
			break;
		
		case 2:
			func_403(uParam0, 8);
			func_402(uParam0, 7);
			break;
		
		case 3:
			func_403(uParam0, 15);
			func_402(uParam0, 6);
			break;
		
		case 4:
			func_403(uParam0, 0);
			func_402(uParam0, 3);
			break;
		
		case 5:
			func_403(uParam0, 6);
			func_402(uParam0, 7);
			break;
		
		case 6:
			func_403(uParam0, 8);
			func_402(uParam0, 15);
			break;
		
		case 7:
			func_403(uParam0, 8);
			func_402(uParam0, 14);
			break;
		
		case 8:
			func_403(uParam0, 7);
			func_402(uParam0, 15);
			break;
		
		case 9:
			func_403(uParam0, unk_0x22C775856F4633CA(0, 17));
			iVar0 = func_401((uParam0->f_418.f_2 + unk_0x22C775856F4633CA(1, 17)), 0, 16);
			func_402(uParam0, iVar0);
			func_400(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_400(var uParam0)
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

int func_401(int iParam0, int iParam1, int iParam2)
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

void func_402(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_403(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_404(var uParam0)
{
	uParam0->f_2 = unk_0xA19140A5C42D8715();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_107() };
	uParam0->f_17 = { func_107() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_138(uParam0, 32, 0);
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105126, unk_0x61D2332983ACC05C(), 24);
		Global_105120 = 1;
	}
	else
	{
		StringCopy(&Global_105126, "NULL", 24);
		Global_105120 = 0;
	}
}

void func_406()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 26, 0);
	}
	func_407();
	func_109();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_407()
{
	unk_0xA5DE74AE39867B03(iLocal_839);
}

void func_408(int iParam0)
{
	Global_104780.f_22 = iParam0;
}

