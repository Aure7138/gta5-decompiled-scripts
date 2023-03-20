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
	var uLocal_92 = 0;
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
	struct<3> Local_408[1];
	struct<418> Local_412 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = -1;
	var uLocal_833 = -1;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	int iLocal_842 = 0;
	var uLocal_843 = 0;
	struct<3> Local_844 = { 0, 0, 0 } ;
	struct<3> Local_847 = { 0, 0, 0 } ;
	struct<3> Local_850 = { 0, 0, 0 } ;
	struct<3> Local_853 = { 0, 0, 0 } ;
	struct<3> Local_856 = { 0, 0, 0 } ;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	bool bLocal_862 = 0;
	int iLocal_863 = 0;
	bool bLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	var uLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	char cLocal_877[24] = "";
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	char cLocal_883[24] = "";
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	char cLocal_889[24] = "";
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	char cLocal_895[24] = "";
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	char cLocal_901[24] = "";
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	char cLocal_907[24] = "";
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	char cLocal_913[24] = "";
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	char cLocal_919[24] = "";
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	char cLocal_925[24] = "";
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	struct<6> Local_931 = { 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_954[2] = { 0, 0 };
	int iLocal_957 = 0;
	var uLocal_958[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	bool bLocal_970 = 0;
	struct<28> Local_971 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 5;
	var uLocal_1002 = 0;
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
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
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
	uLocal_76 = unk_0xE30164C14FFD22B6();
	uLocal_77 = unk_0xE1ABDD92C442B1EE();
	Local_82 = { 500f, 500f, 500f };
	Local_844 = { 342.6987f, -996.7599f, 28.2438f };
	Local_847 = { 321.1089f, -996.4285f, 28.20932f };
	Local_850 = { -1042.946f, -2689.55f, 12.7572f };
	Local_853 = { -1044.808f, -2694.138f, 12.728f };
	Local_856 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_870 = 1;
	iLocal_874 = -1;
	StringCopy(&cLocal_877, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_883, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_889, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_895, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_901, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_907, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_913, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_919, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_925, "txm8_thank3F_2", 24);
	if (unk_0x8D841F1DD3FA555F(67))
	{
		func_419(2);
		func_416();
	}
	unk_0xAE2A9FD3EEF99954(1);
	func_403(5);
	while (true)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_412.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_412);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x81873881071CD9FE();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x81873881071CD9FE());
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x81873881071CD9FE());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	var uVar0;
	int iVar1;
	
	if (func_402(&Local_412))
	{
		if (func_401(&Local_412, bLocal_862))
		{
			func_399();
		}
	}
	else
	{
		func_398(&Local_412);
		func_364(&Local_412, &uLocal_937);
		if (Local_412.f_410 != 28 && Local_412.f_410 != 30)
		{
			func_363(&Local_412);
		}
		func_362(&Local_412, &uLocal_872, 0);
		if (Local_412.f_410 > 2)
		{
			if (((Local_412.f_410 == 21 || Local_412.f_410 == 25) || Local_412.f_410 == 9) || Local_412.f_410 == 22)
			{
				func_361(&Local_412);
			}
			if (!func_360(&Local_412))
			{
				func_330();
			}
			else
			{
				func_314(&Local_412, "Taxi Not Driveable", func_329(&Local_412));
			}
		}
		if (Local_412.f_410 == 9 || Local_412.f_410 == 22)
		{
			func_291(&Local_412, 0, 1);
		}
		if (Local_412.f_410 == 17 || Local_412.f_410 == 21)
		{
			if (func_290(&Local_412) && func_288(1, 1, 0))
			{
				func_275(&uLocal_44, Local_856, 0, 0, 1, 1, 1);
			}
			else
			{
				func_274(&uLocal_44, 0, 0);
			}
			if (func_273(&Local_412) && func_288(1, 1, 0))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_871, 3))
				{
					func_272("TAXI_HNT_CAM", -1);
					unk_0xF3148AAF69AF9CBC(&iLocal_871, 3);
					if (unk_0x236D8AD7EE179F46(iLocal_871, 4))
					{
						unk_0xC69E84EBBD7166E6(&iLocal_871, 4);
					}
				}
			}
			else if (!unk_0x236D8AD7EE179F46(iLocal_871, 4))
			{
				unk_0xB8BB626315D394F5(1);
				unk_0xF3148AAF69AF9CBC(&iLocal_871, 4);
			}
		}
		switch (Local_412.f_410)
		{
			case 0:
				func_269();
				func_268(&Local_412, 16, 4f, 0);
				func_265(&Local_412, Local_850, Local_853, "TaxiDerrick", func_267(0), 116.1366f, 10f);
				func_263(&Local_412);
				func_262(&Local_412, 1);
				break;
			
			case 1:
				if (func_260())
				{
					unk_0x4865E80F793024CE("TAXI_Pursuers", &iLocal_969);
					func_259();
					func_239();
					func_238(&(Local_408[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_237(&Local_412, &Local_408);
					func_236(&Local_412);
					Local_412.f_14 = { Local_850 };
					func_262(&Local_412, 3);
				}
				break;
			
			case 3:
				if (func_230(&Local_412, 1))
				{
					if (!unk_0x930F8FBB8E9537CC(Local_412.f_3))
					{
						unk_0x03F73D35E5AC583A(Local_412.f_3, 8, 0, 0, 0);
						unk_0x506A601663C5417C(Local_412.f_3, iLocal_969);
						unk_0xA7149121C1FEA65B(Local_412.f_3, 1);
					}
					unk_0x0C17E2FCF3ABF5A3(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 1, 0, 1);
					unk_0xF8E77F310A5B6EAB(0, 1166638144, Local_412.f_413);
					unk_0xF8E77F310A5B6EAB(0, -1865950624, Local_412.f_413);
					unk_0xF8E77F310A5B6EAB(0, 296331235, Local_412.f_413);
					unk_0x887F4488DA99FD21(func_267(0));
					func_229(&Local_412, 1, 0);
					func_262(&Local_412, 5);
				}
				break;
			
			case 5:
				if (func_205(&Local_412, 0, 1109393408))
				{
					Local_412.f_17 = { func_204(0) };
					iLocal_859 = 1;
					func_262(&Local_412, 15);
				}
				break;
			
			case 15:
				if (func_203(&Local_412))
				{
					func_200(&Local_412, 9, 1, 0, 0);
					func_199(&Local_412);
					func_198();
					func_197(func_204(-1), 0, 1114636288);
					func_262(&Local_412, 9);
				}
				if (unk_0x7404950238A154C2(Local_412.f_4, 0))
				{
					if (!unk_0x04C377C10639B842(Local_412.f_2, Local_412.f_4, 0))
					{
						func_192(&Local_412);
						func_262(&Local_412, 5);
					}
				}
				break;
			
			case 9:
				if (!func_191(Local_412.f_82, 16384) && func_190(&Local_412) != 35)
				{
					if (func_189(&Local_412))
					{
						if (func_273(&Local_412))
						{
							if (func_188(Local_412.f_4, Local_412.f_17, 1) <= 80f)
							{
								func_186(&uLocal_1001);
								func_185(&Local_971, 4, 0);
								func_200(&Local_412, 35, 1, 1, 0);
								unk_0xA9DF4B73BBB06CE5(0);
							}
						}
					}
				}
				if (!iLocal_869)
				{
					if (func_189(&Local_412))
					{
						if (func_273(&Local_412))
						{
							if (func_188(Local_412.f_4, Local_412.f_17, 1) <= 100f)
							{
								unk_0x7BEFD33B400C27C1(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_869 = 1;
							}
						}
					}
				}
				if (func_168(&Local_412, 1086324736, 1097859072, 1117782016))
				{
					iLocal_859 = 0;
					unk_0x9DA87A96BDB876EC(Local_412.f_9, 0);
					Local_412.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_412.f_34 = 238.52f;
					func_268(&Local_412, 6, 0, 0);
					func_166(&(Local_412.f_81), 67108864);
					func_200(&Local_412, 28, 1, 1, 0);
					Local_412.f_417 = 29;
					func_262(&Local_412, 16);
				}
				break;
			
			case 16:
				if (!unk_0x5FEB513A4402FD59(Local_412.f_3))
				{
					if (func_189(&Local_412))
					{
						func_164(&Local_412, Local_844);
					}
					else if (unk_0xFA1212DE7C455679(Local_412.f_3, 451360105) == 7)
					{
						unk_0xA3561415EB3DA3A3(&uLocal_843);
						unk_0xEAD984C2869B8B7C(&uLocal_843);
						unk_0xD91194CE3D1E1D77(0, Local_844, 1.5f, 40000, 1048576000, 0, 1193033728);
						unk_0xD91194CE3D1E1D77(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0xD91194CE3D1E1D77(0, Local_847, 3f, 40000, 1048576000, 0, 1193033728);
						unk_0x56D9ED1541046AF6(uLocal_843);
						unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
						unk_0xA3561415EB3DA3A3(&uLocal_843);
						unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
						func_268(&Local_412, 6, 0, 0);
						func_262(&Local_412, 17);
						iLocal_860 = 0;
					}
				}
				break;
			
			case 17:
				if (!unk_0x5FEB513A4402FD59(Local_412.f_3))
				{
				}
				if (!iLocal_860)
				{
					func_156();
				}
				if (func_273(&Local_412))
				{
					if (!unk_0x515B65C19A5CA9B1(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0))
					{
						if (func_188(Local_412.f_4, Local_412.f_17, 1) > 250f)
						{
							func_314(&Local_412, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_154(Local_412.f_3, 1) > 10f)
						{
							if (unk_0x8849D149F1DEE8C1(Local_412.f_9) == 0 && !bLocal_862)
							{
								func_151(&Local_412, 1);
								unk_0xAC6C9BCDC1EB8365("TAXI_OBJ_CYI_01");
							}
							func_200(&Local_412, 57, 1, 0, 1);
						}
					}
					else if (unk_0xFBACB273AA628CC5(Local_412.f_9) && unk_0x8849D149F1DEE8C1(Local_412.f_9) > 0)
					{
						unk_0x9DA87A96BDB876EC(Local_412.f_9, 0);
						unk_0x116FDB7E27590C7F(Local_412.f_9, 0);
						func_200(&Local_412, 29, 1, 0, 1);
						unk_0xAC6C9BCDC1EB8365("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_861)
					{
						iLocal_861 = 1;
					}
					func_140(&Local_412, 1);
				}
				if (((unk_0x515B65C19A5CA9B1(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0) && unk_0x515B65C19A5CA9B1(Local_412.f_3, Local_847, 5f, 5f, 5f, false, 1, 0)) && func_290(&Local_412)) && !iLocal_860)
				{
					if (!unk_0x5FEB513A4402FD59(Local_412.f_3))
					{
						if (unk_0x895C275673BCEAB0(Local_412.f_3))
						{
							unk_0xF3148AAF69AF9CBC(&uLocal_937, 8);
							unk_0x8E4A427F5C43E416(Local_412.f_3, joaat("weapon_combatpistol"), 50, 0, 1);
							unk_0xEF25BC5CC730041D(Local_412.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, joaat("FIRING_PATTERN_BURST_FIRE"));
							unk_0xABA9860C0161F3CD(Local_412.f_3, 0);
							unk_0x57B73553960790B6(Local_412.f_3, 0);
							unk_0x210A4A0B257F8433(Local_412.f_3, 1);
							unk_0xB067093BBAF0A747(Local_412.f_3, 339.9392f, -992.9357f, 28.3731f, 1, 0, 0, 1);
							iLocal_860 = 1;
							func_268(&Local_412, 6, 0, 0);
						}
					}
				}
				if (iLocal_860)
				{
					if ((func_138(&Local_412, 6) > 8f && unk_0x515B65C19A5CA9B1(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0)) && func_290(&Local_412))
					{
						if (!unk_0x5FEB513A4402FD59(Local_412.f_3))
						{
							if (unk_0x895C275673BCEAB0(Local_412.f_3))
							{
								unk_0xC69E84EBBD7166E6(&uLocal_937, 8);
								unk_0xABA9860C0161F3CD(Local_412.f_3, 1);
								unk_0x57B73553960790B6(Local_412.f_3, 1);
								unk_0x210A4A0B257F8433(Local_412.f_3, 0);
								unk_0xB067093BBAF0A747(Local_412.f_3, Local_847, 1, 0, 0, 1);
								unk_0x03F73D35E5AC583A(Local_412.f_3, 8, 1, 0, 0);
								if (unk_0x7404950238A154C2(Local_412.f_4, 0))
								{
									unk_0xCE566DBDCACD245E(Local_412.f_3, 118, 0);
									unk_0x1E2B48EE3EC55DCF(Local_412.f_3);
									uVar0 = func_137(Local_412.f_4, Local_412.f_3);
									unk_0xA3561415EB3DA3A3(&uLocal_843);
									unk_0xEAD984C2869B8B7C(&uLocal_843);
									unk_0x3B7399E54E7916C6(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, 0, 786603, -1082130432);
									unk_0x3E27A0036E184873(0, 1);
									unk_0x6AF3EDD9BB3236C1(0, 0);
									unk_0x3C3A95141D01773E(0, Local_412.f_4, 40000, uVar0, 1073741824, 1, 0);
									unk_0x56D9ED1541046AF6(uLocal_843);
									unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
									unk_0xA3561415EB3DA3A3(&uLocal_843);
									func_268(&Local_412, 6, 0, 0);
									if (unk_0xFBACB273AA628CC5(Local_412.f_9))
									{
										unk_0x9DA87A96BDB876EC(Local_412.f_9, 0);
										unk_0x116FDB7E27590C7F(Local_412.f_9, 0);
									}
									unk_0x4AA63E48994C4A78(Local_412.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_262(&Local_412, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_138(&Local_412, 6) > 23f)
				{
					if (!unk_0x5FEB513A4402FD59(Local_412.f_3))
					{
						unk_0x27CC98B7C879C320(Local_412.f_3);
						unk_0x2911FA855456BA78(Local_412.f_3, unk_0x81873881071CD9FE(), -1, 0);
					}
					func_314(&Local_412, "player didn't let teh Passenger in", 8);
				}
				else if ((unk_0x48E480685981C7D4() % 1000) < 50)
				{
				}
				if ((unk_0x515B65C19A5CA9B1(Local_412.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, 1, 0) && unk_0x515B65C19A5CA9B1(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0)) && iLocal_860)
				{
					unk_0x337FDC38F86A8A02(344.5906f, -996.409f, 28.30219f, 4, 1056964608, 1, 0, 1065353216);
					unk_0x5A24D808FBE871F7(iLocal_874, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0, 0, 0);
					iLocal_860 = 0;
				}
				if (func_189(&Local_412))
				{
					unk_0xA9DF4B73BBB06CE5(1);
					unk_0x9979AC3F15FA9FCF(unk_0xEC537F0C0E8265EE(), 2, 0);
					unk_0x2E2A75923F20DCD2(unk_0xEC537F0C0E8265EE(), 0);
					unk_0xF2A6D4C99549CA85("TAXI_CUT_U_IN");
					func_197(func_204(0), 1, 1114636288);
					unk_0xF8E77F310A5B6EAB(5, Local_412.f_413, joaat("COP"));
					func_135(6, 2);
					func_200(&Local_412, 49, 1, 0, 0);
					if (unk_0xFBACB273AA628CC5(Local_412.f_9))
					{
						unk_0x116FDB7E27590C7F(Local_412.f_9, 0);
						unk_0x0A8175F24237A3D4(&(Local_412.f_9));
					}
					func_274(&uLocal_44, 0, 0);
					func_268(&Local_412, 6, 0, 0);
					func_268(&Local_412, 9, 0, 0);
					func_268(&Local_412, 7, 0, 0);
					func_262(&Local_412, 25);
				}
				break;
			
			case 25:
				func_134(&Local_412, &(Local_412.f_43));
				if (func_191(Local_412.f_44, 4))
				{
					func_132(&(Local_412.f_44), 4);
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) > 0)
				{
					if (!func_131(&Local_412))
					{
						if (!unk_0xE1772957381F609F())
						{
							if ((func_138(&Local_412, 16) > unk_0x3ECD26BA4F631EE2(15f, 25f) && iLocal_876 < 8) || func_138(&Local_412, 16) > unk_0x3ECD26BA4F631EE2(25f, 35f))
							{
								if (func_190(&Local_412) != 51)
								{
									func_200(&Local_412, 51, 1, 0, 0);
									iLocal_876++;
								}
								else
								{
									func_229(&Local_412, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1 && func_138(&Local_412, 6) > 10f)
				{
					unk_0x0C22E352114F699C("TAXI_CUT_U_IN");
					func_262(&Local_412, 26);
					func_166(&(Local_412.f_44), 1);
				}
				break;
			
			case 26:
				func_134(&Local_412, &(Local_412.f_43));
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) > 0)
				{
					if (!func_131(&Local_412))
					{
						if (!unk_0xE1772957381F609F())
						{
							if ((func_138(&Local_412, 16) > unk_0x3ECD26BA4F631EE2(15f, 25f) && iLocal_876 < 8) || func_138(&Local_412, 16) > unk_0x3ECD26BA4F631EE2(25f, 35f))
							{
								if (func_190(&Local_412) != 51)
								{
									func_200(&Local_412, 51, 1, 0, 0);
									iLocal_876++;
								}
								else
								{
									func_229(&Local_412, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1 && func_138(&Local_412, 9) > 2f)
				{
					if (func_138(&Local_412, 9) <= 180f)
					{
						func_130(&Local_412, 0);
					}
					unk_0xF8E77F310A5B6EAB(0, Local_412.f_413, joaat("COP"));
					Local_412.f_17 = { func_204(5) };
					func_135(7, 2);
					func_129(&Local_412);
					func_128(&Local_412, 9, 0);
					func_128(&Local_412, 2, 0);
					func_128(&Local_412, 3, 0);
					if (!func_191(Local_412.f_44, 4))
					{
						func_166(&(Local_412.f_44), 4);
					}
					Local_412.f_116 = 1;
					func_262(&Local_412, 14);
				}
				break;
			
			case 14:
				if (!func_126(&Local_412))
				{
					func_123();
					func_151(&Local_412, 1);
					func_122();
					func_262(&Local_412, 22);
				}
				break;
			
			case 22:
				if (!bLocal_864)
				{
					if (Local_412.f_417 == 33 && unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
					{
						bLocal_864 = true;
						func_166(&(Local_412.f_44), 4);
						func_121(&iLocal_874);
						Local_971.f_27++;
					}
				}
				if (bLocal_864)
				{
					if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) > 0)
					{
						if (unk_0xFBACB273AA628CC5(Local_412.f_9))
						{
							unk_0x116FDB7E27590C7F(Local_412.f_9, 0);
							unk_0x0A8175F24237A3D4(&(Local_412.f_9));
						}
					}
					else
					{
						func_151(&Local_412, 1);
					}
				}
				if (func_191(Local_412.f_44, 1) && bLocal_864)
				{
					func_132(&(Local_412.f_44), 1);
					if (bLocal_970)
					{
					}
				}
				if (!func_191(Local_412.f_82, 32768) && func_190(&Local_412) != 36)
				{
					if (func_189(&Local_412))
					{
						if (func_273(&Local_412))
						{
							if (func_188(Local_412.f_4, Local_412.f_17, 1) <= 300f)
							{
								if (!func_120())
								{
									func_200(&Local_412, 36, 1, 1, 0);
								}
								else
								{
									func_118();
								}
								if (iLocal_863 && !iLocal_866)
								{
									unk_0x7C6BF0CD5D7454C9(Local_412.f_17, 3f, 0, 0, 0, 0);
									uLocal_967 = unk_0x13705C66F125D98D(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0, 1, 1, 1);
									uLocal_954[0] = unk_0x206897C6DBC12488(6, func_267(3), -1036.502f, -2742.986f, 20.16969f, 0, 1, 1);
									uLocal_954[1] = unk_0x206897C6DBC12488(6, func_267(3), -1043.706f, -2739.234f, 19.16969f, 0, 1, 1);
									unk_0x8E4A427F5C43E416(uLocal_954[0], joaat("weapon_carbinerifle"), -1, 1, 1);
									unk_0x8E4A427F5C43E416(uLocal_954[1], joaat("weapon_carbinerifle"), -1, 1, 1);
									if (unk_0x0A29420931EAA99E(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
									{
										unk_0xFE0C02098B6EFBD1(uLocal_954[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										unk_0x0E13137B34FB5F45(uLocal_954[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (unk_0x0A29420931EAA99E(-1043.706f, -2739.234f, 19.16969f, 5f, 1))
									{
										unk_0xFE0C02098B6EFBD1(uLocal_954[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										unk_0x0E13137B34FB5F45(uLocal_954[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_866 = 1;
								}
							}
						}
					}
				}
				if (func_168(&Local_412, 1086324736, 1097859072, 1117782016))
				{
					Local_971.f_0 = 0;
					unk_0x0A8175F24237A3D4(&(Local_412.f_9));
					func_116(&Local_412);
					func_112(&Local_412);
					func_111();
					func_262(&Local_412, 27);
				}
				break;
			
			case 27:
				if (func_109() && !iLocal_865)
				{
					func_108(&Local_412, &iVar1);
					uLocal_842 = unk_0xF364195A57BB7AE3(joaat("p_banknote_s"), unk_0xB6AE0DAE06D56288(Local_412.f_3, 1), 1, 1, 0);
					unk_0x75F9EE7629363312(uLocal_842, Local_412.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!unk_0x5FEB513A4402FD59(Local_412.f_3) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0x31C1393E4ACFD794(Local_412.f_3, "oddjobs@taxi@cyi", func_107(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x31C1393E4ACFD794(unk_0x81873881071CD9FE(), "oddjobs@taxi@cyi", func_106(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x72C254C049438316(uLocal_842, func_105(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0, 0);
					}
					iLocal_865 = 1;
				}
				if (func_98(&Local_412, 1))
				{
					unk_0xA3561415EB3DA3A3(&uLocal_843);
					unk_0xEAD984C2869B8B7C(&uLocal_843);
					unk_0x98046F3D16B9CF76(0, 0, 0);
					unk_0x3E27A0036E184873(0, 0);
					unk_0xF64D185C5B88AF31(0);
					unk_0xD91194CE3D1E1D77(0, Local_412.f_29, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					unk_0x56D9ED1541046AF6(uLocal_843);
					unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
					unk_0x6CB332CB31E9FA96(Local_412.f_3, 1);
					unk_0x4AA63E48994C4A78(Local_412.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_262(&Local_412, 29);
				}
				break;
			
			case 29:
				if (func_71(&Local_412, &uLocal_944))
				{
					if (iLocal_863 || iLocal_873 == -1)
					{
						func_262(&Local_412, 28);
					}
					else
					{
						func_11(1, &Local_412, 1);
						func_262(&Local_412, 30);
					}
				}
				break;
			
			case 28:
				if (func_9())
				{
					func_11(1, &Local_412, 1);
					func_262(&Local_412, 30);
				}
				break;
			
			case 30:
				func_416();
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
	if (iLocal_873 > 2)
	{
		unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
	}
	switch (iLocal_873)
	{
		case -1:
			iLocal_873++;
			break;
		
		case 0:
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			unk_0xA9DF4B73BBB06CE5(0);
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 256);
			unk_0xD91194CE3D1E1D77(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 1048576000, 0, 1193033728);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(Local_412.f_3, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
			iLocal_968 = unk_0xE00F8DEA9778FC87(func_267(4), -1067.146f, -2579.632f, 19.7762f, 150f, 1, 1);
			iLocal_957 = unk_0x4D135F3066A9BF9C(iLocal_968, 26, func_267(3), -1, 1, 1);
			func_268(&Local_412, 9, 0, 0);
			iLocal_873++;
			break;
		
		case 1:
			if (func_138(&Local_412, 9) > 0.5f)
			{
				if (!unk_0x930F8FBB8E9537CC(Local_412.f_3))
				{
					if (!unk_0x930F8FBB8E9537CC(uLocal_954[0]))
					{
						unk_0xAF625598EDA64AD3(uLocal_954[0], Local_412.f_3, -1, 2049, 3);
						func_7(&(Local_412.f_244), 4, uLocal_954[0], "TaxiOJCop1", 0, 1);
						unk_0xEF1A2C5B3EE83E3E(uLocal_954[0], "TaxiOJCop1");
					}
					if (!unk_0x930F8FBB8E9537CC(uLocal_954[1]))
					{
						unk_0xAF625598EDA64AD3(uLocal_954[1], Local_412.f_3, -1, 2049, 3);
					}
				}
				iLocal_873++;
			}
			break;
		
		case 2:
			if ((!unk_0x930F8FBB8E9537CC(uLocal_954[0]) && !unk_0x930F8FBB8E9537CC(uLocal_954[1])) && !unk_0x930F8FBB8E9537CC(Local_412.f_3))
			{
				if (unk_0xD1FFD959917D4ED8(Local_412.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0, 1, 0))
				{
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0xF450705EF1F7E415(0, Local_412.f_3, Local_412.f_3, 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xE7D69AA8A129E7D3(0, Local_412.f_3, -1, 0);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(uLocal_954[0], uVar0);
					unk_0xA3561415EB3DA3A3(&uVar0);
					unk_0x6CB332CB31E9FA96(uLocal_954[0], 1);
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0x52A7A8711E08087B(0, 1500);
					unk_0xE7D69AA8A129E7D3(0, Local_412.f_3, 2000, 0);
					unk_0xF450705EF1F7E415(0, Local_412.f_3, Local_412.f_3, 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xE7D69AA8A129E7D3(0, Local_412.f_3, -1, 0);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(uLocal_954[1], uVar0);
					unk_0xA3561415EB3DA3A3(&uVar0);
					unk_0x6CB332CB31E9FA96(uLocal_954[1], 1);
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0xF88735A9354A45F3(0, uLocal_954[0], 3);
					unk_0xAF625598EDA64AD3(0, uLocal_954[0], -1, 2049, 3);
					unk_0x52A7A8711E08087B(0, 1000);
					unk_0x197CE92C1E34D4B6(0, -1, 0, -1, 0);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(Local_412.f_3, uVar0);
					unk_0xA3561415EB3DA3A3(&uVar0);
					func_200(&Local_412, 54, 1, 0, 0);
					iLocal_875 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uLocal_958, -1);
					iVar4 = 0;
					while (iVar4 < iLocal_875)
					{
						if (((((uLocal_958[iVar4] != unk_0x81873881071CD9FE() && uLocal_958[iVar4] != Local_412.f_3) && uLocal_958[iVar4] != uLocal_954[1]) && uLocal_958[iVar4] != uLocal_954[0]) && uLocal_958[iVar4] != iLocal_957) && !unk_0xE86442941AE40E75(uLocal_958[iVar4]))
						{
							unk_0xD768713E73165208(uLocal_958[iVar4], 1, 1);
							unk_0x754376E2234CBB4A(uLocal_958[iVar4], Local_412.f_3, 100f, -1, 0, 0);
						}
						iVar4++;
					}
					func_268(&Local_412, 9, 0, 0);
					iLocal_873++;
				}
			}
			break;
		
		case 3:
			if (func_138(&Local_412, 9) > 5f && !func_120())
			{
				unk_0xF8E77F310A5B6EAB(5, iLocal_969, joaat("COP"));
				unk_0xF8E77F310A5B6EAB(5, joaat("COP"), iLocal_969);
				unk_0x5F446E70DA9B8122(Local_412.f_3, &iVar5, 1);
				if (iVar5 == joaat("weapon_unarmed"))
				{
					unk_0x8E4A427F5C43E416(Local_412.f_3, joaat("weapon_combatpistol"), -1, 0, 1);
				}
				unk_0x4B9FA68A3AC8C29D(Local_412.f_3, 13, 1);
				unk_0x4B9FA68A3AC8C29D(Local_412.f_3, 24, 1);
				unk_0xA97FB3A1E6744863(Local_412.f_3, 2);
				unk_0xAB16694DD7739E39(Local_412.f_3, 1);
				unk_0xD31C3826B16CD027(Local_412.f_3, 80);
				unk_0xEC29A7F05A3AA03E(Local_412.f_3, 50f, 0);
				func_268(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			if ((unk_0xBBEF8270CE27C0EE(uLocal_954[0], unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(uLocal_954[1], unk_0x81873881071CD9FE(), 1)) && !unk_0x5FEB513A4402FD59(Local_412.f_3))
			{
				unk_0x754376E2234CBB4A(Local_412.f_3, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
				func_268(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 4:
			if (unk_0x930F8FBB8E9537CC(Local_412.f_3))
			{
				if (!unk_0x930F8FBB8E9537CC(uLocal_954[0]))
				{
					unk_0x27CC98B7C879C320(uLocal_954[0]);
					if (unk_0x0A29420931EAA99E(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
					{
						unk_0xFE0C02098B6EFBD1(uLocal_954[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						unk_0x0E13137B34FB5F45(uLocal_954[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					unk_0x6CB332CB31E9FA96(uLocal_954[0], 1);
				}
				if (!unk_0x930F8FBB8E9537CC(uLocal_954[1]))
				{
					unk_0x27CC98B7C879C320(uLocal_954[1]);
					Var1 = { unk_0xB6AE0DAE06D56288(Local_412.f_3, 0) };
					unk_0xA3561415EB3DA3A3(&uVar0);
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0xC5A6BA63DF40D65A(0, Var1, Var1, 1f, 0, 3f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x9746FEAEDB7B010A(0, Var1, 500, 0, 0);
					unk_0x71D4A7422520E90F(0, Var1, -1, 2049, 3);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(uLocal_954[1], uVar0);
					unk_0x6CB332CB31E9FA96(uLocal_954[0], 1);
				}
				return 1;
			}
			else
			{
				if (func_138(&Local_412, 9) > 6f)
				{
					func_200(&Local_412, 140, 1, 0, 1);
					func_268(&Local_412, 9, 0, 0);
				}
				if (unk_0x930F8FBB8E9537CC(uLocal_954[0]) && unk_0x930F8FBB8E9537CC(uLocal_954[1]))
				{
					unk_0x27CC98B7C879C320(Local_412.f_3);
					unk_0x754376E2234CBB4A(Local_412.f_3, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
				}
				if (func_154(Local_412.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_268(&Local_412, 9, 0, 0);
			iLocal_873++;
			break;
		
		case 5:
			if (func_138(&Local_412, 9) > 2f)
			{
				func_268(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 6:
			if (func_138(&Local_412, 9) > 2f)
			{
				Var1 = { unk_0xFF603DE3EBE2C5F9(iLocal_968, func_10(5)) };
				func_268(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 7:
			if (func_138(&Local_412, 9) >= 1f)
			{
				iLocal_873++;
			}
			break;
		
		case 8:
			iLocal_873++;
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
		func_47(uParam1);
		if (!unk_0x5FEB513A4402FD59(uParam1->f_3))
		{
			unk_0xCE566DBDCACD245E(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_135(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_46(uParam0);
	if (func_120())
	{
		func_44();
	}
	func_42();
	unk_0xD1C83BD797927DD5();
	unk_0xB8BB626315D394F5(1);
	func_39(0);
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		unk_0x50C9C2E3327FDF31(uParam0->f_4, 0);
		unk_0x298028A164A4361E(uParam0->f_4);
		unk_0x3DD8579AB91A77D6(uParam0->f_4);
	}
	func_35(uParam0->f_14, 1);
	func_197(uParam0->f_14, 1, 1114636288);
	func_34(&(uParam0->f_244), 3);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
	if (func_31())
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	}
	unk_0x0C64B47F8E6AF117(1);
	func_22(0, 1, 1, 0);
	unk_0x3BF4F473786B0150(1);
	unk_0xF1BC58601CA4A5C7(1);
	if (unk_0x42E36F2D658EB2FF(*uParam0))
	{
		unk_0x35B958B469415A23(*uParam0, 0);
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0x0D7089406F6A5C6E(1);
	}
	if (func_191(Global_98931.f_17711, 4))
	{
		func_132(&(Global_98931.f_17711), 4);
		unk_0xB5A91586385F755B(func_21(), 0);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0xD8323B49BAE93D80("gestures@m@standing@casual");
	unk_0xD8323B49BAE93D80("oddjobs@taxi@");
	unk_0xD8323B49BAE93D80("oddjobs@towingcome_here");
	if (unk_0x1F2C82EFDAD19C5D())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0xF26CA0663D2E037E(unk_0xEC537F0C0E8265EE()))
	{
		unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
	}
	unk_0x0B7846B087E72031(unk_0xF2DB717A73826179((func_13(&uLocal_89) * 1000f)), 12, 0);
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
			return (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x4357449749A521B1(&uVar0))
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
	unk_0x1E44650C8D87E0AD(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_3))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (!unk_0xE5AB05962FA1FF3F(uParam0->f_3, 0))
			{
				unk_0x40C2DE5A3C7D6ACD(uParam0->f_3);
			}
			unk_0x1D15D99A10A15334(uParam0->f_3, 0);
			unk_0xF8E77F310A5B6EAB(255, uParam0->f_413, joaat("player"));
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x71A8BCA218722FA1(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_30(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_29())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_30(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_23(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_23(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_24())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1312729;
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_29()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_31()
{
	if (!func_33() && !func_32())
	{
		if (!unk_0x16062BE231E411A0(unk_0xEC537F0C0E8265EE()))
		{
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	if (unk_0x968BF1C2C695B61A(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
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

void func_35(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_37(Param0, func_38(), 0))
	{
		Var0 = { func_36(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_36(Param0, 1f, 30f, 30f, 10f) };
		unk_0x3DD1ED742E99F292(Var0, Var3, iParam3, 1);
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

bool func_37(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_38()
{
	struct<3> Var0;
	
	return Var0;
}

void func_39(int iParam0)
{
	if (Global_14552)
	{
		func_40(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_29())
	{
		Global_14394.f_1 = 3;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_41(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
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
		if (Global_88075[iVar0 /*17*/] && !Global_88075[iVar0 /*17*/].f_1)
		{
			if (Global_88075[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88075[iVar0 /*17*/].f_5 != 88 && Global_88075[iVar0 /*17*/].f_5 != 89) && Global_88075[iVar0 /*17*/].f_5 != 92)
				{
					func_43(Global_88075[iVar0 /*17*/].f_5, 1);
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
			Global_85127[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85127[iParam0 /*2*/] = 0;
	}
}

void func_44()
{
	Global_14559 = 0;
	func_45();
}

void func_45()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_46(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0->f_8))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_8));
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_9))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_9));
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_10))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_10));
	}
}

void func_47(var uParam0)
{
	func_135(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_419(1);
		func_57(15, 1);
	}
	func_166(&(Global_98931.f_17711), 1024);
	if (!func_191(Global_98931.f_17711, 64))
	{
		func_48(func_55(func_56(uParam0)), 0, 0);
	}
}

void func_48(int iParam0, int iParam1, int iParam2)
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
		func_54((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_49();
	}
}

void func_49()
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_53(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_52() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_50();
				}
			}
		}
	}
}

int func_50()
{
	if (func_51(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_51(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_52()
{
	return Global_24946;
}

int func_53(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(var uParam0)
{
	return uParam0->f_411;
}

int func_57(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
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
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_68(&Global_2550589))
	{
		if (func_66(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_59(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
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
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	return (*uParam0)[iParam1] == 70;
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
	func_64(uParam0, (Global_2550588 - 0.5f));
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_64(var uParam0, float fParam1)
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

float func_65(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
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
	return Global_35443 == iParam0;
}

int func_71(var uParam0, var uParam1)
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_120() && func_138(uParam0, 0) > 1f)
			{
				if (func_31())
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				}
				func_97(uParam0);
				func_132(&(Global_98931.f_17711), 4096);
				func_95(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_96(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x35D7948F61AA3FEC(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_94(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_88(uParam1, 0))
			{
				func_72(uParam0);
				func_268(uParam0, 0, 0, 0);
				func_94(0);
				iLocal_167 = 7;
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
		func_73(func_86(), 21, iVar0, 0, 0);
		func_135(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_74(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
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
	
	func_85();
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
					func_84(99, 1);
					func_83(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_82(0);
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
							func_83(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_83(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_83(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_83(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_84(95, iParam3);
					break;
				
				case 1:
					func_84(97, iParam3);
					break;
				
				case 2:
					func_84(96, iParam3);
					break;
			}
			func_84(98, iParam3);
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
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_83(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_76(iParam0);
	if (Global_35443 == 15)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_79() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_79() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_78(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_84(93, iParam0);
	func_84(29, iParam0);
	func_84(30, iParam0);
}

bool func_81(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_79() /*9662*/].f_7252.f_10, iParam0);
}

int func_82(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_53(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_57(27, 1);
	return 1;
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_85()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_86()
{
	func_87();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_87()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_4(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_3(unk_0x81873881071CD9FE());
			if (func_5(iVar0) && (!func_70(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_5(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

int func_88(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_92(&(uParam0->f_2));
	}
	unk_0xC9A352663D97EFC3(14);
	unk_0x88188CE25DF2572C(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x093DEAE9A023FAA0(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_92(&(uParam0->f_5));
				func_91(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_90(&(uParam0->f_5)) > 0.33f)
			{
				func_89(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_90(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_92(&(uParam0->f_5));
			func_91(uParam0, 1051260355);
		}
		else if (func_90(&(uParam0->f_5)) > 0.33f)
		{
			func_89(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_89(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_90(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_91(var uParam0, int iParam1)
{
	unk_0x21ED0FC9B5CC748B(*uParam0, "SHARD_ANIM_OUT");
	unk_0xBD0C54D89298454E(uParam0->f_9);
	unk_0x518198639630AE08(iParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_92(var uParam0)
{
	func_93(uParam0, 0f);
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_94(int iParam0)
{
	Global_69280 = iParam0;
	Global_69281 = iParam0;
}

void func_95(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x21ED0FC9B5CC748B(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0xDB5ED960DFB0E4DF(iParam9);
	unk_0x072D7B028D6C7A05(sParam1);
	unk_0xC3822F70D0E7940B();
	unk_0x6CE839BF5D87A428(sParam7);
	unk_0x6D55FF05D62B91BC(uParam2);
	unk_0x6D55FF05D62B91BC(uParam3);
	unk_0x072D7B028D6C7A05(uParam6);
	unk_0x6D55FF05D62B91BC(uParam5);
	unk_0x6D55FF05D62B91BC(iParam4);
	unk_0xC3822F70D0E7940B();
	unk_0xBA9BA6181F2B6111();
	func_92(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_96(var uParam0)
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

void func_97(var uParam0)
{
	int iVar0;
	
	Local_168.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_168.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_135(11, uParam0->f_56);
	func_135(12, uParam0->f_56);
	iLocal_56[1] = uParam0->f_56;
	iLocal_56[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x236D8AD7EE179F46(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168.f_0 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}

int func_98(var uParam0, bool bParam1)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_189(uParam0) && func_102(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_101(uParam0, 2097152))
				{
					func_99(uParam0);
				}
			}
			else
			{
				func_99(uParam0);
			}
		}
		else if (!func_189(uParam0))
		{
			if (bParam1)
			{
				if (func_101(uParam0, 2097152))
				{
					if (unk_0xFA1212DE7C455679(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xFA1212DE7C455679(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_99(var uParam0)
{
	struct<3> Var0;
	
	if (func_100(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_164(uParam0, Var0);
}

int func_100(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_101(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_191(uParam0->f_81, iParam1) && !func_120());
	}
	return func_120();
}

int func_102(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_41(1))
			{
				func_39(0);
			}
			if (func_31())
			{
				func_104();
				return 1;
			}
			else if (func_103(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, 256);
				}
				else
				{
					unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, 0);
				}
			}
			unk_0x1F501FD3B3C3CF73(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_103(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_104()
{
	if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
	{
		unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
	}
}

char* func_105(int iParam0)
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

char* func_106(int iParam0)
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

char* func_107(int iParam0)
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

int func_108(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 1);
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 2);
			if (unk_0x86CCCD2FAE9D5E65(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 0);
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_109()
{
	Local_931 = { func_110() };
	if ((((((((unk_0xD994929E13CC1ED5(&cLocal_877, &Local_931) || unk_0xD994929E13CC1ED5(&cLocal_883, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_889, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_895, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_901, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_907, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_913, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_919, &Local_931)) || unk_0xD994929E13CC1ED5(&cLocal_925, &Local_931))
	{
		return 1;
	}
	return 0;
}

struct<6> func_110()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_111()
{
	if (Local_412.f_56 >= Local_412.f_59)
	{
		Local_412.f_56 = 10000;
	}
	else if (Local_412.f_56 <= 0)
	{
		Local_412.f_56 = 0;
	}
	else
	{
		Local_412.f_56 = 5000;
	}
}

void func_112(var uParam0)
{
	func_114();
	unk_0xD1C83BD797927DD5();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_200(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_200(uParam0, 103, 1, 0, 0);
		}
		func_113(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_200(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_200(uParam0, 102, 1, 0, 0);
	}
	func_268(uParam0, 16, 4f, 0);
}

void func_113(int iParam0)
{
	Global_97643.f_221 = iParam0;
}

void func_114()
{
	Global_14559 = 0;
	func_115();
}

void func_115()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_116(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_117(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_135(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_135(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_117(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_118()
{
	Global_14559 = 0;
	func_119();
}

void func_119()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

int func_120()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x98A5E5B909F1B162(*iParam0);
		unk_0x54206B7CE6FF2360(*iParam0);
		*iParam0 = -1;
	}
}

void func_122()
{
	unk_0x295DC04FC13E025B("oddjobs@taxi@cyi");
	unk_0x32A12757CBF48A33(joaat("p_banknote_s"));
}

void func_123()
{
	if (func_138(&Local_412, 7) < 75f && !iLocal_863)
	{
		Local_412.f_57 += 12;
		func_200(&Local_412, 30, 1, 0, 1);
	}
	else if (func_138(&Local_412, 7) > 150f || iLocal_863)
	{
		Local_412.f_57 = -10;
		func_200(&Local_412, 32, 1, 0, 1);
		iLocal_863 = 1;
		func_124();
	}
	else
	{
		Local_412.f_57 += 5;
		func_200(&Local_412, 31, 1, 0, 1);
	}
}

void func_124()
{
	unk_0x32A12757CBF48A33(func_267(3));
	unk_0x32A12757CBF48A33(func_267(4));
	unk_0x995DCDA796A47049(0, func_125(1));
}

char* func_125(int iParam0)
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

int func_126(var uParam0)
{
	if (func_120())
	{
		return 1;
	}
	if (func_127(uParam0, 17))
	{
		return 1;
	}
	if (func_127(uParam0, 14))
	{
		return 1;
	}
	if (func_131(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_127(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_128(var uParam0, int iParam1, bool bParam2)
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
			func_89(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_89(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_92(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_268(uParam0, 10, 0f, 1);
	unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
}

void func_130(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_131(var uParam0)
{
	return uParam0->f_110;
}

void func_132(var uParam0, int iParam1)
{
	func_133(uParam0, iParam1);
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_134(var uParam0, var uParam1)
{
	unk_0x15F87E22A114CC69(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_98931.f_17711.f_22[0]++;
			func_136("Fares Completed ++ = ", Global_98931.f_17711.f_22[0]);
			break;
		
		case 1:
			Global_98931.f_17711.f_22[1]++;
			func_136("Fares Failed ++ = ", Global_98931.f_17711.f_22[1]);
			break;
		
		case 2:
			Global_98931.f_17711.f_22[2]++;
			func_136("Fares Accepted ++ ", Global_98931.f_17711.f_22[2]);
			break;
		
		case 3:
			Global_98931.f_17711.f_22[3]++;
			func_136("Fares Expired ++ ", Global_98931.f_17711.f_22[3]);
			break;
		
		case 13:
			Global_98931.f_17711.f_22[13]++;
			func_136("Passengers run ++ = ", Global_98931.f_17711.f_22[13]);
			break;
		
		case 14:
			Global_98931.f_17711.f_22[14]++;
			func_136("Passenger Forced to Pay ++ = ", Global_98931.f_17711.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_98931.f_17711.f_22[4])
				{
					Global_98931.f_17711.f_22[4] = iParam1;
					func_136("This distance ", iParam1);
					func_136(" is longer than current best", Global_98931.f_17711.f_22[4]);
				}
				else
				{
					func_136("Longest Distance Not Beat ", Global_98931.f_17711.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_98931.f_17711.f_22[5] = (Global_98931.f_17711.f_22[5] + iParam1);
			func_136("Total Distance w/ Passenger = ", Global_98931.f_17711.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_98931.f_17711.f_22[6]++;
			}
			else
			{
				Global_98931.f_17711.f_22[6] = (Global_98931.f_17711.f_22[6] + iParam1);
			}
			func_136("Wanted Levels ++ = ", Global_98931.f_17711.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_98931.f_17711.f_22[7] = (Global_98931.f_17711.f_22[7] + iParam1);
			}
			else
			{
				Global_98931.f_17711.f_22[7]++;
			}
			func_136("Wanted Levels Lost = ", Global_98931.f_17711.f_22[7]);
			break;
		
		case 8:
			Global_98931.f_17711.f_22[8]++;
			func_136("Taxis wrecked ++ = ", Global_98931.f_17711.f_22[8]);
			break;
		
		case 9:
			Global_98931.f_17711.f_22[9]++;
			func_136("Horn Honked ++ = ", Global_98931.f_17711.f_22[9]);
			break;
		
		case 10:
			Global_98931.f_17711.f_22[10] = (Global_98931.f_17711.f_22[10] + iParam1);
			func_136("Total Money Earned = ", Global_98931.f_17711.f_22[10]);
			break;
		
		case 11:
			Global_98931.f_17711.f_22[11] = (Global_98931.f_17711.f_22[11] + iParam1);
			func_136("Total Tips Earned = ", Global_98931.f_17711.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_98931.f_17711.f_22[12])
			{
				Global_98931.f_17711.f_22[12] = iParam1;
				func_136("New Highest Tip = ", Global_98931.f_17711.f_22[12]);
			}
			else
			{
				func_136("Highest Tip Not Reached = ", Global_98931.f_17711.f_22[12]);
			}
			break;
	}
}

void func_136(char* sParam0, int iParam1)
{
}

int func_137(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x59D35AC211D17FAB(iParam0);
	Var0 = { unk_0xFF603DE3EBE2C5F9(iParam0, unk_0xB6AE0DAE06D56288(iParam1, 1)) };
	if (unk_0x14B7103DBD149FFE(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x14B7103DBD149FFE(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xA6D65D92671E7012(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xA6D65D92671E7012(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xA6D65D92671E7012(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xA6D65D92671E7012(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

float func_138(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_139(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_90(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_139(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_92(uParam0);
	}
}

void func_140(var uParam0, bool bParam1)
{
	func_150(uParam0, uParam0->f_3);
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_127(uParam0, 14))
			{
				if (func_120())
				{
					func_149(1);
				}
				func_148(uParam0, 11, 1);
				func_141(uParam0, 1);
				func_268(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_189(uParam0))
				{
					if ((unk_0x48E480685981C7D4() % 1000) < 50)
					{
					}
					if (unk_0xE5AB05962FA1FF3F(uParam0->f_2, 0))
					{
						if (func_138(uParam0, 15) > 5f)
						{
							func_268(uParam0, 15, 0f, 1);
						}
					}
					if (func_138(uParam0, 14) > 20f)
					{
						func_314(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_138(uParam0, 14) > 20f)
				{
					if (func_154(uParam0->f_4, 1) > 40f)
					{
						func_314(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_314(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_141(var uParam0, bool bParam1)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 0);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
				func_147(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xFBACB273AA628CC5(uParam0->f_9))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_9, 0);
				unk_0x116FDB7E27590C7F(uParam0->f_9, 0);
				unk_0xD1C83BD797927DD5();
				if (func_189(uParam0))
				{
					func_200(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_147(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_142(uParam0, 0, 0);
		}
		else if (unk_0xFBACB273AA628CC5(uParam0->f_10))
		{
			unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			if (unk_0xFBACB273AA628CC5(uParam0->f_8))
			{
				unk_0x9DA87A96BDB876EC(uParam0->f_8, 255);
				unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
			}
			else if (unk_0xFBACB273AA628CC5(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_9, 0);
					unk_0x116FDB7E27590C7F(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
					unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
				}
			}
			unk_0xD1C83BD797927DD5();
		}
	}
}

void func_142(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_46(uParam0);
	}
	if (!unk_0xFBACB273AA628CC5(uParam0->f_10))
	{
		uParam0->f_10 = func_145(uParam0->f_4, 1, 0);
		unk_0x2AB7C42FF2AF476D(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x116FDB7E27590C7F(uParam0->f_10, 1);
		func_143(uParam0);
		if (bParam2)
		{
			unk_0xD1C83BD797927DD5();
			func_200(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_143(var uParam0)
{
	func_268(uParam0, 14, 0, 0);
	func_144();
}

void func_144()
{
	int iVar0;
	
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		unk_0x058526005957A956(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_145(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_146(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_146(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_146(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_191(*uParam1, iParam2))
	{
		unk_0xD1C83BD797927DD5();
		func_200(uParam0, iParam3, 1, 0, 0);
		func_166(uParam1, iParam2);
	}
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_149(int iParam0)
{
	Global_16704 = iParam0;
}

void func_150(var uParam0, int iParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam1))
	{
		if (!unk_0x5FEB513A4402FD59(iParam1))
		{
			if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
			{
				if ((unk_0xB67A763C9B49A25F(iParam1, joaat("weapon_stungun"), 0) || unk_0xB67A763C9B49A25F(iParam1, 0, 2)) || unk_0xB67A763C9B49A25F(iParam1, 0, 1))
				{
					func_314(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			}
		}
	}
}

void func_151(var uParam0, bool bParam1)
{
	func_153(uParam0);
	if (bParam1)
	{
		if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
		{
			uParam0->f_9 = func_152(uParam0->f_17, 1);
		}
		else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
		{
			unk_0x0D1C36CA5AEDED55(1, 0);
			unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
			unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
			unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
		}
	}
}

var func_152(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_146(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

void func_153(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0->f_8))
	{
		unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
		unk_0x0A8175F24237A3D4(&(uParam0->f_8));
	}
}

float func_154(int iParam0, int iParam1)
{
	return func_155(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), iParam0, iParam1);
}

float func_155(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_156()
{
	if (bLocal_970)
	{
		func_163("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_870, 1000);
	}
	if (!unk_0x930F8FBB8E9537CC(Local_412.f_3))
	{
		switch (iLocal_1042)
		{
			case 0:
				if (func_188(Local_412.f_3, Local_844, 1) < 16f)
				{
					iLocal_1042 = 1;
				}
				break;
			
			case 1:
				if (func_154(Local_412.f_3, 1) < 10f)
				{
					unk_0x8E4A427F5C43E416(Local_412.f_3, joaat("weapon_combatpistol"), 50, 1, 1);
					unk_0xA3561415EB3DA3A3(&uLocal_843);
					unk_0xEAD984C2869B8B7C(&uLocal_843);
					unk_0xE7D69AA8A129E7D3(0, unk_0x81873881071CD9FE(), -1, 0);
					unk_0x56D9ED1541046AF6(uLocal_843);
					unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
					unk_0xA3561415EB3DA3A3(&uLocal_843);
					func_268(&Local_412, 12, 0, 0);
					iLocal_1042 = 2;
				}
				break;
			
			case 2:
				if (func_138(&Local_412, 12) > 1.5f)
				{
					if (iLocal_1043 != 5)
					{
						if (!unk_0x930F8FBB8E9537CC(Local_412.f_2))
						{
							if (unk_0x7404950238A154C2(Local_412.f_4, 0))
							{
								if (unk_0x04C377C10639B842(Local_412.f_2, Local_412.f_4, 0))
								{
									func_200(&Local_412, 56, 1, 0, 0);
								}
								else
								{
									func_200(&Local_412, 55, 1, 1, 0);
								}
							}
						}
						iLocal_867 = 0;
						iLocal_861 = 1;
						func_268(&Local_412, 12, 0, 0);
						func_161(&Local_412, 6);
						iLocal_1042 = 3;
					}
					else
					{
						func_128(&Local_412, 12, 0);
						iLocal_1042 = 9;
					}
				}
				break;
			
			case 3:
				if (func_154(Local_412.f_3, 1) >= 10f)
				{
					iLocal_1042 = 5;
				}
				else if (iLocal_868)
				{
					if (!func_120() && !unk_0xE1772957381F609F())
					{
						if (!iLocal_867)
						{
							func_268(&Local_412, 12, 0, 0);
							iLocal_867 = 1;
						}
						else if (func_138(&Local_412, 12) > 5f)
						{
							func_128(&Local_412, 12, 0);
							iLocal_1042 = 9;
						}
					}
				}
				else if (!iLocal_868)
				{
					if (func_159("txm8_lvMe1") || func_159("txm8_lvMe2"))
					{
						iLocal_868 = 1;
					}
				}
				break;
			
			case 5:
				func_157(&Local_412, 6);
				if (unk_0xFA1212DE7C455679(Local_412.f_3, 242628503) != 7)
				{
					unk_0xA3561415EB3DA3A3(&uLocal_843);
					unk_0xEAD984C2869B8B7C(&uLocal_843);
					unk_0xD91194CE3D1E1D77(0, Local_844, 1f, 40000, 1048576000, 0, 1193033728);
					unk_0xD91194CE3D1E1D77(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0xD91194CE3D1E1D77(0, Local_847, 3f, 40000, 1048576000, 0, 1193033728);
					unk_0x56D9ED1541046AF6(uLocal_843);
					unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
					unk_0xA3561415EB3DA3A3(&uLocal_843);
					iLocal_1043 = 5;
					iLocal_1042 = 0;
				}
				break;
			
			case 9:
				if (func_127(&Local_412, 12))
				{
					if (func_138(&Local_412, 12) > 2f)
					{
						func_268(&Local_412, 6, 0, 0);
						unk_0xA3561415EB3DA3A3(&uLocal_843);
						unk_0xEAD984C2869B8B7C(&uLocal_843);
						unk_0x2911FA855456BA78(0, unk_0x81873881071CD9FE(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x56D9ED1541046AF6(uLocal_843);
						unk_0xC65002CAA1212AF9(Local_412.f_3, uLocal_843);
						unk_0xA3561415EB3DA3A3(&uLocal_843);
						unk_0xF8E77F310A5B6EAB(5, Local_412.f_413, joaat("player"));
						unk_0x6CB332CB31E9FA96(Local_412.f_3, 1);
						bLocal_862 = true;
						if (unk_0xFBACB273AA628CC5(Local_412.f_9) && unk_0x8849D149F1DEE8C1(Local_412.f_9) > 0)
						{
							unk_0x9DA87A96BDB876EC(Local_412.f_9, 0);
							unk_0x116FDB7E27590C7F(Local_412.f_9, 0);
							unk_0xAC6C9BCDC1EB8365("TAXI_OBJ_CYI_1B");
						}
						iLocal_1042 = 10;
					}
				}
				else
				{
					func_268(&Local_412, 12, 0, 0);
					if (!unk_0x930F8FBB8E9537CC(Local_412.f_2))
					{
						if (unk_0x7404950238A154C2(Local_412.f_4, 0))
						{
							if (unk_0x04C377C10639B842(Local_412.f_2, Local_412.f_4, 0))
							{
								func_200(&Local_412, 56, 1, 0, 0);
							}
							else
							{
								func_200(&Local_412, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!unk_0xE1772957381F609F() && func_138(&Local_412, 6) > 2f)
				{
					func_314(&Local_412, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_157(var uParam0, int iParam1)
{
	if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_158(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_158(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			uParam0->f_1 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0xC69E84EBBD7166E6(uParam0, 2);
		}
	}
}

int func_159(char* sParam0)
{
	var uVar0;
	
	if (func_120())
	{
		MemCopy(&uVar0, {func_160()}, 4);
		if (unk_0xD994929E13CC1ED5(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_160()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

void func_161(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_162(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_162(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_162(var uParam0)
{
	if (func_16(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_14(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
			unk_0xF3148AAF69AF9CBC(uParam0, 2);
		}
	}
}

void func_163(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x48E480685981C7D4() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x48E480685981C7D4();
}

void func_164(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && unk_0x58A69336FE7307D8(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_165(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x0D6E79537424BACE(Var0, Param1, 0) < unk_0x0D6E79537424BACE(Var3, Param1, 0) && unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x0D6E79537424BACE(Var0, Param1, 0) >= unk_0x0D6E79537424BACE(Var3, Param1, 0) && unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x3535A48C04BEA949(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_165(int iParam0, int iParam1)
{
	if (!unk_0x930F8FBB8E9537CC(iParam0) && !unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (unk_0x58A69336FE7307D8(iParam0, iParam1))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_166(var uParam0, int iParam1)
{
	func_167(uParam0, iParam1);
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_168(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xECDEA377354CBDA4() && !unk_0xC11AD1609CFCCCE1()) && !unk_0xC584A413BCB2AA39()) && !unk_0x29AFA2493D7C23D0()) && !uParam0->f_142)
	{
		if (func_184(uParam0))
		{
			func_134(uParam0, &(uParam0->f_43));
			func_180(uParam0);
			func_179(uParam0);
			func_176(uParam0);
			func_174(uParam0, fParam2, fParam3);
			func_172(uParam0);
			return func_169(uParam0, iParam1);
		}
	}
	return 0;
}

int func_169(var uParam0, int iParam1)
{
	if (func_56(uParam0) == 2)
	{
		if (unk_0x515B65C19A5CA9B1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_171(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1) && func_170(1, 1, 1)) && unk_0x653781B2157A929D(uParam0->f_4))
		{
			return func_102(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x515B65C19A5CA9B1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1) && func_170(1, 1, 1)) && unk_0x653781B2157A929D(uParam0->f_4))
	{
		return func_102(uParam0, 1, iParam1);
	}
	return 0;
}

int func_170(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

float func_171(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_172(var uParam0)
{
	float fVar0;
	
	if ((func_189(uParam0) && func_191(uParam0->f_81, 67108864)) && unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
	{
		if ((unk_0x48E480685981C7D4() - iLocal_96) >= 10000)
		{
			fVar0 = func_173(uParam0->f_17, 1);
			if (fVar0 > fLocal_94)
			{
				iLocal_95++;
			}
			else
			{
				iLocal_95 = 0;
			}
			fLocal_94 = fVar0;
			iLocal_96 = unk_0x48E480685981C7D4();
		}
		if (iLocal_95 >= 2 && !func_120())
		{
			func_200(uParam0, 136, 1, 0, 1);
			iLocal_95 = 0;
		}
		if ((unk_0x48E480685981C7D4() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x48E480685981C7D4() % 4000) < 50)
		{
			if (!func_189(uParam0))
			{
			}
			if (!func_191(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
		{
			if (iLocal_95 > 0)
			{
				iLocal_95 = 0;
			}
		}
	}
}

float func_173(struct<3> Param0, int iParam3)
{
	return func_188(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), Param0, iParam3);
}

void func_174(var uParam0, float fParam1, float fParam2)
{
	if (func_189(uParam0) && func_191(uParam0->f_44, 4))
	{
		if ((unk_0x01C5771BE1D8ECE5(uParam0->f_4) || unk_0xA04824262F150982(uParam0->f_4) < 3f) && func_290(uParam0))
		{
			if (!func_127(uParam0, 2))
			{
				func_175(uParam0, 2);
			}
			else if (func_189(uParam0))
			{
				if (func_138(uParam0, 2) > fParam1 && !func_127(uParam0, 14))
				{
					if (func_33())
					{
						func_200(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_200(uParam0, 48, 1, 0, 0);
					}
					func_268(uParam0, 2, 0, 0);
					if (func_127(uParam0, 10))
					{
						func_268(uParam0, 10, 0, 0);
					}
				}
				if (!func_127(uParam0, 3))
				{
					func_268(uParam0, 3, 0, 0);
				}
				else if (func_138(uParam0, 3) >= fParam2)
				{
					func_128(uParam0, 3, 0);
					func_314(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_127(uParam0, 2))
			{
				func_128(uParam0, 2, 0);
			}
			if (func_127(uParam0, 3))
			{
				func_128(uParam0, 3, 0);
			}
		}
	}
}

void func_175(var uParam0, int iParam1)
{
	func_139(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_176(var uParam0)
{
	if (func_178(uParam0))
	{
		func_177(uParam0);
	}
}

void func_177(var uParam0)
{
	if (unk_0x751BF12992F7E3E2() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x2595B211F055F9FB();
			func_128(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_138(uParam0, 20) > 3f)
				{
					func_200(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_191(uParam0->f_81, 262144) || !func_191(uParam0->f_81, 1048576))
				{
					if (func_138(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_200(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_191(uParam0->f_82, 67108864))
				{
					if (func_138(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_200(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_138(uParam0, 20) > 8f)
				{
					func_200(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_191(uParam0->f_81, 262144) || func_191(uParam0->f_82, 67108864))
			{
				if (!func_127(uParam0, 22))
				{
					func_175(uParam0, 22);
				}
			}
			if (func_127(uParam0, 22) && func_138(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_191(uParam0->f_81, 1048576))
					{
						func_200(uParam0, 84, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_191(uParam0->f_82, 134217728))
					{
						func_200(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_178(var uParam0)
{
	return uParam0->f_120;
}

void func_179(var uParam0)
{
	if (unk_0xE4E020F60ADEECA5(unk_0xEC537F0C0E8265EE()) && !func_191(uParam0->f_44, 2))
	{
		func_166(&(uParam0->f_44), 2);
	}
	else if (!unk_0xE4E020F60ADEECA5(unk_0xEC537F0C0E8265EE()) && func_191(uParam0->f_44, 2))
	{
		func_132(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_135(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_200(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_180(var uParam0)
{
	if (!func_191(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
				{
					if (func_138(uParam0, 9) > 1f)
					{
						func_183(uParam0, unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()));
						if (uParam0->f_410 != 22)
						{
							func_200(uParam0, 50, 1, 1, 0);
						}
						func_268(uParam0, 9, 0, 0);
						if (unk_0xFBACB273AA628CC5(uParam0->f_9))
						{
							unk_0x9DA87A96BDB876EC(uParam0->f_9, 0);
							unk_0x116FDB7E27590C7F(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_120() && func_138(uParam0, 9) > 4f)
				{
					func_200(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_182("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_200(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9C85ECF581158409(unk_0xEC537F0C0E8265EE(), func_181(uParam0)))
				{
					func_183(uParam0, unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()));
					func_135(6, 0);
				}
				if (!func_131(uParam0))
				{
					if (!unk_0xE1772957381F609F())
					{
						if (func_138(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_200(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
				{
					if (func_182("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xD1C83BD797927DD5();
					}
					if (unk_0xFBACB273AA628CC5(uParam0->f_9))
					{
						unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
						unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_120())
				{
					if (uParam0->f_410 != 22)
					{
						func_200(uParam0, 53, 1, 0, 1);
					}
					func_135(7, func_181(uParam0));
					func_183(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_120())
				{
					func_128(uParam0, 9, 0);
					func_268(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_181(var uParam0)
{
	return uParam0->f_106;
}

bool func_182(char* sParam0, int iParam1, int iParam2)
{
	unk_0x35C3DC3A3BE08CC1(sParam0);
	if (iParam1 == 1)
	{
		unk_0x072D7B028D6C7A05(iParam2);
	}
	return unk_0x8BF06EFC37AF94F0();
}

void func_183(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_184(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			if (!unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 1) && !unk_0x463E18F5BBDEA9C4(uParam0->f_3))
			{
				func_314(uParam0, "Passenger left car.", 9);
			}
			else if (func_273(uParam0))
			{
				if (func_182("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xAC6C9BCDC1EB8365("TAXI_OBJ_PICKUP");
				}
				if (unk_0xECDEA377354CBDA4())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x48E480685981C7D4() % 1000) < 50)
				{
				}
				func_140(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_185(var uParam0, int iParam1, bool bParam2)
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

void func_186(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_187(), 24);
		iVar0++;
	}
	unk_0xD1C83BD797927DD5();
	func_44();
}

var func_187()
{
	var uVar0;
	
	return uVar0;
}

float func_188(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x930F8FBB8E9537CC(uParam0))
	{
		return -1f;
	}
	return unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1, iParam4);
}

int func_189(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			if (unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_190(var uParam0)
{
	return uParam0->f_416;
}

bool func_191(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_192(var uParam0)
{
	func_196(uParam0, 1000);
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x1E2B48EE3EC55DCF(uParam0->f_3);
		unk_0xF88735A9354A45F3(uParam0->f_3, unk_0x81873881071CD9FE(), 0);
	}
	func_118();
	func_193(uParam0);
}

void func_193(var uParam0)
{
	func_128(uParam0, 14, 0);
	func_128(uParam0, 15, 0);
	func_195();
	if (func_194())
	{
		func_149(0);
	}
}

int func_194()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	var uVar0;
	
	uVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x7404950238A154C2(uVar0, 0))
	{
		unk_0x058526005957A956(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_196(var uParam0, int iParam1)
{
	if (unk_0x42E36F2D658EB2FF(*uParam0))
	{
		unk_0x35B958B469415A23(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
	}
}

void func_197(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_36(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_36(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xEB1F3AEB071C6A9E(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xFEA6E2B6E5CAFC2E(Var0, Var3, 1);
		unk_0xB0CC34FB1640F35B();
	}
}

void func_198()
{
	func_166(&(Local_412.f_55), 2);
	func_166(&(Local_412.f_55), 4);
	func_166(&(Local_412.f_55), 16);
	func_166(&(Local_412.f_55), 64);
	func_166(&(Local_412.f_55), 256);
	func_166(&(Local_412.f_55), 512);
	func_166(&(Local_412.f_55), 1024);
	func_166(&(Local_412.f_55), 2048);
	func_166(&(Local_412.f_55), 4096);
	func_166(&(Local_412.f_100), 8);
	func_166(&(Local_412.f_100), 2048);
	func_166(&(Local_412.f_100), 256);
	func_166(&uLocal_937, 2);
}

void func_199(var uParam0)
{
	unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
	unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
	func_196(uParam0, 1000);
}

void func_200(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_268(uParam0, 16, 4f, 0);
		if (func_201(uParam0))
		{
			func_44();
		}
	}
	func_229(uParam0, iParam2, bParam3);
}

int func_201(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_120())
	{
		Var6 = { func_160() };
		if (!unk_0xB318FDA0D1ABDB20(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xD994929E13CC1ED5(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_202(&Var0);
			if (unk_0xD994929E13CC1ED5(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_202(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_203(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			if ((unk_0x463E18F5BBDEA9C4(uParam0->f_3) && (unk_0x48E480685981C7D4() - iLocal_88) > 500) || unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_204(int iParam0)
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
	return func_38();
}

int func_205(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x48E480685981C7D4() % 1000) < 50)
			{
			}
			func_140(uParam0, 1);
			if (func_31())
			{
				unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
			}
			if (unk_0xFA1212DE7C455679(uParam0->f_3, 2106541073) == 1 || unk_0xFA1212DE7C455679(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x1E2B48EE3EC55DCF(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_86 = 0;
				unk_0xF88735A9354A45F3(uParam0->f_3, unk_0x81873881071CD9FE(), 0);
			}
		}
		else if (unk_0x9C85ECF581158409(unk_0xEC537F0C0E8265EE(), 0))
		{
			func_227(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xA3561415EB3DA3A3(&uVar3);
				unk_0xEAD984C2869B8B7C(&uVar3);
				unk_0xD91194CE3D1E1D77(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xF88735A9354A45F3(0, uParam0->f_4, 0);
				unk_0x56D9ED1541046AF6(uVar3);
				unk_0xC65002CAA1212AF9(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_127(uParam0, 14))
			{
				func_193(uParam0);
				func_141(uParam0, 0);
			}
			if (func_127(uParam0, 9))
			{
				func_128(uParam0, 9, 0);
				unk_0xD1C83BD797927DD5();
				if (unk_0xFBACB273AA628CC5(uParam0->f_8))
				{
					unk_0x9DA87A96BDB876EC(uParam0->f_8, 255);
					unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
				}
			}
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
			{
				fVar4 = ((unk_0xA04824262F150982(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_226(uParam0, uParam0->f_3) > 300f)
				{
					func_314(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 1 || ((func_155(unk_0x81873881071CD9FE(), uParam0->f_3, 1) < 20f && func_171(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_171(uParam0->f_4, uParam0->f_11, 1) <= 28f))
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
							if (bLocal_93)
							{
								uParam0->f_7 = func_137(uParam0->f_4, uParam0->f_3);
								iVar0 = func_108(uParam0, &iVar1);
								if (!unk_0x930F8FBB8E9537CC(iVar0))
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
										unk_0x98046F3D16B9CF76(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x98046F3D16B9CF76(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x930F8FBB8E9537CC(iVar0))
											{
												unk_0x98046F3D16B9CF76(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x27CC98B7C879C320(uParam0->f_3);
							unk_0x3C3A95141D01773E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xC918E8450C58D3B0(unk_0xB6AE0DAE06D56288(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_290(uParam0))
							{
								unk_0x27CC98B7C879C320(uParam0->f_3);
							}
							else if (((unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 1 && unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 0) && unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 7) && func_226(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
								unk_0xEAD984C2869B8B7C(&(uParam0->f_243));
								unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x31C1393E4ACFD794(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x31C1393E4ACFD794(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x56D9ED1541046AF6(uParam0->f_243);
								unk_0xC65002CAA1212AF9(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0xC364C8223535D51E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (func_155(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_221(uParam0, 1))
								{
									unk_0x1E2B48EE3EC55DCF(uParam0->f_3);
									func_314(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_220(uParam0->f_4))
								{
									unk_0x1E2B48EE3EC55DCF(uParam0->f_3);
									func_314(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_218(uParam0);
						if (func_226(uParam0, uParam0->f_3) < fVar4 || func_31())
						{
							if (unk_0x04C377C10639B842(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_206(uParam0))
								{
									func_153(uParam0);
									iLocal_88 = unk_0x48E480685981C7D4();
									unk_0xCE566DBDCACD245E(uParam0->f_3, 26, 1);
									func_128(uParam0, 5, 0);
									unk_0x3899C8F3131D270C();
									unk_0x15F87E22A114CC69(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x50C24260EFF2A0DE(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xC918E8450C58D3B0(unk_0xB6AE0DAE06D56288(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_206(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_163("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && !unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		func_217();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_215(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_102(uParam0, 0, 1084227584) && func_170(1, 1, 1))
			{
				if (func_221(uParam0, 1))
				{
					iLocal_87 = unk_0x48E480685981C7D4();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_85 = 1;
				}
				else
				{
					func_314(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_137(uParam0->f_4, uParam0->f_3);
				iVar9 = func_108(uParam0, &iVar10);
				if (!unk_0x930F8FBB8E9537CC(iVar9))
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
						unk_0x98046F3D16B9CF76(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x98046F3D16B9CF76(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xA6D65D92671E7012(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x930F8FBB8E9537CC(iVar9))
						{
							unk_0x98046F3D16B9CF76(iVar9, 0, 4096);
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
			iVar12 = func_214(&(uParam0->f_409), unk_0xB07F27EC3B05E4EA(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xB07F27EC3B05E4EA(uParam0->f_4, Var0), 1);
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
				func_213(0, 0, 1);
				unk_0x984F8E3A66FFFEE5(unk_0xB6AE0DAE06D56288(uParam0->f_4, 1), 3f, 0);
				unk_0x82119F022C669D9E(unk_0xB6AE0DAE06D56288(uParam0->f_4, 1), 25f, 0);
				unk_0xB8BB626315D394F5(1);
				unk_0xD1C83BD797927DD5();
				func_114();
				func_229(uParam0, 0, 0);
				Var13 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, Var6) };
				unk_0xB067093BBAF0A747(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xC24172029826A66F(uParam0->f_3, func_211(uParam0));
				func_210(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xD68C8B031E2BDFA7(*uParam0, unk_0xB07F27EC3B05E4EA(uParam0->f_4, Var0));
				unk_0xB9B28C6B0F141577(*uParam0, uParam0->f_4, Var3, 1);
				unk_0xDD0B0D77CB8995B1(*uParam0, 1);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
				unk_0x95BE9BA77CA91710(uParam0->f_3, 0, 0);
				unk_0x3C3A95141D01773E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			func_163("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && !unk_0x930F8FBB8E9537CC(uParam0->f_4))
			{
				if (!unk_0xE5AB05962FA1FF3F(uParam0->f_3, 0))
				{
					unk_0xDC81A805934C85CD(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x9523562C21915B31(uParam0->f_4, func_209(uParam0->f_7), 1);
				}
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				unk_0x35B958B469415A23(*uParam0, 0);
				unk_0x35B958B469415A23(uParam0->f_1, 0);
				unk_0x270066FDBAF3A458(0);
				unk_0xEAB527164AD92BF3(0, 1065353216);
				unk_0xAE2B1C30F8A0B67C(800);
				unk_0xB8BB626315D394F5(1);
				unk_0xD1C83BD797927DD5();
				func_114();
				func_229(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (unk_0xECDEA377354CBDA4() && !unk_0xC11AD1609CFCCCE1())
			{
				func_207(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
			unk_0x35B958B469415A23(*uParam0, 0);
			unk_0x35B958B469415A23(uParam0->f_1, 0);
			unk_0x270066FDBAF3A458(0);
			unk_0xEAB527164AD92BF3(0, 1065353216);
			func_207(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_3) && !unk_0x930F8FBB8E9537CC(uParam0->f_4))
			{
				if (unk_0x463E18F5BBDEA9C4(uParam0->f_3) || unk_0xE5AB05962FA1FF3F(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -1794415470) != 1 && unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -1794415470) != 0)
				{
					unk_0x3C3A95141D01773E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_207(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 1, 0);
	}
	unk_0x0C64B47F8E6AF117(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x3BF4F473786B0150(1);
		unk_0xF1BC58601CA4A5C7(1);
	}
	func_208(23, 0);
}

void func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_25190, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_25190, iParam0);
	}
}

int func_209(int iParam0)
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

void func_210(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x42E36F2D658EB2FF(*uParam0))
	{
		*uParam0 = unk_0x6112CFE839591737(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_211(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_38() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_212(unk_0xB6AE0DAE06D56288(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_212(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, iParam0);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xCE5ED63F8CA77F8B(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 15f);
	}
	unk_0x0C64B47F8E6AF117(iParam1);
	func_39(0);
	func_22(1, 1, iParam2, 0);
	unk_0x3BF4F473786B0150(0);
	unk_0xF1BC58601CA4A5C7(0);
	func_208(23, 1);
}

int func_214(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x26CECBCADF60693F(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_215(int iParam0)
{
	if (func_216() && unk_0x48E480685981C7D4() >= iParam0 + 1000)
	{
		unk_0x3B283FEBA87FFBEB(500);
		while (!unk_0x29AFA2493D7C23D0())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_39(0);
		func_118();
		return 1;
	}
	return 0;
}

int func_216()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_217()
{
	if (func_33())
	{
		unk_0xCA954FF82A4E3698("appInternet");
	}
	if (func_32())
	{
		unk_0xCA954FF82A4E3698("appCamera");
	}
	if (func_41(1))
	{
		func_39(0);
	}
}

void func_218(var uParam0)
{
	var uVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			if (func_154(uParam0->f_3, 1) > 30f || func_219(uParam0))
			{
				if (unk_0xFA1212DE7C455679(uParam0->f_3, -1794415470) == 1 || unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) == 1)
				{
					unk_0xA3561415EB3DA3A3(&uVar0);
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0xF88735A9354A45F3(0, uParam0->f_4, 0);
					unk_0x31C1393E4ACFD794(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xD91194CE3D1E1D77(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(uParam0->f_3, uVar0);
					func_314(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_219(var uParam0)
{
	if ((unk_0xA04824262F150982(uParam0->f_4) > 3f && func_138(uParam0, 5) > 15f) || unk_0x69F59C68E86FDF3D(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x2A87B5EC03992FB8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x2A87B5EC03992FB8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x1E934CB6473D0B93(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x1E934CB6473D0B93(iParam0, 3))
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

int func_221(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 1);
		iVar0[1] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 2);
		iVar0[2] = unk_0xB0B9E53CEFDB16AA(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x86CCCD2FAE9D5E65(iVar0[iVar4]))
			{
				if (unk_0x930F8FBB8E9537CC(iVar0[iVar4]))
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
		if ((unk_0x48E480685981C7D4() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_222(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (!unk_0x895C275673BCEAB0(uParam0->f_3) && func_154(uParam0->f_3, 1) < fParam2)
		{
			if (!func_127(uParam0, 5))
			{
				func_268(uParam0, 5, 0, 0);
			}
		}
		else if (func_127(uParam0, 5))
		{
			func_128(uParam0, 5, 0);
		}
		if (((func_138(uParam0, 5) > IntToFloat(iParam1) && unk_0xA04824262F150982(uParam0->f_4) < fParam4) && !unk_0x895C275673BCEAB0(uParam0->f_3)) || func_154(uParam0->f_3, 1) <= fParam3)
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
	
	iVar18 = unk_0x2430739394FC68FC(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x2430739394FC68FC(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xDE2CF83C47088189(uParam0->f_4, iVar18) };
		Var6 = { unk_0xFF603DE3EBE2C5F9(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xB07F27EC3B05E4EA(uParam0->f_4, Var6) };
	Var3 = { unk_0xB07F27EC3B05E4EA(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x7ED8F4B17883C798(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x1D15D99A10A15334(uParam0->f_3, 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_155(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xB9AA84B14E04BC20((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x68D61DC7116FF797(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x26CECBCADF60693F(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 1 && unk_0xFA1212DE7C455679(uParam0->f_3, 242628503) != 0)
			{
				unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
				unk_0xEAD984C2869B8B7C(&(uParam0->f_243));
				unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
				unk_0x52AF899C680AA5D4(uParam0->f_243, 1);
				unk_0x56D9ED1541046AF6(uParam0->f_243);
				unk_0xC65002CAA1212AF9(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xD1C83BD797927DD5();
			if (uParam0->f_411 != 9)
			{
				if (!func_191(uParam0->f_44, 128))
				{
					func_200(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_224(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x27CC98B7C879C320(uParam0->f_3);
			unk_0xAF625598EDA64AD3(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
			unk_0xEAD984C2869B8B7C(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x31C1393E4ACFD794(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x31C1393E4ACFD794(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
			unk_0x56D9ED1541046AF6(uParam0->f_243);
			unk_0xC65002CAA1212AF9(uParam0->f_3, uParam0->f_243);
			unk_0xA3561415EB3DA3A3(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xC364C8223535D51E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_224(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, sParam1, uParam2, func_225(iParam3), 0);
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
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (func_290(uParam0))
		{
			return func_155(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_227(var uParam0)
{
	func_150(uParam0, uParam0->f_3);
	if (func_290(uParam0))
	{
		if (func_127(uParam0, 14))
		{
			func_193(uParam0);
			if (unk_0xFBACB273AA628CC5(uParam0->f_10))
			{
				unk_0x0A8175F24237A3D4(&(uParam0->f_10));
			}
		}
	}
	if (!func_127(uParam0, 9))
	{
		if (unk_0xFBACB273AA628CC5(uParam0->f_8))
		{
			unk_0x9DA87A96BDB876EC(uParam0->f_8, 0);
			unk_0x116FDB7E27590C7F(uParam0->f_8, 0);
		}
		func_268(uParam0, 9, 0, 0);
		func_228("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_228(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

void func_229(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_44();
		func_268(uParam0, 16, 4f, 0);
		unk_0xD1C83BD797927DD5();
	}
}

int func_230(var uParam0, int iParam1)
{
	if (!unk_0xCD8DA898314F3016(2))
	{
		return 0;
	}
	func_235(12);
	if (func_191(uParam0->f_44, 8))
	{
		if (!func_191(uParam0->f_44, 128))
		{
			if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()) && !func_191(uParam0->f_44, 256))
			{
				func_166(&(uParam0->f_44), 256);
			}
			if (func_191(uParam0->f_44, 256) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				func_200(uParam0, 135, 1, 0, 1);
				func_166(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_233(uParam0, iParam1))
	{
		if (func_154(uParam0->f_3, 1) < 35f)
		{
			if (!func_191(uParam0->f_44, 8))
			{
				unk_0xF88735A9354A45F3(uParam0->f_3, unk_0x81873881071CD9FE(), 0);
				func_200(uParam0, 133, 1, 0, 1);
				func_166(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x5FEB513A4402FD59(uParam0->f_3) || unk_0x5EF53977B76418E5(uParam0->f_3)) || func_154(uParam0->f_3, 1) > 400f)
		{
			func_314(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xE68E6B44DABA9C05(uParam0->f_2, 0);
		unk_0x50C9C2E3327FDF31(uParam0->f_4, 1);
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x7DB4FC1A893751E2(uParam0->f_4);
			func_231(uParam0);
			func_135(2, 0);
			bLocal_93 = true;
			func_139(&uLocal_89);
			return 1;
		}
		else
		{
			func_314(uParam0, "No Taxi", 21);
			func_272("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_231(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (func_232())
		{
		}
	}
}

int func_232()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_233(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				iVar1 = unk_0x14B7103DBD149FFE(iVar0);
				bVar2 = func_220(iVar0);
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
				if (unk_0x61A26017817C6AED(iVar1))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x59D35AC211D17FAB(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_191(uParam0->f_44, 64))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_272("TX_VIP_DMGD", -1);
							if (func_234("TX_VIP_DMGD"))
							{
								func_166(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_191(uParam0->f_44, 32))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_272("TX_VIP_CAR", -1);
							if (func_234("TX_VIP_CAR"))
							{
								func_166(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_191(uParam0->f_44, 16))
					{
						if (unk_0xCD8DA898314F3016(2))
						{
							func_272("TX_VIP_SMALL", -1);
							if (func_234("TX_VIP_SMALL"))
							{
								func_166(&(uParam0->f_44), 16);
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
			func_132(&(uParam0->f_44), 16);
			func_132(&(uParam0->f_44), 64);
			func_132(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_234(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_235(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		uVar0 = iParam0;
		unk_0x37EDB5361D2913A3(8, &uVar0, 1, 1);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x0D8BE77DF7532733(8, &cVar1);
	}
}

void func_236(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_133(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xC69E84EBBD7166E6(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xC69E84EBBD7166E6(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_238(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_239()
{
	Local_342.f_0 = 0;
	func_256(38155, 38130, 1);
	func_256(37891, 37868, 1);
	func_256(37807, 37782, 1);
	func_256(37711, 37687, 1);
	func_256(37577, 37556, 1);
	func_256(37503, 37478, 1);
	func_256(37336, 37313, 1);
}

int func_240(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_241(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (func_243(uParam0->f_4))
		{
			func_242(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_243(int iParam0)
{
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xFF463728B23A0037(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x088B9F587DA37464(iParam0, 0, 40000) || unk_0x088B9F587DA37464(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_245(var uParam0)
{
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		if (func_246(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_247(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_242(uParam0, 11);
	return 1;
}

int func_248(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (unk_0x2C237D28F05F0008(uParam0->f_4) && !unk_0x653781B2157A929D(uParam0->f_4))
		{
			if (!func_127(uParam0, 25))
			{
				func_268(uParam0, 25, 0, 0);
			}
			else if (func_138(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_127(uParam0, 25))
		{
			func_128(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_249(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_250(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (unk_0xD135D1F36209168D(uParam0->f_4))
		{
			if (unk_0x088B9F587DA37464(uParam0->f_4, 0, 40000) || unk_0x088B9F587DA37464(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_252(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_4))
	{
		if (unk_0x7404950238A154C2(uParam0->f_4, 0))
		{
			if (unk_0x01C5771BE1D8ECE5(uParam0->f_4))
			{
				if (func_246(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_253(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_254(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
	{
		if (func_255(uParam0->f_4))
		{
			func_242(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xFF463728B23A0037(iParam0) == 0f)
	{
		if (!unk_0x7404950238A154C2(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x088B9F587DA37464(iParam0, 0, 40000) || unk_0x088B9F587DA37464(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_167(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_167(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_257(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_314(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_258(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_3))
	{
		if ((unk_0x5FEB513A4402FD59(uParam0->f_3) || unk_0x930F8FBB8E9537CC(uParam0->f_3)) || unk_0x2D2289DC6C760F31(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_259()
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

int func_260()
{
	if (!func_261(&iLocal_870, 1))
	{
		func_163("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_870, 1000);
		return 0;
	}
	if (!unk_0xCC8E3BAC62A29F42(uLocal_944))
	{
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(func_267(0)))
	{
		func_163("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_870, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_163("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_870, 1000);
		return 0;
	}
	return 1;
}

int func_261(int iParam0, bool bParam1)
{
	if (!unk_0x33ACB874CECA2D4B(func_21()))
	{
		func_163("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x8E8B546E1A81D27F("gestures@m@standing@casual"))
		{
			func_163("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x8E8B546E1A81D27F("oddjobs@taxi@"))
	{
		func_163("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("oddjobs@towingcome_here"))
	{
		func_163("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8E8B546E1A81D27F("misscommon@response"))
	{
		func_163("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xCD8DA898314F3016(2))
	{
		func_163("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_262(var uParam0, int iParam1)
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

int func_263(var uParam0)
{
	if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
	{
		uParam0->f_8 = func_264(uParam0->f_3, 0, 0);
		unk_0x0D1C36CA5AEDED55(1, 0);
		unk_0x116FDB7E27590C7F(uParam0->f_8, 1);
		unk_0x2AB7C42FF2AF476D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xAF625598EDA64AD3(uParam0->f_3, unk_0x81873881071CD9FE(), -1, 2048, 4);
	}
	return 1;
}

int func_264(int iParam0, bool bParam1, bool bParam2)
{
	return func_145(iParam0, !bParam1, bParam2);
}

int func_265(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_3))
	{
		func_266(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_35(uParam0->f_14, 0);
		unk_0x984F8E3A66FFFEE5(uParam0->f_14, 2f, 0);
		func_197(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x36726EA625AF3172(uParam0->f_11);
		}
		else if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[0]))
		{
			uParam0->f_3 = Global_97643.f_225[0];
			unk_0xD768713E73165208(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x206897C6DBC12488(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0xEF1A2C5B3EE83E3E(uParam0->f_3, sParam7);
		unk_0x0B895A812F665A52(uParam0->f_3, 112, 1);
		if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
		{
			unk_0x6927F8C100125A71(uParam0->f_3, 250);
			unk_0xCE566DBDCACD245E(uParam0->f_3, 32, 0);
			unk_0xCE566DBDCACD245E(uParam0->f_3, 104, 1);
			unk_0xCE566DBDCACD245E(uParam0->f_3, 177, 1);
			unk_0xCE566DBDCACD245E(uParam0->f_3, 116, 0);
			unk_0x4865E80F793024CE("TAXI_Passenger", &(uParam0->f_413));
			unk_0xF8E77F310A5B6EAB(1, uParam0->f_413, joaat("player"));
			unk_0xF8E77F310A5B6EAB(2, uParam0->f_413, joaat("COP"));
			unk_0x506A601663C5417C(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_266(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x0E3A1A304646F09E(Param1, 20f, 5f, 0);
}

int func_267(int iParam0)
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

void func_268(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_93(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_92(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_93(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_92(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_269()
{
	func_271(1);
	unk_0x32A12757CBF48A33(func_267(0));
	uLocal_944 = func_270();
	unk_0x9D2B95F4020E5347("Alarms", 0);
	unk_0x295DC04FC13E025B("MOVE_P_M_ZERO_RUCKSACK");
}

var func_270()
{
	return unk_0x95EF972E3A07B525("MIDSIZED_MESSAGE");
}

void func_271(bool bParam0)
{
	unk_0x32A12757CBF48A33(func_21());
	if (bParam0)
	{
		unk_0x295DC04FC13E025B("gestures@m@standing@casual");
	}
	unk_0x295DC04FC13E025B("oddjobs@taxi@");
	unk_0x295DC04FC13E025B("oddjobs@towingcome_here");
	unk_0x295DC04FC13E025B("misscommon@response");
	unk_0x86B83C54AF71BD12("TAXI", 2);
	if (!func_191(Global_98931.f_17711, 128))
	{
		func_166(&(Global_98931.f_17711), 128);
	}
}

void func_272(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_273(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_127(uParam0, 14))
			{
				func_193(uParam0);
			}
			func_141(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_234(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_234(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

void func_275(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_234(iVar0))
	{
		func_287();
	}
	if (!unk_0xCA020F3125A93EB9())
	{
		if (func_282(uParam0, bParam6, bParam8, 0))
		{
			func_281(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_280(iVar0))
			{
				if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && iParam7)
					{
						if (!func_234(iVar0))
						{
							func_272(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
							{
								func_279(1);
							}
						}
					}
				}
			}
		}
		else if (func_280(iVar0))
		{
			if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
			{
				if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && iParam7)
				{
					if (!func_234(iVar0))
					{
						func_272(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
						{
							func_279(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x4357449749A521B1(iVar0))
		{
			if (func_234(iVar0) && unk_0xA83A609D74168B30())
			{
				unk_0xB8BB626315D394F5(1);
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					func_274(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					func_274(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					func_274(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					func_274(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					func_274(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				func_274(uParam0, iVar0, 1);
			}
		}
		if (!func_282(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_278(uParam0))
			{
				func_276(uParam0);
			}
		}
	}
}

void func_276(var uParam0)
{
	if (func_277(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(1);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_277(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_279(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_280(char* sParam0)
{
	if (!func_288(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_234(sParam0)) || func_234("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (func_279(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_279(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_279(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_281(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0D7089406F6A5C6E(0);
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
	unk_0xAAA62646D54D95EF(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), Param1, -1, iVar2, iVar3);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_282(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_286(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_286(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_278(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_286(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_286(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (!func_286(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_285(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_286(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (func_284(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_283(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_283(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_278(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_288(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_287();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_283(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_288(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_288(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_288(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_286(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_288(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_287()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

int func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
	{
		return 0;
	}
	if (func_41(0))
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_289()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_290(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			return 1;
		}
	}
	return 0;
}

void func_291(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
		{
			if (bParam2)
			{
				if (func_138(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_200(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_200(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_268(uParam0, 10, 0f, 1);
				}
			}
			else if (func_138(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_200(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_200(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_268(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_138(uParam0, 10) > 30f)
		{
			if (!func_120())
			{
				if (uParam0->f_112)
				{
					func_200(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_200(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_268(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_191(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_189[5 /*10*/].f_6)))
		{
			func_139(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_313(uParam0))
			{
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_312(uParam0, 1);
				func_310(5, uParam0);
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_189[0 /*10*/].f_6)))
		{
			func_139(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_312(uParam0, 1);
				func_310(0, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_189[1 /*10*/].f_6)))
		{
			func_139(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_308(uParam0))
			{
				func_312(uParam0, 1);
				func_310(1, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x4DC6EF945236C0F7(uParam0->f_4);
				func_139(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_90(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_307(uParam0))
			{
				func_312(uParam0, 1);
				func_310(8, uParam0);
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_189[6 /*10*/].f_6)))
		{
			func_139(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_306(uParam0))
			{
				func_312(uParam0, 1);
				func_310(6, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_189[4 /*10*/].f_6)))
		{
			func_139(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_305(uParam0))
			{
				func_312(uParam0, 1);
				func_310(4, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_189[7 /*10*/].f_6)))
		{
			func_139(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_304(uParam0))
			{
				func_310(7, uParam0);
				func_312(uParam0, 1);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_189[9 /*10*/].f_6)))
		{
			func_139(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
		}
		else if (func_90(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_303(uParam0))
			{
				func_312(uParam0, 1);
				func_310(9, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_189[13 /*10*/].f_6)))
		{
			func_139(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_297(uParam0))
			{
				func_312(uParam0, 1);
				func_310(13, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_6)))
		{
			func_139(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_296(uParam0))
			{
				func_312(uParam0, 1);
				func_310(14, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_189[11 /*10*/].f_6)))
		{
			func_139(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_295(uParam0))
			{
				func_312(uParam0, 1);
				func_310(11, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_189[12 /*10*/].f_6)))
		{
			func_139(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_90(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_294(uParam0))
			{
				func_312(uParam0, 1);
				func_310(12, uParam0);
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_129(uParam0);
			}
		}
	}
	if (func_191(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_189[2 /*10*/].f_6)))
		{
			func_293(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_90(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_292(uParam0))
			{
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_312(uParam0, 1);
				func_310(2, uParam0);
				func_129(uParam0);
			}
		}
	}
}

int func_292(var uParam0)
{
	float fVar0;
	
	if (!unk_0x5FEB513A4402FD59(uParam0->f_2))
	{
		if ((!unk_0x7E0C455D8C091153(uParam0->f_2) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xA04824262F150982(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_139(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_90(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xA04824262F150982(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_89(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_89(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_293(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_93(uParam0, fParam1);
	}
}

int func_294(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[12 /*10*/].f_3)))
			{
				func_139(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[1 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (unk_0xB9AA84B14E04BC20(Var0.f_0) > 2.5f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[11 /*10*/].f_3)))
			{
				func_139(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.f_0;
			}
			else if (func_90(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0xB9AA84B14E04BC20(uLocal_341) - unk_0xB9AA84B14E04BC20(Var0.f_0)) < 0f)
			{
				func_89(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_90(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_89(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_296(var uParam0)
{
	if (((((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[0 /*10*/].f_3))) && !func_16(&(Local_189[8 /*10*/].f_3))) && !func_16(&(Local_189[5 /*10*/].f_3))) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x19DFFDAF59F973CC(unk_0xB6AE0DAE06D56288(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_5))
			{
				if ((unk_0xA04824262F150982(uParam0->f_4) > 15f && func_155(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x930F8FBB8E9537CC(uParam0->f_5) && !unk_0xBEB00EB4ADDC2A33(uParam0->f_5, -1)))
				{
					func_139(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_90(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_155(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xF20BCEF13A92EC03(uParam0->f_5))
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_90(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xF20BCEF13A92EC03(uParam0->f_5))
		{
			func_89(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_297(var uParam0)
{
	if (((unk_0x7404950238A154C2(uParam0->f_4, 0) && !func_16(&(Local_189[9 /*10*/].f_3))) && !func_16(&(Local_189[7 /*10*/].f_3))) && !func_16(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_298(uParam0->f_4) && unk_0xA04824262F150982(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_189[13 /*10*/].f_3)))
			{
				func_139(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_298(int iParam0)
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
	
	unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x5D9B7B3BDF1B2A78(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_302((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_301(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_299(unk_0xB6AE0DAE06D56288(iParam0, 1), Var15, Var18, Var21);
}

int func_299(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_302(Param6 - Param3) };
	Var3 = { func_302(Param9 - Param3) };
	fVar6 = func_300(Param0, Var0);
	fVar7 = func_300(Param3, Var0);
	fVar8 = func_300(Param6, Var0);
	fVar9 = func_300(Param0, Var3);
	fVar10 = func_300(Param3, Var3);
	fVar11 = func_300(Param9, Var3);
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

float func_300(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_301(struct<3> Param0, int iParam3)
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

Vector3 func_302(struct<3> Param0)
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

int func_303(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(uParam0->f_4, -1) == unk_0x81873881071CD9FE())
		{
			if (unk_0x69F59C68E86FDF3D(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0x1D42B2AC093E96A6(uParam0->f_4) <= -145f || unk_0x1D42B2AC093E96A6(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0x1D42B2AC093E96A6(uParam0->f_4) <= 35f && unk_0x1D42B2AC093E96A6(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0x123F160AD3FBDBDE(unk_0x1329891157A54C63());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[4 /*10*/].f_3)))
			{
				func_139(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_89(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD72EC1618C933709(unk_0x1329891157A54C63());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_189[6 /*10*/].f_3)))
			{
				func_139(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_307(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0x03CF5B18BF9EC613(uParam0->f_4))
		{
			iVar0 = unk_0x4DC6EF945236C0F7(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xD24EA1F9FB501BB5(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_200(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_200(uParam0, 72, 1, 0, 1);
				}
				func_89(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(uParam0->f_4, 1) };
		if (unk_0xB9AA84B14E04BC20(Var0.f_0) > 3f && !func_16(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_189[1 /*10*/].f_3)))
			{
				func_139(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_89(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (!unk_0x653781B2157A929D(uParam0->f_4) && unk_0x0752B24E8A13FF0E(uParam0->f_4))
		{
			if (!func_16(&(Local_189[0 /*10*/].f_3)))
			{
				func_139(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_89(&(Local_189[0 /*10*/].f_3));
				func_92(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_310(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_311(uParam1, iParam0);
	func_89(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_311(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_312(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_313(var uParam0)
{
	if (unk_0x7404950238A154C2(uParam0->f_4, 0))
	{
		if (unk_0xA04824262F150982(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_189[5 /*10*/].f_3)))
			{
				func_139(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_90(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_314(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_118();
	func_419(2);
	Var0 = { func_110() };
	if ((!unk_0xB318FDA0D1ABDB20(&Var0) && func_120()) && !unk_0xD994929E13CC1ED5(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xD1C83BD797927DD5();
		unk_0xB8BB626315D394F5(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (!func_189(uParam0))
			{
				if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x0BAE7BE122182FA8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x3DD65E8B59E9E9CA(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_268(uParam0, 3, 0, 0);
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
				func_327(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
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
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_189(uParam0))
			{
				if (unk_0x01C5771BE1D8ECE5(uParam0->f_4))
				{
					func_325(uParam0, 4096, 0);
				}
				else
				{
					func_325(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_327(uParam0, &Var0);
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
				func_327(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_224(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_327(uParam0, &Var0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_327(uParam0, &Var0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_135(8, 0);
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
				func_327(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_224(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_325(uParam0, 0, 0);
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_135(8, 0);
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
				func_327(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_327(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_135(8, 0);
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
				func_327(uParam0, &Var0);
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_324(&Var0);
			func_315(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_327(uParam0, &Var0);
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
					func_327(uParam0, &Var0);
				}
			}
			else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
			{
				func_224(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_135(3, 0);
		}
		func_268(uParam0, 3, 0f, 1);
	}
}

int func_315(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_323(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_316(sParam2, iParam3, 0);
}

int func_316(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_119();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_322(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_321();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_320();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_319())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_318();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_317();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_119();
	}
	return 0;
}

void func_317()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_318()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_319()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_320()
{
	if (func_70(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_86();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_323(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_324(char* sParam0)
{
	switch (func_3(unk_0x81873881071CD9FE()))
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

void func_325(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		unk_0x1D15D99A10A15334(uParam0->f_3, 0);
		unk_0xD24EA1F9FB501BB5(uParam0->f_3);
		unk_0x7F5F0D37173E518C(uParam0->f_3, 3, 0);
		unk_0x4B9FA68A3AC8C29D(uParam0->f_3, 17, 1);
		unk_0x27CC98B7C879C320(uParam0->f_3);
		if ((func_188(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_100(uParam0->f_29)) && !bParam2)
		{
			func_326(uParam0);
		}
		else
		{
			unk_0x7F5F0D37173E518C(uParam0->f_3, 1024, 1);
			unk_0x7F5F0D37173E518C(uParam0->f_3, 131072, 1);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			else
			{
				unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
			}
			unk_0x3E27A0036E184873(0, 0);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(uParam0->f_3, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
		unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
	}
}

void func_326(var uParam0)
{
	var uVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_37(func_38(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xC24172029826A66F(uParam0->f_3, 84.9058f);
				unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xC24172029826A66F(uParam0->f_3, 68.3138f);
				unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x27CC98B7C879C320(uParam0->f_3);
			unk_0xA3561415EB3DA3A3(&uVar0);
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 0);
			unk_0x3E27A0036E184873(0, 0);
			unk_0xD91194CE3D1E1D77(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x8D06698D54D45131(0, 1);
				unk_0xD91194CE3D1E1D77(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x5D5CFD0EDDA0BC90(0, 151.7794f, 0);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 20000);
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			else
			{
				unk_0x31C1393E4ACFD794(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x0A29420931EAA99E(uParam0->f_29, 15f, 1))
			{
				unk_0xFE0C02098B6EFBD1(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
			}
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(uParam0->f_3, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
		unk_0x6CB332CB31E9FA96(uParam0->f_3, 1);
	}
}

void func_327(var uParam0, char* sParam1)
{
	if (func_328(uParam0))
	{
		func_315(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_328(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (func_155(unk_0x81873881071CD9FE(), uParam0->f_3, 1) < 40f && !unk_0x895C275673BCEAB0(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	return uParam0->f_118;
}

void func_330()
{
	func_359(&Local_412);
	if (func_358(&Local_412, &Local_971))
	{
		switch (Local_971.f_27)
		{
			case 0:
				if (Local_412.f_410 == 9)
				{
					if (!func_126(&Local_412))
					{
						if (func_357("TX_OBJ_CYI_DO") || unk_0xFBACB273AA628CC5(Local_412.f_9))
						{
							Local_971.f_27++;
						}
						else if (func_190(&Local_412) != 10)
						{
							func_200(&Local_412, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_190(&Local_412) > 10 && func_190(&Local_412) != 15) && !func_126(&Local_412))
				{
					func_200(&Local_412, 15, 1, 0, 0);
					func_175(&Local_412, 7);
				}
				break;
			
			case 2:
				if (func_138(&Local_412, 18) > 2f)
				{
					func_200(&Local_412, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_138(&Local_412, 18) > 2f)
				{
					func_200(&Local_412, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) < 1)
				{
					if ((((func_190(&Local_412) != 33 && !func_356(&Local_412)) && !func_126(&Local_412)) && !bLocal_864) && Local_412.f_410 > 9)
					{
						if (func_138(&Local_412, 18) > 2f)
						{
							func_200(&Local_412, 33, 1, 0, 1);
							func_268(&Local_412, 16, 4f, 0);
							if (bLocal_970)
							{
							}
						}
					}
					else
					{
						if (func_190(&Local_412) != 33)
						{
						}
						if (!func_356(&Local_412))
						{
						}
						if (!func_126(&Local_412))
						{
						}
						if (!bLocal_864)
						{
						}
						if (Local_412.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_138(&Local_412, 16) > 4f && func_190(&Local_412) != 34) && !func_126(&Local_412)) && !func_356(&Local_412))
				{
					func_200(&Local_412, 34, 1, 0, 0);
					if (bLocal_970)
					{
					}
				}
				break;
			
			case 7:
				Local_971.f_27++;
				break;
			}
	}
	func_331(&Local_412, &uLocal_1001, &Local_971, bLocal_970);
}

int func_331(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_338(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_127(uParam0, 2))
	{
		if (func_337(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x48E480685981C7D4() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_356(uParam0))
				{
					uParam2->f_7 = { func_336(uParam1) };
					func_315(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_120())
				{
					uParam2->f_13 = { func_160() };
					if (unk_0xD994929E13CC1ED5(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_167(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_334(uParam1);
					func_268(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_131(uParam0))
				{
					if (func_120())
					{
						func_268(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_333() };
						if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_120())
				{
					uParam2->f_19 = { func_110() };
				}
				else
				{
					func_167(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_334(uParam1);
					func_268(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_127(uParam0, 14) && !func_120()) && !func_131(uParam0)) && func_138(uParam0, 18) > 1f)
				{
					func_268(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_120())
				{
					if (func_138(uParam0, 18) > 1f)
					{
						if (!unk_0xB318FDA0D1ABDB20(&(uParam2->f_1)))
						{
							func_332(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_120())
				{
					func_167(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_334(uParam1);
					func_268(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_332(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_323(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_316(sParam2, iParam4, 0);
}

struct<6> func_333()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x7281387C8D4EC316(&(Global_14561[iVar7 /*6*/])))
			{
				return Global_14561[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x7281387C8D4EC316(&(Global_14561[iVar8 /*6*/])))
					{
						return Global_14561[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_334(var uParam0)
{
	int iVar0;
	
	iVar0 = func_335(uParam0);
	if (iVar0 > -1)
	{
		func_132(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_132(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_166(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_187(), 24);
	}
}

int func_335(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_191((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_336(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_191((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_166(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_337(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_191((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_338(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_356(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_127(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_190(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_353(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_120())
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
				if (func_191(uParam0->f_98, 4))
				{
					func_268(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				func_147(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_138(uParam0, 16) > 1f)
				{
					func_149(1);
					if (uParam0->f_411 == 9)
					{
						func_228("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_228("TAXI_VIP_RETURN", 7500, 1);
					}
					func_268(uParam0, 16, 0, 0);
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
					func_352(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_224(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_138(uParam0, 16) > func_146(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_120()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_190(uParam0))
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
				func_355(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_353(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_315(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_200(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_268(uParam0, 16, 0, 0);
				func_200(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_191(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_355(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_352(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_268(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_268(uParam0, 16, 0, 0);
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
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
					{
						uParam0->f_9 = func_152(uParam0->f_17, 1);
					}
					else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
					{
						unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
						unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
						unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
					}
				}
				func_200(uParam0, 10, 1, 0, 0);
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
				func_202(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_224(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xFBACB273AA628CC5(uParam0->f_9))
					{
						uParam0->f_9 = func_152(uParam0->f_17, 1);
					}
					else if (unk_0x8849D149F1DEE8C1(uParam0->f_9) == 0)
					{
						unk_0x9DA87A96BDB876EC(uParam0->f_9, 255);
						unk_0x8F0CD34B4BFF4767(uParam0->f_9, uParam0->f_17);
						unk_0x116FDB7E27590C7F(uParam0->f_9, 1);
					}
				}
				func_200(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_348(uParam0, 33554432, Var0, "", 1, 8);
				func_268(uParam0, 16, 0, 0);
				func_200(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_120())
				{
					func_347(uParam0, 0);
					func_166(&(uParam0->f_44), 4);
					func_268(uParam0, 16, 0, 0);
					func_200(uParam0, 13, 0, 0, 0);
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
				func_202(&Var0);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_138(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_202(&Var0);
					}
					func_345(Var0, uParam1);
					func_166(&(uParam0->f_81), 67108864);
					func_268(uParam0, 16, 0, 0);
					func_268(uParam0, 11, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_138(uParam0, 11) > uParam0->f_36)
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
							func_202(&Var0);
						}
					}
					func_345(Var0, uParam1);
					func_268(uParam0, 11, 0, 0);
					func_268(uParam0, 16, 0, 0);
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
					func_202(&Var0);
				}
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
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
				func_202(&Var0);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
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
				func_202(&Var0);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_202(&Var0);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				func_166(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_202(&Var0);
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
					func_344(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_344(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_345(Var0, uParam1);
				func_353(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 6, 0f, 1);
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
					func_344(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_344(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_345(Var0, uParam1);
				func_353(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 6, 0f, 1);
				func_229(uParam0, 0, 0);
				break;
			
			case 12:
				func_228("TAXI_OBJ_GYB", 3500, 1);
				func_268(uParam0, 16, 0, 0);
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
				func_268(uParam0, 16, 0, 0);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_191(uParam0->f_98, 268435456))
				{
					func_228("TAXI_OBJ_CYI_01", 7500, 1);
					func_166(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_202(&Var0);
				func_345(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_202(&Var0);
				func_345(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_202(&Var0);
				func_345(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 33:
				func_228("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_191(uParam0->f_82, 8192))
				{
					if (func_138(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_202(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_345(Var0, uParam1);
						}
						else
						{
							func_352(uParam0, &Var0, 0, 0, 8);
						}
						func_166(&(uParam0->f_82), 8192);
						func_268(uParam0, 16, 0, 0);
						func_268(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_191(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_202(&Var0);
					func_352(uParam0, &Var0, 0, 0, 8);
					func_166(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_191(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_202(&Var0);
					func_352(uParam0, &Var0, 0, 0, 8);
					func_166(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 46, 1, 0, 0);
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
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_229(uParam0, 0, 0);
				break;
			
			case 139:
				func_228("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_200(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x2E0A9E3291F398E3(0, 120);
				if (!func_191(uParam0->f_82, 268435456))
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
					func_166(&(uParam0->f_82), 268435456);
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
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x2E0A9E3291F398E3(0, 100);
				if (!func_191(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_166(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_228("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_229(uParam0, 0, 0);
				func_200(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_120())
				{
					func_228("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_229(uParam0, 0, 0);
					func_200(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_228("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_229(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_191(uParam0->f_81, 1))
				{
					func_343(uParam0, 1, Var0, "_sick1", 8);
					func_132(&(uParam0->f_81), 2);
				}
				else if (!func_191(uParam0->f_81, 2))
				{
					func_343(uParam0, 2, Var0, "_sick2", 8);
					func_132(&(uParam0->f_81), 1);
				}
				func_353(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_191(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_191(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_166(&(uParam0->f_81), 2097152);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_268(uParam0, 16, 0, 0);
				func_353(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_229(uParam0, 0, 0);
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
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_353(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_191(uParam0->f_81, 4))
				{
					func_343(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_191(uParam0->f_81, 8))
				{
					func_343(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_343(uParam0, 8, Var0, "_turns3", 8);
					func_132(&(uParam0->f_81), 4);
					func_132(&(uParam0->f_81), 8);
				}
				func_353(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_342(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_224(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_355(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_315(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_355(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_355(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_353(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_191(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 128);
					func_132(&(uParam0->f_83), 256);
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 256);
					func_132(&(uParam0->f_83), 512);
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 512);
					func_132(&(uParam0->f_83), 128);
					func_268(uParam0, 16, 0, 0);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_191(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_202(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 1);
					func_132(&(uParam0->f_83), 2);
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_202(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_132(&(uParam0->f_83), 4);
					}
					else
					{
						func_132(&(uParam0->f_83), 1);
					}
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_202(&Var0);
					}
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 4);
					func_132(&(uParam0->f_83), 1);
					func_268(uParam0, 16, 0, 0);
				}
				func_353(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_191(uParam0->f_81, 4096))
				{
					func_348(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_191(uParam0->f_81, 8192))
				{
					func_348(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_353(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_191(uParam0->f_81, 16384))
				{
					func_348(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_191(uParam0->f_81, 32768))
				{
					func_348(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_353(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_191(uParam0->f_82, 8))
					{
						func_341(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_191(uParam0->f_82, 16))
					{
						func_341(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_191(uParam0->f_82, 32))
					{
						func_341(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_229(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_355(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_268(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_191(uParam0->f_81, 65536))
				{
					func_348(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_191(uParam0->f_81, 131072))
				{
					func_348(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_342(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_224(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_191(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 8);
					func_132(&(uParam0->f_83), 16);
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 16);
					func_132(&(uParam0->f_83), 32);
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_132(&(uParam0->f_83), 64);
					}
					else
					{
						func_132(&(uParam0->f_83), 8);
					}
					func_268(uParam0, 16, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_166(&(uParam0->f_83), 64);
					func_132(&(uParam0->f_83), 8);
					func_268(uParam0, 16, 0, 0);
				}
				func_353(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_120())
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
					func_229(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_120())
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
					func_229(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_120())
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
								func_355(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_353(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_268(uParam0, 16, 0, 0);
								func_229(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_352(uParam0, &Var0, 0, 0, 8);
									func_268(uParam0, 16, 0, 0);
									func_268(uParam0, 11, 0, 0);
									func_229(uParam0, 0, 0);
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
									func_202(&Var0);
									func_352(uParam0, &Var0, 0, 0, 8);
									func_268(uParam0, 16, 0, 0);
									func_268(uParam0, 11, 0, 0);
									func_229(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_352(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_200(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_191(uParam0->f_82, 1))
				{
					func_341(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_191(uParam0->f_82, 2))
				{
					func_341(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_191(uParam0->f_82, 4))
				{
					func_341(uParam0, 4, Var0, "_close3", 8, 0);
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
				func_355(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_224(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_268(uParam0, 16, 0, 0);
				func_353(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_342(uParam0))
				{
					func_349(uParam0, Var0, func_351(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_224(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_340(uParam0, Var0, 8);
				}
				func_353(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_191(uParam0->f_83, 1024))
				{
					func_166(&(uParam0->f_83), 1024);
					func_268(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 2048))
				{
					func_166(&(uParam0->f_83), 2048);
					func_268(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_191(uParam0->f_83, 4096))
				{
					func_166(&(uParam0->f_83), 4096);
					func_268(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_202(&Var0);
					func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_191(uParam0->f_82, 1024))
				{
					func_341(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_132(&(uParam0->f_82), 2048);
				}
				else if (!func_191(uParam0->f_82, 2048))
				{
					func_341(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_353(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 52, 1, 0, 0);
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
				else if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
				{
					func_224(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_342(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_352(uParam0, &Var0, 0, 0, 8);
						func_200(uParam0, 52, 1, 0, 0);
						func_268(uParam0, 16, 0, 0);
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
						func_268(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_355(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_268(uParam0, 16, 0, 0);
					func_229(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_353(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_268(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xF730A9A61F7B0EC2(unk_0xEC537F0C0E8265EE()) >= 1)
				{
					func_228("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_191(uParam0->f_81, 262144))
				{
					func_348(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_191(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_348(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_348(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_353(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_191(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_339(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_191(uParam0->f_82, 134217728))
				{
					func_339(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_353(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_229(uParam0, 0, 0);
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
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
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
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_202(&Var0);
				}
				func_166(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_202(&Var0);
				}
				func_166(&(uParam0->f_81), 2097152);
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
					func_202(&Var0);
				}
				func_166(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_352(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_191(uParam0->f_82, 65536))
				{
					if (func_138(uParam0, 11) > uParam0->f_36)
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
						func_202(&Var0);
						func_345(Var0, uParam1);
						func_166(&(uParam0->f_82), 65536);
						func_268(uParam0, 16, 0, 0);
						func_268(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_191(uParam0->f_82, 131072))
				{
					if (func_138(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_202(&Var0);
						func_345(Var0, uParam1);
						func_166(&(uParam0->f_82), 131072);
						func_268(uParam0, 16, 0, 0);
						func_268(uParam0, 11, 0, 0);
						func_229(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_191(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_166(&(uParam0->f_82), 8388608);
				}
				else if (!func_191(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_166(&(uParam0->f_82), 16777216);
				}
				else if (!func_191(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_166(&(uParam0->f_82), 33554432);
				}
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_355(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_202(&Var0);
					func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
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
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_345(Var0, uParam1);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_355(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_354(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
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
				func_202(&Var0);
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
				func_202(&Var0);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				func_200(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_166(&(uParam0->f_81), 2097152);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_202(&Var0);
				func_345(Var0, uParam1);
				func_166(&(uParam0->f_81), 67108864);
				func_268(uParam0, 16, 0, 0);
				func_268(uParam0, 11, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_191(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_348(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
					{
						func_224(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_200(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_191(uParam0->f_81, 268435456))
				{
					func_348(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_200(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_228("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_229(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_191(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_348(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
						{
							func_224(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_348(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_200(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_228("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_229(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_315(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_268(uParam0, 16, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_191(uParam0->f_81, 16777216))
				{
					func_348(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_229(uParam0, 0, 0);
				break;
			
			case 88:
				func_228("TAXI_TIEFLEE", 7500, 1);
				func_229(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_191(uParam0->f_98, 536870912))
				{
					func_228("TAXI_OBJ_CYI_1B", 7500, 1);
					func_166(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_229(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_202(&Var0);
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
				func_229(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_352(uParam0, &Var0, 0, 0, 8);
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
				func_352(uParam0, &Var0, 0, 0, 8);
				func_229(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_352(uParam0, &Var0, 1, 0, 8);
				func_200(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_228("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_200(uParam0, 0, 0, 0, 0);
				func_229(uParam0, 0, 0);
				break;
			}
	}
}

void func_339(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_166(&(uParam0->f_82), iParam1);
	func_268(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_202(&Param2);
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_340(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_191(uParam0->f_82, 64))
	{
		func_166(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_191(uParam0->f_82, 128))
	{
		func_166(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x2E0A9E3291F398E3(1, 3), 24);
	}
	func_354(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_268(uParam0, 16, 0, 0);
}

void func_341(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_166(&(uParam0->f_82), iParam1);
	func_268(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_202(&Param2);
		}
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_342(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_343(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_166(&(uParam0->f_81), iParam1);
	func_268(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_344(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_246(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_202(sParam2);
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

void func_345(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_346(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_166(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_346(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xB318FDA0D1ABDB20(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_347(var uParam0, bool bParam1)
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

void func_348(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_166(&(uParam0->f_81), iParam1);
	func_268(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_202(&Param2);
	}
	func_315(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_349(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_268(uParam0, 16, 0, 0);
	func_268(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x5FEB513A4402FD59(uParam0->f_3))
	{
		unk_0xD6CF200BD8E54A3B(uParam0->f_3, &cParam1, func_350(uParam0));
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

int func_352(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_268(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_268(uParam0, 17, 0f, 1);
	}
	func_229(uParam0, iParam2, 0);
	return func_315(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_353(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_191(*uParam2, 2))
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
		if (func_191(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_191(*uParam2, 4))
		{
			if (!func_191(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_132(uParam2, 4096);
			}
		}
		else if (func_191(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_191(*uParam2, 512))
		{
			if (!func_191(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_132(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_191(*uParam2, 16))
		{
			if (!func_191(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_132(uParam2, 4096);
			}
		}
		else if (func_191(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_191(*uParam2, 64))
		{
			if (!func_191(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_132(uParam2, 4096);
			}
		}
		else if (func_191(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_191(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_191(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_191(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_191(*uParam2, 8192))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_191(*uParam2, 16384))
		{
			if (func_191(*uParam2, 4194304))
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
		if (func_191(*uParam2, 32768))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_191(*uParam2, 65536))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_191(*uParam2, 131072))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_191(*uParam2, 262144))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_191(*uParam2, 524288))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_191(*uParam2, 1048576))
		{
			if (func_191(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_191(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_191(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_191(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_191(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_191(*uParam2, 67108864))
		{
			if (func_191(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_191(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_191(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_191(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_191(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_354(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_323(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_316(sParam2, iParam4, 0);
}

void func_355(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_246(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_202(sParam2);
				}
				else
				{
					func_202(sParam2);
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

int func_356(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_182("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_182("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_182("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_182("TX_OBJ_GYB_DO", 0, 0) || func_182("TAXI_OBJ_GYB", 0, 0)) || func_182("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_182("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_182("TX_OBJ_CYI_DO", 0, 0) || func_182("TAXI_OBJ_CYI_01", 0, 0)) || func_182("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_182("TX_OBJ_GYN_DO", 0, 0) || func_182("TAXI_OBJ_GYN", 0, 0)) || func_182("TAXI_OBJ_GYN_TG", 0, 0)) || func_182("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_182("TAXI_OBJ_CC1", 0, 0) || func_182("TAXI_OBJ_CC2", 0, 0)) || func_182("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_182("TAXI_OBJ_FTC1", 0, 0) || func_182("TAXI_OBJ_FTC2", 0, 0)) || func_182("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_182("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_182("TAXI_OBJ_GETRUN", 0, 0) || func_182("TAXI_OBJ_DRIVE", 0, 0)) || func_182("TAXI_OBJ_RETURN", 0, 0)) || func_182("TAXI_OBJ_POL", 0, 0)) || func_182("TAXI_OBJ_RUNOUT", 0, 0)) || func_182("TAXI_OBJ_POL", 0, 0));
}

int func_357(char* sParam0)
{
	if (!unk_0x4357449749A521B1(sParam0))
	{
		if (func_182(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_358(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_127(uParam0, 9));
}

void func_359(var uParam0)
{
	if (func_127(uParam0, 17))
	{
		if (!func_127(uParam0, 14))
		{
			if (!func_131(uParam0))
			{
				if (!func_120())
				{
					func_128(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_360(var uParam0)
{
	return uParam0->f_117;
}

void func_361(var uParam0)
{
	if (!func_290(uParam0))
	{
		if ((unk_0x48E480685981C7D4() % 1000) < 50)
		{
		}
		func_140(uParam0, 1);
	}
	else if (func_127(uParam0, 14))
	{
		func_193(uParam0);
		func_141(uParam0, 0);
	}
}

void func_362(var uParam0, var uParam1, bool bParam2)
{
	if (!func_191(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xB318FDA0D1ABDB20(&(uParam0->f_124)) && func_120())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_120())
				{
					StringCopy(&(uParam0->f_124), func_187(), 24);
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

void func_363(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_246(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_246(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_246(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_167(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x48E480685981C7D4();
							}
						}
						else
						{
							func_133(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_246(Local_342.f_1[iVar0 /*4*/], 4) && !func_246(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_167(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_314(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_364(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_127(uParam0, 27))
	{
		func_175(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_138(uParam0, 27) > 5f)
	{
		if (func_391(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_268(uParam0, 27, 0, 0);
			func_268(uParam0, 10, 0, 0);
			func_389(uParam0, &uVar0, uParam1);
		}
		func_386(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_365(uParam0);
	}
	if ((((!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()) && (unk_0x42E36F2D658EB2FF(*uParam0) && !unk_0x6B6362BE9BFD1ACA(*uParam0))) && (unk_0x42E36F2D658EB2FF(uParam0->f_1) && !unk_0x6B6362BE9BFD1ACA(uParam0->f_1))) && !unk_0xDBD19E93A4D01117()) && !func_120())
	{
		if (func_138(uParam0, 26) > 10f)
		{
			func_128(uParam0, 26, 0);
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
		}
	}
	else if (func_127(uParam0, 26))
	{
		func_128(uParam0, 26, 0);
	}
	return 0;
}

void func_365(var uParam0)
{
	if (!func_385(uParam0->f_429))
	{
		uParam0->f_429 = func_384();
		func_375(&(uParam0->f_429), 0, 0, unk_0x2E0A9E3291F398E3(4, 7), 0, 0, 0);
	}
	else if (func_366(uParam0->f_429))
	{
		func_314(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_366(int iParam0)
{
	return func_367(func_384(), iParam0);
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_385(iParam1) || !func_385(iParam0))
	{
		return 1;
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
	return 0;
}

int func_368(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_369(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_370(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_371(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_372(int iParam0)
{
	return iParam0 & 15;
}

var func_373(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_374(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_374(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_375(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_373(*uParam0);
	iVar1 = func_372(*uParam0);
	iVar2 = func_371(*uParam0);
	iVar3 = func_370(*uParam0);
	iVar4 = func_369(*uParam0);
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
	iVar6 = func_383(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_383(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_376(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_376(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_382(uParam0, iParam1);
	func_381(uParam0, iParam2);
	func_380(uParam0, iParam3);
	func_379(uParam0, iParam5);
	func_378(uParam0, iParam4);
	func_377(uParam0, iParam6);
}

void func_377(var uParam0, int iParam1)
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

void func_378(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_372(*uParam0);
	iVar1 = func_373(*uParam0);
	if (iParam1 < 1 || iParam1 > func_383(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_379(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_380(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_383(int iParam0, int iParam1)
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

int func_384()
{
	var uVar0;
	
	func_382(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_381(&uVar0, unk_0x25B31B877207A3A9());
	func_380(&uVar0, unk_0x0C937048CF6952B5());
	func_378(&uVar0, unk_0x8B6B3DD84CE74978());
	func_379(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_377(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

int func_385(int iParam0)
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
	iVar1 = func_369(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_370(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_373(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_372(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_371(iParam0);
	if (iVar5 < 1 || iVar5 > func_383(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_386(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_388()) && !func_290(uParam0)) || ((uParam0->f_411 != 9 && func_233(uParam0, 1)) && !func_290(uParam0)))
		{
			uVar0 = func_387(uParam0->f_4);
			unk_0x3C6E68D2D7F41A39(&uVar0);
			uParam0->f_4 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			unk_0xD768713E73165208(uParam0->f_4, 1, 0);
			func_193(uParam0);
			func_141(uParam0, 0);
		}
	}
}

var func_387(var uParam0)
{
	return uParam0;
}

int func_388()
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
				{
					if (unk_0xCC6B00B8460CDA0E(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_389(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_390(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_390(uParam0, 0, 4))
			{
				func_314(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_390(uParam0, 0, 8))
			{
				func_314(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_390(uParam0, 1, 1))
			{
				func_314(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_390(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_191(*uParam2, 2) && func_189(uParam0))
			{
				func_314(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_390(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
	{
		if (!unk_0x895C275673BCEAB0(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_200(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_200(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_391(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x81873881071CD9FE();
	if (!unk_0x930F8FBB8E9537CC(iVar0) && !unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (!func_191(*uParam2, 1))
		{
			if (func_397(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_191(*uParam2, 2))
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_191(*uParam2, 4))
		{
			if (func_395(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_191(*uParam2, 8))
		{
			if (func_394(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_191(*uParam2, 128);
		if (bParam4)
		{
			if (func_392(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_191(*uParam2, 16))
		{
			if (func_392(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (iParam7 && unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0x4DC6EF945236C0F7(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0x4DC6EF945236C0F7(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar0))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (unk_0x70847137E3B37A59(iParam0))
			{
				if (unk_0x5470663D3086F340(iParam0) == unk_0x81873881071CD9FE())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
		{
			if (unk_0x515B65C19A5CA9B1(iParam0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA696433F321F3321(unk_0x81873881071CD9FE()))
	{
		if (unk_0x5460056E19D91D7F(iParam0))
		{
			return 1;
		}
	}
	if (func_393(unk_0x81873881071CD9FE(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xD81BC0FD4D47CC04(iParam0) && func_154(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), unk_0xE68E6B44DABA9C05(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iParam0))
		{
			return 1;
		}
		if (!unk_0x930F8FBB8E9537CC(uParam1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam1, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xADBE95599A01932F(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1)) < 2.5f)
			{
				if (unk_0x598CCC94D95857D9(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2B738BBCCA41F260(uParam0, 4))
	{
		if (unk_0xADBE95599A01932F(uParam0) && !unk_0xC0DEC39E5B9D1886(iParam0))
		{
			if (unk_0x515B65C19A5CA9B1(uParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x930F8FBB8E9537CC(uParam1))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	if (unk_0x544121698BDAB87E(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x03322A5547317A3D(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x2B738BBCCA41F260(uParam0, 2))
	{
		if (unk_0xADBE95599A01932F(uParam0))
		{
			if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x8F1CCE5AF629C4D3(iParam1), 0))
			{
				iVar3 = unk_0xE68E6B44DABA9C05(unk_0x8F1CCE5AF629C4D3(iParam1), 0);
			}
			if (unk_0x2881A00480A747EC(iParam0) || func_396(iVar3))
			{
				if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x6DF2A27FBC647AEC((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam0, -1) != 0)
			{
				if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_155(unk_0x81873881071CD9FE(), iParam0, 1) < 40f)
						{
							if (unk_0x257893CA44B56646(unk_0x1329891157A54C63(), &uVar1))
							{
								if ((unk_0xCF8AA94BAD0F766A(uVar1) && unk_0x522C7043B2B961F9(iVar1) == iParam0) || (unk_0xCF0C46D719D5302C(iVar1) && unk_0x8F1CCE5AF629C4D3(iVar1) == unk_0xB0B9E53CEFDB16AA(iParam0, -1)))
								{
									if ((unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && unk_0xCAD9951C953F5B2D(0, 24)) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xCAD9951C953F5B2D(0, 69)))
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

int func_397(int iParam0, var uParam1)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
			{
				if (unk_0x598CCC94D95857D9(iParam0, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_154(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x48E480685981C7D4();
						}
						else if ((unk_0x48E480685981C7D4() - uParam1->f_1) > uParam1->f_3)
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

void func_398(var uParam0)
{
	if (!func_191(uParam0->f_98, 2))
	{
		if (unk_0x7404950238A154C2(uParam0->f_4, 0))
		{
			if (func_188(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xA450601E968044DB(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_166(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_399()
{
	func_400(&Local_412);
	func_416();
}

void func_400(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_419(2);
	}
}

int func_401(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_120() && func_138(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_3))
		{
			if (unk_0x7404950238A154C2(uParam0->f_4, 0))
			{
				if (unk_0x04C377C10639B842(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_56(uParam0) == 0 || func_246(uParam0->f_85, 32))
					{
						if (!unk_0x01C5771BE1D8ECE5(uParam0->f_4))
						{
							func_325(uParam0, 4160, 0);
						}
						else
						{
							func_325(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_325(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_325(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_325(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x48E480685981C7D4() % 1000) < 50)
	{
	}
	return 0;
}

int func_402(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_403(int iParam0)
{
	func_405(&Local_412, iParam0);
	Local_412.f_410 = 0;
	func_404(&Local_412, 2, 8);
	Local_412.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_412.f_33 = 202.9f;
	Local_412.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_412.f_34 = 262.6098f;
	Local_412.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}

void func_404(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_405(var uParam0, var uParam1)
{
	func_415(1);
	func_195();
	func_6(&(uParam0->f_244));
	func_414(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_191(Global_98931.f_17711, 4))
	{
		func_166(&(Global_98931.f_17711), 4);
	}
	func_409(uParam0);
	func_407(uParam0);
	unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	uParam0->f_102 = (func_406(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x86B83C54AF71BD12("TAXI", 2);
}

int func_406(int iParam0)
{
	return Global_98931.f_17711.f_39[iParam0];
}

void func_407(var uParam0)
{
	switch (func_56(uParam0))
	{
		case 0:
			func_408(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_408(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_408(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_408(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_408(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_408(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_408(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_408(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_408(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_408(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_408(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_409(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_413(uParam0, 3);
			func_412(uParam0, 14);
			break;
		
		case 1:
			func_413(uParam0, 14);
			func_412(uParam0, 8);
			break;
		
		case 2:
			func_413(uParam0, 8);
			func_412(uParam0, 7);
			break;
		
		case 3:
			func_413(uParam0, 15);
			func_412(uParam0, 6);
			break;
		
		case 4:
			func_413(uParam0, 0);
			func_412(uParam0, 3);
			break;
		
		case 5:
			func_413(uParam0, 6);
			func_412(uParam0, 7);
			break;
		
		case 6:
			func_413(uParam0, 8);
			func_412(uParam0, 15);
			break;
		
		case 7:
			func_413(uParam0, 8);
			func_412(uParam0, 14);
			break;
		
		case 8:
			func_413(uParam0, 7);
			func_412(uParam0, 15);
			break;
		
		case 9:
			func_413(uParam0, unk_0x2E0A9E3291F398E3(0, 17));
			iVar0 = func_411((uParam0->f_418.f_2 + unk_0x2E0A9E3291F398E3(1, 17)), 0, 16);
			func_412(uParam0, iVar0);
			func_410(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_410(var uParam0)
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

int func_411(int iParam0, int iParam1, int iParam2)
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

void func_412(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_413(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_414(var uParam0)
{
	uParam0->f_2 = unk_0x81873881071CD9FE();
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
	func_128(uParam0, 32, 0);
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_97987, unk_0x11CA2334E341B424(), 24);
		Global_97981 = 1;
	}
	else
	{
		StringCopy(&Global_97987, "NULL", 24);
		Global_97981 = 0;
	}
}

void func_416()
{
	int iVar0;
	
	func_197(func_204(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x930F8FBB8E9537CC(uLocal_954[iVar0]))
		{
			unk_0x71A8BCA218722FA1(&(uLocal_954[iVar0]));
		}
		iVar0++;
	}
	unk_0x887F4488DA99FD21(func_267(0));
	func_121(&iLocal_874);
	unk_0xC15891002AF0DE98(0);
	unk_0xA9DF4B73BBB06CE5(1);
	unk_0xABF33AFE6B2877A8();
	unk_0x0C22E352114F699C("TAXI_CUT_U_IN");
	unk_0xD8323B49BAE93D80("MOVE_P_M_ZERO_RUCKSACK");
	func_418();
	func_417();
	func_274(&uLocal_44, 0, 0);
	unk_0xE91F714E010C7127(uLocal_967, 0);
	if (unk_0x86CCCD2FAE9D5E65(uLocal_842))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_842);
	}
	unk_0xC23A229F78DAD92A();
}

void func_417()
{
	unk_0x887F4488DA99FD21(func_267(3));
	unk_0x887F4488DA99FD21(func_267(4));
	unk_0x4855165A2773595C(0, func_125(1));
}

void func_418()
{
}

void func_419(int iParam0)
{
	Global_97643.f_22 = iParam0;
}

