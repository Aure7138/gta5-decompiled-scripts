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
	struct<3> Local_857[47];
	struct<3> Local_999[47];
	struct<3> Local_1141[47];
	struct<3> Local_1283[47];
	struct<3> Local_1425 = { 0, 0, 0 } ;
	var uLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	int iLocal_1435 = 0;
	float fLocal_1436[47] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1484 = 0;
	struct<28> Local_1485 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 5;
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
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
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
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 1097859072;
	var uLocal_1559 = 1500;
	var uLocal_1560 = 45;
	var uLocal_1561 = 1103626240;
	var uLocal_1562 = 5;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
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
	uLocal_77 = unk_0x12B4A28A041D640E();
	uLocal_78 = unk_0xCBCFC1EA40F244E6();
	Local_83 = { 500f, 500f, 500f };
	iLocal_841 = joaat("a_f_y_bevhills_03");
	Local_851 = { -412.0875f, 1171.359f, 324.8176f };
	Local_854 = { -411.0378f, 1175.733f, 324.6417f };
	iLocal_1431 = 1;
	if (unk_0x78BF2001491914AC(67))
	{
		func_416(2);
		func_414();
	}
	unk_0x21C966D49C5B368B(1);
	func_401();
	while (true)
	{
		if (!unk_0xA9A04898798AE9E6(Local_409.f_2, 0))
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
	uParam0->f_2 = unk_0x2A5EB8B0FE590B91();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x2A5EB8B0FE590B91());
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
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
	
	iVar0 = func_3(unk_0x2A5EB8B0FE590B91());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_400(&Local_409))
	{
		func_399(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_398(&Local_409, 0))
			{
				func_396();
			}
		}
		else if (func_395(&Local_409, 31) > 5f)
		{
			func_416(2);
			func_414();
		}
	}
	else
	{
		func_394(&Local_409);
		func_360(&Local_409, &uLocal_1556);
		func_359(&Local_409, &uLocal_1432, 0);
		func_358(&Local_409);
		if (Local_409.f_410 > 2)
		{
			func_357(&Local_409);
			if (!func_356(&Local_409))
			{
				func_323();
			}
			else
			{
				func_306(&Local_409, "Taxi Not Driveable", func_322(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_282(&Local_409, 0, 1);
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_279();
				func_278(&Local_409, 16, 4f, 0);
				func_276(&Local_409, Local_851, Local_854, "TaxiMiranda", iLocal_841, 0f, 10f);
				func_274(&Local_409);
				func_273(&Local_409, 1);
				break;
			
			case 1:
				if (func_271())
				{
					func_270();
					func_250();
					func_249(&(Local_842[0 /*3*/]), "TAXI_SC_BN_08", 500);
					func_248(&Local_409, &Local_842);
					Local_409.f_14 = { Local_851 };
					func_247(&Local_409);
					func_273(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_240(&Local_409, 1))
				{
					if (!unk_0xA9A04898798AE9E6(Local_409.f_3, 0))
					{
						unk_0x6CA29A70250F194F(Local_409.f_3, 3, 0, 2, 0);
						unk_0x6CA29A70250F194F(Local_409.f_3, 2, 1, 0, 0);
						unk_0x6CA29A70250F194F(Local_409.f_3, 4, 1, 0, 0);
						unk_0x6CA29A70250F194F(Local_409.f_3, 0, 0, 1, 0);
						unk_0x31AC59B7C21A2047(Local_409.f_3, 29, 0);
					}
					Local_409.f_427 = 1;
					func_239(&Local_409, 1, 0);
					func_273(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_211(&Local_409, 0, 1109393408))
				{
					func_273(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_210(&Local_409))
				{
					func_206(&Local_409, 7, 1, 0, 0);
					func_205(&Local_409);
					func_204();
					func_273(&Local_409, 9);
				}
				if (unk_0x7FAC45D56235AB39(Local_409.f_4, 0))
				{
					if (!unk_0x5B9B499C707C2A95(Local_409.f_2, Local_409.f_4, 0))
					{
						func_200(&Local_409);
						func_273(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_1435)
				{
					if (Local_409.f_139)
					{
						func_193();
						func_190(0);
						iLocal_1435 = 1;
					}
				}
				func_168();
				if (func_127(&Local_409, 5f, 1097859072, 1117782016))
				{
					func_125(&uLocal_1515);
					func_124(&Local_1485, 15, 0);
					if (iLocal_840 == iLocal_839)
					{
						unk_0x6B823DB6B46BB1F2(Local_409.f_3, -713.4489f, -153.4094f, 37.1441f, 10000, 2049, 3);
						func_123(&Local_409, 0);
						Local_409.f_56 = 50;
						Local_409.f_108 = 0;
					}
					else if (iLocal_840 == 14)
					{
						unk_0x6B823DB6B46BB1F2(Local_409.f_3, -1196.372f, -772.4608f, 17.30166f, 10000, 2049, 3);
						Local_409.f_56 = 25;
						Local_409.f_108 = 0;
					}
					else
					{
						unk_0x6B823DB6B46BB1F2(Local_409.f_3, 72.87311f, -1392.597f, 29.76223f, 10000, 2049, 3);
						Local_409.f_56 = 0;
						Local_409.f_108 = 1;
					}
					func_121(&Local_409);
					func_117(&Local_409);
					func_116(&Local_409);
					func_273(&Local_409, 27);
				}
				break;
			
			case 27:
				if (func_105(&Local_409, 1))
				{
					unk_0x654FFF4D16298AC5(Local_409.f_3);
					unk_0xEDD36C58DDE03C8F(&uLocal_850);
					unk_0x219EE6A7B599E7DC(&uLocal_850);
					unk_0x8F2751B831A7B303(0, 0, 0);
					unk_0x28FB7E63A217D6DE(0, Local_409.f_29, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x421860E905F0AB0B(0, Local_409.f_29, 15f, 5000);
					unk_0x2C6C5A97B0A59D9D(0, 0);
					unk_0x28FB7E63A217D6DE(0, Local_1425, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x421860E905F0AB0B(0, Local_1425, 15f, 0);
					unk_0xBD718C5BA2122192(uLocal_850);
					unk_0x234E551BB8E8813B(Local_409.f_3, uLocal_850);
					unk_0x015B50BC21C88C8C(Local_409.f_3, 1);
					func_273(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_78(&Local_409, &uLocal_1563))
				{
					func_10(1, &Local_409, 0);
					func_278(&Local_409, 31, 0, 0);
					func_273(&Local_409, 30);
				}
				break;
			
			case 30:
				func_9(&Local_409);
				func_414();
				break;
			}
	}
}

void func_9(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_3))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
		{
			if (!unk_0xC4A39E4229BD3ABE(uParam0->f_3, 0))
			{
				unk_0x961A5568C1B2C2CD(uParam0->f_3);
			}
			unk_0x4C47904AE69D7393(uParam0->f_3, 0);
			unk_0x3A8EFBE4AB457FE2(255, uParam0->f_413, joaat("player"));
			if (unk_0x453DB1DBE5D81637(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x305E05EA04908AD9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x453DB1DBE5D81637(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x305E05EA04908AD9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x453DB1DBE5D81637(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x305E05EA04908AD9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x453DB1DBE5D81637(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x305E05EA04908AD9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x6C559FCFFD2365CB(&(uParam0->f_3));
		}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_52(uParam1);
		if (!unk_0x769F0F6444C1ABE0(uParam1->f_3))
		{
			unk_0x31AC59B7C21A2047(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_50(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_399(uParam0);
	if (func_49())
	{
		func_47();
	}
	func_45();
	unk_0x0508903FC1B0ED24();
	unk_0x7D53B6FFAEDA810A(1);
	func_42(0);
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		unk_0x9897DB908AE3BCFF(uParam0->f_4, 0);
		unk_0x7F1B4DB259365A9C(uParam0->f_4);
		unk_0x7B2B49C597D57523(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 1);
	if (func_33())
	{
		unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
	}
	unk_0xA4E5B77DFF9A1126(1);
	func_23(0, 1, 1, 0);
	unk_0xA6C8C7573424CA93(1);
	unk_0xDA0C5084402DA99C(1);
	if (unk_0x9FA769EB6C3BCCE4(*uParam0))
	{
		unk_0x1E2E6AAAD9AE1286(*uParam0, 0);
		unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
		unk_0x47ABE7550330D9FC(1);
	}
	if (func_22(Global_103236.f_18878, 4))
	{
		func_20(&(Global_103236.f_18878), 4);
		unk_0x02E663D7DDAE8202(func_19(), 0);
	}
	if (bParam1)
	{
		func_9(uParam0);
	}
	func_18(uParam0);
	unk_0x15167ADA0B7D44AE("gestures@m@standing@casual");
	unk_0x15167ADA0B7D44AE("oddjobs@taxi@");
	unk_0x15167ADA0B7D44AE("oddjobs@towingcome_here");
	if (unk_0x822F3797A8B64786())
	{
		func_16(uParam0->f_411);
	}
	if (!unk_0x7B0D0EA42CF4A6CC(unk_0x8A41C463063AFC8E()))
	{
		unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 1, 0);
	}
	unk_0xABB4EA41374CB314(unk_0xF2DB717A73826179((func_12(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		iVar2 = unk_0x11ABC381A58DD5AB();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4()) / 1000f);
}

bool func_14(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!unk_0x47988E04F8E2F0AD(&uVar0))
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
	unk_0xB67E09B9E2ED840A(uParam0->f_51[0]);
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
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_32(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_31())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_32(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_28(unk_0x0FFED3E94261A832())) && !func_25(unk_0x0FFED3E94261A832(), 0)) && !func_24())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_28(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_24()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
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
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1312735;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0xE06B5D3FE21F2F0F(unk_0x8A41C463063AFC8E()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x09952BA662A7629B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0x09952BA662A7629B(joaat("appinternet")) > 0)
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
		unk_0xC6F725F28C08FC0B(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xE5D346CBE75AD979(Var0, Var3, 1);
		unk_0x7B14EF720D742849();
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
		unk_0x20A9229D8F4F054A(Var0, Var3, iParam3, 1);
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
	if (Global_14604)
	{
		func_43(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_31())
	{
		Global_14443.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
		if (Global_88855[iVar0 /*17*/] && !Global_88855[iVar0 /*17*/].f_1)
		{
			if (Global_88855[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88855[iVar0 /*17*/].f_5 != 88 && Global_88855[iVar0 /*17*/].f_5 != 89) && Global_88855[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_88855[iVar0 /*17*/].f_5, 1);
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
			Global_85907[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85907[iParam0 /*2*/] = 0;
	}
}

void func_47()
{
	Global_14611 = 0;
	func_48();
}

void func_48()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

int func_49()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_103236.f_18878.f_22[0]++;
			func_51("Fares Completed ++ = ", Global_103236.f_18878.f_22[0]);
			break;
		
		case 1:
			Global_103236.f_18878.f_22[1]++;
			func_51("Fares Failed ++ = ", Global_103236.f_18878.f_22[1]);
			break;
		
		case 2:
			Global_103236.f_18878.f_22[2]++;
			func_51("Fares Accepted ++ ", Global_103236.f_18878.f_22[2]);
			break;
		
		case 3:
			Global_103236.f_18878.f_22[3]++;
			func_51("Fares Expired ++ ", Global_103236.f_18878.f_22[3]);
			break;
		
		case 13:
			Global_103236.f_18878.f_22[13]++;
			func_51("Passengers run ++ = ", Global_103236.f_18878.f_22[13]);
			break;
		
		case 14:
			Global_103236.f_18878.f_22[14]++;
			func_51("Passenger Forced to Pay ++ = ", Global_103236.f_18878.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_103236.f_18878.f_22[4])
				{
					Global_103236.f_18878.f_22[4] = iParam1;
					func_51("This distance ", iParam1);
					func_51(" is longer than current best", Global_103236.f_18878.f_22[4]);
				}
				else
				{
					func_51("Longest Distance Not Beat ", Global_103236.f_18878.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_103236.f_18878.f_22[5] = (Global_103236.f_18878.f_22[5] + iParam1);
			func_51("Total Distance w/ Passenger = ", Global_103236.f_18878.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_103236.f_18878.f_22[6]++;
			}
			else
			{
				Global_103236.f_18878.f_22[6] = (Global_103236.f_18878.f_22[6] + iParam1);
			}
			func_51("Wanted Levels ++ = ", Global_103236.f_18878.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_103236.f_18878.f_22[7] = (Global_103236.f_18878.f_22[7] + iParam1);
			}
			else
			{
				Global_103236.f_18878.f_22[7]++;
			}
			func_51("Wanted Levels Lost = ", Global_103236.f_18878.f_22[7]);
			break;
		
		case 8:
			Global_103236.f_18878.f_22[8]++;
			func_51("Taxis wrecked ++ = ", Global_103236.f_18878.f_22[8]);
			break;
		
		case 9:
			Global_103236.f_18878.f_22[9]++;
			func_51("Horn Honked ++ = ", Global_103236.f_18878.f_22[9]);
			break;
		
		case 10:
			Global_103236.f_18878.f_22[10] = (Global_103236.f_18878.f_22[10] + iParam1);
			func_51("Total Money Earned = ", Global_103236.f_18878.f_22[10]);
			break;
		
		case 11:
			Global_103236.f_18878.f_22[11] = (Global_103236.f_18878.f_22[11] + iParam1);
			func_51("Total Tips Earned = ", Global_103236.f_18878.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_103236.f_18878.f_22[12])
			{
				Global_103236.f_18878.f_22[12] = iParam1;
				func_51("New Highest Tip = ", Global_103236.f_18878.f_22[12]);
			}
			else
			{
				func_51("Highest Tip Not Reached = ", Global_103236.f_18878.f_22[12]);
			}
			break;
	}
}

void func_51(char* sParam0, int iParam1)
{
}

void func_52(var uParam0)
{
	func_50(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_416(1);
		func_64(15, 1);
	}
	func_62(&(Global_103236.f_18878), 1024);
	if (!func_22(Global_103236.f_18878, 64))
	{
		func_53(func_60(func_61(uParam0)), 0, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2)
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
		func_59((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = iParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_54();
	}
}

void func_54()
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
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_58(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_57() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_55();
				}
			}
		}
	}
}

int func_55()
{
	if (func_56(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_56(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

int func_57()
{
	return Global_25222;
}

int func_58(int iParam0, int iParam1)
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_60(int iParam0)
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

int func_61(var uParam0)
{
	return uParam0->f_411;
}

void func_62(var uParam0, int iParam1)
{
	func_63(uParam0, iParam1);
}

void func_63(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_65(iParam0, iParam1);
}

int func_65(int iParam0, int iParam1)
{
	if (func_77(14) && !func_76(iParam0))
	{
		return 0;
	}
	if (unk_0xB735FB6B965DBBD2(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_69800)
	{
		return 0;
	}
	if (func_75(&Global_2600921))
	{
		if (func_73(&Global_2600921, iParam0))
		{
			return 0;
		}
		if (func_66(&Global_2600921, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xC5AA25967DC5CBF2(iParam0))
		{
			return 0;
		}
		if (unk_0xB735FB6B965DBBD2(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	func_69(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_67(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_68(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_68(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_69(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_71(uParam0, (Global_2600920 - 0.5f));
}

void func_70(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_71(var uParam0, float fParam1)
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

float func_72(var uParam0)
{
	return uParam0->f_72;
}

bool func_73(var uParam0, int iParam1)
{
	return func_74(uParam0, iParam1) != -1;
}

int func_74(var uParam0, int iParam1)
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

bool func_75(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_76(int iParam0)
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

bool func_77(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_78(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_49() && func_395(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
				}
				func_104(uParam0);
				func_20(&(Global_103236.f_18878), 4096);
				func_102(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_103(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x08BE237DBCD9CBD9(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_101(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_95(uParam1, 0))
			{
				func_79(uParam0);
				func_278(uParam0, 0, 0, 0);
				func_101(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_79(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_80(func_93(), 21, iVar0, 0, 0);
		func_50(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_103236.f_27831[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_103236.f_27831[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_81(Global_103236.f_27831[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xC225A90A8DE0D96B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xC94674712BED1A82(iVar1, iVar0, 1);
	}
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_92();
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
					func_91(99, 1);
					func_90(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_89(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_88(5))
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
							func_90(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_90(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x120DBC40E9E3D401())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_91(95, iParam3);
					break;
				
				case 1:
					func_91(97, iParam3);
					break;
				
				case 2:
					func_91(96, iParam3);
					break;
			}
			func_91(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_84(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_84(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_90(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
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
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_103236.f_20345.f_233[iVar2 /*69*/]++;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_1++;
		if (Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_83(iParam0);
	if (Global_35813 == 15)
	{
		func_82(0);
	}
	return 1;
}

void func_82(bool bParam0)
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
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_103236.f_20345[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_103236.f_20345.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_103236.f_20345.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_103236.f_20345.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_103236.f_20345.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_103236.f_20345.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_103236.f_20345.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_103236.f_20345.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_103236.f_20345.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_103236.f_20345[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_103236.f_20345.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_103236.f_20345.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_103236.f_20345.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_103236.f_20345.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_103236.f_20345.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_103236.f_20345.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_103236.f_20345.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_103236.f_20345.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC94674712BED1A82(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC94674712BED1A82(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC94674712BED1A82(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x507FE690B1271947(&(Global_103236.f_20345.f_471), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0) || unk_0xAA4F14DA15DB0B51(Global_2097152[func_86() /*10885*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x507FE690B1271947(&(Global_103236.f_20345.f_471), iParam0);
		unk_0x507FE690B1271947(&(Global_2097152[func_86() /*10885*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD05F099FEF4ED10A("COUP_RED");
		unk_0xD5DA3EC5EEC78358(func_85(iParam0));
		unk_0xF8DCA62B36D8BCE7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_85(int iParam0)
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

int func_86()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_87(int iParam0)
{
	func_91(93, iParam0);
	func_91(29, iParam0);
	func_91(30, iParam0);
}

bool func_88(int iParam0)
{
	if (!unk_0x591AF4C50B46E014())
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0);
	}
	return unk_0xAA4F14DA15DB0B51(Global_2097152[func_86() /*10885*/].f_7546.f_10, iParam0);
}

int func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB735FB6B965DBBD2(27))
	{
		return 0;
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xC225A90A8DE0D96B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC94674712BED1A82(joaat("num_cash_spent"), iVar1, 1);
		func_58(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_64(27, 1);
	return 1;
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xC225A90A8DE0D96B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC94674712BED1A82(iParam0, iVar0, 1);
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x591AF4C50B46E014())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0xC225A90A8DE0D96B(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC94674712BED1A82(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_92()
{
	int iVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		unk_0xC225A90A8DE0D96B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0xC225A90A8DE0D96B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0xC225A90A8DE0D96B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_93()
{
	func_94();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_94()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_4(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_3(unk_0x2A5EB8B0FE590B91());
			if (func_5(iVar0) && (!func_77(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_5(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

int func_95(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_99(&(uParam0->f_2));
	}
	unk_0x47BFFB0507046AE3(14);
	unk_0x792C5262A7BE057A(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x92BC4A8239BDDACC(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_99(&(uParam0->f_5));
				func_98(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
		{
			if (func_97(&(uParam0->f_5)) > 0.33f)
			{
				func_96(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_97(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_15(&(uParam0->f_5)))
		{
			func_99(&(uParam0->f_5));
			func_98(uParam0, 1051260355);
		}
		else if (func_97(&(uParam0->f_5)) > 0.33f)
		{
			func_96(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_96(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_97(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_98(var uParam0, int iParam1)
{
	unk_0xD1FCC52F87A98873(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4CECF13AF144A8F6(uParam0->f_9);
	unk_0xD3A4A11E4FDC9D63(iParam1);
	unk_0x8123397DC676E794();
}

void func_99(var uParam0)
{
	func_100(uParam0, 0f);
}

void func_100(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - fParam1);
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_101(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

void func_102(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xD1FCC52F87A98873(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0x95CE6D748899618C(iParam9);
	unk_0xD5DA3EC5EEC78358(sParam1);
	unk_0xF7D95CCE1364B5CE();
	unk_0xADBDBA2DF8443753(sParam7);
	unk_0xEA97619D8B89D387(uParam2);
	unk_0xEA97619D8B89D387(uParam3);
	unk_0xD5DA3EC5EEC78358(uParam6);
	unk_0xEA97619D8B89D387(uParam5);
	unk_0xEA97619D8B89D387(iParam4);
	unk_0xF7D95CCE1364B5CE();
	unk_0x8123397DC676E794();
	func_99(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
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
	func_50(11, uParam0->f_56);
	func_50(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xAA4F14DA15DB0B51(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_105(var uParam0, bool bParam1)
{
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		if (func_115(uParam0) && func_111(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_110(uParam0, 2097152))
				{
					func_106(uParam0);
				}
			}
			else
			{
				func_106(uParam0);
			}
		}
		else if (!func_115(uParam0))
		{
			if (bParam1)
			{
				if (func_110(uParam0, 2097152))
				{
					if (unk_0xE897E371352225D5(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xE897E371352225D5(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_106(var uParam0)
{
	struct<3> Var0;
	
	if (func_109(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_107(uParam0, Var0);
}

void func_107(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0) && unk_0xF8ED2D0629FE764D(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x82D9CF397BA8C885(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x82D9CF397BA8C885(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_108(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x153CD660E835E570(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x4A2E6F541CD8C36E(Var0, Param1, 0) < unk_0x4A2E6F541CD8C36E(Var3, Param1, 0) && unk_0xD570551619005062(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x153CD660E835E570(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x4A2E6F541CD8C36E(Var0, Param1, 0) >= unk_0x4A2E6F541CD8C36E(Var3, Param1, 0) && unk_0xD570551619005062(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x153CD660E835E570(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x153CD660E835E570(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_108(int iParam0, int iParam1)
{
	if (!unk_0xA9A04898798AE9E6(iParam0, 0) && !unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		if (unk_0xF8ED2D0629FE764D(iParam0, iParam1))
		{
			if (unk_0x8F8E5C33266ED978(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_109(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_110(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_22(uParam0->f_81, iParam1) && !func_49());
	}
	return func_49();
}

int func_111(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0x5B9B499C707C2A95(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_114();
				return 1;
			}
			else if (func_112(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 0, 256);
				}
				else
				{
					unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 0, 0);
				}
			}
			unk_0x2D8815D778A2FE2A(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_112(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 73, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam5)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
	}
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 138, 1);
	unk_0x4E6996123FABDB93(0, 136, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 131, 1);
	unk_0x4E6996123FABDB93(0, 132, 1);
	unk_0x4E6996123FABDB93(0, 123, 1);
	unk_0x4E6996123FABDB93(0, 126, 1);
	unk_0x4E6996123FABDB93(0, 129, 1);
	unk_0x4E6996123FABDB93(0, 130, 1);
	unk_0x4E6996123FABDB93(0, 133, 1);
	unk_0x4E6996123FABDB93(0, 134, 1);
	unk_0xB5924913D8350E63();
	func_113(iParam0);
	if ((unk_0x3732B96D7A1859B4() - Global_29) > 500)
	{
		unk_0x8231579045104F87(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3732B96D7A1859B4();
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x3FEF699D13BCC798(unk_0xD2660BAC03EB7433(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_113(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x317EBF76D4EFACBF(iParam0))
		{
			if (unk_0xBCE28DDC8BEC619D(iParam0))
			{
				unk_0xE3F9604466DA5BF0(iParam0, 0);
			}
		}
	}
}

void func_114()
{
	if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
	{
		unk_0xC72CE1AF85253467(unk_0x0FFED3E94261A832());
	}
}

int func_115(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
		{
			if (unk_0x5B9B499C707C2A95(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116(var uParam0)
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
		func_62(&(uParam0->f_55), 1);
	}
}

void func_117(var uParam0)
{
	func_119();
	unk_0x0508903FC1B0ED24();
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
		func_118(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_206(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_206(uParam0, 102, 1, 0, 0);
	}
	func_278(uParam0, 16, 4f, 0);
}

void func_118(int iParam0)
{
	Global_101948.f_221 = iParam0;
}

void func_119()
{
	Global_14611 = 0;
	func_120();
}

void func_120()
{
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xA37D20A4B77452D4();
		Global_16756 = 0;
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_121(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_122(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_50(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_50(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_122(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_124(var uParam0, int iParam1, bool bParam2)
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

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
		iVar0++;
	}
	unk_0x0508903FC1B0ED24();
	func_47();
}

var func_126()
{
	var uVar0;
	
	return uVar0;
}

int func_127(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x0B21CC5276C2CE1B() && !unk_0x9AF3AC4F52023B45()) && !unk_0xEF08C8E0C4679477()) && !unk_0xF4EE9D6C8E60AE22()) && !uParam0->f_142)
	{
		if (func_150(uParam0))
		{
			func_149(uParam0, &(uParam0->f_43));
			func_144(uParam0);
			func_143(uParam0);
			func_140(uParam0);
			func_134(uParam0, fParam2, fParam3);
			func_131(uParam0);
			return func_128(uParam0, iParam1);
		}
	}
	return 0;
}

int func_128(var uParam0, int iParam1)
{
	if (func_61(uParam0) == 2)
	{
		if (unk_0x7DDA81F38FB30F23(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_130(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) < 1) && func_129(1, 1, 1)) && unk_0xBBC6067B2AA3BE97(uParam0->f_4))
		{
			return func_111(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x7DDA81F38FB30F23(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) < 1) && func_129(1, 1, 1)) && unk_0xBBC6067B2AA3BE97(uParam0->f_4))
	{
		return func_111(uParam0, 1, iParam1);
	}
	return 0;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

float func_130(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

void func_131(var uParam0)
{
	float fVar0;
	
	if ((func_115(uParam0) && func_22(uParam0->f_81, 67108864)) && unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
	{
		if ((unk_0x3732B96D7A1859B4() - iLocal_97) >= 10000)
		{
			fVar0 = func_132(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x3732B96D7A1859B4();
		}
		if (iLocal_96 >= 2 && !func_49())
		{
			func_206(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x3732B96D7A1859B4() % 4000) < 50)
		{
			if (!func_115(uParam0))
			{
			}
			if (!func_22(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_132(struct<3> Param0, int iParam3)
{
	return func_133(unk_0x1E199569E0295838(unk_0x8A41C463063AFC8E()), Param0, iParam3);
}

float func_133(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam0, 1), Param1, iParam4);
}

void func_134(var uParam0, float fParam1, float fParam2)
{
	if (func_115(uParam0) && func_22(uParam0->f_44, 4))
	{
		if ((unk_0x8E5603C4729B40B4(uParam0->f_4) || unk_0xD2660BAC03EB7433(uParam0->f_4) < 3f) && func_139(uParam0))
		{
			if (!func_138(uParam0, 2))
			{
				func_136(uParam0, 2);
			}
			else if (func_115(uParam0))
			{
				if (func_395(uParam0, 2) > fParam1 && !func_138(uParam0, 14))
				{
					if (func_35())
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					func_278(uParam0, 2, 0, 0);
					if (func_138(uParam0, 10))
					{
						func_278(uParam0, 10, 0, 0);
					}
				}
				if (!func_138(uParam0, 3))
				{
					func_278(uParam0, 3, 0, 0);
				}
				else if (func_395(uParam0, 3) >= fParam2)
				{
					func_135(uParam0, 3, 0);
					func_306(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_138(uParam0, 2))
			{
				func_135(uParam0, 2, 0);
			}
			if (func_138(uParam0, 3))
			{
				func_135(uParam0, 3, 0);
			}
		}
	}
}

void func_135(var uParam0, int iParam1, bool bParam2)
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
			func_96(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_96(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_136(var uParam0, int iParam1)
{
	func_137(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_137(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_99(uParam0);
	}
}

bool func_138(var uParam0, int iParam1)
{
	return func_15(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_139(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0x8F8E5C33266ED978(uParam0->f_4, -1, 0) == unk_0x2A5EB8B0FE590B91())
		{
			return 1;
		}
	}
	return 0;
}

void func_140(var uParam0)
{
	if (func_142(uParam0))
	{
		func_141(uParam0);
	}
}

void func_141(var uParam0)
{
	if (unk_0xF250EAC6F54E6FD5() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x511EB800EFE78B52();
			func_135(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_395(uParam0, 20) > 3f)
				{
					func_206(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_22(uParam0->f_81, 262144) || !func_22(uParam0->f_81, 1048576))
				{
					if (func_395(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_206(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (func_395(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_206(uParam0, 85, 1, 0, 0);
						func_135(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_395(uParam0, 20) > 8f)
				{
					func_206(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(uParam0->f_81, 262144) || func_22(uParam0->f_82, 67108864))
			{
				if (!func_138(uParam0, 22))
				{
					func_136(uParam0, 22);
				}
			}
			if (func_138(uParam0, 22) && func_395(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_22(uParam0->f_81, 1048576))
					{
						func_206(uParam0, 84, 1, 0, 0);
						func_135(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_22(uParam0->f_82, 134217728))
					{
						func_206(uParam0, 85, 1, 0, 0);
						func_135(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_142(var uParam0)
{
	return uParam0->f_120;
}

void func_143(var uParam0)
{
	if (unk_0xE3BFC77B2645BF02(unk_0x8A41C463063AFC8E()) && !func_22(uParam0->f_44, 2))
	{
		func_62(&(uParam0->f_44), 2);
	}
	else if (!unk_0xE3BFC77B2645BF02(unk_0x8A41C463063AFC8E()) && func_22(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_50(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_206(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_144(var uParam0)
{
	if (!func_22(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) >= 1)
				{
					if (func_395(uParam0, 9) > 1f)
					{
						func_148(uParam0, unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()));
						if (uParam0->f_410 != 22)
						{
							func_206(uParam0, 50, 1, 1, 0);
						}
						func_278(uParam0, 9, 0, 0);
						if (unk_0xBDD3EABACAB97D09(uParam0->f_9))
						{
							unk_0x7FF3A84437112BB2(uParam0->f_9, 0);
							unk_0xD42DEAFD12809447(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_49() && func_395(uParam0, 9) > 4f)
				{
					func_206(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_147("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x849E054ACB3607BE(unk_0x8A41C463063AFC8E(), func_146(uParam0)))
				{
					func_148(uParam0, unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()));
					func_50(6, 0);
				}
				if (!func_145(uParam0))
				{
					if (!unk_0x4FF1AD2B1A443280())
					{
						if (func_395(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_206(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) < 1)
				{
					if (func_147("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x0508903FC1B0ED24();
					}
					if (unk_0xBDD3EABACAB97D09(uParam0->f_9))
					{
						unk_0x7FF3A84437112BB2(uParam0->f_9, 255);
						unk_0xD42DEAFD12809447(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_49())
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 53, 1, 0, 1);
					}
					func_50(7, func_146(uParam0));
					func_148(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_49())
				{
					func_135(uParam0, 9, 0);
					func_278(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_145(var uParam0)
{
	return uParam0->f_110;
}

int func_146(var uParam0)
{
	return uParam0->f_106;
}

bool func_147(char* sParam0, int iParam1, int iParam2)
{
	unk_0x7474291EEDB9BF12(sParam0);
	if (iParam1 == 1)
	{
		unk_0xD5DA3EC5EEC78358(iParam2);
	}
	return unk_0x0D3452E263E036CA();
}

void func_148(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_149(var uParam0, var uParam1)
{
	unk_0x4382CCF65BCB9EE3(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_150(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
		{
			if (!unk_0x5B9B499C707C2A95(uParam0->f_3, uParam0->f_4, 1) && !unk_0xF5A478192BF88D01(uParam0->f_3))
			{
				func_306(uParam0, "Passenger left car.", 9);
			}
			else if (func_164(uParam0))
			{
				if (func_147("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x465D8BC4210558AF("TAXI_OBJ_PICKUP");
				}
				if (unk_0x0B21CC5276C2CE1B())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
				{
				}
				func_151(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_151(var uParam0, bool bParam1)
{
	func_163(uParam0, uParam0->f_3);
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x5B9B499C707C2A95(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_138(uParam0, 14))
			{
				if (func_49())
				{
					func_162(1);
				}
				func_161(uParam0, 11, 1);
				func_154(uParam0, 1);
				func_278(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_115(uParam0))
				{
					if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
					{
					}
					if (unk_0xC4A39E4229BD3ABE(uParam0->f_2, 0))
					{
						if (func_395(uParam0, 15) > 5f)
						{
							func_278(uParam0, 15, 0f, 1);
						}
					}
					if (func_395(uParam0, 14) > 20f)
					{
						func_306(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_395(uParam0, 14) > 20f)
				{
					if (func_152(uParam0->f_4, 1) > 40f)
					{
						func_306(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_306(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_152(int iParam0, int iParam1)
{
	return func_153(unk_0x1E199569E0295838(unk_0x8A41C463063AFC8E()), iParam0, iParam1);
}

float func_153(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

void func_154(var uParam0, bool bParam1)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
			{
				unk_0x7FF3A84437112BB2(uParam0->f_8, 0);
				unk_0xD42DEAFD12809447(uParam0->f_8, 0);
				func_160(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xBDD3EABACAB97D09(uParam0->f_9))
			{
				unk_0x7FF3A84437112BB2(uParam0->f_9, 0);
				unk_0xD42DEAFD12809447(uParam0->f_9, 0);
				unk_0x0508903FC1B0ED24();
				if (func_115(uParam0))
				{
					func_206(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_160(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_155(uParam0, 0, 0);
		}
		else if (unk_0xBDD3EABACAB97D09(uParam0->f_10))
		{
			unk_0x789C84F1B8496AD0(&(uParam0->f_10));
			if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
			{
				unk_0x7FF3A84437112BB2(uParam0->f_8, 255);
				unk_0xD42DEAFD12809447(uParam0->f_8, 1);
			}
			else if (unk_0xBDD3EABACAB97D09(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7FF3A84437112BB2(uParam0->f_9, 0);
					unk_0xD42DEAFD12809447(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7FF3A84437112BB2(uParam0->f_9, 255);
					unk_0xD42DEAFD12809447(uParam0->f_9, 1);
				}
			}
			unk_0x0508903FC1B0ED24();
		}
	}
}

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_399(uParam0);
	}
	if (!unk_0xBDD3EABACAB97D09(uParam0->f_10))
	{
		uParam0->f_10 = func_158(uParam0->f_4, 1, 0);
		unk_0xA6B842B66643C116(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xD42DEAFD12809447(uParam0->f_10, 1);
		func_156(uParam0);
		if (bParam2)
		{
			unk_0x0508903FC1B0ED24();
			func_206(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_156(var uParam0)
{
	func_278(uParam0, 14, 0, 0);
	func_157();
}

void func_157()
{
	int iVar0;
	
	iVar0 = unk_0x19D9DFABC3C7D219();
	if (unk_0x7FAC45D56235AB39(iVar0, 0))
	{
		unk_0x853D8B40635017CB(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_158(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_159(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_159(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_159(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_159(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x0508903FC1B0ED24();
		func_206(uParam0, iParam3, 1, 0, 0);
		func_62(uParam1, iParam2);
	}
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_162(int iParam0)
{
	Global_16756 = iParam0;
}

void func_163(var uParam0, int iParam1)
{
	if (unk_0x2137828D03306CAF(iParam1))
	{
		if (!unk_0x769F0F6444C1ABE0(iParam1))
		{
			if (unk_0x26A9A3FD5AE8B6AD(unk_0x0FFED3E94261A832()))
			{
				if ((unk_0x80877A927C73E67D(iParam1, joaat("weapon_stungun"), 0) || unk_0x80877A927C73E67D(iParam1, 0, 2)) || unk_0x80877A927C73E67D(iParam1, 0, 1))
				{
					func_306(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x3C36EE04644685CE(unk_0x0FFED3E94261A832());
			}
		}
	}
}

int func_164(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0x8F8E5C33266ED978(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_138(uParam0, 14))
			{
				func_165(uParam0);
			}
			func_154(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_165(var uParam0)
{
	func_135(uParam0, 14, 0);
	func_135(uParam0, 15, 0);
	func_167();
	if (func_166())
	{
		func_162(0);
	}
}

int func_166()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_167()
{
	var uVar0;
	
	uVar0 = unk_0x19D9DFABC3C7D219();
	if (unk_0x7FAC45D56235AB39(uVar0, 0))
	{
		unk_0x853D8B40635017CB(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_168()
{
	int iVar0;
	
	if (!iLocal_1429)
	{
		if (func_138(&Local_409, 14))
		{
			func_189();
			func_206(&Local_409, 2, 1, 0, 0);
			iLocal_1429 = 1;
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!func_138(&Local_409, 14))
		{
			func_156(&Local_409);
			func_188();
			iLocal_1429 = 0;
		}
	}
	if (Local_409.f_140)
	{
		func_189();
		iLocal_1430 = 1;
	}
	else if (iLocal_1430)
	{
		func_188();
		iLocal_1430 = 0;
	}
	iLocal_840 = func_169(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_409.f_427, -1, 0, 1, -1);
	if (iLocal_840 != -1)
	{
		iVar0 = func_169(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_409.f_427, -1, 0, 1, -1);
		if (!func_40(Local_409.f_17, Local_857[iVar0 /*3*/], 0))
		{
			Local_409.f_17 = { Local_857[iVar0 /*3*/] };
			Local_409.f_29 = { Local_999[iVar0 /*3*/] };
			Local_409.f_26 = { Local_1141[iVar0 /*3*/] };
			Local_409.f_34 = fLocal_1436[iVar0];
			Local_1425 = { Local_1283[iVar0 /*3*/] };
		}
	}
}

int func_169(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 46)
	{
		if (iParam3 == 6 || iParam3 == func_187(iVar0))
		{
			if (!bParam5 || func_182(iVar0))
			{
				fVar1 = unk_0x4A2E6F541CD8C36E(Param0, func_170(iVar0, 0), 1);
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

Vector3 func_170(int iParam0, bool bParam1)
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
		
		case 45:
			return func_181(Global_93305);
			break;
		
		case 46:
			if (Global_1592304 != func_180())
			{
				if (func_179(Global_1592304))
				{
					return func_172(2, 2);
				}
				else if (func_171(Global_1592304))
				{
					return func_172(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_171(int iParam0)
{
	if (iParam0 != func_180())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_172(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1592304 != func_180())
	{
		if (iParam1 == 3)
		{
			if (func_173(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[Global_1592304 /*635*/].f_259.f_228, 4))
			{
				if (func_173(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[Global_1592304 /*635*/].f_259.f_228, 5))
			{
				if (func_173(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_173(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_178(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_178(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_176(iParam0) };
	}
	else
	{
		Var12 = { func_175(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_174(Var18, -Var0.f_3.f_2) };
	Var18 = { func_174(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xEBB6A451E594E1A8(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_174(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_175(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_176(int iParam0)
{
	return func_177(iParam0);
}

struct<6> func_177(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_178(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_179(int iParam0)
{
	if (iParam0 != func_180())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	return -1;
}

Vector3 func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_182(int iParam0)
{
	return func_183(iParam0, 0, 0);
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_57() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_184(func_186(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_185(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
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
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

void func_188()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_846[iVar0]))
		{
			unk_0x7FF3A84437112BB2(uLocal_846[iVar0], 255);
		}
		iVar0++;
	}
}

void func_189()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_846[iVar0]))
		{
			unk_0x7FF3A84437112BB2(uLocal_846[iVar0], 0);
		}
		iVar0++;
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		func_191(7, 1);
	}
	else
	{
		func_191(7, 0);
	}
}

void func_191(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_25533[iVar0 /*23*/].f_16 == iParam0)
		{
			func_192(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != unk_0xAA4F14DA15DB0B51(Global_25533[iVar1 /*23*/].f_11, 3))
	{
		unk_0xF6082E2ADA1C795B(&(Global_25533[iVar1 /*23*/].f_11), 18);
		if (Global_25530 == 1)
		{
			Global_25531 = 1;
		}
		Global_25530 = 1;
	}
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_25533[iVar1 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_25533[iVar1 /*23*/].f_11), 3);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_25533[iVar1 /*23*/].f_11, 3))
	{
		if (unk_0xBDD3EABACAB97D09(Global_25533[iVar1 /*23*/].f_19))
		{
			unk_0x7EC387C4793AAAF4(1);
			unk_0x789C84F1B8496AD0(&(Global_25533[iVar1 /*23*/].f_19));
			unk_0x7EC387C4793AAAF4(0);
		}
	}
}

void func_193()
{
	float fVar0;
	
	iLocal_839 = func_199(Local_409.f_427, 0);
	func_194(Local_409.f_427);
	if (iLocal_839 != -1)
	{
		fVar0 = func_133(unk_0x2A5EB8B0FE590B91(), func_170(iLocal_839, 0), 1);
		Local_409.f_35 = (fVar0 * 0.3f);
	}
	else
	{
		Local_409.f_35 = 120f;
	}
	if (unk_0x7FAC45D56235AB39(Local_409.f_4, 0))
	{
		Local_409.f_46 = unk_0xE86A53C202B21FAB(Local_409.f_4);
	}
}

void func_194(int iParam0)
{
	func_198();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_191(7, 0);
			func_197(&uLocal_846);
			func_195(&(uLocal_846[0]), 7, 73, 5);
			func_195(&(uLocal_846[1]), 14, 73, 5);
			func_195(&(uLocal_846[2]), 18, 73, 5);
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
	}
	*uParam0 = unk_0x9EDB165CAADCAB2C(func_170(iParam1, 0));
	unk_0x9FD1808EF916E312(*uParam0, iParam2);
	unk_0xEB5D36079067EBA5(*uParam0, iParam3);
	unk_0xA6B842B66643C116(*uParam0, func_196(iParam1, 0));
	unk_0x0B584E556B01101F(*uParam0, 1f);
	unk_0xE26F13912C5AD877(*uParam0, 1);
}

char* func_196(int iParam0, int iParam1)
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
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_11";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

void func_197(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xBDD3EABACAB97D09((*uParam0)[iVar0]))
		{
			unk_0x789C84F1B8496AD0(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_198()
{
	Local_857[0 /*3*/] = { -829.8521f, -192.3817f, 36.3936f };
	Local_857[1 /*3*/] = { 129.8964f, -1716.632f, 28.0725f };
	Local_857[7 /*3*/] = { 88.1425f, -1391.791f, 28.1999f };
	Local_857[14 /*3*/] = { -1210.999f, -785.9365f, 16.0056f };
	Local_857[18 /*3*/] = { -723.8204f, -160.7985f, 35.92944f };
	Local_857[22 /*3*/] = { 339.2214f, 158.9484f, 102.1509f };
	Local_857[28 /*3*/] = { 15.1447f, -1127.161f, 27.7764f };
	Local_999[0 /*3*/] = { -815.6819f, -183.7194f, 36.5695f };
	Local_999[1 /*3*/] = { 136.1871f, -1712.069f, 28.2916f };
	Local_999[7 /*3*/] = { 84.2585f, -1379.562f, 28.2919f };
	Local_999[14 /*3*/] = { -1206.156f, -777.4578f, 16.3283f };
	Local_999[18 /*3*/] = { -716.0551f, -160.1741f, 35.98816f };
	Local_999[22 /*3*/] = { 342.1741f, 172.9035f, 102.1543f };
	Local_999[28 /*3*/] = { 22.1268f, -1109.868f, 28.797f };
	Local_1283[7 /*3*/] = { 76.3885f, -1397.665f, 28.3719f };
	Local_1283[14 /*3*/] = { -1193.429f, -769.2299f, 16.3289f };
	Local_1283[18 /*3*/] = { -710.8855f, -152.4612f, 36.4106f };
	Local_1141[0 /*3*/] = { -821.3112f, -207.0323f, 36.3333f };
	Local_1141[1 /*3*/] = { 138.4111f, -1726.907f, 28.0569f };
	Local_1141[7 /*3*/] = { 96.1429f, -1407.346f, 28.1563f };
	Local_1141[14 /*3*/] = { -1202.809f, -795.3967f, 15.2069f };
	Local_1141[18 /*3*/] = { -710.7402f, -178.9253f, 35.8931f };
	Local_1141[22 /*3*/] = { 348.4406f, 156.2108f, 101.9483f };
	Local_1141[28 /*3*/] = { 40.1115f, -1113.923f, 28.1427f };
	fLocal_1436[0] = 33.19f;
	fLocal_1436[1] = 50.6f;
	fLocal_1436[7] = 48.99f;
	fLocal_1436[14] = 37.21f;
	fLocal_1436[18] = 28.39f;
	fLocal_1436[22] = 71.56f;
	fLocal_1436[28] = 148.91f;
}

int func_199(int iParam0, bool bParam1)
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
	while (iVar0 < 47)
	{
		if (func_187(iVar0) == iParam0)
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
				iVar4 = (unk_0x895FB9FE885E36ED(0, 65535) % iVar3);
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

void func_200(var uParam0)
{
	func_203(uParam0, 1000);
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x5DE3EC94E90BB96F(uParam0->f_3);
		unk_0x88E3EDF9AF851486(uParam0->f_3, unk_0x2A5EB8B0FE590B91(), 0);
	}
	func_201();
	func_165(uParam0);
}

void func_201()
{
	Global_14611 = 0;
	func_202();
}

void func_202()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_203(var uParam0, int iParam1)
{
	if (unk_0x9FA769EB6C3BCCE4(*uParam0))
	{
		unk_0x1E2E6AAAD9AE1286(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xB9658EBA374EC2AD(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
	}
}

void func_204()
{
	func_62(&(Local_409.f_55), 2);
	func_62(&(Local_409.f_55), 4);
	func_62(&(Local_409.f_55), 16);
	func_62(&(Local_409.f_55), 64);
	func_62(&(Local_409.f_55), 256);
	func_62(&(Local_409.f_55), 512);
	func_62(&(Local_409.f_55), 1024);
	func_62(&(Local_409.f_55), 2048);
	func_62(&(Local_409.f_55), 4096);
	func_62(&(Local_409.f_55), 1073741824);
	func_62(&(Local_409.f_100), 8);
	func_62(&(Local_409.f_100), 256);
	func_62(&(Local_409.f_100), 2048);
	func_62(&uLocal_1556, 2);
	func_136(&Local_409, 7);
}

void func_205(var uParam0)
{
	unk_0x3C36EE04644685CE(unk_0x0FFED3E94261A832());
	unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 1, 0);
	func_203(uParam0, 1000);
}

void func_206(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_278(uParam0, 16, 4f, 0);
		if (func_207(uParam0))
		{
			func_47();
		}
	}
	func_239(uParam0, iParam2, bParam3);
}

int func_207(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_49())
	{
		Var6 = { func_209() };
		if (!unk_0x58478145CAF8429C(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x35302CD5A5D37EED(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_208(&Var0);
			if (unk_0x35302CD5A5D37EED(&Var6, &Var0))
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
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_210(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
		{
			if ((unk_0xF5A478192BF88D01(uParam0->f_3) && (unk_0x3732B96D7A1859B4() - iLocal_89) > 500) || unk_0x5B9B499C707C2A95(uParam0->f_3, uParam0->f_4, 1))
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
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x5B9B499C707C2A95(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
			{
			}
			func_151(uParam0, 1);
			if (func_33())
			{
				unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 1, 0);
			}
			if (unk_0xE897E371352225D5(uParam0->f_3, 2106541073) == 1 || unk_0xE897E371352225D5(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x5DE3EC94E90BB96F(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x88E3EDF9AF851486(uParam0->f_3, unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (unk_0x849E054ACB3607BE(unk_0x8A41C463063AFC8E(), 0))
		{
			func_237(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xEDD36C58DDE03C8F(&uVar3);
				unk_0x219EE6A7B599E7DC(&uVar3);
				unk_0x28FB7E63A217D6DE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x88E3EDF9AF851486(0, uParam0->f_4, 0);
				unk_0xBD718C5BA2122192(uVar3);
				unk_0x234E551BB8E8813B(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_138(uParam0, 14))
			{
				func_165(uParam0);
				func_154(uParam0, 0);
			}
			if (func_138(uParam0, 9))
			{
				func_135(uParam0, 9, 0);
				unk_0x0508903FC1B0ED24();
				if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
				{
					unk_0x7FF3A84437112BB2(uParam0->f_8, 255);
					unk_0xD42DEAFD12809447(uParam0->f_8, 1);
				}
			}
			if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xD2660BAC03EB7433(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_236(uParam0, uParam0->f_3) > 300f)
				{
					func_306(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 1 || ((func_153(unk_0x2A5EB8B0FE590B91(), uParam0->f_3, 1) < 20f && func_130(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_130(uParam0->f_4, uParam0->f_11, 1) <= 28f))
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
							if (bLocal_94)
							{
								uParam0->f_7 = func_231(uParam0->f_4, uParam0->f_3);
								iVar0 = func_230(uParam0, &iVar1);
								if (!unk_0xA9A04898798AE9E6(iVar0, 0))
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
										unk_0x8F2751B831A7B303(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x8F2751B831A7B303(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xD570551619005062(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0xA9A04898798AE9E6(iVar0, 0))
											{
												unk_0x8F2751B831A7B303(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x654FFF4D16298AC5(uParam0->f_3);
							unk_0xA6AC097BEBB7B1F0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xFAB03194FFF49EB5(unk_0xD1EE0E9FCD74A37B(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_139(uParam0))
							{
								unk_0x654FFF4D16298AC5(uParam0->f_3);
							}
							else if (((unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 1 && unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 0) && unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 7) && func_236(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xEDD36C58DDE03C8F(&(uParam0->f_243));
								unk_0x219EE6A7B599E7DC(&(uParam0->f_243));
								unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xF1C3427BFED79E6B(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xF1C3427BFED79E6B(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xBD718C5BA2122192(uParam0->f_243);
								unk_0x234E551BB8E8813B(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x453DB1DBE5D81637(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x5BD7AE8979DAB306(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_153(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_229(uParam0, 1))
								{
									unk_0x5DE3EC94E90BB96F(uParam0->f_3);
									func_306(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_228(uParam0->f_4))
								{
									unk_0x5DE3EC94E90BB96F(uParam0->f_3);
									func_306(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_226(uParam0);
						if (func_236(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0x5B9B499C707C2A95(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_213(uParam0))
								{
									func_212(uParam0);
									iLocal_89 = unk_0x3732B96D7A1859B4();
									unk_0x31AC59B7C21A2047(uParam0->f_3, 26, 1);
									func_135(uParam0, 5, 0);
									unk_0x6D146A6CEAD14391();
									unk_0x4382CCF65BCB9EE3(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x1EA7D129CB42F133(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xFAB03194FFF49EB5(unk_0xD1EE0E9FCD74A37B(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
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
	if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
	{
		unk_0xD42DEAFD12809447(uParam0->f_8, 0);
		unk_0x789C84F1B8496AD0(&(uParam0->f_8));
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
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0) && !unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
	{
		func_224();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_222(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_111(uParam0, 0, 1084227584) && func_129(1, 1, 1))
			{
				if (func_229(uParam0, 1))
				{
					iLocal_88 = unk_0x3732B96D7A1859B4();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_306(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_231(uParam0->f_4, uParam0->f_3);
				iVar9 = func_230(uParam0, &iVar10);
				if (!unk_0xA9A04898798AE9E6(iVar9, 0))
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
						unk_0x8F2751B831A7B303(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x8F2751B831A7B303(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xD570551619005062(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0xA9A04898798AE9E6(iVar9, 0))
						{
							unk_0x8F2751B831A7B303(iVar9, 0, 4096);
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
			iVar12 = func_221(&(uParam0->f_409), unk_0x82D9CF397BA8C885(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x82D9CF397BA8C885(uParam0->f_4, Var0), 1);
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
				unk_0xF128ECFE9D500DA6(unk_0xD1EE0E9FCD74A37B(uParam0->f_4, 1), 3f, 0);
				unk_0x4FF1902E8A10F154(unk_0xD1EE0E9FCD74A37B(uParam0->f_4, 1), 25f, 0);
				unk_0x7D53B6FFAEDA810A(1);
				unk_0x0508903FC1B0ED24();
				func_119();
				func_239(uParam0, 0, 0);
				Var13 = { unk_0x82D9CF397BA8C885(uParam0->f_4, Var6) };
				unk_0x8E979F037EACE55A(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(uParam0->f_3, func_218(uParam0));
				func_217(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xADF936AD56C4C4C0(*uParam0, unk_0x82D9CF397BA8C885(uParam0->f_4, Var0));
				unk_0x5E75FFAC17CA8984(*uParam0, uParam0->f_4, Var3, 1);
				unk_0xD429163073BD3A47(*uParam0, 1);
				unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
				unk_0xB1D181DBFC526F52(uParam0->f_3, 0, 0);
				unk_0xA6AC097BEBB7B1F0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_225("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0) && !unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
			{
				if (!unk_0xC4A39E4229BD3ABE(uParam0->f_3, 0))
				{
					unk_0x01EE2412A2609146(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x63A99CC1C4BD5677(uParam0->f_4, func_216(uParam0->f_7), 1);
				}
				unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
				unk_0x1E2E6AAAD9AE1286(*uParam0, 0);
				unk_0x1E2E6AAAD9AE1286(uParam0->f_1, 0);
				unk_0x164CA344DBD7B6F3(0);
				unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
				unk_0x9B0467159FAB9F56(800);
				unk_0x7D53B6FFAEDA810A(1);
				unk_0x0508903FC1B0ED24();
				func_119();
				func_239(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x0B21CC5276C2CE1B() && !unk_0x9AF3AC4F52023B45())
			{
				func_214(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
			unk_0x1E2E6AAAD9AE1286(*uParam0, 0);
			unk_0x1E2E6AAAD9AE1286(uParam0->f_1, 0);
			unk_0x164CA344DBD7B6F3(0);
			unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
			func_214(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0) && !unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
			{
				if (unk_0xF5A478192BF88D01(uParam0->f_3) || unk_0xC4A39E4229BD3ABE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) != 1 && unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) != 0)
				{
					unk_0xA6AC097BEBB7B1F0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
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
		unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 1, 0);
	}
	unk_0xA4E5B77DFF9A1126(1);
	func_23(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA6C8C7573424CA93(1);
		unk_0xDA0C5084402DA99C(1);
	}
	func_215(23, 0);
}

void func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&Global_25466, iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_25466, iParam0);
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
	if (!unk_0x9FA769EB6C3BCCE4(*uParam0))
	{
		*uParam0 = unk_0xAAB0D8F87DC2361F(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_218(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x82D9CF397BA8C885(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x82D9CF397BA8C885(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_219(unk_0xD1EE0E9FCD74A37B(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_219(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2410C2F4DC01A40D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	unk_0x73EC54DB6766EF37(unk_0x8A41C463063AFC8E(), 0, iParam0);
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x03F063804FDEDF1C(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 15f);
	}
	unk_0xA4E5B77DFF9A1126(iParam1);
	func_42(0);
	func_23(1, 1, iParam2, 0);
	unk_0xA6C8C7573424CA93(0);
	unk_0xDA0C5084402DA99C(0);
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
		*uParam0 = unk_0x6D3ADDC3C99E176A(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x4021570E17CB0020(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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
	if (func_223() && unk_0x3732B96D7A1859B4() >= iParam0 + 1000)
	{
		unk_0x5BFE0E837BA0AF60(500);
		while (!unk_0xF4EE9D6C8E60AE22())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_42(0);
		func_201();
		return 1;
	}
	return 0;
}

int func_223()
{
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (unk_0x92BC4A8239BDDACC(0, 18) || unk_0x92BC4A8239BDDACC(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	if (func_35())
	{
		unk_0x0A55B81F921A97B1("appInternet");
	}
	if (func_34())
	{
		unk_0x0A55B81F921A97B1("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_225(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x3732B96D7A1859B4() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x3732B96D7A1859B4();
}

void func_226(var uParam0)
{
	var uVar0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
		{
			if (func_152(uParam0->f_3, 1) > 30f || func_227(uParam0))
			{
				if (unk_0xE897E371352225D5(uParam0->f_3, -1794415470) == 1 || unk_0xE897E371352225D5(uParam0->f_3, 242628503) == 1)
				{
					unk_0xEDD36C58DDE03C8F(&uVar0);
					unk_0x219EE6A7B599E7DC(&uVar0);
					unk_0x88E3EDF9AF851486(0, uParam0->f_4, 0);
					unk_0xF1C3427BFED79E6B(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28FB7E63A217D6DE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xBD718C5BA2122192(uVar0);
					unk_0x234E551BB8E8813B(uParam0->f_3, uVar0);
					func_306(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_227(var uParam0)
{
	if ((unk_0xD2660BAC03EB7433(uParam0->f_4) > 3f && func_395(uParam0, 5) > 15f) || unk_0x9BAC506645B22467(uParam0->f_4))
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
	if (!unk_0xD8BFF899C7596F35(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8BFF899C7596F35(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8BFF899C7596F35(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xD8BFF899C7596F35(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x6CB676485E7724F8(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x05B8AAC38D122B03(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x05B8AAC38D122B03(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x05B8AAC38D122B03(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x05B8AAC38D122B03(iParam0, 3))
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
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x8F8E5C33266ED978(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x8F8E5C33266ED978(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x8F8E5C33266ED978(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x2137828D03306CAF(iVar0[iVar4]))
			{
				if (unk_0xA9A04898798AE9E6(iVar0[iVar4], 0))
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
		if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_230(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		iVar0 = unk_0x8F8E5C33266ED978(uParam0->f_4, 1, 0);
		if (unk_0x2137828D03306CAF(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x8F8E5C33266ED978(uParam0->f_4, 2, 0);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x8F8E5C33266ED978(uParam0->f_4, 0, 0);
				if (unk_0x2137828D03306CAF(iVar0))
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
	
	iVar4 = unk_0xCBA4F77BB9D2F115(iParam0);
	Var0 = { unk_0xABF3BF12B0129BAF(iParam0, unk_0xD1EE0E9FCD74A37B(iParam1, 1)) };
	if (unk_0xD3B21CE53AA7BE51(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xD570551619005062(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xD570551619005062(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xD570551619005062(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xD570551619005062(iParam1, iParam0, 2, 0, 0))
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
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		if (!unk_0x812A9839F66D4B43(uParam0->f_3) && func_152(uParam0->f_3, 1) < fParam2)
		{
			if (!func_138(uParam0, 5))
			{
				func_278(uParam0, 5, 0, 0);
			}
		}
		else if (func_138(uParam0, 5))
		{
			func_135(uParam0, 5, 0);
		}
		if (((func_395(uParam0, 5) > IntToFloat(iParam1) && unk_0xD2660BAC03EB7433(uParam0->f_4) < fParam4) && !unk_0x812A9839F66D4B43(uParam0->f_3)) || func_152(uParam0->f_3, 1) <= fParam3)
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
	
	iVar18 = unk_0x6EB9FFF630189D64(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x6EB9FFF630189D64(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x398D060E1D834545(uParam0->f_4, iVar18) };
		Var6 = { unk_0xABF3BF12B0129BAF(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x82D9CF397BA8C885(uParam0->f_4, Var6) };
	Var3 = { unk_0x82D9CF397BA8C885(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x1FE2BA7E0D414F2F(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x4C47904AE69D7393(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_153(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x3FEF699D13BCC798((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x6D3ADDC3C99E176A(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x4021570E17CB0020(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 1 && unk_0xE897E371352225D5(uParam0->f_3, 242628503) != 0)
			{
				unk_0xEDD36C58DDE03C8F(&(uParam0->f_243));
				unk_0x219EE6A7B599E7DC(&(uParam0->f_243));
				unk_0xF1C3427BFED79E6B(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x61CCF2A09F373F7B(uParam0->f_243, 1);
				unk_0xBD718C5BA2122192(uParam0->f_243);
				unk_0x234E551BB8E8813B(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x0508903FC1B0ED24();
			if (uParam0->f_411 != 9)
			{
				if (!func_22(uParam0->f_44, 128))
				{
					func_206(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_234(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x654FFF4D16298AC5(uParam0->f_3);
			unk_0xEDF42871EAD55C9B(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xEDD36C58DDE03C8F(&(uParam0->f_243));
			unk_0x219EE6A7B599E7DC(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xF1C3427BFED79E6B(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xF1C3427BFED79E6B(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
			unk_0xBD718C5BA2122192(uParam0->f_243);
			unk_0x234E551BB8E8813B(uParam0->f_3, uParam0->f_243);
			unk_0xEDD36C58DDE03C8F(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x453DB1DBE5D81637(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x5BD7AE8979DAB306(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_234(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xA2782778D22DC0EA(uParam0, sParam1, uParam2, func_235(iParam3), 0);
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
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		if (func_139(uParam0))
		{
			return func_153(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_237(var uParam0)
{
	func_163(uParam0, uParam0->f_3);
	if (func_139(uParam0))
	{
		if (func_138(uParam0, 14))
		{
			func_165(uParam0);
			if (unk_0xBDD3EABACAB97D09(uParam0->f_10))
			{
				unk_0x789C84F1B8496AD0(&(uParam0->f_10));
			}
		}
	}
	if (!func_138(uParam0, 9))
	{
		if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
		{
			unk_0x7FF3A84437112BB2(uParam0->f_8, 0);
			unk_0xD42DEAFD12809447(uParam0->f_8, 0);
		}
		func_278(uParam0, 9, 0, 0);
		func_238("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_238(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(sParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

void func_239(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_47();
		func_278(uParam0, 16, 4f, 0);
		unk_0x0508903FC1B0ED24();
	}
}

int func_240(var uParam0, int iParam1)
{
	if (!unk_0x44FB58EFDA8731B7(2))
	{
		return 0;
	}
	func_246(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()) && !func_22(uParam0->f_44, 256))
			{
				func_62(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				func_206(uParam0, 135, 1, 0, 1);
				func_62(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_244(uParam0, iParam1))
	{
		if (func_152(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0x88E3EDF9AF851486(uParam0->f_3, unk_0x2A5EB8B0FE590B91(), 0);
				func_206(uParam0, 133, 1, 0, 1);
				func_62(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x769F0F6444C1ABE0(uParam0->f_3) || unk_0xE4B596B1029F4F6A(uParam0->f_3)) || func_152(uParam0->f_3, 1) > 400f)
		{
			func_306(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x0C20E539D876C5B3(uParam0->f_2, 0);
		unk_0x9897DB908AE3BCFF(uParam0->f_4, 1);
		if (unk_0x8F8E5C33266ED978(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x170A2AFB4FF42C5A(uParam0->f_4);
			func_242(uParam0);
			func_50(2, 0);
			bLocal_94 = true;
			func_137(&uLocal_90);
			return 1;
		}
		else
		{
			func_306(uParam0, "No Taxi", 21);
			func_241("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_241(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_242(var uParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
	{
		if (func_243())
		{
		}
	}
}

int func_243()
{
	if (unk_0xAA4F14DA15DB0B51(unk_0x895FB9FE885E36ED(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
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
				if (unk_0x6CB676485E7724F8(iVar1))
				{
					if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xCBA4F77BB9D2F115(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(uParam0->f_44, 64))
					{
						if (unk_0x44FB58EFDA8731B7(2))
						{
							func_241("TX_VIP_DMGD", -1);
							if (func_245("TX_VIP_DMGD"))
							{
								func_62(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_44, 32))
					{
						if (unk_0x44FB58EFDA8731B7(2))
						{
							func_241("TX_VIP_CAR", -1);
							if (func_245("TX_VIP_CAR"))
							{
								func_62(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_44, 16))
					{
						if (unk_0x44FB58EFDA8731B7(2))
						{
							func_241("TX_VIP_SMALL", -1);
							if (func_245("TX_VIP_SMALL"))
							{
								func_62(&(uParam0->f_44), 16);
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

bool func_245(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_246(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
	{
		uVar0 = iParam0;
		unk_0xD398A674F38323D5(8, &uVar0, 1, 1);
	}
	else if (unk_0xCF690C88B391CFA3() || unk_0x429A1F8C699BEE23())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3487B8E0E5E89BDB(8, &cVar1);
	}
}

void func_247(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_248(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x507FE690B1271947(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF6082E2ADA1C795B(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x507FE690B1271947(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_249(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_250()
{
	Local_343.f_0 = 0;
	func_267(40527, 40502, 1);
	func_267(40263, 40240, 1);
	func_267(40178, 40153, 1);
	func_267(40081, 40057, 1);
	func_267(39947, 39926, 1);
	func_267(39873, 39848, 1);
	func_267(39706, 39683, 1);
}

int func_251(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_252(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_4))
	{
		if (func_254(uParam0->f_4))
		{
			func_253(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_254(int iParam0)
{
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB01B1648698791BB(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x12CF5C6534A94BEE(iParam0, 0, 40000) || unk_0x12CF5C6534A94BEE(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_256(var uParam0)
{
	if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
	{
		if (func_257(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_258(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_253(uParam0, 11);
	return 1;
}

int func_259(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_4))
	{
		if (unk_0xABCF7EB00A727656(uParam0->f_4) && !unk_0xBBC6067B2AA3BE97(uParam0->f_4))
		{
			if (!func_138(uParam0, 25))
			{
				func_278(uParam0, 25, 0, 0);
			}
			else if (func_395(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_138(uParam0, 25))
		{
			func_135(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_260(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_261(var uParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
	{
		if (unk_0xCFD97CB1065AB59D(uParam0->f_4))
		{
			if (unk_0x12CF5C6534A94BEE(uParam0->f_4, 0, 40000) || unk_0x12CF5C6534A94BEE(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_263(var uParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0->f_4, 0))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
		{
			if (unk_0x8E5603C4729B40B4(uParam0->f_4))
			{
				if (func_257(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_265(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_4))
	{
		if (func_266(uParam0->f_4))
		{
			func_253(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB01B1648698791BB(iParam0) == 0f)
	{
		if (!unk_0x7FAC45D56235AB39(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x12CF5C6534A94BEE(iParam0, 0, 40000) || unk_0x12CF5C6534A94BEE(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_267(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_63(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_63(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_306(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_269(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_3))
	{
		if ((unk_0x769F0F6444C1ABE0(uParam0->f_3) || unk_0xA9A04898798AE9E6(uParam0->f_3, 0)) || unk_0xFB4BF464D20ED824(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_270()
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

int func_271()
{
	if (!unk_0xA1FC9D7AEA164881(iLocal_841))
	{
		func_225("TAXI_ASSETS_STREAMED - Loading A_F_Y_BevHills_03", &iLocal_1431, 1000);
		return 0;
	}
	if (!unk_0xA8AF99BD8D81CFB7(uLocal_1563))
	{
		return 0;
	}
	if (!func_272(&iLocal_1431, 0))
	{
		func_225("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_1431, 1000);
		return 0;
	}
	return 1;
}

int func_272(int iParam0, bool bParam1)
{
	if (!unk_0xA1FC9D7AEA164881(func_19()))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x45834D6C20FFF689("gestures@m@standing@casual"))
		{
			func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x45834D6C20FFF689("oddjobs@taxi@"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x45834D6C20FFF689("oddjobs@towingcome_here"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x45834D6C20FFF689("misscommon@response"))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x44FB58EFDA8731B7(2))
	{
		func_225("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_273(var uParam0, int iParam1)
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

int func_274(var uParam0)
{
	if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
	{
		uParam0->f_8 = func_275(uParam0->f_3, 0, 0);
		unk_0x1D2D9C8C9C4CBD0F(1, 0);
		unk_0xD42DEAFD12809447(uParam0->f_8, 1);
		unk_0xA6B842B66643C116(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xEDF42871EAD55C9B(uParam0->f_3, unk_0x2A5EB8B0FE590B91(), -1, 2048, 4);
	}
	return 1;
}

int func_275(int iParam0, bool bParam1, bool bParam2)
{
	return func_158(iParam0, !bParam1, bParam2);
}

int func_276(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x2137828D03306CAF(uParam0->f_3))
	{
		func_277(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_39(uParam0->f_14, 0);
		unk_0xF128ECFE9D500DA6(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0xBAE64374C9180F18(uParam0->f_11);
		}
		else if (unk_0x2137828D03306CAF(Global_101948.f_225[0]))
		{
			uParam0->f_3 = Global_101948.f_225[0];
			unk_0x216B434C1A609F5B(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xD00B79C0E206E082(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x28AB07F44A348EFC(uParam0->f_3, sParam7);
		unk_0x3EFE40733EFB6649(uParam0->f_3, 112, 1);
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
		{
			unk_0xCEF34666451D1CD0(uParam0->f_3, 250);
			unk_0x31AC59B7C21A2047(uParam0->f_3, 32, 0);
			unk_0x31AC59B7C21A2047(uParam0->f_3, 104, 1);
			unk_0x31AC59B7C21A2047(uParam0->f_3, 177, 1);
			unk_0x31AC59B7C21A2047(uParam0->f_3, 116, 0);
			unk_0xEE8231F61ED038B0("TAXI_Passenger", &(uParam0->f_413));
			unk_0x3A8EFBE4AB457FE2(1, uParam0->f_413, joaat("player"));
			unk_0x3A8EFBE4AB457FE2(2, uParam0->f_413, joaat("COP"));
			unk_0x3C030E241A3543D2(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x2168FF380305EF96(Param1, 20f, 5f, 0);
}

void func_278(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_100(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_99(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_100(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_279()
{
	unk_0x0F39DF6675B2333E(iLocal_841);
	uLocal_1563 = func_281();
	func_280(0);
}

void func_280(bool bParam0)
{
	unk_0x0F39DF6675B2333E(func_19());
	if (bParam0)
	{
		unk_0xA7C81DED990D3418("gestures@m@standing@casual");
	}
	unk_0xA7C81DED990D3418("oddjobs@taxi@");
	unk_0xA7C81DED990D3418("oddjobs@towingcome_here");
	unk_0xA7C81DED990D3418("misscommon@response");
	unk_0xC9173FA08E7D8227("TAXI", 2);
	if (!func_22(Global_103236.f_18878, 128))
	{
		func_62(&(Global_103236.f_18878), 128);
	}
}

var func_281()
{
	return unk_0x4D6D22510A2467D9("MIDSIZED_MESSAGE");
}

void func_282(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
		{
			if (bParam2)
			{
				if (func_395(uParam0, 10) > (20f + 10f))
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
					func_278(uParam0, 10, 0f, 1);
				}
			}
			else if (func_395(uParam0, 10) > 20f)
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
				func_278(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_395(uParam0, 10) > 30f)
		{
			if (!func_49())
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
				func_278(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_15(&(Local_190[5 /*10*/].f_6)))
		{
			func_137(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_305(uParam0))
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
				func_304(uParam0, 1);
				func_302(5, uParam0);
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_15(&(Local_190[0 /*10*/].f_6)))
		{
			func_137(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_300(uParam0))
			{
				func_304(uParam0, 1);
				func_302(0, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_15(&(Local_190[1 /*10*/].f_6)))
		{
			func_137(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_299(uParam0))
			{
				func_304(uParam0, 1);
				func_302(1, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_15(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x2137828D03306CAF(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xE86A53C202B21FAB(uParam0->f_4);
				func_137(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_97(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_298(uParam0))
			{
				func_304(uParam0, 1);
				func_302(8, uParam0);
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_15(&(Local_190[6 /*10*/].f_6)))
		{
			func_137(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_297(uParam0))
			{
				func_304(uParam0, 1);
				func_302(6, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_15(&(Local_190[4 /*10*/].f_6)))
		{
			func_137(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_296(uParam0))
			{
				func_304(uParam0, 1);
				func_302(4, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_15(&(Local_190[7 /*10*/].f_6)))
		{
			func_137(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_295(uParam0))
			{
				func_302(7, uParam0);
				func_304(uParam0, 1);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_15(&(Local_190[9 /*10*/].f_6)))
		{
			func_137(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x3C36EE04644685CE(unk_0x0FFED3E94261A832());
		}
		else if (func_97(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_294(uParam0))
			{
				func_304(uParam0, 1);
				func_302(9, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_15(&(Local_190[13 /*10*/].f_6)))
		{
			func_137(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_288(uParam0))
			{
				func_304(uParam0, 1);
				func_302(13, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_6)))
		{
			func_137(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_287(uParam0))
			{
				func_304(uParam0, 1);
				func_302(14, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_15(&(Local_190[11 /*10*/].f_6)))
		{
			func_137(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_286(uParam0))
			{
				func_304(uParam0, 1);
				func_302(11, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_15(&(Local_190[12 /*10*/].f_6)))
		{
			func_137(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_97(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_285(uParam0))
			{
				func_304(uParam0, 1);
				func_302(12, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_301(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_15(&(Local_190[2 /*10*/].f_6)))
		{
			func_284(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_97(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_283(uParam0))
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
				func_304(uParam0, 1);
				func_302(2, uParam0);
				func_301(uParam0);
			}
		}
	}
}

int func_283(var uParam0)
{
	float fVar0;
	
	if (!unk_0x769F0F6444C1ABE0(uParam0->f_2))
	{
		if ((!unk_0xBBEAEDA40178A7D0(uParam0->f_2) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xD2660BAC03EB7433(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_137(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_97(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xD2660BAC03EB7433(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_96(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_96(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_284(var uParam0, float fParam1)
{
	if (!func_15(uParam0))
	{
		func_100(uParam0, fParam1);
	}
}

int func_285(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		Var0 = { unk_0x2489FB01746DFD33(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[12 /*10*/].f_3)))
			{
				func_137(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_96(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x7FAC45D56235AB39(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x2489FB01746DFD33(uParam0->f_4, 1) };
		if (unk_0x3FEF699D13BCC798(Var0.f_0) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_137(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_97(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x3FEF699D13BCC798(uLocal_342) - unk_0x3FEF699D13BCC798(Var0.f_0)) < 0f)
			{
				func_96(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_97(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_96(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_287(var uParam0)
{
	if (((((unk_0x7FAC45D56235AB39(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x8B62441BF8D73898(unk_0xD1EE0E9FCD74A37B(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x2137828D03306CAF(uParam0->f_5))
			{
				if ((unk_0xD2660BAC03EB7433(uParam0->f_4) > 15f && func_153(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xA9A04898798AE9E6(uParam0->f_5, 0) && !unk_0x457D9E478E06E354(uParam0->f_5, -1, 0)))
				{
					func_137(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_97(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_153(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xD6E644EE39BA8797(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_97(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xD6E644EE39BA8797(uParam0->f_5))
		{
			func_96(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_288(var uParam0)
{
	if (((unk_0x7FAC45D56235AB39(uParam0->f_4, 0) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_289(uParam0->f_4) && unk_0xD2660BAC03EB7433(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_190[13 /*10*/].f_3)))
			{
				func_137(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_96(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_289(int iParam0)
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
	
	unk_0x6B839244A185DBDF(unk_0xD1EE0E9FCD74A37B(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x6B839244A185DBDF(unk_0xD1EE0E9FCD74A37B(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x1B1612982B7D5B24(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_293((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_292(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_290(unk_0xD1EE0E9FCD74A37B(iParam0, 1), Var15, Var18, Var21);
}

int func_290(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_293(Param6 - Param3) };
	Var3 = { func_293(Param9 - Param3) };
	fVar6 = func_291(Param0, Var0);
	fVar7 = func_291(Param3, Var0);
	fVar8 = func_291(Param6, Var0);
	fVar9 = func_291(Param0, Var3);
	fVar10 = func_291(Param3, Var3);
	fVar11 = func_291(Param9, Var3);
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

float func_291(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_292(struct<3> Param0, int iParam3)
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

Vector3 func_293(struct<3> Param0)
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

int func_294(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0x8F8E5C33266ED978(uParam0->f_4, -1, 0) == unk_0x2A5EB8B0FE590B91())
		{
			if (unk_0x26A9A3FD5AE8B6AD(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0x8F8E5C33266ED978(uParam0->f_4, -1, 0) == unk_0x2A5EB8B0FE590B91())
		{
			if (unk_0x9BAC506645B22467(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x833583C021354CEF(uParam0->f_4) <= -145f || unk_0x833583C021354CEF(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x833583C021354CEF(uParam0->f_4) <= 35f && unk_0x833583C021354CEF(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_296(var uParam0)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC3D8DFBABEBD8119(unk_0x0FFED3E94261A832());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[4 /*10*/].f_3)))
			{
				func_137(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_96(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_297(var uParam0)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		iVar0 = unk_0x8E45EB033C6C83A6(unk_0x0FFED3E94261A832());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[6 /*10*/].f_3)))
			{
				func_137(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_96(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0xBB164D22A8F5D5D1(uParam0->f_4))
		{
			iVar0 = unk_0xE86A53C202B21FAB(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x869E3FDF7FDABA6A(uParam0->f_4);
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
				func_96(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		Var0 = { unk_0x2489FB01746DFD33(uParam0->f_4, 1) };
		if (unk_0x3FEF699D13BCC798(Var0.f_0) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[1 /*10*/].f_3)))
			{
				func_137(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_96(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_300(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (!unk_0xBBC6067B2AA3BE97(uParam0->f_4) && unk_0xB54451B05F280358(uParam0->f_4))
		{
			if (!func_15(&(Local_190[0 /*10*/].f_3)))
			{
				func_137(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_96(&(Local_190[0 /*10*/].f_3));
				func_99(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_301(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_99(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_278(uParam0, 10, 0f, 1);
	unk_0x3C36EE04644685CE(unk_0x0FFED3E94261A832());
}

void func_302(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_303(uParam1, iParam0);
	func_96(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_303(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_304(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_305(var uParam0)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
	{
		if (unk_0xD2660BAC03EB7433(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_190[5 /*10*/].f_3)))
			{
				func_137(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_97(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_96(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_96(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_306(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_201();
	func_416(2);
	Var0 = { func_321() };
	if ((!unk_0x58478145CAF8429C(&Var0) && func_49()) && !unk_0x35302CD5A5D37EED(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x0508903FC1B0ED24();
		unk_0x7D53B6FFAEDA810A(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
		{
			if (!func_115(uParam0))
			{
				if (unk_0x453DB1DBE5D81637(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x305E05EA04908AD9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x453DB1DBE5D81637(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x305E05EA04908AD9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x453DB1DBE5D81637(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x305E05EA04908AD9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_278(uParam0, 3, 0, 0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
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
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_115(uParam0))
			{
				if (unk_0x8E5603C4729B40B4(uParam0->f_4))
				{
					func_317(uParam0, 4096, 0);
				}
				else
				{
					func_317(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_319(uParam0, &Var0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
			{
				func_234(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_319(uParam0, &Var0);
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_319(uParam0, &Var0);
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_50(8, 0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
			{
				func_234(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_317(uParam0, 0, 0);
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_50(8, 0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_319(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_50(8, 0);
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
				func_319(uParam0, &Var0);
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_316(&Var0);
			func_307(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_319(uParam0, &Var0);
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
					func_319(uParam0, &Var0);
				}
			}
			else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
			{
				func_234(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_50(3, 0);
		}
		func_278(uParam0, 3, 0f, 1);
	}
}

int func_307(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_315(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_308(sParam2, iParam3, 0);
}

int func_308(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_202();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_314(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_313();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_312();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_311())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_310();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_309();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_202();
	}
	return 0;
}

void func_309()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_310()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_311()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_312()
{
	if (func_77(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_93();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_313()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_316(char* sParam0)
{
	switch (func_3(unk_0x2A5EB8B0FE590B91()))
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

void func_317(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		unk_0x4C47904AE69D7393(uParam0->f_3, 0);
		unk_0x869E3FDF7FDABA6A(uParam0->f_3);
		unk_0xAE833788DEAB23CA(uParam0->f_3, 3, 0);
		unk_0x89AEA58335779997(uParam0->f_3, 17, 1);
		unk_0x654FFF4D16298AC5(uParam0->f_3);
		if ((func_133(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_109(uParam0->f_29)) && !bParam2)
		{
			func_318(uParam0);
		}
		else
		{
			unk_0xAE833788DEAB23CA(uParam0->f_3, 1024, 1);
			unk_0xAE833788DEAB23CA(uParam0->f_3, 131072, 1);
			unk_0x219EE6A7B599E7DC(&uVar0);
			unk_0x8F2751B831A7B303(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x57747A7618E67953(0, 1193033728, 0);
			}
			else
			{
				unk_0xCD6FB688ED8B6284(0, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
			}
			unk_0x2C6C5A97B0A59D9D(0, 0);
			unk_0xBD718C5BA2122192(uVar0);
			unk_0x234E551BB8E8813B(uParam0->f_3, uVar0);
			unk_0xEDD36C58DDE03C8F(&uVar0);
		}
		unk_0x015B50BC21C88C8C(uParam0->f_3, 1);
	}
}

void func_318(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x2681BA3707AF6DA7(uParam0->f_3, 84.9058f);
				unk_0x015B50BC21C88C8C(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x2681BA3707AF6DA7(uParam0->f_3, 68.3138f);
				unk_0x015B50BC21C88C8C(uParam0->f_3, 1);
			}
			else
			{
				unk_0x57747A7618E67953(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x654FFF4D16298AC5(uParam0->f_3);
			unk_0xEDD36C58DDE03C8F(&uVar0);
			unk_0x219EE6A7B599E7DC(&uVar0);
			unk_0x8F2751B831A7B303(0, 0, 0);
			unk_0x2C6C5A97B0A59D9D(0, 0);
			unk_0x28FB7E63A217D6DE(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xC183FB2DC7959B4A(0, 1);
				unk_0x28FB7E63A217D6DE(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x274810FAE1CBA3EA(0, 151.7794f, 0);
				unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x421860E905F0AB0B(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x421860E905F0AB0B(0, uParam0->f_29, 15f, 20000);
				unk_0x57747A7618E67953(0, 1193033728, 0);
			}
			else
			{
				unk_0xF1C3427BFED79E6B(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xF1C3427BFED79E6B(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xC17A6E0BB4D62D71(uParam0->f_29, 15f, 1))
			{
				unk_0x421860E905F0AB0B(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x57747A7618E67953(0, 1193033728, 0);
			}
			unk_0xBD718C5BA2122192(uVar0);
			unk_0x234E551BB8E8813B(uParam0->f_3, uVar0);
			unk_0xEDD36C58DDE03C8F(&uVar0);
		}
		unk_0x015B50BC21C88C8C(uParam0->f_3, 1);
	}
}

void func_319(var uParam0, char* sParam1)
{
	if (func_320(uParam0))
	{
		func_307(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_320(var uParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		if (func_153(unk_0x2A5EB8B0FE590B91(), uParam0->f_3, 1) < 40f && !unk_0x812A9839F66D4B43(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_321()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xFCB6B117B84DEF57();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_322(var uParam0)
{
	return uParam0->f_118;
}

void func_323()
{
	func_355(&Local_409);
	if (func_354(&Local_409, &Local_1485))
	{
		switch (Local_1485.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_353(&Local_409))
					{
						if (func_352("TX_OBJ_TTB_DO") || unk_0xBDD3EABACAB97D09(Local_409.f_9))
						{
							Local_1485.f_27++;
						}
						else if (func_351(&Local_409) != 10)
						{
							func_206(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_351(&Local_409) > 10 && func_351(&Local_409) != 20) && !func_353(&Local_409))
				{
					func_206(&Local_409, 20, 1, 0, 0);
					if (bLocal_1484)
					{
					}
				}
				break;
			
			case 2:
				if (func_395(&Local_409, 18) > unk_0x399F81B56505EE6F(2f, 10f))
				{
					if (func_351(&Local_409) != 17)
					{
						func_206(&Local_409, 17, 1, 0, 0);
						if (bLocal_1484)
						{
						}
					}
				}
				break;
			
			case 3:
				if (func_395(&Local_409, 18) > unk_0x399F81B56505EE6F(2f, 10f))
				{
					if (func_351(&Local_409) != 18)
					{
						func_206(&Local_409, 18, 1, 0, 0);
						if (bLocal_1484)
						{
						}
					}
				}
				break;
			
			case 4:
				if (func_395(&Local_409, 18) > 30f)
				{
					if (func_351(&Local_409) != 16)
					{
						func_206(&Local_409, 16, 1, 0, 0);
						if (bLocal_1484)
						{
						}
					}
				}
				break;
			
			case 5:
				if (func_395(&Local_409, 18) > unk_0x399F81B56505EE6F(8f, 16f))
				{
				}
				break;
			}
	}
	func_324(&Local_409, &uLocal_1515, &Local_1485, bLocal_1484);
}

int func_324(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_332(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_138(uParam0, 2))
	{
		if (func_331(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x3732B96D7A1859B4() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_330(uParam0))
				{
					uParam2->f_7 = { func_329(uParam1) };
					func_307(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_49())
				{
					uParam2->f_13 = { func_209() };
					if (unk_0x35302CD5A5D37EED(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_63(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_327(uParam1);
					func_278(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_145(uParam0))
				{
					if (func_49())
					{
						func_278(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_326() };
						if (unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_49())
				{
					uParam2->f_19 = { func_321() };
				}
				else
				{
					func_63(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_327(uParam1);
					func_278(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_138(uParam0, 14) && !func_49()) && !func_145(uParam0)) && func_395(uParam0, 18) > 1f)
				{
					func_278(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_49())
				{
					if (func_395(uParam0, 18) > 1f)
					{
						if (!unk_0x58478145CAF8429C(&(uParam2->f_1)))
						{
							func_325(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_49())
				{
					func_63(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_327(uParam1);
					func_278(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_325(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_315(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_308(sParam2, iParam4, 0);
}

struct<6> func_326()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xFCB6B117B84DEF57();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x9418F0AE636D9770(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x9418F0AE636D9770(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = func_328(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_62(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_126(), 24);
	}
}

int func_328(var uParam0)
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

struct<6> func_329(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_62(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_330(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_147("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_147("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_147("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_147("TX_OBJ_GYB_DO", 0, 0) || func_147("TAXI_OBJ_GYB", 0, 0)) || func_147("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_147("TX_OBJ_CYI_DO", 0, 0) || func_147("TAXI_OBJ_CYI_01", 0, 0)) || func_147("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_147("TX_OBJ_GYN_DO", 0, 0) || func_147("TAXI_OBJ_GYN", 0, 0)) || func_147("TAXI_OBJ_GYN_TG", 0, 0)) || func_147("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_147("TAXI_OBJ_CC1", 0, 0) || func_147("TAXI_OBJ_CC2", 0, 0)) || func_147("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_147("TAXI_OBJ_FTC1", 0, 0) || func_147("TAXI_OBJ_FTC2", 0, 0)) || func_147("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_147("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_147("TAXI_OBJ_GETRUN", 0, 0) || func_147("TAXI_OBJ_DRIVE", 0, 0)) || func_147("TAXI_OBJ_RETURN", 0, 0)) || func_147("TAXI_OBJ_POL", 0, 0)) || func_147("TAXI_OBJ_RUNOUT", 0, 0)) || func_147("TAXI_OBJ_POL", 0, 0));
}

int func_331(var uParam0)
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

void func_332(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_330(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_138(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_351(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_348(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_49())
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
						func_347(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_278(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				func_160(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_395(uParam0, 16) > 1f)
				{
					func_162(1);
					if (uParam0->f_411 == 9)
					{
						func_238("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_238("TAXI_VIP_RETURN", 7500, 1);
					}
					func_278(uParam0, 16, 0, 0);
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
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
				{
					func_234(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_395(uParam0, 16) > func_159(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_49()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_351(uParam0))
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
				func_347(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_348(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_307(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_206(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_278(uParam0, 16, 0, 0);
				func_206(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_350(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_347(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_278(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_278(uParam0, 16, 0, 0);
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
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xBDD3EABACAB97D09(uParam0->f_9))
					{
						uParam0->f_9 = func_343(uParam0->f_17, 1);
					}
					else if (unk_0x180D385E81136C7B(uParam0->f_9) == 0)
					{
						unk_0x7FF3A84437112BB2(uParam0->f_9, 255);
						unk_0xF1194645A0CA23EC(uParam0->f_9, uParam0->f_17);
						unk_0xD42DEAFD12809447(uParam0->f_9, 1);
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
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_234(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xBDD3EABACAB97D09(uParam0->f_9))
					{
						uParam0->f_9 = func_343(uParam0->f_17, 1);
					}
					else if (unk_0x180D385E81136C7B(uParam0->f_9) == 0)
					{
						unk_0x7FF3A84437112BB2(uParam0->f_9, 255);
						unk_0xF1194645A0CA23EC(uParam0->f_9, uParam0->f_17);
						unk_0xD42DEAFD12809447(uParam0->f_9, 1);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_342(uParam0, 33554432, Var0, "", 1, 8);
				func_278(uParam0, 16, 0, 0);
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_49())
				{
					func_341(uParam0, 0);
					func_62(&(uParam0->f_44), 4);
					func_278(uParam0, 16, 0, 0);
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
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_395(uParam0, 11) > uParam0->f_36)
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
					func_339(Var0, uParam1);
					func_62(&(uParam0->f_81), 67108864);
					func_278(uParam0, 16, 0, 0);
					func_278(uParam0, 11, 0, 0);
					func_239(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_395(uParam0, 11) > uParam0->f_36)
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
					func_339(Var0, uParam1);
					func_278(uParam0, 11, 0, 0);
					func_278(uParam0, 16, 0, 0);
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
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
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
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
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
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_208(&Var0);
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				func_62(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 1, 0, 8);
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
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
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
					func_338(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_338(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_339(Var0, uParam1);
				func_348(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 6, 0f, 1);
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
					func_338(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_338(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_339(Var0, uParam1);
				func_348(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 6, 0f, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 12:
				func_238("TAXI_OBJ_GYB", 3500, 1);
				func_278(uParam0, 16, 0, 0);
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
				func_278(uParam0, 16, 0, 0);
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
				func_347(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_238("TAXI_OBJ_CYI_01", 7500, 1);
					func_62(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_208(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_208(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_208(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 33:
				func_238("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_208(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_339(Var0, uParam1);
						}
						else
						{
							func_347(uParam0, &Var0, 0, 0, 8);
						}
						func_62(&(uParam0->f_82), 8192);
						func_278(uParam0, 16, 0, 0);
						func_278(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_208(&Var0);
					func_347(uParam0, &Var0, 0, 0, 8);
					func_62(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_208(&Var0);
					func_347(uParam0, &Var0, 0, 0, 8);
					func_62(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
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
				func_347(uParam0, &Var0, 0, 0, 8);
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
				iVar14 = unk_0x895FB9FE885E36ED(0, 120);
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
					func_62(&(uParam0->f_82), 268435456);
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
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x895FB9FE885E36ED(0, 100);
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
					func_62(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
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
				func_347(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_49())
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
				if (!func_22(uParam0->f_81, 1))
				{
					func_337(uParam0, 1, Var0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_337(uParam0, 2, Var0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_348(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
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
				func_62(&(uParam0->f_81), 2097152);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_278(uParam0, 16, 0, 0);
				func_348(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_337(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_337(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_337(uParam0, 8, Var0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_348(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_336(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
					{
						func_234(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_350(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_307(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_350(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_350(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_348(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_278(uParam0, 16, 0, 0);
				}
				func_239(uParam0, 0, 0);
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
						func_208(&Var0);
					}
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_208(&Var0);
					}
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_278(uParam0, 16, 0, 0);
				}
				func_348(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_342(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_342(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_348(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_342(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_342(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_348(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_335(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_335(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_335(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_239(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_350(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_278(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_348(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_342(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_342(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_336(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
					{
						func_234(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_278(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_62(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_278(uParam0, 16, 0, 0);
				}
				func_348(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_49())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 65));
					func_239(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_49())
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
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 66));
					func_239(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_49())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								func_348(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								func_348(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_350(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_348(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_278(uParam0, 16, 0, 0);
								func_239(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_347(uParam0, &Var0, 0, 0, 8);
									func_278(uParam0, 16, 0, 0);
									func_278(uParam0, 11, 0, 0);
									func_239(uParam0, 0, 0);
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
									func_347(uParam0, &Var0, 0, 0, 8);
									func_278(uParam0, 16, 0, 0);
									func_278(uParam0, 11, 0, 0);
									func_239(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_206(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_348(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_335(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_335(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_335(uParam0, 4, Var0, "_close3", 8, 0);
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
				func_350(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
				{
					func_234(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_278(uParam0, 16, 0, 0);
				func_348(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_336(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
					{
						func_234(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_334(uParam0, Var0, 8);
				}
				func_348(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_62(&(uParam0->f_83), 1024);
					func_278(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_62(&(uParam0->f_83), 2048);
					func_278(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_62(&(uParam0->f_83), 4096);
					func_278(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_208(&Var0);
					func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_335(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_335(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_348(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
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
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
				{
					func_234(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_336(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_347(uParam0, &Var0, 0, 0, 8);
						func_206(uParam0, 52, 1, 0, 0);
						func_278(uParam0, 16, 0, 0);
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
						func_347(uParam0, &Var0, 0, 0, 8);
						func_278(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_350(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_278(uParam0, 16, 0, 0);
					func_239(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_348(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_278(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xEA49C7D4FDCF922C(unk_0x8A41C463063AFC8E()) >= 1)
				{
					func_238("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_342(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_342(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_342(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_348(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_333(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_333(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_348(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
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
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_62(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&Var0);
				}
				func_62(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
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
				func_62(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
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
						func_339(Var0, uParam1);
						func_62(&(uParam0->f_82), 65536);
						func_278(uParam0, 16, 0, 0);
						func_278(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_208(&Var0);
						func_339(Var0, uParam1);
						func_62(&(uParam0->f_82), 131072);
						func_278(uParam0, 16, 0, 0);
						func_278(uParam0, 11, 0, 0);
						func_239(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_62(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_62(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_62(&(uParam0->f_82), 33554432);
				}
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_350(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_208(&Var0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_339(Var0, uParam1);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_350(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_206(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_62(&(uParam0->f_81), 2097152);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_208(&Var0);
				func_339(Var0, uParam1);
				func_62(&(uParam0->f_81), 67108864);
				func_278(uParam0, 16, 0, 0);
				func_278(uParam0, 11, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_342(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
					{
						func_234(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_206(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_342(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_206(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_238("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_239(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_342(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
						{
							func_234(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_342(uParam0, 4194304, Var0, "_mPay1", 1, 8);
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
				func_307(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_278(uParam0, 16, 0, 0);
				func_239(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_342(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_239(uParam0, 0, 0);
				break;
			
			case 88:
				func_238("TAXI_TIEFLEE", 7500, 1);
				func_239(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_238("TAXI_OBJ_CYI_1B", 7500, 1);
					func_62(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_239(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_208(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
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
				func_347(uParam0, &Var0, 0, 0, 8);
				func_239(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
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
				func_347(uParam0, &Var0, 0, 0, 8);
				func_239(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_347(uParam0, &Var0, 1, 0, 8);
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

void func_333(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_62(&(uParam0->f_82), iParam1);
	func_278(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_307(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_334(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_62(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_62(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x895FB9FE885E36ED(1, 3), 24);
	}
	func_349(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_278(uParam0, 16, 0, 0);
}

void func_335(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_62(&(uParam0->f_82), iParam1);
	func_278(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_208(&Param2);
		}
	}
	func_307(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_336(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_337(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_62(&(uParam0->f_81), iParam1);
	func_278(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_307(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_338(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_257(*uParam0, iVar1))
		{
			func_63(uParam0, iVar1);
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

void func_339(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_340(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_62(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_340(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x58478145CAF8429C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_341(var uParam0, bool bParam1)
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

void func_342(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_62(&(uParam0->f_81), iParam1);
	func_278(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_208(&Param2);
	}
	func_307(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_343(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_159(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
	return uVar0;
}

void func_344(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_278(uParam0, 16, 0, 0);
	func_278(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x769F0F6444C1ABE0(uParam0->f_3))
	{
		unk_0xEEA02C20EAFE6ECE(uParam0->f_3, &cParam1, func_345(uParam0));
	}
}

char* func_345(var uParam0)
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

char* func_346(var uParam0, int iParam1)
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

int func_347(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_278(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_278(uParam0, 17, 0f, 1);
	}
	func_239(uParam0, iParam2, 0);
	return func_307(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_348(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
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
			*uParam1 += 2;
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

int func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_315(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_308(sParam2, iParam4, 0);
}

void func_350(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_257(*uParam0, iVar1))
		{
			func_63(uParam0, iVar1);
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

int func_351(var uParam0)
{
	return uParam0->f_416;
}

int func_352(char* sParam0)
{
	if (!unk_0x47988E04F8E2F0AD(sParam0))
	{
		if (func_147(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_353(var uParam0)
{
	if (func_49())
	{
		return 1;
	}
	if (func_138(uParam0, 17))
	{
		return 1;
	}
	if (func_138(uParam0, 14))
	{
		return 1;
	}
	if (func_145(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_354(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_138(uParam0, 9));
}

void func_355(var uParam0)
{
	if (func_138(uParam0, 17))
	{
		if (!func_138(uParam0, 14))
		{
			if (!func_145(uParam0))
			{
				if (!func_49())
				{
					func_135(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_356(var uParam0)
{
	return uParam0->f_117;
}

void func_357(var uParam0)
{
	if (!func_139(uParam0))
	{
		if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
		{
		}
		func_151(uParam0, 1);
	}
	else if (func_138(uParam0, 14))
	{
		func_165(uParam0);
		func_154(uParam0, 0);
	}
}

void func_358(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_257(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_257(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_257(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_63(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x3732B96D7A1859B4();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_257(Local_343.f_1[iVar0 /*4*/], 4) && !func_257(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_63(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_306(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_359(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x58478145CAF8429C(&(uParam0->f_124)) && func_49())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_49())
				{
					StringCopy(&(uParam0->f_124), func_126(), 24);
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

int func_360(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_138(uParam0, 27))
	{
		func_136(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_395(uParam0, 27) > 5f)
	{
		if (func_387(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_278(uParam0, 27, 0, 0);
			func_278(uParam0, 10, 0, 0);
			func_385(uParam0, &uVar0, uParam1);
		}
		func_382(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_361(uParam0);
	}
	if ((((!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()) && (unk_0x9FA769EB6C3BCCE4(*uParam0) && !unk_0xF0A915CB71B8E167(*uParam0))) && (unk_0x9FA769EB6C3BCCE4(uParam0->f_1) && !unk_0xF0A915CB71B8E167(uParam0->f_1))) && !unk_0x5CA780C6DF42F0B0()) && !func_49())
	{
		if (func_395(uParam0, 26) > 10f)
		{
			func_135(uParam0, 26, 0);
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
		}
	}
	else if (func_138(uParam0, 26))
	{
		func_135(uParam0, 26, 0);
	}
	return 0;
}

void func_361(var uParam0)
{
	if (!func_381(uParam0->f_429))
	{
		uParam0->f_429 = func_380();
		func_371(&(uParam0->f_429), 0, 0, unk_0x895FB9FE885E36ED(4, 7), 0, 0, 0);
	}
	else if (func_362(uParam0->f_429))
	{
		func_306(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_362(int iParam0)
{
	return func_363(func_380(), iParam0);
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_381(iParam1) || !func_381(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_365(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_366(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_367(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_368(int iParam0)
{
	return iParam0 & 15;
}

var func_369(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_370(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_370(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
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
	
	iVar0 = func_369(*uParam0);
	iVar1 = func_368(*uParam0);
	iVar2 = func_367(*uParam0);
	iVar3 = func_366(*uParam0);
	iVar4 = func_365(*uParam0);
	iVar5 = func_364(*uParam0);
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
	iVar6 = func_379(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_379(iVar1, iVar0);
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
	func_378(uParam0, iParam1);
	func_377(uParam0, iParam2);
	func_376(uParam0, iParam3);
	func_375(uParam0, iParam5);
	func_374(uParam0, iParam4);
	func_373(uParam0, iParam6);
}

void func_373(var uParam0, int iParam1)
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

void func_374(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_368(*uParam0);
	iVar1 = func_369(*uParam0);
	if (iParam1 < 1 || iParam1 > func_379(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_375(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_376(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_377(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_378(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_379(int iParam0, int iParam1)
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

int func_380()
{
	var uVar0;
	
	func_378(&uVar0, unk_0xD887411BD4A4A92D());
	func_377(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_376(&uVar0, unk_0xDA870B7547A455EA());
	func_374(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_375(&uVar0, unk_0x0FD588FC21950895());
	func_373(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

int func_381(int iParam0)
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
	iVar0 = func_364(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_365(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_366(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_369(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_368(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_367(iParam0);
	if (iVar5 < 1 || iVar5 > func_379(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_382(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_384()) && !func_139(uParam0)) || ((uParam0->f_411 != 9 && func_244(uParam0, 1)) && !func_139(uParam0)))
		{
			uVar0 = func_383(uParam0->f_4);
			unk_0xC76AD47E2B4CE25C(&uVar0);
			uParam0->f_4 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			unk_0x216B434C1A609F5B(uParam0->f_4, 1, 0);
			func_165(uParam0);
			func_154(uParam0, 0);
		}
	}
}

var func_383(var uParam0)
{
	return uParam0;
}

int func_384()
{
	int iVar0;
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0xEB018752B4AE9E13(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_386(uParam0, 0, 1))
			{
				func_306(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_386(uParam0, 0, 4))
			{
				func_306(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_386(uParam0, 0, 8))
			{
				func_306(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_386(uParam0, 1, 1))
			{
				func_306(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_386(uParam0, 0, 1))
			{
				func_306(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_115(uParam0))
			{
				func_306(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_386(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
	{
		if (!unk_0x812A9839F66D4B43(uParam0->f_3))
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

int func_387(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x2A5EB8B0FE590B91();
	if (!unk_0xA9A04898798AE9E6(iVar0, 0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_393(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_391(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_390(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_388(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_388(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x2137828D03306CAF(iParam0))
	{
		if (iParam7 && unk_0xE8594BE97055E9A1(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0xE86A53C202B21FAB(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0xE86A53C202B21FAB(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x19D9DFABC3C7D219();
		if (!unk_0xA9A04898798AE9E6(uVar0, 0))
		{
			if (unk_0xE8594BE97055E9A1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x19D9DFABC3C7D219();
		if (!unk_0xA9A04898798AE9E6(uVar1, 0))
		{
			if (unk_0xE8594BE97055E9A1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			if (unk_0xB833DDD4C8B30212(iParam0))
			{
				if (unk_0xC6B380C93662023B(iParam0) == unk_0x2A5EB8B0FE590B91())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0x7DDA81F38FB30F23(iParam0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x26A9A3FD5AE8B6AD(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x5FC1FB185E6A09B2(iParam0))
		{
			return 1;
		}
	}
	if (func_389(unk_0x2A5EB8B0FE590B91(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x62F5757271CA0B05(iParam0) && func_152(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), unk_0x0C20E539D876C5B3(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), iParam0))
		{
			return 1;
		}
		if (!unk_0xA9A04898798AE9E6(uParam1, 0))
		{
			if (unk_0xE8594BE97055E9A1(iParam1, unk_0x2A5EB8B0FE590B91(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_389(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xAB211D8B129F26CB(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 1), unk_0xD1EE0E9FCD74A37B(iParam1, 1)) < 2.5f)
			{
				if (unk_0x16EDD647B91D8D8F(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x09A26025E0F821B1(uParam0, 4))
	{
		if (unk_0xAB211D8B129F26CB(uParam0) && !unk_0x2519417DF9A1715B(iParam0))
		{
			if (unk_0x7DDA81F38FB30F23(uParam1, unk_0xD1EE0E9FCD74A37B(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	if (unk_0xD42AA0CF76AFB4D8(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x25EA54098EA8BC13(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x09A26025E0F821B1(uParam0, 2))
	{
		if (unk_0xAB211D8B129F26CB(uParam0))
		{
			if (unk_0x7DDA81F38FB30F23(iParam1, unk_0xD1EE0E9FCD74A37B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x16EDD647B91D8D8F(unk_0xC3A7AD90290CA72E(iParam1), iParam0, 120f) && unk_0x2FF6D1D6A0790F5A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0xC3A7AD90290CA72E(iParam1), 0))
			{
				iVar3 = unk_0x0C20E539D876C5B3(unk_0xC3A7AD90290CA72E(iParam1), 0);
			}
			if (unk_0x523BFA385406F50B(iParam0) || func_392(iVar3))
			{
				if (unk_0x7DDA81F38FB30F23(iParam1, unk_0xD1EE0E9FCD74A37B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x16EDD647B91D8D8F(unk_0xC3A7AD90290CA72E(iParam1), iParam0, 120f) && unk_0x2FF6D1D6A0790F5A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x05A9C36EF40B6941((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (unk_0x8F8E5C33266ED978(iParam0, -1, 0) != 0)
			{
				if (unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_153(unk_0x2A5EB8B0FE590B91(), iParam0, 1) < 40f)
						{
							if (unk_0x25D7C3DEE2A69693(unk_0x0FFED3E94261A832(), &uVar1))
							{
								if ((unk_0x82DF3B947FC3E281(uVar1) && unk_0x761AC59E782D169D(iVar1) == iParam0) || (unk_0xEE46DE31F43DCAF1(iVar1) && unk_0xC3A7AD90290CA72E(iVar1) == unk_0x8F8E5C33266ED978(iParam0, -1, 0)))
								{
									if ((unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()) && unk_0x83F6A1E4E653AD75(0, 24)) || (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0x83F6A1E4E653AD75(0, 69)))
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

int func_393(int iParam0, var uParam1)
{
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
		{
			if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0))
			{
				if (unk_0x16EDD647B91D8D8F(iParam0, unk_0x2A5EB8B0FE590B91(), 90f))
				{
					if (func_152(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x3732B96D7A1859B4();
						}
						else if ((unk_0x3732B96D7A1859B4() - uParam1->f_1) > uParam1->f_3)
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

void func_394(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
		{
			if (func_133(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x17F1CA1754EDB8DB(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_62(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_395(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_137(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_97(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_396()
{
	func_397(&Local_409);
	func_414();
}

void func_397(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_416(2);
	}
}

int func_398(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_49() && func_395(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xA9A04898798AE9E6(uParam0->f_3, 0))
		{
			if (unk_0x7FAC45D56235AB39(uParam0->f_4, 0))
			{
				if (unk_0x5B9B499C707C2A95(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_61(uParam0) == 0 || func_257(uParam0->f_85, 32))
					{
						if (!unk_0x8E5603C4729B40B4(uParam0->f_4))
						{
							func_317(uParam0, 4160, 0);
						}
						else
						{
							func_317(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_317(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_317(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_317(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
	{
	}
	return 0;
}

void func_399(var uParam0)
{
	if (unk_0xBDD3EABACAB97D09(uParam0->f_8))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_8));
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_9))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_9));
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_10))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_10));
	}
}

int func_400(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_401()
{
	func_403(&Local_409, 4);
	Local_409.f_410 = 0;
	Local_409.f_36 = 20f;
	Local_409.f_23 = { -422.4797f, 1181.769f, 324.6417f };
	Local_409.f_33 = 225.6436f;
	Local_409.f_26 = { 171.1731f, -3288.171f, 4.7828f };
	Local_409.f_34 = 184.17f;
	func_402(&Local_409, 20, 40);
}

void func_402(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_403(var uParam0, int iParam1)
{
	func_413(1);
	func_167();
	func_6(&(uParam0->f_244));
	func_412(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_103236.f_18878, 4))
	{
		func_62(&(Global_103236.f_18878), 4);
	}
	func_407(uParam0);
	func_405(uParam0);
	unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	uParam0->f_102 = (func_404(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xC9173FA08E7D8227("TAXI", 2);
}

int func_404(int iParam0)
{
	return Global_103236.f_18878.f_39[iParam0];
}

void func_405(var uParam0)
{
	switch (func_61(uParam0))
	{
		case 0:
			func_406(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_406(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_406(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_406(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_406(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_406(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_406(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_406(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_406(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_406(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_406(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_407(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_411(uParam0, 3);
			func_410(uParam0, 14);
			break;
		
		case 1:
			func_411(uParam0, 14);
			func_410(uParam0, 8);
			break;
		
		case 2:
			func_411(uParam0, 8);
			func_410(uParam0, 7);
			break;
		
		case 3:
			func_411(uParam0, 15);
			func_410(uParam0, 6);
			break;
		
		case 4:
			func_411(uParam0, 0);
			func_410(uParam0, 3);
			break;
		
		case 5:
			func_411(uParam0, 6);
			func_410(uParam0, 7);
			break;
		
		case 6:
			func_411(uParam0, 8);
			func_410(uParam0, 15);
			break;
		
		case 7:
			func_411(uParam0, 8);
			func_410(uParam0, 14);
			break;
		
		case 8:
			func_411(uParam0, 7);
			func_410(uParam0, 15);
			break;
		
		case 9:
			func_411(uParam0, unk_0x895FB9FE885E36ED(0, 17));
			iVar0 = func_409((uParam0->f_418.f_2 + unk_0x895FB9FE885E36ED(1, 17)), 0, 16);
			func_410(uParam0, iVar0);
			func_408(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_408(var uParam0)
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

int func_409(int iParam0, int iParam1, int iParam2)
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

void func_410(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_411(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_412(var uParam0)
{
	uParam0->f_2 = unk_0x2A5EB8B0FE590B91();
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
	func_135(uParam0, 32, 0);
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_102292, unk_0xFABF5258A318B1DC(), 24);
		Global_102286 = 1;
	}
	else
	{
		StringCopy(&Global_102292, "NULL", 24);
		Global_102286 = 0;
	}
}

void func_414()
{
	func_190(1);
	func_197(&uLocal_846);
	func_415();
	unk_0xA232817B0B36F2E5();
}

void func_415()
{
	unk_0xFD213087BC4CC3B3(iLocal_841);
}

void func_416(int iParam0)
{
	Global_101948.f_22 = iParam0;
}

