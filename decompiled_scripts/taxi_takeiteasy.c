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
	var uLocal_409 = 0;
	struct<411> Local_410 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	int iLocal_847 = 0;
	struct<3> Local_848[1];
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857 = { 0, 0, 0 } ;
	struct<3> Local_860 = { 0, 0, 0 } ;
	struct<3> Local_863 = { 0, 0, 0 } ;
	struct<3> Local_866 = { 0, 0, 0 } ;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872 = 0;
	float fLocal_873 = 0f;
	float fLocal_874 = 0f;
	float fLocal_875 = 0f;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	bool bLocal_879 = 0;
	bool bLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	char* sLocal_883 = NULL;
	char* sLocal_884 = NULL;
	bool bLocal_885 = 0;
	struct<28> Local_886 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 5;
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
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
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
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 1097859072;
	var uLocal_960 = 1500;
	var uLocal_961 = 45;
	var uLocal_962 = 1103626240;
	var uLocal_963 = 5;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
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
	uLocal_77 = unk_0x1DBB027CE7ACD07B();
	uLocal_78 = unk_0xEAEAFA9E24F1C4E1();
	Local_83 = { 500f, 500f, 500f };
	iLocal_852 = joaat("a_m_y_soucent_04");
	Local_854 = { -1230.55f, -896.7814f, 11.11059f };
	Local_857 = { 58.8213f, 293.848f, 109.6124f };
	Local_860 = { 62.7742f, 307.4984f, 109.981f };
	Local_863 = { 0f, 0f, 0f };
	Local_866 = { 0f, 0f, 0f };
	iLocal_869 = 1;
	fLocal_873 = 0f;
	fLocal_874 = 12f;
	sLocal_884 = "random@drunk_driver_1";
	if (unk_0x4B4BD87E3D30C50D(67))
	{
		func_416(2);
		func_415();
	}
	unk_0xD80ABA7495D14FDA(1);
	func_402();
	while (true)
	{
		if (unk_0x1F2158D615BC4B25(Local_410.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_410);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x77F050A399DB77ED();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x77F050A399DB77ED());
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
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x77F050A399DB77ED());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
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
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_401(&Local_410))
	{
		func_400(&Local_410);
		if (Local_410.f_410 > 0)
		{
			if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
			{
			}
			if (func_399(&Local_410, 0))
			{
				func_397();
			}
		}
		else if (func_396(&Local_410, 31) > 5f)
		{
			func_416(2);
			func_415();
		}
	}
	else
	{
		func_395(&Local_410);
		func_361(&Local_410, &uLocal_957);
		func_360(&Local_410, &uLocal_871, 0);
		func_359(&Local_410);
		if (Local_410.f_410 > 2 && iLocal_847 == 0)
		{
			if (!func_358(&Local_410))
			{
				func_325();
			}
			else
			{
				func_319(&Local_410, "Taxi Not Driveable", func_324(&Local_410));
			}
		}
		if (Local_410.f_410 == 9 && iLocal_847 == 0)
		{
			func_295(&Local_410, 0, 0);
			func_293();
			if (bLocal_879)
			{
				if (func_292())
				{
					func_319(&Local_410, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_410.f_410)
		{
			case 0:
				func_291(&(Local_848[0 /*3*/]), "TAXI_SC_BN_01", 100);
				func_290(&Local_410, &Local_848);
				func_287();
				func_286(&Local_410, 16, 4f, 0);
				func_284(&Local_410, Local_857, Local_860, "TaxiOtis", iLocal_852, 135.3f, 40f);
				func_282(&Local_410);
				func_281(&Local_410, 1);
				break;
			
			case 1:
				if (func_279())
				{
					func_278();
					func_258();
					func_257(&Local_410);
					Local_410.f_14 = { Local_857 };
					func_281(&Local_410, 3);
				}
				break;
			
			case 3:
				if (func_252(&Local_410, 1))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(Local_410.f_3))
					{
						unk_0x5F2AACB0122E1554(Local_410.f_3, 3, 1, 0, 0);
						unk_0x5F2AACB0122E1554(Local_410.f_3, 4, 1, 0, 0);
						unk_0x5F2AACB0122E1554(Local_410.f_3, 0, 1, 0, 0);
						unk_0xCAB5098DD2DF915A(Local_410.f_3, 1024, 1);
						unk_0xCAB5098DD2DF915A(Local_410.f_3, 131072, 1);
					}
					func_251(&Local_410, 1, 0);
					func_281(&Local_410, 5);
				}
				break;
			
			case 5:
				if (func_221(&Local_410, 0, 1109393408))
				{
					func_281(&Local_410, 15);
				}
				break;
			
			case 15:
				if (func_220(&Local_410))
				{
					Local_410.f_17 = { Local_854 };
					func_217(&Local_410, 9, 1, 0, 0);
					func_216(&Local_410);
					Local_410.f_46 = unk_0x070BBD7287E8E744(Local_410.f_4);
					func_215();
					switch (func_214(&Local_410))
					{
						case 2:
							sLocal_883 = "vomit_van";
							break;
						
						case 0:
							sLocal_883 = "vomit_low";
							break;
						
						case 1:
							sLocal_883 = "vomit_outside";
							break;
					}
					func_281(&Local_410, 9);
				}
				if (unk_0x968EA16107097324(Local_410.f_4, 0))
				{
					if (!unk_0xE5FADE1166052251(Local_410.f_2, Local_410.f_4, 0))
					{
						func_212(&Local_410);
						func_281(&Local_410, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_882)
				{
					if ((func_211(&Local_410, 0) || func_211(&Local_410, 2)) || func_210(&Local_410, 2))
					{
						iLocal_882 = 1;
					}
				}
				if (func_207(&Local_410, 1086324736) && iLocal_847 == 1)
				{
					if (iLocal_853 != 0)
					{
						unk_0x36E5A7148737A1F4(iLocal_853, 0);
						iLocal_853 = 0;
					}
					unk_0xE2CB8488CFA42209(Local_410.f_3);
					bLocal_879 = true;
				}
				switch (iLocal_847)
				{
					case 0:
						if (func_189(&Local_410, 1086324736, 1097859072))
						{
							func_187(&uLocal_916);
							func_186(&Local_886, 3, 0);
							unk_0x296CDA10C549A502(&(Local_410.f_9));
							func_184(&Local_410);
							func_175(&(Local_410.f_244), Local_410.f_144, "txm1_arrive", 9, 0, 0, 0);
							func_281(&Local_410, 22);
						}
						if ((((func_174(&Local_410) >= 2 && unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) < 1) && !unk_0x398B253A9754B132(Local_410.f_4)) && !(unk_0x9FEF6A1312D545B2(Local_410.f_4) <= -145f || unk_0x9FEF6A1312D545B2(Local_410.f_4) >= 145f)) && !bLocal_879)
						{
							if (func_173())
							{
								func_171();
								func_217(&Local_410, 61, 1, 0, 0);
							}
							Local_410.f_76 = 0;
							iLocal_847 = 1;
						}
						if (unk_0x06F36936289C5EC8(Local_410.f_0))
						{
							unk_0xFE65076A204F9258(Local_410.f_0, 0);
							unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
						}
						break;
					
					case 1:
						if (!bLocal_879)
						{
							func_168(&(Local_410.f_3));
						}
						if (func_165())
						{
							if (bLocal_880)
							{
								func_217(&Local_410, 62, 1, 0, 0);
								iLocal_847 = 0;
							}
							else
							{
								func_217(&Local_410, 63, 1, 0, 0);
								iLocal_847 = 0;
							}
							unk_0xBA6758C5B23DAE05(1);
						}
						if (!func_160(&Local_410))
						{
							func_148(&Local_410, 1);
							if (!unk_0x116E9F29D23ADBBE(unk_0x7F3E348C0892D8D2()))
							{
								unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
							}
						}
						else if (unk_0xA427F05DB896EEBE(Local_410.f_4, Local_410.f_17, 2f, 2f, 20f, false, 1, 0))
						{
							unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, 0);
						}
						break;
				}
				break;
			
			case 22:
				if (!func_173())
				{
					if (bLocal_879)
					{
						func_147(0);
					}
					else
					{
						func_147(1);
						func_146(&Local_410, 0);
					}
					func_281(&Local_410, 27);
				}
				break;
			
			case 27:
				if (func_137(&Local_410, 1))
				{
					func_136(&Local_410);
					func_217(&Local_410, 104, 1, 1, 0);
					func_281(&Local_410, 29);
				}
				break;
			
			case 28:
				if (func_104(&uLocal_409, &Local_410, &(Local_410.f_3), &uLocal_840, 1))
				{
					func_217(&Local_410, 104, 1, 1, 0);
					func_281(&Local_410, 29);
				}
				break;
			
			case 29:
				if (func_77(&Local_410, &uLocal_964))
				{
					func_10(1, &Local_410, 1);
					func_281(&Local_410, 30);
				}
				if (!unk_0x1E80C02AC16B6622(Local_410.f_3))
				{
					if (func_9(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0xD214B72C983BCE75(Local_410.f_3, 60, 1);
					}
				}
				break;
			
			case 30:
				if (!unk_0x1E80C02AC16B6622(Local_410.f_3))
				{
					if (func_9(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0xD214B72C983BCE75(Local_410.f_3, 60, 1);
					}
					if (func_9(Local_410.f_3, Local_410.f_29, 1) < 1f)
					{
						func_415();
					}
				}
				else
				{
					func_415();
				}
				break;
			}
	}
}

float func_9(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		return -1f;
	}
	return unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam0, 1), Param1, iParam4);
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!unk_0x1E80C02AC16B6622(uParam1->f_3))
		{
			unk_0x1706625EBCDDEBF9(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_49(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_400(uParam0);
	if (func_173())
	{
		func_47();
	}
	func_45();
	unk_0xA1E3A2CCF985EE86();
	unk_0x4ACCE973F9C3CA3B(1);
	func_42(0);
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		unk_0xD1CF9849336C4ED5(uParam0->f_4, 0);
		unk_0xAB08E0AE50DC39E0(uParam0->f_4);
		unk_0xF290DF09A88A384C(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 1);
	if (func_33())
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
	}
	unk_0x87B88BB971295A97(1);
	func_24(0, 1, 1, 0);
	unk_0x488AF65D7EDB6B4A(1);
	unk_0x1B40500A7841D6AB(1);
	if (unk_0x06F36936289C5EC8(*uParam0))
	{
		unk_0xFE65076A204F9258(*uParam0, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xBA6758C5B23DAE05(1);
	}
	if (func_23(Global_99250.f_17715, 4))
	{
		func_21(&(Global_99250.f_17715), 4);
		unk_0x5416146016E39BF7(func_20(), 0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	unk_0xD5A53B898943F331("gestures@m@standing@casual");
	unk_0xD5A53B898943F331("oddjobs@taxi@");
	unk_0xD5A53B898943F331("oddjobs@towingcome_here");
	if (unk_0x3A691B47D5DE2593())
	{
		func_16(uParam0->f_411);
	}
	if (!unk_0x116E9F29D23ADBBE(unk_0x7F3E348C0892D8D2()))
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	}
	unk_0x2DF5B2306F459B20(unk_0xF2DB717A73826179((func_12(&uLocal_90) * 1000f)), 12, 0);
}

float func_12(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

bool func_14(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!unk_0x9D14A941038EF8A3(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)
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

void func_18(var uParam0)
{
	unk_0xAFFDDD7B4B7B9A29(uParam0->f_51[0]);
}

void func_19(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_3))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
		{
			if (!unk_0xB42592B9FFEB5EDE(uParam0->f_3, 0))
			{
				unk_0x0956105C59379117(uParam0->f_3);
			}
			unk_0x9526D9575C237F2F(uParam0->f_3, 0);
			unk_0x329C14474C072D19(255, uParam0->f_413, joaat("player"));
			if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x6354DB3EEA5E310C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x6354DB3EEA5E310C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x6354DB3EEA5E310C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x6354DB3EEA5E310C(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xA29D53AF339F4CD0(&(uParam0->f_3));
		}
	}
}

int func_20()
{
	return joaat("taxi");
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_32(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_31())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_32(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_25(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_25(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
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
	if (Global_1315888[iVar1] == 1)
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

int func_29()
{
	return Global_1312746;
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0xDEFA1942C5A5271A(unk_0x7F3E348C0892D8D2()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0xB1A77D5C890711F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0xB1A77D5C890711F9(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_38(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_38(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x5180C92481E9EE03(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xE30BFE65C731538B(Var0, Var3, 1);
		unk_0xCAD115BFE67B1D72();
	}
}

Vector3 func_38(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_39(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_40(Param0, func_41(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		unk_0x6AABDED602B11FF1(Var0, Var3, iParam3, 1);
	}
}

bool func_40(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_41()
{
	struct<3> Var0;
	
	return Var0;
}

void func_42(int iParam0)
{
	if (Global_14571)
	{
		func_43(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_31())
	{
		Global_14413.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88372[iVar0 /*17*/] && !Global_88372[iVar0 /*17*/].f_1)
		{
			if (Global_88372[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88372[iVar0 /*17*/].f_5 != 88 && Global_88372[iVar0 /*17*/].f_5 != 89) && Global_88372[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_88372[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_47()
{
	Global_14578 = 0;
	func_48();
}

void func_48()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_99250.f_17715.f_22[0]++;
			func_50("Fares Completed ++ = ", Global_99250.f_17715.f_22[0]);
			break;
		
		case 1:
			Global_99250.f_17715.f_22[1]++;
			func_50("Fares Failed ++ = ", Global_99250.f_17715.f_22[1]);
			break;
		
		case 2:
			Global_99250.f_17715.f_22[2]++;
			func_50("Fares Accepted ++ ", Global_99250.f_17715.f_22[2]);
			break;
		
		case 3:
			Global_99250.f_17715.f_22[3]++;
			func_50("Fares Expired ++ ", Global_99250.f_17715.f_22[3]);
			break;
		
		case 13:
			Global_99250.f_17715.f_22[13]++;
			func_50("Passengers run ++ = ", Global_99250.f_17715.f_22[13]);
			break;
		
		case 14:
			Global_99250.f_17715.f_22[14]++;
			func_50("Passenger Forced to Pay ++ = ", Global_99250.f_17715.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_99250.f_17715.f_22[4])
				{
					Global_99250.f_17715.f_22[4] = iParam1;
					func_50("This distance ", iParam1);
					func_50(" is longer than current best", Global_99250.f_17715.f_22[4]);
				}
				else
				{
					func_50("Longest Distance Not Beat ", Global_99250.f_17715.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_99250.f_17715.f_22[5] = (Global_99250.f_17715.f_22[5] + iParam1);
			func_50("Total Distance w/ Passenger = ", Global_99250.f_17715.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_99250.f_17715.f_22[6]++;
			}
			else
			{
				Global_99250.f_17715.f_22[6] = (Global_99250.f_17715.f_22[6] + iParam1);
			}
			func_50("Wanted Levels ++ = ", Global_99250.f_17715.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_99250.f_17715.f_22[7] = (Global_99250.f_17715.f_22[7] + iParam1);
			}
			else
			{
				Global_99250.f_17715.f_22[7]++;
			}
			func_50("Wanted Levels Lost = ", Global_99250.f_17715.f_22[7]);
			break;
		
		case 8:
			Global_99250.f_17715.f_22[8]++;
			func_50("Taxis wrecked ++ = ", Global_99250.f_17715.f_22[8]);
			break;
		
		case 9:
			Global_99250.f_17715.f_22[9]++;
			func_50("Horn Honked ++ = ", Global_99250.f_17715.f_22[9]);
			break;
		
		case 10:
			Global_99250.f_17715.f_22[10] = (Global_99250.f_17715.f_22[10] + iParam1);
			func_50("Total Money Earned = ", Global_99250.f_17715.f_22[10]);
			break;
		
		case 11:
			Global_99250.f_17715.f_22[11] = (Global_99250.f_17715.f_22[11] + iParam1);
			func_50("Total Tips Earned = ", Global_99250.f_17715.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_99250.f_17715.f_22[12])
			{
				Global_99250.f_17715.f_22[12] = iParam1;
				func_50("New Highest Tip = ", Global_99250.f_17715.f_22[12]);
			}
			else
			{
				func_50("Highest Tip Not Reached = ", Global_99250.f_17715.f_22[12]);
			}
			break;
	}
}

void func_50(char* sParam0, int iParam1)
{
}

void func_51(var uParam0)
{
	func_49(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_416(1);
		func_63(15, 1);
	}
	func_61(&(Global_99250.f_17715), 1024);
	if (!func_23(Global_99250.f_17715, 64))
	{
		func_52(func_59(func_60(uParam0)), 0, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)
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
		func_58((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = iParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_53();
	}
}

void func_53()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_57(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_56() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()
{
	if (func_55(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_55(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

int func_56()
{
	return Global_25115;
}

int func_57(int iParam0, int iParam1)
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_59(int iParam0)
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

int func_60(var uParam0)
{
	return uParam0->f_411;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
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
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_74(&Global_2558981))
	{
		if (func_72(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	func_70(uParam0, (Global_2558980 - 0.5f));
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
	return Global_35700 == iParam0;
}

int func_77(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_173() && func_396(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				}
				func_103(uParam0);
				func_21(&(Global_99250.f_17715), 4096);
				func_101(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_102(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xBBEB613A917D7EE8(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_100(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_94(uParam1, 0))
			{
				func_78(uParam0);
				func_286(uParam0, 0, 0, 0);
				func_100(0);
				iLocal_168 = 7;
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
		func_49(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_80(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xBA16CA557222A92B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x5716C8F12991E399(iVar1, iVar0, 1);
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
					switch (unk_0xD8D50BE3C4300244())
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
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
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
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_82(iParam0);
	if (Global_35700 == 15)
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
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_85() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_85() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_84(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_85() /*10185*/].f_7698.f_10, iParam0);
}

int func_88(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
		func_57(27, iVar1);
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
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_91()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_92()
{
	func_93();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_4(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_3(unk_0x77F050A399DB77ED());
			if (func_5(iVar0) && (!func_76(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_5(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

int func_94(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_98(&(uParam0->f_2));
	}
	unk_0xCA3D1FCD234B8E0B(14);
	unk_0xE636AA747867BC3D(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x618071F6827C232E(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_98(&(uParam0->f_5));
				func_97(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
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
		if (!func_15(&(uParam0->f_5)))
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
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_97(var uParam0, int iParam1)
{
	unk_0x758017413321C628(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4D57F6B69CCB6D95(uParam0->f_9);
	unk_0xBA93E45C163C745D(iParam1);
	unk_0x098CA28C04E62E55();
}

void func_98(var uParam0)
{
	func_99(uParam0, 0f);
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - fParam1);
	unk_0x573691DB812DC8AA(uParam0, 1);
	unk_0xA5F70A8B83BDFA49(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_100(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

void func_101(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x758017413321C628(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0xC976485333F81CE8("STRING");
	unk_0xFC059569EB1C537B(iParam9);
	unk_0x703D2B4B1C7E10B6(sParam1);
	unk_0xC8C5D5B9E15EB2E2();
	unk_0xC976485333F81CE8(sParam7);
	unk_0xA50C1D6E503AA51E(uParam2);
	unk_0xA50C1D6E503AA51E(uParam3);
	unk_0x703D2B4B1C7E10B6(uParam6);
	unk_0xA50C1D6E503AA51E(uParam5);
	unk_0xA50C1D6E503AA51E(iParam4);
	unk_0xC8C5D5B9E15EB2E2();
	unk_0x098CA28C04E62E55();
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
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_49(11, uParam0->f_56);
	func_49(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xB56FEBC510E7E9DE(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_104(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x0B6E83A9A7ED3EBA(*uParam2))
			{
				func_134(uParam1, 320, bParam4);
				unk_0x4FE5EDEAD55F44A3(*uParam2, unk_0xA3746E7F17F47DC2(100, 300));
				func_132(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_49(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x0B6E83A9A7ED3EBA(*uParam2))
			{
				if (!unk_0xB42592B9FFEB5EDE(*uParam2, 0))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0B6E83A9A7ED3EBA(*uParam2))
			{
				func_111(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_110(uParam1->f_2, *uParam2))
				{
					if (unk_0x968EA16107097324(uParam1->f_4, 0))
					{
						if (unk_0xCC580427ED36D7F8(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0xCC580427ED36D7F8(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0xB42592B9FFEB5EDE(uParam1->f_2, 0))
						{
							if (unk_0x0C8E94332AE582B1(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x102639E2874F3AA1(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0x0C8E94332AE582B1(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x521CC5B1D76CAD7D(uParam1->f_2, 6))
									{
										if (unk_0x294E2F2AFFA6421E())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x0C8E94332AE582B1(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x102639E2874F3AA1(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0x0C8E94332AE582B1(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x102639E2874F3AA1(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_108(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_108(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_108(&uLocal_45, 0, 0);
			if (!unk_0x0B6E83A9A7ED3EBA(*uParam2))
			{
				if (unk_0xC3B073777B46C61A(uParam1->f_8))
				{
					unk_0x296CDA10C549A502(&(uParam1->f_8));
				}
				unk_0x9526D9575C237F2F(*uParam2, 1);
				unk_0x2A6B9F9E71C479CF(&uVar0);
				unk_0xD3AF1785A0A4CD09(0, 5000);
				unk_0x23E5F4496336DE4E(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0xCEAD0CD7E9A15284(0, 0);
				unk_0x44642CB08FA1637E(uVar0);
				unk_0xB8A8FA4B28E9F423(*uParam2, uVar0);
				unk_0xAAD288E877AC833D(&uVar0);
				unk_0x112CD899A3BEE719(*uParam2, 1);
				func_217(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0xA1E3A2CCF985EE86();
			}
			else
			{
				*uParam0 = 4;
				unk_0xA1E3A2CCF985EE86();
			}
			if (unk_0xC3B073777B46C61A(uParam1->f_8))
			{
				unk_0x296CDA10C549A502(&(uParam1->f_8));
			}
			func_105(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x62E51B6A256A51C2(uParam3->f_6))
			{
				if (unk_0xC3B073777B46C61A(uParam3->f_5))
				{
					unk_0x296CDA10C549A502(&(uParam3->f_5));
				}
				func_184(uParam1);
				func_49(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x0B6E83A9A7ED3EBA(*uParam2))
			{
				unk_0xA29D53AF339F4CD0(uParam2);
				if (unk_0xC3B073777B46C61A(uParam1->f_8))
				{
					unk_0x296CDA10C549A502(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xAE2A4A0F9CAF9436(unk_0x7F3E348C0892D8D2(), 2, 0);
				unk_0x32EB36CA60E96828(unk_0x7F3E348C0892D8D2(), 0);
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
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		uParam1->f_2 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
		unk_0x4FE5EDEAD55F44A3(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0xA3746E7F17F47DC2(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x76876376BBD6A8D8(iParam0, 1067030938, 1069547520) };
	}
	unk_0x573691DB812DC8AA(&(uParam1->f_1), 3);
	unk_0x573691DB812DC8AA(&(uParam1->f_1), 4);
	Var0 = { unk_0x7E5F70487DA3B188(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x668D94B26744D7B2(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xC3B073777B46C61A(uParam1->f_5))
		{
			uParam1->f_5 = func_106(uParam1->f_6);
			unk_0x45C91EE3FC674072(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x45C91EE3FC674072(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_106(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAE5A4FE344CB20A9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x713298C4C81DB8B5(uParam0);
	unk_0x61CD4A0BA23CE782(uVar0, func_107(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
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
	
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0x95147FF3B74E25F0())
	{
		unk_0x88890C87E37B149D(iParam2);
		unk_0xC1AE3FBCCFD4D957("FocusIn");
		unk_0xE0DB271DC0AEA972("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x23D87B2CECB53E05("FocusOut", 0, 0);
			unk_0xBBEB613A917D7EE8(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBA6758C5B23DAE05(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x9D14A941038EF8A3(sVar0))
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x9D14A941038EF8A3(uParam0->f_3))
	{
		if (func_109(uParam0->f_3))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
	if (!unk_0x9D14A941038EF8A3(sVar0))
	{
		if (func_109(sVar0))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
}

bool func_109(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

int func_110(var uParam0, int iParam1)
{
	if (!unk_0x1E80C02AC16B6622(iParam1))
	{
		if (!unk_0x0C8E94332AE582B1(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0xDEB29D8C0ACA57B9(unk_0xAF99169F0F5AE41D(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_112(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_112(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_113(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_113(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		func_108(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_114(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_114(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x95147FF3B74E25F0())
	{
		if (unk_0x3EAC9995EC220C5A() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x9D14A941038EF8A3(iVar0))
	{
		if (!unk_0x4C779B19E6DDCDA2())
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
		func_131();
	}
	if (func_130(iParam1) && unk_0xD0935EF5E40E7EE1(iParam1))
	{
		iVar1 = 0;
		if (unk_0x94195F7CA642F937(iParam1))
		{
			unk_0xD2DFBA27BEB05B8A(unk_0xCBABEE38E5DAB356(iParam1));
			unk_0x35CE8BF24B9ED9E5(unk_0xCBABEE38E5DAB356(iParam1), 1);
			if (unk_0x5CC41245049B745A(unk_0xCBABEE38E5DAB356(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xDD21A3DB256904E7(iParam1))
		{
			unk_0xDB4D81C20F0D62E8(unk_0x2EF671D3645D271D(iParam1));
			if (unk_0x40AB54CC0D06DA29(unk_0x2EF671D3645D271D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0449EE7873816A89(iParam1))
		{
			unk_0x00339EB670499E86(unk_0xC6E0B84C5CAF2C79(iParam1));
			if (unk_0x802384BFCB6F2ECE(unk_0xC6E0B84C5CAF2C79(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x95147FF3B74E25F0())
		{
			if (func_125(uParam0, bParam7, bParam9, 0))
			{
				func_122(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_119(iVar0))
				{
					if ((unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0)) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if ((iVar1 && !unk_0x8E9825258F5C145C()) && uParam8)
						{
							if (!func_109(iVar0))
							{
								func_118(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
								{
									func_117(1);
								}
							}
						}
					}
				}
			}
			else if (func_119(iVar0))
			{
				if (unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0))
				{
					if (((unk_0xF74B69DFD85D7CCE(iParam1) && iVar1) && !unk_0x8E9825258F5C145C()) && uParam8)
					{
						if (!func_109(iVar0))
						{
							func_118(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
							{
								func_117(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x9D14A941038EF8A3(sParam5))
			{
				if (func_109(sParam5))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
			}
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
			{
				if (unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(3) == 3 || unk_0x7DF7F572759C0E1B(3) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(6) == 3 || unk_0x7DF7F572759C0E1B(6) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(4) == 3 || unk_0x7DF7F572759C0E1B(4) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(5) == 3 || unk_0x7DF7F572759C0E1B(5) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(2) == 3 || unk_0x7DF7F572759C0E1B(2) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x4D56690F35D56781() == 3 || unk_0x4D56690F35D56781() == 4)
				{
					func_108(uParam0, iVar0, 1);
				}
			}
			if (!func_125(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_116(uParam0))
				{
					func_115(uParam0);
				}
			}
		}
	}
	else
	{
		func_108(uParam0, iVar0, 0);
	}
}

void func_115(var uParam0)
{
	if (func_130(unk_0x77F050A399DB77ED()))
	{
		unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
	}
	if (unk_0x95147FF3B74E25F0())
	{
		unk_0xBA6758C5B23DAE05(1);
		unk_0x88890C87E37B149D(0);
		unk_0xE0DB271DC0AEA972("HINT_CAM_SCENE");
		unk_0xC1AE3FBCCFD4D957("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x23D87B2CECB53E05("FocusOut", 0, 0);
			unk_0xBBEB613A917D7EE8(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_116(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x3EAC9995EC220C5A()
		{
			return 1;
		}
	}
	return 0;
}

int func_117(bool bParam0)
{
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_99250.f_8667.f_100++;
			}
			return Global_99250.f_8667.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_99250.f_8667.f_101++;
			}
			return Global_99250.f_8667.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_99250.f_8667.f_102++;
			}
			return Global_99250.f_8667.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_118(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

int func_119(char* sParam0)
{
	if (!func_120(1, 1, 0))
	{
		if ((!unk_0x0AAC2160036975D9(sParam0) && func_109(sParam0)) || func_109("CMN_HINT"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		return 0;
	}
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (func_117(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_120(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (unk_0x5E694571CFF565ED())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (unk_0xB1A77D5C890711F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52841)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
		{
			if (unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(3) == 3 || unk_0x7DF7F572759C0E1B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(6) == 3 || unk_0x7DF7F572759C0E1B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(4) == 3 || unk_0x7DF7F572759C0E1B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(5) == 3 || unk_0x7DF7F572759C0E1B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(2) == 3 || unk_0x7DF7F572759C0E1B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x4D56690F35D56781() == 3 || unk_0x4D56690F35D56781() == 4)
			{
				return 0;
			}
			if (unk_0xFC2E3F67FE96D985())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_121()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

void func_122(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		func_108(uParam0, 0, 0);
	}
	if (func_40(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x94195F7CA642F937(iParam1))
		{
			iVar0 = unk_0xCBABEE38E5DAB356(iParam1);
			if (!unk_0xB42592B9FFEB5EDE(iVar0, 0))
			{
				if (unk_0x60F6396843CB51A6(iVar0))
				{
					if (!func_123())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x520A1DEEFD3C2DE4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xBA6758C5B23DAE05(0);
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
	unk_0x1039A85F5DBF8803(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iParam1, -1, iVar3, iVar4);
	unk_0x23D87B2CECB53E05("FocusIn", 0, 0);
	unk_0xCAEDD1A8E831AD36("HINT_CAM_SCENE");
	unk_0xBBEB613A917D7EE8(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3EAC9995EC220C5A();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_123()
{
	return func_124(unk_0x8ACD527A7E574590());
}

int func_124(int iParam0)
{
	if (unk_0xDF1398076E26B0E4(unk_0xF555CE342BA0C333(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_125(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3EAC9995EC220C5A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_116(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x3EAC9995EC220C5A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
					{
						if (!func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3EAC9995EC220C5A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
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
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_128(bParam1, bParam2, bParam3) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || unk_0x7DB98D7C4F2882FD(unk_0x77F050A399DB77ED(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3EAC9995EC220C5A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
					{
						if (func_127(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || unk_0x7DB98D7C4F2882FD(unk_0x77F050A399DB77ED(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_116(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_120(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_131();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_120(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()))
		{
			unk_0x6E20845D23D3DFD4(0, 140, 1);
			unk_0x6E20845D23D3DFD4(0, 80, 1);
			if (unk_0xB533020F2392A380(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_120(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		unk_0x6E20845D23D3DFD4(0, 80, 1);
		if (unk_0x946C2D99209048F1())
		{
			if (unk_0xB533020F2392A380(0, 80))
			{
				unk_0xBA6758C5B23DAE05(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_120(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()))
		{
			unk_0x6E20845D23D3DFD4(0, 140, 1);
			unk_0x6E20845D23D3DFD4(0, 80, 1);
			if (unk_0xECDBFACBE670BD70(0, 80) && unk_0x3EAC9995EC220C5A() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_120(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		unk_0x6E20845D23D3DFD4(0, 80, 1);
		if (unk_0x946C2D99209048F1())
		{
			if (unk_0xECDBFACBE670BD70(0, 80) && unk_0x3EAC9995EC220C5A() > Global_116)
			{
				unk_0xBA6758C5B23DAE05(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0xDD21A3DB256904E7(iParam0))
		{
			if (unk_0x968EA16107097324(unk_0x2EF671D3645D271D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x94195F7CA642F937(iParam0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0xCBABEE38E5DAB356(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0449EE7873816A89(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	unk_0x573691DB812DC8AA(&Global_2284, 4);
}

void func_132(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_400(uParam0);
	}
	if (!unk_0xC3B073777B46C61A(uParam0->f_8))
	{
		uParam0->f_8 = func_133(*uParam1, 0, 0);
	}
	if (!unk_0x9D14A941038EF8A3(sParam2))
	{
		unk_0x45C91EE3FC674072(uParam0->f_8, sParam2);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_107(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_107(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_107(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_134(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		unk_0x9526D9575C237F2F(uParam0->f_3, 0);
		unk_0x1E7F0537BF0E8998(uParam0->f_3);
		unk_0xCAB5098DD2DF915A(uParam0->f_3, 3, 0);
		unk_0xB424F90D6E96BCF8(uParam0->f_3, 17, 1);
		unk_0xE2CB8488CFA42209(uParam0->f_3);
		if ((func_9(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_135(uParam0->f_29)) && !bParam2)
		{
			func_136(uParam0);
		}
		else
		{
			unk_0xCAB5098DD2DF915A(uParam0->f_3, 1024, 1);
			unk_0xCAB5098DD2DF915A(uParam0->f_3, 131072, 1);
			unk_0x2A6B9F9E71C479CF(&uVar0);
			unk_0x743E219F0C060EE5(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x47435418FBCE0635(0, 1193033728, 0);
			}
			else
			{
				unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
			}
			unk_0xCEAD0CD7E9A15284(0, 0);
			unk_0x44642CB08FA1637E(uVar0);
			unk_0xB8A8FA4B28E9F423(uParam0->f_3, uVar0);
			unk_0xAAD288E877AC833D(&uVar0);
		}
		unk_0x112CD899A3BEE719(uParam0->f_3, 1);
	}
}

int func_135(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_136(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x2DA164E80FDEE7F2(uParam0->f_3, 84.9058f);
				unk_0x112CD899A3BEE719(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x2DA164E80FDEE7F2(uParam0->f_3, 68.3138f);
				unk_0x112CD899A3BEE719(uParam0->f_3, 1);
			}
			else
			{
				unk_0x47435418FBCE0635(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xE2CB8488CFA42209(uParam0->f_3);
			unk_0xAAD288E877AC833D(&uVar0);
			unk_0x2A6B9F9E71C479CF(&uVar0);
			unk_0x743E219F0C060EE5(0, 0, 0);
			unk_0xCEAD0CD7E9A15284(0, 0);
			unk_0xE3BCB930B62CBDE5(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x597177B712C1E301(0, 1);
				unk_0xE3BCB930B62CBDE5(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x4EAE4E1CC3DD486F(0, 151.7794f, 0);
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x536F7A20D4B5FD1B(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x536F7A20D4B5FD1B(0, uParam0->f_29, 15f, 20000);
				unk_0x47435418FBCE0635(0, 1193033728, 0);
			}
			else
			{
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x86A43F1FB9C445CA(uParam0->f_29, 15f, 1))
			{
				unk_0x536F7A20D4B5FD1B(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x47435418FBCE0635(0, 1193033728, 0);
			}
			unk_0x44642CB08FA1637E(uVar0);
			unk_0xB8A8FA4B28E9F423(uParam0->f_3, uVar0);
			unk_0xAAD288E877AC833D(&uVar0);
		}
		unk_0x112CD899A3BEE719(uParam0->f_3, 1);
	}
}

int func_137(var uParam0, bool bParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (func_145(uParam0) && func_142(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_141(uParam0, 2097152))
				{
					func_138(uParam0);
				}
			}
			else
			{
				func_138(uParam0);
			}
		}
		else if (!func_145(uParam0))
		{
			if (bParam1)
			{
				if (func_141(uParam0, 2097152))
				{
					if (unk_0x49C650267EDFEBC6(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x49C650267EDFEBC6(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(var uParam0)
{
	struct<3> Var0;
	
	if (func_135(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_139(uParam0, Var0);
}

void func_139(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && unk_0xBF0744BF24FE8D11(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_140(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x365CA2781A1728CB(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xA2490B3CE6382FBB(Var0, Param1, 0) < unk_0xA2490B3CE6382FBB(Var3, Param1, 0) && unk_0x94BE237448EC603E(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x365CA2781A1728CB(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xA2490B3CE6382FBB(Var0, Param1, 0) >= unk_0xA2490B3CE6382FBB(Var3, Param1, 0) && unk_0x94BE237448EC603E(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x365CA2781A1728CB(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x365CA2781A1728CB(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_140(int iParam0, int iParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0) && !unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		if (unk_0xBF0744BF24FE8D11(iParam0, iParam1))
		{
			if (unk_0x07A8845F7F106A38(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0x07A8845F7F106A38(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x07A8845F7F106A38(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0x07A8845F7F106A38(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_141(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_23(uParam0->f_81, iParam1) && !func_173());
	}
	return func_173();
}

int func_142(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_144();
				return 1;
			}
			else if (func_143(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, 256);
				}
				else
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, 0);
				}
			}
			unk_0x2C5F5E306C098BDB(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_143(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x6E20845D23D3DFD4(0, 71, 1);
	unk_0x6E20845D23D3DFD4(0, 72, 1);
	unk_0x6E20845D23D3DFD4(0, 76, 1);
	unk_0x6E20845D23D3DFD4(0, 73, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	if (bParam5)
	{
		unk_0x6E20845D23D3DFD4(0, 75, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 74, 1);
	unk_0x6E20845D23D3DFD4(0, 86, 1);
	unk_0x6E20845D23D3DFD4(0, 81, 1);
	unk_0x6E20845D23D3DFD4(0, 82, 1);
	unk_0x6E20845D23D3DFD4(0, 138, 1);
	unk_0x6E20845D23D3DFD4(0, 136, 1);
	unk_0x6E20845D23D3DFD4(0, 114, 1);
	unk_0x6E20845D23D3DFD4(0, 107, 1);
	unk_0x6E20845D23D3DFD4(0, 110, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 87, 1);
	unk_0x6E20845D23D3DFD4(0, 88, 1);
	unk_0x6E20845D23D3DFD4(0, 113, 1);
	unk_0x6E20845D23D3DFD4(0, 115, 1);
	unk_0x6E20845D23D3DFD4(0, 116, 1);
	unk_0x6E20845D23D3DFD4(0, 117, 1);
	unk_0x6E20845D23D3DFD4(0, 118, 1);
	unk_0x6E20845D23D3DFD4(0, 119, 1);
	unk_0x6E20845D23D3DFD4(0, 131, 1);
	unk_0x6E20845D23D3DFD4(0, 132, 1);
	unk_0x6E20845D23D3DFD4(0, 123, 1);
	unk_0x6E20845D23D3DFD4(0, 126, 1);
	unk_0x6E20845D23D3DFD4(0, 129, 1);
	unk_0x6E20845D23D3DFD4(0, 130, 1);
	unk_0x6E20845D23D3DFD4(0, 133, 1);
	unk_0x6E20845D23D3DFD4(0, 134, 1);
	unk_0xC6CCD4555A546BC0();
	if ((unk_0x3EAC9995EC220C5A() - Global_29) > 500)
	{
		unk_0x29666BB73419DB0E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3EAC9995EC220C5A();
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x092B928D30C0282D(unk_0x2AA05370067DC5AC(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
	{
		unk_0x6B5B946261CEF74B(unk_0x8ACD527A7E574590());
	}
}

int func_145(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_147(bool bParam0)
{
	if (Local_410.f_56 < Local_410.f_58)
	{
		func_217(&Local_410, 103, 1, 0, 0);
	}
	else if (Local_410.f_56 >= Local_410.f_59)
	{
		if (!bParam0)
		{
			func_217(&Local_410, 101, 1, 0, 0);
		}
		else
		{
			func_61(&(Local_410.f_82), 4194304);
			func_217(&Local_410, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		func_217(&Local_410, 102, 1, 0, 0);
	}
	else
	{
		func_61(&(Local_410.f_82), 2097152);
		func_217(&Local_410, 22, 1, 0, 0);
	}
}

void func_148(var uParam0, bool bParam1)
{
	func_159(uParam0, uParam0->f_3);
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_158(uParam0, 14))
			{
				if (func_173())
				{
					func_157(1);
				}
				func_156(uParam0, 11, 1);
				func_151(uParam0, 1);
				func_286(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_145(uParam0))
				{
					if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
					{
					}
					if (unk_0xB42592B9FFEB5EDE(uParam0->f_2, 0))
					{
						if (func_396(uParam0, 15) > 5f)
						{
							func_286(uParam0, 15, 0f, 1);
						}
					}
					if (func_396(uParam0, 14) > 20f)
					{
						func_319(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_396(uParam0, 14) > 20f)
				{
					if (func_149(uParam0->f_4, 1) > 40f)
					{
						func_319(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_319(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_149(int iParam0, int iParam1)
{
	return func_150(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), iParam0, iParam1);
}

float func_150(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

void func_151(var uParam0, bool bParam1)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xC3B073777B46C61A(uParam0->f_8))
			{
				unk_0xBE97057E01D4909F(uParam0->f_8, 0);
				unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
				func_155(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xC3B073777B46C61A(uParam0->f_9))
			{
				unk_0xBE97057E01D4909F(uParam0->f_9, 0);
				unk_0x49AFDB1662AE2A92(uParam0->f_9, 0);
				unk_0xA1E3A2CCF985EE86();
				if (func_145(uParam0))
				{
					func_217(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_155(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_152(uParam0, 0, 0);
		}
		else if (unk_0xC3B073777B46C61A(uParam0->f_10))
		{
			unk_0x296CDA10C549A502(&(uParam0->f_10));
			if (unk_0xC3B073777B46C61A(uParam0->f_8))
			{
				unk_0xBE97057E01D4909F(uParam0->f_8, 255);
				unk_0x49AFDB1662AE2A92(uParam0->f_8, 1);
			}
			else if (unk_0xC3B073777B46C61A(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xBE97057E01D4909F(uParam0->f_9, 0);
					unk_0x49AFDB1662AE2A92(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xBE97057E01D4909F(uParam0->f_9, 255);
					unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
				}
			}
			unk_0xA1E3A2CCF985EE86();
		}
	}
}

void func_152(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_400(uParam0);
	}
	if (!unk_0xC3B073777B46C61A(uParam0->f_10))
	{
		uParam0->f_10 = func_133(uParam0->f_4, 1, 0);
		unk_0x45C91EE3FC674072(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x49AFDB1662AE2A92(uParam0->f_10, 1);
		func_153(uParam0);
		if (bParam2)
		{
			unk_0xA1E3A2CCF985EE86();
			func_217(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_153(var uParam0)
{
	func_286(uParam0, 14, 0, 0);
	func_154();
}

void func_154()
{
	int iVar0;
	
	iVar0 = unk_0xD8D1111EA0CFD1DB();
	if (unk_0x968EA16107097324(iVar0, 0))
	{
		unk_0x44F52B5BE61F39DD(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_23(*uParam1, iParam2))
	{
		unk_0xA1E3A2CCF985EE86();
		func_217(uParam0, iParam3, 1, 0, 0);
		func_61(uParam1, iParam2);
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

bool func_158(var uParam0, int iParam1)
{
	return func_15(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_159(var uParam0, int iParam1)
{
	if (unk_0x1F2158D615BC4B25(iParam1))
	{
		if (!unk_0x1E80C02AC16B6622(iParam1))
		{
			if (unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()))
			{
				if ((unk_0x5B286C8DDCE1CEE6(iParam1, joaat("weapon_stungun"), 0) || unk_0x5B286C8DDCE1CEE6(iParam1, 0, 2)) || unk_0x5B286C8DDCE1CEE6(iParam1, 0, 1))
				{
					func_319(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
			}
		}
	}
}

int func_160(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_158(uParam0, 14))
			{
				func_161(uParam0);
			}
			func_151(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	func_164(uParam0, 14, 0);
	func_164(uParam0, 15, 0);
	func_163();
	if (func_162())
	{
		func_157(0);
	}
}

int func_162()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	var uVar0;
	
	uVar0 = unk_0xD8D1111EA0CFD1DB();
	if (unk_0x968EA16107097324(uVar0, 0))
	{
		unk_0x44F52B5BE61F39DD(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_164(var uParam0, int iParam1, bool bParam2)
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

int func_165()
{
	if (unk_0x968EA16107097324(Local_410.f_4, 0))
	{
		if (iLocal_876 && unk_0x2AA05370067DC5AC(Local_410.f_4) < 5f)
		{
			if (!func_158(&Local_410, 21))
			{
				func_286(&Local_410, 21, 0, 0);
			}
		}
		if (unk_0x2AA05370067DC5AC(Local_410.f_4) >= 5f && func_158(&Local_410, 21))
		{
			func_164(&Local_410, 21, 0);
		}
	}
	if (bLocal_879)
	{
		func_166(&Local_410, 21);
		fLocal_875 = func_396(&Local_410, 21);
		if (fLocal_875 >= fLocal_874)
		{
			bLocal_880 = true;
			return 1;
		}
		else
		{
			bLocal_880 = false;
			return 1;
		}
	}
	return 0;
}

void func_166(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_14(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_167(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_15(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_14(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_167(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_167(var uParam0)
{
	if (func_15(uParam0))
	{
		if (!func_14(uParam0))
		{
			uParam0->f_2 = (func_13(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
			unk_0x573691DB812DC8AA(uParam0, 2);
		}
	}
}

int func_168(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (!unk_0x1E80C02AC16B6622(*uParam0))
	{
		switch (iLocal_870)
		{
			case 0:
				if (!func_173())
				{
					if (func_175(&(Local_410.f_244), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						unk_0x642DDF74A8A2B3BB(*uParam0, sLocal_884, sLocal_883, 8f, -4f, -1, 0, 0, 0, 0, 0);
						if (!unk_0x0B6E83A9A7ED3EBA(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
						{
							switch (func_170(*uParam0, 0))
							{
								case 0:
									unk_0x8534CE5144691854(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 1);
									break;
								
								case 2:
									unk_0x8534CE5144691854(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 3);
									break;
								
								default:
									unk_0x8534CE5144691854(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 3);
									break;
								}
						}
						if (func_158(&Local_410, 10))
						{
							func_164(&Local_410, 10, 0);
						}
						iLocal_870++;
					}
				}
				else if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
				{
				}
				break;
			
			case 1:
				if (unk_0x5EE0E9E5B7A50C2A(*uParam0, sLocal_884, sLocal_883, 3))
				{
					fVar0 = unk_0x91741EBC3EA7D505(*uParam0, sLocal_884, sLocal_883);
					if (bLocal_885)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_876)
						{
							unk_0xDA7A580A35D32348("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
							iLocal_876 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_877)
						{
							unk_0xDA7A580A35D32348("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
							iLocal_877 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_878)
						{
							unk_0xDA7A580A35D32348("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
							iLocal_878 = 1;
							if (!iLocal_881)
							{
								StringCopy(&Var1, "txm1_pukeR1", 24);
								func_169(&Var1);
								func_175(&(Local_410.f_244), "txm1aud", &Var1, 8, 0, 0, 0);
								iLocal_881 = 1;
							}
						}
					}
					if (unk_0x91741EBC3EA7D505(*uParam0, sLocal_884, sLocal_883) > 0.9f)
					{
						iLocal_870++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x5EE0E9E5B7A50C2A(*uParam0, sLocal_884, sLocal_883, 3))
				{
				}
				unk_0x642DDF74A8A2B3BB(*uParam0, sLocal_884, "drunk_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_876 = 0;
				iLocal_870++;
				break;
			
			case 3:
				bLocal_879 = true;
				if (!func_158(&Local_410, 10))
				{
					func_286(&Local_410, 10, 0, 0);
				}
				return 1;
				break;
			}
	}
	return 0;
}

void func_169(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0xB42592B9FFEB5EDE(iParam0, iParam1))
		{
			iVar0 = unk_0xF8D66A34AF0C53A5(iParam0, iParam1);
			if (unk_0x1F2158D615BC4B25(iVar0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
				{
					iVar1 = unk_0xFCD89114F33612D0(unk_0xDF1398076E26B0E4(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x9A2BADF8B8CE0E2A(iVar0, iVar3))
						{
							if (unk_0x07A8845F7F106A38(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_171()
{
	Global_14578 = 0;
	func_172();
}

void func_172()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

int func_173()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

int func_174(var uParam0)
{
	return uParam0->f_104;
}

bool func_175(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_183(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_176(sParam2, iParam3, 0);
}

int func_176(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC9AB825AA4821BDA(0);
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
					func_172();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_182(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_181();
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_180();
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_179())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_31())
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_178();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_177();
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
		func_172();
	}
	return 0;
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_178()
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_179()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_180()
{
	if (func_76(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_92();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_181()
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

bool func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_183(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_184(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_185(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_49(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_49(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_185(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_186(var uParam0, int iParam1, bool bParam2)
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

void func_187(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_188(), 24);
		iVar0++;
	}
	unk_0xA1E3A2CCF985EE86();
	func_47();
}

var func_188()
{
	var uVar0;
	
	return uVar0;
}

int func_189(var uParam0, int iParam1, float fParam2)
{
	if ((((unk_0x398F615441F52A47() && !unk_0x329E4482E654B910()) && !unk_0x8DD09BB8ACF9E623()) && !unk_0x2CC731F9E664299E()) && !uParam0->f_142)
	{
		if (func_206(uParam0))
		{
			func_205(uParam0, &(uParam0->f_43));
			func_202(uParam0);
			func_197(uParam0);
			func_193(uParam0, fParam2, 1117782016);
			func_192(uParam0);
			func_190(uParam0);
			if ((unk_0xF2DB717A73826179(func_396(uParam0, 7)) % 5) == 0 && !iLocal_93)
			{
				iLocal_93 = 1;
			}
			if ((unk_0xF2DB717A73826179(func_396(uParam0, 7)) % 5) == 2 && iLocal_93)
			{
				iLocal_93 = 0;
			}
			return func_207(uParam0, iParam1);
		}
	}
	return 0;
}

void func_190(var uParam0)
{
	float fVar0;
	
	if ((func_145(uParam0) && func_23(uParam0->f_81, 67108864)) && unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
	{
		if ((unk_0x3EAC9995EC220C5A() - iLocal_97) >= 10000)
		{
			fVar0 = func_191(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x3EAC9995EC220C5A();
		}
		if (iLocal_96 >= 2 && !func_173())
		{
			func_217(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x3EAC9995EC220C5A() % 4000) < 50)
		{
			if (!func_145(uParam0))
			{
			}
			if (!func_23(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_191(struct<3> Param0, int iParam3)
{
	return func_9(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), Param0, iParam3);
}

void func_192(var uParam0)
{
	if (unk_0x350800CC91A8701C(unk_0x7F3E348C0892D8D2()) && !func_23(uParam0->f_44, 2))
	{
		func_61(&(uParam0->f_44), 2);
	}
	else if (!unk_0x350800CC91A8701C(unk_0x7F3E348C0892D8D2()) && func_23(uParam0->f_44, 2))
	{
		func_21(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_49(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_217(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_193(var uParam0, float fParam1, float fParam2)
{
	if (func_145(uParam0) && func_23(uParam0->f_44, 4))
	{
		if ((unk_0xFF56D249420BBDD7(uParam0->f_4) || unk_0x2AA05370067DC5AC(uParam0->f_4) < 3f) && func_196(uParam0))
		{
			if (!func_158(uParam0, 2))
			{
				func_194(uParam0, 2);
			}
			else if (func_145(uParam0))
			{
				if (func_396(uParam0, 2) > fParam1 && !func_158(uParam0, 14))
				{
					if (func_35())
					{
						func_217(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_217(uParam0, 48, 1, 0, 0);
					}
					func_286(uParam0, 2, 0, 0);
					if (func_158(uParam0, 10))
					{
						func_286(uParam0, 10, 0, 0);
					}
				}
				if (!func_158(uParam0, 3))
				{
					func_286(uParam0, 3, 0, 0);
				}
				else if (func_396(uParam0, 3) >= fParam2)
				{
					func_164(uParam0, 3, 0);
					func_319(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_158(uParam0, 2))
			{
				func_164(uParam0, 2, 0);
			}
			if (func_158(uParam0, 3))
			{
				func_164(uParam0, 3, 0);
			}
		}
	}
}

void func_194(var uParam0, int iParam1)
{
	func_195(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_195(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_98(uParam0);
	}
}

int func_196(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == unk_0x77F050A399DB77ED())
		{
			return 1;
		}
	}
	return 0;
}

void func_197(var uParam0)
{
	if (!func_23(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
				{
					if (func_396(uParam0, 9) > 1f)
					{
						func_201(uParam0, unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()));
						if (uParam0->f_410 != 22)
						{
							func_217(uParam0, 50, 1, 1, 0);
						}
						func_286(uParam0, 9, 0, 0);
						if (unk_0xC3B073777B46C61A(uParam0->f_9))
						{
							unk_0xBE97057E01D4909F(uParam0->f_9, 0);
							unk_0x49AFDB1662AE2A92(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_173() && func_396(uParam0, 9) > 4f)
				{
					func_217(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_200("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_217(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9EE41011CAC5F6BD(unk_0x7F3E348C0892D8D2(), func_199(uParam0)))
				{
					func_201(uParam0, unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()));
					func_49(6, 0);
				}
				if (!func_198(uParam0))
				{
					if (!unk_0x1066B6347C40B301())
					{
						if (func_396(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_217(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1)
				{
					if (func_200("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xA1E3A2CCF985EE86();
					}
					if (unk_0xC3B073777B46C61A(uParam0->f_9))
					{
						unk_0xBE97057E01D4909F(uParam0->f_9, 255);
						unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
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
						func_217(uParam0, 53, 1, 0, 1);
					}
					func_49(7, func_199(uParam0));
					func_201(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_173())
				{
					func_164(uParam0, 9, 0);
					func_286(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_198(var uParam0)
{
	return uParam0->f_110;
}

int func_199(var uParam0)
{
	return uParam0->f_106;
}

bool func_200(char* sParam0, int iParam1, int iParam2)
{
	unk_0x9C55668C318B45CE(sParam0);
	if (iParam1 == 1)
	{
		unk_0x703D2B4B1C7E10B6(iParam2);
	}
	return unk_0x911D2DB971FD2DC2();
}

void func_201(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_202(var uParam0)
{
	if (func_204(uParam0))
	{
		func_203(uParam0);
	}
}

void func_203(var uParam0)
{
	if (unk_0x20DD658BA67FD6AF() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x4B2B28DE73831DEB();
			func_164(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_396(uParam0, 20) > 3f)
				{
					func_217(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_23(uParam0->f_81, 262144) || !func_23(uParam0->f_81, 1048576))
				{
					if (func_396(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_217(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_23(uParam0->f_82, 67108864))
				{
					if (func_396(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_217(uParam0, 85, 1, 0, 0);
						func_164(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_396(uParam0, 20) > 8f)
				{
					func_217(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_23(uParam0->f_81, 262144) || func_23(uParam0->f_82, 67108864))
			{
				if (!func_158(uParam0, 22))
				{
					func_194(uParam0, 22);
				}
			}
			if (func_158(uParam0, 22) && func_396(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_23(uParam0->f_81, 1048576))
					{
						func_217(uParam0, 84, 1, 0, 0);
						func_164(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_23(uParam0->f_82, 134217728))
					{
						func_217(uParam0, 85, 1, 0, 0);
						func_164(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_204(var uParam0)
{
	return uParam0->f_120;
}

void func_205(var uParam0, var uParam1)
{
	unk_0x3B68093B057BCED0(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_206(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (!unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 1) && !unk_0xB2C4D90B868C2250(uParam0->f_3))
			{
				func_319(uParam0, "Passenger left car.", 9);
			}
			else if (func_160(uParam0))
			{
				if (func_200("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xF497FB718B4C0AC3("TAXI_OBJ_PICKUP");
				}
				if (unk_0x398F615441F52A47())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
				{
				}
				func_148(uParam0, 1);
			}
		}
	}
	return 0;
}

int func_207(var uParam0, int iParam1)
{
	if (func_60(uParam0) == 2)
	{
		if (unk_0xA427F05DB896EEBE(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_209(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1) && func_208(1, 1, 1)) && unk_0x2D081DEC13E78241(uParam0->f_4))
		{
			return func_142(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xA427F05DB896EEBE(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1) && func_208(1, 1, 1)) && unk_0x2D081DEC13E78241(uParam0->f_4))
	{
		return func_142(uParam0, 1, iParam1);
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xACF19F629EE5429B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (bParam0)
		{
			if (unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x8ED30F31356C7C7C(iVar0) < 0.95f || unk_0x8ED30F31356C7C7C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

float func_209(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Param1, iParam4);
}

int func_210(var uParam0, int iParam1)
{
	if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
	{
		if (unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 0))
		{
			if (unk_0x9A2BADF8B8CE0E2A(uParam0->f_4, iParam1))
			{
				if (unk_0x49C650267EDFEBC6(uParam0->f_3, 355471868) != 1)
				{
					unk_0x99D5D33027E2C921(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(var uParam0, int iParam1)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!unk_0x9A2BADF8B8CE0E2A(uParam0->f_4, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_212(var uParam0)
{
	func_213(uParam0, 1000);
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xB28207B96952D994(uParam0->f_3);
		unk_0x9A42ADE14351A508(uParam0->f_3, unk_0x77F050A399DB77ED(), 0);
	}
	func_171();
	func_161(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	if (unk_0x06F36936289C5EC8(*uParam0))
	{
		unk_0xFE65076A204F9258(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x81ADE7722FD45216(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
	}
}

int func_214(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4) && unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("granger") || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rebel")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rebel2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("sandking")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("sandking2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("patriot")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("surfer")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("surfer2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("mesa")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rancherxl")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("tiptruck2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("mixer")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("mixer2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rubble")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("scrap")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("tiptruck")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("armytanker")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("barracks")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("barracks2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("pranger")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("ambulance")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("firetruk")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("policet")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("riot")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("sheriff2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("stockade")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("stockade3")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("biff")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("hauler")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("packer")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("trash")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("benson")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("phantom")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("pounder")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("utillitruck")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("utillitruck2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("utillitruck3")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("dloader")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("flatbed")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("tourbus")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("towtruck")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("towtruck2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("camper")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("taco")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("boxville")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("boxville2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("burrito")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("burrito2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("burrito3")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("burrito4")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("gburrito")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("journey")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("mule")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("mule2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("pony")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rumpo")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("speedo")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("speedo2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("youga"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("phoenix") || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("coquette")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("dune")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("cheetah")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("cogcabrio")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("jb700")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("monroe")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("ninef")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("ninef2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rapidgt")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("rapidgt2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("stinger")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("stingergt")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("ztype")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("banshee")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("bullet")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("carbonizzare")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("comet2")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("entityxf")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("f620")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("infernus")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("surano")) || unk_0xDF1398076E26B0E4(uParam0->f_4) == joaat("voltic"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_215()
{
	func_61(&(Local_410.f_55), 2);
	func_61(&(Local_410.f_55), 4);
	func_61(&(Local_410.f_55), 16);
	func_61(&(Local_410.f_55), 64);
	func_61(&(Local_410.f_55), 256);
	func_61(&(Local_410.f_55), 512);
	func_61(&(Local_410.f_55), 1024);
	func_61(&(Local_410.f_55), 2048);
	func_61(&(Local_410.f_55), 67108864);
	func_61(&(Local_410.f_55), 134217728);
	func_61(&(Local_410.f_55), 536870912);
	func_61(&(Local_410.f_55), 268435456);
	func_61(&(Local_410.f_55), 8192);
	func_61(&(Local_410.f_55), 16384);
	func_61(&(Local_410.f_55), 32768);
	func_61(&(Local_410.f_55), 65536);
	func_61(&(Local_410.f_55), 131072);
	func_61(&(Local_410.f_55), 262144);
	func_61(&(Local_410.f_55), 524288);
	func_61(&(Local_410.f_55), 1048576);
	func_61(&(Local_410.f_55), 2097152);
	func_61(&(Local_410.f_100), 64);
	func_61(&(Local_410.f_100), 2048);
	func_61(&(Local_410.f_100), 128);
	func_61(&(Local_410.f_100), 32);
	func_61(&(Local_410.f_100), 256);
	func_61(&(Local_410.f_100), 8);
	func_61(&(Local_410.f_100), 1);
	func_61(&(Local_410.f_100), 4096);
	func_61(&(Local_410.f_100), 8192);
	unk_0xA5F70A8B83BDFA49(&uLocal_957, 2);
	func_194(&Local_410, 7);
}

void func_216(var uParam0)
{
	unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
	unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	func_213(uParam0, 1000);
}

void func_217(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_286(uParam0, 16, 4f, 0);
		if (func_218(uParam0))
		{
			func_47();
		}
	}
	func_251(uParam0, iParam2, bParam3);
}

int func_218(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_173())
	{
		Var6 = { func_219() };
		if (!unk_0x0AAC2160036975D9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x35D1CAD6ADAB6491(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_169(&Var0);
			if (unk_0x35D1CAD6ADAB6491(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_219()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_220(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if ((unk_0xB2C4D90B868C2250(uParam0->f_3) && (unk_0x3EAC9995EC220C5A() - iLocal_89) > 500) || unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
			{
			}
			func_148(uParam0, 1);
			if (func_33())
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
			}
			if (unk_0x49C650267EDFEBC6(uParam0->f_3, 2106541073) == 1 || unk_0x49C650267EDFEBC6(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xB28207B96952D994(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x9A42ADE14351A508(uParam0->f_3, unk_0x77F050A399DB77ED(), 0);
			}
		}
		else if (unk_0x9EE41011CAC5F6BD(unk_0x7F3E348C0892D8D2(), 0))
		{
			func_249(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xAAD288E877AC833D(&uVar3);
				unk_0x2A6B9F9E71C479CF(&uVar3);
				unk_0xE3BCB930B62CBDE5(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x9A42ADE14351A508(0, uParam0->f_4, 0);
				unk_0x44642CB08FA1637E(uVar3);
				unk_0xB8A8FA4B28E9F423(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_158(uParam0, 14))
			{
				func_161(uParam0);
				func_151(uParam0, 0);
			}
			if (func_158(uParam0, 9))
			{
				func_164(uParam0, 9, 0);
				unk_0xA1E3A2CCF985EE86();
				if (unk_0xC3B073777B46C61A(uParam0->f_8))
				{
					unk_0xBE97057E01D4909F(uParam0->f_8, 255);
					unk_0x49AFDB1662AE2A92(uParam0->f_8, 1);
				}
			}
			if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
			{
				fVar4 = ((unk_0x2AA05370067DC5AC(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_248(uParam0, uParam0->f_3) > 300f)
				{
					func_319(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 1 || ((func_150(unk_0x77F050A399DB77ED(), uParam0->f_3, 1) < 20f && func_209(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_209(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_245(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_244(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_243(uParam0->f_4, uParam0->f_3);
								iVar0 = func_242(uParam0, &iVar1);
								if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
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
										unk_0x743E219F0C060EE5(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x743E219F0C060EE5(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x94BE237448EC603E(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
											{
												unk_0x743E219F0C060EE5(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xE2CB8488CFA42209(uParam0->f_3);
							unk_0xFC7C68B6C728CFEC(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x54724F02F8C029E2(unk_0xAF99169F0F5AE41D(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_196(uParam0))
							{
								unk_0xE2CB8488CFA42209(uParam0->f_3);
							}
							else if (((unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 1 && unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 0) && unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 7) && func_248(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xAAD288E877AC833D(&(uParam0->f_243));
								unk_0x2A6B9F9E71C479CF(&(uParam0->f_243));
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x642DDF74A8A2B3BB(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x642DDF74A8A2B3BB(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x44642CB08FA1637E(uParam0->f_243);
								unk_0xB8A8FA4B28E9F423(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x93F77FC9506BFFF2(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_150(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_241(uParam0, 1))
								{
									unk_0xB28207B96952D994(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_240(uParam0->f_4))
								{
									unk_0xB28207B96952D994(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_238(uParam0);
						if (func_248(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_223(uParam0))
								{
									func_222(uParam0);
									iLocal_89 = unk_0x3EAC9995EC220C5A();
									unk_0x1706625EBCDDEBF9(uParam0->f_3, 26, 1);
									func_164(uParam0, 5, 0);
									unk_0x676BADC6A5FE0543();
									unk_0x3B68093B057BCED0(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xCD7CD612C6234BEC(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x54724F02F8C029E2(unk_0xAF99169F0F5AE41D(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_222(var uParam0)
{
	if (unk_0xC3B073777B46C61A(uParam0->f_8))
	{
		unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
		unk_0x296CDA10C549A502(&(uParam0->f_8));
	}
}

int func_223(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_237("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		func_236();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_234(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_142(uParam0, 0, 1084227584) && func_208(1, 1, 1))
			{
				if (func_241(uParam0, 1))
				{
					iLocal_88 = unk_0x3EAC9995EC220C5A();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_319(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_243(uParam0->f_4, uParam0->f_3);
				iVar9 = func_242(uParam0, &iVar10);
				if (!unk_0x0B6E83A9A7ED3EBA(iVar9))
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
						unk_0x743E219F0C060EE5(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x743E219F0C060EE5(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x94BE237448EC603E(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x0B6E83A9A7ED3EBA(iVar9))
						{
							unk_0x743E219F0C060EE5(iVar9, 0, 4096);
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
			iVar12 = func_233(&(uParam0->f_409), unk_0x03C14E8A9400F2A9(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x03C14E8A9400F2A9(uParam0->f_4, Var0), 1);
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
				func_232(0, 0, 1);
				unk_0xD1C12864812BFA0A(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 3f, 0);
				unk_0xDD10371A3DDE4593(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 25f, 0);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0xA1E3A2CCF985EE86();
				func_230();
				func_251(uParam0, 0, 0);
				Var13 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, Var6) };
				unk_0x0B5F372F57E469AC(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(uParam0->f_3, func_228(uParam0));
				func_227(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xB2849E944D427EE8(*uParam0, unk_0x03C14E8A9400F2A9(uParam0->f_4, Var0));
				unk_0x210DD59678753DFE(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x12A448112D057EB4(*uParam0, 1);
				unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
				unk_0x9371C699D98CE4D6(uParam0->f_3, 0, 0);
				unk_0xFC7C68B6C728CFEC(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_237("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
			{
				if (!unk_0xB42592B9FFEB5EDE(uParam0->f_3, 0))
				{
					unk_0x213DEA03167527BC(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x42FCD0B0BBF90976(uParam0->f_4, func_226(uParam0->f_7), 1);
				}
				unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
				unk_0xFE65076A204F9258(*uParam0, 0);
				unk_0xFE65076A204F9258(uParam0->f_1, 0);
				unk_0x8793DE27084C2CBD(0);
				unk_0xABF261CA61470DE0(0, 1065353216);
				unk_0xCA6D671341405469(800);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0xA1E3A2CCF985EE86();
				func_230();
				func_251(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x398F615441F52A47() && !unk_0x329E4482E654B910())
			{
				func_224(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			unk_0xFE65076A204F9258(*uParam0, 0);
			unk_0xFE65076A204F9258(uParam0->f_1, 0);
			unk_0x8793DE27084C2CBD(0);
			unk_0xABF261CA61470DE0(0, 1065353216);
			func_224(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
			{
				if (unk_0xB2C4D90B868C2250(uParam0->f_3) || unk_0xB42592B9FFEB5EDE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x49C650267EDFEBC6(unk_0x77F050A399DB77ED(), -1794415470) != 1 && unk_0x49C650267EDFEBC6(unk_0x77F050A399DB77ED(), -1794415470) != 0)
				{
					unk_0xFC7C68B6C728CFEC(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_224(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	}
	unk_0x87B88BB971295A97(1);
	func_24(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x488AF65D7EDB6B4A(1);
		unk_0x1B40500A7841D6AB(1);
	}
	func_225(23, 0);
}

void func_225(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x573691DB812DC8AA(&Global_25359, iParam0);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_25359, iParam0);
	}
}

int func_226(int iParam0)
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

void func_227(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x06F36936289C5EC8(*uParam0))
	{
		*uParam0 = unk_0xEDBA42E4C9B7F653(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_228(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_229(unk_0xAF99169F0F5AE41D(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_229(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xA4F14A9B0DDEB91E((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_230()
{
	Global_14578 = 0;
	func_231();
}

void func_231()
{
	if (unk_0x1066B6347C40B301())
	{
		unk_0xCAAFCFEB9BD734FB();
		Global_16723 = 0;
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, iParam0);
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0x571937D113E93996(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 15f);
	}
	unk_0x87B88BB971295A97(iParam1);
	func_42(0);
	func_24(1, 1, iParam2, 0);
	unk_0x488AF65D7EDB6B4A(0);
	unk_0x1B40500A7841D6AB(0);
	func_225(23, 1);
}

int func_233(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x317C1E3F94E69BE1(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x8DF1E9C686542134(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_234(int iParam0)
{
	if (func_235() && unk_0x3EAC9995EC220C5A() >= iParam0 + 1000)
	{
		unk_0x16AA81661A0624FB(500);
		while (!unk_0x2CC731F9E664299E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_42(0);
		func_171();
		return 1;
	}
	return 0;
}

int func_235()
{
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x618071F6827C232E(0, 18) || unk_0x618071F6827C232E(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_236()
{
	if (func_35())
	{
		unk_0x6F86F66DADFA5F86("appInternet");
	}
	if (func_34())
	{
		unk_0x6F86F66DADFA5F86("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_237(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x3EAC9995EC220C5A() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x3EAC9995EC220C5A();
}

void func_238(var uParam0)
{
	var uVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (func_149(uParam0->f_3, 1) > 30f || func_239(uParam0))
			{
				if (unk_0x49C650267EDFEBC6(uParam0->f_3, -1794415470) == 1 || unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) == 1)
				{
					unk_0xAAD288E877AC833D(&uVar0);
					unk_0x2A6B9F9E71C479CF(&uVar0);
					unk_0x9A42ADE14351A508(0, uParam0->f_4, 0);
					unk_0x642DDF74A8A2B3BB(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xE3BCB930B62CBDE5(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x44642CB08FA1637E(uVar0);
					unk_0xB8A8FA4B28E9F423(uParam0->f_3, uVar0);
					func_319(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_239(var uParam0)
{
	if ((unk_0x2AA05370067DC5AC(uParam0->f_4) > 3f && func_396(uParam0, 5) > 15f) || unk_0x398B253A9754B132(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x60E2C281E1F936F4(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x60E2C281E1F936F4(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x60E2C281E1F936F4(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x60E2C281E1F936F4(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xAEA8A39798337671(unk_0xDF1398076E26B0E4(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x66CDC04ACFCBEA94(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x66CDC04ACFCBEA94(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x66CDC04ACFCBEA94(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x66CDC04ACFCBEA94(iParam0, 3))
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

int func_241(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x07A8845F7F106A38(uParam0->f_4, 1);
		iVar0[1] = unk_0x07A8845F7F106A38(uParam0->f_4, 2);
		iVar0[2] = unk_0x07A8845F7F106A38(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x1F2158D615BC4B25(iVar0[iVar4]))
			{
				if (unk_0x0B6E83A9A7ED3EBA(iVar0[iVar4]))
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
		if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_242(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0 = unk_0x07A8845F7F106A38(uParam0->f_4, 1);
		if (unk_0x1F2158D615BC4B25(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x07A8845F7F106A38(uParam0->f_4, 2);
			if (unk_0x1F2158D615BC4B25(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x07A8845F7F106A38(uParam0->f_4, 0);
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x1205624841D11747(iParam0);
	Var0 = { unk_0x1CBD567B051311D0(iParam0, unk_0xAF99169F0F5AE41D(iParam1, 1)) };
	if (unk_0xDF1398076E26B0E4(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0xDF1398076E26B0E4(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x94BE237448EC603E(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x94BE237448EC603E(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x94BE237448EC603E(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x94BE237448EC603E(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_244(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (!unk_0x3D8234BA64B54520(uParam0->f_3) && func_149(uParam0->f_3, 1) < fParam2)
		{
			if (!func_158(uParam0, 5))
			{
				func_286(uParam0, 5, 0, 0);
			}
		}
		else if (func_158(uParam0, 5))
		{
			func_164(uParam0, 5, 0);
		}
		if (((func_396(uParam0, 5) > IntToFloat(iParam1) && unk_0x2AA05370067DC5AC(uParam0->f_4) < fParam4) && !unk_0x3D8234BA64B54520(uParam0->f_3)) || func_149(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_245(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x92DF707AD8147C29(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x92DF707AD8147C29(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xBBDE0E65E0AC2A55(uParam0->f_4, iVar18) };
		Var6 = { unk_0x1CBD567B051311D0(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, Var6) };
	Var3 = { unk_0x03C14E8A9400F2A9(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6C91B546289344DD(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x9526D9575C237F2F(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_150(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x092B928D30C0282D((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x317C1E3F94E69BE1(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x8DF1E9C686542134(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 1 && unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 0)
			{
				unk_0xAAD288E877AC833D(&(uParam0->f_243));
				unk_0x2A6B9F9E71C479CF(&(uParam0->f_243));
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
				unk_0x6962C44DA53439A8(uParam0->f_243, 1);
				unk_0x44642CB08FA1637E(uParam0->f_243);
				unk_0xB8A8FA4B28E9F423(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xA1E3A2CCF985EE86();
			if (uParam0->f_411 != 9)
			{
				if (!func_23(uParam0->f_44, 128))
				{
					func_217(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_246(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xE2CB8488CFA42209(uParam0->f_3);
			unk_0xD0C8DD55C652567F(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xAAD288E877AC833D(&(uParam0->f_243));
			unk_0x2A6B9F9E71C479CF(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x642DDF74A8A2B3BB(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
			unk_0x44642CB08FA1637E(uParam0->f_243);
			unk_0xB8A8FA4B28E9F423(uParam0->f_3, uParam0->f_243);
			unk_0xAAD288E877AC833D(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x93F77FC9506BFFF2(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_246(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x630E218FE7E4C793(uParam0, sParam1, uParam2, func_247(iParam3), 0);
}

int func_247(int iParam0)
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

float func_248(var uParam0, int iParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		if (func_196(uParam0))
		{
			return func_150(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_249(var uParam0)
{
	func_159(uParam0, uParam0->f_3);
	if (func_196(uParam0))
	{
		if (func_158(uParam0, 14))
		{
			func_161(uParam0);
			if (unk_0xC3B073777B46C61A(uParam0->f_10))
			{
				unk_0x296CDA10C549A502(&(uParam0->f_10));
			}
		}
	}
	if (!func_158(uParam0, 9))
	{
		if (unk_0xC3B073777B46C61A(uParam0->f_8))
		{
			unk_0xBE97057E01D4909F(uParam0->f_8, 0);
			unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
		}
		func_286(uParam0, 9, 0, 0);
		func_250("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_250(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0097650483482715(sParam0);
	unk_0x01FD9AF39CDA86AC(iParam1, 1);
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_47();
		func_286(uParam0, 16, 4f, 0);
		unk_0xA1E3A2CCF985EE86();
	}
}

int func_252(var uParam0, int iParam1)
{
	if (!unk_0x77E40DD6F32BC674(2))
	{
		return 0;
	}
	func_256(12);
	if (func_23(uParam0->f_44, 8))
	{
		if (!func_23(uParam0->f_44, 128))
		{
			if (unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()) && !func_23(uParam0->f_44, 256))
			{
				func_61(&(uParam0->f_44), 256);
			}
			if (func_23(uParam0->f_44, 256) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				func_217(uParam0, 135, 1, 0, 1);
				func_61(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_255(uParam0, iParam1))
	{
		if (func_149(uParam0->f_3, 1) < 35f)
		{
			if (!func_23(uParam0->f_44, 8))
			{
				unk_0x9A42ADE14351A508(uParam0->f_3, unk_0x77F050A399DB77ED(), 0);
				func_217(uParam0, 133, 1, 0, 1);
				func_61(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x1E80C02AC16B6622(uParam0->f_3) || unk_0x823B1736EFAFA74A(uParam0->f_3)) || func_149(uParam0->f_3, 1) > 400f)
		{
			func_319(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF8D66A34AF0C53A5(uParam0->f_2, 0);
		unk_0xD1CF9849336C4ED5(uParam0->f_4, 1);
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x2AB597CDC87E0949(uParam0->f_4);
			func_253(uParam0);
			func_49(2, 0);
			bLocal_94 = true;
			func_195(&uLocal_90);
			return 1;
		}
		else
		{
			func_319(uParam0, "No Taxi", 21);
			func_118("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_253(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		if (func_254())
		{
		}
	}
}

int func_254()
{
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			if (unk_0x968EA16107097324(iVar0, 0))
			{
				iVar1 = unk_0xDF1398076E26B0E4(iVar0);
				bVar2 = func_240(iVar0);
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
				if (unk_0xAEA8A39798337671(iVar1))
				{
					if (unk_0x07A8845F7F106A38(iVar0, -1) == unk_0x77F050A399DB77ED())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x1205624841D11747(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_23(uParam0->f_44, 64))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_118("TX_VIP_DMGD", -1);
							if (func_109("TX_VIP_DMGD"))
							{
								func_61(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_23(uParam0->f_44, 32))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_118("TX_VIP_CAR", -1);
							if (func_109("TX_VIP_CAR"))
							{
								func_61(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_23(uParam0->f_44, 16))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_118("TX_VIP_SMALL", -1);
							if (func_109("TX_VIP_SMALL"))
							{
								func_61(&(uParam0->f_44), 16);
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
			func_21(&(uParam0->f_44), 16);
			func_21(&(uParam0->f_44), 64);
			func_21(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_256(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		uVar0 = iParam0;
		unk_0x6AB8498FEFC03AD9(8, &uVar0, 1, 1);
	}
	else if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x28C4EBB8F031876D(8, &cVar1);
	}
}

void func_257(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_22(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_258()
{
	Local_343.f_0 = 0;
	func_275(40763, 40738, 1);
	func_275(40499, 40476, 1);
	func_275(40415, 40390, 1);
	func_275(40319, 40295, 1);
	func_275(40185, 40164, 1);
	func_275(40111, 40086, 1);
	func_275(39944, 39921, 1);
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (func_262(uParam0->f_4))
		{
			func_261(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_262(int iParam0)
{
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA7099FB567A1830C(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x65CE087C4DFAA205(iParam0, 0, 40000) || unk_0x65CE087C4DFAA205(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_264(var uParam0)
{
	if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
	{
		if (func_265(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_265(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_266(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_261(uParam0, 11);
	return 1;
}

int func_267(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (unk_0xAB5BBCD9D3B6625D(uParam0->f_4) && !unk_0x2D081DEC13E78241(uParam0->f_4))
		{
			if (!func_158(uParam0, 25))
			{
				func_286(uParam0, 25, 0, 0);
			}
			else if (func_396(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_158(uParam0, 25))
		{
			func_164(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_269(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		if (unk_0xA23CC05F430FCFBE(uParam0->f_4))
		{
			if (unk_0x65CE087C4DFAA205(uParam0->f_4, 0, 40000) || unk_0x65CE087C4DFAA205(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_271(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		if (unk_0x968EA16107097324(uParam0->f_4, 0))
		{
			if (unk_0xFF56D249420BBDD7(uParam0->f_4))
			{
				if (func_265(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_273(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (func_274(uParam0->f_4))
		{
			func_261(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA7099FB567A1830C(iParam0) == 0f)
	{
		if (!unk_0x968EA16107097324(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x65CE087C4DFAA205(iParam0, 0, 40000) || unk_0x65CE087C4DFAA205(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_275(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_62(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_62(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_277(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_3))
	{
		if ((unk_0x1E80C02AC16B6622(uParam0->f_3) || unk_0x0B6E83A9A7ED3EBA(uParam0->f_3)) || unk_0x01CB02EE3F3F9481(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_278()
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

int func_279()
{
	if (!unk_0x4A4B6FD54C499B7D(iLocal_852))
	{
		func_237("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_869, 1000);
		return 0;
	}
	if (!unk_0xEDE19C6ED6E2F478(uLocal_964))
	{
		return 0;
	}
	if (!func_280(&iLocal_869, 1))
	{
		func_237("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_869, 1000);
		return 0;
	}
	return 1;
}

int func_280(int iParam0, bool bParam1)
{
	if (!unk_0x4A4B6FD54C499B7D(func_20()))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x5263DE3D9A17A86F("gestures@m@standing@casual"))
		{
			func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x5263DE3D9A17A86F("oddjobs@taxi@"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x5263DE3D9A17A86F("oddjobs@towingcome_here"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x5263DE3D9A17A86F("misscommon@response"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x77E40DD6F32BC674(2))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_281(var uParam0, int iParam1)
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

int func_282(var uParam0)
{
	if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
	{
		uParam0->f_8 = func_283(uParam0->f_3, 0, 0);
		unk_0xF8370848FF9633FA(1, 0);
		unk_0x49AFDB1662AE2A92(uParam0->f_8, 1);
		unk_0x45C91EE3FC674072(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xD0C8DD55C652567F(uParam0->f_3, unk_0x77F050A399DB77ED(), -1, 2048, 4);
	}
	return 1;
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

int func_284(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x1F2158D615BC4B25(uParam0->f_3))
	{
		func_285(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_39(uParam0->f_14, 0);
		unk_0xD1C12864812BFA0A(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x04C6D2D48EBD532F(uParam0->f_11);
		}
		else if (unk_0x1F2158D615BC4B25(Global_97962.f_225[0]))
		{
			uParam0->f_3 = Global_97962.f_225[0];
			unk_0x8D429A827A931AC9(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x6665DCC708A346F3(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x58580C834A43EBA2(uParam0->f_3, sParam7);
		unk_0xD214B72C983BCE75(uParam0->f_3, 112, 1);
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			unk_0x26472A6D46CDD76D(uParam0->f_3, 250);
			unk_0x1706625EBCDDEBF9(uParam0->f_3, 32, 0);
			unk_0x1706625EBCDDEBF9(uParam0->f_3, 104, 1);
			unk_0x1706625EBCDDEBF9(uParam0->f_3, 177, 1);
			unk_0x1706625EBCDDEBF9(uParam0->f_3, 116, 0);
			unk_0x72FAE653AFC04E97("TAXI_Passenger", &(uParam0->f_413));
			unk_0x329C14474C072D19(1, uParam0->f_413, joaat("player"));
			unk_0x329C14474C072D19(2, uParam0->f_413, joaat("COP"));
			unk_0x054E434B0AECBDA6(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_285(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x12AABAFFAB9E7CD2(Param1, 20f, 5f, 0);
}

void func_286(var uParam0, int iParam1, float fParam2, bool bParam3)
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

void func_287()
{
	unk_0xC60576ADD1AECA45(iLocal_852);
	unk_0x6E2E777C1AD81C36(sLocal_884);
	unk_0x5F4EA7D1E9029E5C("Taxi_Vomit", 0);
	uLocal_964 = func_289();
	unk_0xAB01A53F64F073E1();
	func_288(1);
}

void func_288(bool bParam0)
{
	unk_0xC60576ADD1AECA45(func_20());
	if (bParam0)
	{
		unk_0x6E2E777C1AD81C36("gestures@m@standing@casual");
	}
	unk_0x6E2E777C1AD81C36("oddjobs@taxi@");
	unk_0x6E2E777C1AD81C36("oddjobs@towingcome_here");
	unk_0x6E2E777C1AD81C36("misscommon@response");
	unk_0xC8C54AFEF8609CEF("TAXI", 2);
	if (!func_23(Global_99250.f_17715, 128))
	{
		func_61(&(Global_99250.f_17715), 128);
	}
}

var func_289()
{
	return unk_0x2F14983962462691("MIDSIZED_MESSAGE");
}

void func_290(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xA5F70A8B83BDFA49(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x573691DB812DC8AA(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xA5F70A8B83BDFA49(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_291(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

int func_292()
{
	float fVar0;
	int iVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A());
	iVar1 = func_174(&Local_410);
	if ((fVar0 - fLocal_873) > 5f)
	{
		fLocal_873 = fVar0;
		if (iLocal_872 == 0)
		{
			if (func_9(Local_410.f_4, Local_410.f_17, 1) < 200f)
			{
				iLocal_872++;
			}
			if (iVar1 >= 5)
			{
				if (!func_173())
				{
					return 1;
				}
				else
				{
					func_171();
					fLocal_873 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!func_173())
			{
				return 1;
			}
			else
			{
				func_171();
				fLocal_873 = 0f;
			}
		}
	}
	return 0;
}

void func_293()
{
	if (func_294(&Local_410, 27, 155f))
	{
	}
}

int func_294(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_158(uParam0, 7))
		{
			func_194(uParam0, 23);
			if (func_396(uParam0, 7) > fParam2 && func_396(uParam0, 23) > 35f)
			{
				func_286(uParam0, 23, 0, 0);
				func_217(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_295(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
		{
			if (bParam2)
			{
				if (func_396(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_217(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_217(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_286(uParam0, 10, 0f, 1);
				}
			}
			else if (func_396(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_217(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_217(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_286(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_396(uParam0, 10) > 30f)
		{
			if (!func_173())
			{
				if (uParam0->f_112)
				{
					func_217(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_217(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_286(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_23(uParam0->f_100, 64))
	{
		if (!func_15(&(Local_190[5 /*10*/].f_6)))
		{
			func_195(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_318(uParam0))
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0, 1);
				func_315(5, uParam0);
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 1))
	{
		if (!func_15(&(Local_190[0 /*10*/].f_6)))
		{
			func_195(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				func_317(uParam0, 1);
				func_315(0, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 2))
	{
		if (!func_15(&(Local_190[1 /*10*/].f_6)))
		{
			func_195(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_312(uParam0))
			{
				func_317(uParam0, 1);
				func_315(1, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 2048))
	{
		if (!func_15(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x1F2158D615BC4B25(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x070BBD7287E8E744(uParam0->f_4);
				func_195(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_96(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_311(uParam0))
			{
				func_317(uParam0, 1);
				func_315(8, uParam0);
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 128))
	{
		if (!func_15(&(Local_190[6 /*10*/].f_6)))
		{
			func_195(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_310(uParam0))
			{
				func_317(uParam0, 1);
				func_315(6, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 32))
	{
		if (!func_15(&(Local_190[4 /*10*/].f_6)))
		{
			func_195(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_309(uParam0))
			{
				func_317(uParam0, 1);
				func_315(4, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 256))
	{
		if (!func_15(&(Local_190[7 /*10*/].f_6)))
		{
			func_195(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_308(uParam0))
			{
				func_315(7, uParam0);
				func_317(uParam0, 1);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 8))
	{
		if (!func_15(&(Local_190[9 /*10*/].f_6)))
		{
			func_195(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
		}
		else if (func_96(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_307(uParam0))
			{
				func_317(uParam0, 1);
				func_315(9, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 16384))
	{
		if (!func_15(&(Local_190[13 /*10*/].f_6)))
		{
			func_195(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_301(uParam0))
			{
				func_317(uParam0, 1);
				func_315(13, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 32768))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_6)))
		{
			func_195(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_300(uParam0))
			{
				func_317(uParam0, 1);
				func_315(14, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 4096))
	{
		if (!func_15(&(Local_190[11 /*10*/].f_6)))
		{
			func_195(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_299(uParam0))
			{
				func_317(uParam0, 1);
				func_315(11, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 8192))
	{
		if (!func_15(&(Local_190[12 /*10*/].f_6)))
		{
			func_195(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_298(uParam0))
			{
				func_317(uParam0, 1);
				func_315(12, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 4))
	{
		if (!func_15(&(Local_190[2 /*10*/].f_6)))
		{
			func_297(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_96(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_296(uParam0))
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0, 1);
				func_315(2, uParam0);
				func_314(uParam0);
			}
		}
	}
}

int func_296(var uParam0)
{
	float fVar0;
	
	if (!unk_0x1E80C02AC16B6622(uParam0->f_2))
	{
		if ((!unk_0x93B76A9A65E87CDF(uParam0->f_2) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x2AA05370067DC5AC(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_195(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_96(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x2AA05370067DC5AC(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_95(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_95(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_297(var uParam0, float fParam1)
{
	if (!func_15(uParam0))
	{
		func_99(uParam0, fParam1);
	}
}

int func_298(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[12 /*10*/].f_3)))
			{
				func_195(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_95(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (unk_0x092B928D30C0282D(Var0.f_0) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_195(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_96(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x092B928D30C0282D(uLocal_342) - unk_0x092B928D30C0282D(Var0.f_0)) < 0f)
			{
				func_95(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_96(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_95(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_300(var uParam0)
{
	if (((((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x10C448DEF4298C4F(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x1F2158D615BC4B25(uParam0->f_5))
			{
				if ((unk_0x2AA05370067DC5AC(uParam0->f_4) > 15f && func_150(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_5) && !unk_0x9A2BADF8B8CE0E2A(uParam0->f_5, -1)))
				{
					func_195(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_96(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_150(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x79AF38B040695E18(uParam0->f_5))
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_96(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x79AF38B040695E18(uParam0->f_5))
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	if (((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_302(uParam0->f_4) && unk_0x2AA05370067DC5AC(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_190[13 /*10*/].f_3)))
			{
				func_195(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_95(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_302(int iParam0)
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
	
	unk_0xEBCB31D6E4BC1DCC(unk_0xAF99169F0F5AE41D(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xEBCB31D6E4BC1DCC(unk_0xAF99169F0F5AE41D(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x6D5BA9781A841CF8(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_306((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_305(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_303(unk_0xAF99169F0F5AE41D(iParam0, 1), Var15, Var18, Var21);
}

int func_303(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_306(Param6 - Param3) };
	Var3 = { func_306(Param9 - Param3) };
	fVar6 = func_304(Param0, Var0);
	fVar7 = func_304(Param3, Var0);
	fVar8 = func_304(Param6, Var0);
	fVar9 = func_304(Param0, Var3);
	fVar10 = func_304(Param3, Var3);
	fVar11 = func_304(Param9, Var3);
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

float func_304(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_305(struct<3> Param0, int iParam3)
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

Vector3 func_306(struct<3> Param0)
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

int func_307(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == unk_0x77F050A399DB77ED())
		{
			if (unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == unk_0x77F050A399DB77ED())
		{
			if (unk_0x398B253A9754B132(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x9FEF6A1312D545B2(uParam0->f_4) <= -145f || unk_0x9FEF6A1312D545B2(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x9FEF6A1312D545B2(uParam0->f_4) <= 35f && unk_0x9FEF6A1312D545B2(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0 = unk_0x67ABEF68FB191DCA(unk_0x8ACD527A7E574590());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[4 /*10*/].f_3)))
			{
				func_195(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_95(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0 = unk_0x233FE7D9ED4E02FA(unk_0x8ACD527A7E574590());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[6 /*10*/].f_3)))
			{
				func_195(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_95(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0xA7C200C3B2989831(uParam0->f_4))
		{
			iVar0 = unk_0x070BBD7287E8E744(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x1E7F0537BF0E8998(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, 72, 1, 0, 1);
				}
				func_95(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (unk_0x092B928D30C0282D(Var0.f_0) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[1 /*10*/].f_3)))
			{
				func_195(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_95(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x2D081DEC13E78241(uParam0->f_4) && unk_0x314654A7E186B6B2(uParam0->f_4))
		{
			if (!func_15(&(Local_190[0 /*10*/].f_3)))
			{
				func_195(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_95(&(Local_190[0 /*10*/].f_3));
				func_98(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_314(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_98(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_286(uParam0, 10, 0f, 1);
	unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
}

void func_315(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_316(uParam1, iParam0);
	func_95(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_318(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x2AA05370067DC5AC(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_190[5 /*10*/].f_3)))
			{
				func_195(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_96(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_95(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_95(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_319(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_171();
	func_416(2);
	Var0 = { func_323() };
	if ((!unk_0x0AAC2160036975D9(&Var0) && func_173()) && !unk_0x35D1CAD6ADAB6491(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xA1E3A2CCF985EE86();
		unk_0x4ACCE973F9C3CA3B(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
		{
			if (!func_145(uParam0))
			{
				if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x6354DB3EEA5E310C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x6354DB3EEA5E310C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x5EE0E9E5B7A50C2A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x6354DB3EEA5E310C(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_286(uParam0, 3, 0, 0);
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
				func_321(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_145(uParam0))
			{
				if (unk_0xFF56D249420BBDD7(uParam0->f_4))
				{
					func_134(uParam0, 4096, 0);
				}
				else
				{
					func_134(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_321(uParam0, &Var0);
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
				func_321(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_321(uParam0, &Var0);
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_321(uParam0, &Var0);
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_49(8, 0);
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
				func_321(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_134(uParam0, 0, 0);
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_49(8, 0);
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
				func_321(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_321(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_49(8, 0);
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
				func_321(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_320(&Var0);
			func_175(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_321(uParam0, &Var0);
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
					func_321(uParam0, &Var0);
				}
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_246(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_49(3, 0);
		}
		func_286(uParam0, 3, 0f, 1);
	}
}

void func_320(char* sParam0)
{
	switch (func_3(unk_0x77F050A399DB77ED()))
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

void func_321(var uParam0, char* sParam1)
{
	if (func_322(uParam0))
	{
		func_175(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_322(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (func_150(unk_0x77F050A399DB77ED(), uParam0->f_3, 1) < 40f && !unk_0x3D8234BA64B54520(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_323()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
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

int func_324(var uParam0)
{
	return uParam0->f_118;
}

void func_325()
{
	if (func_357(&Local_410, &Local_886))
	{
		switch (Local_886.f_27)
		{
			case 0:
				if (Local_410.f_410 == 9)
				{
					if (!func_356(&Local_410) && unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) < 1)
					{
						if (func_355("TX_OBJ_TIE_DO") || unk_0xC3B073777B46C61A(Local_410.f_9))
						{
							Local_886.f_27++;
						}
						else if (func_354(&Local_410) != 10)
						{
							func_217(&Local_410, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (!bLocal_879)
				{
					if (func_354(&Local_410) > 10 && func_354(&Local_410) != 15)
					{
						func_217(&Local_410, 15, 1, 0, 0);
						func_286(&Local_410, 10, 0, 0);
						if (bLocal_885)
						{
						}
					}
				}
				else
				{
					Local_886.f_27++;
				}
				break;
			
			case 2:
				if ((bLocal_879 && iLocal_847 == 0) && !func_173())
				{
					if (func_354(&Local_410) > 10 && func_354(&Local_410) != 16)
					{
						func_217(&Local_410, 16, 1, 0, 0);
						func_286(&Local_410, 10, 0, 0);
						if (bLocal_885)
						{
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	func_326(&Local_410, &uLocal_916, &Local_886, 4, bLocal_885);
}

int func_326(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var6;
	
	func_337(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_336(uParam1))
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
				if (!func_335(uParam0))
				{
					uParam2->f_7 = { func_334(uParam1) };
					func_175(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_173())
				{
					uParam2->f_13 = { func_219() };
					if (unk_0x35D1CAD6ADAB6491(&(uParam2->f_13), &(uParam2->f_7)))
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
				if (func_198(uParam0))
				{
					if (func_173())
					{
						if (unk_0x19D0201F2EBC77D1(unk_0x77F050A399DB77ED()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_286(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_323() };
							func_47();
						}
						else
						{
							uParam2->f_1 = { func_333() };
							func_171();
						}
						if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
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
				else if (func_173())
				{
					uParam2->f_19 = { func_333() };
				}
				else
				{
					func_62(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_331(uParam1);
					func_286(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_158(uParam0, 14) && !func_173()) && !func_198(uParam0)) && func_396(uParam0, 18) > 1f)
				{
					func_286(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_396(uParam0, 18) > 1.5f && !func_173()) && !func_198(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_330(uParam2, &cVar0))
					{
						func_175(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_286(uParam0, 18, 0, 0);
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
						func_329(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_328(&(uParam0->f_244), uParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_286(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_173() && func_396(uParam0, 17) > 1f)
				{
					if (func_396(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (unk_0x35D1CAD6ADAB6491(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_169(&(uParam2->f_1));
							func_175(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_164(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0x0AAC2160036975D9(&(uParam2->f_1)))
						{
							func_327(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
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
					func_62(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_331(uParam1);
					func_286(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_327(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_183(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_176(sParam2, iParam4, 0);
}

int func_328(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_183(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_176(sParam2, iParam4, 0);
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
		if (!func_265(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_169(sParam2);
				}
				else
				{
					func_169(sParam2);
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

int func_330(var uParam0, char* sParam1)
{
	if (unk_0x35D1CAD6ADAB6491(&(uParam0->f_13), "txm3_bant1") || unk_0x35D1CAD6ADAB6491(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x35D1CAD6ADAB6491(&(uParam0->f_13), "txm6_bant3M") || unk_0x35D1CAD6ADAB6491(&(uParam0->f_13), "txm6_bant3T")) || unk_0x35D1CAD6ADAB6491(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_61(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;
	
	iVar0 = func_332(uParam0);
	if (iVar0 > -1)
	{
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_61(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_188(), 24);
	}
}

int func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_333()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x03BBACB5FC5BF182(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x03BBACB5FC5BF182(&(Global_14580[iVar8 /*6*/])))
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

struct<6> func_334(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_61(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_335(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_200("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_200("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_200("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_200("TX_OBJ_GYB_DO", 0, 0) || func_200("TAXI_OBJ_GYB", 0, 0)) || func_200("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_200("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_200("TX_OBJ_CYI_DO", 0, 0) || func_200("TAXI_OBJ_CYI_01", 0, 0)) || func_200("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_200("TX_OBJ_GYN_DO", 0, 0) || func_200("TAXI_OBJ_GYN", 0, 0)) || func_200("TAXI_OBJ_GYN_TG", 0, 0)) || func_200("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_200("TAXI_OBJ_CC1", 0, 0) || func_200("TAXI_OBJ_CC2", 0, 0)) || func_200("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_200("TAXI_OBJ_FTC1", 0, 0) || func_200("TAXI_OBJ_FTC2", 0, 0)) || func_200("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_200("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_200("TAXI_OBJ_GETRUN", 0, 0) || func_200("TAXI_OBJ_DRIVE", 0, 0)) || func_200("TAXI_OBJ_RETURN", 0, 0)) || func_200("TAXI_OBJ_POL", 0, 0)) || func_200("TAXI_OBJ_RUNOUT", 0, 0)) || func_200("TAXI_OBJ_POL", 0, 0));
}

int func_336(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_337(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_335(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_158(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_354(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_353(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
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
						func_352(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_349(uParam0, Var0, func_351(uParam0, 2));
				}
				if (func_23(uParam0->f_98, 4))
				{
					func_286(uParam0, 16, 0, 0);
					func_251(uParam0, 0, 0);
				}
				func_155(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_396(uParam0, 16) > 1f)
				{
					func_157(1);
					if (uParam0->f_411 == 9)
					{
						func_250("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_250("TAXI_VIP_RETURN", 7500, 1);
					}
					func_286(uParam0, 16, 0, 0);
					func_251(uParam0, 0, 0);
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
					func_352(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_246(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_396(uParam0, 16) > func_107(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_173()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_354(uParam0))
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
				func_352(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_353(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_175(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_217(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_286(uParam0, 16, 0, 0);
				func_217(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_23(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_329(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_352(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_286(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_250("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_250("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC3B073777B46C61A(uParam0->f_9))
					{
						uParam0->f_9 = func_348(uParam0->f_17, 1);
					}
					else if (unk_0x9CA5B45C6C4CA8F3(uParam0->f_9) == 0)
					{
						unk_0xBE97057E01D4909F(uParam0->f_9, 255);
						unk_0x15751CDFDEEBDEA2(uParam0->f_9, uParam0->f_17);
						unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
					}
				}
				func_217(uParam0, 10, 1, 0, 0);
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
				func_169(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_246(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC3B073777B46C61A(uParam0->f_9))
					{
						uParam0->f_9 = func_348(uParam0->f_17, 1);
					}
					else if (unk_0x9CA5B45C6C4CA8F3(uParam0->f_9) == 0)
					{
						unk_0xBE97057E01D4909F(uParam0->f_9, 255);
						unk_0x15751CDFDEEBDEA2(uParam0->f_9, uParam0->f_17);
						unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
					}
				}
				func_217(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_347(uParam0, 33554432, Var0, "", 1, 8);
				func_286(uParam0, 16, 0, 0);
				func_217(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_173())
				{
					func_346(uParam0, 0);
					func_61(&(uParam0->f_44), 4);
					func_286(uParam0, 16, 0, 0);
					func_217(uParam0, 13, 0, 0, 0);
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
				func_169(&Var0);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_396(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_169(&Var0);
					}
					func_344(Var0, uParam1);
					func_61(&(uParam0->f_81), 67108864);
					func_286(uParam0, 16, 0, 0);
					func_286(uParam0, 11, 0, 0);
					func_251(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_396(uParam0, 11) > uParam0->f_36)
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
							func_169(&Var0);
						}
					}
					func_344(Var0, uParam1);
					func_286(uParam0, 11, 0, 0);
					func_286(uParam0, 16, 0, 0);
					func_251(uParam0, 0, 0);
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
					func_169(&Var0);
				}
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
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
				func_169(&Var0);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
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
				func_169(&Var0);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_169(&Var0);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				func_61(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 1, 0, 8);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
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
					func_343(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_343(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_344(Var0, uParam1);
				func_353(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 6, 0f, 1);
				func_251(uParam0, 0, 0);
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
					func_343(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_343(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_344(Var0, uParam1);
				func_353(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 6, 0f, 1);
				func_251(uParam0, 0, 0);
				break;
			
			case 12:
				func_250("TAXI_OBJ_GYB", 3500, 1);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_250("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_250("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_250("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_23(uParam0->f_98, 268435456))
				{
					func_250("TAXI_OBJ_CYI_01", 7500, 1);
					func_61(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_169(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_169(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_169(&Var0);
				func_344(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 33:
				func_250("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_23(uParam0->f_82, 8192))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_169(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_344(Var0, uParam1);
						}
						else
						{
							func_352(uParam0, &Var0, 0, 0, 8);
						}
						func_61(&(uParam0->f_82), 8192);
						func_286(uParam0, 16, 0, 0);
						func_286(uParam0, 11, 0, 0);
						func_251(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_23(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_169(&Var0);
					func_352(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_23(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_169(&Var0);
					func_352(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 46, 1, 0, 0);
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
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_251(uParam0, 0, 0);
				break;
			
			case 139:
				func_250("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_217(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA3746E7F17F47DC2(0, 120);
				if (!func_23(uParam0->f_82, 268435456))
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
					func_61(&(uParam0->f_82), 268435456);
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
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA3746E7F17F47DC2(0, 100);
				if (!func_23(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_61(&(uParam0->f_82), 268435456);
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
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_250("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_251(uParam0, 0, 0);
				func_217(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_173())
				{
					func_250("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_251(uParam0, 0, 0);
					func_217(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_250("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_251(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_23(uParam0->f_81, 1))
				{
					func_342(uParam0, 1, Var0, "_sick1", 8);
					func_21(&(uParam0->f_81), 2);
				}
				else if (!func_23(uParam0->f_81, 2))
				{
					func_342(uParam0, 2, Var0, "_sick2", 8);
					func_21(&(uParam0->f_81), 1);
				}
				func_353(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_23(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_23(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_61(&(uParam0->f_81), 2097152);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_286(uParam0, 16, 0, 0);
				func_353(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_251(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_353(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_353(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_353(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_23(uParam0->f_81, 4))
				{
					func_342(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_23(uParam0->f_81, 8))
				{
					func_342(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_342(uParam0, 8, Var0, "_turns3", 8);
					func_21(&(uParam0->f_81), 4);
					func_21(&(uParam0->f_81), 8);
				}
				func_353(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_341(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_246(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_175(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
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
				func_353(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_23(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 128);
					func_21(&(uParam0->f_83), 256);
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 256);
					func_21(&(uParam0->f_83), 512);
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 512);
					func_21(&(uParam0->f_83), 128);
					func_286(uParam0, 16, 0, 0);
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_169(&Var0);
					}
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 1);
					func_21(&(uParam0->f_83), 2);
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_169(&Var0);
					}
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_21(&(uParam0->f_83), 4);
					}
					else
					{
						func_21(&(uParam0->f_83), 1);
					}
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_169(&Var0);
					}
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 4);
					func_21(&(uParam0->f_83), 1);
					func_286(uParam0, 16, 0, 0);
				}
				func_353(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_81, 4096))
				{
					func_347(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_23(uParam0->f_81, 8192))
				{
					func_347(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_353(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_81, 16384))
				{
					func_347(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_23(uParam0->f_81, 32768))
				{
					func_347(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_353(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_23(uParam0->f_82, 8))
					{
						func_340(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_23(uParam0->f_82, 16))
					{
						func_340(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_23(uParam0->f_82, 32))
					{
						func_340(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_251(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_286(uParam0, 16, 0, 0);
					func_251(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_23(uParam0->f_81, 65536))
				{
					func_347(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_23(uParam0->f_81, 131072))
				{
					func_347(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_341(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_246(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_23(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 8);
					func_21(&(uParam0->f_83), 16);
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 16);
					func_21(&(uParam0->f_83), 32);
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_21(&(uParam0->f_83), 64);
					}
					else
					{
						func_21(&(uParam0->f_83), 8);
					}
					func_286(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 64);
					func_21(&(uParam0->f_83), 8);
					func_286(uParam0, 16, 0, 0);
				}
				func_353(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
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
					func_352(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_349(uParam0, Var0, func_351(uParam0, 65));
					func_251(uParam0, 0, 0);
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
					func_352(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_349(uParam0, Var0, func_351(uParam0, 66));
					func_251(uParam0, 0, 0);
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
								func_352(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								func_353(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								func_353(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_329(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_353(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_286(uParam0, 16, 0, 0);
								func_251(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_352(uParam0, &Var0, 0, 0, 8);
									func_286(uParam0, 16, 0, 0);
									func_286(uParam0, 11, 0, 0);
									func_251(uParam0, 0, 0);
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
									func_169(&Var0);
									func_352(uParam0, &Var0, 0, 0, 8);
									func_286(uParam0, 16, 0, 0);
									func_286(uParam0, 11, 0, 0);
									func_251(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_217(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_23(uParam0->f_82, 1))
				{
					func_340(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_23(uParam0->f_82, 2))
				{
					func_340(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_23(uParam0->f_82, 4))
				{
					func_340(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_251(uParam0, 0, 0);
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
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_246(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_286(uParam0, 16, 0, 0);
				func_353(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_341(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_246(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_339(uParam0, Var0, 8);
				}
				func_353(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_23(uParam0->f_83, 1024))
				{
					func_61(&(uParam0->f_83), 1024);
					func_286(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 2048))
				{
					func_61(&(uParam0->f_83), 2048);
					func_286(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 4096))
				{
					func_61(&(uParam0->f_83), 4096);
					func_286(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_169(&Var0);
					func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_23(uParam0->f_82, 1024))
				{
					func_340(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_21(&(uParam0->f_82), 2048);
				}
				else if (!func_23(uParam0->f_82, 2048))
				{
					func_340(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 52, 1, 0, 0);
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
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_246(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_341(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_352(uParam0, &Var0, 0, 0, 8);
						func_217(uParam0, 52, 1, 0, 0);
						func_286(uParam0, 16, 0, 0);
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
						func_352(uParam0, &Var0, 0, 0, 8);
						func_286(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_286(uParam0, 16, 0, 0);
					func_251(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_353(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_286(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
				{
					func_250("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_23(uParam0->f_81, 262144))
				{
					func_347(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_23(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_347(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_347(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_353(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_23(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_338(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_23(uParam0->f_82, 134217728))
				{
					func_338(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_353(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 100:
				func_250("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_251(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_169(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_169(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
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
					func_169(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_23(uParam0->f_82, 65536))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
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
						func_169(&Var0);
						func_344(Var0, uParam1);
						func_61(&(uParam0->f_82), 65536);
						func_286(uParam0, 16, 0, 0);
						func_286(uParam0, 11, 0, 0);
						func_251(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_23(uParam0->f_82, 131072))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_169(&Var0);
						func_344(Var0, uParam1);
						func_61(&(uParam0->f_82), 131072);
						func_286(uParam0, 16, 0, 0);
						func_286(uParam0, 11, 0, 0);
						func_251(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_23(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_61(&(uParam0->f_82), 8388608);
				}
				else if (!func_23(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_61(&(uParam0->f_82), 16777216);
				}
				else if (!func_23(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_61(&(uParam0->f_82), 33554432);
				}
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_329(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_169(&Var0);
					func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_344(Var0, uParam1);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_329(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_328(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_61(&(uParam0->f_81), 2097152);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_169(&Var0);
				func_344(Var0, uParam1);
				func_61(&(uParam0->f_81), 67108864);
				func_286(uParam0, 16, 0, 0);
				func_286(uParam0, 11, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_23(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_347(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_246(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_217(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_23(uParam0->f_81, 268435456))
				{
					func_347(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_217(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_250("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_251(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_23(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_347(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
						{
							func_246(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_347(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_217(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_250("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_251(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_175(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_286(uParam0, 16, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_23(uParam0->f_81, 16777216))
				{
					func_347(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_251(uParam0, 0, 0);
				break;
			
			case 88:
				func_250("TAXI_TIEFLEE", 7500, 1);
				func_251(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_23(uParam0->f_98, 536870912))
				{
					func_250("TAXI_OBJ_CYI_1B", 7500, 1);
					func_61(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_251(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_169(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 0, 0);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				func_251(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_352(uParam0, &Var0, 1, 0, 8);
				func_217(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_250("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_217(uParam0, 0, 0, 0, 0);
				func_251(uParam0, 0, 0);
				break;
			}
	}
}

void func_338(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_61(&(uParam0->f_82), iParam1);
	func_286(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_169(&Param2);
	}
	func_175(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_339(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_23(uParam0->f_82, 64))
	{
		func_61(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_23(uParam0->f_82, 128))
	{
		func_61(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xA3746E7F17F47DC2(1, 3), 24);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_286(uParam0, 16, 0, 0);
}

void func_340(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_61(&(uParam0->f_82), iParam1);
	func_286(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_169(&Param2);
		}
	}
	func_175(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_341(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_342(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_61(&(uParam0->f_81), iParam1);
	func_286(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_175(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_265(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_169(sParam2);
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

void func_344(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_345(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_61(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x0AAC2160036975D9(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_346(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_250("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_250("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_250("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_250("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_250("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_250("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_250("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_250("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_250("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_250("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_250("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_250("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_250("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_347(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_61(&(uParam0->f_81), iParam1);
	func_286(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_169(&Param2);
	}
	func_175(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_348(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_107(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

void func_349(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_286(uParam0, 16, 0, 0);
	func_286(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
	{
		unk_0xCA49B63BCA981C6F(uParam0->f_3, &cParam1, func_350(uParam0));
	}
}

char* func_350(var uParam0)
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

char* func_351(var uParam0, int iParam1)
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

bool func_352(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_286(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_286(uParam0, 17, 0f, 1);
	}
	func_251(uParam0, iParam2, 0);
	return func_175(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_353(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_23(*uParam2, 2))
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
		if (func_23(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_23(*uParam2, 4))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_23(*uParam2, 512))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_23(*uParam2, 16))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_23(*uParam2, 64))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_23(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_23(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_23(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_23(*uParam2, 8192))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_23(*uParam2, 16384))
		{
			if (func_23(*uParam2, 4194304))
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
		if (func_23(*uParam2, 32768))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_23(*uParam2, 65536))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_23(*uParam2, 131072))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_23(*uParam2, 262144))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_23(*uParam2, 524288))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_23(*uParam2, 1048576))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_23(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_23(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_23(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_23(*uParam2, 67108864))
		{
			if (func_23(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_23(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_23(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_23(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_23(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_354(var uParam0)
{
	return uParam0->f_416;
}

int func_355(char* sParam0)
{
	if (!unk_0x9D14A941038EF8A3(sParam0))
	{
		if (func_200(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(var uParam0)
{
	if (func_173())
	{
		return 1;
	}
	if (func_158(uParam0, 17))
	{
		return 1;
	}
	if (func_158(uParam0, 14))
	{
		return 1;
	}
	if (func_198(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_357(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_158(uParam0, 9));
}

bool func_358(var uParam0)
{
	return uParam0->f_117;
}

void func_359(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x1F2158D615BC4B25(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_265(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_265(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_265(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_62(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x3EAC9995EC220C5A();
							}
						}
						else
						{
							func_22(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_265(Local_343.f_1[iVar0 /*4*/], 4) && !func_265(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_62(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_319(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_360(var uParam0, var uParam1, bool bParam2)
{
	if (!func_23(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x0AAC2160036975D9(&(uParam0->f_124)) && func_173())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_173())
				{
					StringCopy(&(uParam0->f_124), func_188(), 24);
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

int func_361(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_158(uParam0, 27))
	{
		func_194(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_396(uParam0, 27) > 5f)
	{
		if (func_388(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_286(uParam0, 27, 0, 0);
			func_286(uParam0, 10, 0, 0);
			func_386(uParam0, &uVar0, uParam1);
		}
		func_383(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_362(uParam0);
	}
	if ((((!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()) && (unk_0x06F36936289C5EC8(*uParam0) && !unk_0xFF10EEA93744C96A(*uParam0))) && (unk_0x06F36936289C5EC8(uParam0->f_1) && !unk_0xFF10EEA93744C96A(uParam0->f_1))) && !unk_0x5C62F8B9BBEC5A43()) && !func_173())
	{
		if (func_396(uParam0, 26) > 10f)
		{
			func_164(uParam0, 26, 0);
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
		}
	}
	else if (func_158(uParam0, 26))
	{
		func_164(uParam0, 26, 0);
	}
	return 0;
}

void func_362(var uParam0)
{
	if (!func_382(uParam0->f_429))
	{
		uParam0->f_429 = func_381();
		func_372(&(uParam0->f_429), 0, 0, unk_0xA3746E7F17F47DC2(4, 7), 0, 0, 0);
	}
	else if (func_363(uParam0->f_429))
	{
		func_319(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_363(int iParam0)
{
	return func_364(func_381(), iParam0);
}

int func_364(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_382(iParam1) || !func_382(iParam0))
	{
		return 1;
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
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_365(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_366(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_367(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_368(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_369(int iParam0)
{
	return iParam0 & 15;
}

var func_370(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_371(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_371(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_370(*uParam0);
	iVar1 = func_369(*uParam0);
	iVar2 = func_368(*uParam0);
	iVar3 = func_367(*uParam0);
	iVar4 = func_366(*uParam0);
	iVar5 = func_365(*uParam0);
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
	iVar6 = func_380(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_380(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_373(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_373(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_379(uParam0, iParam1);
	func_378(uParam0, iParam2);
	func_377(uParam0, iParam3);
	func_376(uParam0, iParam5);
	func_375(uParam0, iParam4);
	func_374(uParam0, iParam6);
}

void func_374(var uParam0, int iParam1)
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

void func_375(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_369(*uParam0);
	iVar1 = func_370(*uParam0);
	if (iParam1 < 1 || iParam1 > func_380(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_376(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_377(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_378(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_379(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_380(int iParam0, int iParam1)
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

int func_381()
{
	var uVar0;
	
	func_379(&uVar0, unk_0x624CC88A8815545E());
	func_378(&uVar0, unk_0xD3D98375D5CA69E4());
	func_377(&uVar0, unk_0x5C5157A539753532());
	func_375(&uVar0, unk_0xCB12BC5A618B995B());
	func_376(&uVar0, unk_0x9746D90F14C930B9());
	func_374(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

int func_382(int iParam0)
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
	iVar0 = func_365(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_366(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_367(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_370(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_369(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_368(iParam0);
	if (iVar5 < 1 || iVar5 > func_380(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_383(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_385()) && !func_196(uParam0)) || ((uParam0->f_411 != 9 && func_255(uParam0, 1)) && !func_196(uParam0)))
		{
			uVar0 = func_384(uParam0->f_4);
			unk_0x98A0065C157ED63F(&uVar0);
			uParam0->f_4 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			unk_0x8D429A827A931AC9(uParam0->f_4, 1, 0);
			func_161(uParam0);
			func_151(uParam0, 0);
		}
	}
}

var func_384(var uParam0)
{
	return uParam0;
}

int func_385()
{
	int iVar0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			if (unk_0x968EA16107097324(iVar0, 0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) == unk_0x77F050A399DB77ED())
				{
					if (unk_0x3CE8DE6EBE766C15(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_386(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_387(uParam0, 0, 1))
			{
				func_319(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_387(uParam0, 0, 4))
			{
				func_319(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_387(uParam0, 0, 8))
			{
				func_319(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_387(uParam0, 1, 1))
			{
				func_319(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_387(uParam0, 0, 1))
			{
				func_319(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_23(*uParam2, 2) && func_145(uParam0))
			{
				func_319(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_387(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (!unk_0x3D8234BA64B54520(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_217(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_217(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_388(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x77F050A399DB77ED();
	if (!unk_0x0B6E83A9A7ED3EBA(iVar0) && !unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (!func_23(*uParam2, 1))
		{
			if (func_394(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_23(*uParam2, 2))
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_23(*uParam2, 4))
		{
			if (func_392(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_23(*uParam2, 8))
		{
			if (func_391(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_23(*uParam2, 128);
		if (bParam4)
		{
			if (func_389(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_23(*uParam2, 16))
		{
			if (func_389(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (iParam7 && unk_0xCC580427ED36D7F8(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x070BBD7287E8E744(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x070BBD7287E8E744(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xD8D1111EA0CFD1DB();
		if (!unk_0x0B6E83A9A7ED3EBA(uVar0))
		{
			if (unk_0xCC580427ED36D7F8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xD8D1111EA0CFD1DB();
		if (!unk_0x0B6E83A9A7ED3EBA(uVar1))
		{
			if (unk_0xCC580427ED36D7F8(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (unk_0xC5C7DFE5BAB3BB22(iParam0))
			{
				if (unk_0x69C3D6B9D12B0293(iParam0) == unk_0x77F050A399DB77ED())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xA427F05DB896EEBE(iParam0, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x03CD213BEF8ECB90(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x98186B9FCCFA0ADD(iParam0))
		{
			return 1;
		}
	}
	if (func_390(unk_0x77F050A399DB77ED(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xCD7683F575A67B31(iParam0) && func_149(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xB42592B9FFEB5EDE(iParam0, 0))
		{
			if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), unk_0xF8D66A34AF0C53A5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), iParam0))
		{
			return 1;
		}
		if (!unk_0x0B6E83A9A7ED3EBA(uParam1))
		{
			if (unk_0xCC580427ED36D7F8(iParam1, unk_0x77F050A399DB77ED(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x587BE7B13B3A93BF(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x102639E2874F3AA1(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(iParam0, 1), unk_0xAF99169F0F5AE41D(iParam1, 1)) < 2.5f)
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x521CC5B1D76CAD7D(uParam0, 4))
	{
		if (unk_0x102639E2874F3AA1(uParam0) && !unk_0xE8A6EC34A210142F(iParam0))
		{
			if (unk_0xA427F05DB896EEBE(uParam1, unk_0xAF99169F0F5AE41D(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x0B6E83A9A7ED3EBA(uParam1))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	if (unk_0x5E9F3856F26E26EC(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xBD4E01D7376FA838(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x521CC5B1D76CAD7D(uParam0, 2))
	{
		if (unk_0x102639E2874F3AA1(uParam0))
		{
			if (unk_0xA427F05DB896EEBE(iParam1, unk_0xAF99169F0F5AE41D(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x6867AF84AF12BEFC(unk_0xCBABEE38E5DAB356(iParam1), iParam0, 120f) && unk_0xC76E1A07C6272140(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0xCBABEE38E5DAB356(iParam1), 0))
			{
				iVar3 = unk_0xF8D66A34AF0C53A5(unk_0xCBABEE38E5DAB356(iParam1), 0);
			}
			if (unk_0x7E0A8E0015B69AA4(iParam0) || func_393(iVar3))
			{
				if (unk_0xA427F05DB896EEBE(iParam1, unk_0xAF99169F0F5AE41D(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x6867AF84AF12BEFC(unk_0xCBABEE38E5DAB356(iParam1), iParam0, 120f) && unk_0xC76E1A07C6272140(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x1B2F50A8C0266050((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (unk_0x07A8845F7F106A38(iParam0, -1) != 0)
			{
				if (unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_150(unk_0x77F050A399DB77ED(), iParam0, 1) < 40f)
						{
							if (unk_0x007994E31CDF504F(unk_0x8ACD527A7E574590(), &uVar1))
							{
								if ((unk_0xDD21A3DB256904E7(uVar1) && unk_0x2EF671D3645D271D(iVar1) == iParam0) || (unk_0x94195F7CA642F937(iVar1) && unk_0xCBABEE38E5DAB356(iVar1) == unk_0x07A8845F7F106A38(iParam0, -1)))
								{
									if ((unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) && unk_0xE721293454745300(0, 24)) || (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xE721293454745300(0, 69)))
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

int func_394(int iParam0, var uParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
		{
			if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iParam0) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0))
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_149(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x3EAC9995EC220C5A();
						}
						else if ((unk_0x3EAC9995EC220C5A() - uParam1->f_1) > uParam1->f_3)
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

void func_395(var uParam0)
{
	if (!func_23(uParam0->f_98, 2))
	{
		if (unk_0x968EA16107097324(uParam0->f_4, 0))
		{
			if (func_9(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x3B97B8A2AAD89A9D(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_61(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_396(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_195(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_96(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_397()
{
	func_398(&Local_410);
	func_415();
}

void func_398(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_416(2);
	}
}

int func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_173() && func_396(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
		{
			if (unk_0x968EA16107097324(uParam0->f_4, 0))
			{
				if (unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_265(uParam0->f_85, 32))
					{
						if (!unk_0xFF56D249420BBDD7(uParam0->f_4))
						{
							func_134(uParam0, 4160, 0);
						}
						else
						{
							func_134(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_134(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_134(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_134(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
	{
	}
	return 0;
}

void func_400(var uParam0)
{
	if (unk_0xC3B073777B46C61A(uParam0->f_8))
	{
		unk_0x296CDA10C549A502(&(uParam0->f_8));
	}
	if (unk_0xC3B073777B46C61A(uParam0->f_9))
	{
		unk_0x296CDA10C549A502(&(uParam0->f_9));
	}
	if (unk_0xC3B073777B46C61A(uParam0->f_10))
	{
		unk_0x296CDA10C549A502(&(uParam0->f_10));
	}
}

int func_401(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_402()
{
	func_404(&Local_410, 1);
	Local_410.f_410 = 0;
	func_403(&Local_410, 2, 4);
	Local_410.f_23 = { 31.3927f, 229.9863f, 108.45f };
	Local_410.f_33 = 340.5f;
	Local_410.f_26 = { -1239.992f, -902.0005f, 10.8342f };
	Local_410.f_34 = 305.2155f;
	Local_410.f_29 = { -1224.093f, -907.3411f, 11.3263f };
}

void func_403(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_404(var uParam0, int iParam1)
{
	func_414(1);
	func_163();
	func_6(&(uParam0->f_244));
	func_413(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_23(Global_99250.f_17715, 4))
	{
		func_61(&(Global_99250.f_17715), 4);
	}
	func_408(uParam0);
	func_406(uParam0);
	unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	uParam0->f_102 = (func_405(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xC8C54AFEF8609CEF("TAXI", 2);
}

int func_405(int iParam0)
{
	return Global_99250.f_17715.f_39[iParam0];
}

void func_406(var uParam0)
{
	switch (func_60(uParam0))
	{
		case 0:
			func_407(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_407(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_407(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_407(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_407(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_407(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_407(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_407(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_407(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_407(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_407(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_408(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_412(uParam0, 3);
			func_411(uParam0, 14);
			break;
		
		case 1:
			func_412(uParam0, 14);
			func_411(uParam0, 8);
			break;
		
		case 2:
			func_412(uParam0, 8);
			func_411(uParam0, 7);
			break;
		
		case 3:
			func_412(uParam0, 15);
			func_411(uParam0, 6);
			break;
		
		case 4:
			func_412(uParam0, 0);
			func_411(uParam0, 3);
			break;
		
		case 5:
			func_412(uParam0, 6);
			func_411(uParam0, 7);
			break;
		
		case 6:
			func_412(uParam0, 8);
			func_411(uParam0, 15);
			break;
		
		case 7:
			func_412(uParam0, 8);
			func_411(uParam0, 14);
			break;
		
		case 8:
			func_412(uParam0, 7);
			func_411(uParam0, 15);
			break;
		
		case 9:
			func_412(uParam0, unk_0xA3746E7F17F47DC2(0, 17));
			iVar0 = func_410((uParam0->f_418.f_2 + unk_0xA3746E7F17F47DC2(1, 17)), 0, 16);
			func_411(uParam0, iVar0);
			func_409(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_409(var uParam0)
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

int func_410(int iParam0, int iParam1, int iParam2)
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

void func_411(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_412(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_413(var uParam0)
{
	uParam0->f_2 = unk_0x77F050A399DB77ED();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_41() };
	uParam0->f_17 = { func_41() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_164(uParam0, 32, 0);
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98306, unk_0x664B47C58CE8A0A4(), 24);
		Global_98300 = 1;
	}
	else
	{
		StringCopy(&Global_98306, "NULL", 24);
		Global_98300 = 0;
	}
}

void func_415()
{
	if (unk_0x5263DE3D9A17A86F(sLocal_884))
	{
		unk_0xD5A53B898943F331(sLocal_884);
	}
	if (iLocal_853 != 0)
	{
		unk_0x36E5A7148737A1F4(iLocal_853, 0);
		iLocal_853 = 0;
	}
	unk_0xB1FD6AC96E6B866D();
	unk_0x2F798BA2098FDADE();
}

void func_416(int iParam0)
{
	Global_97962.f_22 = iParam0;
}

