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
	uLocal_77 = unk_0xCFFCC3E6689F1F45();
	uLocal_78 = unk_0xA655262EB9B9A8C4();
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
	if (unk_0x24862A9CDC8F8874(67))
	{
		func_416(2);
		func_415();
	}
	unk_0x5B0FC38A6C315E32(1);
	func_402();
	while (true)
	{
		if (unk_0x95CCECA3948CFE7B(Local_410.f_2))
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
	uParam0->f_2 = unk_0xC8B93D94F8954288();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xC8B93D94F8954288());
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
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0xC8B93D94F8954288());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
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
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
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
			if ((unk_0x693EBB4F13506457() % 1000) < 50)
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
					if (!unk_0xB6900B8CB0ABBD2B(Local_410.f_3))
					{
						unk_0x8C245572EDB27776(Local_410.f_3, 3, 1, 0, 0);
						unk_0x8C245572EDB27776(Local_410.f_3, 4, 1, 0, 0);
						unk_0x8C245572EDB27776(Local_410.f_3, 0, 1, 0, 0);
						unk_0xF36EA652E4A6CED0(Local_410.f_3, 1024, 1);
						unk_0xF36EA652E4A6CED0(Local_410.f_3, 131072, 1);
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
					Local_410.f_46 = unk_0xD3A4099D2845F152(Local_410.f_4);
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
				if (unk_0x5D42322C7DB888D0(Local_410.f_4, 0))
				{
					if (!unk_0x0C7EC810080F0459(Local_410.f_2, Local_410.f_4, 0))
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
						unk_0x939ED2D95F7BD8A8(iLocal_853, 0);
						iLocal_853 = 0;
					}
					unk_0x5124C5FA52D2AF3E(Local_410.f_3);
					bLocal_879 = true;
				}
				switch (iLocal_847)
				{
					case 0:
						if (func_189(&Local_410, 1086324736, 1097859072))
						{
							func_187(&uLocal_916);
							func_186(&Local_886, 3, 0);
							unk_0x5356E82C1E5E0C44(&(Local_410.f_9));
							func_184(&Local_410);
							func_175(&(Local_410.f_244), Local_410.f_144, "txm1_arrive", 9, 0, 0, 0);
							func_281(&Local_410, 22);
						}
						if ((((func_174(&Local_410) >= 2 && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 1) && !unk_0x96EA03DFD7BAC0B4(Local_410.f_4)) && !(unk_0xAEDE3A850F882A3C(Local_410.f_4) <= -145f || unk_0xAEDE3A850F882A3C(Local_410.f_4) >= 145f)) && !bLocal_879)
						{
							if (func_173())
							{
								func_171();
								func_217(&Local_410, 61, 1, 0, 0);
							}
							Local_410.f_76 = 0;
							iLocal_847 = 1;
						}
						if (unk_0x844838E5D8A21336(Local_410.f_0))
						{
							unk_0x5CF5A880ED809DDA(Local_410.f_0, 0);
							unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
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
							unk_0xE3B1382567189443(1);
						}
						if (!func_160(&Local_410))
						{
							func_148(&Local_410, 1);
							if (!unk_0x0332C5816E3E66D5(unk_0x1A96BAEAC664567A()))
							{
								unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
							}
						}
						else if (unk_0xA0C23498D8E0BB93(Local_410.f_4, Local_410.f_17, 2f, 2f, 20f, false, 1, 0))
						{
							unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 0, 0);
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
				if (!unk_0x2DC9BA2299B45EA6(Local_410.f_3))
				{
					if (func_9(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0x1F64302AA4F597A7(Local_410.f_3, 60, 1);
					}
				}
				break;
			
			case 30:
				if (!unk_0x2DC9BA2299B45EA6(Local_410.f_3))
				{
					if (func_9(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0x1F64302AA4F597A7(Local_410.f_3, 60, 1);
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
	if (unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		return -1f;
	}
	return unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iParam0, 1), Param1, iParam4);
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!unk_0x2DC9BA2299B45EA6(uParam1->f_3))
		{
			unk_0xC778754E36F3FFD6(uParam1->f_3, 317, 1);
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
	unk_0x7846F09C04C34C46();
	unk_0x9F4AA6F234E8A860(1);
	func_42(0);
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		unk_0x0CE9795408B4B974(uParam0->f_4, 0);
		unk_0xA3F455B6FE911AFE(uParam0->f_4);
		unk_0x7DDB2C923BACAEED(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 1);
	if (func_33())
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	unk_0x5B712287C9AB5D4B(1);
	func_24(0, 1, 1, 0);
	unk_0xB7709513BF7C1AC0(1);
	unk_0xB1DF6C0157E453DE(1);
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		unk_0x5CF5A880ED809DDA(*uParam0, 0);
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		unk_0xE3B1382567189443(1);
	}
	if (func_23(Global_100976.f_17731, 4))
	{
		func_21(&(Global_100976.f_17731), 4);
		unk_0xB7FAA1C591A4664F(func_20(), 0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	unk_0x3ECF1E41E6ED71D8("gestures@m@standing@casual");
	unk_0x3ECF1E41E6ED71D8("oddjobs@taxi@");
	unk_0x3ECF1E41E6ED71D8("oddjobs@towingcome_here");
	if (unk_0xDC6347A8EBB9281E())
	{
		func_16(uParam0->f_411);
	}
	if (!unk_0x0332C5816E3E66D5(unk_0x1A96BAEAC664567A()))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
	}
	unk_0x40727F747B3C8C8F(unk_0xF2DB717A73826179((func_12(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_13(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_14(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!unk_0x544AEDB4A15228FF(&uVar0))
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
	unk_0x63627D553583C0BD(uParam0->f_51[0]);
}

void func_19(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0->f_3))
	{
		if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
		{
			if (!unk_0x277ECDA23D8CCEB4(uParam0->f_3, 0))
			{
				unk_0x0DD14A17813B744B(uParam0->f_3);
			}
			unk_0xAAD662D7E0D59F4C(uParam0->f_3, 0);
			unk_0x6CCF5F545348D54E(255, uParam0->f_413, joaat("player"));
			if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xE80E983DE27B676E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xE80E983DE27B676E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xE80E983DE27B676E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xE80E983DE27B676E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x459A6F82E024C891(&(uParam0->f_3));
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
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_32(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
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
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_25(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
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
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
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
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
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
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0xC785D435A173C148(unk_0x1A96BAEAC664567A()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("appinternet")) > 0)
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
		unk_0xB7A03E3BBB19D493(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x5C6AA4866046D391(Var0, Var3, 1);
		unk_0xE7E852B69C980E80();
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
		unk_0xE6D99A6809A1F8CE(Var0, Var3, iParam3, 1);
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
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
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
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
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
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

void func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_100976.f_17731.f_22[0]++;
			func_50("Fares Completed ++ = ", Global_100976.f_17731.f_22[0]);
			break;
		
		case 1:
			Global_100976.f_17731.f_22[1]++;
			func_50("Fares Failed ++ = ", Global_100976.f_17731.f_22[1]);
			break;
		
		case 2:
			Global_100976.f_17731.f_22[2]++;
			func_50("Fares Accepted ++ ", Global_100976.f_17731.f_22[2]);
			break;
		
		case 3:
			Global_100976.f_17731.f_22[3]++;
			func_50("Fares Expired ++ ", Global_100976.f_17731.f_22[3]);
			break;
		
		case 13:
			Global_100976.f_17731.f_22[13]++;
			func_50("Passengers run ++ = ", Global_100976.f_17731.f_22[13]);
			break;
		
		case 14:
			Global_100976.f_17731.f_22[14]++;
			func_50("Passenger Forced to Pay ++ = ", Global_100976.f_17731.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_100976.f_17731.f_22[4])
				{
					Global_100976.f_17731.f_22[4] = iParam1;
					func_50("This distance ", iParam1);
					func_50(" is longer than current best", Global_100976.f_17731.f_22[4]);
				}
				else
				{
					func_50("Longest Distance Not Beat ", Global_100976.f_17731.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_100976.f_17731.f_22[5] = (Global_100976.f_17731.f_22[5] + iParam1);
			func_50("Total Distance w/ Passenger = ", Global_100976.f_17731.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_100976.f_17731.f_22[6]++;
			}
			else
			{
				Global_100976.f_17731.f_22[6] = (Global_100976.f_17731.f_22[6] + iParam1);
			}
			func_50("Wanted Levels ++ = ", Global_100976.f_17731.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_100976.f_17731.f_22[7] = (Global_100976.f_17731.f_22[7] + iParam1);
			}
			else
			{
				Global_100976.f_17731.f_22[7]++;
			}
			func_50("Wanted Levels Lost = ", Global_100976.f_17731.f_22[7]);
			break;
		
		case 8:
			Global_100976.f_17731.f_22[8]++;
			func_50("Taxis wrecked ++ = ", Global_100976.f_17731.f_22[8]);
			break;
		
		case 9:
			Global_100976.f_17731.f_22[9]++;
			func_50("Horn Honked ++ = ", Global_100976.f_17731.f_22[9]);
			break;
		
		case 10:
			Global_100976.f_17731.f_22[10] = (Global_100976.f_17731.f_22[10] + iParam1);
			func_50("Total Money Earned = ", Global_100976.f_17731.f_22[10]);
			break;
		
		case 11:
			Global_100976.f_17731.f_22[11] = (Global_100976.f_17731.f_22[11] + iParam1);
			func_50("Total Tips Earned = ", Global_100976.f_17731.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_100976.f_17731.f_22[12])
			{
				Global_100976.f_17731.f_22[12] = iParam1;
				func_50("New Highest Tip = ", Global_100976.f_17731.f_22[12]);
			}
			else
			{
				func_50("Highest Tip Not Reached = ", Global_100976.f_17731.f_22[12]);
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
	func_61(&(Global_100976.f_17731), 1024);
	if (!func_23(Global_100976.f_17731, 64))
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
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = iParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_57(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_56() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
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
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
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
	if (unk_0xE7748C036820596E(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_74(&Global_2559690))
	{
		if (func_72(&Global_2559690, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_2559690, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x345CE5A66E49ED43(iParam0))
		{
			return 0;
		}
		if (unk_0xE7748C036820596E(iParam0))
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
	
	if (unk_0xE7748C036820596E(iParam1))
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
	
	if (unk_0xE7748C036820596E(iParam1))
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
	func_70(uParam0, (Global_2559689 - 0.5f));
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
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				}
				func_103(uParam0);
				func_21(&(Global_100976.f_17731), 4096);
				func_101(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_102(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xC4EE38A4CFF7544C(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
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
	
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_80(Global_100976.f_32519[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x5F0618A5FDAD55C4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x071958EFED9481F5(iVar1, iVar0, 1);
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
					switch (unk_0xFD88B4E9AD4F4CC0())
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
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_100976.f_25033.f_233[iVar2 /*69*/]++;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_1++;
		if (Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 = 0;
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
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_100976.f_25033[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_100976.f_25033.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_100976.f_25033.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_100976.f_25033.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_100976.f_25033.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_100976.f_25033.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_100976.f_25033.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_100976.f_25033.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_100976.f_25033.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_100976.f_25033[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_100976.f_25033.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_100976.f_25033.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_100976.f_25033.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_100976.f_25033.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_100976.f_25033.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_100976.f_25033.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_100976.f_25033.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_100976.f_25033.f_88[iVar0];
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
			unk_0x071958EFED9481F5(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x071958EFED9481F5(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x071958EFED9481F5(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0) || unk_0xDCC86F723E82125E(Global_2097152[func_85() /*10270*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		unk_0x77621132305B133B(&(Global_2097152[func_85() /*10270*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x12F4A48D84A3989D("COUP_RED");
		unk_0xCE59E3E42586D52D(func_84(iParam0));
		unk_0x5EAB76FB4193096C(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0);
	}
	return unk_0xDCC86F723E82125E(Global_2097152[func_85() /*10270*/].f_7698.f_10, iParam0);
}

int func_88(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xE7748C036820596E(27))
	{
		return 0;
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5F0618A5FDAD55C4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x071958EFED9481F5(joaat("num_cash_spent"), iVar1, 1);
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
	
	unk_0x5F0618A5FDAD55C4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x071958EFED9481F5(iParam0, iVar0, 1);
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_91()
{
	int iVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		unk_0x5F0618A5FDAD55C4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_92()
{
	func_93();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_4(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_3(unk_0xC8B93D94F8954288());
			if (func_5(iVar0) && (!func_76(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_5(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

int func_94(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_98(&(uParam0->f_2));
	}
	unk_0x68A38902ADFD05FE(14);
	unk_0x16387DB49A36A0F3(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x8D9008B8900A28D0(2, 201) || uParam0->f_8)
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
			return (func_13(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_97(var uParam0, int iParam1)
{
	unk_0x7C38F93AF52620B1(*uParam0, "SHARD_ANIM_OUT");
	unk_0x65960B4E2ADC9F6D(uParam0->f_9);
	unk_0x512B59C08EAFA3B9(iParam1);
	unk_0xD013AC29829DDC02();
}

void func_98(var uParam0)
{
	func_99(uParam0, 0f);
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_100(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

void func_101(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7C38F93AF52620B1(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x276F16E002D00C0C("STRING");
	unk_0x1AE578B67805BFB7(iParam9);
	unk_0xCE59E3E42586D52D(sParam1);
	unk_0x354E2E7AA52E941F();
	unk_0x276F16E002D00C0C(sParam7);
	unk_0x6DC80A902A91958F(uParam2);
	unk_0x6DC80A902A91958F(uParam3);
	unk_0xCE59E3E42586D52D(uParam6);
	unk_0x6DC80A902A91958F(uParam5);
	unk_0x6DC80A902A91958F(iParam4);
	unk_0x354E2E7AA52E941F();
	unk_0xD013AC29829DDC02();
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
		if (unk_0xDCC86F723E82125E(Local_169.f_4[iVar0 /*3*/], 2))
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
			if (!unk_0xB6900B8CB0ABBD2B(*uParam2))
			{
				func_134(uParam1, 320, bParam4);
				unk_0x90115CB23FA58DD6(*uParam2, unk_0x531444754C426278(100, 300));
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
			if (!unk_0xB6900B8CB0ABBD2B(*uParam2))
			{
				if (!unk_0x277ECDA23D8CCEB4(*uParam2, 0))
				{
					unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xB6900B8CB0ABBD2B(*uParam2))
			{
				func_111(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_110(uParam1->f_2, *uParam2))
				{
					if (unk_0x5D42322C7DB888D0(uParam1->f_4, 0))
					{
						if (unk_0x87D4C731B013290A(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0x87D4C731B013290A(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x277ECDA23D8CCEB4(uParam1->f_2, 0))
						{
							if (unk_0x5534579797ACFD77(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x1E8D3FA42E89ED72(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0x5534579797ACFD77(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x74BBB84E37C71AAC(uParam1->f_2, 6))
									{
										if (unk_0xA4860063B4E6B963())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x5534579797ACFD77(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x1E8D3FA42E89ED72(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0x5534579797ACFD77(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x1E8D3FA42E89ED72(uParam1->f_2))
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
			if (!unk_0xB6900B8CB0ABBD2B(*uParam2))
			{
				if (unk_0x6B4865E08E90ACC5(uParam1->f_8))
				{
					unk_0x5356E82C1E5E0C44(&(uParam1->f_8));
				}
				unk_0xAAD662D7E0D59F4C(*uParam2, 1);
				unk_0x3E2E609450787FFE(&uVar0);
				unk_0x9F3B55DA0D0220DD(0, 5000);
				unk_0x622E764F80DBF8B7(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x2A262C5D2DAD436D(0, 0);
				unk_0x939BC11172AA1303(uVar0);
				unk_0xBFE865E3B513451B(*uParam2, uVar0);
				unk_0xA9351C9309E03069(&uVar0);
				unk_0xF1A02DDEC7E15D6E(*uParam2, 1);
				func_217(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0x7846F09C04C34C46();
			}
			else
			{
				*uParam0 = 4;
				unk_0x7846F09C04C34C46();
			}
			if (unk_0x6B4865E08E90ACC5(uParam1->f_8))
			{
				unk_0x5356E82C1E5E0C44(&(uParam1->f_8));
			}
			func_105(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x88D33FF63088413E(uParam3->f_6))
			{
				if (unk_0x6B4865E08E90ACC5(uParam3->f_5))
				{
					unk_0x5356E82C1E5E0C44(&(uParam3->f_5));
				}
				func_184(uParam1);
				func_49(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0xB6900B8CB0ABBD2B(*uParam2))
			{
				unk_0x459A6F82E024C891(uParam2);
				if (unk_0x6B4865E08E90ACC5(uParam1->f_8))
				{
					unk_0x5356E82C1E5E0C44(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x2C63BF89CC01C6D8(unk_0x1A96BAEAC664567A(), 2, 0);
				unk_0x1C9B7C3360143C4C(unk_0x1A96BAEAC664567A(), 0);
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		uParam1->f_2 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
		unk_0x90115CB23FA58DD6(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x531444754C426278(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x5A20F5607ED8CFE7(iParam0, 1067030938, 1069547520) };
	}
	unk_0x59A0729D503ED758(&(uParam1->f_1), 3);
	unk_0x59A0729D503ED758(&(uParam1->f_1), 4);
	Var0 = { unk_0x9204FE00BC816343(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x0BF6021B7B677E57(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0x6B4865E08E90ACC5(uParam1->f_5))
		{
			uParam1->f_5 = func_106(uParam1->f_6);
			unk_0x8755DAC584918BF9(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x8755DAC584918BF9(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_106(var uParam0)
{
	var uVar0;
	
	if (!unk_0x06A2030124FC73B9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF19CDE403BF1A712(uParam0);
	unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
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
	
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
		{
			return;
		}
	}
	if (unk_0x000CF7FDBE12A995())
	{
		unk_0x2F309AF34613F2FA(iParam2);
		unk_0xEF8DA481DD536EEE("FocusIn");
		unk_0xDB9D78E5137EE7AD("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xD7F5001BB6D13A64("FocusOut", 0, 0);
			unk_0xC4EE38A4CFF7544C(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE3B1382567189443(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x544AEDB4A15228FF(sVar0))
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x544AEDB4A15228FF(uParam0->f_3))
	{
		if (func_109(uParam0->f_3))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
	if (!unk_0x544AEDB4A15228FF(sVar0))
	{
		if (func_109(sVar0))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
}

bool func_109(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

int func_110(var uParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam1))
	{
		if (!unk_0x5534579797ACFD77(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x8EBAC9BC4005929D(unk_0x44C17CCB85A88A1F(iParam1, 1), 15f))
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
	
	if (uParam0->f_1 && unk_0x000CF7FDBE12A995())
	{
		if (unk_0x693EBB4F13506457() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x544AEDB4A15228FF(iVar0))
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
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
	if (func_130(iParam1) && unk_0xA6CD622BBD209756(iParam1))
	{
		iVar1 = 0;
		if (unk_0x96209AADF56E8FE8(iParam1))
		{
			unk_0x9CA8182BDC7D7450(unk_0x4D3C2AC8339BFB4F(iParam1));
			unk_0x6C12B62E76FE9036(unk_0x4D3C2AC8339BFB4F(iParam1), 1);
			if (unk_0xBB4ECE53D1EE4591(unk_0x4D3C2AC8339BFB4F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x18BDAFC0B20C2C9E(iParam1))
		{
			unk_0x7C7A530079E9B9B3(unk_0xE6E6D9800E15A76C(iParam1));
			if (unk_0x6F8903E388F042E0(unk_0xE6E6D9800E15A76C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x09C656419AB67926(iParam1))
		{
			unk_0x397ADCFB3F61354A(unk_0x9F549071D7D4F964(iParam1));
			if (unk_0xE7994FBA4D7CF174(unk_0x9F549071D7D4F964(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x000CF7FDBE12A995())
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
					if ((unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0)) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if ((iVar1 && !unk_0xB45DF29A98EEAD5D()) && uParam8)
						{
							if (!func_109(iVar0))
							{
								func_118(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
				if (unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0))
				{
					if (((unk_0xE77F5DDBC2E96204(iParam1) && iVar1) && !unk_0xB45DF29A98EEAD5D()) && uParam8)
					{
						if (!func_109(iVar0))
						{
							func_118(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
			if (!unk_0x544AEDB4A15228FF(sParam5))
			{
				if (func_109(sParam5))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
			{
				if (unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(3) == 3 || unk_0xA9B6C2A8F9FE269A(3) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
					{
						func_108(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
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
	if (func_130(unk_0xC8B93D94F8954288()))
	{
		unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
	}
	if (unk_0x000CF7FDBE12A995())
	{
		unk_0xE3B1382567189443(1);
		unk_0x2F309AF34613F2FA(0);
		unk_0xDB9D78E5137EE7AD("HINT_CAM_SCENE");
		unk_0xEF8DA481DD536EEE("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xD7F5001BB6D13A64("FocusOut", 0, 0);
			unk_0xC4EE38A4CFF7544C(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x693EBB4F13506457()
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
				Global_100976.f_8683.f_100++;
			}
			return Global_100976.f_8683.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_100976.f_8683.f_101++;
			}
			return Global_100976.f_8683.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_100976.f_8683.f_102++;
			}
			return Global_100976.f_8683.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_118(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

int func_119(char* sParam0)
{
	if (!func_120(1, 1, 0))
	{
		if ((!unk_0xB8A06E7E729EED0A(sParam0) && func_109(sParam0)) || func_109("CMN_HINT"))
		{
			unk_0x9F4AA6F234E8A860(1);
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
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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
	if (unk_0x23F863EF7FB5E687())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52841)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
		{
			if (unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(3) == 3 || unk_0xA9B6C2A8F9FE269A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
			{
				return 0;
			}
			if (unk_0x31D2E9F5F8505E5A())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_121()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

void func_122(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		func_108(uParam0, 0, 0);
	}
	if (func_40(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x96209AADF56E8FE8(iParam1))
		{
			iVar0 = unk_0x4D3C2AC8339BFB4F(iParam1);
			if (!unk_0x277ECDA23D8CCEB4(iVar0, 0))
			{
				if (unk_0xA815CBE767EFA3CB(iVar0))
				{
					if (!func_123())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xAC281E457992D7AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE3B1382567189443(0);
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
	unk_0x4E0A15B03F32C5E5(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), iParam1, -1, iVar3, iVar4);
	unk_0xD7F5001BB6D13A64("FocusIn", 0, 0);
	unk_0x925AE2E6F6E41362("HINT_CAM_SCENE");
	unk_0xC4EE38A4CFF7544C(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x693EBB4F13506457();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_123()
{
	return func_124(unk_0xA34E7C2A5118D638());
}

int func_124(int iParam0)
{
	if (unk_0x6D5BB810CC209E15(unk_0xCF4C00513A86E840(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_125(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x693EBB4F13506457() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
				{
					if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
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
			if ((unk_0x693EBB4F13506457() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
					{
						if (!func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x693EBB4F13506457();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
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
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
				if (!func_128(bParam1, bParam2, bParam3) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || unk_0x8ECA33F4427BCB65(unk_0xC8B93D94F8954288(), 2))
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
			if ((unk_0x693EBB4F13506457() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || unk_0x8ECA33F4427BCB65(unk_0xC8B93D94F8954288(), 2))
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()))
		{
			unk_0x2BE3C7FA4FCCA784(0, 140, 1);
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			if (unk_0x595DCDF66B3BBC26(0, 80))
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x2BE3C7FA4FCCA784(0, 80, 1);
		if (unk_0x07CEEA6E1CE2F6C6())
		{
			if (unk_0x595DCDF66B3BBC26(0, 80))
			{
				unk_0xE3B1382567189443(0);
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()))
		{
			unk_0x2BE3C7FA4FCCA784(0, 140, 1);
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			if (unk_0x69ED83B6DEBA60F9(0, 80) && unk_0x693EBB4F13506457() > Global_116)
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x2BE3C7FA4FCCA784(0, 80, 1);
		if (unk_0x07CEEA6E1CE2F6C6())
		{
			if (unk_0x69ED83B6DEBA60F9(0, 80) && unk_0x693EBB4F13506457() > Global_116)
			{
				unk_0xE3B1382567189443(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x18BDAFC0B20C2C9E(iParam0))
		{
			if (unk_0x5D42322C7DB888D0(unk_0xE6E6D9800E15A76C(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x96209AADF56E8FE8(iParam0))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0x4D3C2AC8339BFB4F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x09C656419AB67926(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	unk_0x59A0729D503ED758(&Global_2284, 4);
}

void func_132(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_400(uParam0);
	}
	if (!unk_0x6B4865E08E90ACC5(uParam0->f_8))
	{
		uParam0->f_8 = func_133(*uParam1, 0, 0);
	}
	if (!unk_0x544AEDB4A15228FF(sParam2))
	{
		unk_0x8755DAC584918BF9(uParam0->f_8, sParam2);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_134(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
	{
		unk_0xAAD662D7E0D59F4C(uParam0->f_3, 0);
		unk_0x0CBE045BBBA5CFDE(uParam0->f_3);
		unk_0xF36EA652E4A6CED0(uParam0->f_3, 3, 0);
		unk_0x1296D571B761D748(uParam0->f_3, 17, 1);
		unk_0x5124C5FA52D2AF3E(uParam0->f_3);
		if ((func_9(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_135(uParam0->f_29)) && !bParam2)
		{
			func_136(uParam0);
		}
		else
		{
			unk_0xF36EA652E4A6CED0(uParam0->f_3, 1024, 1);
			unk_0xF36EA652E4A6CED0(uParam0->f_3, 131072, 1);
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0xE5F6BE3F8E937ACE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
			}
			else
			{
				unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 1000f, -1, 0, 0);
			}
			unk_0x2A262C5D2DAD436D(0, 0);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(uParam0->f_3, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
		unk_0xF1A02DDEC7E15D6E(uParam0->f_3, 1);
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
	
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x765E3FA65D011F03(uParam0->f_3, 84.9058f);
				unk_0xF1A02DDEC7E15D6E(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x765E3FA65D011F03(uParam0->f_3, 68.3138f);
				unk_0xF1A02DDEC7E15D6E(uParam0->f_3, 1);
			}
			else
			{
				unk_0xF7F92ABBE23C8EA8(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x5124C5FA52D2AF3E(uParam0->f_3);
			unk_0xA9351C9309E03069(&uVar0);
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0xE5F6BE3F8E937ACE(0, 0, 0);
			unk_0x2A262C5D2DAD436D(0, 0);
			unk_0x81333BEA4837207C(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x1FB964E9F549AD22(0, 1);
				unk_0x81333BEA4837207C(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x6EAFBB3A7F6ADEA9(0, 151.7794f, 0);
				unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x6C43AC8B5408F1BF(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x6C43AC8B5408F1BF(0, uParam0->f_29, 15f, 20000);
				unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
			}
			else
			{
				unk_0x5323F488E6A1B660(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x5323F488E6A1B660(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xAD158329EB26D8F4(uParam0->f_29, 15f, 1))
			{
				unk_0x6C43AC8B5408F1BF(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
			}
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(uParam0->f_3, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
		unk_0xF1A02DDEC7E15D6E(uParam0->f_3, 1);
	}
}

int func_137(var uParam0, bool bParam1)
{
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
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
					if (unk_0x090C65D5190A249D(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x090C65D5190A249D(uParam0->f_3, 451360105) == 7)
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3) && unk_0x465DC424E3211BBE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xCC31DB73C65552D8(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xCC31DB73C65552D8(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_140(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xD4781E5070EB1F1C(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x4F982ED5336EA899(Var0, Param1, 0) < unk_0x4F982ED5336EA899(Var3, Param1, 0) && unk_0xF6D1796681289C21(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xD4781E5070EB1F1C(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x4F982ED5336EA899(Var0, Param1, 0) >= unk_0x4F982ED5336EA899(Var3, Param1, 0) && unk_0xF6D1796681289C21(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xD4781E5070EB1F1C(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xD4781E5070EB1F1C(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_140(int iParam0, int iParam1)
{
	if (!unk_0xB6900B8CB0ABBD2B(iParam0) && !unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		if (unk_0x465DC424E3211BBE(iParam0, iParam1))
		{
			if (unk_0xC0ADAF0814175B68(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xC0ADAF0814175B68(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xC0ADAF0814175B68(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xC0ADAF0814175B68(iParam1, 2) == iParam0)
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0x0C7EC810080F0459(uParam0->f_2, uParam0->f_4, 0))
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
					unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 0, 256);
				}
				else
				{
					unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 0, 0);
				}
			}
			unk_0x4471F61699BDCC4D(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_143(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 73, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam5)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2BE3C7FA4FCCA784(0, 69, 1);
		unk_0x2BE3C7FA4FCCA784(0, 70, 1);
		unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 138, 1);
	unk_0x2BE3C7FA4FCCA784(0, 136, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 131, 1);
	unk_0x2BE3C7FA4FCCA784(0, 132, 1);
	unk_0x2BE3C7FA4FCCA784(0, 123, 1);
	unk_0x2BE3C7FA4FCCA784(0, 126, 1);
	unk_0x2BE3C7FA4FCCA784(0, 129, 1);
	unk_0x2BE3C7FA4FCCA784(0, 130, 1);
	unk_0x2BE3C7FA4FCCA784(0, 133, 1);
	unk_0x2BE3C7FA4FCCA784(0, 134, 1);
	unk_0xFDE2F5F10CE86C82();
	if ((unk_0x693EBB4F13506457() - Global_29) > 500)
	{
		unk_0x5C384485B80ABDBC(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x693EBB4F13506457();
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xA3C5926D6E5619AE(unk_0x9BA9222C7124CA04(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
	{
		unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	}
}

int func_145(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			if (unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 1))
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
		unk_0x59A0729D503ED758(&(uParam0->f_60[iParam1 /*3*/]), 2);
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x0C7EC810080F0459(uParam0->f_2, uParam0->f_4, 0))
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
					if ((unk_0x693EBB4F13506457() % 1000) < 50)
					{
					}
					if (unk_0x277ECDA23D8CCEB4(uParam0->f_2, 0))
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
	return func_150(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), iParam0, iParam1);
}

float func_150(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

void func_151(var uParam0, bool bParam1)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
			{
				unk_0x7DF168F8439ABF1A(uParam0->f_8, 0);
				unk_0x706ABF1139F36482(uParam0->f_8, 0);
				func_155(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x6B4865E08E90ACC5(uParam0->f_9))
			{
				unk_0x7DF168F8439ABF1A(uParam0->f_9, 0);
				unk_0x706ABF1139F36482(uParam0->f_9, 0);
				unk_0x7846F09C04C34C46();
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
		else if (unk_0x6B4865E08E90ACC5(uParam0->f_10))
		{
			unk_0x5356E82C1E5E0C44(&(uParam0->f_10));
			if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
			{
				unk_0x7DF168F8439ABF1A(uParam0->f_8, 255);
				unk_0x706ABF1139F36482(uParam0->f_8, 1);
			}
			else if (unk_0x6B4865E08E90ACC5(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7DF168F8439ABF1A(uParam0->f_9, 0);
					unk_0x706ABF1139F36482(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7DF168F8439ABF1A(uParam0->f_9, 255);
					unk_0x706ABF1139F36482(uParam0->f_9, 1);
				}
			}
			unk_0x7846F09C04C34C46();
		}
	}
}

void func_152(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_400(uParam0);
	}
	if (!unk_0x6B4865E08E90ACC5(uParam0->f_10))
	{
		uParam0->f_10 = func_133(uParam0->f_4, 1, 0);
		unk_0x8755DAC584918BF9(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x706ABF1139F36482(uParam0->f_10, 1);
		func_153(uParam0);
		if (bParam2)
		{
			unk_0x7846F09C04C34C46();
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
	
	iVar0 = unk_0x974516F979AD07BC();
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		unk_0x90EA80826C00FB10(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_23(*uParam1, iParam2))
	{
		unk_0x7846F09C04C34C46();
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
	if (unk_0x95CCECA3948CFE7B(iParam1))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam1))
		{
			if (unk_0xA44A20565B141DAE(unk_0xA34E7C2A5118D638()))
			{
				if ((unk_0xD46766E9A244DBCB(iParam1, joaat("weapon_stungun"), 0) || unk_0xD46766E9A244DBCB(iParam1, 0, 2)) || unk_0xD46766E9A244DBCB(iParam1, 0, 1))
				{
					func_319(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xF1C649ED6E8540CE(unk_0xA34E7C2A5118D638());
			}
		}
	}
}

int func_160(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0xC0ADAF0814175B68(uParam0->f_4, -1) == uParam0->f_2)
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
	
	uVar0 = unk_0x974516F979AD07BC();
	if (unk_0x5D42322C7DB888D0(uVar0, 0))
	{
		unk_0x90EA80826C00FB10(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
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
	if (unk_0x5D42322C7DB888D0(Local_410.f_4, 0))
	{
		if (iLocal_876 && unk_0x9BA9222C7124CA04(Local_410.f_4) < 5f)
		{
			if (!func_158(&Local_410, 21))
			{
				func_286(&Local_410, 21, 0, 0);
			}
		}
		if (unk_0x9BA9222C7124CA04(Local_410.f_4) >= 5f && func_158(&Local_410, 21))
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
			uParam0->f_2 = (func_13(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
			unk_0x59A0729D503ED758(uParam0, 2);
		}
	}
}

int func_168(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (!unk_0x2DC9BA2299B45EA6(*uParam0))
	{
		switch (iLocal_870)
		{
			case 0:
				if (!func_173())
				{
					if (func_175(&(Local_410.f_244), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						unk_0x5323F488E6A1B660(*uParam0, sLocal_884, sLocal_883, 8f, -4f, -1, 0, 0, 0, 0, 0);
						if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
						{
							switch (func_170(*uParam0, 0))
							{
								case 0:
									unk_0x3440777B8DAAC4C1(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
									break;
								
								case 2:
									unk_0x3440777B8DAAC4C1(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 3);
									break;
								
								default:
									unk_0x3440777B8DAAC4C1(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 3);
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
				else if ((unk_0x693EBB4F13506457() % 1000) < 50)
				{
				}
				break;
			
			case 1:
				if (unk_0xCD61E9D5CABC7E35(*uParam0, sLocal_884, sLocal_883, 3))
				{
					fVar0 = unk_0x853B39ECA83DA242(*uParam0, sLocal_884, sLocal_883);
					if (bLocal_885)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_876)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
							iLocal_876 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_877)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
							iLocal_877 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_878)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", *uParam0, Local_863, Local_866, 31086, 1065353216, 0, 0, 0);
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
					if (unk_0x853B39ECA83DA242(*uParam0, sLocal_884, sLocal_883) > 0.9f)
					{
						iLocal_870++;
					}
				}
				break;
			
			case 2:
				if (!unk_0xCD61E9D5CABC7E35(*uParam0, sLocal_884, sLocal_883, 3))
				{
				}
				unk_0x5323F488E6A1B660(*uParam0, sLocal_884, "drunk_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
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
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x277ECDA23D8CCEB4(iParam0, iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, iParam1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					iVar1 = unk_0x66B735F5B005FAD7(unk_0x6D5BB810CC209E15(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x74CAAD9E721B315D(iVar0, iVar3))
						{
							if (unk_0xC0ADAF0814175B68(iVar0, iVar3) == iParam0)
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
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

int func_173()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
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
					unk_0xB518E9C8553B1D2B(0);
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
		if (unk_0x2964A62922189B93())
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_179())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
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
	unk_0xB518E9C8553B1D2B(0);
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
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_179()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
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
	unk_0x7846F09C04C34C46();
	func_47();
}

var func_188()
{
	var uVar0;
	
	return uVar0;
}

int func_189(var uParam0, int iParam1, float fParam2)
{
	if ((((unk_0xB66DD474AA9E764E() && !unk_0x2230725B418B1240()) && !unk_0xE71FCE10773CF7B0()) && !unk_0xD5DFCA69ACAA20E3()) && !uParam0->f_142)
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
	
	if ((func_145(uParam0) && func_23(uParam0->f_81, 67108864)) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
	{
		if ((unk_0x693EBB4F13506457() - iLocal_97) >= 10000)
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
			iLocal_97 = unk_0x693EBB4F13506457();
		}
		if (iLocal_96 >= 2 && !func_173())
		{
			func_217(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x693EBB4F13506457() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x693EBB4F13506457() % 4000) < 50)
		{
			if (!func_145(uParam0))
			{
			}
			if (!func_23(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
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
	return func_9(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), Param0, iParam3);
}

void func_192(var uParam0)
{
	if (unk_0xC354C1A3197CBF22(unk_0x1A96BAEAC664567A()) && !func_23(uParam0->f_44, 2))
	{
		func_61(&(uParam0->f_44), 2);
	}
	else if (!unk_0xC354C1A3197CBF22(unk_0x1A96BAEAC664567A()) && func_23(uParam0->f_44, 2))
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
		if ((unk_0xF624ACE12DE97FE9(uParam0->f_4) || unk_0x9BA9222C7124CA04(uParam0->f_4) < 3f) && func_196(uParam0))
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0xC0ADAF0814175B68(uParam0->f_4, -1) == unk_0xC8B93D94F8954288())
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
				if (unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) >= 1)
				{
					if (func_396(uParam0, 9) > 1f)
					{
						func_201(uParam0, unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()));
						if (uParam0->f_410 != 22)
						{
							func_217(uParam0, 50, 1, 1, 0);
						}
						func_286(uParam0, 9, 0, 0);
						if (unk_0x6B4865E08E90ACC5(uParam0->f_9))
						{
							unk_0x7DF168F8439ABF1A(uParam0->f_9, 0);
							unk_0x706ABF1139F36482(uParam0->f_9, 0);
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
				else if (unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x719D80C8C2BB7B0A(unk_0x1A96BAEAC664567A(), func_199(uParam0)))
				{
					func_201(uParam0, unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()));
					func_49(6, 0);
				}
				if (!func_198(uParam0))
				{
					if (!unk_0x2964A62922189B93())
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
				if (unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) < 1)
				{
					if (func_200("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x7846F09C04C34C46();
					}
					if (unk_0x6B4865E08E90ACC5(uParam0->f_9))
					{
						unk_0x7DF168F8439ABF1A(uParam0->f_9, 255);
						unk_0x706ABF1139F36482(uParam0->f_9, 1);
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
	unk_0xF932A8699EA66642(sParam0);
	if (iParam1 == 1)
	{
		unk_0xCE59E3E42586D52D(iParam2);
	}
	return unk_0xD6AFC45B1375A9DD();
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
	if (unk_0xA46D894B4A41906B() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x50421F238A334931();
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
	unk_0xCE2D9189D4FA7E8E(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_206(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			if (!unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 1) && !unk_0xC0AE63CA97F3FF6A(uParam0->f_3))
			{
				func_319(uParam0, "Passenger left car.", 9);
			}
			else if (func_160(uParam0))
			{
				if (func_200("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x74F83E6AF43012A7("TAXI_OBJ_PICKUP");
				}
				if (unk_0xB66DD474AA9E764E())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x693EBB4F13506457() % 1000) < 50)
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
		if (unk_0xA0C23498D8E0BB93(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_209(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) < 1) && func_208(1, 1, 1)) && unk_0xA4D2826AAFA337FD(uParam0->f_4))
		{
			return func_142(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xA0C23498D8E0BB93(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) < 1) && func_208(1, 1, 1)) && unk_0xA4D2826AAFA337FD(uParam0->f_4))
	{
		return func_142(uParam0, 1, iParam1);
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

float func_209(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

int func_210(var uParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
	{
		if (unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 0))
		{
			if (unk_0x74CAAD9E721B315D(uParam0->f_4, iParam1))
			{
				if (unk_0x090C65D5190A249D(uParam0->f_3, 355471868) != 1)
				{
					unk_0x2798F59E60097FDE(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(var uParam0, int iParam1)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			if (unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!unk_0x74CAAD9E721B315D(uParam0->f_4, iParam1))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xBA73099E237C7E5E(uParam0->f_3);
		unk_0xC518AECFA9CF7722(uParam0->f_3, unk_0xC8B93D94F8954288(), 0);
	}
	func_171();
	func_161(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		unk_0x5CF5A880ED809DDA(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x2544549FDE4C3A7E(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
	}
}

int func_214(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0->f_4) && unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("granger") || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rebel")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rebel2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("sandking")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("sandking2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("patriot")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("surfer")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("surfer2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("mesa")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rancherxl")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("tiptruck2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("mixer")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("mixer2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rubble")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("scrap")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("tiptruck")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("armytanker")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("barracks")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("barracks2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("pranger")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("ambulance")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("firetruk")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("policet")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("riot")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("sheriff2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("stockade")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("stockade3")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("biff")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("hauler")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("packer")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("trash")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("benson")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("phantom")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("pounder")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("utillitruck")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("utillitruck2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("utillitruck3")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("dloader")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("flatbed")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("tourbus")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("towtruck")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("towtruck2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("camper")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("taco")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("boxville")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("boxville2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("burrito")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("burrito2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("burrito3")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("burrito4")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("gburrito")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("journey")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("mule")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("mule2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("pony")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rumpo")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("speedo")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("speedo2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("youga"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("phoenix") || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("coquette")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("dune")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("cheetah")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("cogcabrio")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("jb700")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("monroe")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("ninef")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("ninef2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rapidgt")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("rapidgt2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("stinger")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("stingergt")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("ztype")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("banshee")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("bullet")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("carbonizzare")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("comet2")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("entityxf")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("f620")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("infernus")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("surano")) || unk_0x6D5BB810CC209E15(uParam0->f_4) == joaat("voltic"))
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
	unk_0x77621132305B133B(&uLocal_957, 2);
	func_194(&Local_410, 7);
}

void func_216(var uParam0)
{
	unk_0xF1C649ED6E8540CE(unk_0xA34E7C2A5118D638());
	unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
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
		if (!unk_0xB8A06E7E729EED0A(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xF8D041B05C3D1FD4(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_169(&Var0);
			if (unk_0xF8D041B05C3D1FD4(&Var6, &Var0))
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			if ((unk_0xC0AE63CA97F3FF6A(uParam0->f_3) && (unk_0x693EBB4F13506457() - iLocal_89) > 500) || unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 1))
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x0C7EC810080F0459(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x693EBB4F13506457() % 1000) < 50)
			{
			}
			func_148(uParam0, 1);
			if (func_33())
			{
				unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
			}
			if (unk_0x090C65D5190A249D(uParam0->f_3, 2106541073) == 1 || unk_0x090C65D5190A249D(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xBA73099E237C7E5E(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0xC518AECFA9CF7722(uParam0->f_3, unk_0xC8B93D94F8954288(), 0);
			}
		}
		else if (unk_0x719D80C8C2BB7B0A(unk_0x1A96BAEAC664567A(), 0))
		{
			func_249(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xA9351C9309E03069(&uVar3);
				unk_0x3E2E609450787FFE(&uVar3);
				unk_0x81333BEA4837207C(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xC518AECFA9CF7722(0, uParam0->f_4, 0);
				unk_0x939BC11172AA1303(uVar3);
				unk_0xBFE865E3B513451B(uParam0->f_3, uVar3);
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
				unk_0x7846F09C04C34C46();
				if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
				{
					unk_0x7DF168F8439ABF1A(uParam0->f_8, 255);
					unk_0x706ABF1139F36482(uParam0->f_8, 1);
				}
			}
			if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
			{
				fVar4 = ((unk_0x9BA9222C7124CA04(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_248(uParam0, uParam0->f_3) > 300f)
				{
					func_319(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 1 || ((func_150(unk_0xC8B93D94F8954288(), uParam0->f_3, 1) < 20f && func_209(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_209(uParam0->f_4, uParam0->f_11, 1) <= 28f))
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
								if (!unk_0xB6900B8CB0ABBD2B(iVar0))
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
										unk_0xE5F6BE3F8E937ACE(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xE5F6BE3F8E937ACE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xF6D1796681289C21(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xB6900B8CB0ABBD2B(iVar0))
											{
												unk_0xE5F6BE3F8E937ACE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x5124C5FA52D2AF3E(uParam0->f_3);
							unk_0x9CEFBE395E148A32(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x665E3D8ED43A19BF(unk_0x44C17CCB85A88A1F(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_196(uParam0))
							{
								unk_0x5124C5FA52D2AF3E(uParam0->f_3);
							}
							else if (((unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 1 && unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 0) && unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 7) && func_248(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xA9351C9309E03069(&(uParam0->f_243));
								unk_0x3E2E609450787FFE(&(uParam0->f_243));
								unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x5323F488E6A1B660(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x5323F488E6A1B660(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x939BC11172AA1303(uParam0->f_243);
								unk_0xBFE865E3B513451B(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x678FDF6C11F8E607(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
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
									unk_0xBA73099E237C7E5E(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_240(uParam0->f_4))
								{
									unk_0xBA73099E237C7E5E(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_238(uParam0);
						if (func_248(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0x0C7EC810080F0459(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_223(uParam0))
								{
									func_222(uParam0);
									iLocal_89 = unk_0x693EBB4F13506457();
									unk_0xC778754E36F3FFD6(uParam0->f_3, 26, 1);
									func_164(uParam0, 5, 0);
									unk_0xDB4FB339CAE9CE99();
									unk_0xCE2D9189D4FA7E8E(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x4D2A04F490FBAE07(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x665E3D8ED43A19BF(unk_0x44C17CCB85A88A1F(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
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
	if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
	{
		unk_0x706ABF1139F36482(uParam0->f_8, 0);
		unk_0x5356E82C1E5E0C44(&(uParam0->f_8));
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3) && !unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
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
					iLocal_88 = unk_0x693EBB4F13506457();
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
				if (!unk_0xB6900B8CB0ABBD2B(iVar9))
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
						unk_0xE5F6BE3F8E937ACE(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xE5F6BE3F8E937ACE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xF6D1796681289C21(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xB6900B8CB0ABBD2B(iVar9))
						{
							unk_0xE5F6BE3F8E937ACE(iVar9, 0, 4096);
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
			iVar12 = func_233(&(uParam0->f_409), unk_0xCC31DB73C65552D8(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xCC31DB73C65552D8(uParam0->f_4, Var0), 1);
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
				unk_0x425A7D451DB73551(unk_0x44C17CCB85A88A1F(uParam0->f_4, 1), 3f, 0);
				unk_0x83BD643811DA0EA8(unk_0x44C17CCB85A88A1F(uParam0->f_4, 1), 25f, 0);
				unk_0x9F4AA6F234E8A860(1);
				unk_0x7846F09C04C34C46();
				func_230();
				func_251(uParam0, 0, 0);
				Var13 = { unk_0xCC31DB73C65552D8(uParam0->f_4, Var6) };
				unk_0xC76B5C68AB6DC7DF(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(uParam0->f_3, func_228(uParam0));
				func_227(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x279ADEB173DD9DEE(*uParam0, unk_0xCC31DB73C65552D8(uParam0->f_4, Var0));
				unk_0xCB0D07EF49E95CDD(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x7D1795B1E14EDFFD(*uParam0, 1);
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
				unk_0x01BAA21528B22625(uParam0->f_3, 0, 0);
				unk_0x9CEFBE395E148A32(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
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
			if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3) && !unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
			{
				if (!unk_0x277ECDA23D8CCEB4(uParam0->f_3, 0))
				{
					unk_0x6D9DB313D50E9A0D(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x3D289B1B7567CB62(uParam0->f_4, func_226(uParam0->f_7), 1);
				}
				unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
				unk_0x5CF5A880ED809DDA(*uParam0, 0);
				unk_0x5CF5A880ED809DDA(uParam0->f_1, 0);
				unk_0x8C67D2FDE360FBCA(0);
				unk_0x0F9FDCEB321235AB(0, 1065353216);
				unk_0x31E6EB2040318451(800);
				unk_0x9F4AA6F234E8A860(1);
				unk_0x7846F09C04C34C46();
				func_230();
				func_251(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB66DD474AA9E764E() && !unk_0x2230725B418B1240())
			{
				func_224(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
			unk_0x5CF5A880ED809DDA(*uParam0, 0);
			unk_0x5CF5A880ED809DDA(uParam0->f_1, 0);
			unk_0x8C67D2FDE360FBCA(0);
			unk_0x0F9FDCEB321235AB(0, 1065353216);
			func_224(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3) && !unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
			{
				if (unk_0xC0AE63CA97F3FF6A(uParam0->f_3) || unk_0x277ECDA23D8CCEB4(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), -1794415470) != 1 && unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), -1794415470) != 0)
				{
					unk_0x9CEFBE395E148A32(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
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
		unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 1, 0);
	}
	unk_0x5B712287C9AB5D4B(1);
	func_24(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xB7709513BF7C1AC0(1);
		unk_0xB1DF6C0157E453DE(1);
	}
	func_225(23, 0);
}

void func_225(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_25359, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25359, iParam0);
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
	if (!unk_0x844838E5D8A21336(*uParam0))
	{
		*uParam0 = unk_0x785B53D5654A2FFD(26379945, Param1, Param4, iParam7, 0, 2);
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
		Var1 = { unk_0xCC31DB73C65552D8(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xCC31DB73C65552D8(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_229(unk_0x44C17CCB85A88A1F(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_229(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x949D03817D2A6977((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_230()
{
	Global_14578 = 0;
	func_231();
}

void func_231()
{
	if (unk_0x2964A62922189B93())
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 0, iParam0);
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0x0184403F1C1A3769(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 15f);
	}
	unk_0x5B712287C9AB5D4B(iParam1);
	func_42(0);
	func_24(1, 1, iParam2, 0);
	unk_0xB7709513BF7C1AC0(0);
	unk_0xB1DF6C0157E453DE(0);
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
		*uParam0 = unk_0xC4DBC378170CB508(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x1728AE8531450BFE(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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
	if (func_235() && unk_0x693EBB4F13506457() >= iParam0 + 1000)
	{
		unk_0x00F9843B9C06C2E9(500);
		while (!unk_0xD5DFCA69ACAA20E3())
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
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_236()
{
	if (func_35())
	{
		unk_0x64E6498F388E05B5("appInternet");
	}
	if (func_34())
	{
		unk_0x64E6498F388E05B5("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_237(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x693EBB4F13506457() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x693EBB4F13506457();
}

void func_238(var uParam0)
{
	var uVar0;
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			if (func_149(uParam0->f_3, 1) > 30f || func_239(uParam0))
			{
				if (unk_0x090C65D5190A249D(uParam0->f_3, -1794415470) == 1 || unk_0x090C65D5190A249D(uParam0->f_3, 242628503) == 1)
				{
					unk_0xA9351C9309E03069(&uVar0);
					unk_0x3E2E609450787FFE(&uVar0);
					unk_0xC518AECFA9CF7722(0, uParam0->f_4, 0);
					unk_0x5323F488E6A1B660(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x81333BEA4837207C(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x939BC11172AA1303(uVar0);
					unk_0xBFE865E3B513451B(uParam0->f_3, uVar0);
					func_319(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_239(var uParam0)
{
	if ((unk_0x9BA9222C7124CA04(uParam0->f_4) > 3f && func_396(uParam0, 5) > 15f) || unk_0x96EA03DFD7BAC0B4(uParam0->f_4))
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
	if (!unk_0x984546D04F4DDFDF(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x984546D04F4DDFDF(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x984546D04F4DDFDF(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x984546D04F4DDFDF(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x53F611067DBFED15(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x53F611067DBFED15(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x53F611067DBFED15(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x53F611067DBFED15(iParam0, 3))
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xC0ADAF0814175B68(uParam0->f_4, 1);
		iVar0[1] = unk_0xC0ADAF0814175B68(uParam0->f_4, 2);
		iVar0[2] = unk_0xC0ADAF0814175B68(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(iVar0[iVar4]))
			{
				if (unk_0xB6900B8CB0ABBD2B(iVar0[iVar4]))
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
		if ((unk_0x693EBB4F13506457() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_242(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC0ADAF0814175B68(uParam0->f_4, 1);
		if (unk_0x95CCECA3948CFE7B(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xC0ADAF0814175B68(uParam0->f_4, 2);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xC0ADAF0814175B68(uParam0->f_4, 0);
				if (unk_0x95CCECA3948CFE7B(iVar0))
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
	
	iVar4 = unk_0x7EFD275DF858497F(iParam0);
	Var0 = { unk_0xEABAE14292BF78FB(iParam0, unk_0x44C17CCB85A88A1F(iParam1, 1)) };
	if (unk_0x6D5BB810CC209E15(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x6D5BB810CC209E15(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xF6D1796681289C21(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xF6D1796681289C21(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xF6D1796681289C21(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xF6D1796681289C21(iParam1, iParam0, 2, 0, 0))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
	{
		if (!unk_0x3F13A387457FD9A7(uParam0->f_3) && func_149(uParam0->f_3, 1) < fParam2)
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
		if (((func_396(uParam0, 5) > IntToFloat(iParam1) && unk_0x9BA9222C7124CA04(uParam0->f_4) < fParam4) && !unk_0x3F13A387457FD9A7(uParam0->f_3)) || func_149(uParam0->f_3, 1) <= fParam3)
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
	
	iVar18 = unk_0x71EC6CC1E45B4DF1(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x71EC6CC1E45B4DF1(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xEA9A8033D5CFC295(uParam0->f_4, iVar18) };
		Var6 = { unk_0xEABAE14292BF78FB(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xCC31DB73C65552D8(uParam0->f_4, Var6) };
	Var3 = { unk_0xCC31DB73C65552D8(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x5435E4400FB46375(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xAAD662D7E0D59F4C(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_150(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xA3C5926D6E5619AE((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xC4DBC378170CB508(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x1728AE8531450BFE(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 1 && unk_0x090C65D5190A249D(uParam0->f_3, 242628503) != 0)
			{
				unk_0xA9351C9309E03069(&(uParam0->f_243));
				unk_0x3E2E609450787FFE(&(uParam0->f_243));
				unk_0x5323F488E6A1B660(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
				unk_0x20ACC819883C0E85(uParam0->f_243, 1);
				unk_0x939BC11172AA1303(uParam0->f_243);
				unk_0xBFE865E3B513451B(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x7846F09C04C34C46();
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
			unk_0x5124C5FA52D2AF3E(uParam0->f_3);
			unk_0xE48D9147BC1F4CD7(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xA9351C9309E03069(&(uParam0->f_243));
			unk_0x3E2E609450787FFE(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x5323F488E6A1B660(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5323F488E6A1B660(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
			unk_0x939BC11172AA1303(uParam0->f_243);
			unk_0xBFE865E3B513451B(uParam0->f_3, uParam0->f_243);
			unk_0xA9351C9309E03069(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x678FDF6C11F8E607(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_246(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x7033366221CC71C6(uParam0, sParam1, uParam2, func_247(iParam3), 0);
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
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
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
			if (unk_0x6B4865E08E90ACC5(uParam0->f_10))
			{
				unk_0x5356E82C1E5E0C44(&(uParam0->f_10));
			}
		}
	}
	if (!func_158(uParam0, 9))
	{
		if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
		{
			unk_0x7DF168F8439ABF1A(uParam0->f_8, 0);
			unk_0x706ABF1139F36482(uParam0->f_8, 0);
		}
		func_286(uParam0, 9, 0, 0);
		func_250("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_250(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_47();
		func_286(uParam0, 16, 4f, 0);
		unk_0x7846F09C04C34C46();
	}
}

int func_252(var uParam0, int iParam1)
{
	if (!unk_0xF0DCEBB4ADA5D981(2))
	{
		return 0;
	}
	func_256(12);
	if (func_23(uParam0->f_44, 8))
	{
		if (!func_23(uParam0->f_44, 128))
		{
			if (unk_0x493D58455424944D(unk_0xC8B93D94F8954288()) && !func_23(uParam0->f_44, 256))
			{
				func_61(&(uParam0->f_44), 256);
			}
			if (func_23(uParam0->f_44, 256) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
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
				unk_0xC518AECFA9CF7722(uParam0->f_3, unk_0xC8B93D94F8954288(), 0);
				func_217(uParam0, 133, 1, 0, 1);
				func_61(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x2DC9BA2299B45EA6(uParam0->f_3) || unk_0x54BD36F7F4951C53(uParam0->f_3)) || func_149(uParam0->f_3, 1) > 400f)
		{
			func_319(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x275BEBE583A163B5(uParam0->f_2, 0);
		unk_0x0CE9795408B4B974(uParam0->f_4, 1);
		if (unk_0xC0ADAF0814175B68(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x3F6DAED48C8A6943(uParam0->f_4);
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
	{
		if (func_254())
		{
		}
	}
}

int func_254()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
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
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				iVar1 = unk_0x6D5BB810CC209E15(iVar0);
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
				if (unk_0x1B477DDE9D088A91(iVar1))
				{
					if (unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x7EFD275DF858497F(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_23(uParam0->f_44, 64))
					{
						if (unk_0xF0DCEBB4ADA5D981(2))
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
						if (unk_0xF0DCEBB4ADA5D981(2))
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
						if (unk_0xF0DCEBB4ADA5D981(2))
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
	
	if (unk_0xC07DCB0D0C199EDF() || unk_0xF7FE713C9F786F8C())
	{
		uVar0 = iParam0;
		unk_0x86E205844247EC8D(8, &uVar0, 1, 1);
	}
	else if (unk_0x5769873E00C06500() || unk_0x62F8BA7ED89768FB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xFA993E4AA4647AA6(8, &cVar1);
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
	func_275(40921, 40896, 1);
	func_275(40657, 40634, 1);
	func_275(40573, 40548, 1);
	func_275(40477, 40453, 1);
	func_275(40343, 40322, 1);
	func_275(40269, 40244, 1);
	func_275(40102, 40079, 1);
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_260(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0->f_4))
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
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x78FF715074ED0311(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x442EE710FCFD5D0D(iParam0, 0, 40000) || unk_0x442EE710FCFD5D0D(iParam0, 1, 40000))
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
	if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
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
	if (unk_0x95CCECA3948CFE7B(uParam0->f_4))
	{
		if (unk_0xEE473B4B88D6F842(uParam0->f_4) && !unk_0xA4D2826AAFA337FD(uParam0->f_4))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
	{
		if (unk_0x9431892AE74F024C(uParam0->f_4))
		{
			if (unk_0x442EE710FCFD5D0D(uParam0->f_4, 0, 40000) || unk_0x442EE710FCFD5D0D(uParam0->f_4, 1, 40000))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_4))
	{
		if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
		{
			if (unk_0xF624ACE12DE97FE9(uParam0->f_4))
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
	if (unk_0x95CCECA3948CFE7B(uParam0->f_4))
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
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x78FF715074ED0311(iParam0) == 0f)
	{
		if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x442EE710FCFD5D0D(iParam0, 0, 40000) || unk_0x442EE710FCFD5D0D(iParam0, 1, 40000))
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
	if (unk_0x95CCECA3948CFE7B(uParam0->f_3))
	{
		if ((unk_0x2DC9BA2299B45EA6(uParam0->f_3) || unk_0xB6900B8CB0ABBD2B(uParam0->f_3)) || unk_0x79E944054F6C9DCD(uParam0->f_3))
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
	if (!unk_0x0845149A26DABBA5(iLocal_852))
	{
		func_237("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_869, 1000);
		return 0;
	}
	if (!unk_0xF518F3C7FACD43B7(uLocal_964))
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
	if (!unk_0x0845149A26DABBA5(func_20()))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF9B86DC1728F1339("gestures@m@standing@casual"))
		{
			func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF9B86DC1728F1339("oddjobs@taxi@"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9B86DC1728F1339("oddjobs@towingcome_here"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9B86DC1728F1339("misscommon@response"))
	{
		func_237("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF0DCEBB4ADA5D981(2))
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
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
	{
		uParam0->f_8 = func_283(uParam0->f_3, 0, 0);
		unk_0xBC97B7D9E6BF5007(1, 0);
		unk_0x706ABF1139F36482(uParam0->f_8, 1);
		unk_0x8755DAC584918BF9(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xE48D9147BC1F4CD7(uParam0->f_3, unk_0xC8B93D94F8954288(), -1, 2048, 4);
	}
	return 1;
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

int func_284(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x95CCECA3948CFE7B(uParam0->f_3))
	{
		func_285(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_39(uParam0->f_14, 0);
		unk_0x425A7D451DB73551(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x61C7D4DADE57206E(uParam0->f_11);
		}
		else if (unk_0x95CCECA3948CFE7B(Global_99688.f_225[0]))
		{
			uParam0->f_3 = Global_99688.f_225[0];
			unk_0xFD816D0E738EB817(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x71DD988C1B903F5D(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0xB7F5BF6BE1CE7627(uParam0->f_3, sParam7);
		unk_0x1F64302AA4F597A7(uParam0->f_3, 112, 1);
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
		{
			unk_0xDABDA88E15232316(uParam0->f_3, 250);
			unk_0xC778754E36F3FFD6(uParam0->f_3, 32, 0);
			unk_0xC778754E36F3FFD6(uParam0->f_3, 104, 1);
			unk_0xC778754E36F3FFD6(uParam0->f_3, 177, 1);
			unk_0xC778754E36F3FFD6(uParam0->f_3, 116, 0);
			unk_0x4A606A8BE6924115("TAXI_Passenger", &(uParam0->f_413));
			unk_0x6CCF5F545348D54E(1, uParam0->f_413, joaat("player"));
			unk_0x6CCF5F545348D54E(2, uParam0->f_413, joaat("COP"));
			unk_0xCBD60E398042F554(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_285(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x3A5A8079653CBDF7(Param1, 20f, 5f, 0);
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
	unk_0x7567CEA8E6B5340B(iLocal_852);
	unk_0xC0E8B67A4385D37D(sLocal_884);
	unk_0xC4C141A321D45FD8("Taxi_Vomit", 0);
	uLocal_964 = func_289();
	unk_0x8CBF0FAEA6BA6D37();
	func_288(1);
}

void func_288(bool bParam0)
{
	unk_0x7567CEA8E6B5340B(func_20());
	if (bParam0)
	{
		unk_0xC0E8B67A4385D37D("gestures@m@standing@casual");
	}
	unk_0xC0E8B67A4385D37D("oddjobs@taxi@");
	unk_0xC0E8B67A4385D37D("oddjobs@towingcome_here");
	unk_0xC0E8B67A4385D37D("misscommon@response");
	unk_0xF3AC452C34BF0E13("TAXI", 2);
	if (!func_23(Global_100976.f_17731, 128))
	{
		func_61(&(Global_100976.f_17731), 128);
	}
}

var func_289()
{
	return unk_0x31DC2CEFEF13C96D("MIDSIZED_MESSAGE");
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
			unk_0x77621132305B133B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x59A0729D503ED758(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x77621132305B133B(&(uParam0->f_60[iVar0 /*3*/]), 2);
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
	
	fVar0 = unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457());
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
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
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
			if (unk_0x95CCECA3948CFE7B(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xD3A4099D2845F152(uParam0->f_4);
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
			unk_0xF1C649ED6E8540CE(unk_0xA34E7C2A5118D638());
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
	
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_2))
	{
		if ((!unk_0x2EE26A43F82C8F1B(uParam0->f_2) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x9BA9222C7124CA04(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_195(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_96(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x9BA9222C7124CA04(uParam0->f_2);
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x8DB48F88A836B346(uParam0->f_4, 1) };
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
	
	if ((((((unk_0x5D42322C7DB888D0(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x8DB48F88A836B346(uParam0->f_4, 1) };
		if (unk_0xA3C5926D6E5619AE(Var0.f_0) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_195(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_96(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0xA3C5926D6E5619AE(uLocal_342) - unk_0xA3C5926D6E5619AE(Var0.f_0)) < 0f)
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
	if (((((unk_0x5D42322C7DB888D0(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xFD4D1267977B7832(unk_0x44C17CCB85A88A1F(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x95CCECA3948CFE7B(uParam0->f_5))
			{
				if ((unk_0x9BA9222C7124CA04(uParam0->f_4) > 15f && func_150(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xB6900B8CB0ABBD2B(uParam0->f_5) && !unk_0x74CAAD9E721B315D(uParam0->f_5, -1)))
				{
					func_195(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_96(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_150(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xAF8A64E258A159A4(uParam0->f_5))
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_96(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xAF8A64E258A159A4(uParam0->f_5))
		{
			func_95(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	if (((unk_0x5D42322C7DB888D0(uParam0->f_4, 0) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_302(uParam0->f_4) && unk_0x9BA9222C7124CA04(uParam0->f_4) > 15f)
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
	
	unk_0xDBB7514BD5DF1D59(unk_0x44C17CCB85A88A1F(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xDBB7514BD5DF1D59(unk_0x44C17CCB85A88A1F(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xF9590996BE474DC4(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_306((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_305(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_303(unk_0x44C17CCB85A88A1F(iParam0, 1), Var15, Var18, Var21);
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0xC0ADAF0814175B68(uParam0->f_4, -1) == unk_0xC8B93D94F8954288())
		{
			if (unk_0xA44A20565B141DAE(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0xC0ADAF0814175B68(uParam0->f_4, -1) == unk_0xC8B93D94F8954288())
		{
			if (unk_0x96EA03DFD7BAC0B4(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xAEDE3A850F882A3C(uParam0->f_4) <= -145f || unk_0xAEDE3A850F882A3C(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xAEDE3A850F882A3C(uParam0->f_4) <= 35f && unk_0xAEDE3A850F882A3C(uParam0->f_4) >= -35f)
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD07ED879314875FA(unk_0xA34E7C2A5118D638());
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x964171D07E85F90E(unk_0xA34E7C2A5118D638());
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0x955A04DD5208F4B7(uParam0->f_4))
		{
			iVar0 = unk_0xD3A4099D2845F152(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x0CBE045BBBA5CFDE(uParam0->f_4);
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
	
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x8DB48F88A836B346(uParam0->f_4, 1) };
		if (unk_0xA3C5926D6E5619AE(Var0.f_0) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (!unk_0xA4D2826AAFA337FD(uParam0->f_4) && unk_0x25011B7D08ACD328(uParam0->f_4))
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
	unk_0xF1C649ED6E8540CE(unk_0xA34E7C2A5118D638());
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
	if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
	{
		if (unk_0x9BA9222C7124CA04(uParam0->f_4) > 25f)
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
	if ((!unk_0xB8A06E7E729EED0A(&Var0) && func_173()) && !unk_0xF8D041B05C3D1FD4(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x7846F09C04C34C46();
		unk_0x9F4AA6F234E8A860(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
		{
			if (!func_145(uParam0))
			{
				if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xE80E983DE27B676E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xE80E983DE27B676E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xCD61E9D5CABC7E35(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xE80E983DE27B676E(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
				if (unk_0xF624ACE12DE97FE9(uParam0->f_4))
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
			{
				func_246(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_321(uParam0, &Var0);
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_321(uParam0, &Var0);
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 1, 0);
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
			else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
	switch (func_3(unk_0xC8B93D94F8954288()))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
	{
		if (func_150(unk_0xC8B93D94F8954288(), uParam0->f_3, 1) < 40f && !unk_0x3F13A387457FD9A7(uParam0->f_3))
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
		iVar6 = unk_0x8F37C4B2B81C98B9();
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
					if (!func_356(&Local_410) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 1)
					{
						if (func_355("TX_OBJ_TIE_DO") || unk_0x6B4865E08E90ACC5(Local_410.f_9))
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
					if (unk_0xF8D041B05C3D1FD4(&(uParam2->f_13), &(uParam2->f_7)))
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
						if (unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
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
						if (unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) >= 1)
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
						if (unk_0xF8D041B05C3D1FD4(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_169(&(uParam2->f_1));
							func_175(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_164(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0xB8A06E7E729EED0A(&(uParam2->f_1)))
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
	if (unk_0xF8D041B05C3D1FD4(&(uParam0->f_13), "txm3_bant1") || unk_0xF8D041B05C3D1FD4(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0xF8D041B05C3D1FD4(&(uParam0->f_13), "txm6_bant3M") || unk_0xF8D041B05C3D1FD4(&(uParam0->f_13), "txm6_bant3T")) || unk_0xF8D041B05C3D1FD4(&(uParam0->f_13), "txm6_bant3F"))
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
		iVar6 = unk_0x8F37C4B2B81C98B9();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xF2831232D38CD691(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xF2831232D38CD691(&(Global_14580[iVar8 /*6*/])))
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
				else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
					if (!unk_0x6B4865E08E90ACC5(uParam0->f_9))
					{
						uParam0->f_9 = func_348(uParam0->f_17, 1);
					}
					else if (unk_0xF40F7B5C29E813BB(uParam0->f_9) == 0)
					{
						unk_0x7DF168F8439ABF1A(uParam0->f_9, 255);
						unk_0xC569AF72BA6007D8(uParam0->f_9, uParam0->f_17);
						unk_0x706ABF1139F36482(uParam0->f_9, 1);
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
					if (!unk_0x6B4865E08E90ACC5(uParam0->f_9))
					{
						uParam0->f_9 = func_348(uParam0->f_17, 1);
					}
					else if (unk_0xF40F7B5C29E813BB(uParam0->f_9) == 0)
					{
						unk_0x7DF168F8439ABF1A(uParam0->f_9, 255);
						unk_0xC569AF72BA6007D8(uParam0->f_9, uParam0->f_17);
						unk_0x706ABF1139F36482(uParam0->f_9, 1);
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
				iVar14 = unk_0x531444754C426278(0, 120);
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
				iVar14 = unk_0x531444754C426278(0, 100);
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
					if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
					if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
				else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
					if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
				else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
				if (unk_0x6338DEFCA89B8CD6(unk_0x1A96BAEAC664567A()) >= 1)
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
					if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
						if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
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
		StringIntConCat(&cVar0, unk_0x531444754C426278(1, 3), 24);
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
		if (unk_0xB8A06E7E729EED0A(uParam0[iVar0 /*8*/]))
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
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_107(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
	return uVar0;
}

void func_349(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_286(uParam0, 16, 0, 0);
	func_286(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_3))
	{
		unk_0x3A41F9A67A68BF69(uParam0->f_3, &cParam1, func_350(uParam0));
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
	if (!unk_0x544AEDB4A15228FF(sParam0))
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
		if (unk_0x95CCECA3948CFE7B(uParam0->f_4))
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
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x693EBB4F13506457();
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
				if (!unk_0xB8A06E7E729EED0A(&(uParam0->f_124)) && func_173())
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
	if ((((!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()) && (unk_0x844838E5D8A21336(*uParam0) && !unk_0xF96FC657C212A30E(*uParam0))) && (unk_0x844838E5D8A21336(uParam0->f_1) && !unk_0xF96FC657C212A30E(uParam0->f_1))) && !unk_0xA3858ADDDBC3CB71()) && !func_173())
	{
		if (func_396(uParam0, 26) > 10f)
		{
			func_164(uParam0, 26, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
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
		func_372(&(uParam0->f_429), 0, 0, unk_0x531444754C426278(4, 7), 0, 0, 0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_371(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
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
	
	func_379(&uVar0, unk_0x4C374828FD653ECC());
	func_378(&uVar0, unk_0x44AD07D9D178F321());
	func_377(&uVar0, unk_0x342FDFC48311CCCE());
	func_375(&uVar0, unk_0x818078CDB71D3E9C());
	func_376(&uVar0, unk_0x49D01BEA8D03E892());
	func_374(&uVar0, unk_0x90D477BB666B03DB());
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
			unk_0xBDC2957CCB5DFDC3(&uVar0);
			uParam0->f_4 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			unk_0xFD816D0E738EB817(uParam0->f_4, 1, 0);
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
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288())
				{
					if (unk_0x6B89D299CB2A726F(iVar0, func_20()))
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
	else if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
	{
		if (!unk_0x3F13A387457FD9A7(uParam0->f_3))
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
	
	iVar0 = unk_0xC8B93D94F8954288();
	if (!unk_0xB6900B8CB0ABBD2B(iVar0) && !unk_0xB6900B8CB0ABBD2B(iParam0))
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
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
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
	else if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (iParam7 && unk_0x87D4C731B013290A(iParam0, iVar0, 1))
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
			iLocal_80 = unk_0xD3A4099D2845F152(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0xD3A4099D2845F152(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x974516F979AD07BC();
		if (!unk_0xB6900B8CB0ABBD2B(uVar0))
		{
			if (unk_0x87D4C731B013290A(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x87D4C731B013290A(iParam0, unk_0xC8B93D94F8954288(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x87D4C731B013290A(iParam0, unk_0xC8B93D94F8954288(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x974516F979AD07BC();
		if (!unk_0xB6900B8CB0ABBD2B(uVar1))
		{
			if (unk_0x87D4C731B013290A(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			if (unk_0xB03AB89ABCAB2B4E(iParam0))
			{
				if (unk_0x2BE02B2E8F70BEEC(iParam0) == unk_0xC8B93D94F8954288())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
		{
			if (unk_0xA0C23498D8E0BB93(iParam0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xA44A20565B141DAE(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xBE749D71030A14D3(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x64A71C92E3B69E73(iParam0))
		{
			return 1;
		}
	}
	if (func_390(unk_0xC8B93D94F8954288(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x770AAB67BDD9C729(iParam0) && func_149(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), unk_0x275BEBE583A163B5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), iParam0))
		{
			return 1;
		}
		if (!unk_0xB6900B8CB0ABBD2B(uParam1))
		{
			if (unk_0x87D4C731B013290A(iParam1, unk_0xC8B93D94F8954288(), 1))
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
	
	unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x1E8D3FA42E89ED72(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0x44C17CCB85A88A1F(iParam1, 1)) < 2.5f)
			{
				if (unk_0xAF9BF2C76079B4BF(iParam0, iParam1, 180f))
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
	if (unk_0x74BBB84E37C71AAC(uParam0, 4))
	{
		if (unk_0x1E8D3FA42E89ED72(uParam0) && !unk_0xBCB541CE877969BE(iParam0))
		{
			if (unk_0xA0C23498D8E0BB93(uParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam1))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	if (unk_0x0592F98C32AC22CA(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xFB2795545DBC1C8A(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x74BBB84E37C71AAC(uParam0, 2))
	{
		if (unk_0x1E8D3FA42E89ED72(uParam0))
		{
			if (unk_0xA0C23498D8E0BB93(iParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xAF9BF2C76079B4BF(unk_0x4D3C2AC8339BFB4F(iParam1), iParam0, 120f) && unk_0x164373F9651C2457(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0x4D3C2AC8339BFB4F(iParam1), 0))
			{
				iVar3 = unk_0x275BEBE583A163B5(unk_0x4D3C2AC8339BFB4F(iParam1), 0);
			}
			if (unk_0x3A2AAB26205C2C37(iParam0) || func_393(iVar3))
			{
				if (unk_0xA0C23498D8E0BB93(iParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xAF9BF2C76079B4BF(unk_0x4D3C2AC8339BFB4F(iParam1), iParam0, 120f) && unk_0x164373F9651C2457(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEC54737A42D57DA5((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (unk_0xC0ADAF0814175B68(iParam0, -1) != 0)
			{
				if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_150(unk_0xC8B93D94F8954288(), iParam0, 1) < 40f)
						{
							if (unk_0x07AC36C22591E640(unk_0xA34E7C2A5118D638(), &uVar1))
							{
								if ((unk_0x18BDAFC0B20C2C9E(uVar1) && unk_0xE6E6D9800E15A76C(iVar1) == iParam0) || (unk_0x96209AADF56E8FE8(iVar1) && unk_0x4D3C2AC8339BFB4F(iVar1) == unk_0xC0ADAF0814175B68(iParam0, -1)))
								{
									if ((unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()) && unk_0x0139E142C27412BC(0, 24)) || (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0139E142C27412BC(0, 69)))
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
		{
			if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iParam0) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iParam0))
			{
				if (unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 90f))
				{
					if (func_149(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x693EBB4F13506457();
						}
						else if ((unk_0x693EBB4F13506457() - uParam1->f_1) > uParam1->f_3)
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
		if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
		{
			if (func_9(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x3FC9316FEF4E4720(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
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
		if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_3))
		{
			if (unk_0x5D42322C7DB888D0(uParam0->f_4, 0))
			{
				if (unk_0x0C7EC810080F0459(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_265(uParam0->f_85, 32))
					{
						if (!unk_0xF624ACE12DE97FE9(uParam0->f_4))
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
	else if ((unk_0x693EBB4F13506457() % 1000) < 50)
	{
	}
	return 0;
}

void func_400(var uParam0)
{
	if (unk_0x6B4865E08E90ACC5(uParam0->f_8))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_8));
	}
	if (unk_0x6B4865E08E90ACC5(uParam0->f_9))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_9));
	}
	if (unk_0x6B4865E08E90ACC5(uParam0->f_10))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_10));
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
	if (!func_23(Global_100976.f_17731, 4))
	{
		func_61(&(Global_100976.f_17731), 4);
	}
	func_408(uParam0);
	func_406(uParam0);
	unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
	uParam0->f_102 = (func_405(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xF3AC452C34BF0E13("TAXI", 2);
}

int func_405(int iParam0)
{
	return Global_100976.f_17731.f_39[iParam0];
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
			func_412(uParam0, unk_0x531444754C426278(0, 17));
			iVar0 = func_410((uParam0->f_418.f_2 + unk_0x531444754C426278(1, 17)), 0, 16);
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
	uParam0->f_2 = unk_0xC8B93D94F8954288();
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
		StringCopy(&Global_100032, unk_0xC4E68AF0B559FAC4(), 24);
		Global_100026 = 1;
	}
	else
	{
		StringCopy(&Global_100032, "NULL", 24);
		Global_100026 = 0;
	}
}

void func_415()
{
	if (unk_0xF9B86DC1728F1339(sLocal_884))
	{
		unk_0x3ECF1E41E6ED71D8(sLocal_884);
	}
	if (iLocal_853 != 0)
	{
		unk_0x939ED2D95F7BD8A8(iLocal_853, 0);
		iLocal_853 = 0;
	}
	unk_0x5E56B49A7D5150F6();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_416(int iParam0)
{
	Global_99688.f_22 = iParam0;
}

