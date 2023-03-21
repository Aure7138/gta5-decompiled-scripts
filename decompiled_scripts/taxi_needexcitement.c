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
	int iLocal_93 = 0;
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
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	struct<3> Local_847[1];
	int iLocal_851 = 0;
	struct<3> Local_852 = { 0, 0, 0 } ;
	struct<3> Local_855 = { 0, 0, 0 } ;
	struct<3> Local_858 = { 0, 0, 0 } ;
	int iLocal_861 = 0;
	var uLocal_862 = 0;
	bool bLocal_863 = 0;
	int iLocal_864 = 0;
	bool bLocal_865 = 0;
	struct<28> Local_866 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 5;
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
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 1097859072;
	var uLocal_940 = 1500;
	var uLocal_941 = 45;
	var uLocal_942 = 1103626240;
	var uLocal_943 = 5;
	var uLocal_944 = 0;
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
	var uLocal_955 = 0;
	var uLocal_956 = 0;
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
	uLocal_77 = unk_0xFD411B1045595D7D();
	uLocal_78 = unk_0x5E82627D2AFEFEE1();
	Local_83 = { 500f, 500f, 500f };
	iLocal_851 = joaat("a_m_y_skater_02");
	Local_852 = { -496.0739f, -336.6628f, 33.5017f };
	Local_855 = { -484.6879f, -330.1646f, 33.3534f };
	Local_858 = { 725.3476f, 1204.526f, 324.9057f };
	iLocal_861 = 1;
	if (unk_0x9EC5BDC006623C42(67))
	{
		func_421(2);
		func_420();
	}
	unk_0xC48A4BABDFAAB2B9(1);
	func_407(0);
	while (true)
	{
		if (unk_0x765F6FEEFF39224F(Local_409.f_2))
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
	uParam0->f_2 = unk_0x33CD235DF1E6A94E();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x33CD235DF1E6A94E());
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
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
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
		return Global_106565.f_28044[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x33CD235DF1E6A94E());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
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
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x990A34F9DA8E506D(iParam2, 0);
			}
			else
			{
				unk_0x990A34F9DA8E506D(iParam2, 1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC36B7971576CC42F(iParam2, 0);
			}
			else
			{
				unk_0xC36B7971576CC42F(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_406(&Local_409))
	{
		func_405(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_404(&Local_409, 0))
			{
				func_402();
			}
		}
		else if (func_401(&Local_409, 31) > 5f)
		{
			func_421(2);
			func_420();
		}
	}
	else
	{
		func_400(&Local_409);
		if (Local_409.f_410 <= 9)
		{
			func_366(&Local_409, &uLocal_937);
			func_365(&Local_409);
		}
		func_364(&Local_409, &uLocal_862, 0);
		if (Local_409.f_410 > 2)
		{
			if (!func_363(&Local_409))
			{
				func_332();
			}
			else
			{
				func_326(&Local_409, "Taxi Not Driveable", func_331(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			if (Local_409.f_139)
			{
				if (!unk_0xD62C4419A41F106A(Local_409.f_4, 0) && func_325(Local_409.f_4, Local_409.f_17, 1) > 450f)
				{
					func_301(&Local_409, 0, 0);
				}
				else
				{
					func_301(&Local_409, 0, 1);
				}
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_300(&(Local_847[0 /*3*/]), "TAXI_SC_BN_02", 200);
				func_299(&Local_409, &Local_847);
				func_296();
				func_295(&Local_409, 16, 4f, 0);
				func_293(&Local_409, Local_852, Local_855, "TaxiFelipe", iLocal_851, 256f, 30f);
				func_291(&Local_409);
				func_290(&Local_409, 1);
				break;
			
			case 1:
				if (func_288())
				{
					func_287();
					func_267();
					func_266(&Local_409);
					Local_409.f_14 = { Local_852 };
					func_290(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_261(&Local_409, 1))
				{
					if (!unk_0xD62C4419A41F106A(Local_409.f_3, 0))
					{
						unk_0x5FEE418CE11E6DDE(Local_409.f_3, 29, 0);
						unk_0x93AA93DA1B137032(Local_409.f_3, 3, 1, 1, 0);
						unk_0x93AA93DA1B137032(Local_409.f_3, 4, 1, 2, 0);
						unk_0x93AA93DA1B137032(Local_409.f_3, 0, 0, 1, 0);
						unk_0x93AA93DA1B137032(Local_409.f_3, 11, 1, 0, 0);
					}
					func_260(&Local_409, 1, 0);
					func_290(&Local_409, 5);
				}
				break;
			
			case 5:
				if (!unk_0xD4B4F68F3449CBEC(Local_409.f_4, -484.9218f, -370.1231f, 33.40805f, -517.9089f, -362.7899f, 37.31326f, 28.75f, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(Local_409.f_4, -472.0588f, -321.036f, 33.35326f, -485.479f, -285.4217f, 37.49232f, 28.75f, 0, 1, 0))
				{
					if (func_232(&Local_409, 0, 30f))
					{
						func_290(&Local_409, 15);
					}
				}
				break;
			
			case 15:
				if (func_231(&Local_409))
				{
					Local_409.f_17 = { Local_858 };
					bLocal_863 = true;
					func_227(&Local_409, 9, 1, 0, 0);
					func_226(&Local_409);
					Local_409.f_46 = unk_0xE80842D7B53F8525(Local_409.f_4);
					func_290(&Local_409, 7);
				}
				if (unk_0x91D5C8283D19AF49(Local_409.f_4, 0))
				{
					if (!unk_0x10930B9CAD4111C2(Local_409.f_2, Local_409.f_4, 0))
					{
						func_224(&Local_409);
						func_290(&Local_409, 5);
					}
				}
				break;
			
			case 7:
				if (bLocal_863)
				{
					func_223();
					func_290(&Local_409, 9);
				}
				break;
			
			case 9:
				if (((func_325(Local_409.f_4, Local_409.f_17, 1) < 875f && func_222(&Local_409) != 68) && !func_221()) && !iLocal_864)
				{
					func_219(&(Local_409.f_100), 16384);
					func_227(&Local_409, 68, 1, 0, 1);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_864 = 1;
				}
				if (func_218(Local_409.f_81, 67108864))
				{
					if (!func_217(&Local_409))
					{
					}
				}
				if (func_180(&Local_409, 9f, 7.5f))
				{
					unk_0x1ABDB383C83A336A(&(Local_409.f_9));
					func_179();
					func_178(&Local_866, -1, 1);
					if (Local_409.f_76 >= 95)
					{
						func_177(&Local_409, 0);
					}
					func_175(&Local_409);
					func_171(&Local_409);
					if (Local_409.f_56 < Local_409.f_58)
					{
						func_290(&Local_409, 28);
					}
					else
					{
						unk_0xC4A347124F39D998(Local_409.f_3, unk_0x33CD235DF1E6A94E(), -1, 2049, 3);
						unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), Local_409.f_3, -1, 2049, 3);
						func_290(&Local_409, 27);
					}
					func_170(&Local_409);
				}
				break;
			
			case 27:
				if (func_160(&Local_409, 1))
				{
					unk_0xE0DAC4ABE9900D9A(Local_409.f_3);
					unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
					func_159(&Local_409);
					func_290(&Local_409, 29);
				}
				break;
			
			case 28:
				if (iLocal_839 == 2 && !func_158(Local_409.f_2, Local_409.f_3))
				{
					if (!func_157(&uLocal_944))
					{
						func_155(&uLocal_944);
					}
					else if (func_154(&uLocal_944) > 5f)
					{
						func_227(&Local_409, 106, 1, 0, 1);
						func_155(&uLocal_944);
					}
				}
				if (func_115(&iLocal_839, &Local_409, &(Local_409.f_3), &uLocal_840, 1))
				{
					if (!unk_0xBC2FC12AD0FBF72E(Local_409.f_3))
					{
						func_105(&(Local_409.f_244), Local_409.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					func_290(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_74(&Local_409, &uLocal_947))
				{
					if (!func_221())
					{
						func_9(1, &Local_409, 1);
						func_290(&Local_409, 30);
					}
				}
				break;
			
			case 30:
				func_420();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_50(uParam1);
		if (!unk_0xBC2FC12AD0FBF72E(uParam1->f_3))
		{
			unk_0x5FEE418CE11E6DDE(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_48(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)
{
	func_405(uParam0);
	if (func_221())
	{
		func_46();
	}
	func_44();
	unk_0xD362430CD61A9B08();
	unk_0xEDF90B96BED57BCE(1);
	func_40(0);
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		unk_0x09993E7216CF52C4(uParam0->f_4, 0);
		unk_0x6FF8EF6DC21D25B9(uParam0->f_4);
		unk_0x251D428435E55081(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_35(uParam0->f_14, 1, 1114636288);
	func_34(&(uParam0->f_244), 3);
	unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, 1);
	if (func_31())
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 1, 0);
	}
	unk_0x6B9BB8BC34DAFFD9(1);
	func_21(0, 1, 1, 0, 0, 0);
	unk_0xDFF589A2149528CE(1);
	unk_0x35675D19812BDF22(1);
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
		unk_0x63F0B040CE6EDF0F(0, 0, 3000, 1, 0, 0);
		unk_0x052830EE89C97404(1);
	}
	if (func_218(Global_106565.f_19091, 4))
	{
		func_19(&(Global_106565.f_19091), 4);
		unk_0x8C4EA5F6857553AE(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0xFF2DEA68E2D3602E("gestures@m@standing@casual");
	unk_0xFF2DEA68E2D3602E("oddjobs@taxi@");
	unk_0xFF2DEA68E2D3602E("oddjobs@towingcome_here");
	if (unk_0x43E505744A9B715D())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x5A8ABDA4992DA968(unk_0x3EE1295CEFBEFED4()))
	{
		unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 1, 0);
	}
	unk_0x198BCB9897710EAB(unk_0xF2DB717A73826179((func_11(&uLocal_90) * 1000f)), 12, 0);
}

float func_11(var uParam0)
{
	if (func_157(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x6D2E2622CA149402(&uVar0))
		{
		}
	}
}

struct<8> func_15(int iParam0)
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

void func_16(var uParam0)
{
	unk_0x55A131BBB37B58A1(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_3))
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (!unk_0xF0D230FB550CD6EB(uParam0->f_3, 0))
			{
				unk_0x69267F2BCC4CAF14(uParam0->f_3);
			}
			unk_0x4A852F02088ECC9D(uParam0->f_3, 0);
			unk_0xD2E80177F27FD43F(255, uParam0->f_413, joaat("player"));
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x1F45B4626AC4A4C0(&(uParam0->f_3));
		}
	}
}

int func_18()
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_30(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(0);
			}
			if (!func_29())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_30(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_26(unk_0x95B959F18401C09A())) && !func_23(unk_0x95B959F18401C09A(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_26(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_22()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_24(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
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
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_29()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

int func_31()
{
	if (!func_33() && !func_32())
	{
		if (!unk_0x9808D9BE8CC3331B(unk_0x3EE1295CEFBEFED4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_35(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_36(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_36(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x496BE3DBA113D228(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xF699E61158861D53(Var0, Var3, 1);
		unk_0xBD881F1B7ECAD975();
	}
}

Vector3 func_36(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_37(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_38(Param0, func_39(), 0))
	{
		Var0 = { func_36(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_36(Param0, 1f, 30f, 30f, 10f) };
		unk_0x5856B9BF2B4E98C4(Var0, Var3, iParam3, 1);
	}
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
	if (func_43())
	{
		return;
	}
	if (Global_14725)
	{
		func_41(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_29())
	{
		Global_14553.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_42(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
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
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

void func_46()
{
	Global_14732 = 0;
	func_47();
}

void func_47()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
	}
}

void func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106565.f_19091.f_22[0]++;
			func_49("Fares Completed ++ = ", Global_106565.f_19091.f_22[0]);
			break;
		
		case 1:
			Global_106565.f_19091.f_22[1]++;
			func_49("Fares Failed ++ = ", Global_106565.f_19091.f_22[1]);
			break;
		
		case 2:
			Global_106565.f_19091.f_22[2]++;
			func_49("Fares Accepted ++ ", Global_106565.f_19091.f_22[2]);
			break;
		
		case 3:
			Global_106565.f_19091.f_22[3]++;
			func_49("Fares Expired ++ ", Global_106565.f_19091.f_22[3]);
			break;
		
		case 13:
			Global_106565.f_19091.f_22[13]++;
			func_49("Passengers run ++ = ", Global_106565.f_19091.f_22[13]);
			break;
		
		case 14:
			Global_106565.f_19091.f_22[14]++;
			func_49("Passenger Forced to Pay ++ = ", Global_106565.f_19091.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106565.f_19091.f_22[4])
				{
					Global_106565.f_19091.f_22[4] = iParam1;
					func_49("This distance ", iParam1);
					func_49(" is longer than current best", Global_106565.f_19091.f_22[4]);
				}
				else
				{
					func_49("Longest Distance Not Beat ", Global_106565.f_19091.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106565.f_19091.f_22[5] = (Global_106565.f_19091.f_22[5] + iParam1);
			func_49("Total Distance w/ Passenger = ", Global_106565.f_19091.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106565.f_19091.f_22[6]++;
			}
			else
			{
				Global_106565.f_19091.f_22[6] = (Global_106565.f_19091.f_22[6] + iParam1);
			}
			func_49("Wanted Levels ++ = ", Global_106565.f_19091.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106565.f_19091.f_22[7] = (Global_106565.f_19091.f_22[7] + iParam1);
			}
			else
			{
				Global_106565.f_19091.f_22[7]++;
			}
			func_49("Wanted Levels Lost = ", Global_106565.f_19091.f_22[7]);
			break;
		
		case 8:
			Global_106565.f_19091.f_22[8]++;
			func_49("Taxis wrecked ++ = ", Global_106565.f_19091.f_22[8]);
			break;
		
		case 9:
			Global_106565.f_19091.f_22[9]++;
			func_49("Horn Honked ++ = ", Global_106565.f_19091.f_22[9]);
			break;
		
		case 10:
			Global_106565.f_19091.f_22[10] = (Global_106565.f_19091.f_22[10] + iParam1);
			func_49("Total Money Earned = ", Global_106565.f_19091.f_22[10]);
			break;
		
		case 11:
			Global_106565.f_19091.f_22[11] = (Global_106565.f_19091.f_22[11] + iParam1);
			func_49("Total Tips Earned = ", Global_106565.f_19091.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106565.f_19091.f_22[12])
			{
				Global_106565.f_19091.f_22[12] = iParam1;
				func_49("New Highest Tip = ", Global_106565.f_19091.f_22[12]);
			}
			else
			{
				func_49("Highest Tip Not Reached = ", Global_106565.f_19091.f_22[12]);
			}
			break;
	}
}

void func_49(char* sParam0, int iParam1)
{
}

void func_50(var uParam0)
{
	func_48(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_421(1);
		func_60(15, 1);
	}
	func_219(&(Global_106565.f_19091), 1024);
	if (!func_218(Global_106565.f_19091, 64))
	{
		func_51(func_58(func_59(uParam0)), 0, 0);
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
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
		func_57((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_52();
	}
}

void func_52()
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
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106565.f_10188.f_3853))
	{
		func_56(13, unk_0xF34EE736CF047844(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_55() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_53();
				}
			}
		}
	}
}

int func_53()
{
	if (func_54(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_55()
{
	return Global_25765;
}

int func_56(int iParam0, int iParam1)
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
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_58(int iParam0)
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

int func_59(var uParam0)
{
	return uParam0->f_411;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (func_73(14) && !func_72(iParam0))
	{
		return 0;
	}
	if (unk_0x321808B6A32CCA20(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_71(&Global_4269608))
	{
		if (func_69(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBECC4FBAC9C8E5E7(iParam0))
		{
			return 0;
		}
		if (unk_0x321808B6A32CCA20(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_67(uParam0, (Global_4269607 - 0.5f));
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_67(var uParam0, float fParam1)
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

float func_68(var uParam0)
{
	return uParam0->f_80;
}

bool func_69(var uParam0, int iParam1)
{
	return func_70(uParam0, iParam1) != -1;
}

int func_70(var uParam0, int iParam1)
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

bool func_71(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_72(int iParam0)
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

bool func_73(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_74(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_221() && func_401(uParam0, 0) > 1f)
			{
				if (func_31())
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 1, 0);
				}
				func_104(uParam0);
				func_19(&(Global_106565.f_19091), 4096);
				func_101(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_103(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x0F8EAEEC97DDBCB3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_100(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_97(uParam1, 0))
			{
				func_75(uParam0);
				func_295(uParam0, 0, 0, 0);
				func_100(0);
				iLocal_168 = 7;
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
		func_76(func_95(), 21, iVar0, 0, 0);
		func_48(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_77(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x75D54ED6C1AD1642(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x12B6E23F244DDB0F(iVar1, iVar0, 1);
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
	
	func_94();
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
					func_93(99, 1);
					func_92(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_86(5))
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
							func_92(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_86(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_92(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x535C9C52117DA0AD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_86(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_85(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				
				case 1:
					func_93(97, iParam3);
					break;
				
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
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
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_92(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
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
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_79(iParam0);
	if (Global_36425 == 15)
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
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x12B6E23F244DDB0F(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x12B6E23F244DDB0F(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x12B6E23F244DDB0F(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_57(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_57(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_57(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_57(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_83(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_83(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_83(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_83(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_83(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_83(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_82() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_82() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_81(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
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

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_85(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_88(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_88(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_88(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_88(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_87(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_87(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_87(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_87(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_87(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_87(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_2097152[func_82() /*10778*/].f_6165.f_10, iParam0);
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_90(iParam0, iParam1);
	uVar2 = func_89(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x321808B6A32CCA20(27))
	{
		return 0;
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x75D54ED6C1AD1642(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x12B6E23F244DDB0F(joaat("num_cash_spent"), iVar1, 1);
		func_56(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_94()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_95()
{
	func_96();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_96()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_4(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_3(unk_0x33CD235DF1E6A94E());
			if (func_5(iVar0) && (!func_73(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_5(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

int func_97(var uParam0, int iParam1)
{
	if (!func_157(&(uParam0->f_2)))
	{
		func_155(&(uParam0->f_2));
	}
	unk_0x581AE7724ACAD410(14);
	unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x833B1A3D9F713E03(2, 201) || uParam0->f_8)
		{
			if (!func_157(&(uParam0->f_5)))
			{
				func_155(&(uParam0->f_5));
				func_99(uParam0, 1051260355);
			}
		}
		if (func_157(&(uParam0->f_5)))
		{
			if (func_154(&(uParam0->f_5)) > 0.33f)
			{
				func_98(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_154(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_157(&(uParam0->f_5)))
		{
			func_155(&(uParam0->f_5));
			func_99(uParam0, 1051260355);
		}
		else if (func_154(&(uParam0->f_5)) > 0.33f)
		{
			func_98(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_99(var uParam0, int iParam1)
{
	unk_0xBB698266C5FDF0A7(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4D9DA18AB3C2A466(uParam0->f_9);
	unk_0x8DAB5B12D7B9AD29(iParam1);
	unk_0x818901B332D5541D();
}

void func_100(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_101(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xBB698266C5FDF0A7(*uParam0, func_102());
	unk_0x713FEBE56D2BD403("STRING");
	unk_0x75D3F9044123D4F9(iParam9);
	unk_0xFA6BEE2B1507FF1E(sParam1);
	unk_0x36F3AA9FFAAF8606();
	unk_0x713FEBE56D2BD403(sParam7);
	unk_0xE800DC85FDF60F85(uParam2);
	unk_0xE800DC85FDF60F85(uParam3);
	unk_0xFA6BEE2B1507FF1E(uParam6);
	unk_0xE800DC85FDF60F85(uParam5);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0x36F3AA9FFAAF8606();
	unk_0x818901B332D5541D();
	func_155(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_102()
{
	if (unk_0xB331FCEB94EB05C8())
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
	func_48(11, uParam0->f_56);
	func_48(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x0E4018692D92041D(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_105(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_106(sParam2, iParam3, 0);
}

int func_106(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					unk_0xD92171BC6C48DB90(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_113();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_111();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam2)
			{
				func_110();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_109())
				{
					return 0;
				}
				if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
					if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
				}
			}
			if (func_29())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
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
				if (unk_0x0E4018692D92041D(Global_2423, 9))
				{
					return 0;
				}
			}
			func_108();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_107();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_113();
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD92171BC6C48DB90(0);
	Global_15866 = 1;
}

void func_108()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2424, 16);
}

int func_109()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52370FB78E42E275() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
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

void func_110()
{
	if (func_73(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_95();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

void func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

void func_113()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if ((unk_0xA30F14B621E3269D() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		unk_0xD92171BC6C48DB90(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(1);
		Global_15866 = 6;
		return;
	}
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

int func_115(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (!unk_0xD62C4419A41F106A(*uParam2, 0))
			{
				func_152(uParam1, 320, bParam4);
				unk_0xF8E07C228A90E953(*uParam2, unk_0x9EC3B269A34A2BEE(100, 300));
				func_150(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_48(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0xD62C4419A41F106A(*uParam2, 0))
			{
				if (!unk_0xF0D230FB550CD6EB(*uParam2, 0))
				{
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 1, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xD62C4419A41F106A(*uParam2, 0))
			{
				func_121(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_158(uParam1->f_2, *uParam2))
				{
					if (unk_0x91D5C8283D19AF49(uParam1->f_4, 0))
					{
						if (unk_0x91BBD269506D61D2(*uParam2, uParam1->f_4, 1))
						{
							*iParam0 = 3;
						}
					}
					if (unk_0x91BBD269506D61D2(*uParam2, uParam1->f_2, 1))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!unk_0xF0D230FB550CD6EB(uParam1->f_2, 0))
						{
							if (unk_0x335C0645074963FE(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x5DACF31D3AC5ED8D(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (unk_0x335C0645074963FE(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*iParam0 = 3;
									}
									if (unk_0x9ED464AAA493C8EF(uParam1->f_2, 6))
									{
										if (unk_0x52370FB78E42E275())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x335C0645074963FE(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x5DACF31D3AC5ED8D(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (unk_0x335C0645074963FE(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x5DACF31D3AC5ED8D(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_119(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				func_119(&uLocal_45, 0, 0);
				*iParam0 = 5;
			}
			break;
		
		case 3:
			func_119(&uLocal_45, 0, 0);
			if (!unk_0xD62C4419A41F106A(*uParam2, 0))
			{
				if (unk_0xE38E3CF1625A4145(uParam1->f_8))
				{
					unk_0x1ABDB383C83A336A(&(uParam1->f_8));
				}
				unk_0x4A852F02088ECC9D(*uParam2, 1);
				unk_0x99414FB2D30425C1(&uVar0);
				unk_0xE0345C3A81F4471A(0, 5000);
				unk_0xECCD4FDA45197F97(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x976357E602648DDF(0, 0);
				unk_0xC734F59A13D39AEF(uVar0);
				unk_0x13A2D602CD10CBAC(*uParam2, uVar0);
				unk_0xA7A57E7757ED035E(&uVar0);
				unk_0x897EF720254BBEA3(*uParam2, 1);
				func_227(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				unk_0xD362430CD61A9B08();
			}
			else
			{
				*iParam0 = 4;
				unk_0xD362430CD61A9B08();
			}
			if (unk_0xE38E3CF1625A4145(uParam1->f_8))
			{
				unk_0x1ABDB383C83A336A(&(uParam1->f_8));
			}
			func_116(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0xC52B92C972695208(uParam3->f_6))
			{
				if (unk_0xE38E3CF1625A4145(uParam3->f_5))
				{
					unk_0x1ABDB383C83A336A(&(uParam3->f_5));
				}
				func_175(uParam1);
				func_48(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0xD62C4419A41F106A(*uParam2, 0))
			{
				unk_0x1F45B4626AC4A4C0(uParam2);
				if (unk_0xE38E3CF1625A4145(uParam1->f_8))
				{
					unk_0x1ABDB383C83A336A(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x563D94E1BFFD5CC6(unk_0x3EE1295CEFBEFED4(), 2, 0);
				unk_0x66D901F8097E8E86(unk_0x3EE1295CEFBEFED4(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_116(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		uParam1->f_2 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
		unk_0xF8E07C228A90E953(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x9EC3B269A34A2BEE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0xB06F4A08BF57E69A(iParam0, 1067030938, 1069547520) };
	}
	unk_0x8950ED5730F62EE8(&(uParam1->f_1), 3);
	unk_0x8950ED5730F62EE8(&(uParam1->f_1), 4);
	Var0 = { unk_0xE3ADC76D6418297E(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x6413BF5F9B062200(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xE38E3CF1625A4145(uParam1->f_5))
		{
			uParam1->f_5 = func_117(uParam1->f_6);
			unk_0x1C95CD840303FC37(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x1C95CD840303FC37(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_117(var uParam0)
{
	var uVar0;
	
	if (!unk_0xECCFCAB0A094EB5B(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xCB795F691042D011(uParam0);
	unk_0xCE5C49921A521962(uVar0, func_118(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	return uVar0;
}

float func_118(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(iParam2);
		unk_0xA94473FEE1796AED("FocusIn");
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x052830EE89C97404(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x6D2E2622CA149402(sVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x6D2E2622CA149402(uParam0->f_3))
	{
		if (func_120(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_120(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

bool func_120(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_121(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_122(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_123(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_123(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_119(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_124(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_124(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x6D2E2622CA149402(iVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_120(iVar0))
	{
		func_149();
	}
	if (func_148(iParam1) && unk_0x042B0E494045A7DF(iParam1))
	{
		iVar1 = 0;
		if (unk_0x068481DAF84B9654(iParam1))
		{
			unk_0x58F0F30530159EBB(unk_0x22B02EC53152632C(iParam1));
			unk_0x8DBE7210C47D73E7(unk_0x22B02EC53152632C(iParam1), 1);
			if (unk_0x74297B6E2665ED22(unk_0x22B02EC53152632C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x680558231C80291D(iParam1))
		{
			unk_0xBC85CA5EAD2D2A92(unk_0xEAE1362B9F5C7B18(iParam1));
			if (unk_0xB623C0AF503B1EA7(unk_0xEAE1362B9F5C7B18(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam1))
		{
			unk_0x502305F7344E91C7(unk_0x6BB2785511E9F977(iParam1));
			if (unk_0xC5183090D5499516(unk_0x6BB2785511E9F977(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8D255802EBF1DA76())
		{
			if (func_143(uParam0, bParam7, bParam9, 0))
			{
				func_140(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_129(iVar0))
				{
					if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if ((iVar1 && !unk_0xFAC8F20FBC764F4D()) && uParam8)
						{
							if (!func_120(iVar0))
							{
								func_128(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
								{
									func_127(1);
								}
							}
						}
					}
				}
			}
			else if (func_129(iVar0))
			{
				if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
				{
					if (((unk_0x3F219400E5FE4B69(iParam1) && iVar1) && !unk_0xFAC8F20FBC764F4D()) && uParam8)
					{
						if (!func_120(iVar0))
						{
							func_128(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_127(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x6D2E2622CA149402(sParam5))
			{
				if (func_120(sParam5))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
					{
						func_119(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
					{
						func_119(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
					{
						func_119(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
					{
						func_119(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
					{
						func_119(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
				{
					func_119(uParam0, iVar0, 1);
				}
			}
			if (!func_143(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_126(uParam0))
				{
					func_125(uParam0);
				}
			}
		}
	}
	else
	{
		func_119(uParam0, iVar0, 0);
	}
}

void func_125(var uParam0)
{
	if (func_148(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x052830EE89C97404(1);
		unk_0x3754CDF254D9F523(0);
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		unk_0xA94473FEE1796AED("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_126(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xE3903F59E2F22150()
		{
			return 1;
		}
	}
	return 0;
}

int func_127(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

int func_129(char* sParam0)
{
	if (!func_130(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_120(sParam0)) || func_120("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_127(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_127(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_127(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_139())
	{
		return 0;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				return 0;
			}
			if (unk_0x1E67980B42842E37())
			{
				return 0;
			}
		}
	}
	if ((func_138() || func_137(Global_4456448.f_161209)) || func_136())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_135(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == joaat("riot2") && iVar1 == 0) && func_134(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_131(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_131(int iParam0)
{
	if (iParam0 != func_133())
	{
		if (func_132(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_132(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_133()
{
	return -1;
}

int func_134(int iParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
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
					if (unk_0x3DE306309922F8D1(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
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

var func_136()
{
	return Global_2448756.f_16;
}

bool func_137(int iParam0)
{
	return iParam0 == 51;
}

var func_138()
{
	return Global_2448756.f_15;
}

bool func_139()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_140(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(iParam1, 0))
	{
		func_119(uParam0, 0, 0);
	}
	if (func_38(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x068481DAF84B9654(iParam1))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam1);
			if (!unk_0xF0D230FB550CD6EB(iVar0, 0))
			{
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					if (!func_141())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x28C4F998CC33B00F(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x052830EE89C97404(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC94CF61BF93818C8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iParam1, -1, iVar3, iVar4);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_141()
{
	return func_142(unk_0x95B959F18401C09A());
}

int func_142(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_143(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_147(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_126(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (!func_147(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
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
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (!func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_146(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_146(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_147(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (func_145(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_144(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_144(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_145(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_126(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_130(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_149();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_130(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_130(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				unk_0x052830EE89C97404(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_130(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_130(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				unk_0x052830EE89C97404(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x680558231C80291D(iParam0))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x068481DAF84B9654(iParam0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_149()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

void func_150(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_405(uParam0);
	}
	if (!unk_0xE38E3CF1625A4145(uParam0->f_8))
	{
		uParam0->f_8 = func_151(*uParam1, 0, 0);
	}
	if (!unk_0x6D2E2622CA149402(sParam2))
	{
		unk_0x1C95CD840303FC37(uParam0->f_8, sParam2);
	}
}

int func_151(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(uVar0, func_118(unk_0xB331FCEB94EB05C8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xBF11C8A43770C598(uVar0, bParam1);
		}
		else
		{
			unk_0xB9E84A421C105943(uVar0, 2);
		}
	}
	else if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0xCE5C49921A521962(uVar0, func_118(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(uVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(uVar0, func_118(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		unk_0x4A852F02088ECC9D(uParam0->f_3, 0);
		unk_0x0D847D71D9E6142E(uParam0->f_3);
		unk_0x33F6BE48E356DA27(uParam0->f_3, 3, 0);
		unk_0x28F648743D7DE312(uParam0->f_3, 17, 1);
		unk_0xED68CDDDE25A144E(uParam0->f_3);
		if ((func_325(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_153(uParam0->f_29)) && !bParam2)
		{
			func_159(uParam0);
		}
		else
		{
			unk_0x33F6BE48E356DA27(uParam0->f_3, 1024, 1);
			unk_0x33F6BE48E356DA27(uParam0->f_3, 131072, 1);
			unk_0x99414FB2D30425C1(&uVar0);
			unk_0x07C339D4328CA16C(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			else
			{
				unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
			}
			unk_0x976357E602648DDF(0, 0);
			unk_0xC734F59A13D39AEF(uVar0);
			unk_0x13A2D602CD10CBAC(uParam0->f_3, uVar0);
			unk_0xA7A57E7757ED035E(&uVar0);
		}
		unk_0x897EF720254BBEA3(uParam0->f_3, 1);
	}
}

int func_153(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_154(var uParam0)
{
	if (func_157(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_155(var uParam0)
{
	func_156(uParam0, 0f);
}

void func_156(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(unk_0x0E4018692D92041D(*uParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(uParam0, 1);
	unk_0xCE689A8E8C42ED78(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_157(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_158(var uParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		if (!unk_0x335C0645074963FE(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159(var uParam0)
{
	var uVar0;
	
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x3C990C409B3845DE(uParam0->f_3, 84.9058f);
				unk_0x897EF720254BBEA3(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x3C990C409B3845DE(uParam0->f_3, 68.3138f);
				unk_0x897EF720254BBEA3(uParam0->f_3, 1);
			}
			else
			{
				unk_0xBD4591245C650283(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xED68CDDDE25A144E(uParam0->f_3);
			unk_0xA7A57E7757ED035E(&uVar0);
			unk_0x99414FB2D30425C1(&uVar0);
			unk_0x07C339D4328CA16C(0, 0, 0);
			unk_0x976357E602648DDF(0, 0);
			unk_0x7E268975AF5EA74F(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x19E546F93EAB3D29(0, 1);
				unk_0x7E268975AF5EA74F(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x43EAD1F94EC8561F(0, 151.7794f, 0);
				unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 20000);
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			else
			{
				unk_0x108754262311D34F(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x89F20C4A841A3473(uParam0->f_29, 15f, 1))
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			unk_0xC734F59A13D39AEF(uVar0);
			unk_0x13A2D602CD10CBAC(uParam0->f_3, uVar0);
			unk_0xA7A57E7757ED035E(&uVar0);
		}
		unk_0x897EF720254BBEA3(uParam0->f_3, 1);
	}
}

int func_160(var uParam0, bool bParam1)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_169(uParam0) && func_165(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_164(uParam0, 2097152))
				{
					func_161(uParam0);
				}
			}
			else
			{
				func_161(uParam0);
			}
		}
		else if (!func_169(uParam0))
		{
			if (bParam1)
			{
				if (func_164(uParam0, 2097152))
				{
					if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	struct<3> Var0;
	
	if (func_153(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_162(uParam0, Var0);
}

void func_162(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && unk_0xEE984ED4E4A374BE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x2CA911E7569D12EA(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x2CA911E7569D12EA(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_163(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x16E00F066AFFEA0D(Var0, Param1, 0) < unk_0x16E00F066AFFEA0D(Var3, Param1, 0) && unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x16E00F066AFFEA0D(Var0, Param1, 0) >= unk_0x16E00F066AFFEA0D(Var3, Param1, 0) && unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_163(int iParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_164(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_218(uParam0->f_81, iParam1) && !func_221());
	}
	return func_221();
}

int func_165(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_31())
			{
				func_168();
				return 1;
			}
			else if (func_166(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 0, 256);
				}
				else
				{
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 0, 0);
				}
			}
			unk_0xA56208AB5F9EC61A(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_166(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x3FD9339AA95E323F(0, 71, 1);
	unk_0x3FD9339AA95E323F(0, 72, 1);
	unk_0x3FD9339AA95E323F(0, 76, 1);
	unk_0x3FD9339AA95E323F(0, 73, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	if (bParam5)
	{
		unk_0x3FD9339AA95E323F(0, 75, 1);
	}
	unk_0x3FD9339AA95E323F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
	}
	unk_0x3FD9339AA95E323F(0, 74, 1);
	unk_0x3FD9339AA95E323F(0, 86, 1);
	unk_0x3FD9339AA95E323F(0, 81, 1);
	unk_0x3FD9339AA95E323F(0, 82, 1);
	unk_0x3FD9339AA95E323F(0, 138, 1);
	unk_0x3FD9339AA95E323F(0, 136, 1);
	unk_0x3FD9339AA95E323F(0, 114, 1);
	unk_0x3FD9339AA95E323F(0, 107, 1);
	unk_0x3FD9339AA95E323F(0, 110, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 87, 1);
	unk_0x3FD9339AA95E323F(0, 88, 1);
	unk_0x3FD9339AA95E323F(0, 113, 1);
	unk_0x3FD9339AA95E323F(0, 115, 1);
	unk_0x3FD9339AA95E323F(0, 116, 1);
	unk_0x3FD9339AA95E323F(0, 117, 1);
	unk_0x3FD9339AA95E323F(0, 118, 1);
	unk_0x3FD9339AA95E323F(0, 119, 1);
	unk_0x3FD9339AA95E323F(0, 131, 1);
	unk_0x3FD9339AA95E323F(0, 132, 1);
	unk_0x3FD9339AA95E323F(0, 123, 1);
	unk_0x3FD9339AA95E323F(0, 126, 1);
	unk_0x3FD9339AA95E323F(0, 129, 1);
	unk_0x3FD9339AA95E323F(0, 130, 1);
	unk_0x3FD9339AA95E323F(0, 133, 1);
	unk_0x3FD9339AA95E323F(0, 134, 1);
	unk_0xCD3A495F8C74A0B6();
	func_167(iParam0);
	if ((unk_0xE3903F59E2F22150() - Global_29) > 500)
	{
		unk_0xA4DF1E31BCDF9978(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xE3903F59E2F22150();
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x7EECA16E87982278(unk_0x8BB475EA09C9A0EB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_167(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x3A337D69D2D7C0FF(iParam0))
		{
			if (unk_0x3677406194B5F225(iParam0))
			{
				unk_0x5D1C3DFAF9A33FD4(iParam0, 0);
			}
		}
	}
}

void func_168()
{
	if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
	{
		unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
	}
}

int func_169(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			if (unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_170(var uParam0)
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
	if (!func_218(uParam0->f_55, 1))
	{
		func_219(&(uParam0->f_55), 1);
	}
}

void func_171(var uParam0)
{
	func_173();
	unk_0xD362430CD61A9B08();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_227(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_227(uParam0, 103, 1, 0, 0);
		}
		func_172(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_227(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_227(uParam0, 102, 1, 0, 0);
	}
	func_295(uParam0, 16, 4f, 0);
}

void func_172(int iParam0)
{
	Global_105275.f_221 = iParam0;
}

void func_173()
{
	Global_14732 = 0;
	func_174();
}

void func_174()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(1);
		Global_15866 = 6;
		return;
	}
}

void func_175(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_176(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_48(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_48(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_176(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_178(var uParam0, int iParam1, bool bParam2)
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

void func_179()
{
	Global_14732 = 0;
	func_113();
}

int func_180(var uParam0, int iParam1, float fParam2)
{
	if ((((unk_0x73DA1542B2F0C458() && !unk_0xD33DAC8D0D70A78C()) && !unk_0x75A50A9E5219C397()) && !unk_0xBB5E373390A5F824()) && !uParam0->f_142)
	{
		if (func_201(uParam0))
		{
			func_200(uParam0, &(uParam0->f_43));
			func_198(uParam0);
			func_193(uParam0);
			func_187(uParam0, fParam2, 1117782016);
			func_186(uParam0);
			func_184(uParam0);
			if ((unk_0xF2DB717A73826179(func_401(uParam0, 7)) % 5) == 0 && !iLocal_93)
			{
				iLocal_93 = 1;
			}
			if ((unk_0xF2DB717A73826179(func_401(uParam0, 7)) % 5) == 2 && iLocal_93)
			{
				iLocal_93 = 0;
			}
			return func_181(uParam0, iParam1);
		}
	}
	return 0;
}

int func_181(var uParam0, int iParam1)
{
	if (func_59(uParam0) == 2)
	{
		if (unk_0x18FB647D79B09657(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_183(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1) && func_182(1, 1, 1)) && unk_0x156573D1AADB54ED(uParam0->f_4))
		{
			return func_165(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x18FB647D79B09657(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1) && func_182(1, 1, 1)) && unk_0x156573D1AADB54ED(uParam0->f_4))
	{
		return func_165(uParam0, 1, iParam1);
	}
	return 0;
}

int func_182(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8D13BA3BB8F16771())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (bParam0)
		{
			if (unk_0xD62C4419A41F106A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) != unk_0x33CD235DF1E6A94E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x67F8A06049221C80(iVar0) < 0.95f || unk_0x67F8A06049221C80(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

float func_183(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	return unk_0x16E00F066AFFEA0D(Var0, Param1, iParam4);
}

void func_184(var uParam0)
{
	float fVar0;
	
	if ((func_169(uParam0) && func_218(uParam0->f_81, 67108864)) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
	{
		if ((unk_0xE3903F59E2F22150() - iLocal_97) >= 10000)
		{
			fVar0 = func_185(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0xE3903F59E2F22150();
		}
		if (iLocal_96 >= 2 && !func_221())
		{
			func_227(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0xE3903F59E2F22150() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xE3903F59E2F22150() % 4000) < 50)
		{
			if (!func_169(uParam0))
			{
			}
			if (!func_218(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_185(struct<3> Param0, int iParam3)
{
	return func_325(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), Param0, iParam3);
}

void func_186(var uParam0)
{
	if (unk_0x1578197A616E70FA(unk_0x3EE1295CEFBEFED4()) && !func_218(uParam0->f_44, 2))
	{
		func_219(&(uParam0->f_44), 2);
	}
	else if (!unk_0x1578197A616E70FA(unk_0x3EE1295CEFBEFED4()) && func_218(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_48(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_227(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_187(var uParam0, float fParam1, float fParam2)
{
	if (func_169(uParam0) && func_218(uParam0->f_44, 4))
	{
		if ((unk_0x61DFE32FB87BC784(uParam0->f_4) || unk_0x8BB475EA09C9A0EB(uParam0->f_4) < 3f) && func_192(uParam0))
		{
			if (!func_191(uParam0, 2))
			{
				func_189(uParam0, 2);
			}
			else if (func_169(uParam0))
			{
				if (func_401(uParam0, 2) > fParam1 && !func_191(uParam0, 14))
				{
					if (func_33())
					{
						func_227(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_227(uParam0, 48, 1, 0, 0);
					}
					func_295(uParam0, 2, 0, 0);
					if (func_191(uParam0, 10))
					{
						func_295(uParam0, 10, 0, 0);
					}
				}
				if (!func_191(uParam0, 3))
				{
					func_295(uParam0, 3, 0, 0);
				}
				else if (func_401(uParam0, 3) >= fParam2)
				{
					func_188(uParam0, 3, 0);
					func_326(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_191(uParam0, 2))
			{
				func_188(uParam0, 2, 0);
			}
			if (func_191(uParam0, 3))
			{
				func_188(uParam0, 3, 0);
			}
		}
	}
}

void func_188(var uParam0, int iParam1, bool bParam2)
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
			func_98(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_189(var uParam0, int iParam1)
{
	func_190(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_190(var uParam0)
{
	if (!func_157(uParam0))
	{
		func_155(uParam0);
	}
}

bool func_191(var uParam0, int iParam1)
{
	return func_157(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_192(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			return 1;
		}
	}
	return 0;
}

void func_193(var uParam0)
{
	if (!func_218(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
				{
					if (func_401(uParam0, 9) > 1f)
					{
						func_197(uParam0, unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()));
						if (uParam0->f_410 != 22)
						{
							func_227(uParam0, 50, 1, 1, 0);
						}
						func_295(uParam0, 9, 0, 0);
						if (unk_0xE38E3CF1625A4145(uParam0->f_9))
						{
							unk_0xE447A1B9434714F3(uParam0->f_9, 0);
							unk_0x1C316779E36C1967(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_221() && func_401(uParam0, 9) > 4f)
				{
					func_227(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_196("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_227(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x09287BFEE1D9F6EF(unk_0x3EE1295CEFBEFED4(), func_195(uParam0)))
				{
					func_197(uParam0, unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()));
					func_48(6, 0);
				}
				if (!func_194(uParam0))
				{
					if (!unk_0x12BF789190D82474())
					{
						if (func_401(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_227(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1)
				{
					if (func_196("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xD362430CD61A9B08();
					}
					if (unk_0xE38E3CF1625A4145(uParam0->f_9))
					{
						unk_0xE447A1B9434714F3(uParam0->f_9, 255);
						unk_0x1C316779E36C1967(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_221())
				{
					if (uParam0->f_410 != 22)
					{
						func_227(uParam0, 53, 1, 0, 1);
					}
					func_48(7, func_195(uParam0));
					func_197(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_221())
				{
					func_188(uParam0, 9, 0);
					func_295(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_194(var uParam0)
{
	return uParam0->f_110;
}

int func_195(var uParam0)
{
	return uParam0->f_106;
}

bool func_196(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1B3E16C485B8DD94(sParam0);
	if (iParam1 == 1)
	{
		unk_0xFA6BEE2B1507FF1E(iParam2);
	}
	return unk_0xC8F93D36F11F7BE8();
}

void func_197(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_198(var uParam0)
{
	if (func_217(uParam0))
	{
		func_199(uParam0);
	}
}

void func_199(var uParam0)
{
	if (unk_0x749954286B0F4936() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xDDB55BEB9D76717D();
			func_188(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_401(uParam0, 20) > 3f)
				{
					func_227(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_218(uParam0->f_81, 262144) || !func_218(uParam0->f_81, 1048576))
				{
					if (func_401(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_227(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_218(uParam0->f_82, 67108864))
				{
					if (func_401(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_227(uParam0, 85, 1, 0, 0);
						func_188(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_401(uParam0, 20) > 8f)
				{
					func_227(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_218(uParam0->f_81, 262144) || func_218(uParam0->f_82, 67108864))
			{
				if (!func_191(uParam0, 22))
				{
					func_189(uParam0, 22);
				}
			}
			if (func_191(uParam0, 22) && func_401(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_218(uParam0->f_81, 1048576))
					{
						func_227(uParam0, 84, 1, 0, 0);
						func_188(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_218(uParam0->f_82, 134217728))
					{
						func_227(uParam0, 85, 1, 0, 0);
						func_188(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_200(var uParam0, var uParam1)
{
	unk_0x1C6F24ECA1A88E67(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_201(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			if (!unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 1) && !unk_0x707FFB0E65C1C546(uParam0->f_3))
			{
				func_326(uParam0, "Passenger left car.", 9);
			}
			else if (func_213(uParam0))
			{
				if (func_196("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x2E38114179FC5F06("TAXI_OBJ_PICKUP");
				}
				if (unk_0x73DA1542B2F0C458())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				func_202(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_202(var uParam0, bool bParam1)
{
	func_212(uParam0, uParam0->f_3);
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_191(uParam0, 14))
			{
				if (func_221())
				{
					func_211(1);
				}
				func_210(uParam0, 11, 1);
				func_205(uParam0, 1);
				func_295(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_169(uParam0))
				{
					if ((unk_0xE3903F59E2F22150() % 1000) < 50)
					{
					}
					if (unk_0xF0D230FB550CD6EB(uParam0->f_2, 0))
					{
						if (func_401(uParam0, 15) > 5f)
						{
							func_295(uParam0, 15, 0f, 1);
						}
					}
					if (func_401(uParam0, 14) > 20f)
					{
						func_326(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_401(uParam0, 14) > 20f)
				{
					if (func_203(uParam0->f_4, 1) > 40f)
					{
						func_326(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_326(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_203(int iParam0, int iParam1)
{
	return func_204(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, iParam1);
}

float func_204(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		Var3 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xFBB1F99A825CAB09(iParam1, 0) };
	}
	return unk_0x16E00F066AFFEA0D(Var0, Var3, iParam2);
}

void func_205(var uParam0, bool bParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 0);
				unk_0x1C316779E36C1967(uParam0->f_8, 0);
				func_209(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE38E3CF1625A4145(uParam0->f_9))
			{
				unk_0xE447A1B9434714F3(uParam0->f_9, 0);
				unk_0x1C316779E36C1967(uParam0->f_9, 0);
				unk_0xD362430CD61A9B08();
				if (func_169(uParam0))
				{
					func_227(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_209(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_206(uParam0, 0, 0);
		}
		else if (unk_0xE38E3CF1625A4145(uParam0->f_10))
		{
			unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 255);
				unk_0x1C316779E36C1967(uParam0->f_8, 1);
			}
			else if (unk_0xE38E3CF1625A4145(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xE447A1B9434714F3(uParam0->f_9, 0);
					unk_0x1C316779E36C1967(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xE447A1B9434714F3(uParam0->f_9, 255);
					unk_0x1C316779E36C1967(uParam0->f_9, 1);
				}
			}
			unk_0xD362430CD61A9B08();
		}
	}
}

void func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_405(uParam0);
	}
	if (!unk_0xE38E3CF1625A4145(uParam0->f_10))
	{
		uParam0->f_10 = func_151(uParam0->f_4, 1, 0);
		unk_0x1C95CD840303FC37(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x1C316779E36C1967(uParam0->f_10, 1);
		func_207(uParam0);
		if (bParam2)
		{
			unk_0xD362430CD61A9B08();
			func_227(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_207(var uParam0)
{
	func_295(uParam0, 14, 0, 0);
	func_208();
}

void func_208()
{
	int iVar0;
	
	iVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		unk_0xE9739440E5BF08EE(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_209(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_218(*uParam1, iParam2))
	{
		unk_0xD362430CD61A9B08();
		func_227(uParam0, iParam3, 1, 0, 0);
		func_219(uParam1, iParam2);
	}
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_211(int iParam0)
{
	Global_16877 = iParam0;
}

void func_212(var uParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam1))
		{
			if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
			{
				if ((unk_0x792D8D44CDA437C2(iParam1, joaat("weapon_stungun"), 0) || unk_0x792D8D44CDA437C2(iParam1, 0, 2)) || unk_0x792D8D44CDA437C2(iParam1, 0, 1))
				{
					func_326(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
			}
		}
	}
}

int func_213(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_191(uParam0, 14))
			{
				func_214(uParam0);
			}
			func_205(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_214(var uParam0)
{
	func_188(uParam0, 14, 0);
	func_188(uParam0, 15, 0);
	func_216();
	if (func_215())
	{
		func_211(0);
	}
}

int func_215()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_216()
{
	var uVar0;
	
	uVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x91D5C8283D19AF49(uVar0, 0))
	{
		unk_0xE9739440E5BF08EE(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_217(var uParam0)
{
	return uParam0->f_120;
}

bool func_218(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_219(var uParam0, int iParam1)
{
	func_220(uParam0, iParam1);
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_221()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	return uParam0->f_416;
}

void func_223()
{
	func_219(&(Local_409.f_55), 2);
	func_219(&(Local_409.f_55), 8);
	func_219(&(Local_409.f_55), 32);
	func_219(&(Local_409.f_55), 128);
	func_219(&(Local_409.f_55), 256);
	func_219(&(Local_409.f_55), 512);
	func_219(&(Local_409.f_55), 1024);
	func_219(&(Local_409.f_55), 2048);
	func_219(&(Local_409.f_55), 1073741824);
	func_219(&(Local_409.f_55), 8192);
	func_219(&(Local_409.f_55), 16384);
	func_219(&(Local_409.f_55), 32768);
	func_219(&(Local_409.f_55), 131072);
	func_219(&(Local_409.f_55), 262144);
	func_219(&(Local_409.f_55), 524288);
	func_219(&(Local_409.f_55), 1048576);
	func_219(&(Local_409.f_55), 4194304);
	func_219(&(Local_409.f_100), 64);
	func_219(&(Local_409.f_100), 2048);
	func_219(&(Local_409.f_100), 128);
	func_219(&(Local_409.f_100), 32);
	func_219(&(Local_409.f_100), 256);
	func_219(&(Local_409.f_100), 8);
	func_219(&(Local_409.f_100), 1);
	func_219(&(Local_409.f_100), 8192);
	func_219(&(Local_409.f_100), 2);
	func_219(&(Local_409.f_100), 32768);
	func_219(&uLocal_937, 2);
	func_189(&Local_409, 7);
}

void func_224(var uParam0)
{
	func_225(uParam0, 1000);
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x31826EF4A8BC8E9F(uParam0->f_3);
		unk_0x11C4AF4137F2A4B5(uParam0->f_3, unk_0x33CD235DF1E6A94E(), 0);
	}
	func_179();
	func_214(uParam0);
}

void func_225(var uParam0, int iParam1)
{
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x63F0B040CE6EDF0F(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x63F0B040CE6EDF0F(0, 0, 3000, 1, 0, 0);
	}
}

void func_226(var uParam0)
{
	unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 1, 0);
	func_225(uParam0, 1000);
}

void func_227(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_295(uParam0, 16, 4f, 0);
		if (func_228(uParam0))
		{
			func_46();
		}
	}
	func_260(uParam0, iParam2, bParam3);
}

int func_228(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_221())
	{
		Var6 = { func_230() };
		if (!unk_0x786AF4A44E1B5B4B(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xCE3CFF625BEBAA04(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_229(&Var0);
			if (unk_0xCE3CFF625BEBAA04(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_229(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_230()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_231(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			if ((unk_0x707FFB0E65C1C546(uParam0->f_3) && (unk_0xE3903F59E2F22150() - iLocal_89) > 500) || unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_232(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xE3903F59E2F22150() % 1000) < 50)
			{
			}
			func_202(uParam0, 1);
			if (func_31())
			{
				unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 1, 0);
			}
			if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 2106541073) == 1 || unk_0xD76D6BCC14B95CE1(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x31826EF4A8BC8E9F(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x11C4AF4137F2A4B5(uParam0->f_3, unk_0x33CD235DF1E6A94E(), 0);
			}
		}
		else if (unk_0x09287BFEE1D9F6EF(unk_0x3EE1295CEFBEFED4(), 0))
		{
			func_258(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xA7A57E7757ED035E(&uVar3);
				unk_0x99414FB2D30425C1(&uVar3);
				unk_0x7E268975AF5EA74F(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x11C4AF4137F2A4B5(0, uParam0->f_4, 0);
				unk_0xC734F59A13D39AEF(uVar3);
				unk_0x13A2D602CD10CBAC(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_191(uParam0, 14))
			{
				func_214(uParam0);
				func_205(uParam0, 0);
			}
			if (func_191(uParam0, 9))
			{
				func_188(uParam0, 9, 0);
				unk_0xD362430CD61A9B08();
				if (unk_0xE38E3CF1625A4145(uParam0->f_8))
				{
					unk_0xE447A1B9434714F3(uParam0->f_8, 255);
					unk_0x1C316779E36C1967(uParam0->f_8, 1);
				}
			}
			if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_257(uParam0, uParam0->f_3) > 300f)
				{
					func_326(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 1 || ((func_204(unk_0x33CD235DF1E6A94E(), uParam0->f_3, 1) < 20f && func_183(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_183(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_254(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_253(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_252(uParam0->f_4, uParam0->f_3);
								iVar0 = func_251(uParam0, &iVar1);
								if (!unk_0xD62C4419A41F106A(iVar0, 0))
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
										unk_0x07C339D4328CA16C(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x07C339D4328CA16C(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xD62C4419A41F106A(iVar0, 0))
											{
												unk_0x07C339D4328CA16C(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xED68CDDDE25A144E(uParam0->f_3);
							unk_0xC838CE9837D0ABAF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x65A0E70E3C94DBD7(unk_0xFBB1F99A825CAB09(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_192(uParam0))
							{
								unk_0xED68CDDDE25A144E(uParam0->f_3);
							}
							else if (((unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 1 && unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 0) && unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 7) && func_257(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xA7A57E7757ED035E(&(uParam0->f_243));
								unk_0x99414FB2D30425C1(&(uParam0->f_243));
								unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x108754262311D34F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x108754262311D34F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xC734F59A13D39AEF(uParam0->f_243);
								unk_0x13A2D602CD10CBAC(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x764B44E3F1D8F88D(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_204(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_250(uParam0, 1))
								{
									unk_0x31826EF4A8BC8E9F(uParam0->f_3);
									func_326(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_249(uParam0->f_4))
								{
									unk_0x31826EF4A8BC8E9F(uParam0->f_3);
									func_326(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_247(uParam0);
						if (func_257(uParam0, uParam0->f_3) < fVar4 || func_31())
						{
							if (unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_234(uParam0))
								{
									func_233(uParam0);
									iLocal_89 = unk_0xE3903F59E2F22150();
									unk_0x5FEE418CE11E6DDE(uParam0->f_3, 26, 1);
									func_188(uParam0, 5, 0);
									unk_0x74AB4B97208B4CC6();
									unk_0x1C6F24ECA1A88E67(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xCBDEE923F851F500(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x65A0E70E3C94DBD7(unk_0xFBB1F99A825CAB09(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_233(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_8))
	{
		unk_0x1C316779E36C1967(uParam0->f_8, 0);
		unk_0x1ABDB383C83A336A(&(uParam0->f_8));
	}
}

int func_234(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_246("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && !unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		func_245();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_243(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_165(uParam0, 0, 1084227584) && func_182(1, 1, 1))
			{
				if (func_250(uParam0, 1))
				{
					iLocal_88 = unk_0xE3903F59E2F22150();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_326(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_252(uParam0->f_4, uParam0->f_3);
				iVar9 = func_251(uParam0, &iVar10);
				if (!unk_0xD62C4419A41F106A(iVar9, 0))
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
						unk_0x07C339D4328CA16C(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x07C339D4328CA16C(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xD62C4419A41F106A(iVar9, 0))
						{
							unk_0x07C339D4328CA16C(iVar9, 0, 4096);
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
			iVar12 = func_242(&(uParam0->f_409), unk_0x2CA911E7569D12EA(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x2CA911E7569D12EA(uParam0->f_4, Var0), 1);
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
				func_241(0, 0, 1);
				unk_0x9C47E5CDFB45F474(unk_0xFBB1F99A825CAB09(uParam0->f_4, 1), 3f, 0);
				unk_0xBAE549A63F38DAE8(unk_0xFBB1F99A825CAB09(uParam0->f_4, 1), 25f, 0);
				unk_0xEDF90B96BED57BCE(1);
				unk_0xD362430CD61A9B08();
				func_173();
				func_260(uParam0, 0, 0);
				Var13 = { unk_0x2CA911E7569D12EA(uParam0->f_4, Var6) };
				unk_0xBEADAF07D2339505(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(uParam0->f_3, func_239(uParam0));
				func_238(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xFA3130C046AC45A7(*uParam0, unk_0x2CA911E7569D12EA(uParam0->f_4, Var0));
				unk_0x1C98D51D7C424A85(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x189377BFBDC9127F(*uParam0, 1);
				unk_0x63F0B040CE6EDF0F(1, 0, 3000, 1, 0, 0);
				unk_0x880B00F3FAE4C022(uParam0->f_3, 0, 0);
				unk_0xC838CE9837D0ABAF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_246("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && !unk_0xD62C4419A41F106A(uParam0->f_4, 0))
			{
				if (!unk_0xF0D230FB550CD6EB(uParam0->f_3, 0))
				{
					unk_0x094626C0798AE1F8(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xB40411FADDCA9CC8(uParam0->f_4, func_237(uParam0->f_7), 1);
				}
				unk_0x63F0B040CE6EDF0F(0, 0, 3000, 1, 0, 0);
				unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
				unk_0x2F8A4DF7D0DFF0A8(uParam0->f_1, 0);
				unk_0xC7E6A5D90DED6E0B(0);
				unk_0xD6EDA274D82E8678(0, 1065353216);
				unk_0xACCDA78123DB57B0(800);
				unk_0xEDF90B96BED57BCE(1);
				unk_0xD362430CD61A9B08();
				func_173();
				func_260(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x73DA1542B2F0C458() && !unk_0xD33DAC8D0D70A78C())
			{
				func_235(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x63F0B040CE6EDF0F(0, 0, 3000, 1, 0, 0);
			unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
			unk_0x2F8A4DF7D0DFF0A8(uParam0->f_1, 0);
			unk_0xC7E6A5D90DED6E0B(0);
			unk_0xD6EDA274D82E8678(0, 1065353216);
			func_235(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && !unk_0xD62C4419A41F106A(uParam0->f_4, 0))
			{
				if (unk_0x707FFB0E65C1C546(uParam0->f_3) || unk_0xF0D230FB550CD6EB(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -1794415470) != 1 && unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -1794415470) != 0)
				{
					unk_0xC838CE9837D0ABAF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_235(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 1, 0);
	}
	unk_0x6B9BB8BC34DAFFD9(1);
	func_21(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xDFF589A2149528CE(1);
		unk_0x35675D19812BDF22(1);
	}
	func_236(23, 0);
}

void func_236(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_26010, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_26010, iParam0);
	}
}

int func_237(int iParam0)
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

void func_238(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x117DAF3BF7232886(*uParam0))
	{
		*uParam0 = unk_0xB1A92B63D6757EEF(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_239(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x2CA911E7569D12EA(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x2CA911E7569D12EA(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_240(unk_0xFBB1F99A825CAB09(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_240(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x174C48E9E544E9A8((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), 0, iParam0);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x87A1F7523B14E2C9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 15f);
	}
	unk_0x6B9BB8BC34DAFFD9(iParam1);
	func_40(0);
	func_21(1, 1, iParam2, 0, 0, 0);
	unk_0xDFF589A2149528CE(0);
	unk_0x35675D19812BDF22(0);
	func_236(23, 1);
}

int func_242(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x36FB861F8CCF0EA4(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x819B6E76423AE494(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_243(int iParam0)
{
	if (func_244() && unk_0xE3903F59E2F22150() >= iParam0 + 1000)
	{
		unk_0x7EDEAEAED85BEE4F(500);
		while (!unk_0xBB5E373390A5F824())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_40(0);
		func_179();
		return 1;
	}
	return 0;
}

int func_244()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0x833B1A3D9F713E03(0, 18) || unk_0x833B1A3D9F713E03(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_245()
{
	if (func_33())
	{
		unk_0x941B4C548836797D("appInternet");
	}
	if (func_32())
	{
		unk_0x941B4C548836797D("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

void func_246(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xE3903F59E2F22150() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xE3903F59E2F22150();
}

void func_247(var uParam0)
{
	var uVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			if (func_203(uParam0->f_3, 1) > 30f || func_248(uParam0))
			{
				if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, -1794415470) == 1 || unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) == 1)
				{
					unk_0xA7A57E7757ED035E(&uVar0);
					unk_0x99414FB2D30425C1(&uVar0);
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4, 0);
					unk_0x108754262311D34F(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x7E268975AF5EA74F(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xC734F59A13D39AEF(uVar0);
					unk_0x13A2D602CD10CBAC(uParam0->f_3, uVar0);
					func_326(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_248(var uParam0)
{
	if ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 3f && func_401(uParam0, 5) > 15f) || unk_0x95BBE5C8D52FE24B(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xEED5625DB4F88798(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x830B1D24ED3D5F55(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 3))
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

int func_250(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x765F6FEEFF39224F(iVar0[iVar4]))
			{
				if (unk_0xD62C4419A41F106A(iVar0[iVar4], 0))
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
		if ((unk_0xE3903F59E2F22150() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_251(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 1, 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 2, 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 0, 0);
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xC92AA0DBDDDE8BB8(iParam0);
	Var0 = { unk_0x16068053F8800179(iParam0, unk_0xFBB1F99A825CAB09(iParam1, 1)) };
	if (unk_0x541D5C57194E73C4(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x541D5C57194E73C4(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x782B99DB55846C95(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x782B99DB55846C95(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x782B99DB55846C95(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x782B99DB55846C95(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (!unk_0xC30D5C4DCAC8020A(uParam0->f_3) && func_203(uParam0->f_3, 1) < fParam2)
		{
			if (!func_191(uParam0, 5))
			{
				func_295(uParam0, 5, 0, 0);
			}
		}
		else if (func_191(uParam0, 5))
		{
			func_188(uParam0, 5, 0);
		}
		if (((func_401(uParam0, 5) > IntToFloat(iParam1) && unk_0x8BB475EA09C9A0EB(uParam0->f_4) < fParam4) && !unk_0xC30D5C4DCAC8020A(uParam0->f_3)) || func_203(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x89DDAAE6EFF42DD9(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x89DDAAE6EFF42DD9(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x2D49816199C51B0C(uParam0->f_4, iVar18) };
		Var6 = { unk_0x16068053F8800179(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x2CA911E7569D12EA(uParam0->f_4, Var6) };
	Var3 = { unk_0x2CA911E7569D12EA(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x82EF7DCBEE45753D(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x4A852F02088ECC9D(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_204(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x7EECA16E87982278((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x36FB861F8CCF0EA4(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x819B6E76423AE494(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 1 && unk_0xD76D6BCC14B95CE1(uParam0->f_3, 242628503) != 0)
			{
				unk_0xA7A57E7757ED035E(&(uParam0->f_243));
				unk_0x99414FB2D30425C1(&(uParam0->f_243));
				unk_0x108754262311D34F(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
				unk_0x656E3BB78935070E(uParam0->f_243, 1);
				unk_0xC734F59A13D39AEF(uParam0->f_243);
				unk_0x13A2D602CD10CBAC(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xD362430CD61A9B08();
			if (uParam0->f_411 != 9)
			{
				if (!func_218(uParam0->f_44, 128))
				{
					func_227(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_255(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xED68CDDDE25A144E(uParam0->f_3);
			unk_0xC4A347124F39D998(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xA7A57E7757ED035E(&(uParam0->f_243));
			unk_0x99414FB2D30425C1(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x108754262311D34F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x108754262311D34F(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
			unk_0xC734F59A13D39AEF(uParam0->f_243);
			unk_0x13A2D602CD10CBAC(uParam0->f_3, uParam0->f_243);
			unk_0xA7A57E7757ED035E(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x764B44E3F1D8F88D(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_255(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(uParam0, sParam1, uParam2, func_256(iParam3), 0);
}

int func_256(int iParam0)
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

float func_257(var uParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (func_192(uParam0))
		{
			return func_204(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_258(var uParam0)
{
	func_212(uParam0, uParam0->f_3);
	if (func_192(uParam0))
	{
		if (func_191(uParam0, 14))
		{
			func_214(uParam0);
			if (unk_0xE38E3CF1625A4145(uParam0->f_10))
			{
				unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			}
		}
	}
	if (!func_191(uParam0, 9))
	{
		if (unk_0xE38E3CF1625A4145(uParam0->f_8))
		{
			unk_0xE447A1B9434714F3(uParam0->f_8, 0);
			unk_0x1C316779E36C1967(uParam0->f_8, 0);
		}
		func_295(uParam0, 9, 0, 0);
		func_259("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_259(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

void func_260(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_46();
		func_295(uParam0, 16, 4f, 0);
		unk_0xD362430CD61A9B08();
	}
}

int func_261(var uParam0, int iParam1)
{
	if (!unk_0x8A7F864DAB908749(2))
	{
		return 0;
	}
	func_265(12);
	if (func_218(uParam0->f_44, 8))
	{
		if (!func_218(uParam0->f_44, 128))
		{
			if (unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()) && !func_218(uParam0->f_44, 256))
			{
				func_219(&(uParam0->f_44), 256);
			}
			if (func_218(uParam0->f_44, 256) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				func_227(uParam0, 135, 1, 0, 1);
				func_219(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_264(uParam0, iParam1))
	{
		if (func_203(uParam0->f_3, 1) < 35f)
		{
			if (!func_218(uParam0->f_44, 8))
			{
				unk_0x11C4AF4137F2A4B5(uParam0->f_3, unk_0x33CD235DF1E6A94E(), 0);
				func_227(uParam0, 133, 1, 0, 1);
				func_219(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xBC2FC12AD0FBF72E(uParam0->f_3) || unk_0xD82CBCB7E04DDA8A(uParam0->f_3)) || func_203(uParam0->f_3, 1) > 400f)
		{
			func_326(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF2C96862595654B4(uParam0->f_2, 0);
		unk_0x09993E7216CF52C4(uParam0->f_4, 1);
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x320D9994786BCA17(uParam0->f_4);
			func_262(uParam0);
			func_48(2, 0);
			bLocal_94 = true;
			func_190(&uLocal_90);
			return 1;
		}
		else
		{
			func_326(uParam0, "No Taxi", 21);
			func_128("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_262(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (func_263())
		{
		}
	}
}

int func_263()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				iVar1 = unk_0x541D5C57194E73C4(iVar0);
				bVar2 = func_249(iVar0);
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
				if (unk_0x0C2E237744BA0026(iVar1))
				{
					if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xC92AA0DBDDDE8BB8(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_218(uParam0->f_44, 64))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_128("TX_VIP_DMGD", -1);
							if (func_120("TX_VIP_DMGD"))
							{
								func_219(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_218(uParam0->f_44, 32))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_128("TX_VIP_CAR", -1);
							if (func_120("TX_VIP_CAR"))
							{
								func_219(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_218(uParam0->f_44, 16))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_128("TX_VIP_SMALL", -1);
							if (func_120("TX_VIP_SMALL"))
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
			func_19(&(uParam0->f_44), 16);
			func_19(&(uParam0->f_44), 64);
			func_19(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_265(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		uVar0 = iParam0;
		unk_0x0A919F27746977BF(8, &uVar0, 1, 1);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x7EB82D55AB02865C(8, &cVar1);
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_267()
{
	Local_343.f_0 = 0;
	func_284(41783, 41758, 1);
	func_284(41519, 41496, 1);
	func_284(41434, 41409, 1);
	func_284(41337, 41313, 1);
	func_284(41203, 41182, 1);
	func_284(41129, 41104, 1);
	func_284(40962, 40939, 1);
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_269(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (func_271(uParam0->f_4))
		{
			func_270(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_271(int iParam0)
{
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x787CBB9DB6BA1A49(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x67001C5CC88C66A8(iParam0, 0, 40000) || unk_0x67001C5CC88C66A8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_273(var uParam0)
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		if (func_274(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_274(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_275(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_270(uParam0, 11);
	return 1;
}

int func_276(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (unk_0x8AE34E8B10270D31(uParam0->f_4) && !unk_0x156573D1AADB54ED(uParam0->f_4))
		{
			if (!func_191(uParam0, 25))
			{
				func_295(uParam0, 25, 0, 0);
			}
			else if (func_401(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_191(uParam0, 25))
		{
			func_188(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_277(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_278(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (unk_0x8EDBE29FEAB08840(uParam0->f_4))
		{
			if (unk_0x67001C5CC88C66A8(uParam0->f_4, 0, 40000) || unk_0x67001C5CC88C66A8(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_279(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_280(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
		{
			if (unk_0x61DFE32FB87BC784(uParam0->f_4))
			{
				if (func_274(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_281(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_282(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (func_283(uParam0->f_4))
		{
			func_270(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0)
{
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x787CBB9DB6BA1A49(iParam0) == 0f)
	{
		if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x67001C5CC88C66A8(iParam0, 0, 40000) || unk_0x67001C5CC88C66A8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_284(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_220(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_220(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_285(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_326(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_286(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_3))
	{
		if ((unk_0xBC2FC12AD0FBF72E(uParam0->f_3) || unk_0xD62C4419A41F106A(uParam0->f_3, 0)) || unk_0x17260B4EA0652E1C(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_287()
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

int func_288()
{
	if (!unk_0x5D98D654CDC2165A(iLocal_851))
	{
		func_246("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("gestures@m@standing@casual"))
	{
		func_246("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0x11AE7F6A404414C9(uLocal_947))
	{
		return 0;
	}
	if (!func_289(&iLocal_861, 1))
	{
		func_246("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_861, 1000);
		return 0;
	}
	return 1;
}

int func_289(int iParam0, bool bParam1)
{
	if (!unk_0x5D98D654CDC2165A(func_18()))
	{
		func_246("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xE9CCF312047EBEE0("gestures@m@standing@casual"))
		{
			func_246("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xE9CCF312047EBEE0("oddjobs@taxi@"))
	{
		func_246("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("oddjobs@towingcome_here"))
	{
		func_246("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("misscommon@response"))
	{
		func_246("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8A7F864DAB908749(2))
	{
		func_246("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_290(var uParam0, int iParam1)
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

int func_291(var uParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
	{
		uParam0->f_8 = func_292(uParam0->f_3, 0, 0);
		unk_0x4000D05DEA5F0328(1, 0);
		unk_0x1C316779E36C1967(uParam0->f_8, 1);
		unk_0x1C95CD840303FC37(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xC4A347124F39D998(uParam0->f_3, unk_0x33CD235DF1E6A94E(), -1, 2048, 4);
	}
	return 1;
}

int func_292(int iParam0, bool bParam1, bool bParam2)
{
	return func_151(iParam0, !bParam1, bParam2);
}

int func_293(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x765F6FEEFF39224F(uParam0->f_3))
	{
		func_294(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_37(uParam0->f_14, 0);
		unk_0x9C47E5CDFB45F474(uParam0->f_14, 2f, 0);
		func_35(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x4E106C48E691AC31(uParam0->f_11);
		}
		else if (unk_0x765F6FEEFF39224F(Global_105275.f_225[0]))
		{
			uParam0->f_3 = Global_105275.f_225[0];
			unk_0x0D21E1FDE062ED99(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x9BA5CF280376EEA4(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x5464B9731013E08C(uParam0->f_3, sParam7);
		unk_0x41E36A540F8F323F(uParam0->f_3, 112, 1);
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			unk_0x3D258435016D9F74(uParam0->f_3, 250);
			unk_0x5FEE418CE11E6DDE(uParam0->f_3, 32, 0);
			unk_0x5FEE418CE11E6DDE(uParam0->f_3, 104, 1);
			unk_0x5FEE418CE11E6DDE(uParam0->f_3, 177, 1);
			unk_0x5FEE418CE11E6DDE(uParam0->f_3, 116, 0);
			unk_0x9315FCF6CFE2AB41("TAXI_Passenger", &(uParam0->f_413));
			unk_0xD2E80177F27FD43F(1, uParam0->f_413, joaat("player"));
			unk_0xD2E80177F27FD43F(2, uParam0->f_413, joaat("COP"));
			unk_0x0648A75D3F60E864(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_294(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xD347320F93F4399A(Param1, 20f, 5f, 0);
}

void func_295(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_156(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_155(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_156(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_155(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_296()
{
	unk_0xB815670C37E03CDE(iLocal_851);
	unk_0x0483D0035D6E46FD("gestures@m@standing@casual");
	func_298(1);
	uLocal_947 = func_297();
}

var func_297()
{
	return unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
}

void func_298(bool bParam0)
{
	unk_0xB815670C37E03CDE(func_18());
	if (bParam0)
	{
		unk_0x0483D0035D6E46FD("gestures@m@standing@casual");
	}
	unk_0x0483D0035D6E46FD("oddjobs@taxi@");
	unk_0x0483D0035D6E46FD("oddjobs@towingcome_here");
	unk_0x0483D0035D6E46FD("misscommon@response");
	unk_0x2EE8D1440C9060EF("TAXI", 2);
	if (!func_218(Global_106565.f_19091, 128))
	{
		func_219(&(Global_106565.f_19091), 128);
	}
}

void func_299(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xCE689A8E8C42ED78(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x8950ED5730F62EE8(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_300(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_301(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
		{
			if (bParam2)
			{
				if (func_401(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_227(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_227(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_295(uParam0, 10, 0f, 1);
				}
			}
			else if (func_401(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_227(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_227(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_295(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_401(uParam0, 10) > 30f)
		{
			if (!func_221())
			{
				if (uParam0->f_112)
				{
					func_227(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_227(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_295(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_218(uParam0->f_100, 64))
	{
		if (!func_157(&(Local_190[5 /*10*/].f_6)))
		{
			func_190(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_324(uParam0))
			{
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_323(uParam0, 1);
				func_321(5, uParam0);
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 1))
	{
		if (!func_157(&(Local_190[0 /*10*/].f_6)))
		{
			func_190(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_319(uParam0))
			{
				func_323(uParam0, 1);
				func_321(0, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 2))
	{
		if (!func_157(&(Local_190[1 /*10*/].f_6)))
		{
			func_190(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_318(uParam0))
			{
				func_323(uParam0, 1);
				func_321(1, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 2048))
	{
		if (!func_157(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x765F6FEEFF39224F(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xE80842D7B53F8525(uParam0->f_4);
				func_190(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_154(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_317(uParam0))
			{
				func_323(uParam0, 1);
				func_321(8, uParam0);
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 128))
	{
		if (!func_157(&(Local_190[6 /*10*/].f_6)))
		{
			func_190(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				func_323(uParam0, 1);
				func_321(6, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 32))
	{
		if (!func_157(&(Local_190[4 /*10*/].f_6)))
		{
			func_190(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_315(uParam0))
			{
				func_323(uParam0, 1);
				func_321(4, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 256))
	{
		if (!func_157(&(Local_190[7 /*10*/].f_6)))
		{
			func_190(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_314(uParam0))
			{
				func_321(7, uParam0);
				func_323(uParam0, 1);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 8))
	{
		if (!func_157(&(Local_190[9 /*10*/].f_6)))
		{
			func_190(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
		}
		else if (func_154(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_313(uParam0))
			{
				func_323(uParam0, 1);
				func_321(9, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 16384))
	{
		if (!func_157(&(Local_190[13 /*10*/].f_6)))
		{
			func_190(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_307(uParam0))
			{
				func_323(uParam0, 1);
				func_321(13, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 32768))
	{
		if (!func_157(&(Local_190[14 /*10*/].f_6)))
		{
			func_190(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_306(uParam0))
			{
				func_323(uParam0, 1);
				func_321(14, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 4096))
	{
		if (!func_157(&(Local_190[11 /*10*/].f_6)))
		{
			func_190(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_305(uParam0))
			{
				func_323(uParam0, 1);
				func_321(11, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 8192))
	{
		if (!func_157(&(Local_190[12 /*10*/].f_6)))
		{
			func_190(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_154(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_304(uParam0))
			{
				func_323(uParam0, 1);
				func_321(12, uParam0);
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0);
			}
		}
	}
	if (func_218(uParam0->f_100, 4))
	{
		if (!func_157(&(Local_190[2 /*10*/].f_6)))
		{
			func_303(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_154(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_302(uParam0))
			{
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_323(uParam0, 1);
				func_321(2, uParam0);
				func_320(uParam0);
			}
		}
	}
}

int func_302(var uParam0)
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_2))
	{
		if ((!unk_0xD93CFE80D83E2106(uParam0->f_2) && !func_157(&(Local_190[0 /*10*/].f_3))) && !func_157(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_157(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x8BB475EA09C9A0EB(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_190(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_154(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x8BB475EA09C9A0EB(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_98(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_98(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_303(var uParam0, float fParam1)
{
	if (!func_157(uParam0))
	{
		func_156(uParam0, fParam1);
	}
}

int func_304(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		Var0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_157(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_157(&(Local_190[12 /*10*/].f_3)))
			{
				func_190(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_157(&(Local_190[0 /*10*/].f_3))) && !func_157(&(Local_190[1 /*10*/].f_3))) && !func_157(&(Local_190[5 /*10*/].f_3))) && !func_157(&(Local_190[9 /*10*/].f_3))) && !func_157(&(Local_190[7 /*10*/].f_3))) && !func_157(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (unk_0x7EECA16E87982278(Var0.f_0) > 2.5f && !func_157(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_157(&(Local_190[11 /*10*/].f_3)))
			{
				func_190(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_154(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x7EECA16E87982278(uLocal_342) - unk_0x7EECA16E87982278(Var0.f_0)) < 0f)
			{
				func_98(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_154(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_98(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (((((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_157(&(Local_190[0 /*10*/].f_3))) && !func_157(&(Local_190[8 /*10*/].f_3))) && !func_157(&(Local_190[5 /*10*/].f_3))) && !func_157(&(Local_190[9 /*10*/].f_3))) && !func_157(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_157(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xACC2D6D9762C28BB(unk_0xFBB1F99A825CAB09(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x765F6FEEFF39224F(uParam0->f_5))
			{
				if ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 15f && func_204(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xD62C4419A41F106A(uParam0->f_5, 0) && !unk_0x67FFBB75D2430704(uParam0->f_5, -1, 0)))
				{
					func_190(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_154(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_204(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x1235B764F6C5379B(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_154(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x1235B764F6C5379B(uParam0->f_5))
		{
			func_98(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_307(var uParam0)
{
	if (((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_157(&(Local_190[9 /*10*/].f_3))) && !func_157(&(Local_190[7 /*10*/].f_3))) && !func_157(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_308(uParam0->f_4) && unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 15f)
		{
			if (!func_157(&(Local_190[13 /*10*/].f_3)))
			{
				func_190(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_308(int iParam0)
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
	
	unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x446BC6EBC42BAFA8(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_312((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_311(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_309(unk_0xFBB1F99A825CAB09(iParam0, 1), Var15, Var18, Var21);
}

int func_309(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_312(Param6 - Param3) };
	Var3 = { func_312(Param9 - Param3) };
	fVar6 = func_310(Param0, Var0);
	fVar7 = func_310(Param3, Var0);
	fVar8 = func_310(Param6, Var0);
	fVar9 = func_310(Param0, Var3);
	fVar10 = func_310(Param3, Var3);
	fVar11 = func_310(Param9, Var3);
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

float func_310(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_311(struct<3> Param0, int iParam3)
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

Vector3 func_312(struct<3> Param0)
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

int func_313(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			if (unk_0x95BBE5C8D52FE24B(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x582A50CDE1F806AE(uParam0->f_4) <= -145f || unk_0x582A50CDE1F806AE(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x582A50CDE1F806AE(uParam0->f_4) <= 35f && unk_0x582A50CDE1F806AE(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_315(var uParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD6F2465C123AFABB(unk_0x95B959F18401C09A());
		if (iVar0 == 0)
		{
			if (!func_157(&(Local_190[4 /*10*/].f_3)))
			{
				func_190(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_98(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0x175878EE6AE912F7(unk_0x95B959F18401C09A());
		if (iVar0 == 0)
		{
			if (!func_157(&(Local_190[6 /*10*/].f_3)))
			{
				func_190(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x0D386FBDF1E8CD84(uParam0->f_4))
		{
			iVar0 = unk_0xE80842D7B53F8525(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x0D847D71D9E6142E(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_227(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_227(uParam0, 72, 1, 0, 1);
				}
				func_98(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		Var0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (unk_0x7EECA16E87982278(Var0.f_0) > 3f && !func_157(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_157(&(Local_190[1 /*10*/].f_3)))
			{
				func_190(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_98(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x156573D1AADB54ED(uParam0->f_4) && unk_0x7DD221C91135596A(uParam0->f_4))
		{
			if (!func_157(&(Local_190[0 /*10*/].f_3)))
			{
				func_190(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_98(&(Local_190[0 /*10*/].f_3));
				func_155(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_320(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_157(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_155(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_295(uParam0, 10, 0f, 1);
	unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
}

void func_321(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_322(uParam1, iParam0);
	func_98(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_322(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_324(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 25f)
		{
			if (!func_157(&(Local_190[5 /*10*/].f_3)))
			{
				func_190(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_154(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_325(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xD62C4419A41F106A(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, 1), Param1, iParam4);
}

void func_326(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_179();
	func_421(2);
	Var0 = { func_330() };
	if ((!unk_0x786AF4A44E1B5B4B(&Var0) && func_221()) && !unk_0xCE3CFF625BEBAA04(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xD362430CD61A9B08();
		unk_0xEDF90B96BED57BCE(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (!func_169(uParam0))
			{
				if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_295(uParam0, 3, 0, 0);
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
				func_328(uParam0, &Var0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_169(uParam0))
			{
				if (unk_0x61DFE32FB87BC784(uParam0->f_4))
				{
					func_152(uParam0, 4096, 0);
				}
				else
				{
					func_152(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_328(uParam0, &Var0);
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
				func_328(uParam0, &Var0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_328(uParam0, &Var0);
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_328(uParam0, &Var0);
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_48(8, 0);
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
				func_328(uParam0, &Var0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_152(uParam0, 0, 0);
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_48(8, 0);
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
				func_328(uParam0, &Var0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_328(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_48(8, 0);
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
				func_328(uParam0, &Var0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_327(&Var0);
			func_105(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_328(uParam0, &Var0);
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
					func_328(uParam0, &Var0);
				}
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_48(3, 0);
		}
		func_295(uParam0, 3, 0f, 1);
	}
}

void func_327(char* sParam0)
{
	switch (func_3(unk_0x33CD235DF1E6A94E()))
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

void func_328(var uParam0, char* sParam1)
{
	if (func_329(uParam0))
	{
		func_105(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_329(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_204(unk_0x33CD235DF1E6A94E(), uParam0->f_3, 1) < 40f && !unk_0xC30D5C4DCAC8020A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_330()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = unk_0xF26F606F8B36E2AC();
		iVar6 = (iVar6 + Global_16876);
		if (iVar6 > -1)
		{
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_331(var uParam0)
{
	return uParam0->f_118;
}

void func_332()
{
	if (func_362(&Local_409, &Local_866))
	{
		switch (Local_866.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (func_222(&Local_409) > 10 && func_222(&Local_409) != 15)
					{
						func_227(&Local_409, 15, 1, 0, 0);
						func_295(&Local_409, 10, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_401(&Local_409, 18) > 15f)
				{
					if (func_222(&Local_409) > 10 && func_222(&Local_409) != 17)
					{
						func_219(&(Local_409.f_81), 67108864);
						func_227(&Local_409, 17, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 2:
				if (func_401(&Local_409, 18) > 30f)
				{
					if (func_222(&Local_409) > 10 && func_222(&Local_409) != 16)
					{
						func_227(&Local_409, 16, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if (func_401(&Local_409, 18) > 30f)
				{
					if (func_222(&Local_409) > 10 && func_222(&Local_409) != 18)
					{
						func_227(&Local_409, 18, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 4:
				if (func_401(&Local_409, 18) > 30f)
				{
					if (func_222(&Local_409) > 10 && func_222(&Local_409) != 19)
					{
						func_227(&Local_409, 19, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_333(&Local_409, &uLocal_896, &Local_866, 1, bLocal_865);
}

int func_333(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var6;
	
	func_345(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_344(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_343(uParam0))
				{
					uParam2->f_7 = { func_342(uParam1) };
					func_105(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_221())
				{
					uParam2->f_13 = { func_230() };
					if (unk_0xCE3CFF625BEBAA04(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_194(uParam0))
				{
					if (func_221())
					{
						if (unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_295(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_330() };
							func_46();
						}
						else
						{
							uParam2->f_1 = { func_341() };
							func_179();
						}
						if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_221())
				{
					uParam2->f_19 = { func_341() };
				}
				else
				{
					func_220(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_338(uParam1);
					func_295(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_191(uParam0, 14) && !func_221()) && !func_194(uParam0)) && func_401(uParam0, 18) > 1f)
				{
					func_295(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_401(uParam0, 18) > 1.5f && !func_221()) && !func_194(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_337(uParam2, &cVar0))
					{
						func_105(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_295(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var6 = { cVar0 };
						func_336(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_295(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_221() && func_401(uParam0, 17) > 1f)
				{
					if (func_401(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (unk_0xCE3CFF625BEBAA04(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_229(&(uParam2->f_1));
							func_105(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_188(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0x786AF4A44E1B5B4B(&(uParam2->f_1)))
						{
							func_334(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_221())
				{
					func_220(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_338(uParam1);
					func_295(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_334(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_106(sParam2, iParam4, 0);
}

int func_335(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_106(sParam2, iParam4, 0);
}

void func_336(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_274(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_229(sParam2);
				}
				else
				{
					func_229(sParam2);
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

int func_337(var uParam0, char* sParam1)
{
	if (unk_0xCE3CFF625BEBAA04(&(uParam0->f_13), "txm3_bant1") || unk_0xCE3CFF625BEBAA04(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0xCE3CFF625BEBAA04(&(uParam0->f_13), "txm6_bant3M") || unk_0xCE3CFF625BEBAA04(&(uParam0->f_13), "txm6_bant3T")) || unk_0xCE3CFF625BEBAA04(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_219(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_338(var uParam0)
{
	int iVar0;
	
	iVar0 = func_340(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_219(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_339(), 24);
	}
}

var func_339()
{
	var uVar0;
	
	return uVar0;
}

int func_340(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_218((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_341()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = unk_0xF26F606F8B36E2AC();
		iVar6 = (iVar6 + Global_16876);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar7 /*6*/])))
			{
				return Global_14734[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar8 /*6*/])))
					{
						return Global_14734[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_342(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_218((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_219(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_343(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_196("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_196("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_196("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_196("TX_OBJ_GYB_DO", 0, 0) || func_196("TAXI_OBJ_GYB", 0, 0)) || func_196("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_196("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_196("TX_OBJ_CYI_DO", 0, 0) || func_196("TAXI_OBJ_CYI_01", 0, 0)) || func_196("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_196("TX_OBJ_GYN_DO", 0, 0) || func_196("TAXI_OBJ_GYN", 0, 0)) || func_196("TAXI_OBJ_GYN_TG", 0, 0)) || func_196("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_196("TAXI_OBJ_CC1", 0, 0) || func_196("TAXI_OBJ_CC2", 0, 0)) || func_196("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_196("TAXI_OBJ_FTC1", 0, 0) || func_196("TAXI_OBJ_FTC2", 0, 0)) || func_196("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_196("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_196("TAXI_OBJ_GETRUN", 0, 0) || func_196("TAXI_OBJ_DRIVE", 0, 0)) || func_196("TAXI_OBJ_RETURN", 0, 0)) || func_196("TAXI_OBJ_POL", 0, 0)) || func_196("TAXI_OBJ_RUNOUT", 0, 0)) || func_196("TAXI_OBJ_POL", 0, 0));
}

int func_344(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_218((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_345(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_343(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_191(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_222(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_361(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_221())
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
						func_360(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_357(uParam0, Var0, func_359(uParam0, 2));
				}
				if (func_218(uParam0->f_98, 4))
				{
					func_295(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				func_209(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_401(uParam0, 16) > 1f)
				{
					func_211(1);
					if (uParam0->f_411 == 9)
					{
						func_259("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_259("TAXI_VIP_RETURN", 7500, 1);
					}
					func_295(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
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
					func_360(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_401(uParam0, 16) > func_118(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_221()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_222(uParam0))
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
				func_360(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_361(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_105(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_227(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_295(uParam0, 16, 0, 0);
				func_227(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_218(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_336(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_360(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_295(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_259("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_259("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE38E3CF1625A4145(uParam0->f_9))
					{
						uParam0->f_9 = func_356(uParam0->f_17, 1);
					}
					else if (unk_0x163940E51B9C8A0D(uParam0->f_9) == 0)
					{
						unk_0xE447A1B9434714F3(uParam0->f_9, 255);
						unk_0xA0220BF0AB292278(uParam0->f_9, uParam0->f_17);
						unk_0x1C316779E36C1967(uParam0->f_9, 1);
					}
				}
				func_227(uParam0, 10, 1, 0, 0);
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
				func_229(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_255(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE38E3CF1625A4145(uParam0->f_9))
					{
						uParam0->f_9 = func_356(uParam0->f_17, 1);
					}
					else if (unk_0x163940E51B9C8A0D(uParam0->f_9) == 0)
					{
						unk_0xE447A1B9434714F3(uParam0->f_9, 255);
						unk_0xA0220BF0AB292278(uParam0->f_9, uParam0->f_17);
						unk_0x1C316779E36C1967(uParam0->f_9, 1);
					}
				}
				func_227(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_355(uParam0, 33554432, Var0, "", 1, 8);
				func_295(uParam0, 16, 0, 0);
				func_227(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_221())
				{
					func_354(uParam0, 0);
					func_219(&(uParam0->f_44), 4);
					func_295(uParam0, 16, 0, 0);
					func_227(uParam0, 13, 0, 0, 0);
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
				func_229(&Var0);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_401(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_229(&Var0);
					}
					func_352(Var0, uParam1);
					func_219(&(uParam0->f_81), 67108864);
					func_295(uParam0, 16, 0, 0);
					func_295(uParam0, 11, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_401(uParam0, 11) > uParam0->f_36)
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
							func_229(&Var0);
						}
					}
					func_352(Var0, uParam1);
					func_295(uParam0, 11, 0, 0);
					func_295(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
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
					func_229(&Var0);
				}
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
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
				func_229(&Var0);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
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
				func_229(&Var0);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_229(&Var0);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				func_219(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 1, 0, 8);
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
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
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
					func_351(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_351(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_352(Var0, uParam1);
				func_361(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 6, 0f, 1);
				func_260(uParam0, 0, 0);
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
					func_351(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_351(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_352(Var0, uParam1);
				func_361(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 6, 0f, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 12:
				func_259("TAXI_OBJ_GYB", 3500, 1);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_259("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_259("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_259("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
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
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_218(uParam0->f_98, 268435456))
				{
					func_259("TAXI_OBJ_CYI_01", 7500, 1);
					func_219(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_229(&Var0);
				func_352(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_229(&Var0);
				func_352(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_229(&Var0);
				func_352(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 33:
				func_259("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_218(uParam0->f_82, 8192))
				{
					if (func_401(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_229(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_352(Var0, uParam1);
						}
						else
						{
							func_360(uParam0, &Var0, 0, 0, 8);
						}
						func_219(&(uParam0->f_82), 8192);
						func_295(uParam0, 16, 0, 0);
						func_295(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_218(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_229(&Var0);
					func_360(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_218(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_229(&Var0);
					func_360(uParam0, &Var0, 0, 0, 8);
					func_219(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 46, 1, 0, 0);
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
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_260(uParam0, 0, 0);
				break;
			
			case 139:
				func_259("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_227(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x9EC3B269A34A2BEE(0, 120);
				if (!func_218(uParam0->f_82, 268435456))
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
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x9EC3B269A34A2BEE(0, 100);
				if (!func_218(uParam0->f_82, 268435456))
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
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_259("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_260(uParam0, 0, 0);
				func_227(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_221())
				{
					func_259("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_260(uParam0, 0, 0);
					func_227(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_259("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_260(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_218(uParam0->f_81, 1))
				{
					func_350(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_218(uParam0->f_81, 2))
				{
					func_350(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_361(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_218(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_218(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_219(&(uParam0->f_81), 2097152);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_295(uParam0, 16, 0, 0);
				func_361(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_361(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_361(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_361(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_218(uParam0->f_81, 4))
				{
					func_350(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_218(uParam0->f_81, 8))
				{
					func_350(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_350(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_361(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_349(uParam0))
				{
					func_357(uParam0, Var0, func_359(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_336(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_105(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_336(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_336(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_361(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_218(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_295(uParam0, 16, 0, 0);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_218(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_229(&Var0);
					}
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_229(&Var0);
					}
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_229(&Var0);
					}
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_295(uParam0, 16, 0, 0);
				}
				func_361(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_218(uParam0->f_81, 4096))
				{
					func_355(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_218(uParam0->f_81, 8192))
				{
					func_355(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_361(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_218(uParam0->f_81, 16384))
				{
					func_355(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_218(uParam0->f_81, 32768))
				{
					func_355(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_361(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_218(uParam0->f_82, 8))
					{
						func_348(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_218(uParam0->f_82, 16))
					{
						func_348(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_218(uParam0->f_82, 32))
					{
						func_348(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_361(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_260(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_336(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_361(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_295(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_361(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_361(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_218(uParam0->f_81, 65536))
				{
					func_355(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_218(uParam0->f_81, 131072))
				{
					func_355(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_349(uParam0))
				{
					func_357(uParam0, Var0, func_359(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_218(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_295(uParam0, 16, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_219(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_295(uParam0, 16, 0, 0);
				}
				func_361(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_221())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_360(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_357(uParam0, Var0, func_359(uParam0, 65));
					func_260(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_221())
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
					func_360(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_357(uParam0, Var0, func_359(uParam0, 66));
					func_260(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_221())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								func_361(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								func_361(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_361(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_295(uParam0, 16, 0, 0);
								func_260(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_360(uParam0, &Var0, 0, 0, 8);
									func_295(uParam0, 16, 0, 0);
									func_295(uParam0, 11, 0, 0);
									func_260(uParam0, 0, 0);
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
									func_229(&Var0);
									func_360(uParam0, &Var0, 0, 0, 8);
									func_295(uParam0, 16, 0, 0);
									func_295(uParam0, 11, 0, 0);
									func_260(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_360(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_227(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_361(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_218(uParam0->f_82, 1))
				{
					func_348(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_218(uParam0->f_82, 2))
				{
					func_348(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_218(uParam0->f_82, 4))
				{
					func_348(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_260(uParam0, 0, 0);
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
				func_336(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_295(uParam0, 16, 0, 0);
				func_361(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_349(uParam0))
				{
					func_357(uParam0, Var0, func_359(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_255(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_347(uParam0, Var0, 8);
				}
				func_361(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_218(uParam0->f_83, 1024))
				{
					func_219(&(uParam0->f_83), 1024);
					func_295(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 2048))
				{
					func_219(&(uParam0->f_83), 2048);
					func_295(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_218(uParam0->f_83, 4096))
				{
					func_219(&(uParam0->f_83), 4096);
					func_295(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_229(&Var0);
					func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_218(uParam0->f_82, 1024))
				{
					func_348(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_218(uParam0->f_82, 2048))
				{
					func_348(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_361(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 52, 1, 0, 0);
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
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_255(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_349(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_360(uParam0, &Var0, 0, 0, 8);
						func_227(uParam0, 52, 1, 0, 0);
						func_295(uParam0, 16, 0, 0);
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
						func_360(uParam0, &Var0, 0, 0, 8);
						func_295(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_336(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_295(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_361(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_295(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
				{
					func_259("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_218(uParam0->f_81, 262144))
				{
					func_355(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_218(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_355(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_355(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_361(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_218(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_346(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_218(uParam0->f_82, 134217728))
				{
					func_346(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_361(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 100:
				func_259("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_260(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_229(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_229(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_360(uParam0, &Var0, 0, 0, 8);
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
					func_229(&Var0);
				}
				func_219(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_218(uParam0->f_82, 65536))
				{
					if (func_401(uParam0, 11) > uParam0->f_36)
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
						func_229(&Var0);
						func_352(Var0, uParam1);
						func_219(&(uParam0->f_82), 65536);
						func_295(uParam0, 16, 0, 0);
						func_295(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_218(uParam0->f_82, 131072))
				{
					if (func_401(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_229(&Var0);
						func_352(Var0, uParam1);
						func_219(&(uParam0->f_82), 131072);
						func_295(uParam0, 16, 0, 0);
						func_295(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_218(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_219(&(uParam0->f_82), 8388608);
				}
				else if (!func_218(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_219(&(uParam0->f_82), 16777216);
				}
				else if (!func_218(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_219(&(uParam0->f_82), 33554432);
				}
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_229(&Var0);
					func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_360(uParam0, &Var0, 0, 0, 8);
				}
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_352(Var0, uParam1);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_336(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_227(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_219(&(uParam0->f_81), 2097152);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_229(&Var0);
				func_352(Var0, uParam1);
				func_219(&(uParam0->f_81), 67108864);
				func_295(uParam0, 16, 0, 0);
				func_295(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_218(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_355(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_255(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_227(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_218(uParam0->f_81, 268435456))
				{
					func_355(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_227(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_259("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_260(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_218(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_355(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
						{
							func_255(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_355(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_227(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_259("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_260(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_105(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_295(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_218(uParam0->f_81, 16777216))
				{
					func_355(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 88:
				func_259("TAXI_TIEFLEE", 7500, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_218(uParam0->f_98, 536870912))
				{
					func_259("TAXI_OBJ_CYI_1B", 7500, 1);
					func_219(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_260(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_229(&Var0);
				func_360(uParam0, &Var0, 0, 0, 8);
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
				func_360(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_360(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
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
				func_360(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_360(uParam0, &Var0, 1, 0, 8);
				func_227(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_259("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_227(uParam0, 0, 0, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			}
	}
}

void func_346(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_219(&(uParam0->f_82), iParam1);
	func_295(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_229(&Param2);
	}
	func_105(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_347(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_218(uParam0->f_82, 64))
	{
		func_219(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_218(uParam0->f_82, 128))
	{
		func_219(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x9EC3B269A34A2BEE(1, 3), 24);
	}
	func_335(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_295(uParam0, 16, 0, 0);
}

void func_348(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_219(&(uParam0->f_82), iParam1);
	func_295(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_229(&Param2);
		}
	}
	func_105(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_349(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_350(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_219(&(uParam0->f_81), iParam1);
	func_295(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_105(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_351(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_274(*uParam0, iVar1))
		{
			func_220(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_229(sParam2);
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

void func_352(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_353(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_219(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_353(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x786AF4A44E1B5B4B(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_354(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_259("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_259("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_259("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_259("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_259("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_259("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_259("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_259("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_259("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_259("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_259("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_259("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_355(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_219(&(uParam0->f_81), iParam1);
	func_295(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_229(&Param2);
	}
	func_105(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_356(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2C0ED4741A007C6A(Param0);
	unk_0xCE5C49921A521962(uVar0, func_118(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(uVar0, iParam3);
	return uVar0;
}

void func_357(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_295(uParam0, 16, 0, 0);
	func_295(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
	{
		unk_0x41EDD559141FF338(uParam0->f_3, &cParam1, func_358(uParam0));
	}
}

char* func_358(var uParam0)
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

char* func_359(var uParam0, int iParam1)
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

int func_360(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_295(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_295(uParam0, 17, 0f, 1);
	}
	func_260(uParam0, iParam2, 0);
	return func_105(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_361(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_218(*uParam2, 2))
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
		if (func_218(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_218(*uParam2, 4))
		{
			if (!func_218(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_218(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_218(*uParam2, 512))
		{
			if (!func_218(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_218(*uParam2, 16))
		{
			if (!func_218(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_218(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_218(*uParam2, 64))
		{
			if (!func_218(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_218(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_218(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_218(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_218(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_218(*uParam2, 8192))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_218(*uParam2, 16384))
		{
			if (func_218(*uParam2, 4194304))
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
		if (func_218(*uParam2, 32768))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_218(*uParam2, 65536))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_218(*uParam2, 131072))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_218(*uParam2, 262144))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_218(*uParam2, 524288))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_218(*uParam2, 1048576))
		{
			if (func_218(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_218(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_218(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_218(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_218(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_218(*uParam2, 67108864))
		{
			if (func_218(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_218(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_218(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_218(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_218(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

bool func_362(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_191(uParam0, 9));
}

bool func_363(var uParam0)
{
	return uParam0->f_117;
}

void func_364(var uParam0, var uParam1, bool bParam2)
{
	if (!func_218(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x786AF4A44E1B5B4B(&(uParam0->f_124)) && func_221())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_221())
				{
					StringCopy(&(uParam0->f_124), func_339(), 24);
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

void func_365(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x765F6FEEFF39224F(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_274(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_274(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_274(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_220(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xE3903F59E2F22150();
							}
						}
						else
						{
							func_20(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_274(Local_343.f_1[iVar0 /*4*/], 4) && !func_274(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_220(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_326(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_366(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_191(uParam0, 27))
	{
		func_189(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_401(uParam0, 27) > 5f)
	{
		if (func_393(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_295(uParam0, 27, 0, 0);
			func_295(uParam0, 10, 0, 0);
			func_391(uParam0, &uVar0, uParam1);
		}
		func_388(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_367(uParam0);
	}
	if ((((!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) && (unk_0x117DAF3BF7232886(*uParam0) && !unk_0x49D25022440E65EE(*uParam0))) && (unk_0x117DAF3BF7232886(uParam0->f_1) && !unk_0x49D25022440E65EE(uParam0->f_1))) && !unk_0xC4B7D5901EDA35B5()) && !func_221())
	{
		if (func_401(uParam0, 26) > 10f)
		{
			func_188(uParam0, 26, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 1, 0);
		}
	}
	else if (func_191(uParam0, 26))
	{
		func_188(uParam0, 26, 0);
	}
	return 0;
}

void func_367(var uParam0)
{
	if (!func_387(uParam0->f_429))
	{
		uParam0->f_429 = func_386();
		func_377(&(uParam0->f_429), 0, 0, unk_0x9EC3B269A34A2BEE(4, 7), 0, 0, 0);
	}
	else if (func_368(uParam0->f_429))
	{
		func_326(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_368(int iParam0)
{
	return func_369(func_386(), iParam0);
}

int func_369(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_387(iParam1) || !func_387(iParam0))
	{
		return 1;
	}
	iVar0 = func_375(iParam0);
	iVar1 = func_375(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_374(iParam0);
	iVar1 = func_374(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_373(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_370(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_371(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_372(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_373(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_374(int iParam0)
{
	return iParam0 & 15;
}

var func_375(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_376(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_376(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_377(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_375(*uParam0);
	iVar1 = func_374(*uParam0);
	iVar2 = func_373(*uParam0);
	iVar3 = func_372(*uParam0);
	iVar4 = func_371(*uParam0);
	iVar5 = func_370(*uParam0);
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
	iVar6 = func_385(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_385(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_378(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_378(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_384(uParam0, iParam1);
	func_383(uParam0, iParam2);
	func_382(uParam0, iParam3);
	func_381(uParam0, iParam5);
	func_380(uParam0, iParam4);
	func_379(uParam0, iParam6);
}

void func_379(var uParam0, int iParam1)
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

void func_380(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_374(*uParam0);
	iVar1 = func_375(*uParam0);
	if (iParam1 < 1 || iParam1 > func_385(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_383(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_384(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_385(int iParam0, int iParam1)
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

int func_386()
{
	var uVar0;
	
	func_384(&uVar0, unk_0xE6A7CE90720B9037());
	func_383(&uVar0, unk_0x7EA67BD818402745());
	func_382(&uVar0, unk_0x13348E86D5B8A052());
	func_380(&uVar0, unk_0x020A28FAE1C09250());
	func_381(&uVar0, unk_0x2C02CAA9C4127339());
	func_379(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

int func_387(int iParam0)
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
	iVar0 = func_370(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_371(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_372(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_375(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_374(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_373(iParam0);
	if (iVar5 < 1 || iVar5 > func_385(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_388(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_390()) && !func_192(uParam0)) || ((uParam0->f_411 != 9 && func_264(uParam0, 1)) && !func_192(uParam0)))
		{
			uVar0 = func_389(uParam0->f_4);
			unk_0x4955686EF8308B47(&uVar0);
			uParam0->f_4 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			unk_0x0D21E1FDE062ED99(uParam0->f_4, 1, 0);
			func_214(uParam0);
			func_205(uParam0, 0);
		}
	}
}

var func_389(var uParam0)
{
	return uParam0;
}

int func_390()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
				{
					if (unk_0xD470A4E16E9AAE0E(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_391(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_392(uParam0, 0, 1))
			{
				func_326(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_392(uParam0, 0, 4))
			{
				func_326(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_392(uParam0, 0, 8))
			{
				func_326(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_392(uParam0, 1, 1))
			{
				func_326(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_392(uParam0, 0, 1))
			{
				func_326(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_218(*uParam2, 2) && func_169(uParam0))
			{
				func_326(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_392(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (!unk_0xC30D5C4DCAC8020A(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_227(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_227(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_393(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (!func_218(*uParam2, 1))
		{
			if (func_399(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_218(*uParam2, 2))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_218(*uParam2, 4))
		{
			if (func_397(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_218(*uParam2, 8))
		{
			if (func_396(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_218(*uParam2, 128);
		if (bParam4)
		{
			if (func_394(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_218(*uParam2, 16))
		{
			if (func_394(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (iParam7 && unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0xE80842D7B53F8525(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0xE80842D7B53F8525(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(uVar0, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(uVar1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0x2E9A4AE2A5B4D8E8(iParam0))
			{
				if (unk_0x457C8D55A1BB6B51(iParam0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x18FB647D79B09657(iParam0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16BA85002E7063C6(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x162E5B814E5F91B3(iParam0))
		{
			return 1;
		}
	}
	if (func_395(unk_0x33CD235DF1E6A94E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3AF2B3B68DD52355(iParam0) && func_203(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), unk_0xF2C96862595654B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iParam0))
		{
			return 1;
		}
		if (!unk_0xD62C4419A41F106A(uParam1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xFBB1F99A825CAB09(iParam0, 1), unk_0xFBB1F99A825CAB09(iParam1, 1)) < 2.5f)
			{
				if (unk_0x910FF514D7BC5674(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_396(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9ED464AAA493C8EF(uParam0, 4))
	{
		if (unk_0x5DACF31D3AC5ED8D(uParam0) && !unk_0xB15E06E3E9C9AEA5(iParam0))
		{
			if (unk_0x18FB647D79B09657(uParam1, unk_0xFBB1F99A825CAB09(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xD62C4419A41F106A(uParam1, 0))
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
	}
	if (unk_0x416C37C19CCE0077(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xEA8CEFB1F41E5992(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9ED464AAA493C8EF(uParam0, 2))
	{
		if (unk_0x5DACF31D3AC5ED8D(uParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x22B02EC53152632C(iParam1), 0))
			{
				iVar3 = unk_0xF2C96862595654B4(unk_0x22B02EC53152632C(iParam1), 0);
			}
			if (unk_0x105CB7A75E93DC77(iParam0) || func_398(iVar3))
			{
				if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x34DB0AC28A1FDE20((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0) != 0)
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_204(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 40f)
						{
							if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &uVar1))
							{
								if ((unk_0x680558231C80291D(uVar1) && unk_0xEAE1362B9F5C7B18(iVar1) == iParam0) || (unk_0x068481DAF84B9654(iVar1) && unk_0x22B02EC53152632C(iVar1) == unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0)))
								{
									if ((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && unk_0xF1CDE9FD207C4CD8(0, 24)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF1CDE9FD207C4CD8(0, 69)))
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

int func_399(int iParam0, var uParam1)
{
	if (!unk_0xD62C4419A41F106A(uParam0, 0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				if (unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 90f))
				{
					if (func_203(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xE3903F59E2F22150();
						}
						else if ((unk_0xE3903F59E2F22150() - uParam1->f_1) > uParam1->f_3)
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

void func_400(var uParam0)
{
	if (!func_218(uParam0->f_98, 2))
	{
		if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
		{
			if (func_325(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xB7350047030F7672(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_219(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_401(var uParam0, int iParam1)
{
	if (!func_157(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_190(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_154(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_402()
{
	func_403(&Local_409);
	func_420();
}

void func_403(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_421(2);
	}
}

int func_404(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_221() && func_401(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
			{
				if (unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_59(uParam0) == 0 || func_274(uParam0->f_85, 32))
					{
						if (!unk_0x61DFE32FB87BC784(uParam0->f_4))
						{
							func_152(uParam0, 4160, 0);
						}
						else
						{
							func_152(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_152(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_152(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_152(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
	{
	}
	return 0;
}

void func_405(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_8))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_8));
	}
	if (unk_0xE38E3CF1625A4145(uParam0->f_9))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_9));
	}
	if (unk_0xE38E3CF1625A4145(uParam0->f_10))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_10));
	}
}

int func_406(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0)
{
	func_409(&Local_409, iParam0);
	Local_409.f_410 = 0;
	func_408(&Local_409, 7, 14);
	Local_409.f_23 = { -492.4436f, -290.3657f, 34.486f };
	Local_409.f_33 = 202.0759f;
	Local_409.f_26 = { 856.3766f, 1288.918f, 357.7924f };
	Local_409.f_34 = 162.3f;
	Local_409.f_6 = 1f;
	Local_409.f_29 = { 810.3334f, 1172.413f, 321.8036f };
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_409(var uParam0, var uParam1)
{
	func_419(1);
	func_216();
	func_6(&(uParam0->f_244));
	func_418(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_218(Global_106565.f_19091, 4))
	{
		func_219(&(Global_106565.f_19091), 4);
	}
	func_413(uParam0);
	func_411(uParam0);
	unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, 0);
	uParam0->f_102 = (func_410(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x2EE8D1440C9060EF("TAXI", 2);
}

int func_410(int iParam0)
{
	return Global_106565.f_19091.f_39[iParam0];
}

void func_411(var uParam0)
{
	switch (func_59(uParam0))
	{
		case 0:
			func_412(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_412(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_412(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_412(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_412(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_412(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_412(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_412(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_412(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_412(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_412(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_413(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_417(uParam0, 3);
			func_416(uParam0, 14);
			break;
		
		case 1:
			func_417(uParam0, 14);
			func_416(uParam0, 8);
			break;
		
		case 2:
			func_417(uParam0, 8);
			func_416(uParam0, 7);
			break;
		
		case 3:
			func_417(uParam0, 15);
			func_416(uParam0, 6);
			break;
		
		case 4:
			func_417(uParam0, 0);
			func_416(uParam0, 3);
			break;
		
		case 5:
			func_417(uParam0, 6);
			func_416(uParam0, 7);
			break;
		
		case 6:
			func_417(uParam0, 8);
			func_416(uParam0, 15);
			break;
		
		case 7:
			func_417(uParam0, 8);
			func_416(uParam0, 14);
			break;
		
		case 8:
			func_417(uParam0, 7);
			func_416(uParam0, 15);
			break;
		
		case 9:
			func_417(uParam0, unk_0x9EC3B269A34A2BEE(0, 17));
			iVar0 = func_415((uParam0->f_418.f_2 + unk_0x9EC3B269A34A2BEE(1, 17)), 0, 16);
			func_416(uParam0, iVar0);
			func_414(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_414(var uParam0)
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

int func_415(int iParam0, int iParam1, int iParam2)
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

void func_416(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_417(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_418(var uParam0)
{
	uParam0->f_2 = unk_0x33CD235DF1E6A94E();
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
	func_188(uParam0, 32, 0);
}

void func_419(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105621, unk_0xD178EF744F20B712(), 24);
		Global_105615 = 1;
	}
	else
	{
		StringCopy(&Global_105621, "NULL", 24);
		Global_105615 = 0;
	}
}

void func_420()
{
	unk_0x71CA80D41E1338B4(iLocal_851);
	unk_0xFF2DEA68E2D3602E("gestures@m@standing@casual");
	func_119(&uLocal_45, 0, 0);
	unk_0x5894DC159447E10A();
}

void func_421(int iParam0)
{
	Global_105275.f_22 = iParam0;
}

