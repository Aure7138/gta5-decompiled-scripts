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
	struct<428> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	struct<3> Local_842[1];
	var uLocal_846[3] = { 0, 0, 0 };
	var uLocal_850 = 0;
	struct<3> Local_851 = { 0, 0, 0 } ;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857[45];
	struct<3> Local_993[45];
	struct<3> Local_1129[45];
	struct<3> Local_1265[45];
	struct<3> Local_1401 = { 0, 0, 0 } ;
	var uLocal_1404 = 0;
	int iLocal_1405 = 0;
	int iLocal_1406 = 0;
	int iLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	int iLocal_1411 = 0;
	float fLocal_1412[45] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1458 = 0;
	struct<28> Local_1459 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 5;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 1097859072;
	var uLocal_1533 = 1500;
	var uLocal_1534 = 45;
	var uLocal_1535 = 1103626240;
	var uLocal_1536 = 5;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
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
	iLocal_841 = joaat("a_f_y_bevhills_03");
	Local_851 = { -412.0875f, 1171.359f, 324.8176f };
	Local_854 = { -411.0378f, 1175.733f, 324.6417f };
	iLocal_1407 = 1;
	if (unk_0x4B4BD87E3D30C50D(67))
	{
		func_403(2);
		func_401();
	}
	unk_0xD80ABA7495D14FDA(1);
	func_388();
	while (true)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(Local_409.f_2))
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
	if (func_387(&Local_409))
	{
		func_386(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_385(&Local_409, 0))
			{
				func_383();
			}
		}
		else if (func_382(&Local_409, 31) > 5f)
		{
			func_403(2);
			func_401();
		}
	}
	else
	{
		func_381(&Local_409);
		func_347(&Local_409, &uLocal_1530);
		func_346(&Local_409, &uLocal_1408, 0);
		func_345(&Local_409);
		if (Local_409.f_410 > 2)
		{
			func_344(&Local_409);
			if (!func_343(&Local_409))
			{
				func_310();
			}
			else
			{
				func_293(&Local_409, "Taxi Not Driveable", func_309(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_269(&Local_409, 0, 1);
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_266();
				func_265(&Local_409, 16, 4f, 0);
				func_263(&Local_409, Local_851, Local_854, "TaxiMiranda", iLocal_841, 0f, 10f);
				func_261(&Local_409);
				func_260(&Local_409, 1);
				break;
			
			case 1:
				if (func_258())
				{
					func_257();
					func_237();
					func_236(&(Local_842[0 /*3*/]), "TAXI_SC_BN_08", 500);
					func_235(&Local_409, &Local_842);
					Local_409.f_14 = { Local_851 };
					func_234(&Local_409);
					func_260(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_227(&Local_409, 1))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(Local_409.f_3))
					{
						unk_0x5F2AACB0122E1554(Local_409.f_3, 3, 0, 2, 0);
						unk_0x5F2AACB0122E1554(Local_409.f_3, 2, 1, 0, 0);
						unk_0x5F2AACB0122E1554(Local_409.f_3, 4, 1, 0, 0);
						unk_0x5F2AACB0122E1554(Local_409.f_3, 0, 0, 1, 0);
						unk_0x1706625EBCDDEBF9(Local_409.f_3, 29, 0);
					}
					Local_409.f_427 = 1;
					func_226(&Local_409, 1, 0);
					func_260(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_198(&Local_409, 0, 1109393408))
				{
					func_260(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_197(&Local_409))
				{
					func_193(&Local_409, 7, 1, 0, 0);
					func_192(&Local_409);
					func_191();
					func_260(&Local_409, 9);
				}
				if (unk_0x968EA16107097324(Local_409.f_4, 0))
				{
					if (!unk_0xE5FADE1166052251(Local_409.f_2, Local_409.f_4, 0))
					{
						func_187(&Local_409);
						func_260(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_1411)
				{
					if (Local_409.f_139)
					{
						func_180();
						func_177(0);
						iLocal_1411 = 1;
					}
				}
				func_166();
				if (func_125(&Local_409, 5f, 1097859072, 1117782016))
				{
					func_123(&uLocal_1489);
					func_122(&Local_1459, 15, 0);
					if (iLocal_840 == iLocal_839)
					{
						unk_0xF8910DF6BD994091(Local_409.f_3, -713.4489f, -153.4094f, 37.1441f, 10000, 2049, 3);
						func_121(&Local_409, 0);
						Local_409.f_56 = 50;
						Local_409.f_108 = 0;
					}
					else if (iLocal_840 == 14)
					{
						unk_0xF8910DF6BD994091(Local_409.f_3, -1196.372f, -772.4608f, 17.30166f, 10000, 2049, 3);
						Local_409.f_56 = 25;
						Local_409.f_108 = 0;
					}
					else
					{
						unk_0xF8910DF6BD994091(Local_409.f_3, 72.87311f, -1392.597f, 29.76223f, 10000, 2049, 3);
						Local_409.f_56 = 0;
						Local_409.f_108 = 1;
					}
					func_119(&Local_409);
					func_115(&Local_409);
					func_114(&Local_409);
					func_260(&Local_409, 27);
				}
				break;
			
			case 27:
				if (func_104(&Local_409, 1))
				{
					unk_0xE2CB8488CFA42209(Local_409.f_3);
					unk_0xAAD288E877AC833D(&uLocal_850);
					unk_0x2A6B9F9E71C479CF(&uLocal_850);
					unk_0x743E219F0C060EE5(0, 0, 0);
					unk_0xE3BCB930B62CBDE5(0, Local_409.f_29, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x536F7A20D4B5FD1B(0, Local_409.f_29, 15f, 5000);
					unk_0xCEAD0CD7E9A15284(0, 0);
					unk_0xE3BCB930B62CBDE5(0, Local_1401, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x536F7A20D4B5FD1B(0, Local_1401, 15f, 0);
					unk_0x44642CB08FA1637E(uLocal_850);
					unk_0xB8A8FA4B28E9F423(Local_409.f_3, uLocal_850);
					unk_0x112CD899A3BEE719(Local_409.f_3, 1);
					func_260(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_77(&Local_409, &uLocal_1537))
				{
					func_10(1, &Local_409, 0);
					func_265(&Local_409, 31, 0, 0);
					func_260(&Local_409, 30);
				}
				break;
			
			case 30:
				func_9(&Local_409);
				func_401();
				break;
			}
	}
}

void func_9(var uParam0)
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
	func_386(uParam0);
	if (func_48())
	{
		func_46();
	}
	func_44();
	unk_0xA1E3A2CCF985EE86();
	unk_0x4ACCE973F9C3CA3B(1);
	func_41(0);
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		unk_0xD1CF9849336C4ED5(uParam0->f_4, 0);
		unk_0xAB08E0AE50DC39E0(uParam0->f_4);
		unk_0xF290DF09A88A384C(uParam0->f_4);
	}
	func_38(uParam0->f_14, 1);
	func_36(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 1);
	if (func_32())
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
	}
	unk_0x87B88BB971295A97(1);
	func_23(0, 1, 1, 0);
	unk_0x488AF65D7EDB6B4A(1);
	unk_0x1B40500A7841D6AB(1);
	if (unk_0x06F36936289C5EC8(*uParam0))
	{
		unk_0xFE65076A204F9258(*uParam0, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xBA6758C5B23DAE05(1);
	}
	if (func_22(Global_99250.f_17715, 4))
	{
		func_20(&(Global_99250.f_17715), 4);
		unk_0x5416146016E39BF7(func_19(), 0);
	}
	if (bParam1)
	{
		func_9(uParam0);
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

int func_19()
{
	return joaat("taxi");
}

void func_20(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_31(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_30())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_31(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_24(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_24(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_25())
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

bool func_25()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_26(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()
{
	return Global_1312746;
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_30()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
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

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0xDEFA1942C5A5271A(unk_0x7F3E348C0892D8D2()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0xB1A77D5C890711F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0xB1A77D5C890711F9(joaat("appinternet")) > 0)
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

void func_36(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
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

void func_38(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_37(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_37(Param0, 1f, 30f, 30f, 10f) };
		unk_0x6AABDED602B11FF1(Var0, Var3, iParam3, 1);
	}
}

bool func_39(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_40()
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)
{
	if (Global_14571)
	{
		func_42(0, 0);
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
	if (!func_30())
	{
		Global_14413.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

void func_44()
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
					func_45(Global_88372[iVar0 /*17*/].f_5, 1);
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
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_46()
{
	Global_14578 = 0;
	func_47();
}

void func_47()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

int func_48()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
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
		func_403(1);
		func_63(15, 1);
	}
	func_61(&(Global_99250.f_17715), 1024);
	if (!func_22(Global_99250.f_17715, 64))
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
		iParam2 = func_28();
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
			if (!func_48() && func_382(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				}
				func_103(uParam0);
				func_20(&(Global_99250.f_17715), 4096);
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
				func_265(uParam0, 0, 0, 0);
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

int func_104(var uParam0, bool bParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
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
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && unk_0xBF0744BF24FE8D11(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_107(uParam0->f_3, uParam0->f_4) == 0)
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

int func_107(int iParam0, int iParam1)
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
		return (func_22(uParam0->f_81, iParam1) && !func_48());
	}
	return func_48();
}

int func_110(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_32())
			{
				func_112();
				return 1;
			}
			else if (func_111(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
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

int func_111(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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

void func_112()
{
	if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
	{
		unk_0x6B5B946261CEF74B(unk_0x8ACD527A7E574590());
	}
}

int func_113(var uParam0)
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
	if (!func_22(uParam0->f_55, 1))
	{
		func_61(&(uParam0->f_55), 1);
	}
}

void func_115(var uParam0)
{
	func_117();
	unk_0xA1E3A2CCF985EE86();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_193(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_193(uParam0, 103, 1, 0, 0);
		}
		func_116(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_193(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_193(uParam0, 102, 1, 0, 0);
	}
	func_265(uParam0, 16, 4f, 0);
}

void func_116(int iParam0)
{
	Global_97962.f_221 = iParam0;
}

void func_117()
{
	Global_14578 = 0;
	func_118();
}

void func_118()
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

void func_119(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_120(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_49(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_49(5, unk_0x11E019C8F43ACC8A(fVar0));
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
		unk_0x573691DB812DC8AA(&(uParam0->f_60[iParam1 /*3*/]), 2);
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

void func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_124(), 24);
		iVar0++;
	}
	unk_0xA1E3A2CCF985EE86();
	func_46();
}

var func_124()
{
	var uVar0;
	
	return uVar0;
}

int func_125(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x398F615441F52A47() && !unk_0x329E4482E654B910()) && !unk_0x8DD09BB8ACF9E623()) && !unk_0x2CC731F9E664299E()) && !uParam0->f_142)
	{
		if (func_148(uParam0))
		{
			func_147(uParam0, &(uParam0->f_43));
			func_142(uParam0);
			func_141(uParam0);
			func_138(uParam0);
			func_132(uParam0, fParam2, fParam3);
			func_129(uParam0);
			return func_126(uParam0, iParam1);
		}
	}
	return 0;
}

int func_126(var uParam0, int iParam1)
{
	if (func_60(uParam0) == 2)
	{
		if (unk_0xA427F05DB896EEBE(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_128(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1) && func_127(1, 1, 1)) && unk_0x2D081DEC13E78241(uParam0->f_4))
		{
			return func_110(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xA427F05DB896EEBE(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1) && func_127(1, 1, 1)) && unk_0x2D081DEC13E78241(uParam0->f_4))
	{
		return func_110(uParam0, 1, iParam1);
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
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

float func_128(int iParam0, struct<3> Param1, int iParam4)
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

void func_129(var uParam0)
{
	float fVar0;
	
	if ((func_113(uParam0) && func_22(uParam0->f_81, 67108864)) && unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
	{
		if ((unk_0x3EAC9995EC220C5A() - iLocal_97) >= 10000)
		{
			fVar0 = func_130(uParam0->f_17, 1);
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
		if (iLocal_96 >= 2 && !func_48())
		{
			func_193(uParam0, 136, 1, 0, 1);
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
			if (!func_113(uParam0))
			{
			}
			if (!func_22(uParam0->f_81, 67108864))
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

float func_130(struct<3> Param0, int iParam3)
{
	return func_131(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), Param0, iParam3);
}

float func_131(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		return -1f;
	}
	return unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam0, 1), Param1, iParam4);
}

void func_132(var uParam0, float fParam1, float fParam2)
{
	if (func_113(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((unk_0xFF56D249420BBDD7(uParam0->f_4) || unk_0x2AA05370067DC5AC(uParam0->f_4) < 3f) && func_137(uParam0))
		{
			if (!func_136(uParam0, 2))
			{
				func_134(uParam0, 2);
			}
			else if (func_113(uParam0))
			{
				if (func_382(uParam0, 2) > fParam1 && !func_136(uParam0, 14))
				{
					if (func_34())
					{
						func_193(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_193(uParam0, 48, 1, 0, 0);
					}
					func_265(uParam0, 2, 0, 0);
					if (func_136(uParam0, 10))
					{
						func_265(uParam0, 10, 0, 0);
					}
				}
				if (!func_136(uParam0, 3))
				{
					func_265(uParam0, 3, 0, 0);
				}
				else if (func_382(uParam0, 3) >= fParam2)
				{
					func_133(uParam0, 3, 0);
					func_293(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_136(uParam0, 2))
			{
				func_133(uParam0, 2, 0);
			}
			if (func_136(uParam0, 3))
			{
				func_133(uParam0, 3, 0);
			}
		}
	}
}

void func_133(var uParam0, int iParam1, bool bParam2)
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

void func_134(var uParam0, int iParam1)
{
	func_135(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_135(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_98(uParam0);
	}
}

bool func_136(var uParam0, int iParam1)
{
	return func_15(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_137(var uParam0)
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

void func_138(var uParam0)
{
	if (func_140(uParam0))
	{
		func_139(uParam0);
	}
}

void func_139(var uParam0)
{
	if (unk_0x20DD658BA67FD6AF() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x4B2B28DE73831DEB();
			func_133(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_382(uParam0, 20) > 3f)
				{
					func_193(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_382(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_193(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_382(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_193(uParam0, 85, 1, 0, 0);
						func_133(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_382(uParam0, 20) > 8f)
				{
					func_193(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_136(uParam0, 22))
				{
					func_134(uParam0, 22);
				}
			}
			if (func_136(uParam0, 22) && func_382(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_193(uParam0, 84, 1, 0, 0);
						func_133(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_193(uParam0, 85, 1, 0, 0);
						func_133(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_140(var uParam0)
{
	return uParam0->f_120;
}

void func_141(var uParam0)
{
	if (unk_0x350800CC91A8701C(unk_0x7F3E348C0892D8D2()) && !func_22(uParam0->f_44, 2))
	{
		func_61(&(uParam0->f_44), 2);
	}
	else if (!unk_0x350800CC91A8701C(unk_0x7F3E348C0892D8D2()) && func_22(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_49(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_193(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_142(var uParam0)
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
				{
					if (func_382(uParam0, 9) > 1f)
					{
						func_146(uParam0, unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()));
						if (uParam0->f_410 != 22)
						{
							func_193(uParam0, 50, 1, 1, 0);
						}
						func_265(uParam0, 9, 0, 0);
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
				if (!func_48() && func_382(uParam0, 9) > 4f)
				{
					func_193(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_145("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_193(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9EE41011CAC5F6BD(unk_0x7F3E348C0892D8D2(), func_144(uParam0)))
				{
					func_146(uParam0, unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()));
					func_49(6, 0);
				}
				if (!func_143(uParam0))
				{
					if (!unk_0x1066B6347C40B301())
					{
						if (func_382(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_193(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < 1)
				{
					if (func_145("TAXI_OBJ_POL", 0, 0))
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
				if (!func_48())
				{
					if (uParam0->f_410 != 22)
					{
						func_193(uParam0, 53, 1, 0, 1);
					}
					func_49(7, func_144(uParam0));
					func_146(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_48())
				{
					func_133(uParam0, 9, 0);
					func_265(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_143(var uParam0)
{
	return uParam0->f_110;
}

int func_144(var uParam0)
{
	return uParam0->f_106;
}

bool func_145(char* sParam0, int iParam1, int iParam2)
{
	unk_0x9C55668C318B45CE(sParam0);
	if (iParam1 == 1)
	{
		unk_0x703D2B4B1C7E10B6(iParam2);
	}
	return unk_0x911D2DB971FD2DC2();
}

void func_146(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_147(var uParam0, var uParam1)
{
	unk_0x3B68093B057BCED0(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_148(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (!unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 1) && !unk_0xB2C4D90B868C2250(uParam0->f_3))
			{
				func_293(uParam0, "Passenger left car.", 9);
			}
			else if (func_162(uParam0))
			{
				if (func_145("TAXI_OBJ_PICKUP", 0, 0))
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
				func_149(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_149(var uParam0, bool bParam1)
{
	func_161(uParam0, uParam0->f_3);
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_136(uParam0, 14))
			{
				if (func_48())
				{
					func_160(1);
				}
				func_159(uParam0, 11, 1);
				func_152(uParam0, 1);
				func_265(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_113(uParam0))
				{
					if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
					{
					}
					if (unk_0xB42592B9FFEB5EDE(uParam0->f_2, 0))
					{
						if (func_382(uParam0, 15) > 5f)
						{
							func_265(uParam0, 15, 0f, 1);
						}
					}
					if (func_382(uParam0, 14) > 20f)
					{
						func_293(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_382(uParam0, 14) > 20f)
				{
					if (func_150(uParam0->f_4, 1) > 40f)
					{
						func_293(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_293(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_150(int iParam0, int iParam1)
{
	return func_151(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), iParam0, iParam1);
}

float func_151(int iParam0, int iParam1, int iParam2)
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

void func_152(var uParam0, bool bParam1)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xC3B073777B46C61A(uParam0->f_8))
			{
				unk_0xBE97057E01D4909F(uParam0->f_8, 0);
				unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
				func_158(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xC3B073777B46C61A(uParam0->f_9))
			{
				unk_0xBE97057E01D4909F(uParam0->f_9, 0);
				unk_0x49AFDB1662AE2A92(uParam0->f_9, 0);
				unk_0xA1E3A2CCF985EE86();
				if (func_113(uParam0))
				{
					func_193(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_158(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_153(uParam0, 0, 0);
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

void func_153(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_386(uParam0);
	}
	if (!unk_0xC3B073777B46C61A(uParam0->f_10))
	{
		uParam0->f_10 = func_156(uParam0->f_4, 1, 0);
		unk_0x45C91EE3FC674072(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x49AFDB1662AE2A92(uParam0->f_10, 1);
		func_154(uParam0);
		if (bParam2)
		{
			unk_0xA1E3A2CCF985EE86();
			func_193(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_154(var uParam0)
{
	func_265(uParam0, 14, 0, 0);
	func_155();
}

void func_155()
{
	int iVar0;
	
	iVar0 = unk_0xD8D1111EA0CFD1DB();
	if (unk_0x968EA16107097324(iVar0, 0))
	{
		unk_0x44F52B5BE61F39DD(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_157(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
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
		unk_0x61CD4A0BA23CE782(uVar0, func_157(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_157(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_157(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0xA1E3A2CCF985EE86();
		func_193(uParam0, iParam3, 1, 0, 0);
		func_61(uParam1, iParam2);
	}
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_160(int iParam0)
{
	Global_16723 = iParam0;
}

void func_161(var uParam0, int iParam1)
{
	if (unk_0x1F2158D615BC4B25(iParam1))
	{
		if (!unk_0x1E80C02AC16B6622(iParam1))
		{
			if (unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()))
			{
				if ((unk_0x5B286C8DDCE1CEE6(iParam1, joaat("weapon_stungun"), 0) || unk_0x5B286C8DDCE1CEE6(iParam1, 0, 2)) || unk_0x5B286C8DDCE1CEE6(iParam1, 0, 1))
				{
					func_293(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
			}
		}
	}
}

int func_162(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_136(uParam0, 14))
			{
				func_163(uParam0);
			}
			func_152(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_163(var uParam0)
{
	func_133(uParam0, 14, 0);
	func_133(uParam0, 15, 0);
	func_165();
	if (func_164())
	{
		func_160(0);
	}
}

int func_164()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_165()
{
	var uVar0;
	
	uVar0 = unk_0xD8D1111EA0CFD1DB();
	if (unk_0x968EA16107097324(uVar0, 0))
	{
		unk_0x44F52B5BE61F39DD(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_166()
{
	int iVar0;
	
	if (!iLocal_1405)
	{
		if (func_136(&Local_409, 14))
		{
			func_176();
			func_193(&Local_409, 2, 1, 0, 0);
			iLocal_1405 = 1;
		}
	}
	else if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (!func_136(&Local_409, 14))
		{
			func_154(&Local_409);
			func_175();
			iLocal_1405 = 0;
		}
	}
	if (Local_409.f_140)
	{
		func_176();
		iLocal_1406 = 1;
	}
	else if (iLocal_1406)
	{
		func_175();
		iLocal_1406 = 0;
	}
	iLocal_840 = func_167(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_409.f_427, -1, 0, 1, -1);
	if (iLocal_840 != -1)
	{
		iVar0 = func_167(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_409.f_427, -1, 0, 1, -1);
		if (!func_39(Local_409.f_17, Local_857[iVar0 /*3*/], 0))
		{
			Local_409.f_17 = { Local_857[iVar0 /*3*/] };
			Local_409.f_29 = { Local_993[iVar0 /*3*/] };
			Local_409.f_26 = { Local_1129[iVar0 /*3*/] };
			Local_409.f_34 = fLocal_1412[iVar0];
			Local_1401 = { Local_1265[iVar0 /*3*/] };
		}
	}
}

int func_167(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_174(iVar0))
		{
			if (!bParam5 || func_169(iVar0))
			{
				fVar1 = unk_0xA2490B3CE6382FBB(Param0, func_168(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_168(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_169(int iParam0)
{
	return func_170(iParam0, 0, 0);
}

int func_170(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_56() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_171(func_173(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_172(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_172(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC3B073777B46C61A(uLocal_846[iVar0]))
		{
			unk_0xBE97057E01D4909F(uLocal_846[iVar0], 255);
		}
		iVar0++;
	}
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC3B073777B46C61A(uLocal_846[iVar0]))
		{
			unk_0xBE97057E01D4909F(uLocal_846[iVar0], 0);
		}
		iVar0++;
	}
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		func_178(7, 1);
	}
	else
	{
		func_178(7, 0);
	}
}

void func_178(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_25424[iVar0 /*23*/].f_16 == iParam0)
		{
			func_179(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_179(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != unk_0xB56FEBC510E7E9DE(Global_25424[iVar1 /*23*/].f_11, 3))
	{
		unk_0x573691DB812DC8AA(&(Global_25424[iVar1 /*23*/].f_11), 18);
		if (Global_25421 == 1)
		{
			Global_25422 = 1;
		}
		Global_25421 = 1;
	}
	if (bParam1)
	{
		unk_0x573691DB812DC8AA(&(Global_25424[iVar1 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_25424[iVar1 /*23*/].f_11), 3);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_25424[iVar1 /*23*/].f_11, 3))
	{
		if (unk_0xC3B073777B46C61A(Global_25424[iVar1 /*23*/].f_19))
		{
			unk_0x3442F9A30D184555(1);
			unk_0x296CDA10C549A502(&(Global_25424[iVar1 /*23*/].f_19));
			unk_0x3442F9A30D184555(0);
		}
	}
}

void func_180()
{
	float fVar0;
	
	iLocal_839 = func_186(Local_409.f_427, 0);
	func_181(Local_409.f_427);
	if (iLocal_839 != -1)
	{
		fVar0 = func_131(unk_0x77F050A399DB77ED(), func_168(iLocal_839, 0), 1);
		Local_409.f_35 = (fVar0 * 0.3f);
	}
	else
	{
		Local_409.f_35 = 120f;
	}
	if (unk_0x968EA16107097324(Local_409.f_4, 0))
	{
		Local_409.f_46 = unk_0x070BBD7287E8E744(Local_409.f_4);
	}
}

void func_181(int iParam0)
{
	func_185();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_178(7, 0);
			func_184(&uLocal_846);
			func_182(&(uLocal_846[0]), 7, 73, 5);
			func_182(&(uLocal_846[1]), 14, 73, 5);
			func_182(&(uLocal_846[2]), 18, 73, 5);
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x296CDA10C549A502(uParam0);
	}
	*uParam0 = unk_0x1802011F6E339FFF(func_168(iParam1, 0));
	unk_0x06E25D9668199664(*uParam0, iParam2);
	unk_0x80553402FCEB9A9C(*uParam0, iParam3);
	unk_0x45C91EE3FC674072(*uParam0, func_183(iParam1));
	unk_0x61CD4A0BA23CE782(*uParam0, 1f);
	unk_0x84841E9DDA601CE7(*uParam0, 1);
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

void func_184(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC3B073777B46C61A((*uParam0)[iVar0]))
		{
			unk_0x296CDA10C549A502(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_185()
{
	Local_857[0 /*3*/] = { -829.8521f, -192.3817f, 36.3936f };
	Local_857[1 /*3*/] = { 129.8964f, -1716.632f, 28.0725f };
	Local_857[7 /*3*/] = { 88.1425f, -1391.791f, 28.1999f };
	Local_857[14 /*3*/] = { -1210.999f, -785.9365f, 16.0056f };
	Local_857[18 /*3*/] = { -723.8204f, -160.7985f, 35.92944f };
	Local_857[22 /*3*/] = { 339.2214f, 158.9484f, 102.1509f };
	Local_857[28 /*3*/] = { 15.1447f, -1127.161f, 27.7764f };
	Local_993[0 /*3*/] = { -815.6819f, -183.7194f, 36.5695f };
	Local_993[1 /*3*/] = { 136.1871f, -1712.069f, 28.2916f };
	Local_993[7 /*3*/] = { 84.2585f, -1379.562f, 28.2919f };
	Local_993[14 /*3*/] = { -1206.156f, -777.4578f, 16.3283f };
	Local_993[18 /*3*/] = { -716.0551f, -160.1741f, 35.98816f };
	Local_993[22 /*3*/] = { 342.1741f, 172.9035f, 102.1543f };
	Local_993[28 /*3*/] = { 22.1268f, -1109.868f, 28.797f };
	Local_1265[7 /*3*/] = { 76.3885f, -1397.665f, 28.3719f };
	Local_1265[14 /*3*/] = { -1193.429f, -769.2299f, 16.3289f };
	Local_1265[18 /*3*/] = { -710.8855f, -152.4612f, 36.4106f };
	Local_1129[0 /*3*/] = { -821.3112f, -207.0323f, 36.3333f };
	Local_1129[1 /*3*/] = { 138.4111f, -1726.907f, 28.0569f };
	Local_1129[7 /*3*/] = { 96.1429f, -1407.346f, 28.1563f };
	Local_1129[14 /*3*/] = { -1202.809f, -795.3967f, 15.2069f };
	Local_1129[18 /*3*/] = { -710.7402f, -178.9253f, 35.8931f };
	Local_1129[22 /*3*/] = { 348.4406f, 156.2108f, 101.9483f };
	Local_1129[28 /*3*/] = { 40.1115f, -1113.923f, 28.1427f };
	fLocal_1412[0] = 33.19f;
	fLocal_1412[1] = 50.6f;
	fLocal_1412[7] = 48.99f;
	fLocal_1412[14] = 37.21f;
	fLocal_1412[18] = 28.39f;
	fLocal_1412[22] = 71.56f;
	fLocal_1412[28] = 148.91f;
}

int func_186(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 45)
	{
		if (func_174(iVar0) == iParam0)
		{
			iVar3++;
			if (iVar1 == -1)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		if (iVar2 != -1)
		{
			if (bParam1)
			{
				iVar4 = (unk_0xA3746E7F17F47DC2(0, 65535) % iVar3);
				iVar5 = (iVar4 + iVar1);
			}
			else
			{
				iVar5 = 18;
			}
		}
		else
		{
			iVar5 = iVar1;
		}
	}
	return iVar5;
}

void func_187(var uParam0)
{
	func_190(uParam0, 1000);
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xB28207B96952D994(uParam0->f_3);
		unk_0x9A42ADE14351A508(uParam0->f_3, unk_0x77F050A399DB77ED(), 0);
	}
	func_188();
	func_163(uParam0);
}

void func_188()
{
	Global_14578 = 0;
	func_189();
}

void func_189()
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

void func_190(var uParam0, int iParam1)
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

void func_191()
{
	func_61(&(Local_409.f_55), 2);
	func_61(&(Local_409.f_55), 4);
	func_61(&(Local_409.f_55), 16);
	func_61(&(Local_409.f_55), 64);
	func_61(&(Local_409.f_55), 256);
	func_61(&(Local_409.f_55), 512);
	func_61(&(Local_409.f_55), 1024);
	func_61(&(Local_409.f_55), 2048);
	func_61(&(Local_409.f_55), 4096);
	func_61(&(Local_409.f_55), 1073741824);
	func_61(&(Local_409.f_100), 8);
	func_61(&(Local_409.f_100), 256);
	func_61(&(Local_409.f_100), 2048);
	func_61(&uLocal_1530, 2);
	func_134(&Local_409, 7);
}

void func_192(var uParam0)
{
	unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
	unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	func_190(uParam0, 1000);
}

void func_193(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_265(uParam0, 16, 4f, 0);
		if (func_194(uParam0))
		{
			func_46();
		}
	}
	func_226(uParam0, iParam2, bParam3);
}

int func_194(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_48())
	{
		Var6 = { func_196() };
		if (!unk_0x0AAC2160036975D9(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x35D1CAD6ADAB6491(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_195(&Var0);
			if (unk_0x35D1CAD6ADAB6491(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_195(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_196()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_197(var uParam0)
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

int func_198(var uParam0, bool bParam1, float fParam2)
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
			func_149(uParam0, 1);
			if (func_32())
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
			func_224(uParam0);
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
			if (func_136(uParam0, 14))
			{
				func_163(uParam0);
				func_152(uParam0, 0);
			}
			if (func_136(uParam0, 9))
			{
				func_133(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_223(uParam0, uParam0->f_3) > 300f)
				{
					func_293(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 1 || ((func_151(unk_0x77F050A399DB77ED(), uParam0->f_3, 1) < 20f && func_128(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_128(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_220(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_219(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_218(uParam0->f_4, uParam0->f_3);
								iVar0 = func_217(uParam0, &iVar1);
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
							if (!func_137(uParam0))
							{
								unk_0xE2CB8488CFA42209(uParam0->f_3);
							}
							else if (((unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 1 && unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 0) && unk_0x49C650267EDFEBC6(uParam0->f_3, 242628503) != 7) && func_223(uParam0, uParam0->f_3) > 8f)
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
							if (func_151(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_216(uParam0, 1))
								{
									unk_0xB28207B96952D994(uParam0->f_3);
									func_293(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_215(uParam0->f_4))
								{
									unk_0xB28207B96952D994(uParam0->f_3);
									func_293(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_213(uParam0);
						if (func_223(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xE5FADE1166052251(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_200(uParam0))
								{
									func_199(uParam0);
									iLocal_89 = unk_0x3EAC9995EC220C5A();
									unk_0x1706625EBCDDEBF9(uParam0->f_3, 26, 1);
									func_133(uParam0, 5, 0);
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

void func_199(var uParam0)
{
	if (unk_0xC3B073777B46C61A(uParam0->f_8))
	{
		unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
		unk_0x296CDA10C549A502(&(uParam0->f_8));
	}
}

int func_200(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_212("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3) && !unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		func_211();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_209(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_110(uParam0, 0, 1084227584) && func_127(1, 1, 1))
			{
				if (func_216(uParam0, 1))
				{
					iLocal_88 = unk_0x3EAC9995EC220C5A();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_293(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_218(uParam0->f_4, uParam0->f_3);
				iVar9 = func_217(uParam0, &iVar10);
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
			iVar12 = func_208(&(uParam0->f_409), unk_0x03C14E8A9400F2A9(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x03C14E8A9400F2A9(uParam0->f_4, Var0), 1);
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
				func_207(0, 0, 1);
				unk_0xD1C12864812BFA0A(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 3f, 0);
				unk_0xDD10371A3DDE4593(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 25f, 0);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0xA1E3A2CCF985EE86();
				func_117();
				func_226(uParam0, 0, 0);
				Var13 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, Var6) };
				unk_0x0B5F372F57E469AC(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(uParam0->f_3, func_205(uParam0));
				func_204(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_212("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0x42FCD0B0BBF90976(uParam0->f_4, func_203(uParam0->f_7), 1);
				}
				unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
				unk_0xFE65076A204F9258(*uParam0, 0);
				unk_0xFE65076A204F9258(uParam0->f_1, 0);
				unk_0x8793DE27084C2CBD(0);
				unk_0xABF261CA61470DE0(0, 1065353216);
				unk_0xCA6D671341405469(800);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0xA1E3A2CCF985EE86();
				func_117();
				func_226(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x398F615441F52A47() && !unk_0x329E4482E654B910())
			{
				func_201(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			unk_0xFE65076A204F9258(*uParam0, 0);
			unk_0xFE65076A204F9258(uParam0->f_1, 0);
			unk_0x8793DE27084C2CBD(0);
			unk_0xABF261CA61470DE0(0, 1065353216);
			func_201(1, 1, 1);
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

void func_201(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	}
	unk_0x87B88BB971295A97(1);
	func_23(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x488AF65D7EDB6B4A(1);
		unk_0x1B40500A7841D6AB(1);
	}
	func_202(23, 0);
}

void func_202(int iParam0, bool bParam1)
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

int func_203(int iParam0)
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

void func_204(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x06F36936289C5EC8(*uParam0))
	{
		*uParam0 = unk_0xEDBA42E4C9B7F653(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_205(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x03C14E8A9400F2A9(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_206(unk_0xAF99169F0F5AE41D(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_206(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xA4F14A9B0DDEB91E((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, iParam0);
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0x571937D113E93996(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 15f);
	}
	unk_0x87B88BB971295A97(iParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0);
	unk_0x488AF65D7EDB6B4A(0);
	unk_0x1B40500A7841D6AB(0);
	func_202(23, 1);
}

int func_208(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
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

int func_209(int iParam0)
{
	if (func_210() && unk_0x3EAC9995EC220C5A() >= iParam0 + 1000)
	{
		unk_0x16AA81661A0624FB(500);
		while (!unk_0x2CC731F9E664299E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_41(0);
		func_188();
		return 1;
	}
	return 0;
}

int func_210()
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

void func_211()
{
	if (func_34())
	{
		unk_0x6F86F66DADFA5F86("appInternet");
	}
	if (func_33())
	{
		unk_0x6F86F66DADFA5F86("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_212(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x3EAC9995EC220C5A() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x3EAC9995EC220C5A();
}

void func_213(var uParam0)
{
	var uVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
		{
			if (func_150(uParam0->f_3, 1) > 30f || func_214(uParam0))
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
					func_293(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_214(var uParam0)
{
	if ((unk_0x2AA05370067DC5AC(uParam0->f_4) > 3f && func_382(uParam0, 5) > 15f) || unk_0x398B253A9754B132(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
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

int func_216(var uParam0, bool bParam1)
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

int func_217(var uParam0, var uParam1)
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

int func_218(int iParam0, int iParam1)
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

int func_219(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (!unk_0x3D8234BA64B54520(uParam0->f_3) && func_150(uParam0->f_3, 1) < fParam2)
		{
			if (!func_136(uParam0, 5))
			{
				func_265(uParam0, 5, 0, 0);
			}
		}
		else if (func_136(uParam0, 5))
		{
			func_133(uParam0, 5, 0);
		}
		if (((func_382(uParam0, 5) > IntToFloat(iParam1) && unk_0x2AA05370067DC5AC(uParam0->f_4) < fParam4) && !unk_0x3D8234BA64B54520(uParam0->f_3)) || func_150(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0, float fParam1)
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
			if ((func_151(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x092B928D30C0282D((Var0.f_2 - Var3.f_2)) < 5f)
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
				if (!func_22(uParam0->f_44, 128))
				{
					func_193(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_221(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_221(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x630E218FE7E4C793(uParam0, sParam1, uParam2, func_222(iParam3), 0);
}

int func_222(int iParam0)
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

float func_223(var uParam0, int iParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		if (func_137(uParam0))
		{
			return func_151(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_224(var uParam0)
{
	func_161(uParam0, uParam0->f_3);
	if (func_137(uParam0))
	{
		if (func_136(uParam0, 14))
		{
			func_163(uParam0);
			if (unk_0xC3B073777B46C61A(uParam0->f_10))
			{
				unk_0x296CDA10C549A502(&(uParam0->f_10));
			}
		}
	}
	if (!func_136(uParam0, 9))
	{
		if (unk_0xC3B073777B46C61A(uParam0->f_8))
		{
			unk_0xBE97057E01D4909F(uParam0->f_8, 0);
			unk_0x49AFDB1662AE2A92(uParam0->f_8, 0);
		}
		func_265(uParam0, 9, 0, 0);
		func_225("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_225(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0097650483482715(sParam0);
	unk_0x01FD9AF39CDA86AC(iParam1, 1);
}

void func_226(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_46();
		func_265(uParam0, 16, 4f, 0);
		unk_0xA1E3A2CCF985EE86();
	}
}

int func_227(var uParam0, int iParam1)
{
	if (!unk_0x77E40DD6F32BC674(2))
	{
		return 0;
	}
	func_233(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()) && !func_22(uParam0->f_44, 256))
			{
				func_61(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				func_193(uParam0, 135, 1, 0, 1);
				func_61(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_231(uParam0, iParam1))
	{
		if (func_150(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0x9A42ADE14351A508(uParam0->f_3, unk_0x77F050A399DB77ED(), 0);
				func_193(uParam0, 133, 1, 0, 1);
				func_61(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x1E80C02AC16B6622(uParam0->f_3) || unk_0x823B1736EFAFA74A(uParam0->f_3)) || func_150(uParam0->f_3, 1) > 400f)
		{
			func_293(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF8D66A34AF0C53A5(uParam0->f_2, 0);
		unk_0xD1CF9849336C4ED5(uParam0->f_4, 1);
		if (unk_0x07A8845F7F106A38(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x2AB597CDC87E0949(uParam0->f_4);
			func_229(uParam0);
			func_49(2, 0);
			bLocal_94 = true;
			func_135(&uLocal_90);
			return 1;
		}
		else
		{
			func_293(uParam0, "No Taxi", 21);
			func_228("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_228(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

void func_229(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		if (func_230())
		{
		}
	}
}

int func_230()
{
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1)
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
				bVar2 = func_215(iVar0);
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
					if (!func_22(uParam0->f_44, 64))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_228("TX_VIP_DMGD", -1);
							if (func_232("TX_VIP_DMGD"))
							{
								func_61(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_44, 32))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_228("TX_VIP_CAR", -1);
							if (func_232("TX_VIP_CAR"))
							{
								func_61(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_44, 16))
					{
						if (unk_0x77E40DD6F32BC674(2))
						{
							func_228("TX_VIP_SMALL", -1);
							if (func_232("TX_VIP_SMALL"))
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
			func_20(&(uParam0->f_44), 16);
			func_20(&(uParam0->f_44), 64);
			func_20(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_232(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_233(int iParam0)
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

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_235(var uParam0, var uParam1)
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

void func_236(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_237()
{
	Local_343.f_0 = 0;
	func_254(35490, 35465, 1);
	func_254(35226, 35203, 1);
	func_254(35142, 35117, 1);
	func_254(35046, 35022, 1);
	func_254(34912, 34891, 1);
	func_254(34838, 34813, 1);
	func_254(34671, 34648, 1);
}

int func_238(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_239(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (func_241(uParam0->f_4))
		{
			func_240(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_240(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_241(int iParam0)
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

int func_242(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_243(var uParam0)
{
	if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
	{
		if (func_244(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_244(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_245(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_240(uParam0, 11);
	return 1;
}

int func_246(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (unk_0xAB5BBCD9D3B6625D(uParam0->f_4) && !unk_0x2D081DEC13E78241(uParam0->f_4))
		{
			if (!func_136(uParam0, 25))
			{
				func_265(uParam0, 25, 0, 0);
			}
			else if (func_382(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_136(uParam0, 25))
		{
			func_133(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_247(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_248(var uParam0)
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

int func_249(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_250(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_4))
	{
		if (unk_0x968EA16107097324(uParam0->f_4, 0))
		{
			if (unk_0xFF56D249420BBDD7(uParam0->f_4))
			{
				if (func_244(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_251(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_252(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0->f_4))
	{
		if (func_253(uParam0->f_4))
		{
			func_240(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0)
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

void func_254(int iParam0, int iParam1, bool bParam2)
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

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_256(var uParam0)
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

void func_257()
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

int func_258()
{
	if (!unk_0x4A4B6FD54C499B7D(iLocal_841))
	{
		func_212("TAXI_ASSETS_STREAMED - Loading A_F_Y_BevHills_03", &iLocal_1407, 1000);
		return 0;
	}
	if (!unk_0xEDE19C6ED6E2F478(uLocal_1537))
	{
		return 0;
	}
	if (!func_259(&iLocal_1407, 0))
	{
		func_212("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_1407, 1000);
		return 0;
	}
	return 1;
}

int func_259(int iParam0, bool bParam1)
{
	if (!unk_0x4A4B6FD54C499B7D(func_19()))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x5263DE3D9A17A86F("gestures@m@standing@casual"))
		{
			func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x5263DE3D9A17A86F("oddjobs@taxi@"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x5263DE3D9A17A86F("oddjobs@towingcome_here"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x5263DE3D9A17A86F("misscommon@response"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x77E40DD6F32BC674(2))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_260(var uParam0, int iParam1)
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

int func_261(var uParam0)
{
	if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
	{
		uParam0->f_8 = func_262(uParam0->f_3, 0, 0);
		unk_0xF8370848FF9633FA(1, 0);
		unk_0x49AFDB1662AE2A92(uParam0->f_8, 1);
		unk_0x45C91EE3FC674072(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xD0C8DD55C652567F(uParam0->f_3, unk_0x77F050A399DB77ED(), -1, 2048, 4);
	}
	return 1;
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	return func_156(iParam0, !bParam1, bParam2);
}

int func_263(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x1F2158D615BC4B25(uParam0->f_3))
	{
		func_264(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_38(uParam0->f_14, 0);
		unk_0xD1C12864812BFA0A(uParam0->f_14, 2f, 0);
		func_36(uParam0->f_14, 0, fParam10);
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

void func_264(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x12AABAFFAB9E7CD2(Param1, 20f, 5f, 0);
}

void func_265(var uParam0, int iParam1, float fParam2, bool bParam3)
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

void func_266()
{
	unk_0xC60576ADD1AECA45(iLocal_841);
	uLocal_1537 = func_268();
	func_267(0);
}

void func_267(bool bParam0)
{
	unk_0xC60576ADD1AECA45(func_19());
	if (bParam0)
	{
		unk_0x6E2E777C1AD81C36("gestures@m@standing@casual");
	}
	unk_0x6E2E777C1AD81C36("oddjobs@taxi@");
	unk_0x6E2E777C1AD81C36("oddjobs@towingcome_here");
	unk_0x6E2E777C1AD81C36("misscommon@response");
	unk_0xC8C54AFEF8609CEF("TAXI", 2);
	if (!func_22(Global_99250.f_17715, 128))
	{
		func_61(&(Global_99250.f_17715), 128);
	}
}

var func_268()
{
	return unk_0x2F14983962462691("MIDSIZED_MESSAGE");
}

void func_269(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
		{
			if (bParam2)
			{
				if (func_382(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_193(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_193(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_265(uParam0, 10, 0f, 1);
				}
			}
			else if (func_382(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_193(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_193(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_265(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_382(uParam0, 10) > 30f)
		{
			if (!func_48())
			{
				if (uParam0->f_112)
				{
					func_193(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_193(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_265(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_15(&(Local_190[5 /*10*/].f_6)))
		{
			func_135(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_292(uParam0))
			{
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_291(uParam0, 1);
				func_289(5, uParam0);
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_15(&(Local_190[0 /*10*/].f_6)))
		{
			func_135(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_287(uParam0))
			{
				func_291(uParam0, 1);
				func_289(0, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_15(&(Local_190[1 /*10*/].f_6)))
		{
			func_135(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_286(uParam0))
			{
				func_291(uParam0, 1);
				func_289(1, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_15(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x1F2158D615BC4B25(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x070BBD7287E8E744(uParam0->f_4);
				func_135(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_96(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_285(uParam0))
			{
				func_291(uParam0, 1);
				func_289(8, uParam0);
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_15(&(Local_190[6 /*10*/].f_6)))
		{
			func_135(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_284(uParam0))
			{
				func_291(uParam0, 1);
				func_289(6, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_15(&(Local_190[4 /*10*/].f_6)))
		{
			func_135(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_283(uParam0))
			{
				func_291(uParam0, 1);
				func_289(4, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_15(&(Local_190[7 /*10*/].f_6)))
		{
			func_135(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_282(uParam0))
			{
				func_289(7, uParam0);
				func_291(uParam0, 1);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_15(&(Local_190[9 /*10*/].f_6)))
		{
			func_135(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
		}
		else if (func_96(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_281(uParam0))
			{
				func_291(uParam0, 1);
				func_289(9, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_15(&(Local_190[13 /*10*/].f_6)))
		{
			func_135(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_275(uParam0))
			{
				func_291(uParam0, 1);
				func_289(13, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_6)))
		{
			func_135(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_274(uParam0))
			{
				func_291(uParam0, 1);
				func_289(14, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_15(&(Local_190[11 /*10*/].f_6)))
		{
			func_135(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_273(uParam0))
			{
				func_291(uParam0, 1);
				func_289(11, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_15(&(Local_190[12 /*10*/].f_6)))
		{
			func_135(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_96(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_272(uParam0))
			{
				func_291(uParam0, 1);
				func_289(12, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_15(&(Local_190[2 /*10*/].f_6)))
		{
			func_271(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_96(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_270(uParam0))
			{
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_291(uParam0, 1);
				func_289(2, uParam0);
				func_288(uParam0);
			}
		}
	}
}

int func_270(var uParam0)
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
					func_135(&(Local_190[2 /*10*/].f_3));
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

void func_271(var uParam0, float fParam1)
{
	if (!func_15(uParam0))
	{
		func_99(uParam0, fParam1);
	}
}

int func_272(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[12 /*10*/].f_3)))
			{
				func_135(&(Local_190[12 /*10*/].f_3));
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

int func_273(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (unk_0x092B928D30C0282D(Var0.f_0) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_135(&(Local_190[11 /*10*/].f_3));
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

int func_274(var uParam0)
{
	if (((((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x10C448DEF4298C4F(unk_0xAF99169F0F5AE41D(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x1F2158D615BC4B25(uParam0->f_5))
			{
				if ((unk_0x2AA05370067DC5AC(uParam0->f_4) > 15f && func_151(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_5) && !unk_0x9A2BADF8B8CE0E2A(uParam0->f_5, -1)))
				{
					func_135(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_96(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_151(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x79AF38B040695E18(uParam0->f_5))
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

int func_275(var uParam0)
{
	if (((unk_0x968EA16107097324(uParam0->f_4, 0) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_276(uParam0->f_4) && unk_0x2AA05370067DC5AC(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_190[13 /*10*/].f_3)))
			{
				func_135(&(Local_190[13 /*10*/].f_3));
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

bool func_276(int iParam0)
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
	Var9 = { func_280((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_279(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_277(unk_0xAF99169F0F5AE41D(iParam0, 1), Var15, Var18, Var21);
}

int func_277(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_280(Param6 - Param3) };
	Var3 = { func_280(Param9 - Param3) };
	fVar6 = func_278(Param0, Var0);
	fVar7 = func_278(Param3, Var0);
	fVar8 = func_278(Param6, Var0);
	fVar9 = func_278(Param0, Var3);
	fVar10 = func_278(Param3, Var3);
	fVar11 = func_278(Param9, Var3);
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

float func_278(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_279(struct<3> Param0, int iParam3)
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

Vector3 func_280(struct<3> Param0)
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

int func_281(var uParam0)
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

int func_282(var uParam0)
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

int func_283(var uParam0)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0 = unk_0x67ABEF68FB191DCA(unk_0x8ACD527A7E574590());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[4 /*10*/].f_3)))
			{
				func_135(&(Local_190[4 /*10*/].f_3));
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

int func_284(var uParam0)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		iVar0 = unk_0x233FE7D9ED4E02FA(unk_0x8ACD527A7E574590());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[6 /*10*/].f_3)))
			{
				func_135(&(Local_190[6 /*10*/].f_3));
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

int func_285(var uParam0)
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
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, 72, 1, 0, 1);
				}
				func_95(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		Var0 = { unk_0x11521407B348A6C1(uParam0->f_4, 1) };
		if (unk_0x092B928D30C0282D(Var0.f_0) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[1 /*10*/].f_3)))
			{
				func_135(&(Local_190[1 /*10*/].f_3));
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

int func_287(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (!unk_0x2D081DEC13E78241(uParam0->f_4) && unk_0x314654A7E186B6B2(uParam0->f_4))
		{
			if (!func_15(&(Local_190[0 /*10*/].f_3)))
			{
				func_135(&(Local_190[0 /*10*/].f_3));
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

void func_288(var uParam0)
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
	func_265(uParam0, 10, 0f, 1);
	unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
}

void func_289(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_290(uParam1, iParam0);
	func_95(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_290(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_291(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_292(var uParam0)
{
	if (unk_0x968EA16107097324(uParam0->f_4, 0))
	{
		if (unk_0x2AA05370067DC5AC(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_190[5 /*10*/].f_3)))
			{
				func_135(&(Local_190[5 /*10*/].f_3));
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

void func_293(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_188();
	func_403(2);
	Var0 = { func_308() };
	if ((!unk_0x0AAC2160036975D9(&Var0) && func_48()) && !unk_0x35D1CAD6ADAB6491(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xA1E3A2CCF985EE86();
		unk_0x4ACCE973F9C3CA3B(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
		{
			if (!func_113(uParam0))
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
		func_265(uParam0, 3, 0, 0);
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
				func_306(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_113(uParam0))
			{
				if (unk_0xFF56D249420BBDD7(uParam0->f_4))
				{
					func_304(uParam0, 4096, 0);
				}
				else
				{
					func_304(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_306(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_306(uParam0, &Var0);
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
				func_306(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_306(uParam0, &Var0);
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_306(uParam0, &Var0);
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
				func_306(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_304(uParam0, 0, 0);
			func_306(uParam0, &Var0);
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
				func_306(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_306(uParam0, &Var0);
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
				func_306(uParam0, &Var0);
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_303(&Var0);
			func_294(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_306(uParam0, &Var0);
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
					func_306(uParam0, &Var0);
				}
			}
			else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_49(3, 0);
		}
		func_265(uParam0, 3, 0f, 1);
	}
}

int func_294(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_302(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_295(sParam2, iParam3, 0);
}

int func_295(char* sParam0, int iParam1, bool bParam2)
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
					func_189();
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
		if (func_301(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_300();
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
				func_299();
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
				if (func_298())
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
			if (func_30())
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
			func_297();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_296();
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
		func_189();
	}
	return 0;
}

void func_296()
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

void func_297()
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

int func_298()
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

void func_299()
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

void func_300()
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

bool func_301(int iParam0, int iParam1)
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

void func_302(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_303(char* sParam0)
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

void func_304(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		unk_0x9526D9575C237F2F(uParam0->f_3, 0);
		unk_0x1E7F0537BF0E8998(uParam0->f_3);
		unk_0xCAB5098DD2DF915A(uParam0->f_3, 3, 0);
		unk_0xB424F90D6E96BCF8(uParam0->f_3, 17, 1);
		unk_0xE2CB8488CFA42209(uParam0->f_3);
		if ((func_131(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_108(uParam0->f_29)) && !bParam2)
		{
			func_305(uParam0);
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

void func_305(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
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

void func_306(var uParam0, char* sParam1)
{
	if (func_307(uParam0))
	{
		func_294(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_307(var uParam0)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
	{
		if (func_151(unk_0x77F050A399DB77ED(), uParam0->f_3, 1) < 40f && !unk_0x3D8234BA64B54520(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_308()
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

int func_309(var uParam0)
{
	return uParam0->f_118;
}

void func_310()
{
	func_342(&Local_409);
	if (func_341(&Local_409, &Local_1459))
	{
		switch (Local_1459.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_340(&Local_409))
					{
						if (func_339("TX_OBJ_TTB_DO") || unk_0xC3B073777B46C61A(Local_409.f_9))
						{
							Local_1459.f_27++;
						}
						else if (func_338(&Local_409) != 10)
						{
							func_193(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_338(&Local_409) > 10 && func_338(&Local_409) != 20) && !func_340(&Local_409))
				{
					func_193(&Local_409, 20, 1, 0, 0);
					if (bLocal_1458)
					{
					}
				}
				break;
			
			case 2:
				if (func_382(&Local_409, 18) > unk_0x1BB2D16654966BFB(2f, 10f))
				{
					if (func_338(&Local_409) != 17)
					{
						func_193(&Local_409, 17, 1, 0, 0);
						if (bLocal_1458)
						{
						}
					}
				}
				break;
			
			case 3:
				if (func_382(&Local_409, 18) > unk_0x1BB2D16654966BFB(2f, 10f))
				{
					if (func_338(&Local_409) != 18)
					{
						func_193(&Local_409, 18, 1, 0, 0);
						if (bLocal_1458)
						{
						}
					}
				}
				break;
			
			case 4:
				if (func_382(&Local_409, 18) > 30f)
				{
					if (func_338(&Local_409) != 16)
					{
						func_193(&Local_409, 16, 1, 0, 0);
						if (bLocal_1458)
						{
						}
					}
				}
				break;
			
			case 5:
				if (func_382(&Local_409, 18) > unk_0x1BB2D16654966BFB(8f, 16f))
				{
				}
				break;
			}
	}
	func_311(&Local_409, &uLocal_1489, &Local_1459, bLocal_1458);
}

int func_311(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_319(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_136(uParam0, 2))
	{
		if (func_318(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x3EAC9995EC220C5A() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_317(uParam0))
				{
					uParam2->f_7 = { func_316(uParam1) };
					func_294(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_48())
				{
					uParam2->f_13 = { func_196() };
					if (unk_0x35D1CAD6ADAB6491(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_62(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_314(uParam1);
					func_265(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_143(uParam0))
				{
					if (func_48())
					{
						func_265(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_313() };
						if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_48())
				{
					uParam2->f_19 = { func_308() };
				}
				else
				{
					func_62(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_314(uParam1);
					func_265(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_136(uParam0, 14) && !func_48()) && !func_143(uParam0)) && func_382(uParam0, 18) > 1f)
				{
					func_265(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_48())
				{
					if (func_382(uParam0, 18) > 1f)
					{
						if (!unk_0x0AAC2160036975D9(&(uParam2->f_1)))
						{
							func_312(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_48())
				{
					func_62(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_314(uParam1);
					func_265(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_312(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_302(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_295(sParam2, iParam4, 0);
}

struct<6> func_313()
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

void func_314(var uParam0)
{
	int iVar0;
	
	iVar0 = func_315(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_61(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_124(), 24);
	}
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_316(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_61(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_317(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_145("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_145("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_145("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_145("TX_OBJ_GYB_DO", 0, 0) || func_145("TAXI_OBJ_GYB", 0, 0)) || func_145("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_145("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_145("TX_OBJ_CYI_DO", 0, 0) || func_145("TAXI_OBJ_CYI_01", 0, 0)) || func_145("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_145("TX_OBJ_GYN_DO", 0, 0) || func_145("TAXI_OBJ_GYN", 0, 0)) || func_145("TAXI_OBJ_GYN_TG", 0, 0)) || func_145("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_145("TAXI_OBJ_CC1", 0, 0) || func_145("TAXI_OBJ_CC2", 0, 0)) || func_145("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_145("TAXI_OBJ_FTC1", 0, 0) || func_145("TAXI_OBJ_FTC2", 0, 0)) || func_145("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_145("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_145("TAXI_OBJ_GETRUN", 0, 0) || func_145("TAXI_OBJ_DRIVE", 0, 0)) || func_145("TAXI_OBJ_RETURN", 0, 0)) || func_145("TAXI_OBJ_POL", 0, 0)) || func_145("TAXI_OBJ_RUNOUT", 0, 0)) || func_145("TAXI_OBJ_POL", 0, 0));
}

int func_318(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_319(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_317(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_136(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_338(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_335(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_48())
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
						func_334(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_331(uParam0, Var0, func_333(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_265(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				func_158(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_382(uParam0, 16) > 1f)
				{
					func_160(1);
					if (uParam0->f_411 == 9)
					{
						func_225("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_225("TAXI_VIP_RETURN", 7500, 1);
					}
					func_265(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
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
					func_334(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_221(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_382(uParam0, 16) > func_157(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_48()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_338(uParam0))
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
				func_334(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_335(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_294(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_193(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_265(uParam0, 16, 0, 0);
				func_193(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_337(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_334(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_265(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_225("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_225("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC3B073777B46C61A(uParam0->f_9))
					{
						uParam0->f_9 = func_330(uParam0->f_17, 1);
					}
					else if (unk_0x9CA5B45C6C4CA8F3(uParam0->f_9) == 0)
					{
						unk_0xBE97057E01D4909F(uParam0->f_9, 255);
						unk_0x15751CDFDEEBDEA2(uParam0->f_9, uParam0->f_17);
						unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
					}
				}
				func_193(uParam0, 10, 1, 0, 0);
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
				func_195(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_221(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC3B073777B46C61A(uParam0->f_9))
					{
						uParam0->f_9 = func_330(uParam0->f_17, 1);
					}
					else if (unk_0x9CA5B45C6C4CA8F3(uParam0->f_9) == 0)
					{
						unk_0xBE97057E01D4909F(uParam0->f_9, 255);
						unk_0x15751CDFDEEBDEA2(uParam0->f_9, uParam0->f_17);
						unk_0x49AFDB1662AE2A92(uParam0->f_9, 1);
					}
				}
				func_193(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_329(uParam0, 33554432, Var0, "", 1, 8);
				func_265(uParam0, 16, 0, 0);
				func_193(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_48())
				{
					func_328(uParam0, 0);
					func_61(&(uParam0->f_44), 4);
					func_265(uParam0, 16, 0, 0);
					func_193(uParam0, 13, 0, 0, 0);
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
				func_195(&Var0);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_382(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_195(&Var0);
					}
					func_326(Var0, uParam1);
					func_61(&(uParam0->f_81), 67108864);
					func_265(uParam0, 16, 0, 0);
					func_265(uParam0, 11, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_382(uParam0, 11) > uParam0->f_36)
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
							func_195(&Var0);
						}
					}
					func_326(Var0, uParam1);
					func_265(uParam0, 11, 0, 0);
					func_265(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
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
					func_195(&Var0);
				}
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_195(&Var0);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_195(&Var0);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_195(&Var0);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				func_61(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 1, 0, 8);
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
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
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
					func_325(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_325(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_326(Var0, uParam1);
				func_335(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 6, 0f, 1);
				func_226(uParam0, 0, 0);
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
					func_325(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_325(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_326(Var0, uParam1);
				func_335(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 6, 0f, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 12:
				func_225("TAXI_OBJ_GYB", 3500, 1);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_225("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_225("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_225("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_225("TAXI_OBJ_CYI_01", 7500, 1);
					func_61(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_195(&Var0);
				func_326(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_195(&Var0);
				func_326(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_195(&Var0);
				func_326(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 33:
				func_225("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_382(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_195(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_326(Var0, uParam1);
						}
						else
						{
							func_334(uParam0, &Var0, 0, 0, 8);
						}
						func_61(&(uParam0->f_82), 8192);
						func_265(uParam0, 16, 0, 0);
						func_265(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_195(&Var0);
					func_334(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_195(&Var0);
					func_334(uParam0, &Var0, 0, 0, 8);
					func_61(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 46, 1, 0, 0);
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
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_226(uParam0, 0, 0);
				break;
			
			case 139:
				func_225("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_193(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA3746E7F17F47DC2(0, 120);
				if (!func_22(uParam0->f_82, 268435456))
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
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xA3746E7F17F47DC2(0, 100);
				if (!func_22(uParam0->f_82, 268435456))
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
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_225("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_226(uParam0, 0, 0);
				func_193(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_48())
				{
					func_225("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_226(uParam0, 0, 0);
					func_193(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_225("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_226(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_324(uParam0, 1, Var0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_324(uParam0, 2, Var0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_335(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_22(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_22(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_61(&(uParam0->f_81), 2097152);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 16, 0, 0);
				func_335(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_335(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_335(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_335(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_324(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_324(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_324(uParam0, 8, Var0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_335(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_323(uParam0))
				{
					func_331(uParam0, Var0, func_333(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_221(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_337(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_294(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_337(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_337(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_335(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_265(uParam0, 16, 0, 0);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_265(uParam0, 16, 0, 0);
				}
				func_335(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_329(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_329(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_335(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_329(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_329(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_335(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_322(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_322(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_322(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_335(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_226(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_337(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_335(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_265(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_335(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_335(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_329(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_329(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_323(uParam0))
				{
					func_331(uParam0, Var0, func_333(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_221(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_265(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_61(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_265(uParam0, 16, 0, 0);
				}
				func_335(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_48())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_334(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_331(uParam0, Var0, func_333(uParam0, 65));
					func_226(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_48())
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
					func_334(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_331(uParam0, Var0, func_333(uParam0, 66));
					func_226(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_48())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								func_335(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								func_335(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_337(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_335(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_265(uParam0, 16, 0, 0);
								func_226(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_334(uParam0, &Var0, 0, 0, 8);
									func_265(uParam0, 16, 0, 0);
									func_265(uParam0, 11, 0, 0);
									func_226(uParam0, 0, 0);
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
									func_195(&Var0);
									func_334(uParam0, &Var0, 0, 0, 8);
									func_265(uParam0, 16, 0, 0);
									func_265(uParam0, 11, 0, 0);
									func_226(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_334(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_193(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_335(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_322(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_322(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_322(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_226(uParam0, 0, 0);
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
				func_337(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_221(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_265(uParam0, 16, 0, 0);
				func_335(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_323(uParam0))
				{
					func_331(uParam0, Var0, func_333(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_221(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_321(uParam0, Var0, 8);
				}
				func_335(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_61(&(uParam0->f_83), 1024);
					func_265(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_61(&(uParam0->f_83), 2048);
					func_265(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_61(&(uParam0->f_83), 4096);
					func_265(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_195(&Var0);
					func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_322(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_322(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_335(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 52, 1, 0, 0);
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
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
				{
					func_221(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_323(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_334(uParam0, &Var0, 0, 0, 8);
						func_193(uParam0, 52, 1, 0, 0);
						func_265(uParam0, 16, 0, 0);
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
						func_334(uParam0, &Var0, 0, 0, 8);
						func_265(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_337(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_265(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_335(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) >= 1)
				{
					func_225("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_329(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_329(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_329(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_335(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_320(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_320(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_335(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 100:
				func_225("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_226(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_195(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_195(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_334(uParam0, &Var0, 0, 0, 8);
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
					func_195(&Var0);
				}
				func_61(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_382(uParam0, 11) > uParam0->f_36)
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
						func_195(&Var0);
						func_326(Var0, uParam1);
						func_61(&(uParam0->f_82), 65536);
						func_265(uParam0, 16, 0, 0);
						func_265(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_382(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_195(&Var0);
						func_326(Var0, uParam1);
						func_61(&(uParam0->f_82), 131072);
						func_265(uParam0, 16, 0, 0);
						func_265(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_61(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_61(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_61(&(uParam0->f_82), 33554432);
				}
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_337(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_195(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_334(uParam0, &Var0, 0, 0, 8);
				}
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_326(Var0, uParam1);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_337(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_61(&(uParam0->f_81), 2097152);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_195(&Var0);
				func_326(Var0, uParam1);
				func_61(&(uParam0->f_81), 67108864);
				func_265(uParam0, 16, 0, 0);
				func_265(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_329(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
					{
						func_221(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_193(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_329(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_193(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_225("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_226(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_329(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
						{
							func_221(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_329(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_193(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_225("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_226(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_294(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_265(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_329(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 88:
				func_225("TAXI_TIEFLEE", 7500, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_225("TAXI_OBJ_CYI_1B", 7500, 1);
					func_61(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_226(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_195(&Var0);
				func_334(uParam0, &Var0, 0, 0, 8);
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
				func_334(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_334(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
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
				func_334(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_334(uParam0, &Var0, 1, 0, 8);
				func_193(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_225("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_193(uParam0, 0, 0, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			}
	}
}

void func_320(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_61(&(uParam0->f_82), iParam1);
	func_265(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_195(&Param2);
	}
	func_294(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_321(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_61(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_61(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xA3746E7F17F47DC2(1, 3), 24);
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_265(uParam0, 16, 0, 0);
}

void func_322(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_61(&(uParam0->f_82), iParam1);
	func_265(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_195(&Param2);
		}
	}
	func_294(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_323(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_324(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_61(&(uParam0->f_81), iParam1);
	func_265(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_294(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_325(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_244(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_195(sParam2);
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

void func_326(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_327(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_61(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_327(var uParam0)
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

void func_328(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_225("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_225("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_225("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_225("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_225("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_225("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_225("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_225("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_225("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_225("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_225("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_225("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_329(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_61(&(uParam0->f_81), iParam1);
	func_265(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_195(&Param2);
	}
	func_294(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_330(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_157(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

void func_331(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_265(uParam0, 16, 0, 0);
	func_265(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x1E80C02AC16B6622(uParam0->f_3))
	{
		unk_0xCA49B63BCA981C6F(uParam0->f_3, &cParam1, func_332(uParam0));
	}
}

char* func_332(var uParam0)
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

char* func_333(var uParam0, int iParam1)
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

int func_334(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_265(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_265(uParam0, 17, 0f, 1);
	}
	func_226(uParam0, iParam2, 0);
	return func_294(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_335(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
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
		if (func_22(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
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
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 = (*uParam1 + 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_336(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_302(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_295(sParam2, iParam4, 0);
}

void func_337(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_244(*uParam0, iVar1))
		{
			func_62(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_195(sParam2);
				}
				else
				{
					func_195(sParam2);
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

int func_338(var uParam0)
{
	return uParam0->f_416;
}

int func_339(char* sParam0)
{
	if (!unk_0x9D14A941038EF8A3(sParam0))
	{
		if (func_145(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_340(var uParam0)
{
	if (func_48())
	{
		return 1;
	}
	if (func_136(uParam0, 17))
	{
		return 1;
	}
	if (func_136(uParam0, 14))
	{
		return 1;
	}
	if (func_143(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_341(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_136(uParam0, 9));
}

void func_342(var uParam0)
{
	if (func_136(uParam0, 17))
	{
		if (!func_136(uParam0, 14))
		{
			if (!func_143(uParam0))
			{
				if (!func_48())
				{
					func_133(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_343(var uParam0)
{
	return uParam0->f_117;
}

void func_344(var uParam0)
{
	if (!func_137(uParam0))
	{
		if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
		{
		}
		func_149(uParam0, 1);
	}
	else if (func_136(uParam0, 14))
	{
		func_163(uParam0);
		func_152(uParam0, 0);
	}
}

void func_345(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x1F2158D615BC4B25(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_244(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_244(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_244(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_62(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x3EAC9995EC220C5A();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_244(Local_343.f_1[iVar0 /*4*/], 4) && !func_244(Local_343.f_1[iVar0 /*4*/], 8))
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
			func_293(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_346(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x0AAC2160036975D9(&(uParam0->f_124)) && func_48())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_48())
				{
					StringCopy(&(uParam0->f_124), func_124(), 24);
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

int func_347(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_136(uParam0, 27))
	{
		func_134(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_382(uParam0, 27) > 5f)
	{
		if (func_374(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_265(uParam0, 27, 0, 0);
			func_265(uParam0, 10, 0, 0);
			func_372(uParam0, &uVar0, uParam1);
		}
		func_369(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_348(uParam0);
	}
	if ((((!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()) && (unk_0x06F36936289C5EC8(*uParam0) && !unk_0xFF10EEA93744C96A(*uParam0))) && (unk_0x06F36936289C5EC8(uParam0->f_1) && !unk_0xFF10EEA93744C96A(uParam0->f_1))) && !unk_0x5C62F8B9BBEC5A43()) && !func_48())
	{
		if (func_382(uParam0, 26) > 10f)
		{
			func_133(uParam0, 26, 0);
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
		}
	}
	else if (func_136(uParam0, 26))
	{
		func_133(uParam0, 26, 0);
	}
	return 0;
}

void func_348(var uParam0)
{
	if (!func_368(uParam0->f_429))
	{
		uParam0->f_429 = func_367();
		func_358(&(uParam0->f_429), 0, 0, unk_0xA3746E7F17F47DC2(4, 7), 0, 0, 0);
	}
	else if (func_349(uParam0->f_429))
	{
		func_293(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_349(int iParam0)
{
	return func_350(func_367(), iParam0);
}

int func_350(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_368(iParam1) || !func_368(iParam0))
	{
		return 1;
	}
	iVar0 = func_356(iParam0);
	iVar1 = func_356(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_355(iParam0);
	iVar1 = func_355(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_351(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_352(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_353(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_354(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_355(int iParam0)
{
	return iParam0 & 15;
}

var func_356(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_357(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_357(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_356(*uParam0);
	iVar1 = func_355(*uParam0);
	iVar2 = func_354(*uParam0);
	iVar3 = func_353(*uParam0);
	iVar4 = func_352(*uParam0);
	iVar5 = func_351(*uParam0);
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
	iVar6 = func_366(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_366(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_359(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_359(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_365(uParam0, iParam1);
	func_364(uParam0, iParam2);
	func_363(uParam0, iParam3);
	func_362(uParam0, iParam5);
	func_361(uParam0, iParam4);
	func_360(uParam0, iParam6);
}

void func_360(var uParam0, int iParam1)
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

void func_361(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_355(*uParam0);
	iVar1 = func_356(*uParam0);
	if (iParam1 < 1 || iParam1 > func_366(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_364(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_365(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_366(int iParam0, int iParam1)
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

int func_367()
{
	var uVar0;
	
	func_365(&uVar0, unk_0x624CC88A8815545E());
	func_364(&uVar0, unk_0xD3D98375D5CA69E4());
	func_363(&uVar0, unk_0x5C5157A539753532());
	func_361(&uVar0, unk_0xCB12BC5A618B995B());
	func_362(&uVar0, unk_0x9746D90F14C930B9());
	func_360(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

int func_368(int iParam0)
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
	iVar0 = func_351(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_352(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_353(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_356(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_355(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_354(iParam0);
	if (iVar5 < 1 || iVar5 > func_366(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_369(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_371()) && !func_137(uParam0)) || ((uParam0->f_411 != 9 && func_231(uParam0, 1)) && !func_137(uParam0)))
		{
			uVar0 = func_370(uParam0->f_4);
			unk_0x98A0065C157ED63F(&uVar0);
			uParam0->f_4 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			unk_0x8D429A827A931AC9(uParam0->f_4, 1, 0);
			func_163(uParam0);
			func_152(uParam0, 0);
		}
	}
}

var func_370(var uParam0)
{
	return uParam0;
}

int func_371()
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
					if (unk_0x3CE8DE6EBE766C15(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_372(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_373(uParam0, 0, 1))
			{
				func_293(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_373(uParam0, 0, 4))
			{
				func_293(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_373(uParam0, 0, 8))
			{
				func_293(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_373(uParam0, 1, 1))
			{
				func_293(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_373(uParam0, 0, 1))
			{
				func_293(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_113(uParam0))
			{
				func_293(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_373(var uParam0, int iParam1, int iParam2)
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
				func_193(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_193(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_374(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x77F050A399DB77ED();
	if (!unk_0x0B6E83A9A7ED3EBA(iVar0) && !unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_380(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_378(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_377(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_375(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_375(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_376(unk_0x77F050A399DB77ED(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xCD7683F575A67B31(iParam0) && func_150(iParam0, 1) < 1.5f)
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

int func_376(int iParam0, int iParam1)
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

int func_377(int iParam0, int iParam1, var uParam2)
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

int func_378(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x7E0A8E0015B69AA4(iParam0) || func_379(iVar3))
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

int func_379(int iParam0)
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
						if (func_151(unk_0x77F050A399DB77ED(), iParam0, 1) < 40f)
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

int func_380(int iParam0, var uParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
		{
			if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iParam0) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0))
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_150(iParam0, 1) < uParam1->f_2)
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

void func_381(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (unk_0x968EA16107097324(uParam0->f_4, 0))
		{
			if (func_131(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x3B97B8A2AAD89A9D(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_61(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_382(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_135(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_96(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_383()
{
	func_384(&Local_409);
	func_401();
}

void func_384(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_403(2);
	}
}

int func_385(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_48() && func_382(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_3))
		{
			if (unk_0x968EA16107097324(uParam0->f_4, 0))
			{
				if (unk_0xE5FADE1166052251(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_244(uParam0->f_85, 32))
					{
						if (!unk_0xFF56D249420BBDD7(uParam0->f_4))
						{
							func_304(uParam0, 4160, 0);
						}
						else
						{
							func_304(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_304(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_304(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_304(uParam0, 0, 0);
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

void func_386(var uParam0)
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

int func_387(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_388()
{
	func_390(&Local_409, 4);
	Local_409.f_410 = 0;
	Local_409.f_36 = 20f;
	Local_409.f_23 = { -422.4797f, 1181.769f, 324.6417f };
	Local_409.f_33 = 225.6436f;
	Local_409.f_26 = { 171.1731f, -3288.171f, 4.7828f };
	Local_409.f_34 = 184.17f;
	func_389(&Local_409, 20, 40);
}

void func_389(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_390(var uParam0, int iParam1)
{
	func_400(1);
	func_165();
	func_6(&(uParam0->f_244));
	func_399(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_99250.f_17715, 4))
	{
		func_61(&(Global_99250.f_17715), 4);
	}
	func_394(uParam0);
	func_392(uParam0);
	unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	uParam0->f_102 = (func_391(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xC8C54AFEF8609CEF("TAXI", 2);
}

int func_391(int iParam0)
{
	return Global_99250.f_17715.f_39[iParam0];
}

void func_392(var uParam0)
{
	switch (func_60(uParam0))
	{
		case 0:
			func_393(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_393(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_393(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_393(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_393(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_393(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_393(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_393(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_393(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_393(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_393(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_394(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_398(uParam0, 3);
			func_397(uParam0, 14);
			break;
		
		case 1:
			func_398(uParam0, 14);
			func_397(uParam0, 8);
			break;
		
		case 2:
			func_398(uParam0, 8);
			func_397(uParam0, 7);
			break;
		
		case 3:
			func_398(uParam0, 15);
			func_397(uParam0, 6);
			break;
		
		case 4:
			func_398(uParam0, 0);
			func_397(uParam0, 3);
			break;
		
		case 5:
			func_398(uParam0, 6);
			func_397(uParam0, 7);
			break;
		
		case 6:
			func_398(uParam0, 8);
			func_397(uParam0, 15);
			break;
		
		case 7:
			func_398(uParam0, 8);
			func_397(uParam0, 14);
			break;
		
		case 8:
			func_398(uParam0, 7);
			func_397(uParam0, 15);
			break;
		
		case 9:
			func_398(uParam0, unk_0xA3746E7F17F47DC2(0, 17));
			iVar0 = func_396((uParam0->f_418.f_2 + unk_0xA3746E7F17F47DC2(1, 17)), 0, 16);
			func_397(uParam0, iVar0);
			func_395(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_395(var uParam0)
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

int func_396(int iParam0, int iParam1, int iParam2)
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

void func_397(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_398(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_399(var uParam0)
{
	uParam0->f_2 = unk_0x77F050A399DB77ED();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_133(uParam0, 32, 0);
}

void func_400(bool bParam0)
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

void func_401()
{
	func_177(1);
	func_184(&uLocal_846);
	func_402();
	unk_0x2F798BA2098FDADE();
}

void func_402()
{
	unk_0xFB4F6722A032A0F0(iLocal_841);
}

void func_403(int iParam0)
{
	Global_97962.f_22 = iParam0;
}

