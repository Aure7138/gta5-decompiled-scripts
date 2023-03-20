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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59[2] = { 0, 0 };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66[2];
	float fLocal_73[2] = { 0f, 0f };
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_79 = 0f;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[2] = { 0, 0 };
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[2] = { 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	char[] cLocal_138[8] = 0;
	struct<10> Local_139[16];
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 1000;
	var uLocal_314 = 1000;
	var uLocal_315 = 0;
	var uLocal_316 = 8;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 1;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	float fLocal_468 = 0f;
	struct<3> Local_469 = { 0, 0, 0 } ;
	struct<3> Local_472 = { 0, 0, 0 } ;
	int iLocal_475 = 0;
	struct<3> Local_476 = { 0, 0, 0 } ;
	float fLocal_479 = 0f;
	int iLocal_480[2] = { 0, 0 };
	int iLocal_483 = 0;
	struct<3> Local_484 = { 0, 0, 0 } ;
	struct<3> Local_487 = { 0, 0, 0 } ;
	struct<3> Local_490 = { 0, 0, 0 } ;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	bool bLocal_495 = 0;
	int iLocal_496 = 0;
	float fLocal_497 = 0f;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	struct<3> Local_500 = { 0, 0, 0 } ;
	int iLocal_503[2] = { 0, 0 };
	int iLocal_506 = 0;
	float fLocal_507 = 0f;
	float fLocal_508 = 0f;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511[2] = { 0, 0 };
	int iLocal_514[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_80 = { 0.0203f, -3.1441f, 0.5027f };
	Local_83 = { 90f, 0f, 0f };
	Local_89 = { 0f, 0f, 0f };
	Local_92 = { 0f, 0f, 0f };
	iLocal_128 = 1;
	iLocal_129 = 1;
	cLocal_138 = "RESECAU";
	iLocal_464 = -1;
	fLocal_468 = -3.55f;
	Local_469 = { 0.014f, -0.9111f, 1.2317f };
	Local_472 = { 0f, -3.4368f, 1.2317f };
	iLocal_493 = -1;
	iLocal_494 = -1;
	iLocal_506 = -1;
	Local_86 = { Local_86 };
	Local_86 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2A488C176D52CCA5(Local_86, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_46 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_46 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -389f, 6061f, 31f) < 5f)
	{
		iLocal_46 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_46 = 4;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_46 = 5;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_46 = 6;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_46 = 7;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_46 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_46 = 9;
	}
	else if (unk_0x2A488C176D52CCA5(Local_86, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_46 = 10;
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	if (Global_3)
	{
		if (iLocal_46 != 2)
		{
			unk_0xE60DEFFB2A853900();
		}
	}
	else
	{
		if (unk_0xD63E63DFACCEB80E(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
				{
					if (unk_0xFC38B241541883D3(iLocal_53, 0))
					{
						if (!unk_0x44E080690DA76A2A(iLocal_50[iVar0], iLocal_53, 0))
						{
							unk_0x4073360CA020BB84(iLocal_50[iVar0], iLocal_53, -1, func_234(iLocal_53), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0xD19636383159AC07(iLocal_50[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(Local_86, 9, iLocal_46, 1, 0))
		{
			unk_0xE60DEFFB2A853900();
		}
		else
		{
			func_174(-1);
		}
	}
	func_173();
	uLocal_64 = unk_0x676E460800A9E1B7(Local_76 + Vector(30f, 30f, 30f), Local_76 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_170(&uLocal_316);
		if (!func_169())
		{
			if (func_168())
			{
				func_217();
			}
			unk_0x2F626F4BEC43C4F6("RE_SV", 0);
			switch (iLocal_509)
			{
				case 0:
					if (unk_0xB819D1DD7DA58F08() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_45 == 3 && !(unk_0xE298336AB6E66F7E(Local_76, 3f) && func_146(unk_0x9F92518438215DD0(), Local_76, 1) < 150f)) || iLocal_45 != 3)
							{
								if (iLocal_45 == 3)
								{
									if (!unk_0xE298336AB6E66F7E(Local_76, 8f))
									{
										unk_0xFC90BEDEE248C76D(Local_76, 4f, 1, 0, 0, 0);
									}
									iLocal_47 = 4;
									bLocal_108 = true;
								}
								else
								{
									iLocal_47 = 1;
								}
								func_145();
								if (unk_0xFC38B241541883D3(iLocal_53, 0) && iLocal_45 == 3)
								{
									unk_0xBF3459C0ACC7B82F(iLocal_53, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_509++;
							}
						}
					}
					else
					{
						func_217();
					}
					break;
				
				case 1:
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && unk_0xFC38B241541883D3(iLocal_53, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) < 10000f || !unk_0xC7FF9739199F83C9(iLocal_53)) || (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0xC7FF9739199F83C9(iLocal_50[0]))) || (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0xC7FF9739199F83C9(iLocal_50[1])))
						{
							iLocal_509++;
						}
					}
					if (func_144())
					{
						iLocal_509++;
					}
					if (iLocal_509 != 1)
					{
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 2:
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iLocal_45 != 3)
						{
							func_139();
						}
					}
					if (unk_0x746960881FB19A89(iLocal_53) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (iLocal_45 == 3)
						{
							func_134();
							if (!unk_0xC7FF9739199F83C9(iLocal_53) && (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < 100f || func_144()))
							{
								func_125(1);
							}
						}
						else if (((!unk_0xC7FF9739199F83C9(iLocal_53) && iLocal_47 == 4) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Local_95, Local_98, fLocal_101, 0, 1, 0)) || func_144())
						{
							func_125(1);
						}
						if ((iLocal_47 == 4 && unk_0xC7FF9739199F83C9(iLocal_53)) && iLocal_45 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) > 100f)
							{
								func_217();
							}
							else
							{
								func_125(1);
							}
						}
					}
					break;
			}
			if (iLocal_509 > 0)
			{
				if (unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0xC7FF9739199F83C9(iLocal_53))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) > 62500f)
					{
						func_217();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) > 10000f && !unk_0xB819D1DD7DA58F08())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
			if (!unk_0x2E6E8D325977B3EC(uLocal_62))
			{
				if (!func_124(2) && !bLocal_113)
				{
					if (!unk_0xC9EED58014EF1F40())
					{
						func_123("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (unk_0x746960881FB19A89(iLocal_55))
				{
					if (iLocal_510 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_55, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 0;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (((bLocal_108 && !unk_0x303D473D180EAA17(uLocal_136)) && unk_0xFC38B241541883D3(iLocal_53, 0)) && !bLocal_120)
				{
					if (iLocal_510 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (unk_0x303D473D180EAA17(uLocal_136))
				{
					if (iLocal_510 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x2A4F10CF6F80EA9F(uLocal_136), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 2;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (iLocal_510 == 0)
				{
					if (unk_0x746960881FB19A89(iLocal_55))
					{
						func_114(&uLocal_304, iLocal_55, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_55, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 1)
				{
					if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 1))
					{
						func_114(&uLocal_304, iLocal_53, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 2)
				{
					if (unk_0x303D473D180EAA17(uLocal_136))
					{
						func_97(&uLocal_304, unk_0x2A4F10CF6F80EA9F(uLocal_136), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x2A4F10CF6F80EA9F(uLocal_136), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (((!unk_0x0BA451447C3B1A8D(iLocal_53) && bLocal_108) && !bLocal_110) && (!func_124(0) || (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_stickybomb"), 0) && !func_124(1))))
				{
					switch (iLocal_133)
					{
						case 0:
							if (!unk_0xC9EED58014EF1F40() && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < 225f)
							{
								func_123("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_133++;
							}
							break;
						
						case 1:
							if (!unk_0xC9EED58014EF1F40())
							{
								iLocal_134 = unk_0x17103F66FBB44C3C();
								iLocal_133++;
							}
							break;
						
						case 2:
							if ((unk_0x17103F66FBB44C3C() - iLocal_134) > 2000 && unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_stickybomb"), 0))
							{
								func_123("SV_DOORHELP2", 15000);
								func_122(1);
								iLocal_133++;
							}
							break;
						}
				}
				if (bLocal_110 || bLocal_120)
				{
					if (func_96("SV_DOORHELP1") || func_96("SV_DOORHELP2"))
					{
						unk_0x35611EEE7A1FFEDB(1);
					}
				}
			}
			switch (iLocal_47)
			{
				case 1:
					func_139();
					break;
				
				case 2:
					func_88();
					break;
				
				case 3:
					func_86();
					break;
				
				case 4:
					func_134();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
					{
						if (unk_0x3245F59A95D20822(iLocal_50[0]) != 3)
						{
							unk_0x0D51BC85F29E0C96(iLocal_50[0], 3);
						}
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
					{
						if (unk_0x3245F59A95D20822(iLocal_50[1]) != 3)
						{
							unk_0x0D51BC85F29E0C96(iLocal_50[1], 3);
						}
					}
					if (((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x0BA451447C3B1A8D(iLocal_50[0])) && !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && !unk_0x0BA451447C3B1A8D(iLocal_50[1]))
					{
						iLocal_128 = 1;
						func_73(iLocal_50[1]);
						func_71(0, 1);
					}
					else if (iLocal_128 == 1)
					{
						if (unk_0x3E0478C40AB5B38D(iLocal_50[1]) || unk_0x0BA451447C3B1A8D(iLocal_50[1]))
						{
							iLocal_49 = 0;
							iLocal_128 = 0;
						}
						else
						{
							func_73(iLocal_50[1]);
						}
					}
					else if (iLocal_128 == 0)
					{
						if (unk_0x3E0478C40AB5B38D(iLocal_50[0]) || unk_0x0BA451447C3B1A8D(iLocal_50[0]))
						{
							iLocal_128 = -1;
						}
						else
						{
							func_73(iLocal_50[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_217();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && unk_0xB5BBEB12C77EE430(iLocal_53, -1) == unk_0x9F92518438215DD0()) && !bLocal_112) && iLocal_47 != 8)
			{
				if (bLocal_108)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (bLocal_109)
			{
				if (unk_0xAD1B30EA74D6348D(iLocal_65, joaat("player")) != 5)
				{
					unk_0xF2061C15946C53A2(5, iLocal_65, joaat("player"));
					unk_0xF2061C15946C53A2(5, joaat("player"), iLocal_65);
				}
			}
			if (bLocal_110)
			{
				if ((unk_0x303D473D180EAA17(uLocal_136) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x2A4F10CF6F80EA9F(uLocal_136)) > 250f)
				{
					func_62(9);
				}
			}
			if (!bLocal_120)
			{
				if (func_61())
				{
					bLocal_120 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x746960881FB19A89(iLocal_50[iVar2]))
				{
					if ((!unk_0x0BA451447C3B1A8D(iLocal_50[iVar2]) && !unk_0x3E0478C40AB5B38D(iLocal_50[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_50[0], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x746960881FB19A89(iLocal_53))
				{
					if (unk_0xFC38B241541883D3(iLocal_53, 0))
					{
						if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 10000f && unk_0xC7FF9739199F83C9(iLocal_53)) || unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_37();
				}
			}
			func_33();
			func_28();
			func_23();
		}
		if (!bLocal_106)
		{
			if (func_22())
			{
				iLocal_126 = unk_0x17103F66FBB44C3C();
				bLocal_106 = true;
			}
		}
		if (bLocal_106)
		{
			if (!bLocal_107)
			{
				if ((unk_0x17103F66FBB44C3C() - iLocal_126) > 5000)
				{
					unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 2, 0);
					if (func_21() < 30f)
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_107 = true;
						}
					}
					else
					{
						bLocal_107 = true;
					}
				}
			}
		}
		if (((unk_0x17103F66FBB44C3C() - iLocal_126) > 10000 && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) && !iLocal_125)
		{
			iVar4 = unk_0x073B65E051D2F03E(0, 3);
			if (iVar4 == 0)
			{
				unk_0x19E25152FB60E562("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x19E25152FB60E562("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x19E25152FB60E562("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_125 = 1;
		}
		if (bLocal_107)
		{
			if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
					{
						unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 2, 0);
						unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
					}
					unk_0x68B79739BA165739(unk_0xCFC72E446B0B3AD7(), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1));
				}
			}
		}
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0 && func_2())
		{
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 2, 0);
			unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x92C66E7375C6022D(iLocal_53, 0) > 0f || unk_0x92C66E7375C6022D(iLocal_53, 1) > 0f)
			{
				if (unk_0x433D30FBB06F5E87(iLocal_53) == 3)
				{
					unk_0x993B4D0D3CD44124(iLocal_53, 1);
				}
			}
			if (!bLocal_111)
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 0))
				{
					bLocal_111 = true;
				}
			}
			if (!bLocal_111)
			{
				if (unk_0x92C66E7375C6022D(iLocal_53, 0) == 0f && unk_0x92C66E7375C6022D(iLocal_53, 1) == 0f)
				{
					if (unk_0x433D30FBB06F5E87(iLocal_53) == 1)
					{
						unk_0x993B4D0D3CD44124(iLocal_53, 3);
					}
				}
			}
		}
		if (iLocal_130 != 0)
		{
			if ((iLocal_47 == 8 || iLocal_47 == 6) || iLocal_47 == 4)
			{
				unk_0x49066B38AF1DCF6A(iLocal_130);
			}
		}
		if (unk_0x746960881FB19A89(iLocal_55))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar5]) && !unk_0x0BA451447C3B1A8D(iLocal_50[iVar5]))
				{
					if (unk_0x46A61489C128881A(iLocal_55, iLocal_50[iVar5]))
					{
						if (iLocal_47 == 1)
						{
							if (!iLocal_511[iVar5])
							{
								unk_0x72DD4C86C90AEE82(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x72DD4C86C90AEE82(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_511[iVar5] = 1;
							}
						}
						if (iLocal_47 == 7)
						{
							if (!iLocal_514[iVar5])
							{
								unk_0x72DD4C86C90AEE82(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x72DD4C86C90AEE82(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_514[iVar5] = 1;
							}
						}
						if (unk_0x860AFAABAECF6379(iLocal_50[iVar5], 4) && !iLocal_114)
						{
							unk_0x74C5E6A80E936A66(iLocal_50[iVar5], 1);
							iLocal_114 = 1;
						}
					}
					else
					{
						if (iLocal_511[iVar5])
						{
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 0, -1056964608);
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 1, -1056964608);
							iLocal_511[iVar5] = 0;
						}
						if (iLocal_514[iVar5])
						{
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 0, -1056964608);
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 1, -1056964608);
							iLocal_514[iVar5] = 0;
						}
						if (iLocal_511[iVar5] || iLocal_514[iVar5])
						{
							iLocal_511[iVar5] = 0;
							iLocal_514[iVar5] = 0;
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 0, -1056964608);
							unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 1, -1056964608);
						}
						if (unk_0x860AFAABAECF6379(iLocal_50[iVar5], 4) && iLocal_114)
						{
							unk_0x74C5E6A80E936A66(iLocal_50[iVar5], 1);
							iLocal_114 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar5]))
				{
					if (iLocal_511[iVar5] || iLocal_514[iVar5])
					{
						iLocal_511[iVar5] = 0;
						iLocal_514[iVar5] = 0;
						unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 0, -1056964608);
						unk_0xF49022218F5C1CB4(iLocal_50[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_108 && !bLocal_495)
		{
			if (((((unk_0x746960881FB19A89(iLocal_55) && unk_0xBB5C52611DD71292(iLocal_55)) && !unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129])) && !unk_0x3C17D9ED0E5F3FCA(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 3)) && !unk_0x3C17D9ED0E5F3FCA(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x3C17D9ED0E5F3FCA(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x7CF15DD8B3815A0D(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_115)
		{
			if (unk_0x746960881FB19A89(iLocal_53))
			{
				if (unk_0xE99AF5B1B3F0BB7C(iLocal_53, unk_0x9F92518438215DD0(), 1))
				{
					iLocal_115 = 1;
				}
				unk_0x87659527DF5C44B5(iLocal_53);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && (((unk_0xFC38B241541883D3(iLocal_53, 0) && bLocal_113) && unk_0x303D473D180EAA17(uLocal_136)) || (!unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0x303D473D180EAA17(uLocal_136)))) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x2A4F10CF6F80EA9F(uLocal_136)) < 20f)
	{
		iVar1 = unk_0x3AF5C036F636505A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x3E0478C40AB5B38D(iVar1))
		{
			if (unk_0xB6A50C909A8FABC3(iVar1) == joaat("s_m_y_cop_01") || unk_0xB6A50C909A8FABC3(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x3AF5C036F636505A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x3E0478C40AB5B38D(iVar1))
		{
			if (unk_0xB6A50C909A8FABC3(iVar1) == joaat("s_m_y_cop_01") || unk_0xB6A50C909A8FABC3(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x78D161D012E82C3F(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), fVar0, 0, 1024);
		if (unk_0xFC38B241541883D3(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x78D161D012E82C3F(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), fVar0, 0, 1024);
		if (unk_0xFC38B241541883D3(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_50[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()
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

void func_7()
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

int func_8()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14393 = func_11();
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

int func_11()
{
	func_12();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_15(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_14(unk_0x9F92518438215DD0());
			if (func_13(iVar0) && (!func_16(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97358.f_1729.f_539.f_3213))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[0], 1));
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[1], 1));
			}
		}
	}
	return unk_0x71D93B57D07F9804(fVar0);
}

int func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_50)
		{
			if (unk_0x746960881FB19A89(iLocal_50[iVar1]))
			{
				if (((!unk_0x3E0478C40AB5B38D(iLocal_50[iVar1]) && unk_0xE99AF5B1B3F0BB7C(iLocal_50[iVar1], unk_0x9F92518438215DD0(), 1)) || unk_0x3E0478C40AB5B38D(iLocal_50[iVar1])) || unk_0x0BA451447C3B1A8D(iLocal_50[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && iLocal_115)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()
{
	if (!bLocal_120)
	{
		if (!bLocal_108)
		{
			if (unk_0x746960881FB19A89(iLocal_55))
			{
				if (!unk_0xBB5C52611DD71292(iLocal_55))
				{
					unk_0x83A49C880CB75451(&iLocal_55);
					if (!unk_0x303D473D180EAA17(uLocal_136) && !bLocal_110)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x17103F66FBB44C3C() - iLocal_135) > 3000)
				{
					if (unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]) || unk_0xBD280C076BC69C97(iLocal_50[iLocal_129]))
					{
						unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
						iLocal_135 = unk_0x17103F66FBB44C3C();
					}
				}
			}
			else if (!unk_0x303D473D180EAA17(uLocal_136))
			{
				if (unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]) || ((!unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]) && unk_0xBD280C076BC69C97(iLocal_50[iLocal_129])) && !bLocal_110))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x746960881FB19A89(iLocal_55))
		{
			unk_0x83A49C880CB75451(&iLocal_55);
		}
		if (unk_0x303D473D180EAA17(uLocal_136))
		{
			unk_0xCFEE915F16B66662(uLocal_136);
		}
	}
}

void func_24(struct<3> Param0, bool bParam3)
{
	if (!bLocal_120 && !bLocal_110)
	{
		if (!bParam3)
		{
			if (bLocal_108)
			{
				Param0 = { unk_0xFE6CFB1749CED843(unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xFE6CFB1749CED843(unk_0x77009B1C011405A9(iLocal_50[iLocal_129], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xEDB9A377CD8B7F03(&uLocal_137, 3);
		unk_0xEDB9A377CD8B7F03(&uLocal_137, 4);
		unk_0xEDB9A377CD8B7F03(&uLocal_137, 1);
		if (bParam3)
		{
			uLocal_136 = unk_0xC4163BC5B413E6F6(joaat("pickup_money_security_case"), Param0, unk_0x045015AED79BD50E(iLocal_55, 2), 0, uLocal_127, 2, 1, 0);
		}
		else
		{
			uLocal_136 = unk_0xF8670CA33A75995A(joaat("pickup_money_security_case"), Param0, uLocal_137, uLocal_127, 1, 0);
		}
		if (!unk_0x2E6E8D325977B3EC(uLocal_63))
		{
			uLocal_63 = func_25(uLocal_136);
		}
		if (unk_0x746960881FB19A89(iLocal_55))
		{
			unk_0x83A49C880CB75451(&iLocal_55);
		}
		bLocal_110 = true;
	}
}

int func_25(var uParam0)
{
	return func_26(uParam0);
}

int func_26(var uParam0)
{
	var uVar0;
	
	if (!unk_0x303D473D180EAA17(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x56F3A0BEE1BE9871(uParam0);
	unk_0xD4916ED85412C8D9(uVar0, func_27(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	return uVar0;
}

float func_27(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_28()
{
	if (func_30())
	{
		if (unk_0x746960881FB19A89(iLocal_56))
		{
			unk_0x1FE4B6BC95E3B9AD(iLocal_53, 2, 0, 0);
			unk_0x1FE4B6BC95E3B9AD(iLocal_53, 3, 0, 0);
			if (unk_0x746960881FB19A89(iLocal_56))
			{
				unk_0x83A49C880CB75451(&iLocal_56);
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if (bLocal_108)
			{
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			if (unk_0x92C66E7375C6022D(iLocal_53, 2) == 0f && unk_0x92C66E7375C6022D(iLocal_53, 3) == 0f)
			{
				if (unk_0x746960881FB19A89(iLocal_55))
				{
					if (unk_0xBB5C52611DD71292(iLocal_55))
					{
						unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
					}
					unk_0x80BA810554025DFF(iLocal_55, iLocal_53, 0, Local_80, Local_83, 0, 0, 0, 0, 2, 1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_110 && !bLocal_120)
			{
				if (!unk_0x0BA451447C3B1A8D(iLocal_53))
				{
					if (((unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0x92C66E7375C6022D(iLocal_53, 2) > 0.25f) && unk_0x92C66E7375C6022D(iLocal_53, 3) > 0.25f) || !unk_0xFC38B241541883D3(iLocal_53, 0))
					{
						if (unk_0x746960881FB19A89(iLocal_55))
						{
							if (unk_0xBB5C52611DD71292(iLocal_55))
							{
								unk_0x6687E59C6A0BB305(unk_0x50798E25F4813F2F(), "DOORS_BLOWN", unk_0x038249BAB926B732(iLocal_53, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x8ED1C81168F4A10C(iLocal_55, 1, 0);
								unk_0x4220BD8C5CDBF540(iLocal_55, 1, 0);
								unk_0x3BD670EFDCBA8935(iLocal_55);
								unk_0x3175FF00DDBD8140(iLocal_55, 1);
								Local_476 = { unk_0x77009B1C011405A9(iLocal_55, 1) - unk_0x77009B1C011405A9(iLocal_53, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_476) > 10f)
								{
									Local_476 = { func_29(Local_476) };
									Local_476 = { Local_476 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_132 < 100)
								{
									iLocal_116 = 1;
								}
								unk_0xDFA7F2CAB9E5A4D4(iLocal_55, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_475 = unk_0x17103F66FBB44C3C();
							}
							else if (unk_0x2C37DA238C72EC9E(unk_0x77009B1C011405A9(iLocal_55, 1), unk_0x20CBCBD58A2C73B4(iLocal_53, Local_469), unk_0x20CBCBD58A2C73B4(iLocal_53, Local_472), 0) >= 1f)
							{
								iLocal_48 = 3;
								iLocal_122[0] = 0;
								iLocal_122[1] = 0;
							}
							else if ((unk_0x17103F66FBB44C3C() - iLocal_475) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x746960881FB19A89(iLocal_53))
				{
					unk_0x1FE4B6BC95E3B9AD(iLocal_53, 2, 0, 0);
					unk_0x1FE4B6BC95E3B9AD(iLocal_53, 3, 0, 0);
					func_24(unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_47 != 8)
			{
				func_62(8);
			}
			if (unk_0x746960881FB19A89(iLocal_55) && !unk_0x303D473D180EAA17(uLocal_136))
			{
				if (unk_0x9EF11DECA38804B6(iLocal_55) == 0f && (unk_0x17103F66FBB44C3C() - iLocal_475) > 1000)
				{
					func_24(unk_0x77009B1C011405A9(iLocal_55, 1), 1);
					unk_0x83A49C880CB75451(&iLocal_55);
				}
				else if ((unk_0x17103F66FBB44C3C() - iLocal_475) > 5000)
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_29(struct<3> Param0)
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

int func_30()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iLocal_56) && unk_0xBB5C52611DD71292(iLocal_56))
	{
		if (!iLocal_465)
		{
			if (unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iLocal_56, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x6E4DE584BEE4823B(unk_0x77009B1C011405A9(iLocal_56, 1), 0.3f, unk_0xA39FEC2F21781866(joaat("weapon_stickybomb")), 0))
			{
				iLocal_465 = 1;
			}
		}
		iVar0 = 0;
		unk_0x8FEE285DAA01C565(unk_0x77009B1C011405A9(iLocal_56, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_56, 1), 1f, 1) || (unk_0x24E7720869956FA9(2, unk_0x77009B1C011405A9(iLocal_56, 1), 0.3f) && iLocal_465))
		{
			iLocal_116 = 1;
			iVar0 = 1;
		}
		if (unk_0xFD181DDA4D8D6786(iLocal_56) < iLocal_131 && unk_0xE99AF5B1B3F0BB7C(iLocal_56, unk_0x9F92518438215DD0(), 0))
		{
			iLocal_132 = (iLocal_132 + (iLocal_131 - unk_0xFD181DDA4D8D6786(iLocal_56)));
			unk_0x87659527DF5C44B5(iLocal_56);
		}
		if ((unk_0x17103F66FBB44C3C() - iLocal_466) > 200 && unk_0x746960881FB19A89(iLocal_53))
		{
			if (unk_0x111738C952290D55(unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 0f, (1.2195f - 0.27f)), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, fLocal_468, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_466 = unk_0x17103F66FBB44C3C();
				iLocal_467++;
			}
		}
		if (iLocal_467 > 5)
		{
			return 1;
		}
		if (iLocal_132 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_131 = unk_0xFD181DDA4D8D6786(iLocal_56);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x4D18D3502F529C01(5, Param3, Param0) || (unk_0x4D18D3502F529C01(2, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(20, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(4, Param3, Param0)) || (unk_0x4D18D3502F529C01(28, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(32, Param3, Param0)) || unk_0x4D18D3502F529C01(25, Param3, Param0)) || unk_0x4D18D3502F529C01(9, Param3, Param0)) || (unk_0x4D18D3502F529C01(3, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(6, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(0, Param3, Param0)) || unk_0x4D18D3502F529C01(1, Param3, Param0)) || unk_0x4D18D3502F529C01(23, Param3, Param0)) || unk_0x4D18D3502F529C01(34, Param3, Param0)) || unk_0x4D18D3502F529C01(14, Param3, Param0)) || (unk_0x4D18D3502F529C01(30, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(12, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(7, Param3, Param0)) || (unk_0x4D18D3502F529C01(21, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(18, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(15, Param3, Param0)) || unk_0x4D18D3502F529C01(10, Param3, Param0)) || unk_0x4D18D3502F529C01(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x24E7720869956FA9(5, Param6, iParam9) || (unk_0x24E7720869956FA9(2, Param6, iParam9) && !bParam10)) || (unk_0x24E7720869956FA9(20, Param6, iParam9) && !bParam10)) || unk_0x24E7720869956FA9(4, Param6, iParam9)) || (unk_0x24E7720869956FA9(28, Param6, iParam9) && !bParam10)) || unk_0x24E7720869956FA9(32, Param6, iParam9)) || unk_0x24E7720869956FA9(25, Param6, iParam9)) || unk_0x24E7720869956FA9(9, Param6, iParam9)) || (unk_0x24E7720869956FA9(3, Param6, iParam9) && !bParam10)) || (unk_0x24E7720869956FA9(6, Param6, iParam9) && !bParam10)) || unk_0x24E7720869956FA9(0, Param6, iParam9)) || unk_0x24E7720869956FA9(1, Param6, iParam9)) || unk_0x24E7720869956FA9(23, Param6, iParam9)) || unk_0x24E7720869956FA9(34, Param6, iParam9)) || unk_0x24E7720869956FA9(14, Param6, iParam9)) || (unk_0x24E7720869956FA9(30, Param6, iParam9) && !bParam10)) || (unk_0x24E7720869956FA9(12, Param6, iParam9) && !bParam10)) || unk_0x24E7720869956FA9(7, Param6, iParam9)) || (unk_0x24E7720869956FA9(21, Param6, iParam9) && !bParam10)) || (unk_0x24E7720869956FA9(18, Param6, iParam9) && !bParam10)) || unk_0x24E7720869956FA9(15, Param6, iParam9)) || unk_0x24E7720869956FA9(10, Param6, iParam9)) || unk_0x24E7720869956FA9(27, Param6, iParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_32(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0x2E6E8D325977B3EC(uLocal_62))
	{
		if (!bLocal_109)
		{
			if ((!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && unk_0xFC38B241541883D3(iLocal_53, 0)) && !bLocal_120)
			{
				if (!bLocal_108)
				{
					if (!unk_0x2E6E8D325977B3EC(uLocal_59[1]))
					{
						uLocal_59[1] = func_36(iLocal_50[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x2E6E8D325977B3EC(uLocal_59[1]))
					{
						unk_0x0451B5D93A4BDAA0(&(uLocal_59[1]));
					}
					if (!unk_0x2E6E8D325977B3EC(uLocal_58))
					{
						uLocal_58 = func_34(iLocal_53, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_59[1]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_59[1]));
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_58))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_58);
				}
			}
		}
		else
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_59[0]) && unk_0xC1F00AA64FD3CAA1(uLocal_59[0]) != 119)
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_59[0]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_59[1]) && unk_0xC1F00AA64FD3CAA1(uLocal_59[1]) != 119)
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_59[1]));
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_58) && unk_0xC1F00AA64FD3CAA1(uLocal_58) != 119)
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_58);
			}
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
					{
						if (unk_0x44E080690DA76A2A(iLocal_50[iVar0], iLocal_53, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_58))
				{
					uLocal_58 = func_34(iLocal_53, 1, 0);
				}
			}
			else if (unk_0x2E6E8D325977B3EC(uLocal_58))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_58);
			}
			if ((unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0x2E6E8D325977B3EC(uLocal_58)) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 0))
				{
					if (unk_0xDA8AC653AAD36D4F(uLocal_58) != 0)
					{
						unk_0xFBF7E9E330FE936E(uLocal_58, 0);
					}
				}
				else if (unk_0xDA8AC653AAD36D4F(uLocal_58) != 255)
				{
					unk_0xFBF7E9E330FE936E(uLocal_58, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x303D473D180EAA17(uLocal_136) && !unk_0x827151D7B70CB853(iLocal_50[iVar0], 0))
					{
						if (!unk_0x7E4B3ADE683EE23B(iLocal_50[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_50[iVar0], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_47 == 8 && !unk_0x827151D7B70CB853(iLocal_50[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_47 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0x2E6E8D325977B3EC(uLocal_59[iVar0]))
					{
						uLocal_59[iVar0] = func_36(iLocal_50[iVar0], 1, 145);
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uLocal_59[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_59[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x303D473D180EAA17(uLocal_136) && !bLocal_120)
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_63))
				{
					uLocal_63 = func_26(uLocal_136);
				}
			}
			else if (unk_0x2E6E8D325977B3EC(uLocal_63))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_63);
			}
		}
	}
	else if ((unk_0x746960881FB19A89(iLocal_53) && unk_0x746960881FB19A89(iLocal_50[0])) && unk_0x746960881FB19A89(iLocal_50[1]))
	{
		if ((((((!unk_0xC7FF9739199F83C9(iLocal_53) && unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_53, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0xC7FF9739199F83C9(iLocal_50[0]) && unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0xC7FF9739199F83C9(iLocal_50[1]) && unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_53, 50f, 50f, 20f, 0, 1, 0)) || unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_62);
		}
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_59[0]))
	{
		unk_0x49101D6A0E39441B(uLocal_59[0], iLocal_121);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_59[1]))
	{
		unk_0x49101D6A0E39441B(uLocal_59[1], iLocal_121);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_58))
	{
		unk_0x49101D6A0E39441B(uLocal_58, iLocal_121);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_63))
	{
		unk_0x49101D6A0E39441B(uLocal_63, iLocal_121);
	}
	if (!iLocal_121)
	{
		if (bLocal_109 || iLocal_48 == 3)
		{
			iLocal_121 = 0;
		}
	}
}

int func_34(int iParam0, bool bParam1, bool bParam2)
{
	return func_35(iParam0, !bParam1, bParam2);
}

int func_35(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_27(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
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
		unk_0xD4916ED85412C8D9(uVar0, func_27(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_27(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_37()
{
	func_39(9, iLocal_46);
	while (!func_38())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_217();
}

int func_38()
{
	return 1;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_58(iParam0))
	{
		func_57(iParam0, iParam1);
		if (!func_56(51))
		{
			func_52("RE_REWARD", 1, 0, 4000, 10000, func_55(), 0, 138, 0);
			func_51(51);
		}
		if (func_50(iParam0))
		{
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_40(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)
{
	Global_97344 = iParam0;
}

void func_41(int iParam0, var uParam1, var uParam2)
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
		func_47((891 + iParam0), 1, -1, 1);
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
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
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
		func_42();
	}
}

void func_42()
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
		func_46(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_45() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_43();
				}
			}
		}
	}
}

int func_43()
{
	if (func_44(0))
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_45()
{
	return Global_24444;
}

int func_46(int iParam0, int iParam1)
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

int func_47(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_48();
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

int func_48()
{
	return Global_1312737;
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_97358.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
}

int func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_59()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_61()
{
	if (bLocal_110)
	{
		if (unk_0xB16891D2706A2EF7(uLocal_136))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_49 = 0;
}

int func_63()
{
	if (!unk_0x303D473D180EAA17(uLocal_136))
	{
		if (bLocal_108)
		{
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				if (!func_64(iLocal_53))
				{
					if (iLocal_464 == -1)
					{
						iLocal_464 = unk_0x17103F66FBB44C3C();
					}
				}
				else if (iLocal_464 != -1)
				{
					iLocal_464 = -1;
				}
			}
		}
		if (!bLocal_108)
		{
			if (iLocal_129 != -1)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]))
				{
					if (!func_64(iLocal_53))
					{
						if (iLocal_464 == -1)
						{
							iLocal_464 = unk_0x17103F66FBB44C3C();
						}
					}
					else if (iLocal_464 != -1)
					{
						iLocal_464 = -1;
					}
				}
			}
		}
		if (iLocal_464 != -1)
		{
			if ((unk_0x17103F66FBB44C3C() - iLocal_464) > 3000)
			{
				unk_0x995B3705D02B0401(&(iLocal_50[0]));
				unk_0x995B3705D02B0401(&(iLocal_50[1]));
				unk_0xFCD8CBB0DC357C30(iLocal_53, -1000f, 1);
				unk_0x4220BD8C5CDBF540(iLocal_53, 1, 0);
				unk_0x9187463EB4918A4D(&iLocal_53);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_464 != -1)
		{
			iLocal_464 = -1;
		}
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && unk_0x2A488C176D52CCA5(unk_0x2A4F10CF6F80EA9F(uLocal_136), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xC7FF9739199F83C9(iParam0) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_506 == -1)
	{
		iLocal_506 = unk_0x17103F66FBB44C3C();
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		switch (iLocal_49)
		{
			case 0:
				bLocal_109 = true;
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
				{
					if (func_21() < 30f && !unk_0x3E0478C40AB5B38D(Local_139[3 /*10*/]))
					{
						func_4(&Local_139, cLocal_138, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && unk_0x746960881FB19A89(iLocal_55))
					{
						if ((iVar0 != iLocal_129 || bLocal_108) || !unk_0x46A61489C128881A(iLocal_55, iLocal_50[iVar0]))
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_50[iVar0]);
							unk_0xF87DA7F5BA8C7D0F(&uLocal_57);
							if (unk_0x827151D7B70CB853(iLocal_50[iVar0], 0))
							{
								if (iLocal_116)
								{
									if (unk_0x18E6A43566D33720("move_injured_generic"))
									{
										unk_0xB08BAA85EDA206FD(iLocal_50[iVar0], "move_injured_generic", 1048576000);
										iLocal_117[iVar0] = 1;
									}
								}
								unk_0xF811299AF81DB581(0, 0, 256);
							}
							unk_0xD2062A6AC314B85E(0);
							if (iLocal_117[iVar0])
							{
								unk_0xD19636383159AC07(0, unk_0x073B65E051D2F03E(1000, 3000));
							}
							unk_0xF78316EFCA911012(0, unk_0x9F92518438215DD0(), 0, 16);
							unk_0x3179CCC77CBAB31F(uLocal_57);
							unk_0xC7EBE3C9AC83FAAA(iLocal_50[iVar0], uLocal_57);
							unk_0xCD02E3C29B8253A6(&uLocal_57);
						}
						unk_0x64277E0EB39C1162(iLocal_50[iVar0], 6, 0);
						unk_0x64277E0EB39C1162(iLocal_50[iVar0], 0, 1);
						unk_0x64277E0EB39C1162(iLocal_50[iVar0], 1, 0);
						unk_0x9A43E575C1997EF8(iLocal_50[iVar0], 1);
						unk_0x79C17B0FEABE87FB(iLocal_50[iVar0], 1);
						unk_0x4A1AC49BA4A747F7(iLocal_50[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x746960881FB19A89(iLocal_55) && unk_0xBB5C52611DD71292(iLocal_55)) && !unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_50[iLocal_129]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_49++;
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]))
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_50[iLocal_129]);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_57);
						if (unk_0x827151D7B70CB853(iLocal_50[iLocal_129], 0))
						{
							unk_0xF811299AF81DB581(0, 0, 256);
						}
						unk_0xD2062A6AC314B85E(0);
						unk_0xF78316EFCA911012(0, unk_0x9F92518438215DD0(), 0, 16);
						unk_0x3179CCC77CBAB31F(uLocal_57);
						unk_0xC7EBE3C9AC83FAAA(iLocal_50[iLocal_129], uLocal_57);
						unk_0xCD02E3C29B8253A6(&uLocal_57);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
				{
					if (unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
					{
						if (Local_139[3 /*10*/] != iLocal_50[1])
						{
							func_69(&Local_139, 3);
							func_69(&Local_139, 4);
							func_68(&Local_139, 3, iLocal_50[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_50)
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
						{
							if ((iLocal_48 == 2 && !iLocal_122[iVar0]) && !unk_0x0BA451447C3B1A8D(iLocal_53))
							{
								unk_0xF9FF109016228B33(iLocal_50[iVar0], iLocal_53, unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -4f, 0f), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (((unk_0x303D473D180EAA17(uLocal_136) && !iLocal_122[iVar0]) && iLocal_48 == 3) && !bLocal_120)
							{
								unk_0xF9FF109016228B33(iLocal_50[iVar0], iLocal_53, unk_0x2A4F10CF6F80EA9F(uLocal_136), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (bLocal_120)
							{
								if (iLocal_122[iVar0])
								{
									unk_0x32347D2C59769367(iLocal_50[iVar0], 0);
									iLocal_122[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x17103F66FBB44C3C() - iLocal_499)) > unk_0x3250987ED5A577C0(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
							{
								if (func_4(&Local_139, cLocal_138, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_499 = unk_0x17103F66FBB44C3C();
								}
							}
						}
					}
					if (unk_0xFC38B241541883D3(iLocal_53, 0))
					{
						if (!bLocal_108)
						{
							if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 0) && (unk_0x17103F66FBB44C3C() - iLocal_506) > 5000)
							{
								if (func_21() > (30f + (30f / 10f)))
								{
									func_62(7);
								}
								if (func_21() > (30f / 2f) && !func_66())
								{
									if (!bLocal_108)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_47 != 8)
								{
									iLocal_122[0] = 0;
									iLocal_122[1] = 0;
									iLocal_506 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (unk_0x83666F9FB8FEBD4B() > iVar1 && iLocal_117[iVar0])
				{
					unk_0x92C730EF01FAE94A(iLocal_50[iVar0], 1048576000);
					iLocal_117[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_66()
{
	int iVar0;
	
	if ((unk_0x17103F66FBB44C3C() - iLocal_483) > 250)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
				{
					if (unk_0xF160EF76D53E7ADB(iLocal_50[iVar0], unk_0x9F92518438215DD0(), 19) && unk_0xCEC6A26F61687EAE(iLocal_50[iVar0], unk_0x9F92518438215DD0()))
					{
						iLocal_480[iVar0] = 1;
					}
					else
					{
						iLocal_480[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_480[0] || iLocal_480[1]);
}

int func_67()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
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

void func_69(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_70(int iParam0)
{
	bool bVar0;
	
	if (unk_0x746960881FB19A89(iLocal_55))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[iParam0]))
		{
			if (unk_0x46A61489C128881A(iLocal_55, iLocal_50[iParam0]))
			{
				if (unk_0x3C17D9ED0E5F3FCA(iLocal_50[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0xD17241758B91AAED(iLocal_50[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
						unk_0x83A49C880CB75451(&iLocal_55);
					}
				}
				else
				{
					unk_0x4A1AC49BA4A747F7(iLocal_50[iParam0], 1);
					unk_0x7CF15DD8B3815A0D(iLocal_50[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x746960881FB19A89(iLocal_55) || (unk_0x746960881FB19A89(iLocal_55) && !unk_0x46A61489C128881A(iLocal_55, iLocal_50[iParam0])));
	if (bVar0)
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[iParam0]))
		{
			unk_0x4A1AC49BA4A747F7(iLocal_50[iParam0], 0);
		}
	}
	return bVar0;
}

void func_71(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	var uVar14;
	
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		Var0 = { func_29(unk_0xA9C270DECAAAE361(iLocal_53, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1))) };
		fVar3 = ((unk_0xE691E4EA6B4440C6(iLocal_53) + unk_0x4F034F83AF91EC27(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0xE691E4EA6B4440C6(iLocal_53) + unk_0x4F034F83AF91EC27(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x81D32A4E7E765EA7(unk_0x77009B1C011405A9(iLocal_53, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x81D32A4E7E765EA7(unk_0x77009B1C011405A9(iLocal_53, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_500) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_50)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_50)
			{
				if ((((((!unk_0x3E0478C40AB5B38D(iLocal_50[iVar12]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x17103F66FBB44C3C() - iLocal_503[iVar12]) > 1000) && !unk_0x827151D7B70CB853(iLocal_50[iVar12], 0)) && !iLocal_480[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_500 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
						}
						unk_0xF87DA7F5BA8C7D0F(&uVar14);
						if (func_66() || func_32(Local_500))
						{
							unk_0xDF3FE1A24386C01F(0, Var5[iVar12 /*3*/], unk_0x9F92518438215DD0(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 1);
						}
						else
						{
							unk_0xC09BA3382ED3024E(0, Var5[iVar12 /*3*/], Local_500, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x1E0FCE815D17DDA5(0, Local_500, -1, 1, 0);
						}
						unk_0x3179CCC77CBAB31F(uVar14);
						unk_0xC7EBE3C9AC83FAAA(iLocal_50[iVar12], uVar14);
						unk_0xCD02E3C29B8253A6(&uVar14);
					}
					iLocal_503[iVar12] = unk_0x17103F66FBB44C3C();
				}
				iVar12++;
			}
		}
	}
}

void func_72(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_73(int iParam0)
{
	float fVar0;
	
	if (unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!bLocal_108)
				{
					unk_0x4A1AC49BA4A747F7(iParam0, 1);
					unk_0x32D18ECD9E6F9BE2(iParam0);
					Local_484 = { unk_0x038249BAB926B732(iLocal_53, 0) };
					Local_487 = { unk_0x045015AED79BD50E(iLocal_53, 2) };
					Local_490 = { unk_0x912936BEF22F435D("random@security_van", "sec_case_into_van_panic", Local_484, Local_487, 0, 2) };
					if (((!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0x0BA451447C3B1A8D(iLocal_50[1])) && !unk_0x3E0478C40AB5B38D(iLocal_50[0])) && !unk_0x0BA451447C3B1A8D(iLocal_50[0]))
					{
						if (func_21() < 20f)
						{
							if (bLocal_109)
							{
								func_4(&Local_139, cLocal_138, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x303D473D180EAA17(uLocal_136))
						{
							if (bLocal_109)
							{
								unk_0x27DF0A5AA993D7B6(iParam0, unk_0x2A4F10CF6F80EA9F(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x27DF0A5AA993D7B6(iParam0, unk_0x2A4F10CF6F80EA9F(uLocal_136), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
					else if (!unk_0x3E0478C40AB5B38D(iParam0))
					{
						if (unk_0x303D473D180EAA17(uLocal_136))
						{
							unk_0x27DF0A5AA993D7B6(iParam0, unk_0x2A4F10CF6F80EA9F(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
				}
				else
				{
					iLocal_49 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x3E0478C40AB5B38D(iParam0) && unk_0x303D473D180EAA17(uLocal_136))
				{
					if ((unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam0, 1), unk_0x2A4F10CF6F80EA9F(uLocal_136), 1) < 2f && !unk_0xBD280C076BC69C97(iParam0)) && (unk_0x17103F66FBB44C3C() - iLocal_135) > 3000)
					{
						if (unk_0x860AFAABAECF6379(iParam0, 4))
						{
							unk_0x3E5529EA76D127DA(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0xCFEE915F16B66662(uLocal_136);
						func_79(iParam0);
						unk_0x3E5529EA76D127DA(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_110 = false;
						iLocal_129 = iLocal_128;
						iLocal_49++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x3E0478C40AB5B38D(iParam0) && unk_0xFC38B241541883D3(iLocal_53, 0))
				{
					if (unk_0xE962BD784DD0E442(iParam0, 713668775) != 1)
					{
						if (bLocal_109)
						{
							unk_0x27DF0A5AA993D7B6(iParam0, Local_490, 2f, -1, 0.1f, 512, Local_487.f_2);
						}
						else
						{
							unk_0x27DF0A5AA993D7B6(iParam0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
						}
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x3E0478C40AB5B38D(iParam0))
				{
					if (unk_0x303D473D180EAA17(uLocal_136))
					{
						iLocal_49 = 0;
					}
					else
					{
						fVar0 = unk_0xE691E4EA6B4440C6(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_487.f_2 > 180f)
						{
							Local_487.f_2 = (Local_487.f_2 - 360f);
						}
						if (Local_487.f_2 <= -180f)
						{
							Local_487.f_2 = (Local_487.f_2 + 360f);
						}
						if (unk_0x2A488C176D52CCA5(Local_490, unk_0x77009B1C011405A9(iParam0, 1)) < 0.3f)
						{
							if (unk_0xE3DAC530D2CCDAE3((fVar0 - Local_487.f_2)) < 15f)
							{
								unk_0xD04F8A29CDD3388A(iParam0, -1056964608);
								unk_0x32D18ECD9E6F9BE2(iParam0);
								bLocal_495 = true;
								iLocal_493 = unk_0x8E83718430E22797(Local_484, Local_487, 2);
								if (bLocal_109)
								{
									unk_0x6C4954C76B25F972(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xB3ABC7B97480C0A5(iLocal_53, iLocal_493, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x6C4954C76B25F972(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xB3ABC7B97480C0A5(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xF0875A1DC909B469(iParam0, 0, 0);
								iLocal_49++;
							}
						}
						else if (unk_0xC7FF9739199F83C9(iParam0) && !unk_0xE298336AB6E66F7E(Local_484, 2f))
						{
							unk_0xFA51DC22F6E34F6E(iParam0, Local_484, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xAA446425C3A969F9(iLocal_493))
				{
					if (bLocal_109)
					{
						fLocal_507 = 0.42f;
					}
					else
					{
						fLocal_507 = 0.3893f;
					}
					if (bLocal_109)
					{
						fLocal_508 = 0.52f;
					}
					else
					{
						fLocal_508 = 0.546243f;
					}
					if (!bLocal_108)
					{
						if ((unk_0x746960881FB19A89(iLocal_55) && unk_0x46A61489C128881A(iLocal_55, iParam0)) && unk_0xF9F2ADAEAB471E70(iLocal_493) > fLocal_507)
						{
							if (!unk_0x46A61489C128881A(iLocal_55, iLocal_53))
							{
								unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
								unk_0x4220BD8C5CDBF540(iLocal_55, 0, 0);
								unk_0x80BA810554025DFF(iLocal_55, iLocal_53, 0, unk_0xA9C270DECAAAE361(iLocal_53, unk_0x77009B1C011405A9(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xF9F2ADAEAB471E70(iLocal_493) > fLocal_508)
					{
						unk_0xFCD8CBB0DC357C30(iLocal_53, -4f, 1);
						unk_0x32D18ECD9E6F9BE2(iParam0);
						if (unk_0x746960881FB19A89(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x7B6A36C278A92381(iLocal_53, 2, 1);
							unk_0x7B6A36C278A92381(iLocal_53, 3, 1);
							unk_0x4A1AC49BA4A747F7(iParam0, 0);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xAA446425C3A969F9(iLocal_493) && unk_0xF9F2ADAEAB471E70(iLocal_493) > fLocal_508) || !unk_0xAA446425C3A969F9(iLocal_493))
				{
					if (!bLocal_109)
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
						{
							unk_0x4073360CA020BB84(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_49++;
				}
				break;
			
			case 6:
				if (unk_0xFC38B241541883D3(iLocal_53, 0))
				{
					if (bLocal_109)
					{
						func_62(6);
					}
					else
					{
						func_62(4);
					}
				}
				else
				{
					func_62(8);
				}
				break;
			}
	}
	if (!unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!bLocal_108)
		{
			if ((((((func_21() < 10f && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6)) && func_66()) || ((func_21() < 20f && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6)) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))) || (func_21() < 5f && bLocal_109)) || (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_74(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))) || ((!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0x746960881FB19A89(unk_0x228A016F863DED95())) && func_74(unk_0x228A016F863DED95())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_47 != 7)
	{
		if (bLocal_108)
		{
			if (unk_0xAA446425C3A969F9(iLocal_493))
			{
				unk_0xFCD8CBB0DC357C30(iLocal_53, -8f, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam0))
		{
			unk_0x4A1AC49BA4A747F7(iParam0, 0);
		}
	}
	if ((unk_0xFC38B241541883D3(iLocal_53, 0) && iLocal_47 != 7) && unk_0xAA446425C3A969F9(iLocal_493))
	{
		unk_0xFCD8CBB0DC357C30(iLocal_53, -8f, 1);
	}
}

int func_74(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (unk_0x746960881FB19A89(iParam0) && unk_0x746960881FB19A89(iLocal_53))
	{
		uVar59 = 4;
		unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iLocal_53, fVar73, 1.5f, 0f) };
		if (!bLocal_108)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0x44E080690DA76A2A(iLocal_50[1], iLocal_53, 1))
		{
			if (func_75(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_75(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_76(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_76(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_78(fVar0, fVar1) || fVar11 > func_77(fVar0, fVar1)) || fVar11 < func_78(fVar2, fVar3)) || fVar11 > func_77(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_78(fVar4, fVar5) || fVar12 > func_77(fVar4, fVar5)) || fVar12 < func_78(fVar6, fVar7)) || fVar12 > func_77(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_77(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_78(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_79(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x746960881FB19A89(iLocal_55))
		{
			iLocal_55 = unk_0xA7DA1E6D4C99864B(iLocal_104, Local_76, 1, 1, 0);
			unk_0x78D5F615D8984F4E(iLocal_55, 0);
		}
		if (unk_0x746960881FB19A89(iLocal_55))
		{
			unk_0x80BA810554025DFF(iLocal_55, iParam0, unk_0xB8BF0926F5E41F7D(iParam0, 28422), Local_89, Local_92, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_49)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
				{
					unk_0x4A1AC49BA4A747F7(iLocal_50[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_109 = true;
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				if (unk_0x746960881FB19A89(func_83()))
				{
					if (!unk_0x3E0478C40AB5B38D(func_83()))
					{
						if (unk_0xB5BBEB12C77EE430(iLocal_53, -1) != func_83() && unk_0x4A33023BC86AAA7F(iLocal_53, -1))
						{
							unk_0x4073360CA020BB84(func_83(), iLocal_53, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && func_83() != iLocal_50[1])
				{
					if (unk_0xB5BBEB12C77EE430(iLocal_53, 0) != iLocal_50[1] && unk_0x4A33023BC86AAA7F(iLocal_53, 0))
					{
						unk_0x4073360CA020BB84(iLocal_50[1], iLocal_53, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_49++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (unk_0x746960881FB19A89(func_83()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					unk_0x7FC0EEAECC1615C3(func_83(), iLocal_53, unk_0x9F92518438215DD0(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x746960881FB19A89(func_83()))
				{
					unk_0xBBB86C3DA83A56F3(func_83(), iLocal_53, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 3:
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				if (unk_0x9EF11DECA38804B6(iLocal_53) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x746960881FB19A89(iLocal_53) && unk_0x746960881FB19A89(unk_0xB5BBEB12C77EE430(iLocal_53, -1))) && (unk_0x0BA451447C3B1A8D(unk_0xB5BBEB12C77EE430(iLocal_53, -1)) || unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iLocal_53, -1))))
	{
		iVar1 = 0;
		if (unk_0xB5BBEB12C77EE430(iLocal_53, -1) == iLocal_50[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_53, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 100f)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar1]) && unk_0xE962BD784DD0E442(iLocal_50[iVar1], 242628503) != 1)
			{
				unk_0xA334EDA2335A13CA(iLocal_50[iVar1], 2, 1);
				unk_0xF87DA7F5BA8C7D0F(&uVar2);
				unk_0xE3B52F7614505C04(0, iLocal_53);
				unk_0x7FC0EEAECC1615C3(0, iLocal_53, unk_0x9F92518438215DD0(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x3179CCC77CBAB31F(uVar2);
				unk_0xC7EBE3C9AC83FAAA(iLocal_50[iVar1], uVar2);
				unk_0xCD02E3C29B8253A6(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0xFC38B241541883D3(iLocal_53, 0) || unk_0x303D473D180EAA17(uLocal_136)) || iLocal_48 == 3) || unk_0xED6198B6F71F1E6F(iLocal_53, 0, 7000)) || unk_0xED6198B6F71F1E6F(iLocal_53, 3, 30000)) || unk_0xED6198B6F71F1E6F(iLocal_53, 2, 30000)) || unk_0xED6198B6F71F1E6F(iLocal_53, 1, 40000)) || (iLocal_49 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x746960881FB19A89(iLocal_53))
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_53))
		{
			if (((((unk_0xFD181DDA4D8D6786(iLocal_53) < 300 || unk_0x9D878480FA8925BB(iLocal_53) < 200f) || (unk_0xD8E4239907299552(iLocal_53, 0, 0) && unk_0xD8E4239907299552(iLocal_53, 1, 0))) || (unk_0xD8E4239907299552(iLocal_53, 4, 0) && unk_0xD8E4239907299552(iLocal_53, 5, 0))) || (unk_0xD8E4239907299552(iLocal_53, 0, 0) && unk_0xD8E4239907299552(iLocal_53, 4, 0))) || (unk_0xD8E4239907299552(iLocal_53, 1, 0) && unk_0xD8E4239907299552(iLocal_53, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x0BA451447C3B1A8D(iLocal_50[0]))
		{
			if (!unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0x0BA451447C3B1A8D(iLocal_50[1]))
		{
			if (!unk_0x44E080690DA76A2A(iLocal_50[1], iLocal_53, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_83()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x0BA451447C3B1A8D(iLocal_50[0]))
	{
		return iLocal_50[0];
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0x0BA451447C3B1A8D(iLocal_50[1]))
	{
		return iLocal_50[1];
	}
	return 0;
}

void func_84()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_108)
			{
				if (unk_0x746960881FB19A89(iLocal_55) && unk_0xBB5C52611DD71292(iLocal_55))
				{
					unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
				}
			}
			if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_139, cLocal_138, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
					{
						unk_0x64277E0EB39C1162(iLocal_50[iVar0], 17, 1);
						unk_0xA334EDA2335A13CA(iLocal_50[iVar0], 128, 1);
						unk_0xA334EDA2335A13CA(iLocal_50[iVar0], 16, 1);
						unk_0x64277E0EB39C1162(iLocal_50[iVar0], 1, 0);
						unk_0xF87DA7F5BA8C7D0F(&uVar1);
						if (unk_0x827151D7B70CB853(iLocal_50[iVar0], 1))
						{
							unk_0xF811299AF81DB581(iLocal_50[iVar0], 0, 256);
						}
						unk_0x722E6B3A5162A6BB(0, unk_0x9F92518438215DD0(), 300f, -1, 0, 0);
						unk_0x3179CCC77CBAB31F(uVar1);
						unk_0xC7EBE3C9AC83FAAA(iLocal_50[iVar0], uVar1);
						unk_0xCD02E3C29B8253A6(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_112 = true;
			iLocal_49++;
			break;
		
		case 1:
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				if (func_85(iLocal_53, 1, 0, 0))
				{
					iLocal_49++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x95A70C0B34435CA8(iParam0) + 1;
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x4A33023BC86AAA7F(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB5BBEB12C77EE430(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x9F92518438215DD0())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3E0478C40AB5B38D(iVar2))
					{
						if (unk_0x2FCB242469087013(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xB5BBEB12C77EE430(iParam0, (iVar0 - 1));
					if (!unk_0x3E0478C40AB5B38D(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_86()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_4(&Local_139, cLocal_138, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x746960881FB19A89(iLocal_55) && unk_0xBB5C52611DD71292(iLocal_55))
					{
						if (!unk_0x46A61489C128881A(iLocal_55, iLocal_50[0]))
						{
							func_87(0);
						}
						else
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_50[0]);
						}
						if (!unk_0x46A61489C128881A(iLocal_55, iLocal_50[1]))
						{
							func_87(1);
						}
						else
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_50[1]);
						}
						iLocal_49++;
					}
					else
					{
						func_87(0);
						func_87(1);
						iLocal_49 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]))
					{
						func_87(iLocal_129);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!func_67())
				{
					if (func_4(&Local_139, cLocal_138, "RESEC_CAR2", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if ((unk_0x83666F9FB8FEBD4B() > 12000 && !func_67()) && func_4(&Local_139, cLocal_138, "RESEC_CAR3", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_49++;
				}
				break;
			
			case 4:
				if ((unk_0x83666F9FB8FEBD4B() > 7000 && !func_67()) && func_4(&Local_139, cLocal_138, "RESEC_CAR4", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_49 > 0)
	{
		func_71(-1, 1);
	}
	if (unk_0x746960881FB19A89(iLocal_54))
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_54) && unk_0xFC38B241541883D3(iLocal_53, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_54, 1), unk_0x77009B1C011405A9(iLocal_53, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x0BA451447C3B1A8D(iLocal_54) || !unk_0xFC38B241541883D3(iLocal_54, 0)) || (!unk_0xA21A67D28893E707(iLocal_54, 1119092736) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_54, 1)))
		{
			if (!func_74(iLocal_54))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_50[0], unk_0x9F92518438215DD0(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_50[1], unk_0x9F92518438215DD0(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (iLocal_115)
		{
			func_62(8);
		}
	}
	if (bLocal_120)
	{
		func_62(8);
	}
	if ((!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && func_66()) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 7))
	{
		func_62(2);
	}
	if (!unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		func_62(5);
	}
}

void func_87(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[iParam0]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_50[iParam0]);
		unk_0xF87DA7F5BA8C7D0F(&uLocal_57);
		if (unk_0x827151D7B70CB853(iLocal_50[iParam0], 0))
		{
			unk_0xF811299AF81DB581(0, 0, 256);
		}
		unk_0xD2062A6AC314B85E(0);
		unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 0, 2);
		unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 0);
		unk_0x3179CCC77CBAB31F(uLocal_57);
		unk_0xC7EBE3C9AC83FAAA(iLocal_50[iParam0], uLocal_57);
		unk_0xCD02E3C29B8253A6(&uLocal_57);
		if (iLocal_130 == 0)
		{
			iLocal_130 = unk_0xD0906E5C69FAC157(116, unk_0x77009B1C011405A9(iLocal_50[iParam0], 1), -1082130432);
		}
	}
}

void func_88()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_49)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
			{
				unk_0x4A1AC49BA4A747F7(iLocal_50[0], 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
			{
				unk_0x4A1AC49BA4A747F7(iLocal_50[1], 1);
			}
			if (func_95())
			{
				if (func_4(&Local_139, cLocal_138, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (func_94() || func_93())
				{
					func_4(&Local_139, cLocal_138, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
				{
					func_4(&Local_139, cLocal_138, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x746960881FB19A89(iLocal_55) && unk_0xBB5C52611DD71292(iLocal_55))
				{
					if (!unk_0x46A61489C128881A(iLocal_55, iLocal_50[0]))
					{
						func_87(0);
					}
					else
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_50[0]);
					}
					if (!unk_0x46A61489C128881A(iLocal_55, iLocal_50[1]))
					{
						func_87(1);
					}
					else
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_50[1]);
					}
					iLocal_49++;
				}
				else
				{
					func_87(0);
					func_87(1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_129))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[iLocal_129]))
				{
					func_87(iLocal_129);
				}
				iLocal_49++;
			}
			break;
		
		case 2:
			if (!func_92())
			{
				if (!func_91(iLocal_53, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
				{
					bVar0 = true;
				}
				else if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					unk_0xC1B1E9A034A63A62(7000);
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (func_94())
					{
						bVar0 = true;
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (func_93())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_50)
				{
					if (!func_91(iLocal_50[iVar1], 1000) && (func_21() < 2f && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x0BA451447C3B1A8D(iLocal_50[iVar1]))
					{
						if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_50[iVar1]) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_50[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x17103F66FBB44C3C() - iLocal_499)) > unk_0x3250987ED5A577C0(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_499 = unk_0x17103F66FBB44C3C();
						}
					}
				}
				if (bVar0)
				{
					func_89();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_50)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && unk_0x746960881FB19A89(iLocal_50[iVar2]))
		{
			if ((unk_0x3E0478C40AB5B38D(iLocal_50[iVar2]) || unk_0x0BA451447C3B1A8D(iLocal_50[iVar2])) && unk_0xE99AF5B1B3F0BB7C(iLocal_50[iVar2], unk_0x9F92518438215DD0(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x3E0478C40AB5B38D(iLocal_50[0]) || unk_0x3E0478C40AB5B38D(iLocal_50[1])) || bLocal_120)
	{
		func_62(8);
	}
	if ((unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && func_66())
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_53, unk_0x9F92518438215DD0(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		func_62(5);
	}
	if ((!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6)) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_480[0] && !iLocal_480[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_89()
{
	Global_14558 = 0;
	func_90();
}

void func_90()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x746960881FB19A89(iParam0))
		{
			if ((unk_0x4E178F5D4155391A(iParam0) && !unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0))) || (unk_0x2B1914308D0376C8(iParam0) && unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam0, 1)) > fLocal_497)
				{
					iVar0 = 1;
				}
				if ((unk_0x17103F66FBB44C3C() - iLocal_498) > iParam1)
				{
					fLocal_497 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam0, 1));
					iLocal_498 = unk_0x17103F66FBB44C3C();
				}
			}
		}
	}
	return iVar0;
}

int func_92()
{
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_53, 20f, 20f, 5f, 0, 1, 0) && !unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 1.7532f, 0.5984f), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
			{
				if ((!unk_0x44E080690DA76A2A(iLocal_50[iVar0], iLocal_53, 0) && unk_0x5E4A8512F7328F61(unk_0x9F92518438215DD0(), iLocal_53)) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_94()
{
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()) == iLocal_53)
		{
			if (unk_0x69ADCCC220CF0BD5(unk_0x9F92518438215DD0()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && unk_0x5093D6F9140AD109(iLocal_50[0], unk_0x9F92518438215DD0(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && unk_0x5093D6F9140AD109(iLocal_50[1], unk_0x9F92518438215DD0(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_96(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_97(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_98(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_98(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (!unk_0x66ABEB57BE23A1E8())
	{
		if (func_108(uParam0, bParam6, bParam8, 0))
		{
			func_107(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_103(iVar0))
			{
				if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if ((unk_0xE298336AB6E66F7E(Param1, 1f) && !unk_0xC9EED58014EF1F40()) && uParam7)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_102(1);
							}
						}
					}
				}
			}
		}
		else if (func_103(iVar0))
		{
			if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
			{
				if ((unk_0xE298336AB6E66F7E(Param1, 1f) && !unk_0xC9EED58014EF1F40()) && uParam7)
				{
					if (!func_96(iVar0))
					{
						func_123(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
						{
							func_102(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x471A7F8C908126F0(iVar0))
		{
			if (func_96(iVar0) && unk_0xC9EED58014EF1F40())
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
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				func_121(uParam0, iVar0, 1);
			}
		}
		if (!func_108(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_101(uParam0))
			{
				func_99(uParam0);
			}
		}
	}
}

void func_99(var uParam0)
{
	if (func_100(unk_0x9F92518438215DD0()))
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

int func_100(int iParam0)
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

int func_101(var uParam0)
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

int func_102(bool bParam0)
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

int func_103(char* sParam0)
{
	if (!func_104(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_102(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_102(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_102(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_106(0))
	{
		return 0;
	}
	if (func_105())
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

bool func_105()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_106(int iParam0)
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

void func_107(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x3229F8D82C561641(0);
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
	unk_0x80B0B7B44374752B(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x284B09A617F0967C(unk_0x9F92518438215DD0(), Param1, -1, iVar2, iVar3);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_112(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_101(uParam0))
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
						if (!func_112(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_112(bParam1, bParam2, bParam3))
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
					if (!func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_111(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
				else if (!func_112(bParam1, bParam2, bParam3))
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
						if (func_110(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_109(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_109(bParam1, bParam2, bParam3))
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
					else if (func_110(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_101(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_104(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_113();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_109(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_110(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_111(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

void func_113()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_116(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_116(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (func_100(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
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
			if (func_108(uParam0, bParam7, bParam9, 0))
			{
				func_117(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_96(iVar0))
							{
								func_123(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_102(1);
								}
							}
						}
					}
				}
			}
			else if (func_103(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_102(1);
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
				if (func_96(sParam5))
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
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			if (!func_108(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_101(uParam0))
				{
					func_99(uParam0);
				}
			}
		}
	}
	else
	{
		func_121(uParam0, iVar0, 0);
	}
}

void func_117(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_121(uParam0, 0, 0);
	}
	if (func_120(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			uVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(uVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_118())
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

bool func_118()
{
	return func_119(unk_0xCFC72E446B0B3AD7());
}

int func_119(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_120(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_121(var uParam0, int iParam1, int iParam2)
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
		if (func_96(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

void func_122(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_6), iParam0);
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

bool func_124(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_6, iParam0);
}

int func_125(int iParam0)
{
	if (func_128())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_50(Global_97347))
		{
			func_126(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_50(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
		}
		return 1;
	}
	return 0;
}

void func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_123(func_127(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_123(func_127(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_123(func_127(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
				}
			}
			break;
	}
}

char* func_127(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_128()
{
	switch (func_129(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_129(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_133(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_131(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_130(uParam0, iParam4);
		}
	}
	return 2;
}

void func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_131(int iParam0)
{
	return func_132(iParam0, Global_34913);
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_131(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_134()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_49)
	{
		case 0:
			if (unk_0xFC38B241541883D3(iLocal_53, 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
				{
					unk_0x64277E0EB39C1162(iLocal_50[0], 6, 1);
					unk_0x64277E0EB39C1162(iLocal_50[1], 6, 1);
					unk_0x4A1AC49BA4A747F7(iLocal_50[0], 1);
					unk_0x4A1AC49BA4A747F7(iLocal_50[1], 1);
					if (unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 0) && unk_0x44E080690DA76A2A(iLocal_50[1], iLocal_53, 0))
					{
						if (iLocal_46 == 2)
						{
							unk_0xF87DA7F5BA8C7D0F(&uVar0);
							unk_0xC96425701AF2C9C4(0, iLocal_53, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAFFE01EF7078CAD9(0, iLocal_53, 10f, 786603);
							unk_0x3179CCC77CBAB31F(uVar0);
							unk_0xC7EBE3C9AC83FAAA(iLocal_50[0], uVar0);
							unk_0xCD02E3C29B8253A6(&uVar0);
							iLocal_49++;
						}
						else if (iLocal_46 == 4)
						{
							unk_0xF87DA7F5BA8C7D0F(&uVar1);
							unk_0xC96425701AF2C9C4(0, iLocal_53, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAFFE01EF7078CAD9(0, iLocal_53, 10f, 786603);
							unk_0x3179CCC77CBAB31F(uVar1);
							unk_0xC7EBE3C9AC83FAAA(iLocal_50[0], uVar1);
							unk_0xCD02E3C29B8253A6(&uVar1);
							iLocal_49++;
						}
						else if (iLocal_46 == 7)
						{
							unk_0xF87DA7F5BA8C7D0F(&uVar2);
							unk_0xC96425701AF2C9C4(0, iLocal_53, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xAFFE01EF7078CAD9(0, iLocal_53, 10f, 786603);
							unk_0x3179CCC77CBAB31F(uVar2);
							unk_0xC7EBE3C9AC83FAAA(iLocal_50[0], uVar2);
							unk_0xCD02E3C29B8253A6(&uVar2);
							iLocal_49++;
						}
						else
						{
							unk_0xAFFE01EF7078CAD9(iLocal_50[0], iLocal_53, 10f, 786603);
							iLocal_49++;
						}
					}
					else
					{
						if (!unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 0) && unk_0xE962BD784DD0E442(iLocal_50[0], -1794415470) != 1)
						{
							unk_0x4073360CA020BB84(iLocal_50[0], iLocal_53, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x44E080690DA76A2A(iLocal_50[1], iLocal_53, 0) && unk_0xE962BD784DD0E442(iLocal_50[1], -1794415470) != 1)
						{
							unk_0x4073360CA020BB84(iLocal_50[1], iLocal_53, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_138() || func_137()) || func_94()) || func_93()) || func_136()) || func_135())
			{
				if (func_21() < 20f)
				{
					func_89();
					func_4(&Local_139, cLocal_138, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_50)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar3]) && !unk_0x0BA451447C3B1A8D(iLocal_50[iVar3]))
					{
						if (unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()) && unk_0xBCBBB7902DEFA79B(iLocal_50[iVar3]))
						{
							func_62(8);
						}
					}
					else
					{
						func_62(6);
					}
					iVar3++;
				}
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_47 == 4)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x6C814099753EBFE1("PLAYER HAS PROJECTILE WEAPON", unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 0, 0, 255, 255);
				if ((unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()) && !unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -3.44f, -3f), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -3.44f, -3f), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x0B09427B577468E8("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_53, 1)) < 225f)
				{
					unk_0x0B09427B577468E8("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
				{
				}
			}
		}
		if (((unk_0xFC38B241541883D3(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_53, 1), 25f, 0)) || (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_50[0], 1), 20f, 0))) || (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_50[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_47 != 4)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
			{
				unk_0x64277E0EB39C1162(iLocal_50[0], 6, 0);
				unk_0x4A1AC49BA4A747F7(iLocal_50[0], 0);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
			{
				unk_0x64277E0EB39C1162(iLocal_50[1], 6, 0);
				unk_0x4A1AC49BA4A747F7(iLocal_50[1], 0);
			}
		}
	}
}

int func_135()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7())) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) - unk_0x77009B1C011405A9(iLocal_53, 1) };
		Var3 = { unk_0x83A30AB34278DD93(iLocal_53) };
		Var6 = { unk_0xA9C270DECAAAE361(iLocal_53, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_53) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_53)) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_50[0])) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_50[1]))) && unk_0xE3DAC530D2CCDAE3(unk_0x2DFCF5504EF3D1B9(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x2DFCF5504EF3D1B9(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if ((unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, 2.7f, 7f, -2f), unk_0x20CBCBD58A2C73B4(iLocal_53, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, -2.7f, 7f, -2f), unk_0x20CBCBD58A2C73B4(iLocal_53, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 7f, -2f), unk_0x20CBCBD58A2C73B4(iLocal_53, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iLocal_53, 0) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
			{
				iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			}
		}
		else if (unk_0x746960881FB19A89(unk_0x228A016F863DED95()))
		{
			iVar0 = unk_0x228A016F863DED95();
		}
		if (unk_0x746960881FB19A89(iVar0) && unk_0x746960881FB19A89(iLocal_53))
		{
			return ((unk_0xFC38B241541883D3(iVar0, 0) && unk_0x30281E710B12FB9F(iVar0, iLocal_53)) && unk_0x9EF11DECA38804B6(iVar0) > 10f);
		}
	}
	return 0;
}

int func_138()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (iLocal_115)
		{
			return 1;
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) || unk_0x0BA451447C3B1A8D(iLocal_50[0]))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_50[0], unk_0x9F92518438215DD0(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) || unk_0x0BA451447C3B1A8D(iLocal_50[1]))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_50[1], unk_0x9F92518438215DD0(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139()
{
	float fVar0;
	
	if ((!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && !unk_0x3E0478C40AB5B38D(iLocal_50[1])) && unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				Local_484 = { unk_0x038249BAB926B732(iLocal_53, 0) };
				Local_487 = { unk_0x045015AED79BD50E(iLocal_53, 2) };
				Local_490 = { unk_0x912936BEF22F435D("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				bLocal_495 = false;
				iLocal_496 = 0;
				unk_0x77C765087051EDD6(iLocal_53);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_57);
				unk_0xD19636383159AC07(0, 5000);
				unk_0x27DF0A5AA993D7B6(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
				unk_0x70A8B8D6374F080F(0, Local_487.f_2, 0);
				unk_0x3179CCC77CBAB31F(uLocal_57);
				unk_0xC7EBE3C9AC83FAAA(iLocal_50[1], uLocal_57);
				unk_0xCD02E3C29B8253A6(&uLocal_57);
				iLocal_49++;
				break;
			
			case 1:
				Local_484 = { unk_0x038249BAB926B732(iLocal_53, 0) };
				Local_487 = { unk_0x045015AED79BD50E(iLocal_53, 2) };
				Local_490 = { unk_0x912936BEF22F435D("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				if (!unk_0xAA446425C3A969F9(iLocal_494))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_76) < 22500f && unk_0x6E87145D46A47D3E(iLocal_53))
					{
						iLocal_494 = unk_0x8E83718430E22797(Local_484, Local_487, 2);
						unk_0x6C4954C76B25F972(iLocal_50[0], iLocal_494, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0x25821CAAB3B8EF73(iLocal_494, 1);
					}
				}
				if (unk_0xE962BD784DD0E442(iLocal_50[1], 242628503) != 1)
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_57);
					unk_0x27DF0A5AA993D7B6(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
					unk_0x70A8B8D6374F080F(0, Local_487.f_2, 0);
					unk_0x3179CCC77CBAB31F(uLocal_57);
					unk_0xC7EBE3C9AC83FAAA(iLocal_50[1], uLocal_57);
					unk_0xCD02E3C29B8253A6(&uLocal_57);
				}
				fVar0 = unk_0xE691E4EA6B4440C6(iLocal_50[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_487.f_2 > 180f)
				{
					Local_487.f_2 = (Local_487.f_2 - 360f);
				}
				if (Local_487.f_2 <= -180f)
				{
					Local_487.f_2 = (Local_487.f_2 + 360f);
				}
				if (unk_0xE3DAC530D2CCDAE3((fVar0 - Local_487.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_490, unk_0x77009B1C011405A9(iLocal_50[1], 1)) < 0.2f)
				{
					unk_0xD04F8A29CDD3388A(iLocal_50[1], -1056964608);
					unk_0x32D18ECD9E6F9BE2(iLocal_50[1]);
					bLocal_495 = true;
					iLocal_493 = unk_0x8E83718430E22797(Local_484, Local_487, 2);
					unk_0x6C4954C76B25F972(iLocal_50[1], iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xB3ABC7B97480C0A5(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!iLocal_105)
				{
					if (((unk_0xAA446425C3A969F9(iLocal_493) && unk_0xF9F2ADAEAB471E70(iLocal_493) > 0.09f) && unk_0xF9F2ADAEAB471E70(iLocal_493) < 0.11f) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_139, cLocal_138, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_105 = 1;
							}
						}
					}
				}
				if (unk_0xAA446425C3A969F9(iLocal_493))
				{
					if (!bLocal_108)
					{
						if ((unk_0x746960881FB19A89(iLocal_55) && unk_0x46A61489C128881A(iLocal_55, iLocal_50[1])) && unk_0xF9F2ADAEAB471E70(iLocal_493) > 0.3793f)
						{
							if (!unk_0x46A61489C128881A(iLocal_55, iLocal_53))
							{
								unk_0x8ED1C81168F4A10C(iLocal_55, 1, 1);
								unk_0x4220BD8C5CDBF540(iLocal_55, 0, 0);
								unk_0x80BA810554025DFF(iLocal_55, iLocal_53, 0, unk_0xA9C270DECAAAE361(iLocal_53, unk_0x77009B1C011405A9(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xF9F2ADAEAB471E70(iLocal_493) > 0.546243f)
					{
						unk_0xFCD8CBB0DC357C30(iLocal_53, -4f, 1);
						if (unk_0x746960881FB19A89(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x7B6A36C278A92381(iLocal_53, 2, 1);
							unk_0x7B6A36C278A92381(iLocal_53, 3, 1);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_105)
				{
					if (((unk_0xAA446425C3A969F9(iLocal_493) && unk_0xF9F2ADAEAB471E70(iLocal_493) > 0.56f) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_105 = 1;
						}
					}
				}
				if (!iLocal_496)
				{
					if ((unk_0xAA446425C3A969F9(iLocal_493) && unk_0xF9F2ADAEAB471E70(iLocal_493) > 0.6f) || !unk_0xAA446425C3A969F9(iLocal_493))
					{
						if (unk_0xAA446425C3A969F9(iLocal_494))
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_50[0]);
							iLocal_494 = unk_0x8E83718430E22797(Local_484, Local_487, 2);
							unk_0x6C4954C76B25F972(iLocal_50[0], iLocal_494, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_496 = 1;
					}
				}
				else if ((unk_0xAA446425C3A969F9(iLocal_494) && unk_0xF9F2ADAEAB471E70(iLocal_494) >= 0.92f) || !unk_0xAA446425C3A969F9(iLocal_494))
				{
					if (!unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 0) && unk_0xE962BD784DD0E442(iLocal_50[0], -1794415470) != 1)
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_50[0]);
						unk_0x4073360CA020BB84(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xAA446425C3A969F9(iLocal_493) && unk_0x631869B258DDF04D(iLocal_50[1], unk_0x398F092142D37E17("ENDS_IN_WALK")))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_50[1]);
					unk_0x4073360CA020BB84(iLocal_50[1], iLocal_53, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0x92C66E7375C6022D(iLocal_53, 0) == 0f) && unk_0x92C66E7375C6022D(iLocal_53, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x7B6A36C278A92381(iLocal_53, 0, 1);
					unk_0x7B6A36C278A92381(iLocal_53, 1, 1);
				}
				break;
		}
		if (((!unk_0x3E0478C40AB5B38D(func_3()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(func_3(), 1)) < 30f) && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
	{
		if (unk_0x303D473D180EAA17(uLocal_136))
		{
			func_62(7);
		}
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (func_143())
		{
			if (func_82())
			{
				func_62(6);
			}
			else
			{
				func_62(8);
			}
		}
		else if (func_141())
		{
			func_62(2);
		}
		else if (func_140())
		{
			func_62(3);
		}
	}
	if (iLocal_47 != 1)
	{
		if (iLocal_47 != 4)
		{
			func_89();
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
			{
				if (unk_0x3C17D9ED0E5F3FCA(iLocal_50[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_46 != 2)
					{
						unk_0x0B7D6B6B8084020E(iLocal_50[0], "random@security_van", "driver_exit_panic", Local_484, Local_487, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_50[0]);
						unk_0x7CF15DD8B3815A0D(iLocal_50[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xFC38B241541883D3(iLocal_53, 0) && unk_0xAA446425C3A969F9(iLocal_493)) && !unk_0x3E0478C40AB5B38D(iLocal_50[1]))
			{
				unk_0xFCD8CBB0DC357C30(iLocal_53, -1000f, 1);
				unk_0x32D18ECD9E6F9BE2(iLocal_50[1]);
			}
		}
		if (bLocal_108 && !unk_0x303D473D180EAA17(uLocal_136))
		{
			unk_0x7B6A36C278A92381(iLocal_53, 2, 1);
			unk_0x7B6A36C278A92381(iLocal_53, 3, 1);
		}
	}
}

int func_140()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
			{
				if (func_74(unk_0x228A016F863DED95()))
				{
					iLocal_54 = unk_0x228A016F863DED95();
					return 1;
				}
			}
		}
		else if (!unk_0x0BA451447C3B1A8D(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
		{
			if (func_74(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
			{
				fLocal_479 = (fLocal_479 + unk_0xD1D592A06EBAAE4F());
			}
			else if (fLocal_479 > 0f)
			{
				fLocal_479 = (fLocal_479 - (unk_0xD1D592A06EBAAE4F() * 10f));
			}
			else if (fLocal_479 < 0f)
			{
				fLocal_479 = 0f;
			}
			if (fLocal_479 > 3f)
			{
				iLocal_54 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if ((((((!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7())) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_50[iVar0]) || unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_50[iVar0], 1)) < 9f) && !unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0xBD280C076BC69C97(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_93())
	{
		return 1;
	}
	if ((func_142() || func_94()) && func_66())
	{
		if (!unk_0x44E080690DA76A2A(iLocal_50[0], iLocal_53, 0) || !unk_0x44E080690DA76A2A(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar0, 1);
		if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0())))
		{
			if (unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[0]))
				{
					if (unk_0x5093D6F9140AD109(iLocal_50[0], unk_0x9F92518438215DD0(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_50[1]))
				{
					if (unk_0x5093D6F9140AD109(iLocal_50[1], unk_0x9F92518438215DD0(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if ((((((!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && unk_0xE99AF5B1B3F0BB7C(iLocal_50[iVar0], unk_0x9F92518438215DD0(), 1)) || (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && unk_0x5D1AEC61B1517F38(iLocal_50[iVar0], unk_0x9F92518438215DD0()))) || unk_0xE99AF5B1B3F0BB7C(iLocal_50[iVar0], unk_0x9F92518438215DD0(), 1)) || (unk_0xE99AF5B1B3F0BB7C(iLocal_53, unk_0x9F92518438215DD0(), 1) && func_66())) || unk_0x3E0478C40AB5B38D(iLocal_50[iVar0])) || unk_0x0BA451447C3B1A8D(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return 1;
	}
	if (unk_0xFC38B241541883D3(iLocal_53, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]))
			{
				if (unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()) && unk_0xBCBBB7902DEFA79B(iLocal_50[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_53, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()) || unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
	{
		if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_76, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0xFC38B241541883D3(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_53, 1), 25f, 0)) || (!unk_0x3E0478C40AB5B38D(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_50[0], 1), 20f, 0))) || (!unk_0x3E0478C40AB5B38D(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(iLocal_50[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (unk_0x746960881FB19A89(iLocal_50[iVar0]))
		{
			if ((!unk_0x3E0478C40AB5B38D(iLocal_50[iVar0]) && !unk_0x0BA451447C3B1A8D(iLocal_50[iVar0])) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if ((unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iLocal_50[iVar0], 1), 5f, 1) || func_31(unk_0x77009B1C011405A9(iLocal_50[iVar0], 1) + Vector(5f, 10f, 10f), unk_0x77009B1C011405A9(iLocal_50[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xE99AF5B1B3F0BB7C(iLocal_50[iVar0], unk_0x9F92518438215DD0(), 1))
				{
					bLocal_109 = true;
					return 1;
				}
			}
			else
			{
				bLocal_109 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_145()
{
	int iVar0;
	
	iLocal_53 = unk_0xB0694AD0A3BB8936(iLocal_103, Local_76, fLocal_79, 1, 1);
	iLocal_56 = unk_0xA7DA1E6D4C99864B(joaat("prop_security_case_01"), Local_76, 1, 1, 0);
	unk_0x80BA810554025DFF(iLocal_56, iLocal_53, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x407020DF5CAB33D3(iLocal_56, 0);
	unk_0x0C219BF61E779FC0(iLocal_56, iLocal_53, 0);
	unk_0x77C765087051EDD6(iLocal_53);
	unk_0x993B4D0D3CD44124(iLocal_53, 3);
	unk_0x08B4E5756419497B(iLocal_56, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0x9FB7A526EC2E6E8B(iLocal_53, 1, 0);
	unk_0x5C66176FC9E6724C(iLocal_53, 700);
	unk_0x003E17A8BE5EA5B6(iLocal_53, 0, 0);
	unk_0x512E0C109ACECCA1(iLocal_53, 1);
	unk_0xB8FAF4ACA43CA90C(iLocal_53, 0);
	unk_0x4CADBE993729D2BE(iLocal_53, 1);
	unk_0xA1D66B742793EE32((Local_76.f_0 - 200f), (Local_76.f_1 - 200f), (Local_76.f_0 + 200f), (Local_76.f_1 + 200f));
	if (iLocal_45 == 3)
	{
		iLocal_50[0] = unk_0xAD7526C9AA33EE39(iLocal_53, 26, iLocal_102, -1, 1, 1);
		iLocal_50[1] = unk_0xAD7526C9AA33EE39(iLocal_53, 26, iLocal_102, 0, 1, 1);
		unk_0x6FD45FA39DD18625(iLocal_53, 1, 1);
		unk_0x512E0C109ACECCA1(iLocal_53, 1);
	}
	else
	{
		iLocal_50[1] = unk_0xA00B5D954AD320BF(26, iLocal_102, Local_66[1 /*3*/], fLocal_73[1], 1, 1);
		iLocal_50[0] = unk_0xA00B5D954AD320BF(26, iLocal_102, Local_66[0 /*3*/], fLocal_73[0], 1, 1);
		unk_0x402A96371F34E6D8(iLocal_50[1], iLocal_50[0], -1, 0, 2);
	}
	func_79(iLocal_50[1]);
	unk_0x4B38C66919CC2E48("Security_guards", &iLocal_65);
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		unk_0x2CFB119825A2B9F1(iLocal_50[iVar0], 0);
		unk_0x64277E0EB39C1162(iLocal_50[iVar0], 1, 0);
		unk_0x64277E0EB39C1162(iLocal_50[iVar0], 13, 0);
		unk_0x64277E0EB39C1162(iLocal_50[iVar0], 6, 1);
		unk_0x64277E0EB39C1162(iLocal_50[iVar0], 8, 0);
		unk_0x64277E0EB39C1162(iLocal_50[iVar0], 10, 1);
		unk_0xA334EDA2335A13CA(iLocal_50[iVar0], 512, 1);
		unk_0x9001FCB58244C11D(iLocal_50[iVar0], 118, 0);
		unk_0xA334EDA2335A13CA(iLocal_50[iVar0], 128, 1);
		unk_0x42E680AA86A37263(iLocal_50[iVar0], 0);
		unk_0x9FB7A526EC2E6E8B(iLocal_50[iVar0], 1, 0);
		unk_0xC5E1B2288C6D4382(iLocal_50[iVar0], 1);
		unk_0x64185E0B5583477F(iLocal_50[iVar0], 1);
		unk_0x46D3B8FF073CD238(iLocal_50[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0xA50AD6983D49A772(iLocal_50[iVar0], iLocal_65);
		unk_0xE8105B7E3908547D(iLocal_50[iVar0], 1);
		unk_0xA7335B336910A0CC(iLocal_50[iVar0], 250);
		iVar0++;
	}
	unk_0x512E0C109ACECCA1(iLocal_50[1], 1);
	unk_0xF2061C15946C53A2(1, joaat("COP"), iLocal_65);
	unk_0xF2061C15946C53A2(1, iLocal_65, joaat("COP"));
	unk_0xF2061C15946C53A2(2, iLocal_65, joaat("player"));
	unk_0xF2061C15946C53A2(2, joaat("player"), iLocal_65);
	if (iLocal_45 == 1)
	{
		unk_0x07FE9C31EC9DE225(iLocal_50[0], 0, 1, 0, 0);
		unk_0xBBB509E4E3BEE370(iLocal_50[0], 0);
		unk_0x07FE9C31EC9DE225(iLocal_50[1], 0, 1, 0, 0);
		unk_0xBBB509E4E3BEE370(iLocal_50[1], 0);
	}
	if (func_11() == 0 && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		func_68(&Local_139, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		func_68(&Local_139, 1, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		func_68(&Local_139, 2, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
	}
	func_68(&Local_139, 3, iLocal_50[0], "SECVANGUY1", 0, 1);
	func_68(&Local_139, 4, iLocal_50[1], "SECVANGUY2", 0, 1);
	unk_0x60DAE84D0B296FD2(iLocal_103, 1);
	unk_0xE821145469AA0ECD(iLocal_102, 1);
	if (iLocal_45 != 3)
	{
	}
}

float func_146(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

bool func_147()
{
	func_155(&uLocal_316, iLocal_102);
	func_155(&uLocal_316, iLocal_103);
	func_155(&uLocal_316, iLocal_104);
	func_153(&uLocal_316, "random@security_van");
	func_153(&uLocal_316, "weapons@holster_1h");
	func_153(&uLocal_316, "move_injured_generic");
	func_152(&uLocal_316, 3);
	return func_148(&uLocal_316);
}

int func_148(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_149(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_149(var uParam0)
{
	return func_150(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_150(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x94E72F17611BCD3C(iParam0, 30))
	{
		if (unk_0x94E72F17611BCD3C(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return unk_0x149162179DBAEDB0(uParam2);
					break;
				
				case 1:
					return unk_0x3DA2EED4204CE591(uParam1);
					break;
				
				case 2:
					return unk_0x18E6A43566D33720(uParam1);
					break;
				
				case 3:
					return unk_0x48125D4CA17FF2F9(sParam1);
					break;
				
				case 4:
					return unk_0x381FCADDEA0C040B(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x2922F456A375F556(sParam1);
					break;
				
				case 6:
					return unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(iParam0, 27));
					break;
				
				case 7:
					return unk_0x4F5C35B2846E04BD(uParam2);
					break;
				
				case 8:
					return unk_0x7DE7B5897062BC2C(uParam2);
					break;
				
				case 9:
					return unk_0x3749C5550F0953F2();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x94E72F17611BCD3C(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_153(var uParam0, char* sParam1)
{
	func_154(uParam0, 1, -1, sParam1, 0);
}

void func_154(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x6B08EC9A88700FBB(sParam3, "NULL"))
					{
						if (unk_0x6B08EC9A88700FBB(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], iParam1);
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_155(var uParam0, int iParam1)
{
	func_154(uParam0, 0, iParam1, "NULL", 0);
}

int func_156()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_163())
	{
		return 1;
	}
	if (func_157(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_157(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_159(uParam1, "Abigail1", func_161(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 1:
			func_159(uParam1, "Abigail2", func_161(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 2:
			func_159(uParam1, "Barry1", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 3:
			func_159(uParam1, "Barry2", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 4:
			func_159(uParam1, "Barry3", func_161(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 5:
			func_159(uParam1, "Barry3A", func_161(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 6:
			func_159(uParam1, "Barry3C", func_161(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 7:
			func_159(uParam1, "Barry4", func_161(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_160(iParam0), 0, 0);
			break;
		
		case 8:
			func_159(uParam1, "Dreyfuss1", func_161(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 9:
			func_159(uParam1, "Epsilon1", func_161(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 10:
			func_159(uParam1, "Epsilon2", func_161(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 11:
			func_159(uParam1, "Epsilon3", func_161(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 12:
			func_159(uParam1, "Epsilon4", func_161(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 13:
			func_159(uParam1, "Epsilon5", func_161(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 14:
			func_159(uParam1, "Epsilon6", func_161(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 15:
			func_159(uParam1, "Epsilon7", func_161(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 16:
			func_159(uParam1, "Epsilon8", func_161(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 17:
			func_159(uParam1, "Extreme1", func_161(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 18:
			func_159(uParam1, "Extreme2", func_161(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 19:
			func_159(uParam1, "Extreme3", func_161(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 20:
			func_159(uParam1, "Extreme4", func_161(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 21:
			func_159(uParam1, "Fanatic1", func_161(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 22:
			func_159(uParam1, "Fanatic2", func_161(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 23:
			func_159(uParam1, "Fanatic3", func_161(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_160(iParam0), 0, 1);
			break;
		
		case 24:
			func_159(uParam1, "Hao1", func_161(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_160(iParam0), 0, 1);
			break;
		
		case 25:
			func_159(uParam1, "Hunting1", func_161(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 26:
			func_159(uParam1, "Hunting2", func_161(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 27:
			func_159(uParam1, "Josh1", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 28:
			func_159(uParam1, "Josh2", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 29:
			func_159(uParam1, "Josh3", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 30:
			func_159(uParam1, "Josh4", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 31:
			func_159(uParam1, "Maude1", func_161(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 32:
			func_159(uParam1, "Minute1", func_161(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 33:
			func_159(uParam1, "Minute2", func_161(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 34:
			func_159(uParam1, "Minute3", func_161(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 35:
			func_159(uParam1, "MrsPhilips1", func_161(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 36:
			func_159(uParam1, "MrsPhilips2", func_161(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 37:
			func_159(uParam1, "Nigel1", func_161(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 38:
			func_159(uParam1, "Nigel1A", func_161(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 39:
			func_159(uParam1, "Nigel1B", func_161(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 40:
			func_159(uParam1, "Nigel1C", func_161(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 41:
			func_159(uParam1, "Nigel1D", func_161(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 42:
			func_159(uParam1, "Nigel2", func_161(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 43:
			func_159(uParam1, "Nigel3", func_161(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 44:
			func_159(uParam1, "Omega1", func_161(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 45:
			func_159(uParam1, "Omega2", func_161(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 46:
			func_159(uParam1, "Paparazzo1", func_161(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 47:
			func_159(uParam1, "Paparazzo2", func_161(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 48:
			func_159(uParam1, "Paparazzo3", func_161(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 49:
			func_159(uParam1, "Paparazzo3A", func_161(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 50:
			func_159(uParam1, "Paparazzo3B", func_161(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 51:
			func_159(uParam1, "Paparazzo4", func_161(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 52:
			func_159(uParam1, "Rampage1", func_161(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 54:
			func_159(uParam1, "Rampage3", func_161(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 55:
			func_159(uParam1, "Rampage4", func_161(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 56:
			func_159(uParam1, "Rampage5", func_161(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 53:
			func_159(uParam1, "Rampage2", func_161(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 57:
			func_159(uParam1, "TheLastOne", func_161(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 58:
			func_159(uParam1, "Tonya1", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 59:
			func_159(uParam1, "Tonya2", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 60:
			func_159(uParam1, "Tonya3", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 61:
			func_159(uParam1, "Tonya4", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 62:
			func_159(uParam1, "Tonya5", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_159(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_161(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_162(iParam0) };
	if (unk_0x9E9AFDBF482248F6(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_162(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_163()
{
	if (func_166() && !func_167())
	{
		return 1;
	}
	if (func_165() && func_164())
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_97076 > 0;
}

int func_165()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_167()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_168()
{
	if (!func_131(5))
	{
		return 1;
	}
	if (func_163())
	{
		return 1;
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_157(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	if ((Global_97347 == func_59() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xD313E4EFACD47B38() >= (uParam0->f_146 + uParam0->f_147) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 2)) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xD313E4EFACD47B38();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_171(var uParam0)
{
	func_172(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_172(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0x94E72F17611BCD3C(*uParam0, 30))
	{
		switch (func_151(*uParam0))
		{
			case 0:
				unk_0x3BC6D217451D6BB7(uParam2);
				break;
			
			case 1:
				unk_0xDA293E5084610B09(uParam1);
				break;
			
			case 2:
				unk_0xF56FC42B9186CE3F(uParam1);
				break;
			
			case 3:
				unk_0x2EA266AD98E82E2A(uParam1, unk_0x94E72F17611BCD3C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x8E6E37300A0A2B22(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x33733EEE6375F985(uParam1);
				break;
			
			case 6:
				unk_0xEC2376DA57EC68E1(uParam1, unk_0x94E72F17611BCD3C(*uParam0, 27));
				break;
			
			case 7:
				unk_0xE0DC368212C82AB7(uParam2);
				break;
			
			case 8:
				unk_0x9C53AD1E8A38ADEE(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x21ED45FD62BE6E8D();
				break;
			
			default:
				break;
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 29);
	}
}

void func_173()
{
	iLocal_104 = joaat("prop_security_case_01");
	iLocal_103 = joaat("stockade");
	iLocal_102 = joaat("s_m_m_armoured_01");
	uLocal_127 = unk_0x073B65E051D2F03E(3000, 8000);
	switch (iLocal_46)
	{
		case 1:
			Local_95 = { -315.889f, -1550.554f, 7.233013f };
			Local_98 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_101 = 180f;
			Local_76 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_79 = -64.3539f;
			Local_66[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_73[0] = 158.3857f;
			Local_66[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_73[1] = 290.3041f;
			iLocal_45 = 1;
			break;
		
		case 2:
			Local_95 = { -538.2149f, -868.7426f, 17.96054f };
			Local_98 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_101 = 121.5f;
			Local_76 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_79 = -89.02679f;
			Local_66[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_73[0] = 12.5464f;
			Local_66[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_73[1] = 352.4951f;
			iLocal_45 = 1;
			break;
		
		case 3:
			Local_95 = { -468.6309f, 6101.907f, 14.8912f };
			Local_98 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_101 = 152.25f;
			Local_76 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_79 = 188.9862f;
			Local_66[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_73[0] = 251.7138f;
			Local_66[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_73[1] = 154.0836f;
			iLocal_45 = 2;
			break;
		
		case 4:
			Local_95 = { -631.3408f, -1105.581f, 7.220509f };
			Local_98 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_101 = 177.25f;
			Local_76 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_79 = 263.4662f;
			Local_66[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_73[0] = 338.8304f;
			Local_66[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_73[1] = 151.297f;
			iLocal_45 = 1;
			break;
		
		case 5:
			Local_76 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_79 = 26.9919f;
			iLocal_45 = 3;
			break;
		
		case 6:
			Local_76 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_79 = 271.1543f;
			iLocal_45 = 3;
			break;
		
		case 7:
			Local_76 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_79 = 335.9052f;
			iLocal_45 = 3;
			break;
		
		case 8:
			Local_76 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_79 = 119.1519f;
			iLocal_45 = 3;
			break;
		
		case 9:
			Local_76 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_79 = 83.1204f;
			iLocal_45 = 3;
			break;
		
		case 10:
			Local_76 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_79 = 248.8625f;
			iLocal_45 = 3;
			break;
		
		default:
			break;
	}
}

void func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_176(iParam0);
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_176(int iParam0)
{
	Global_97347 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_59();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_216())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_163())
		{
			return 0;
		}
		if (func_215())
		{
			return 0;
		}
		if (Global_97347 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_157(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_214(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_213(func_11()) == 4 || func_213(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_212(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_211(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_210())
		{
			return 0;
		}
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
		{
			return 0;
		}
		if (!func_202(4))
		{
			return 0;
		}
		if (!func_131(5))
		{
			return 0;
		}
		if (func_201(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_214(30) && !func_201(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_120(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
							{
								if (func_11() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
	return func_179(iVar0);
}

int func_179(int iParam0)
{
	return func_180(iParam0, 1);
}

int func_180(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_200(iParam0))
	{
		return 0;
	}
	func_181(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_182(func_193(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_192(iParam0, iParam1))
	{
		iVar0 = func_191(iParam1);
		iVar1 = func_189(iParam0);
		iVar2 = (func_189(iParam0) - func_189(iParam1));
		iVar3 = (func_191(iParam0) - func_191(iParam1));
		iVar4 = (func_188(iParam0) - func_188(iParam1));
		iVar5 = (func_187(iParam0) - func_187(iParam1));
		iVar6 = (func_186(iParam0) - func_186(iParam1));
		iVar7 = (func_185(iParam0) - func_185(iParam1));
	}
	else
	{
		iVar0 = func_191(iParam0);
		iVar1 = func_189(iParam1);
		iVar2 = (func_189(iParam1) - func_189(iParam0));
		iVar3 = (func_191(iParam1) - func_191(iParam0));
		iVar4 = (func_188(iParam1) - func_188(iParam0));
		iVar5 = (func_187(iParam1) - func_187(iParam0));
		iVar6 = (func_186(iParam1) - func_186(iParam0));
		iVar7 = (func_185(iParam1) - func_185(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_184(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_183(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_183(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_184(int iParam0, int iParam1)
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

int func_185(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_186(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_187(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_188(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_189(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_190(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_191(int iParam0)
{
	return iParam0 & 15;
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_200(iParam1) || !func_200(iParam0))
	{
		return 1;
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
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
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
	return 0;
}

int func_193()
{
	var uVar0;
	
	func_199(&uVar0, unk_0xD9940DF735CED1D5());
	func_198(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_197(&uVar0, unk_0x3E15607264E063C3());
	func_196(&uVar0, unk_0xA2C54D866C588926());
	func_195(&uVar0, unk_0x35E06151CD8A2DD1());
	func_194(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_194(var uParam0, int iParam1)
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

void func_195(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_196(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_189(*uParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
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

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
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

int func_200(int iParam0)
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
	iVar0 = func_185(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_186(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_187(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_189(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_191(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_188(iParam0);
	if (iVar5 < 1 || iVar5 > func_184(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_1()) || Global_96405) || Global_24446) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_1()) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_1()) || Global_96405) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_1()) || Global_96405) || Global_24446) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_18(8, -1)) || func_205()) || func_204()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_1()) || Global_24446) || func_209()) || func_18(8, -1)) || func_207()) || func_206()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_1()) || func_207()) || Global_96405) || Global_24446) || func_209()) || Global_35957) || func_18(8, -1)) || func_206()) || func_204()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_1()) || Global_96405) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_203()
{
	return Global_90001.f_1;
}

int func_204()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_90014.f_291 > 0;
}

bool func_208()
{
	return Global_90014.f_290 > 0;
}

var func_209()
{
	return Global_1315900;
}

int func_210()
{
	func_10();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_211(int iParam0)
{
	return func_192(func_193(), iParam0);
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_213(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_97358.f_5944.f_919[iParam0];
}

bool func_214(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_216())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_217()
{
	if (func_169())
	{
		if (unk_0x303D473D180EAA17(uLocal_136))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_63))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_63);
			}
		}
		if (unk_0x746960881FB19A89(iLocal_56))
		{
			unk_0x83A49C880CB75451(&iLocal_56);
		}
		if (unk_0x746960881FB19A89(iLocal_55))
		{
			if (unk_0xC7FF9739199F83C9(iLocal_55))
			{
				unk_0x83A49C880CB75451(&iLocal_55);
			}
			else
			{
				unk_0x8FCF30FFEAA1C4D4(&iLocal_55);
			}
		}
		unk_0x0880E86251A44B7F(iLocal_103);
		unk_0x0880E86251A44B7F(iLocal_102);
		unk_0x0880E86251A44B7F(iLocal_104);
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0xE821145469AA0ECD(iLocal_102, 0);
		unk_0x60DAE84D0B296FD2(iLocal_103, 0);
	}
	if (iLocal_130 != 0)
	{
		unk_0x49066B38AF1DCF6A(iLocal_130);
	}
	unk_0xD643E324F7E6A17B(uLocal_64, 0);
	func_121(&uLocal_304, 0, 0);
	func_223(-1);
	func_218(&uLocal_316, 0);
	unk_0xE60DEFFB2A853900();
}

void func_218(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_220(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_219(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_219(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_220(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_221(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_221(var uParam0)
{
	func_222(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_222(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x94E72F17611BCD3C(iParam0, 30))
	{
		switch (func_151(iParam0))
		{
			case 0:
				unk_0x0880E86251A44B7F(uParam2);
				break;
			
			case 1:
				unk_0xE29F0AC6C728DD9C(uParam1);
				break;
			
			case 2:
				unk_0xB3D0E4FD85A02F35(uParam1);
				break;
			
			case 3:
				unk_0x4B48A2F5324596EE(uParam1);
				break;
			
			case 4:
				unk_0x6AC537DA214AB66E(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x39881B5994C9278A(uParam1);
				break;
			
			case 6:
				unk_0xD1622C66EC50A005();
				break;
			
			case 7:
				unk_0x901BBA88CB2E9BDA(iParam2);
				break;
			
			case 8:
				unk_0x84FBD0BE7CDBEEA2(iParam2, unk_0x94E72F17611BCD3C(iParam0, 26));
				break;
			
			case 9:
				unk_0xC3CD8798C7C83A3D();
				break;
			
			default:
				break;
		}
	}
}

void func_223(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_169())
	{
		func_227(iParam0);
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_97347, 1), 64);
		if (func_58(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_224(&Global_24503);
	Global_97348 = 0;
	func_176(-1);
}

void func_224(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_225(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_226(int iParam0)
{
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
}

void func_227(int iParam0)
{
	func_228(iParam0, 0, func_233(iParam0));
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_193();
	func_231(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(iParam0, &uVar0);
	Var1 = { func_229(&uVar0) };
}

struct<16> func_229(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_188(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_191(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_189(*uParam0), 64);
	return Var0;
}

void func_230(int iParam0, var uParam1)
{
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_191(*uParam0);
	iVar2 = func_188(*uParam0);
	iVar3 = func_187(*uParam0);
	iVar4 = func_186(*uParam0);
	iVar5 = func_185(*uParam0);
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
	iVar6 = func_184(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_184(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_232(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(uParam0, iParam1);
	func_198(uParam0, iParam2);
	func_197(uParam0, iParam3);
	func_196(uParam0, iParam4);
	func_195(uParam0, iParam5);
	func_194(uParam0, iParam6);
}

int func_233(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_234(int iParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		if (unk_0x4A33023BC86AAA7F(iParam0, -1))
		{
			return -1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 0))
		{
			return 0;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 2))
		{
			return 2;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 3))
		{
			return 3;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 4))
		{
			return 4;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 5))
		{
			return 5;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 6))
		{
			return 6;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 7))
		{
			return 7;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

