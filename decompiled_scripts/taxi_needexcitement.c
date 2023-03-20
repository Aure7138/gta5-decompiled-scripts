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
	int iLocal_92 = 0;
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
	struct<411> Local_408 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = -1;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	int iLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	struct<3> Local_846[1];
	int iLocal_850 = 0;
	struct<3> Local_851 = { 0, 0, 0 } ;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857 = { 0, 0, 0 } ;
	int iLocal_860 = 0;
	var uLocal_861 = 0;
	bool bLocal_862 = 0;
	int iLocal_863 = 0;
	bool bLocal_864 = 0;
	struct<28> Local_865 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 5;
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
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
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
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
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
	uLocal_76 = unk_0x386A330DA3CBD6A0();
	uLocal_77 = unk_0xDEE2BB2717E7BE07();
	Local_82 = { 500f, 500f, 500f };
	iLocal_850 = joaat("a_m_y_skater_02");
	Local_851 = { -496.0739f, -336.6628f, 33.5017f };
	Local_854 = { -484.6879f, -330.1646f, 33.3534f };
	Local_857 = { 725.3476f, 1204.526f, 324.9057f };
	iLocal_860 = 1;
	if (unk_0xD63E63DFACCEB80E(67))
	{
		func_400(2);
		func_399();
	}
	unk_0x6F468A6C94DC21AE(1);
	func_386(0);
	while (true)
	{
		if (unk_0x746960881FB19A89(Local_408.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_408);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x9F92518438215DD0();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x9F92518438215DD0());
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
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x9F92518438215DD0());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
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
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_385(&Local_408))
	{
		func_384(&Local_408);
		if (Local_408.f_410 > 0)
		{
			if (func_383(&Local_408, 0))
			{
				func_381();
			}
		}
		else if (func_380(&Local_408, 31) > 5f)
		{
			func_400(2);
			func_399();
		}
	}
	else
	{
		func_379(&Local_408);
		if (Local_408.f_410 <= 9)
		{
			func_345(&Local_408, &uLocal_936);
			func_344(&Local_408);
		}
		func_343(&Local_408, &uLocal_861, 0);
		if (Local_408.f_410 > 2)
		{
			if (!func_342(&Local_408))
			{
				func_311();
			}
			else
			{
				func_305(&Local_408, "Taxi Not Driveable", func_310(&Local_408));
			}
		}
		if (Local_408.f_410 == 9)
		{
			if (Local_408.f_139)
			{
				if (!unk_0x0BA451447C3B1A8D(Local_408.f_4) && func_304(Local_408.f_4, Local_408.f_17, 1) > 450f)
				{
					func_280(&Local_408, 0, 0);
				}
				else
				{
					func_280(&Local_408, 0, 1);
				}
			}
		}
		switch (Local_408.f_410)
		{
			case 0:
				func_279(&(Local_846[0 /*3*/]), "TAXI_SC_BN_02", 200);
				func_278(&Local_408, &Local_846);
				func_275();
				func_274(&Local_408, 16, 4f, 0);
				func_272(&Local_408, Local_851, Local_854, "TaxiFelipe", iLocal_850, 256f, 30f);
				func_270(&Local_408);
				func_269(&Local_408, 1);
				break;
			
			case 1:
				if (func_267())
				{
					func_266();
					func_246();
					func_245(&Local_408);
					Local_408.f_14 = { Local_851 };
					func_269(&Local_408, 3);
				}
				break;
			
			case 3:
				if (func_240(&Local_408, 1))
				{
					if (!unk_0x0BA451447C3B1A8D(Local_408.f_3))
					{
						unk_0x9001FCB58244C11D(Local_408.f_3, 29, 0);
						unk_0xB27BF64B02C0107E(Local_408.f_3, 3, 1, 1, 0);
						unk_0xB27BF64B02C0107E(Local_408.f_3, 4, 1, 2, 0);
						unk_0xB27BF64B02C0107E(Local_408.f_3, 0, 0, 1, 0);
						unk_0xB27BF64B02C0107E(Local_408.f_3, 11, 1, 0, 0);
					}
					func_239(&Local_408, 1, 0);
					func_269(&Local_408, 5);
				}
				break;
			
			case 5:
				if (!unk_0xFE0FA79BC49EBB07(Local_408.f_4, -484.9218f, -370.1231f, 33.40805f, -517.9089f, -362.7899f, 37.31326f, 28.75f, 0, 1, 0) && !unk_0xFE0FA79BC49EBB07(Local_408.f_4, -472.0588f, -321.036f, 33.35326f, -485.479f, -285.4217f, 37.49232f, 28.75f, 0, 1, 0))
				{
					if (func_211(&Local_408, 0, 30f))
					{
						func_269(&Local_408, 15);
					}
				}
				break;
			
			case 15:
				if (func_210(&Local_408))
				{
					Local_408.f_17 = { Local_857 };
					bLocal_862 = true;
					func_206(&Local_408, 9, 1, 0, 0);
					func_205(&Local_408);
					Local_408.f_46 = unk_0xFD181DDA4D8D6786(Local_408.f_4);
					func_269(&Local_408, 7);
				}
				if (unk_0xFC38B241541883D3(Local_408.f_4, 0))
				{
					if (!unk_0x44E080690DA76A2A(Local_408.f_2, Local_408.f_4, 0))
					{
						func_203(&Local_408);
						func_269(&Local_408, 5);
					}
				}
				break;
			
			case 7:
				if (bLocal_862)
				{
					func_202();
					func_269(&Local_408, 9);
				}
				break;
			
			case 9:
				if (((func_304(Local_408.f_4, Local_408.f_17, 1) < 875f && func_201(&Local_408) != 68) && !func_200()) && !iLocal_863)
				{
					func_198(&(Local_408.f_100), 16384);
					func_206(&Local_408, 68, 1, 0, 1);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_863 = 1;
				}
				if (func_197(Local_408.f_81, 67108864))
				{
					if (!func_196(&Local_408))
					{
					}
				}
				if (func_159(&Local_408, 9f, 7.5f))
				{
					unk_0x0451B5D93A4BDAA0(&(Local_408.f_9));
					func_158();
					func_157(&Local_865, -1, 1);
					if (Local_408.f_76 >= 95)
					{
						func_156(&Local_408, 0);
					}
					func_154(&Local_408);
					func_150(&Local_408);
					if (Local_408.f_56 < Local_408.f_58)
					{
						func_269(&Local_408, 28);
					}
					else
					{
						unk_0x402A96371F34E6D8(Local_408.f_3, unk_0x9F92518438215DD0(), -1, 2049, 3);
						unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), Local_408.f_3, -1, 2049, 3);
						func_269(&Local_408, 27);
					}
					func_149(&Local_408);
				}
				break;
			
			case 27:
				if (func_140(&Local_408, 1))
				{
					unk_0xD2062A6AC314B85E(Local_408.f_3);
					unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
					func_139(&Local_408);
					func_269(&Local_408, 29);
				}
				break;
			
			case 28:
				if (iLocal_838 == 2 && !func_138(Local_408.f_2, Local_408.f_3))
				{
					if (!func_137(&uLocal_943))
					{
						func_136(&uLocal_943);
					}
					else if (func_135(&uLocal_943) > 5f)
					{
						func_206(&Local_408, 106, 1, 0, 1);
						func_136(&uLocal_943);
					}
				}
				if (func_104(&iLocal_838, &Local_408, &(Local_408.f_3), &uLocal_839, 1))
				{
					if (!unk_0x3E0478C40AB5B38D(Local_408.f_3))
					{
						func_94(&(Local_408.f_244), Local_408.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					func_269(&Local_408, 29);
				}
				break;
			
			case 29:
				if (func_69(&Local_408, &uLocal_946))
				{
					if (!func_200())
					{
						func_9(1, &Local_408, 1);
						func_269(&Local_408, 30);
					}
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
		func_48(uParam1);
		if (!unk_0x3E0478C40AB5B38D(uParam1->f_3))
		{
			unk_0x9001FCB58244C11D(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_46(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)
{
	func_384(uParam0);
	if (func_200())
	{
		func_44();
	}
	func_42();
	unk_0xDA31FF1629FE9693();
	unk_0x35611EEE7A1FFEDB(1);
	func_39(0);
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		unk_0xA27F610688163CA9(uParam0->f_4, 0);
		unk_0x62DAED390EC70145(uParam0->f_4);
		unk_0x147A431959878235(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_34(uParam0->f_14, 1, 1114636288);
	func_33(&(uParam0->f_244), 3);
	unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 1);
	if (func_30())
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
	}
	unk_0x0B1544BD89031D70(1);
	func_21(0, 1, 1, 0);
	unk_0xB3B57AEE7B7BA0E2(1);
	unk_0xC48BE7195D873776(1);
	if (unk_0x5329DB72517417AE(*uParam0))
	{
		unk_0x0CF4B2266E47C15F(*uParam0, 0);
		unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
		unk_0x3229F8D82C561641(1);
	}
	if (func_197(Global_97358.f_17351, 4))
	{
		func_19(&(Global_97358.f_17351), 4);
		unk_0x60DAE84D0B296FD2(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0xE29F0AC6C728DD9C("gestures@m@standing@casual");
	unk_0xE29F0AC6C728DD9C("oddjobs@taxi@");
	unk_0xE29F0AC6C728DD9C("oddjobs@towingcome_here");
	if (unk_0x6518D9FF7C996D2B())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x1C7932D7B27409A6(unk_0x2563F6EECD8726D3()))
	{
		unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 1, 0);
	}
	unk_0x29CC051C2B7F7BBB(unk_0xF2DB717A73826179((func_11(&uLocal_89) * 1000f)), 12, 0);
}

float func_11(var uParam0)
{
	if (func_137(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_12(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x471A7F8C908126F0(&uVar0))
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
	unk_0x8165EB232285AE98(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_3))
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
		{
			if (!unk_0x827151D7B70CB853(uParam0->f_3, 0))
			{
				unk_0xE744DD731E562846(uParam0->f_3);
			}
			unk_0x4A1AC49BA4A747F7(uParam0->f_3, 0);
			unk_0xF2061C15946C53A2(255, uParam0->f_413, joaat("player"));
			if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x84E8946A115CBD2C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x84E8946A115CBD2C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x84E8946A115CBD2C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x84E8946A115CBD2C(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x995B3705D02B0401(&(uParam0->f_3));
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

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_29(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_28())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_27(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_29(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_27(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_22(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_22(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_23())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_23()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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

int func_26()
{
	return Global_1312737;
}

int func_27(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_28()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

int func_30()
{
	if (!func_32() && !func_31())
	{
		if (!unk_0x1507DA9B20D3151C(unk_0x2563F6EECD8726D3()))
		{
			return 1;
		}
	}
	return 0;
}

int func_31()
{
	if (unk_0x7B47A371E2D93C2C(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_34(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_35(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_35(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xE60172AD5C95C90B(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xA2CF1D8BA5F3BD69(Var0, Var3, 1);
		unk_0x69A5FB1BDF9C17C4();
	}
}

Vector3 func_35(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_36(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_37(Param0, func_38()))
	{
		Var0 = { func_35(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_35(Param0, 1f, 30f, 30f, 10f) };
		unk_0xCF023D488D3EAE4D(Var0, Var3, iParam3, 1);
	}
}

bool func_37(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_38()
{
	struct<3> Var0;
	
	return Var0;
}

void func_39(int iParam0)
{
	if (Global_14551)
	{
		func_40(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_28())
	{
		Global_14393.f_1 = 3;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_41(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_42()
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
					func_43(Global_87300[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_43(int iParam0, bool bParam1)
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

void func_44()
{
	Global_14558 = 0;
	func_45();
}

void func_45()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_97358.f_17351.f_22[0]++;
			func_47("Fares Completed ++ = ", Global_97358.f_17351.f_22[0]);
			break;
		
		case 1:
			Global_97358.f_17351.f_22[1]++;
			func_47("Fares Failed ++ = ", Global_97358.f_17351.f_22[1]);
			break;
		
		case 2:
			Global_97358.f_17351.f_22[2]++;
			func_47("Fares Accepted ++ ", Global_97358.f_17351.f_22[2]);
			break;
		
		case 3:
			Global_97358.f_17351.f_22[3]++;
			func_47("Fares Expired ++ ", Global_97358.f_17351.f_22[3]);
			break;
		
		case 13:
			Global_97358.f_17351.f_22[13]++;
			func_47("Passengers run ++ = ", Global_97358.f_17351.f_22[13]);
			break;
		
		case 14:
			Global_97358.f_17351.f_22[14]++;
			func_47("Passenger Forced to Pay ++ = ", Global_97358.f_17351.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_97358.f_17351.f_22[4])
				{
					Global_97358.f_17351.f_22[4] = iParam1;
					func_47("This distance ", iParam1);
					func_47(" is longer than current best", Global_97358.f_17351.f_22[4]);
				}
				else
				{
					func_47("Longest Distance Not Beat ", Global_97358.f_17351.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_97358.f_17351.f_22[5] = (Global_97358.f_17351.f_22[5] + iParam1);
			func_47("Total Distance w/ Passenger = ", Global_97358.f_17351.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_97358.f_17351.f_22[6]++;
			}
			else
			{
				Global_97358.f_17351.f_22[6] = (Global_97358.f_17351.f_22[6] + iParam1);
			}
			func_47("Wanted Levels ++ = ", Global_97358.f_17351.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_97358.f_17351.f_22[7] = (Global_97358.f_17351.f_22[7] + iParam1);
			}
			else
			{
				Global_97358.f_17351.f_22[7]++;
			}
			func_47("Wanted Levels Lost = ", Global_97358.f_17351.f_22[7]);
			break;
		
		case 8:
			Global_97358.f_17351.f_22[8]++;
			func_47("Taxis wrecked ++ = ", Global_97358.f_17351.f_22[8]);
			break;
		
		case 9:
			Global_97358.f_17351.f_22[9]++;
			func_47("Horn Honked ++ = ", Global_97358.f_17351.f_22[9]);
			break;
		
		case 10:
			Global_97358.f_17351.f_22[10] = (Global_97358.f_17351.f_22[10] + iParam1);
			func_47("Total Money Earned = ", Global_97358.f_17351.f_22[10]);
			break;
		
		case 11:
			Global_97358.f_17351.f_22[11] = (Global_97358.f_17351.f_22[11] + iParam1);
			func_47("Total Tips Earned = ", Global_97358.f_17351.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_97358.f_17351.f_22[12])
			{
				Global_97358.f_17351.f_22[12] = iParam1;
				func_47("New Highest Tip = ", Global_97358.f_17351.f_22[12]);
			}
			else
			{
				func_47("Highest Tip Not Reached = ", Global_97358.f_17351.f_22[12]);
			}
			break;
	}
}

void func_47(char* sParam0, int iParam1)
{
}

void func_48(var uParam0)
{
	func_46(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_400(1);
		func_58(15, 1);
	}
	func_198(&(Global_97358.f_17351), 1024);
	if (!func_197(Global_97358.f_17351, 64))
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
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_54(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_53() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
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

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_53()
{
	return Global_24444;
}

int func_54(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

int func_59(int iParam0, int iParam1)
{
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_68(&Global_2545750))
	{
		if (func_66(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
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
	var uVar1[61];
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_65(uParam0, iVar0);
		iVar0++;
	}
	func_64(&(uParam0->f_62), (8f - 0.5f));
}

void func_64(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_65(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
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
	return uParam0->f_68 == 1;
}

int func_69(var uParam0, var uParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_200() && func_380(uParam0, 0) > 1f)
			{
				if (func_30())
				{
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
				}
				func_93(uParam0);
				func_19(&(Global_97358.f_17351), 4096);
				func_91(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_92(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x86F4B3D6FF8F65DE(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_90(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_87(uParam1, 0))
			{
				func_70(uParam0);
				func_274(uParam0, 0, 0, 0);
				func_90(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_71(func_84(), 21, iVar0, 0, 0);
		func_46(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_72(Global_97358.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x39496A55977AA312(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xC46BDC34976E9532(iVar1, iVar0, 1);
	}
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_83();
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
					func_82(99, 1);
					func_81(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_81(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_81(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_80(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_79(5))
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
							func_81(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_81(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_81(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_79(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_81(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_81(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_81(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_81(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_81(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_81(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_81(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_81(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_81(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63D5B7FC98AAD9B7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_81(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_81(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_81(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_81(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_81(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_81(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_79(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_81(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_81(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_81(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_81(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_81(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_81(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_78(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_82(95, iParam3);
					break;
				
				case 1:
					func_82(97, iParam3);
					break;
				
				case 2:
					func_82(96, iParam3);
					break;
			}
			func_82(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_75(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_75(iVar1);
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
					func_81(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_81(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_81(joaat("sp2_total_cash_earned"), iParam3);
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_74(iParam0);
	if (Global_34913 == 15)
	{
		func_73(0);
	}
	return 1;
}

void func_73(bool bParam0)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_75(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_77() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_77() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_76(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_76(int iParam0)
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

int func_77()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_78(int iParam0)
{
	func_82(93, iParam0);
	func_82(29, iParam0);
	func_82(30, iParam0);
}

bool func_79(int iParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_77() /*8064*/].f_5756.f_10, iParam0);
}

int func_80(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_58(27, 1);
	return 1;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

void func_82(int iParam0, int iParam1)
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_83()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_84()
{
	func_85();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_85()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_4(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_3(unk_0x9F92518438215DD0());
			if (func_5(iVar0) && (!func_86(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_5(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_86(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_87(var uParam0, int iParam1)
{
	if (!func_137(&(uParam0->f_2)))
	{
		func_136(&(uParam0->f_2));
	}
	unk_0xAB10BEEBB0614A3E(14);
	unk_0x10243718C63A4D3E(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x205C5BF7277043DF(2, 201) || uParam0->f_8)
		{
			if (!func_137(&(uParam0->f_5)))
			{
				func_136(&(uParam0->f_5));
				func_89(uParam0, 1051260355);
			}
		}
		if (func_137(&(uParam0->f_5)))
		{
			if (func_135(&(uParam0->f_5)) > 0.33f)
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
	if (func_135(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_137(&(uParam0->f_5)))
		{
			func_136(&(uParam0->f_5));
			func_89(uParam0, 1051260355);
		}
		else if (func_135(&(uParam0->f_5)) > 0.33f)
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

void func_89(var uParam0, int iParam1)
{
	unk_0x48F299599202B77A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4BD4D58838D3F8E5(uParam0->f_9);
	unk_0xC4F81CF078CCB564(iParam1);
	unk_0x7E86CE5F658823DB();
}

void func_90(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_91(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x48F299599202B77A(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x0F79C8080022554A("STRING");
	unk_0xE34B517A17B2CB8D(iParam9);
	unk_0xDB4BC767CEF09274(sParam1);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x0F79C8080022554A(sParam7);
	unk_0x25585F3578FE81FC(uParam2);
	unk_0x25585F3578FE81FC(uParam3);
	unk_0xDB4BC767CEF09274(uParam6);
	unk_0x25585F3578FE81FC(uParam5);
	unk_0x25585F3578FE81FC(iParam4);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x7E86CE5F658823DB();
	func_136(&(uParam0->f_2));
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
	func_46(11, uParam0->f_56);
	func_46(12, uParam0->f_56);
	iLocal_56[1] = uParam0->f_56;
	iLocal_56[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x94E72F17611BCD3C(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

int func_94(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_103(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_95(sParam2, iParam3, 0);
}

int func_95(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC318E8D9E0AA1394(0);
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
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_101(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_100();
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_99();
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_98())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_28())
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_97();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_96();
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
		func_102();
	}
	return 0;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_97()
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_99()
{
	if (func_86(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		Global_14393 = func_84();
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

void func_100()
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

bool func_101(int iParam0, int iParam1)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_102()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_103(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_104(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (!unk_0x0BA451447C3B1A8D(*uParam2))
			{
				func_133(uParam1, 320, bParam4);
				unk_0x2CFB119825A2B9F1(*uParam2, unk_0x073B65E051D2F03E(100, 300));
				func_131(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_46(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x0BA451447C3B1A8D(*uParam2))
			{
				if (!unk_0x827151D7B70CB853(*uParam2, 0))
				{
					unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 1, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0BA451447C3B1A8D(*uParam2))
			{
				func_110(&uLocal_44, *uParam2, 0, 0, 1, 1, 1);
				if (!func_138(uParam1->f_2, *uParam2))
				{
					if (unk_0xFC38B241541883D3(uParam1->f_4, 0))
					{
						if (unk_0xE99AF5B1B3F0BB7C(*uParam2, uParam1->f_4, 1))
						{
							*iParam0 = 3;
						}
					}
					if (unk_0xE99AF5B1B3F0BB7C(*uParam2, uParam1->f_2, 1))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!unk_0x827151D7B70CB853(uParam1->f_2, 0))
						{
							if (unk_0x5093D6F9140AD109(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x4A4902C6AC8DCB7E(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (unk_0x5093D6F9140AD109(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*iParam0 = 3;
									}
									if (unk_0x860AFAABAECF6379(uParam1->f_2, 6))
									{
										if (unk_0x5CC26ADF98AA54C9())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x5093D6F9140AD109(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x4A4902C6AC8DCB7E(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (unk_0x5093D6F9140AD109(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x4A4902C6AC8DCB7E(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_108(&uLocal_44, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				func_108(&uLocal_44, 0, 0);
				*iParam0 = 5;
			}
			break;
		
		case 3:
			func_108(&uLocal_44, 0, 0);
			if (!unk_0x0BA451447C3B1A8D(*uParam2))
			{
				if (unk_0x2E6E8D325977B3EC(uParam1->f_8))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam1->f_8));
				}
				unk_0x4A1AC49BA4A747F7(*uParam2, 1);
				unk_0xF87DA7F5BA8C7D0F(&uVar0);
				unk_0x7D1DC1A952433DD6(0, 5000);
				unk_0x722E6B3A5162A6BB(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x8737AAF3C52B871F(0, 0);
				unk_0x3179CCC77CBAB31F(uVar0);
				unk_0xC7EBE3C9AC83FAAA(*uParam2, uVar0);
				unk_0xCD02E3C29B8253A6(&uVar0);
				unk_0xE8105B7E3908547D(*uParam2, 1);
				func_206(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				unk_0xDA31FF1629FE9693();
			}
			else
			{
				*iParam0 = 4;
				unk_0xDA31FF1629FE9693();
			}
			if (unk_0x2E6E8D325977B3EC(uParam1->f_8))
			{
				unk_0x0451B5D93A4BDAA0(&(uParam1->f_8));
			}
			func_105(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0xB16891D2706A2EF7(uParam3->f_6))
			{
				if (unk_0x2E6E8D325977B3EC(uParam3->f_5))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam3->f_5));
				}
				func_154(uParam1);
				func_46(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x0BA451447C3B1A8D(*uParam2))
			{
				unk_0x995B3705D02B0401(uParam2);
				if (unk_0x2E6E8D325977B3EC(uParam1->f_8))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xCDF07288D526B918(unk_0x2563F6EECD8726D3(), 2, 0);
				unk_0x4BAAF4A818239FFF(unk_0x2563F6EECD8726D3(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_105(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		uParam1->f_2 = { unk_0x77009B1C011405A9(iParam0, 1) };
		unk_0x2CFB119825A2B9F1(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x073B65E051D2F03E(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x4FF2C3593F99FE86(iParam0, 1067030938, 1069547520) };
	}
	unk_0xEDB9A377CD8B7F03(&(uParam1->f_1), 3);
	unk_0xEDB9A377CD8B7F03(&(uParam1->f_1), 4);
	Var0 = { unk_0xFE6CFB1749CED843(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0xF8670CA33A75995A(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0x2E6E8D325977B3EC(uParam1->f_5))
		{
			uParam1->f_5 = func_106(uParam1->f_6);
			unk_0x2A8C2BEEA4F7041F(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x2A8C2BEEA4F7041F(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_106(var uParam0)
{
	var uVar0;
	
	if (!unk_0x303D473D180EAA17(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x56F3A0BEE1BE9871(uParam0);
	unk_0xD4916ED85412C8D9(uVar0, func_107(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	return uVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_108(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_109(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_109(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_109(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_111(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_112(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_112(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_108(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_113(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_113(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_109(iVar0))
	{
		func_130();
	}
	if (func_129(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
		{
			if (func_124(uParam0, bParam7, bParam9, 0))
			{
				func_121(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_118(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_109(iVar0))
							{
								func_117(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_116(1);
								}
							}
						}
					}
				}
			}
			else if (func_118(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_109(iVar0))
						{
							func_117(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_116(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_109(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_108(uParam0, iVar0, 1);
				}
			}
			if (!func_124(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_115(uParam0))
				{
					func_114(uParam0);
				}
			}
		}
	}
	else
	{
		func_108(uParam0, iVar0, 0);
	}
}

void func_114(var uParam0)
{
	if (func_129(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_115(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_116(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_117(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_118(char* sParam0)
{
	if (!func_119(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_109(sParam0)) || func_109("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_116(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_116(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_116(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	if (func_41(0))
	{
		return 0;
	}
	if (func_120())
	{
		return 0;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_120()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

void func_121(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_108(uParam0, 0, 0);
	}
	if (func_37(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			iVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(iVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_122())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_122()
{
	return func_123(unk_0xCFC72E446B0B3AD7());
}

int func_123(int iParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_127(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_127(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_115(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_128(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_127(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_127(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_115(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_119(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_130();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_130()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

void func_131(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_384(uParam0);
	}
	if (!unk_0x2E6E8D325977B3EC(uParam0->f_8))
	{
		uParam0->f_8 = func_132(*uParam1, 0, 0);
	}
	if (!unk_0x471A7F8C908126F0(sParam2))
	{
		unk_0x2A8C2BEEA4F7041F(uParam0->f_8, sParam2);
	}
}

int func_132(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_107(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_107(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_107(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_133(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		unk_0x4A1AC49BA4A747F7(uParam0->f_3, 0);
		unk_0x87659527DF5C44B5(uParam0->f_3);
		unk_0xA334EDA2335A13CA(uParam0->f_3, 3, 0);
		unk_0x64277E0EB39C1162(uParam0->f_3, 17, 1);
		unk_0x32D18ECD9E6F9BE2(uParam0->f_3);
		if ((func_304(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_134(uParam0->f_29)) && !bParam2)
		{
			func_139(uParam0);
		}
		else
		{
			unk_0xA334EDA2335A13CA(uParam0->f_3, 1024, 1);
			unk_0xA334EDA2335A13CA(uParam0->f_3, 131072, 1);
			unk_0xF87DA7F5BA8C7D0F(&uVar0);
			unk_0xF811299AF81DB581(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x6A678E26A585E3C6(0, 1193033728, 0);
			}
			else
			{
				unk_0x722E6B3A5162A6BB(0, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
			}
			unk_0x8737AAF3C52B871F(0, 0);
			unk_0x3179CCC77CBAB31F(uVar0);
			unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uVar0);
			unk_0xCD02E3C29B8253A6(&uVar0);
		}
		unk_0xE8105B7E3908547D(uParam0->f_3, 1);
	}
}

int func_134(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_135(var uParam0)
{
	if (func_137(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_136(var uParam0)
{
	func_64(uParam0, 0f);
}

bool func_137(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

int func_138(var uParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam1))
	{
		if (!unk_0x5093D6F9140AD109(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0xE298336AB6E66F7E(unk_0x77009B1C011405A9(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		if (func_37(func_38(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x03D97EDECF2E1859(uParam0->f_3, 84.9058f);
				unk_0xE8105B7E3908547D(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x03D97EDECF2E1859(uParam0->f_3, 68.3138f);
				unk_0xE8105B7E3908547D(uParam0->f_3, 1);
			}
			else
			{
				unk_0x6A678E26A585E3C6(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x32D18ECD9E6F9BE2(uParam0->f_3);
			unk_0xCD02E3C29B8253A6(&uVar0);
			unk_0xF87DA7F5BA8C7D0F(&uVar0);
			unk_0xF811299AF81DB581(0, 0, 0);
			unk_0x8737AAF3C52B871F(0, 0);
			unk_0x27DF0A5AA993D7B6(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x18CA21B07F636243(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x6D36800106E57C3B(0, 1);
				unk_0x27DF0A5AA993D7B6(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x70A8B8D6374F080F(0, 151.7794f, 0);
				unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x3C1E519253371C13(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x3C1E519253371C13(0, uParam0->f_29, 15f, 20000);
				unk_0x6A678E26A585E3C6(0, 1193033728, 0);
			}
			else
			{
				unk_0x7CF15DD8B3815A0D(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x5F28AFA19D196676(uParam0->f_29, 15f, 1))
			{
				unk_0x3C1E519253371C13(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x6A678E26A585E3C6(0, 1193033728, 0);
			}
			unk_0x3179CCC77CBAB31F(uVar0);
			unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uVar0);
			unk_0xCD02E3C29B8253A6(&uVar0);
		}
		unk_0xE8105B7E3908547D(uParam0->f_3, 1);
	}
}

int func_140(var uParam0, bool bParam1)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		if (func_148(uParam0) && func_145(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_144(uParam0, 2097152))
				{
					func_141(uParam0);
				}
			}
			else
			{
				func_141(uParam0);
			}
		}
		else if (!func_148(uParam0))
		{
			if (bParam1)
			{
				if (func_144(uParam0, 2097152))
				{
					if (unk_0xE962BD784DD0E442(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xE962BD784DD0E442(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_141(var uParam0)
{
	struct<3> Var0;
	
	if (func_134(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_142(uParam0, Var0);
}

void func_142(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0->f_3) && unk_0x2A2DBEFFFC03A22F(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_143(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xDC6D5C817B48C45A(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x91EAD4F2F9B5B38A(Var0, Param1, 0) < unk_0x91EAD4F2F9B5B38A(Var3, Param1, 0) && unk_0x8C612717241D72F3(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xDC6D5C817B48C45A(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x91EAD4F2F9B5B38A(Var0, Param1, 0) >= unk_0x91EAD4F2F9B5B38A(Var3, Param1, 0) && unk_0x8C612717241D72F3(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xDC6D5C817B48C45A(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xDC6D5C817B48C45A(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_143(int iParam0, int iParam1)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_144(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_197(uParam0->f_81, iParam1) && !func_200());
	}
	return func_200();
}

int func_145(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0x44E080690DA76A2A(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_41(1))
			{
				func_39(0);
			}
			if (func_30())
			{
				func_147();
				return 1;
			}
			else if (func_146(uParam0->f_4, iParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 0, 256);
				}
				else
				{
					unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 0, 0);
				}
			}
			unk_0x98DB74D00AA641A7(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_146(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_147()
{
	if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0x5693ADD6BB9E1E5D(unk_0xCFC72E446B0B3AD7());
	}
}

int func_148(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
		{
			if (unk_0x44E080690DA76A2A(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_149(var uParam0)
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
	if (!func_197(uParam0->f_55, 1))
	{
		func_198(&(uParam0->f_55), 1);
	}
}

void func_150(var uParam0)
{
	func_152();
	unk_0xDA31FF1629FE9693();
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
		func_151(1);
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

void func_151(int iParam0)
{
	Global_96071.f_221 = iParam0;
}

void func_152()
{
	Global_14558 = 0;
	func_153();
}

void func_153()
{
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xAD3949CD5FADCA61();
		Global_16703 = 0;
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_154(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_155(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_46(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_46(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_155(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_157(var uParam0, int iParam1, bool bParam2)
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

void func_158()
{
	Global_14558 = 0;
	func_102();
}

int func_159(var uParam0, int iParam1, float fParam2)
{
	if ((((unk_0x9685D9855970A029() && !unk_0xA0CD269F4B0B4468()) && !unk_0x351E8373AE3D741D()) && !unk_0x2E9CF5C574019636()) && !uParam0->f_142)
	{
		if (func_180(uParam0))
		{
			func_179(uParam0, &(uParam0->f_43));
			func_177(uParam0);
			func_172(uParam0);
			func_166(uParam0, fParam2, 1117782016);
			func_165(uParam0);
			func_163(uParam0);
			if ((unk_0xF2DB717A73826179(func_380(uParam0, 7)) % 5) == 0 && !iLocal_92)
			{
				iLocal_92 = 1;
			}
			if ((unk_0xF2DB717A73826179(func_380(uParam0, 7)) % 5) == 2 && iLocal_92)
			{
				iLocal_92 = 0;
			}
			return func_160(uParam0, iParam1);
		}
	}
	return 0;
}

int func_160(var uParam0, int iParam1)
{
	if (func_57(uParam0) == 2)
	{
		if (unk_0x41EEB10CCC2497A8(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_162(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) < 1) && func_161(1, 1, 1)) && unk_0xF37F1CECABC7FC33(uParam0->f_4))
		{
			return func_145(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x41EEB10CCC2497A8(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) < 1) && func_161(1, 1, 1)) && unk_0xF37F1CECABC7FC33(uParam0->f_4))
	{
		return func_145(uParam0, 1, iParam1);
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

float func_162(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

void func_163(var uParam0)
{
	float fVar0;
	
	if ((func_148(uParam0) && func_197(uParam0->f_81, 67108864)) && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
	{
		if ((unk_0x17103F66FBB44C3C() - iLocal_96) >= 10000)
		{
			fVar0 = func_164(uParam0->f_17, 1);
			if (fVar0 > fLocal_94)
			{
				iLocal_95++;
			}
			else
			{
				iLocal_95 = 0;
			}
			fLocal_94 = fVar0;
			iLocal_96 = unk_0x17103F66FBB44C3C();
		}
		if (iLocal_95 >= 2 && !func_200())
		{
			func_206(uParam0, 136, 1, 0, 1);
			iLocal_95 = 0;
		}
		if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x17103F66FBB44C3C() % 4000) < 50)
		{
			if (!func_148(uParam0))
			{
			}
			if (!func_197(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
		{
			if (iLocal_95 > 0)
			{
				iLocal_95 = 0;
			}
		}
	}
}

float func_164(struct<3> Param0, int iParam3)
{
	return func_304(unk_0x4E6043D225B9C75F(unk_0x2563F6EECD8726D3()), Param0, iParam3);
}

void func_165(var uParam0)
{
	if (unk_0xF6AD1DC69145DC4B(unk_0x2563F6EECD8726D3()) && !func_197(uParam0->f_44, 2))
	{
		func_198(&(uParam0->f_44), 2);
	}
	else if (!unk_0xF6AD1DC69145DC4B(unk_0x2563F6EECD8726D3()) && func_197(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_46(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_206(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_166(var uParam0, float fParam1, float fParam2)
{
	if (func_148(uParam0) && func_197(uParam0->f_44, 4))
	{
		if ((unk_0x0A93DB64A1052EB6(uParam0->f_4) || unk_0x9EF11DECA38804B6(uParam0->f_4) < 3f) && func_171(uParam0))
		{
			if (!func_170(uParam0, 2))
			{
				func_168(uParam0, 2);
			}
			else if (func_148(uParam0))
			{
				if (func_380(uParam0, 2) > fParam1 && !func_170(uParam0, 14))
				{
					if (func_32())
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					func_274(uParam0, 2, 0, 0);
					if (func_170(uParam0, 10))
					{
						func_274(uParam0, 10, 0, 0);
					}
				}
				if (!func_170(uParam0, 3))
				{
					func_274(uParam0, 3, 0, 0);
				}
				else if (func_380(uParam0, 3) >= fParam2)
				{
					func_167(uParam0, 3, 0);
					func_305(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_170(uParam0, 2))
			{
				func_167(uParam0, 2, 0);
			}
			if (func_170(uParam0, 3))
			{
				func_167(uParam0, 3, 0);
			}
		}
	}
}

void func_167(var uParam0, int iParam1, bool bParam2)
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

void func_168(var uParam0, int iParam1)
{
	func_169(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_169(var uParam0)
{
	if (!func_137(uParam0))
	{
		func_136(uParam0);
	}
}

bool func_170(var uParam0, int iParam1)
{
	return func_137(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_171(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0xB5BBEB12C77EE430(uParam0->f_4, -1) == unk_0x9F92518438215DD0())
		{
			return 1;
		}
	}
	return 0;
}

void func_172(var uParam0)
{
	if (!func_197(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) >= 1)
				{
					if (func_380(uParam0, 9) > 1f)
					{
						func_176(uParam0, unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()));
						if (uParam0->f_410 != 22)
						{
							func_206(uParam0, 50, 1, 1, 0);
						}
						func_274(uParam0, 9, 0, 0);
						if (unk_0x2E6E8D325977B3EC(uParam0->f_9))
						{
							unk_0xFBF7E9E330FE936E(uParam0->f_9, 0);
							unk_0xD8EEE815F0120FCE(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_200() && func_380(uParam0, 9) > 4f)
				{
					func_206(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_175("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x99A27D5F9B887E5F(unk_0x2563F6EECD8726D3(), func_174(uParam0)))
				{
					func_176(uParam0, unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()));
					func_46(6, 0);
				}
				if (!func_173(uParam0))
				{
					if (!unk_0xDFF00E8709AA7095())
					{
						if (func_380(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_206(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) < 1)
				{
					if (func_175("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xDA31FF1629FE9693();
					}
					if (unk_0x2E6E8D325977B3EC(uParam0->f_9))
					{
						unk_0xFBF7E9E330FE936E(uParam0->f_9, 255);
						unk_0xD8EEE815F0120FCE(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_200())
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 53, 1, 0, 1);
					}
					func_46(7, func_174(uParam0));
					func_176(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_200())
				{
					func_167(uParam0, 9, 0);
					func_274(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_173(var uParam0)
{
	return uParam0->f_110;
}

int func_174(var uParam0)
{
	return uParam0->f_106;
}

bool func_175(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1A95252BC324DC59(sParam0);
	if (iParam1 == 1)
	{
		unk_0xDB4BC767CEF09274(iParam2);
	}
	return unk_0x776411DBC9EB2206();
}

void func_176(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_177(var uParam0)
{
	if (func_196(uParam0))
	{
		func_178(uParam0);
	}
}

void func_178(var uParam0)
{
	if (unk_0x56F91A6FEB991B57() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x147076C287537800();
			func_167(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_380(uParam0, 20) > 3f)
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
					if (func_380(uParam0, 20) > 5f)
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
					if (func_380(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_206(uParam0, 85, 1, 0, 0);
						func_167(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_380(uParam0, 20) > 8f)
				{
					func_206(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_197(uParam0->f_81, 262144) || func_197(uParam0->f_82, 67108864))
			{
				if (!func_170(uParam0, 22))
				{
					func_168(uParam0, 22);
				}
			}
			if (func_170(uParam0, 22) && func_380(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_197(uParam0->f_81, 1048576))
					{
						func_206(uParam0, 84, 1, 0, 0);
						func_167(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_197(uParam0->f_82, 134217728))
					{
						func_206(uParam0, 85, 1, 0, 0);
						func_167(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_179(var uParam0, var uParam1)
{
	unk_0x5F45885CE09369B2(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_180(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
		{
			if (!unk_0x44E080690DA76A2A(uParam0->f_3, uParam0->f_4, 1) && !unk_0x11CF47CA7B00BE4F(uParam0->f_3))
			{
				func_305(uParam0, "Passenger left car.", 9);
			}
			else if (func_192(uParam0))
			{
				if (func_175("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xE9EEE16322458D65("TAXI_OBJ_PICKUP");
				}
				if (unk_0x9685D9855970A029())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
				{
				}
				func_181(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_181(var uParam0, bool bParam1)
{
	func_191(uParam0, uParam0->f_3);
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x44E080690DA76A2A(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_170(uParam0, 14))
			{
				if (func_200())
				{
					func_190(1);
				}
				func_189(uParam0, 11, 1);
				func_184(uParam0, 1);
				func_274(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_148(uParam0))
				{
					if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
					{
					}
					if (unk_0x827151D7B70CB853(uParam0->f_2, 0))
					{
						if (func_380(uParam0, 15) > 5f)
						{
							func_274(uParam0, 15, 0f, 1);
						}
					}
					if (func_380(uParam0, 14) > 20f)
					{
						func_305(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_380(uParam0, 14) > 20f)
				{
					if (func_182(uParam0->f_4, 1) > 40f)
					{
						func_305(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_305(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_182(int iParam0, int iParam1)
{
	return func_183(unk_0x4E6043D225B9C75F(unk_0x2563F6EECD8726D3()), iParam0, iParam1);
}

float func_183(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

void func_184(var uParam0, bool bParam1)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
			{
				unk_0xFBF7E9E330FE936E(uParam0->f_8, 0);
				unk_0xD8EEE815F0120FCE(uParam0->f_8, 0);
				func_188(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x2E6E8D325977B3EC(uParam0->f_9))
			{
				unk_0xFBF7E9E330FE936E(uParam0->f_9, 0);
				unk_0xD8EEE815F0120FCE(uParam0->f_9, 0);
				unk_0xDA31FF1629FE9693();
				if (func_148(uParam0))
				{
					func_206(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_188(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_185(uParam0, 0, 0);
		}
		else if (unk_0x2E6E8D325977B3EC(uParam0->f_10))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_10));
			if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
			{
				unk_0xFBF7E9E330FE936E(uParam0->f_8, 255);
				unk_0xD8EEE815F0120FCE(uParam0->f_8, 1);
			}
			else if (unk_0x2E6E8D325977B3EC(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xFBF7E9E330FE936E(uParam0->f_9, 0);
					unk_0xD8EEE815F0120FCE(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xFBF7E9E330FE936E(uParam0->f_9, 255);
					unk_0xD8EEE815F0120FCE(uParam0->f_9, 1);
				}
			}
			unk_0xDA31FF1629FE9693();
		}
	}
}

void func_185(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_384(uParam0);
	}
	if (!unk_0x2E6E8D325977B3EC(uParam0->f_10))
	{
		uParam0->f_10 = func_132(uParam0->f_4, 1, 0);
		unk_0x2A8C2BEEA4F7041F(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xD8EEE815F0120FCE(uParam0->f_10, 1);
		func_186(uParam0);
		if (bParam2)
		{
			unk_0xDA31FF1629FE9693();
			func_206(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_186(var uParam0)
{
	func_274(uParam0, 14, 0, 0);
	func_187();
}

void func_187()
{
	int iVar0;
	
	iVar0 = unk_0x228A016F863DED95();
	if (unk_0xFC38B241541883D3(iVar0, 0))
	{
		unk_0x98EA7CB0A268270F(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_188(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_197(*uParam1, iParam2))
	{
		unk_0xDA31FF1629FE9693();
		func_206(uParam0, iParam3, 1, 0, 0);
		func_198(uParam1, iParam2);
	}
}

void func_189(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_190(int iParam0)
{
	Global_16703 = iParam0;
}

void func_191(var uParam0, int iParam1)
{
	if (unk_0x746960881FB19A89(iParam1))
	{
		if (!unk_0x3E0478C40AB5B38D(iParam1))
		{
			if (unk_0x8B4143BB86791BA9(unk_0xCFC72E446B0B3AD7()))
			{
				if ((unk_0xAFCAE556D7628D59(iParam1, joaat("weapon_stungun"), 0) || unk_0xAFCAE556D7628D59(iParam1, 0, 2)) || unk_0xAFCAE556D7628D59(iParam1, 0, 1))
				{
					func_305(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x021C6DA836634360(unk_0xCFC72E446B0B3AD7());
			}
		}
	}
}

int func_192(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0xB5BBEB12C77EE430(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_170(uParam0, 14))
			{
				func_193(uParam0);
			}
			func_184(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_193(var uParam0)
{
	func_167(uParam0, 14, 0);
	func_167(uParam0, 15, 0);
	func_195();
	if (func_194())
	{
		func_190(0);
	}
}

int func_194()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	var uVar0;
	
	uVar0 = unk_0x228A016F863DED95();
	if (unk_0xFC38B241541883D3(uVar0, 0))
	{
		unk_0x98EA7CB0A268270F(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_196(var uParam0)
{
	return uParam0->f_120;
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0, int iParam1)
{
	func_199(uParam0, iParam1);
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_200()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0)
{
	return uParam0->f_416;
}

void func_202()
{
	func_198(&(Local_408.f_55), 2);
	func_198(&(Local_408.f_55), 8);
	func_198(&(Local_408.f_55), 32);
	func_198(&(Local_408.f_55), 128);
	func_198(&(Local_408.f_55), 256);
	func_198(&(Local_408.f_55), 512);
	func_198(&(Local_408.f_55), 1024);
	func_198(&(Local_408.f_55), 2048);
	func_198(&(Local_408.f_55), 1073741824);
	func_198(&(Local_408.f_55), 8192);
	func_198(&(Local_408.f_55), 16384);
	func_198(&(Local_408.f_55), 32768);
	func_198(&(Local_408.f_55), 131072);
	func_198(&(Local_408.f_55), 262144);
	func_198(&(Local_408.f_55), 524288);
	func_198(&(Local_408.f_55), 1048576);
	func_198(&(Local_408.f_55), 4194304);
	func_198(&(Local_408.f_100), 64);
	func_198(&(Local_408.f_100), 2048);
	func_198(&(Local_408.f_100), 128);
	func_198(&(Local_408.f_100), 32);
	func_198(&(Local_408.f_100), 256);
	func_198(&(Local_408.f_100), 8);
	func_198(&(Local_408.f_100), 1);
	func_198(&(Local_408.f_100), 8192);
	func_198(&(Local_408.f_100), 2);
	func_198(&(Local_408.f_100), 32768);
	func_198(&uLocal_936, 2);
	func_168(&Local_408, 7);
}

void func_203(var uParam0)
{
	func_204(uParam0, 1000);
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x71628E52718BD195(uParam0->f_3);
		unk_0x23F243BF5B07DA90(uParam0->f_3, unk_0x9F92518438215DD0(), 0);
	}
	func_158();
	func_193(uParam0);
}

void func_204(var uParam0, int iParam1)
{
	if (unk_0x5329DB72517417AE(*uParam0))
	{
		unk_0x0CF4B2266E47C15F(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x42DDE752BB6A4CBA(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
	}
}

void func_205(var uParam0)
{
	unk_0x021C6DA836634360(unk_0xCFC72E446B0B3AD7());
	unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 1, 0);
	func_204(uParam0, 1000);
}

void func_206(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_274(uParam0, 16, 4f, 0);
		if (func_207(uParam0))
		{
			func_44();
		}
	}
	func_239(uParam0, iParam2, bParam3);
}

int func_207(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_200())
	{
		Var6 = { func_209() };
		if (!unk_0x9E9AFDBF482248F6(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x6B08EC9A88700FBB(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_208(&Var0);
			if (unk_0x6B08EC9A88700FBB(&Var6, &Var0))
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

struct<6> func_209()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_210(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
		{
			if ((unk_0x11CF47CA7B00BE4F(uParam0->f_3) && (unk_0x17103F66FBB44C3C() - iLocal_88) > 500) || unk_0x44E080690DA76A2A(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x44E080690DA76A2A(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
			{
			}
			func_181(uParam0, 1);
			if (func_30())
			{
				unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 1, 0);
			}
			if (unk_0xE962BD784DD0E442(uParam0->f_3, 2106541073) == 1 || unk_0xE962BD784DD0E442(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x71628E52718BD195(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_86 = 0;
				unk_0x23F243BF5B07DA90(uParam0->f_3, unk_0x9F92518438215DD0(), 0);
			}
		}
		else if (unk_0x99A27D5F9B887E5F(unk_0x2563F6EECD8726D3(), 0))
		{
			func_237(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xCD02E3C29B8253A6(&uVar3);
				unk_0xF87DA7F5BA8C7D0F(&uVar3);
				unk_0x27DF0A5AA993D7B6(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x23F243BF5B07DA90(0, uParam0->f_4, 0);
				unk_0x3179CCC77CBAB31F(uVar3);
				unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_170(uParam0, 14))
			{
				func_193(uParam0);
				func_184(uParam0, 0);
			}
			if (func_170(uParam0, 9))
			{
				func_167(uParam0, 9, 0);
				unk_0xDA31FF1629FE9693();
				if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
				{
					unk_0xFBF7E9E330FE936E(uParam0->f_8, 255);
					unk_0xD8EEE815F0120FCE(uParam0->f_8, 1);
				}
			}
			if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
			{
				fVar4 = ((unk_0x9EF11DECA38804B6(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_236(uParam0, uParam0->f_3) > 300f)
				{
					func_305(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 1 || ((func_183(unk_0x9F92518438215DD0(), uParam0->f_3, 1) < 20f && func_162(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_162(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_233(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_232(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_93)
							{
								uParam0->f_7 = func_231(uParam0->f_4, uParam0->f_3);
								iVar0 = func_230(uParam0, &iVar1);
								if (!unk_0x0BA451447C3B1A8D(iVar0))
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
										unk_0xF811299AF81DB581(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xF811299AF81DB581(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x8C612717241D72F3(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x0BA451447C3B1A8D(iVar0))
											{
												unk_0xF811299AF81DB581(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x32D18ECD9E6F9BE2(uParam0->f_3);
							unk_0x4073360CA020BB84(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x8FEE285DAA01C565(unk_0x77009B1C011405A9(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_171(uParam0))
							{
								unk_0x32D18ECD9E6F9BE2(uParam0->f_3);
							}
							else if (((unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 1 && unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 0) && unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 7) && func_236(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xCD02E3C29B8253A6(&(uParam0->f_243));
								unk_0xF87DA7F5BA8C7D0F(&(uParam0->f_243));
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x7CF15DD8B3815A0D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x7CF15DD8B3815A0D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x3179CCC77CBAB31F(uParam0->f_243);
								unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x32C245E0760F73B7(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (func_183(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_229(uParam0, 1))
								{
									unk_0x71628E52718BD195(uParam0->f_3);
									func_305(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_228(uParam0->f_4))
								{
									unk_0x71628E52718BD195(uParam0->f_3);
									func_305(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_226(uParam0);
						if (func_236(uParam0, uParam0->f_3) < fVar4 || func_30())
						{
							if (unk_0x44E080690DA76A2A(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_213(uParam0))
								{
									func_212(uParam0);
									iLocal_88 = unk_0x17103F66FBB44C3C();
									unk_0x9001FCB58244C11D(uParam0->f_3, 26, 1);
									func_167(uParam0, 5, 0);
									unk_0xE65B43CCA3370B58();
									unk_0x5F45885CE09369B2(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x9352BAE0948677D4(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x8FEE285DAA01C565(unk_0x77009B1C011405A9(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_212(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
	{
		unk_0xD8EEE815F0120FCE(uParam0->f_8, 0);
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_8));
	}
}

int func_213(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_225("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3) && !unk_0x0BA451447C3B1A8D(uParam0->f_4))
	{
		func_224();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_222(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_145(uParam0, 0, 1084227584) && func_161(1, 1, 1))
			{
				if (func_229(uParam0, 1))
				{
					iLocal_87 = unk_0x17103F66FBB44C3C();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_85 = 1;
				}
				else
				{
					func_305(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_231(uParam0->f_4, uParam0->f_3);
				iVar9 = func_230(uParam0, &iVar10);
				if (!unk_0x0BA451447C3B1A8D(iVar9))
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
						unk_0xF811299AF81DB581(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xF811299AF81DB581(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x8C612717241D72F3(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x0BA451447C3B1A8D(iVar9))
						{
							unk_0xF811299AF81DB581(iVar9, 0, 4096);
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
			iVar12 = func_221(&(uParam0->f_409), unk_0x20CBCBD58A2C73B4(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x20CBCBD58A2C73B4(uParam0->f_4, Var0), 1);
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
				func_220(0, 0, 1);
				unk_0xA82CB0D67E22220B(unk_0x77009B1C011405A9(uParam0->f_4, 1), 3f, 0);
				unk_0xB7B8A91320C298DB(unk_0x77009B1C011405A9(uParam0->f_4, 1), 25f, 0);
				unk_0x35611EEE7A1FFEDB(1);
				unk_0xDA31FF1629FE9693();
				func_152();
				func_239(uParam0, 0, 0);
				Var13 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, Var6) };
				unk_0xFA51DC22F6E34F6E(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(uParam0->f_3, func_218(uParam0));
				func_217(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xBB72FAD675028BF0(*uParam0, unk_0x20CBCBD58A2C73B4(uParam0->f_4, Var0));
				unk_0xBFDA8319C24B82E9(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x45826D2663F7FD9C(*uParam0, 1);
				unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
				unk_0xF0875A1DC909B469(uParam0->f_3, 0, 0);
				unk_0x4073360CA020BB84(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			func_225("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x0BA451447C3B1A8D(uParam0->f_3) && !unk_0x0BA451447C3B1A8D(uParam0->f_4))
			{
				if (!unk_0x827151D7B70CB853(uParam0->f_3, 0))
				{
					unk_0x4DB6897DB04DE279(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x7B6A36C278A92381(uParam0->f_4, func_216(uParam0->f_7), 1);
				}
				unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
				unk_0x0CF4B2266E47C15F(*uParam0, 0);
				unk_0x0CF4B2266E47C15F(uParam0->f_1, 0);
				unk_0x5EF916489F3787FC(0);
				unk_0x203B2685C1715644(0, 1065353216);
				unk_0xF391B7BD1F131C3F(800);
				unk_0x35611EEE7A1FFEDB(1);
				unk_0xDA31FF1629FE9693();
				func_152();
				func_239(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9685D9855970A029() && !unk_0xA0CD269F4B0B4468())
			{
				func_214(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
			unk_0x0CF4B2266E47C15F(*uParam0, 0);
			unk_0x0CF4B2266E47C15F(uParam0->f_1, 0);
			unk_0x5EF916489F3787FC(0);
			unk_0x203B2685C1715644(0, 1065353216);
			func_214(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x0BA451447C3B1A8D(uParam0->f_3) && !unk_0x0BA451447C3B1A8D(uParam0->f_4))
			{
				if (unk_0x11CF47CA7B00BE4F(uParam0->f_3) || unk_0x827151D7B70CB853(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -1794415470) != 1 && unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -1794415470) != 0)
				{
					unk_0x4073360CA020BB84(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_214(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 1, 0);
	}
	unk_0x0B1544BD89031D70(1);
	func_21(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xB3B57AEE7B7BA0E2(1);
		unk_0xC48BE7195D873776(1);
	}
	func_215(23, 0);
}

void func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_24688, iParam0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_24688, iParam0);
	}
}

int func_216(int iParam0)
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

void func_217(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x5329DB72517417AE(*uParam0))
	{
		*uParam0 = unk_0x0ED114FA9F0CF64D(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_218(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_38() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_219(unk_0x77009B1C011405A9(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_219(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x4F034F83AF91EC27((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 0, iParam0);
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x35875163F311FBEF(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 15f);
	}
	unk_0x0B1544BD89031D70(iParam1);
	func_39(0);
	func_21(1, 1, iParam2, 0);
	unk_0xB3B57AEE7B7BA0E2(0);
	unk_0xC48BE7195D873776(0);
	func_215(23, 1);
}

int func_221(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA14FCCC1B46CB913(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xD200D7E3AEDD340D(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_222(int iParam0)
{
	if (func_223() && unk_0x17103F66FBB44C3C() >= iParam0 + 1000)
	{
		unk_0xC6EA7B53F52F1DF9(500);
		while (!unk_0x2E9CF5C574019636())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_39(0);
		func_158();
		return 1;
	}
	return 0;
}

int func_223()
{
	if (unk_0xC8557993A78C1B3E())
	{
		return 0;
	}
	if (unk_0x205C5BF7277043DF(0, 18) || unk_0x205C5BF7277043DF(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	if (func_32())
	{
		unk_0x5ABA834BC2C05B12("appInternet");
	}
	if (func_31())
	{
		unk_0x5ABA834BC2C05B12("appCamera");
	}
	if (func_41(1))
	{
		func_39(0);
	}
}

void func_225(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x17103F66FBB44C3C() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x17103F66FBB44C3C();
}

void func_226(var uParam0)
{
	var uVar0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
		{
			if (func_182(uParam0->f_3, 1) > 30f || func_227(uParam0))
			{
				if (unk_0xE962BD784DD0E442(uParam0->f_3, -1794415470) == 1 || unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) == 1)
				{
					unk_0xCD02E3C29B8253A6(&uVar0);
					unk_0xF87DA7F5BA8C7D0F(&uVar0);
					unk_0x23F243BF5B07DA90(0, uParam0->f_4, 0);
					unk_0x7CF15DD8B3815A0D(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x27DF0A5AA993D7B6(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x3179CCC77CBAB31F(uVar0);
					unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uVar0);
					func_305(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_227(var uParam0)
{
	if ((unk_0x9EF11DECA38804B6(uParam0->f_4) > 3f && func_380(uParam0, 5) > 15f) || unk_0xB602FFF24CBFD2C5(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xD8E4239907299552(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8E4239907299552(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8E4239907299552(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8E4239907299552(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x80D7E1622143A2A0(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xF97922D89E1A1F52(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xF97922D89E1A1F52(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xF97922D89E1A1F52(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xF97922D89E1A1F52(iParam0, 3))
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

int func_229(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xB5BBEB12C77EE430(uParam0->f_4, 1);
		iVar0[1] = unk_0xB5BBEB12C77EE430(uParam0->f_4, 2);
		iVar0[2] = unk_0xB5BBEB12C77EE430(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x746960881FB19A89(iVar0[iVar4]))
			{
				if (unk_0x0BA451447C3B1A8D(iVar0[iVar4]))
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
		if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_230(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB5BBEB12C77EE430(uParam0->f_4, 1);
		if (unk_0x746960881FB19A89(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xB5BBEB12C77EE430(uParam0->f_4, 2);
			if (unk_0x746960881FB19A89(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xB5BBEB12C77EE430(uParam0->f_4, 0);
				if (unk_0x746960881FB19A89(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x95A70C0B34435CA8(iParam0);
	Var0 = { unk_0xA9C270DECAAAE361(iParam0, unk_0x77009B1C011405A9(iParam1, 1)) };
	if (unk_0xB6A50C909A8FABC3(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0xB6A50C909A8FABC3(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x8C612717241D72F3(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x8C612717241D72F3(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x8C612717241D72F3(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x8C612717241D72F3(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_232(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		if (!unk_0xC7FF9739199F83C9(uParam0->f_3) && func_182(uParam0->f_3, 1) < fParam2)
		{
			if (!func_170(uParam0, 5))
			{
				func_274(uParam0, 5, 0, 0);
			}
		}
		else if (func_170(uParam0, 5))
		{
			func_167(uParam0, 5, 0);
		}
		if (((func_380(uParam0, 5) > IntToFloat(iParam1) && unk_0x9EF11DECA38804B6(uParam0->f_4) < fParam4) && !unk_0xC7FF9739199F83C9(uParam0->f_3)) || func_182(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_233(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xB96C39A95065BDE2(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xB96C39A95065BDE2(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x038249BAB926B732(uParam0->f_4, iVar18) };
		Var6 = { unk_0xA9C270DECAAAE361(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x20CBCBD58A2C73B4(uParam0->f_4, Var6) };
	Var3 = { unk_0x20CBCBD58A2C73B4(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x0A25F80D5BADC013(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x4A1AC49BA4A747F7(uParam0->f_3, 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_183(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xE3DAC530D2CCDAE3((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xA14FCCC1B46CB913(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xD200D7E3AEDD340D(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 1 && unk_0xE962BD784DD0E442(uParam0->f_3, 242628503) != 0)
			{
				unk_0xCD02E3C29B8253A6(&(uParam0->f_243));
				unk_0xF87DA7F5BA8C7D0F(&(uParam0->f_243));
				unk_0x7CF15DD8B3815A0D(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
				unk_0x7D0AF689E8617351(uParam0->f_243, 1);
				unk_0x3179CCC77CBAB31F(uParam0->f_243);
				unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xDA31FF1629FE9693();
			if (uParam0->f_411 != 9)
			{
				if (!func_197(uParam0->f_44, 128))
				{
					func_206(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_234(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x32D18ECD9E6F9BE2(uParam0->f_3);
			unk_0x402A96371F34E6D8(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xCD02E3C29B8253A6(&(uParam0->f_243));
			unk_0xF87DA7F5BA8C7D0F(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x7CF15DD8B3815A0D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x7CF15DD8B3815A0D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
			unk_0x3179CCC77CBAB31F(uParam0->f_243);
			unk_0xC7EBE3C9AC83FAAA(uParam0->f_3, uParam0->f_243);
			unk_0xCD02E3C29B8253A6(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x32C245E0760F73B7(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_234(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x4970C6C5BAEFBF31(uParam0, sParam1, uParam2, func_235(iParam3), 0);
}

int func_235(int iParam0)
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

float func_236(var uParam0, int iParam1)
{
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (func_171(uParam0))
		{
			return func_183(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_237(var uParam0)
{
	func_191(uParam0, uParam0->f_3);
	if (func_171(uParam0))
	{
		if (func_170(uParam0, 14))
		{
			func_193(uParam0);
			if (unk_0x2E6E8D325977B3EC(uParam0->f_10))
			{
				unk_0x0451B5D93A4BDAA0(&(uParam0->f_10));
			}
		}
	}
	if (!func_170(uParam0, 9))
	{
		if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
		{
			unk_0xFBF7E9E330FE936E(uParam0->f_8, 0);
			unk_0xD8EEE815F0120FCE(uParam0->f_8, 0);
		}
		func_274(uParam0, 9, 0, 0);
		func_238("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_238(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x51E13ACB7C47100D(iParam1, 1);
}

void func_239(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_44();
		func_274(uParam0, 16, 4f, 0);
		unk_0xDA31FF1629FE9693();
	}
}

int func_240(var uParam0, int iParam1)
{
	if (!unk_0x7DE7B5897062BC2C(2))
	{
		return 0;
	}
	func_244(12);
	if (func_197(uParam0->f_44, 8))
	{
		if (!func_197(uParam0->f_44, 128))
		{
			if (unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()) && !func_197(uParam0->f_44, 256))
			{
				func_198(&(uParam0->f_44), 256);
			}
			if (func_197(uParam0->f_44, 256) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				func_206(uParam0, 135, 1, 0, 1);
				func_198(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_243(uParam0, iParam1))
	{
		if (func_182(uParam0->f_3, 1) < 35f)
		{
			if (!func_197(uParam0->f_44, 8))
			{
				unk_0x23F243BF5B07DA90(uParam0->f_3, unk_0x9F92518438215DD0(), 0);
				func_206(uParam0, 133, 1, 0, 1);
				func_198(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x3E0478C40AB5B38D(uParam0->f_3) || unk_0x7E4B3ADE683EE23B(uParam0->f_3)) || func_182(uParam0->f_3, 1) > 400f)
		{
			func_305(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x1161215F69587BDA(uParam0->f_2, 0);
		unk_0xA27F610688163CA9(uParam0->f_4, 1);
		if (unk_0xB5BBEB12C77EE430(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x013A216DDFCAE218(uParam0->f_4);
			func_241(uParam0);
			func_46(2, 0);
			bLocal_93 = true;
			func_169(&uLocal_89);
			return 1;
		}
		else
		{
			func_305(uParam0, "No Taxi", 21);
			func_117("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_4))
	{
		if (func_242())
		{
		}
	}
}

int func_242()
{
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				iVar1 = unk_0xB6A50C909A8FABC3(iVar0);
				bVar2 = func_228(iVar0);
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
				if (unk_0x80D7E1622143A2A0(iVar1))
				{
					if (unk_0xB5BBEB12C77EE430(iVar0, -1) == unk_0x9F92518438215DD0())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x95A70C0B34435CA8(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_197(uParam0->f_44, 64))
					{
						if (unk_0x7DE7B5897062BC2C(2))
						{
							func_117("TX_VIP_DMGD", -1);
							if (func_109("TX_VIP_DMGD"))
							{
								func_198(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_197(uParam0->f_44, 32))
					{
						if (unk_0x7DE7B5897062BC2C(2))
						{
							func_117("TX_VIP_CAR", -1);
							if (func_109("TX_VIP_CAR"))
							{
								func_198(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_197(uParam0->f_44, 16))
					{
						if (unk_0x7DE7B5897062BC2C(2))
						{
							func_117("TX_VIP_SMALL", -1);
							if (func_109("TX_VIP_SMALL"))
							{
								func_198(&(uParam0->f_44), 16);
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

void func_244(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
	{
		uVar0 = iParam0;
		unk_0x4FB114C3BF95C988(8, &uVar0, 1, 1);
	}
	else if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xD83B94EF2700CAF3(8, &cVar1);
	}
}

void func_245(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_246()
{
	Local_342.f_0 = 0;
	func_263(37082, 37057, 1);
	func_263(36818, 36795, 1);
	func_263(36734, 36709, 1);
	func_263(36638, 36614, 1);
	func_263(36504, 36483, 1);
	func_263(36430, 36405, 1);
	func_263(36263, 36240, 1);
}

int func_247(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_248(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_4))
	{
		if (func_250(uParam0->f_4))
		{
			func_249(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_250(int iParam0)
{
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x9D878480FA8925BB(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xED6198B6F71F1E6F(iParam0, 0, 40000) || unk_0xED6198B6F71F1E6F(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_252(var uParam0)
{
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		if (func_253(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_254(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_249(uParam0, 11);
	return 1;
}

int func_255(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_4))
	{
		if (unk_0x5BFFEED2EB6664D5(uParam0->f_4) && !unk_0xF37F1CECABC7FC33(uParam0->f_4))
		{
			if (!func_170(uParam0, 25))
			{
				func_274(uParam0, 25, 0, 0);
			}
			else if (func_380(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_170(uParam0, 25))
		{
			func_167(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_257(var uParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_4))
	{
		if (unk_0xA4B54282E1E0757F(uParam0->f_4))
		{
			if (unk_0xED6198B6F71F1E6F(uParam0->f_4, 0, 40000) || unk_0xED6198B6F71F1E6F(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_259(var uParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_4))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
		{
			if (unk_0x0A93DB64A1052EB6(uParam0->f_4))
			{
				if (func_253(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_260(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_261(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_4))
	{
		if (func_262(uParam0->f_4))
		{
			func_249(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x9D878480FA8925BB(iParam0) == 0f)
	{
		if (!unk_0xFC38B241541883D3(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xED6198B6F71F1E6F(iParam0, 0, 40000) || unk_0xED6198B6F71F1E6F(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_263(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_199(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_199(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_305(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_265(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_3))
	{
		if ((unk_0x3E0478C40AB5B38D(uParam0->f_3) || unk_0x0BA451447C3B1A8D(uParam0->f_3)) || unk_0x0FC809E10EF0EAC3(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_266()
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

int func_267()
{
	if (!unk_0x149162179DBAEDB0(iLocal_850))
	{
		func_225("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_860, 1000);
		return 0;
	}
	if (!unk_0x3DA2EED4204CE591("gestures@m@standing@casual"))
	{
		func_225("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_860, 1000);
		return 0;
	}
	if (!unk_0x5E3461E729DA646E(uLocal_946))
	{
		return 0;
	}
	if (!func_268(&iLocal_860, 1))
	{
		func_225("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_860, 1000);
		return 0;
	}
	return 1;
}

int func_268(int iParam0, bool bParam1)
{
	if (!unk_0x149162179DBAEDB0(func_18()))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x3DA2EED4204CE591("gestures@m@standing@casual"))
		{
			func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x3DA2EED4204CE591("oddjobs@taxi@"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3DA2EED4204CE591("oddjobs@towingcome_here"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3DA2EED4204CE591("misscommon@response"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x7DE7B5897062BC2C(2))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
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
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
	{
		uParam0->f_8 = func_271(uParam0->f_3, 0, 0);
		unk_0xBBFA2425717FBC16(1, 0);
		unk_0xD8EEE815F0120FCE(uParam0->f_8, 1);
		unk_0x2A8C2BEEA4F7041F(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x402A96371F34E6D8(uParam0->f_3, unk_0x9F92518438215DD0(), -1, 2048, 4);
	}
	return 1;
}

int func_271(int iParam0, bool bParam1, bool bParam2)
{
	return func_132(iParam0, !bParam1, bParam2);
}

int func_272(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x746960881FB19A89(uParam0->f_3))
	{
		func_273(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_36(uParam0->f_14, 0);
		unk_0xA82CB0D67E22220B(uParam0->f_14, 2f, 0);
		func_34(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x56FA5D946A61826C(uParam0->f_11);
		}
		else if (unk_0x746960881FB19A89(Global_96071.f_225[0]))
		{
			uParam0->f_3 = Global_96071.f_225[0];
			unk_0x336AE92FD68DEF98(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xA00B5D954AD320BF(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x1B0EED08D8CF2596(uParam0->f_3, sParam7);
		unk_0xE69F90D298F4217D(uParam0->f_3, 112, 1);
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
		{
			unk_0xA7335B336910A0CC(uParam0->f_3, 250);
			unk_0x9001FCB58244C11D(uParam0->f_3, 32, 0);
			unk_0x9001FCB58244C11D(uParam0->f_3, 104, 1);
			unk_0x9001FCB58244C11D(uParam0->f_3, 177, 1);
			unk_0x9001FCB58244C11D(uParam0->f_3, 116, 0);
			unk_0x4B38C66919CC2E48("TAXI_Passenger", &(uParam0->f_413));
			unk_0xF2061C15946C53A2(1, uParam0->f_413, joaat("player"));
			unk_0xF2061C15946C53A2(2, uParam0->f_413, joaat("COP"));
			unk_0xA50AD6983D49A772(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x12B00D1193E9EC9B(Param1, 20f, 5f, 0);
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
				func_64(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_136(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_64(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_136(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_275()
{
	unk_0x3BC6D217451D6BB7(iLocal_850);
	unk_0xDA293E5084610B09("gestures@m@standing@casual");
	func_277(1);
	uLocal_946 = func_276();
}

var func_276()
{
	return unk_0xC97D787CE7726A2F("MIDSIZED_MESSAGE");
}

void func_277(bool bParam0)
{
	unk_0x3BC6D217451D6BB7(func_18());
	if (bParam0)
	{
		unk_0xDA293E5084610B09("gestures@m@standing@casual");
	}
	unk_0xDA293E5084610B09("oddjobs@taxi@");
	unk_0xDA293E5084610B09("oddjobs@towingcome_here");
	unk_0xDA293E5084610B09("misscommon@response");
	unk_0x9C53AD1E8A38ADEE("TAXI", 2);
	if (!func_197(Global_97358.f_17351, 128))
	{
		func_198(&(Global_97358.f_17351), 128);
	}
}

void func_278(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_279(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_280(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
		{
			if (bParam2)
			{
				if (func_380(uParam0, 10) > (20f + 10f))
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
			else if (func_380(uParam0, 10) > 20f)
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
		if (func_380(uParam0, 10) > 30f)
		{
			if (!func_200())
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
		if (!func_137(&(Local_189[5 /*10*/].f_6)))
		{
			func_169(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_303(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_302(uParam0, 1);
				func_300(5, uParam0);
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 1))
	{
		if (!func_137(&(Local_189[0 /*10*/].f_6)))
		{
			func_169(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_298(uParam0))
			{
				func_302(uParam0, 1);
				func_300(0, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2))
	{
		if (!func_137(&(Local_189[1 /*10*/].f_6)))
		{
			func_169(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_297(uParam0))
			{
				func_302(uParam0, 1);
				func_300(1, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2048))
	{
		if (!func_137(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0x746960881FB19A89(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xFD181DDA4D8D6786(uParam0->f_4);
				func_169(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_135(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_296(uParam0))
			{
				func_302(uParam0, 1);
				func_300(8, uParam0);
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 128))
	{
		if (!func_137(&(Local_189[6 /*10*/].f_6)))
		{
			func_169(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_295(uParam0))
			{
				func_302(uParam0, 1);
				func_300(6, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32))
	{
		if (!func_137(&(Local_189[4 /*10*/].f_6)))
		{
			func_169(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_294(uParam0))
			{
				func_302(uParam0, 1);
				func_300(4, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 256))
	{
		if (!func_137(&(Local_189[7 /*10*/].f_6)))
		{
			func_169(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_293(uParam0))
			{
				func_300(7, uParam0);
				func_302(uParam0, 1);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8))
	{
		if (!func_137(&(Local_189[9 /*10*/].f_6)))
		{
			func_169(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x021C6DA836634360(unk_0xCFC72E446B0B3AD7());
		}
		else if (func_135(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_292(uParam0))
			{
				func_302(uParam0, 1);
				func_300(9, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 16384))
	{
		if (!func_137(&(Local_189[13 /*10*/].f_6)))
		{
			func_169(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_286(uParam0))
			{
				func_302(uParam0, 1);
				func_300(13, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32768))
	{
		if (!func_137(&(Local_189[14 /*10*/].f_6)))
		{
			func_169(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_285(uParam0))
			{
				func_302(uParam0, 1);
				func_300(14, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4096))
	{
		if (!func_137(&(Local_189[11 /*10*/].f_6)))
		{
			func_169(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_284(uParam0))
			{
				func_302(uParam0, 1);
				func_300(11, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8192))
	{
		if (!func_137(&(Local_189[12 /*10*/].f_6)))
		{
			func_169(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_135(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_283(uParam0))
			{
				func_302(uParam0, 1);
				func_300(12, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4))
	{
		if (!func_137(&(Local_189[2 /*10*/].f_6)))
		{
			func_282(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_135(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_281(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_302(uParam0, 1);
				func_300(2, uParam0);
				func_299(uParam0);
			}
		}
	}
}

int func_281(var uParam0)
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_2))
	{
		if ((!unk_0x9A0574B8E8749BBD(uParam0->f_2) && !func_137(&(Local_189[0 /*10*/].f_3))) && !func_137(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_137(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x9EF11DECA38804B6(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_169(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_135(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x9EF11DECA38804B6(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_88(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_88(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_282(var uParam0, float fParam1)
{
	if (!func_137(uParam0))
	{
		func_64(uParam0, fParam1);
	}
}

int func_283(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		Var0 = { unk_0x0F855C7E59CA4EE3(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_137(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_137(&(Local_189[12 /*10*/].f_3)))
			{
				func_169(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_88(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_284(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xFC38B241541883D3(uParam0->f_4, 0) && !func_137(&(Local_189[0 /*10*/].f_3))) && !func_137(&(Local_189[1 /*10*/].f_3))) && !func_137(&(Local_189[5 /*10*/].f_3))) && !func_137(&(Local_189[9 /*10*/].f_3))) && !func_137(&(Local_189[7 /*10*/].f_3))) && !func_137(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x0F855C7E59CA4EE3(uParam0->f_4, 1) };
		if (unk_0xE3DAC530D2CCDAE3(Var0.f_0) > 2.5f && !func_137(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_137(&(Local_189[11 /*10*/].f_3)))
			{
				func_169(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.f_0;
			}
			else if (func_135(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0xE3DAC530D2CCDAE3(uLocal_341) - unk_0xE3DAC530D2CCDAE3(Var0.f_0)) < 0f)
			{
				func_88(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_135(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_88(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_285(var uParam0)
{
	if (((((unk_0xFC38B241541883D3(uParam0->f_4, 0) && !func_137(&(Local_189[0 /*10*/].f_3))) && !func_137(&(Local_189[8 /*10*/].f_3))) && !func_137(&(Local_189[5 /*10*/].f_3))) && !func_137(&(Local_189[9 /*10*/].f_3))) && !func_137(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_137(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x746960881FB19A89(uParam0->f_5))
			{
				if ((unk_0x9EF11DECA38804B6(uParam0->f_4) > 15f && func_183(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x0BA451447C3B1A8D(uParam0->f_5) && !unk_0x4A33023BC86AAA7F(uParam0->f_5, -1)))
				{
					func_169(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_135(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_183(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x9663302DF2957F36(uParam0->f_5))
		{
			func_88(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_135(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_88(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x9663302DF2957F36(uParam0->f_5))
		{
			func_88(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	if (((unk_0xFC38B241541883D3(uParam0->f_4, 0) && !func_137(&(Local_189[9 /*10*/].f_3))) && !func_137(&(Local_189[7 /*10*/].f_3))) && !func_137(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_287(uParam0->f_4) && unk_0x9EF11DECA38804B6(uParam0->f_4) > 15f)
		{
			if (!func_137(&(Local_189[13 /*10*/].f_3)))
			{
				func_169(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_88(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_287(int iParam0)
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
	
	unk_0xB60134452ED5852A(unk_0x77009B1C011405A9(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xB60134452ED5852A(unk_0x77009B1C011405A9(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x1812D0C1DA72E901(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_291((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_290(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_288(unk_0x77009B1C011405A9(iParam0, 1), Var15, Var18, Var21);
}

int func_288(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_291(Param6 - Param3) };
	Var3 = { func_291(Param9 - Param3) };
	fVar6 = func_289(Param0, Var0);
	fVar7 = func_289(Param3, Var0);
	fVar8 = func_289(Param6, Var0);
	fVar9 = func_289(Param0, Var3);
	fVar10 = func_289(Param3, Var3);
	fVar11 = func_289(Param9, Var3);
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

float func_289(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_290(struct<3> Param0, int iParam3)
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

Vector3 func_291(struct<3> Param0)
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

int func_292(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0xB5BBEB12C77EE430(uParam0->f_4, -1) == unk_0x9F92518438215DD0())
		{
			if (unk_0x8B4143BB86791BA9(unk_0xCFC72E446B0B3AD7()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_293(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0xB5BBEB12C77EE430(uParam0->f_4, -1) == unk_0x9F92518438215DD0())
		{
			if (unk_0xB602FFF24CBFD2C5(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0xFDAA1E91D8905A0A(uParam0->f_4) <= -145f || unk_0xFDAA1E91D8905A0A(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0xFDAA1E91D8905A0A(uParam0->f_4) <= 35f && unk_0xFDAA1E91D8905A0A(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_294(var uParam0)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		iVar0 = unk_0xCE5A08F982CB709F(unk_0xCFC72E446B0B3AD7());
		if (iVar0 == 0)
		{
			if (!func_137(&(Local_189[4 /*10*/].f_3)))
			{
				func_169(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_88(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		iVar0 = unk_0x009C74CDEF6AB172(unk_0xCFC72E446B0B3AD7());
		if (iVar0 == 0)
		{
			if (!func_137(&(Local_189[6 /*10*/].f_3)))
			{
				func_169(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_88(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_296(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0x7F55198EDB8C65EC(uParam0->f_4))
		{
			iVar0 = unk_0xFD181DDA4D8D6786(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x87659527DF5C44B5(uParam0->f_4);
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
				func_88(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_297(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		Var0 = { unk_0x0F855C7E59CA4EE3(uParam0->f_4, 1) };
		if (unk_0xE3DAC530D2CCDAE3(Var0.f_0) > 3f && !func_137(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_137(&(Local_189[1 /*10*/].f_3)))
			{
				func_169(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_88(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_298(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (!unk_0xF37F1CECABC7FC33(uParam0->f_4) && unk_0xFAF3D214E00907D8(uParam0->f_4))
		{
			if (!func_137(&(Local_189[0 /*10*/].f_3)))
			{
				func_169(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_88(&(Local_189[0 /*10*/].f_3));
				func_136(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_299(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_137(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_136(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_274(uParam0, 10, 0f, 1);
	unk_0x021C6DA836634360(unk_0xCFC72E446B0B3AD7());
}

void func_300(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_301(uParam1, iParam0);
	func_88(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_301(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_302(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_303(var uParam0)
{
	if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
	{
		if (unk_0x9EF11DECA38804B6(uParam0->f_4) > 25f)
		{
			if (!func_137(&(Local_189[5 /*10*/].f_3)))
			{
				func_169(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_135(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_88(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_88(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_304(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x0BA451447C3B1A8D(uParam0))
	{
		return -1f;
	}
	return unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam0, 1), Param1, iParam4);
}

void func_305(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_158();
	func_400(2);
	Var0 = { func_309() };
	if ((!unk_0x9E9AFDBF482248F6(&Var0) && func_200()) && !unk_0x6B08EC9A88700FBB(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xDA31FF1629FE9693();
		unk_0x35611EEE7A1FFEDB(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
		{
			if (!func_148(uParam0))
			{
				if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x84E8946A115CBD2C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x84E8946A115CBD2C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x3C17D9ED0E5F3FCA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x84E8946A115CBD2C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
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
				func_307(uParam0, &Var0);
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_148(uParam0))
			{
				if (unk_0x0A93DB64A1052EB6(uParam0->f_4))
				{
					func_133(uParam0, 4096, 0);
				}
				else
				{
					func_133(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_307(uParam0, &Var0);
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
				func_307(uParam0, &Var0);
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_307(uParam0, &Var0);
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_307(uParam0, &Var0);
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_46(8, 0);
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
				func_307(uParam0, &Var0);
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_133(uParam0, 0, 0);
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_46(8, 0);
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
				func_307(uParam0, &Var0);
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_307(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_46(8, 0);
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
				func_307(uParam0, &Var0);
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_306(&Var0);
			func_94(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_307(uParam0, &Var0);
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
					func_307(uParam0, &Var0);
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_46(3, 0);
		}
		func_274(uParam0, 3, 0f, 1);
	}
}

void func_306(char* sParam0)
{
	switch (func_3(unk_0x9F92518438215DD0()))
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

void func_307(var uParam0, char* sParam1)
{
	if (func_308(uParam0))
	{
		func_94(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_308(var uParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		if (func_183(unk_0x9F92518438215DD0(), uParam0->f_3, 1) < 40f && !unk_0xC7FF9739199F83C9(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_309()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x966346019D5E0542();
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

int func_310(var uParam0)
{
	return uParam0->f_118;
}

void func_311()
{
	if (func_341(&Local_408, &Local_865))
	{
		switch (Local_865.f_27)
		{
			case 0:
				if (Local_408.f_410 == 9)
				{
					if (func_201(&Local_408) > 10 && func_201(&Local_408) != 15)
					{
						func_206(&Local_408, 15, 1, 0, 0);
						func_274(&Local_408, 10, 0, 0);
						if (bLocal_864)
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_380(&Local_408, 18) > 15f)
				{
					if (func_201(&Local_408) > 10 && func_201(&Local_408) != 17)
					{
						func_198(&(Local_408.f_81), 67108864);
						func_206(&Local_408, 17, 1, 0, 0);
						if (bLocal_864)
						{
						}
					}
				}
				else if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
				{
				}
				break;
			
			case 2:
				if (func_380(&Local_408, 18) > 30f)
				{
					if (func_201(&Local_408) > 10 && func_201(&Local_408) != 16)
					{
						func_206(&Local_408, 16, 1, 0, 0);
						if (bLocal_864)
						{
						}
					}
				}
				else if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if (func_380(&Local_408, 18) > 30f)
				{
					if (func_201(&Local_408) > 10 && func_201(&Local_408) != 18)
					{
						func_206(&Local_408, 18, 1, 0, 0);
						if (bLocal_864)
						{
						}
					}
				}
				else if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
				{
				}
				break;
			
			case 4:
				if (func_380(&Local_408, 18) > 30f)
				{
					if (func_201(&Local_408) > 10 && func_201(&Local_408) != 19)
					{
						func_206(&Local_408, 19, 1, 0, 0);
						if (bLocal_864)
						{
						}
					}
				}
				else if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_312(&Local_408, &uLocal_895, &Local_865, 1, bLocal_864);
}

int func_312(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var6;
	
	func_324(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_323(uParam1))
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
				if (!func_322(uParam0))
				{
					uParam2->f_7 = { func_321(uParam1) };
					func_94(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_200())
				{
					uParam2->f_13 = { func_209() };
					if (unk_0x6B08EC9A88700FBB(&(uParam2->f_13), &(uParam2->f_7)))
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
				if (func_173(uParam0))
				{
					if (func_200())
					{
						if (unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_274(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_309() };
							func_44();
						}
						else
						{
							uParam2->f_1 = { func_320() };
							func_158();
						}
						if (unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) >= 1)
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
				else if (func_200())
				{
					uParam2->f_19 = { func_320() };
				}
				else
				{
					func_199(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_317(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_170(uParam0, 14) && !func_200()) && !func_173(uParam0)) && func_380(uParam0, 18) > 1f)
				{
					func_274(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_380(uParam0, 18) > 1.5f && !func_200()) && !func_173(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_316(uParam2, &cVar0))
					{
						func_94(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_274(uParam0, 18, 0, 0);
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
						func_315(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_314(&(uParam0->f_244), uParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_274(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_200() && func_380(uParam0, 17) > 1f)
				{
					if (func_380(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (unk_0x6B08EC9A88700FBB(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_208(&(uParam2->f_1));
							func_94(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_167(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0x9E9AFDBF482248F6(&(uParam2->f_1)))
						{
							func_313(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_200())
				{
					func_199(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_317(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_313(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_103(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_95(sParam2, iParam4, 0);
}

int func_314(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_103(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_95(sParam2, iParam4, 0);
}

void func_315(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_253(*uParam0, iVar1))
		{
			func_199(uParam0, iVar1);
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

int func_316(var uParam0, char* sParam1)
{
	if (unk_0x6B08EC9A88700FBB(&(uParam0->f_13), "txm3_bant1") || unk_0x6B08EC9A88700FBB(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x6B08EC9A88700FBB(&(uParam0->f_13), "txm6_bant3M") || unk_0x6B08EC9A88700FBB(&(uParam0->f_13), "txm6_bant3T")) || unk_0x6B08EC9A88700FBB(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_198(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_317(var uParam0)
{
	int iVar0;
	
	iVar0 = func_319(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_198(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_318(), 24);
	}
}

var func_318()
{
	var uVar0;
	
	return uVar0;
}

int func_319(var uParam0)
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

struct<6> func_320()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x966346019D5E0542();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x75426D5397CE9E5D(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x75426D5397CE9E5D(&(Global_14560[iVar8 /*6*/])))
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

struct<6> func_321(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_198(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_322(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_175("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_175("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_175("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_175("TX_OBJ_GYB_DO", 0, 0) || func_175("TAXI_OBJ_GYB", 0, 0)) || func_175("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_175("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_175("TX_OBJ_CYI_DO", 0, 0) || func_175("TAXI_OBJ_CYI_01", 0, 0)) || func_175("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_175("TX_OBJ_GYN_DO", 0, 0) || func_175("TAXI_OBJ_GYN", 0, 0)) || func_175("TAXI_OBJ_GYN_TG", 0, 0)) || func_175("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_175("TAXI_OBJ_CC1", 0, 0) || func_175("TAXI_OBJ_CC2", 0, 0)) || func_175("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_175("TAXI_OBJ_FTC1", 0, 0) || func_175("TAXI_OBJ_FTC2", 0, 0)) || func_175("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_175("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_175("TAXI_OBJ_GETRUN", 0, 0) || func_175("TAXI_OBJ_DRIVE", 0, 0)) || func_175("TAXI_OBJ_RETURN", 0, 0)) || func_175("TAXI_OBJ_POL", 0, 0)) || func_175("TAXI_OBJ_RUNOUT", 0, 0)) || func_175("TAXI_OBJ_POL", 0, 0));
}

int func_323(var uParam0)
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

void func_324(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_322(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_170(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_201(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_340(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_200())
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
						func_339(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_336(uParam0, Var0, func_338(uParam0, 2));
				}
				if (func_197(uParam0->f_98, 4))
				{
					func_274(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				func_188(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_380(uParam0, 16) > 1f)
				{
					func_190(1);
					if (uParam0->f_411 == 9)
					{
						func_238("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_238("TAXI_VIP_RETURN", 7500, 1);
					}
					func_274(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
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
					func_339(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
				{
					func_234(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_380(uParam0, 16) > func_107(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_200()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_201(uParam0))
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
				func_339(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_340(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_94(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
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
						func_315(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_339(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_274(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_238("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_238("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x2E6E8D325977B3EC(uParam0->f_9))
					{
						uParam0->f_9 = func_335(uParam0->f_17, 1);
					}
					else if (unk_0xDA8AC653AAD36D4F(uParam0->f_9) == 0)
					{
						unk_0xFBF7E9E330FE936E(uParam0->f_9, 255);
						unk_0xAB1A4C1CDE66050B(uParam0->f_9, uParam0->f_17);
						unk_0xD8EEE815F0120FCE(uParam0->f_9, 1);
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
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_234(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x2E6E8D325977B3EC(uParam0->f_9))
					{
						uParam0->f_9 = func_335(uParam0->f_17, 1);
					}
					else if (unk_0xDA8AC653AAD36D4F(uParam0->f_9) == 0)
					{
						unk_0xFBF7E9E330FE936E(uParam0->f_9, 255);
						unk_0xAB1A4C1CDE66050B(uParam0->f_9, uParam0->f_17);
						unk_0xD8EEE815F0120FCE(uParam0->f_9, 1);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_334(uParam0, 33554432, Var0, "", 1, 8);
				func_274(uParam0, 16, 0, 0);
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_200())
				{
					func_333(uParam0, 0);
					func_198(&(uParam0->f_44), 4);
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
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
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
						func_208(&Var0);
					}
					func_331(Var0, uParam1);
					func_198(&(uParam0->f_81), 67108864);
					func_274(uParam0, 16, 0, 0);
					func_274(uParam0, 11, 0, 0);
					func_239(uParam0, 0, 0);
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
							func_208(&Var0);
						}
					}
					func_331(Var0, uParam1);
					func_274(uParam0, 11, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
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
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
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
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
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
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_208(&Var0);
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				func_198(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 1, 0, 8);
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
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
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
					func_330(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_330(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_331(Var0, uParam1);
				func_340(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_239(uParam0, 0, 0);
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
					func_330(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_330(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_331(Var0, uParam1);
				func_340(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 12:
				func_238("TAXI_OBJ_GYB", 3500, 1);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_238("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_238("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_238("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
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
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_197(uParam0->f_98, 268435456))
				{
					func_238("TAXI_OBJ_CYI_01", 7500, 1);
					func_198(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_208(&Var0);
				func_331(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_208(&Var0);
				func_331(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_208(&Var0);
				func_331(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 33:
				func_238("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_197(uParam0->f_82, 8192))
				{
					if (func_380(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_208(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_331(Var0, uParam1);
						}
						else
						{
							func_339(uParam0, &Var0, 0, 0, 8);
						}
						func_198(&(uParam0->f_82), 8192);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_197(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_208(&Var0);
					func_339(uParam0, &Var0, 0, 0, 8);
					func_198(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_197(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_208(&Var0);
					func_339(uParam0, &Var0, 0, 0, 8);
					func_198(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
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
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_239(uParam0, 0, 0);
				break;
			
			case 139:
				func_238("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_206(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x073B65E051D2F03E(0, 120);
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
					func_198(&(uParam0->f_82), 268435456);
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
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x073B65E051D2F03E(0, 100);
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
					func_198(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_238("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_239(uParam0, 0, 0);
				func_206(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_200())
				{
					func_238("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_239(uParam0, 0, 0);
					func_206(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_238("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_239(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_197(uParam0->f_81, 1))
				{
					func_329(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_197(uParam0->f_81, 2))
				{
					func_329(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_340(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
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
				func_198(&(uParam0->f_81), 2097152);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_340(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_340(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_340(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_340(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_197(uParam0->f_81, 4))
				{
					func_329(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_197(uParam0->f_81, 8))
				{
					func_329(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_329(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_340(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_328(uParam0))
				{
					func_336(uParam0, Var0, func_338(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
					{
						func_234(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_94(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_315(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_315(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_340(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_197(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_274(uParam0, 16, 0, 0);
				}
				func_239(uParam0, 0, 0);
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
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
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
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_274(uParam0, 16, 0, 0);
				}
				func_340(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_197(uParam0->f_81, 4096))
				{
					func_334(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_197(uParam0->f_81, 8192))
				{
					func_334(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_340(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_197(uParam0->f_81, 16384))
				{
					func_334(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_197(uParam0->f_81, 32768))
				{
					func_334(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_340(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_197(uParam0->f_82, 8))
					{
						func_327(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 16))
					{
						func_327(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 32))
					{
						func_327(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_239(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_274(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_340(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_197(uParam0->f_81, 65536))
				{
					func_334(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 131072))
				{
					func_334(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_328(uParam0))
				{
					func_336(uParam0, Var0, func_338(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
					{
						func_234(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_197(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_198(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_274(uParam0, 16, 0, 0);
				}
				func_340(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_200())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_339(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_336(uParam0, Var0, func_338(uParam0, 65));
					func_239(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_200())
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
					func_339(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_336(uParam0, Var0, func_338(uParam0, 66));
					func_239(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_200())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								func_340(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								func_340(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_315(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_340(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_274(uParam0, 16, 0, 0);
								func_239(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_339(uParam0, &Var0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_239(uParam0, 0, 0);
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
									func_208(&Var0);
									func_339(uParam0, &Var0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_239(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_339(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_206(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_340(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_197(uParam0->f_82, 1))
				{
					func_327(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 2))
				{
					func_327(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 4))
				{
					func_327(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_239(uParam0, 0, 0);
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
				func_315(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
				{
					func_234(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_340(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_328(uParam0))
				{
					func_336(uParam0, Var0, func_338(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
					{
						func_234(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_326(uParam0, Var0, 8);
				}
				func_340(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_197(uParam0->f_83, 1024))
				{
					func_198(&(uParam0->f_83), 1024);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2048))
				{
					func_198(&(uParam0->f_83), 2048);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 4096))
				{
					func_198(&(uParam0->f_83), 4096);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_208(&Var0);
					func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_197(uParam0->f_82, 1024))
				{
					func_327(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_197(uParam0->f_82, 2048))
				{
					func_327(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_340(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
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
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
				{
					func_234(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_328(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_339(uParam0, &Var0, 0, 0, 8);
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
						func_339(uParam0, &Var0, 0, 0, 8);
						func_274(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_340(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_274(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xD092BBE40A1C72AA(unk_0x2563F6EECD8726D3()) >= 1)
				{
					func_238("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_197(uParam0->f_81, 262144))
				{
					func_334(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_334(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_334(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_340(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_197(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_325(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_197(uParam0->f_82, 134217728))
				{
					func_325(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_340(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 100:
				func_238("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_239(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_198(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_198(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &Var0, 0, 0, 8);
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
				func_198(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_197(uParam0->f_82, 65536))
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
						func_208(&Var0);
						func_331(Var0, uParam1);
						func_198(&(uParam0->f_82), 65536);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_197(uParam0->f_82, 131072))
				{
					if (func_380(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_208(&Var0);
						func_331(Var0, uParam1);
						func_198(&(uParam0->f_82), 131072);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_197(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_198(&(uParam0->f_82), 8388608);
				}
				else if (!func_197(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_198(&(uParam0->f_82), 16777216);
				}
				else if (!func_197(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_198(&(uParam0->f_82), 33554432);
				}
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_208(&Var0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_339(uParam0, &Var0, 0, 0, 8);
				}
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_331(Var0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_198(&(uParam0->f_81), 2097152);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_208(&Var0);
				func_331(Var0, uParam1);
				func_198(&(uParam0->f_81), 67108864);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_197(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_334(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
					{
						func_234(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_206(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_197(uParam0->f_81, 268435456))
				{
					func_334(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_206(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_238("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_239(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_197(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_334(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
						{
							func_234(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_334(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_206(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_238("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_239(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_94(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_197(uParam0->f_81, 16777216))
				{
					func_334(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 88:
				func_238("TAXI_TIEFLEE", 7500, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_197(uParam0->f_98, 536870912))
				{
					func_238("TAXI_OBJ_CYI_1B", 7500, 1);
					func_198(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_239(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_208(&Var0);
				func_339(uParam0, &Var0, 0, 0, 8);
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
				func_339(uParam0, &Var0, 0, 0, 8);
				func_239(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_339(uParam0, &Var0, 0, 0, 8);
				func_239(uParam0, 0, 0);
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
				func_339(uParam0, &Var0, 0, 0, 8);
				func_239(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_339(uParam0, &Var0, 1, 0, 8);
				func_206(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_238("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_206(uParam0, 0, 0, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			}
	}
}

void func_325(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_198(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_94(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_326(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_197(uParam0->f_82, 64))
	{
		func_198(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_197(uParam0->f_82, 128))
	{
		func_198(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x073B65E051D2F03E(1, 3), 24);
	}
	func_314(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_274(uParam0, 16, 0, 0);
}

void func_327(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_198(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_208(&Param2);
		}
	}
	func_94(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_328(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_329(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_198(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_94(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_330(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_253(*uParam0, iVar1))
		{
			func_199(uParam0, iVar1);
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

void func_331(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_332(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_198(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x9E9AFDBF482248F6(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_333(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_238("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_238("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_238("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_238("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_238("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_238("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_238("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_238("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_238("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_238("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_238("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_238("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_334(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_198(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_94(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_335(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_107(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

void func_336(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_274(uParam0, 16, 0, 0);
	func_274(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_3))
	{
		unk_0xF88917418C102FCE(uParam0->f_3, &cParam1, func_337(uParam0));
	}
}

char* func_337(var uParam0)
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

char* func_338(var uParam0, int iParam1)
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

int func_339(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_274(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_274(uParam0, 17, 0f, 1);
	}
	func_239(uParam0, iParam2, 0);
	return func_94(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_340(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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
				func_19(uParam2, 4096);
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
				func_19(uParam2, 4096);
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
				func_19(uParam2, 4096);
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
				func_19(uParam2, 4096);
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

bool func_341(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_170(uParam0, 9));
}

bool func_342(var uParam0)
{
	return uParam0->f_117;
}

void func_343(var uParam0, var uParam1, bool bParam2)
{
	if (!func_197(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x9E9AFDBF482248F6(&(uParam0->f_124)) && func_200())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_200())
				{
					StringCopy(&(uParam0->f_124), func_318(), 24);
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

void func_344(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x746960881FB19A89(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_253(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_253(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_253(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_199(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x17103F66FBB44C3C();
							}
						}
						else
						{
							func_20(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_253(Local_342.f_1[iVar0 /*4*/], 4) && !func_253(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_199(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_305(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_345(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_170(uParam0, 27))
	{
		func_168(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_380(uParam0, 27) > 5f)
	{
		if (func_372(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_274(uParam0, 27, 0, 0);
			func_274(uParam0, 10, 0, 0);
			func_370(uParam0, &uVar0, uParam1);
		}
		func_367(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_346(uParam0);
	}
	if ((((!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()) && (unk_0x5329DB72517417AE(*uParam0) && !unk_0x8E3093821480140B(*uParam0))) && (unk_0x5329DB72517417AE(uParam0->f_1) && !unk_0x8E3093821480140B(uParam0->f_1))) && !unk_0x18DF50385FACBD8E()) && !func_200())
	{
		if (func_380(uParam0, 26) > 10f)
		{
			func_167(uParam0, 26, 0);
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
		}
	}
	else if (func_170(uParam0, 26))
	{
		func_167(uParam0, 26, 0);
	}
	return 0;
}

void func_346(var uParam0)
{
	if (!func_366(uParam0->f_429))
	{
		uParam0->f_429 = func_365();
		func_356(&(uParam0->f_429), 0, 0, unk_0x073B65E051D2F03E(4, 7), 0, 0, 0);
	}
	else if (func_347(uParam0->f_429))
	{
		func_305(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_347(int iParam0)
{
	return func_348(func_365(), iParam0);
}

int func_348(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_366(iParam1) || !func_366(iParam0))
	{
		return 1;
	}
	iVar0 = func_354(iParam0);
	iVar1 = func_354(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_353(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_352(iParam0);
	iVar1 = func_352(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_351(iParam0);
	iVar1 = func_351(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_350(iParam0);
	iVar1 = func_350(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_349(iParam0);
	iVar1 = func_349(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_350(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_351(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_352(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_353(int iParam0)
{
	return iParam0 & 15;
}

var func_354(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_355(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_355(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_356(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_354(*uParam0);
	iVar1 = func_353(*uParam0);
	iVar2 = func_352(*uParam0);
	iVar3 = func_351(*uParam0);
	iVar4 = func_350(*uParam0);
	iVar5 = func_349(*uParam0);
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
	iVar6 = func_364(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_364(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_357(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_357(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_363(uParam0, iParam1);
	func_362(uParam0, iParam2);
	func_361(uParam0, iParam3);
	func_360(uParam0, iParam4);
	func_359(uParam0, iParam5);
	func_358(uParam0, iParam6);
}

void func_358(var uParam0, int iParam1)
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

void func_359(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_353(*uParam0);
	iVar1 = func_354(*uParam0);
	if (iParam1 < 1 || iParam1 > func_364(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_361(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_364(int iParam0, int iParam1)
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

int func_365()
{
	var uVar0;
	
	func_363(&uVar0, unk_0xD9940DF735CED1D5());
	func_362(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_361(&uVar0, unk_0x3E15607264E063C3());
	func_360(&uVar0, unk_0xA2C54D866C588926());
	func_359(&uVar0, unk_0x35E06151CD8A2DD1());
	func_358(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
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
	iVar0 = func_349(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_350(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_351(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_354(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_353(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_352(iParam0);
	if (iVar5 < 1 || iVar5 > func_364(iVar4, iVar3))
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
		if (((uParam0->f_411 == 9 && func_369()) && !func_171(uParam0)) || ((uParam0->f_411 != 9 && func_243(uParam0, 1)) && !func_171(uParam0)))
		{
			uVar0 = func_368(uParam0->f_4);
			unk_0x13446D908F119EB2(&uVar0);
			uParam0->f_4 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			unk_0x336AE92FD68DEF98(uParam0->f_4, 1, 0);
			func_193(uParam0);
			func_184(uParam0, 0);
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
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) == unk_0x9F92518438215DD0())
				{
					if (unk_0x343BE15E9FFCF907(iVar0, func_18()))
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
				func_305(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_371(uParam0, 0, 4))
			{
				func_305(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_371(uParam0, 0, 8))
			{
				func_305(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_371(uParam0, 1, 1))
			{
				func_305(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_371(uParam0, 0, 1))
			{
				func_305(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_197(*uParam2, 2) && func_148(uParam0))
			{
				func_305(uParam0, "Aggro Went Wanted", 5);
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
	else if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
	{
		if (!unk_0xC7FF9739199F83C9(uParam0->f_3))
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

int func_372(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x9F92518438215DD0();
	if (!unk_0x0BA451447C3B1A8D(iVar0) && !unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (!func_197(*uParam2, 1))
		{
			if (func_378(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_197(*uParam2, 2))
		{
			if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_197(*uParam2, 4))
		{
			if (func_376(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_197(*uParam2, 8))
		{
			if (func_375(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_197(*uParam2, 128);
		if (bParam4)
		{
			if (func_373(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_197(*uParam2, 16))
		{
			if (func_373(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x746960881FB19A89(iParam0))
	{
		if (iParam7 && unk_0xE99AF5B1B3F0BB7C(iParam0, iVar0, 1))
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
		if (!bLocal_78)
		{
			iLocal_79 = unk_0xFD181DDA4D8D6786(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0xFD181DDA4D8D6786(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = unk_0x228A016F863DED95();
		if (!unk_0x0BA451447C3B1A8D(uVar0))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0xE99AF5B1B3F0BB7C(iParam0, unk_0x9F92518438215DD0(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE99AF5B1B3F0BB7C(iParam0, unk_0x9F92518438215DD0(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x228A016F863DED95();
		if (!unk_0x0BA451447C3B1A8D(uVar1))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			if (unk_0xBCBBB7902DEFA79B(iParam0))
			{
				if (unk_0x3D93A927E390E214(iParam0) == unk_0x9F92518438215DD0())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
		{
			if (unk_0x41EEB10CCC2497A8(iParam0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x8B4143BB86791BA9(unk_0xCFC72E446B0B3AD7()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xB4A1AB9DECAE3AE0(unk_0x9F92518438215DD0()))
	{
		if (unk_0x8DB035AD8E9536E1(iParam0))
		{
			return 1;
		}
	}
	if (func_374(unk_0x9F92518438215DD0(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xBD280C076BC69C97(iParam0) && func_182(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), unk_0x1161215F69587BDA(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), iParam0))
		{
			return 1;
		}
		if (!unk_0x0BA451447C3B1A8D(uParam1))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iParam1, unk_0x9F92518438215DD0(), 1))
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
	
	unk_0x9DA0F3A686A566A6(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x4A4902C6AC8DCB7E(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iParam0, 1), unk_0x77009B1C011405A9(iParam1, 1)) < 2.5f)
			{
				if (unk_0x53C8F92CF78772BF(iParam0, iParam1, 180f))
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
	if (unk_0x860AFAABAECF6379(uParam0, 4))
	{
		if (unk_0x4A4902C6AC8DCB7E(uParam0) && !unk_0x68616F991D40E2B5(iParam0))
		{
			if (unk_0x41EEB10CCC2497A8(uParam1, unk_0x77009B1C011405A9(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
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
	if (!unk_0x0BA451447C3B1A8D(uParam1))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	if (unk_0xD18D82BE9A1A5E43(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA4C1E92021F367BD(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x860AFAABAECF6379(uParam0, 2))
	{
		if (unk_0x4A4902C6AC8DCB7E(uParam0))
		{
			if (unk_0x41EEB10CCC2497A8(iParam1, unk_0x77009B1C011405A9(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x53C8F92CF78772BF(unk_0x240654B57CFFBFB3(iParam1), iParam0, 120f) && unk_0xF160EF76D53E7ADB(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x827151D7B70CB853(unk_0x240654B57CFFBFB3(iParam1), 0))
			{
				iVar3 = unk_0x1161215F69587BDA(unk_0x240654B57CFFBFB3(iParam1), 0);
			}
			if (unk_0x5EE181A2C8679F09(iParam0) || func_377(iVar3))
			{
				if (unk_0x41EEB10CCC2497A8(iParam1, unk_0x77009B1C011405A9(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x53C8F92CF78772BF(unk_0x240654B57CFFBFB3(iParam1), iParam0, 120f) && unk_0xF160EF76D53E7ADB(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xFDD233BBDD8E0FFE((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (unk_0xB5BBEB12C77EE430(iParam0, -1) != 0)
			{
				if (unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_183(unk_0x9F92518438215DD0(), iParam0, 1) < 40f)
						{
							if (unk_0x34ECF55CB765457D(unk_0xCFC72E446B0B3AD7(), &uVar1))
							{
								if ((unk_0x2B1914308D0376C8(uVar1) && unk_0x40A2BB73421EA79A(iVar1) == iParam0) || (unk_0x4E178F5D4155391A(iVar1) && unk_0x240654B57CFFBFB3(iVar1) == unk_0xB5BBEB12C77EE430(iParam0, -1)))
								{
									if ((unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()) && unk_0x859C6F0CEF1CB9FE(0, 24)) || (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0x859C6F0CEF1CB9FE(0, 69)))
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
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
		{
			if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iParam0) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0))
			{
				if (unk_0x53C8F92CF78772BF(iParam0, unk_0x9F92518438215DD0(), 90f))
				{
					if (func_182(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x17103F66FBB44C3C();
						}
						else if ((unk_0x17103F66FBB44C3C() - uParam1->f_1) > uParam1->f_3)
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
	if (!func_197(uParam0->f_98, 2))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
		{
			if (func_304(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x8F9D4AA83F37F6E2(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_198(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_380(var uParam0, int iParam1)
{
	if (!func_137(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_169(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_135(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_381()
{
	func_382(&Local_408);
	func_399();
}

void func_382(var uParam0)
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_400(2);
	}
}

int func_383(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_200() && func_380(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0->f_3))
		{
			if (unk_0xFC38B241541883D3(uParam0->f_4, 0))
			{
				if (unk_0x44E080690DA76A2A(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_57(uParam0) == 0 || func_253(uParam0->f_85, 32))
					{
						if (!unk_0x0A93DB64A1052EB6(uParam0->f_4))
						{
							func_133(uParam0, 4160, 0);
						}
						else
						{
							func_133(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_133(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_133(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_133(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x17103F66FBB44C3C() % 1000) < 50)
	{
	}
	return 0;
}

void func_384(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(uParam0->f_8))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_8));
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_9))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_9));
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_10))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_10));
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

void func_386(int iParam0)
{
	func_388(&Local_408, iParam0);
	Local_408.f_410 = 0;
	func_387(&Local_408, 7, 14);
	Local_408.f_23 = { -492.4436f, -290.3657f, 34.486f };
	Local_408.f_33 = 202.0759f;
	Local_408.f_26 = { 856.3766f, 1288.918f, 357.7924f };
	Local_408.f_34 = 162.3f;
	Local_408.f_6 = 1f;
	Local_408.f_29 = { 810.3334f, 1172.413f, 321.8036f };
}

void func_387(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_388(var uParam0, var uParam1)
{
	func_398(1);
	func_195();
	func_6(&(uParam0->f_244));
	func_397(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_197(Global_97358.f_17351, 4))
	{
		func_198(&(Global_97358.f_17351), 4);
	}
	func_392(uParam0);
	func_390(uParam0);
	unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	uParam0->f_102 = (func_389(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x9C53AD1E8A38ADEE("TAXI", 2);
}

int func_389(int iParam0)
{
	return Global_97358.f_17351.f_39[iParam0];
}

void func_390(var uParam0)
{
	switch (func_57(uParam0))
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
			func_396(uParam0, unk_0x073B65E051D2F03E(0, 17));
			iVar0 = func_394((uParam0->f_418.f_2 + unk_0x073B65E051D2F03E(1, 17)), 0, 16);
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
	uParam0->f_2 = unk_0x9F92518438215DD0();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_38() };
	uParam0->f_17 = { func_38() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_167(uParam0, 32, 0);
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96414, unk_0xC2E9075570B5D2B9(), 24);
		Global_96408 = 1;
	}
	else
	{
		StringCopy(&Global_96414, "NULL", 24);
		Global_96408 = 0;
	}
}

void func_399()
{
	unk_0x0880E86251A44B7F(iLocal_850);
	unk_0xE29F0AC6C728DD9C("gestures@m@standing@casual");
	func_108(&uLocal_44, 0, 0);
	unk_0xE60DEFFB2A853900();
}

void func_400(int iParam0)
{
	Global_96071.f_22 = iParam0;
}

