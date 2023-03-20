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
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[2] = { 0, 0 };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
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
	bool bLocal_121 = 0;
	int iLocal_122[2] = { 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
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
		unk_0x1090044AD1DA76FA();
	}
	if (Global_3)
	{
		if (iLocal_46 != 2)
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	else
	{
		if (unk_0xC968670BFACE42D9(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
				{
					if (unk_0x4C241E39B23DF959(iLocal_53, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(iLocal_50[iVar0], iLocal_53, false))
						{
							unk_0xC20E50AA46D09CA8(iLocal_50[iVar0], iLocal_53, -1, func_234(iLocal_53), 2f, 1, 0);
						}
					}
					else
					{
						unk_0x919BE13EED931959(iLocal_50[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(Local_86, 9, iLocal_46, 1, 0))
		{
			unk_0x1090044AD1DA76FA();
		}
		else
		{
			func_174(-1);
		}
	}
	func_173();
	iLocal_64 = unk_0x1B5C85C612E5256E(Local_76 + Vector(30f, 30f, 30f), Local_76 - Vector(30f, 30f, 30f), false, true, true, true);
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
			unk_0x208784099002BC30("RE_SV", 0);
			switch (iLocal_509)
			{
				case 0:
					if (unk_0xC5042CC6F5E3D450() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_45 == 3 && !(unk_0xE33D59DA70B58FDF(Local_76, 3f) && func_146(unk_0xD80958FC74E988A6(), Local_76, 1) < 150f)) || iLocal_45 != 3)
							{
								if (iLocal_45 == 3)
								{
									if (!unk_0xE33D59DA70B58FDF(Local_76, 8f))
									{
										unk_0xA56F01F3765B93A0(Local_76, 4f, true, false, false, false);
									}
									iLocal_47 = 4;
									bLocal_108 = true;
								}
								else
								{
									iLocal_47 = 1;
								}
								func_145();
								if (unk_0x4C241E39B23DF959(iLocal_53, false) && iLocal_45 == 3)
								{
									unk_0xAB54A438726D25D5(iLocal_53, 5f);
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
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x4C241E39B23DF959(iLocal_53, false))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) < 10000f || !unk_0xE31C2C72B8692B64(iLocal_53)) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0xE31C2C72B8692B64(iLocal_50[0]))) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0xE31C2C72B8692B64(iLocal_50[1])))
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
					if (unk_0x7239B21A38F536BA(iLocal_53) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (iLocal_45 == 3)
						{
							func_134();
							if (!unk_0xE31C2C72B8692B64(iLocal_53) && (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 100f || func_144()))
							{
								func_125(1);
							}
						}
						else if (((!unk_0xE31C2C72B8692B64(iLocal_53) && iLocal_47 == 4) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_95, Local_98, fLocal_101, false, true, 0)) || func_144())
						{
							func_125(1);
						}
						if ((iLocal_47 == 4 && unk_0xE31C2C72B8692B64(iLocal_53)) && iLocal_45 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) > 100f)
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
				if (unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0xE31C2C72B8692B64(iLocal_53))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) > 62500f)
					{
						func_217();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) > 10000f && !unk_0xC5042CC6F5E3D450())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_62))
			{
				if (!func_124(2) && !bLocal_113)
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						func_123("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_55))
				{
					if (iLocal_510 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_55, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 0;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (((bLocal_108 && !unk_0xAFC1CA75AD4074D1(iLocal_136)) && unk_0x4C241E39B23DF959(iLocal_53, false)) && !bLocal_120)
				{
					if (iLocal_510 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (unk_0xAFC1CA75AD4074D1(iLocal_136))
				{
					if (iLocal_510 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x225B8B35C88029B3(iLocal_136), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 2;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (iLocal_510 == 0)
				{
					if (unk_0x7239B21A38F536BA(iLocal_55))
					{
						func_114(&uLocal_304, iLocal_55, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_55, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 1)
				{
					if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, true))
					{
						func_114(&uLocal_304, iLocal_53, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 2)
				{
					if (unk_0xAFC1CA75AD4074D1(iLocal_136))
					{
						func_97(&uLocal_304, unk_0x225B8B35C88029B3(iLocal_136), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x225B8B35C88029B3(iLocal_136), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (((!unk_0x5F9532F3B5CC2551(iLocal_53) && bLocal_108) && !bLocal_110) && (!func_124(0) || (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_stickybomb"), false) && !func_124(1))))
				{
					switch (iLocal_133)
					{
						case 0:
							if (!unk_0x4D79439A6B55AC67() && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 225f)
							{
								func_123("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_133++;
							}
							break;
						
						case 1:
							if (!unk_0x4D79439A6B55AC67())
							{
								iLocal_134 = unk_0x9CD27B0045628463();
								iLocal_133++;
							}
							break;
						
						case 2:
							if ((unk_0x9CD27B0045628463() - iLocal_134) > 2000 && unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_stickybomb"), false))
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
						unk_0x8DFCED7A656F8802(true);
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
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
					{
						if (unk_0xF6AA118530443FD2(iLocal_50[0]) != 3)
						{
							unk_0xDBA71115ED9941A6(iLocal_50[0], 3);
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
					{
						if (unk_0xF6AA118530443FD2(iLocal_50[1]) != 3)
						{
							unk_0xDBA71115ED9941A6(iLocal_50[1], 3);
						}
					}
					if (((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x5F9532F3B5CC2551(iLocal_50[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && !unk_0x5F9532F3B5CC2551(iLocal_50[1]))
					{
						iLocal_128 = 1;
						func_73(iLocal_50[1]);
						func_71(0, 1);
					}
					else if (iLocal_128 == 1)
					{
						if (unk_0x84A2DD9AC37C35C1(iLocal_50[1]) || unk_0x5F9532F3B5CC2551(iLocal_50[1]))
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
						if (unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || unk_0x5F9532F3B5CC2551(iLocal_50[0]))
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
			if ((((unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0xBB40DD2270B65366(iLocal_53, -1) == unk_0xD80958FC74E988A6()) && !bLocal_112) && iLocal_47 != 8)
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
				if (unk_0x9E6B70061662AE5C(iLocal_65, joaat("player")) != 5)
				{
					unk_0xBF25EB89375A37AD(5, iLocal_65, joaat("player"));
					unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_65);
				}
			}
			if (bLocal_110)
			{
				if ((unk_0xAFC1CA75AD4074D1(iLocal_136) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x225B8B35C88029B3(iLocal_136)) > 250f)
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
				if (unk_0x7239B21A38F536BA(iLocal_50[iVar2]))
				{
					if ((!unk_0x5F9532F3B5CC2551(iLocal_50[iVar2]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_50[0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_53))
				{
					if (unk_0x4C241E39B23DF959(iLocal_53, false))
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, false))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 10000f && unk_0xE31C2C72B8692B64(iLocal_53)) || unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 62500f)
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
				iLocal_126 = unk_0x9CD27B0045628463();
				bLocal_106 = true;
			}
		}
		if (bLocal_106)
		{
			if (!bLocal_107)
			{
				if ((unk_0x9CD27B0045628463() - iLocal_126) > 5000)
				{
					unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
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
		if (((unk_0x9CD27B0045628463() - iLocal_126) > 10000 && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) && !iLocal_125)
		{
			iVar4 = unk_0xD53343AA4FB7DD28(0, 3);
			if (iVar4 == 0)
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_125 = 1;
		}
		if (bLocal_107)
		{
			if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(func_3(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
					{
						unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
					}
					unk_0x520E541A97A13354(unk_0x4F8644AF03D0E0D6(), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
				}
			}
		}
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0 && func_2())
		{
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xFE3F9C29F7B32BD5(iLocal_53, 0) > 0f || unk_0xFE3F9C29F7B32BD5(iLocal_53, 1) > 0f)
			{
				if (unk_0x25BC98A59C2EA962(iLocal_53) == 3)
				{
					unk_0xB664292EAECF7FA6(iLocal_53, 1);
				}
			}
			if (!bLocal_111)
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, false))
				{
					bLocal_111 = true;
				}
			}
			if (!bLocal_111)
			{
				if (unk_0xFE3F9C29F7B32BD5(iLocal_53, 0) == 0f && unk_0xFE3F9C29F7B32BD5(iLocal_53, 1) == 0f)
				{
					if (unk_0x25BC98A59C2EA962(iLocal_53) == 1)
					{
						unk_0xB664292EAECF7FA6(iLocal_53, 3);
					}
				}
			}
		}
		if (iLocal_130 != 0)
		{
			if ((iLocal_47 == 8 || iLocal_47 == 6) || iLocal_47 == 4)
			{
				unk_0x2CDA538C44C6CCE5(iLocal_130);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar5]) && !unk_0x5F9532F3B5CC2551(iLocal_50[iVar5]))
				{
					if (unk_0xEFBE71898A993728(iLocal_55, iLocal_50[iVar5]))
					{
						if (iLocal_47 == 1)
						{
							if (!iLocal_511[iVar5])
							{
								unk_0x90A43CC281FFAB46(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								unk_0x90A43CC281FFAB46(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, true);
								iLocal_511[iVar5] = 1;
							}
						}
						if (iLocal_47 == 7)
						{
							if (!iLocal_514[iVar5])
							{
								unk_0x90A43CC281FFAB46(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								unk_0x90A43CC281FFAB46(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, true);
								iLocal_514[iVar5] = 1;
							}
						}
						if (unk_0x475768A975D5AD17(iLocal_50[iVar5], 4) && !iLocal_114)
						{
							unk_0x6F6981D2253C208F(iLocal_50[iVar5], true);
							iLocal_114 = 1;
						}
					}
					else
					{
						if (iLocal_511[iVar5])
						{
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 1, -8f);
							iLocal_511[iVar5] = 0;
						}
						if (iLocal_514[iVar5])
						{
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 1, -8f);
							iLocal_514[iVar5] = 0;
						}
						if (iLocal_511[iVar5] || iLocal_514[iVar5])
						{
							iLocal_511[iVar5] = 0;
							iLocal_514[iVar5] = 0;
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 1, -8f);
						}
						if (unk_0x475768A975D5AD17(iLocal_50[iVar5], 4) && iLocal_114)
						{
							unk_0x6F6981D2253C208F(iLocal_50[iVar5], true);
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar5]))
				{
					if (iLocal_511[iVar5] || iLocal_514[iVar5])
					{
						iLocal_511[iVar5] = 0;
						iLocal_514[iVar5] = 0;
						unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 0, -8f);
						unk_0xD8D19675ED5FBDCE(iLocal_50[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_108 && !bLocal_495)
		{
			if (((((unk_0x7239B21A38F536BA(iLocal_55) && unk_0xB346476EF1A64897(iLocal_55)) && !unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129])) && !unk_0x1F0B79228E461EC9(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 3)) && !unk_0x1F0B79228E461EC9(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x1F0B79228E461EC9(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xEA47FE3719165B94(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0f, false, false, false);
			}
		}
		if (!iLocal_115)
		{
			if (unk_0x7239B21A38F536BA(iLocal_53))
			{
				if (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true))
				{
					iLocal_115 = 1;
				}
				unk_0xA72CD9CA74A5ECBA(iLocal_53);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && (((unk_0x4C241E39B23DF959(iLocal_53, false) && bLocal_113) && unk_0xAFC1CA75AD4074D1(iLocal_136)) || (!unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0xAFC1CA75AD4074D1(iLocal_136)))) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x225B8B35C88029B3(iLocal_136)) < 20f)
	{
		iVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x84A2DD9AC37C35C1(iVar1))
		{
			if (unk_0x9F47B058362C84B5(iVar1) == joaat("s_m_y_cop_01") || unk_0x9F47B058362C84B5(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x84A2DD9AC37C35C1(iVar1))
		{
			if (unk_0x9F47B058362C84B5(iVar1) == joaat("s_m_y_cop_01") || unk_0x9F47B058362C84B5(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, 0, 1024);
		if (unk_0x4C241E39B23DF959(iVar2, false))
		{
			return 1;
		}
		iVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, 0, 1024);
		if (unk_0x4C241E39B23DF959(iVar2, false))
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[0], true));
			iVar1 = 0;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[1], true)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[1], true));
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
					unk_0xD79DEEFB53455EBA(false);
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
		if (unk_0x16754C556D2EDE3D())
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
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
	unk_0xD79DEEFB53455EBA(false);
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
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
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		if (Global_68067)
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
	return Global_97173.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_14(unk_0xD80958FC74E988A6());
			if (func_13(iVar0) && (!func_16(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_34909 == iParam0;
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
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_19()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[0], true));
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[1], true)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[1], true));
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_50)
		{
			if (unk_0x7239B21A38F536BA(iLocal_50[iVar1]))
			{
				if (((!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar1]) && unk_0xC86D67D52A707CF8(iLocal_50[iVar1], unk_0xD80958FC74E988A6(), true)) || unk_0x84A2DD9AC37C35C1(iLocal_50[iVar1])) || unk_0x5F9532F3B5CC2551(iLocal_50[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && iLocal_115)
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
			if (unk_0x7239B21A38F536BA(iLocal_55))
			{
				if (!unk_0xB346476EF1A64897(iLocal_55))
				{
					unk_0x539E0AE3E6634B9F(&iLocal_55);
					if (!unk_0xAFC1CA75AD4074D1(iLocal_136) && !bLocal_110)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x9CD27B0045628463() - iLocal_135) > 3000)
				{
					if (unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]) || unk_0x47E4E977581C5B55(iLocal_50[iLocal_129]))
					{
						unk_0x961AC54BF0613F5D(iLocal_55, true, true);
						iLocal_135 = unk_0x9CD27B0045628463();
					}
				}
			}
			else if (!unk_0xAFC1CA75AD4074D1(iLocal_136))
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]) || ((!unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]) && unk_0x47E4E977581C5B55(iLocal_50[iLocal_129])) && !bLocal_110))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			unk_0x539E0AE3E6634B9F(&iLocal_55);
		}
		if (unk_0xAFC1CA75AD4074D1(iLocal_136))
		{
			unk_0x3288D8ACAECD2AB2(iLocal_136);
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
				Param0 = { unk_0x6E16BC2503FF1FF0(unk_0x1899F328B0E12848(iLocal_53, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { unk_0x6E16BC2503FF1FF0(unk_0x3FEF770D40960D5A(iLocal_50[iLocal_129], false), 1.2f, 1.5f) };
			}
		}
		unk_0x933D6A9EEC1BACD0(&iLocal_137, 3);
		unk_0x933D6A9EEC1BACD0(&iLocal_137, 4);
		unk_0x933D6A9EEC1BACD0(&iLocal_137, 1);
		if (bParam3)
		{
			iLocal_136 = unk_0x891804727E0A98B7(joaat("pickup_money_security_case"), Param0, unk_0xAFBD61CC738D9EB9(iLocal_55, 2), 0, iLocal_127, 2, true, 0);
		}
		else
		{
			iLocal_136 = unk_0xFBA08C503DD5FA58(joaat("pickup_money_security_case"), Param0, iLocal_137, iLocal_127, true, 0);
		}
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_63))
		{
			iLocal_63 = func_25(iLocal_136);
		}
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			unk_0x539E0AE3E6634B9F(&iLocal_55);
		}
		bLocal_110 = true;
	}
}

int func_25(int iParam0)
{
	return func_26(iParam0);
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xBE339365C863BD36(iParam0);
	unk_0xD38744167B2FA257(iVar0, func_27(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	return iVar0;
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
		if (unk_0x7239B21A38F536BA(iLocal_56))
		{
			unk_0x7C65DAC73C35C862(iLocal_53, 2, false, false);
			unk_0x7C65DAC73C35C862(iLocal_53, 3, false, false);
			if (unk_0x7239B21A38F536BA(iLocal_56))
			{
				unk_0x539E0AE3E6634B9F(&iLocal_56);
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
			if (unk_0xFE3F9C29F7B32BD5(iLocal_53, 2) == 0f && unk_0xFE3F9C29F7B32BD5(iLocal_53, 3) == 0f)
			{
				if (unk_0x7239B21A38F536BA(iLocal_55))
				{
					if (unk_0xB346476EF1A64897(iLocal_55))
					{
						unk_0x961AC54BF0613F5D(iLocal_55, true, true);
					}
					unk_0x6B9BBD38AB0796DF(iLocal_55, iLocal_53, 0, Local_80, Local_83, false, false, false, false, 2, true);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_110 && !bLocal_120)
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_53))
				{
					if (((unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0xFE3F9C29F7B32BD5(iLocal_53, 2) > 0.25f) && unk_0xFE3F9C29F7B32BD5(iLocal_53, 3) > 0.25f) || !unk_0x4C241E39B23DF959(iLocal_53, false))
					{
						if (unk_0x7239B21A38F536BA(iLocal_55))
						{
							if (unk_0xB346476EF1A64897(iLocal_55))
							{
								unk_0x8D8686B622B88120(unk_0x430386FE9BF80B45(), "DOORS_BLOWN", unk_0x44A8FCB8ED227738(iLocal_53, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								unk_0x961AC54BF0613F5D(iLocal_55, true, false);
								unk_0x1A9205C1B9EE827F(iLocal_55, true, false);
								unk_0x710311ADF0E20730(iLocal_55);
								unk_0x406137F8EF90EAF5(iLocal_55, true);
								Local_476 = { unk_0x3FEF770D40960D5A(iLocal_55, true) - unk_0x3FEF770D40960D5A(iLocal_53, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_476) > 10f)
								{
									Local_476 = { func_29(Local_476) };
									Local_476 = { Local_476 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_132 < 100)
								{
									iLocal_116 = 1;
								}
								unk_0xC5F68BE9613E2D18(iLocal_55, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_475 = unk_0x9CD27B0045628463();
							}
							else if (unk_0x7F8F6405F4777AF6(unk_0x3FEF770D40960D5A(iLocal_55, true), unk_0x1899F328B0E12848(iLocal_53, Local_469), unk_0x1899F328B0E12848(iLocal_53, Local_472), false) >= 1f)
							{
								iLocal_48 = 3;
								iLocal_122[0] = 0;
								iLocal_122[1] = 0;
							}
							else if ((unk_0x9CD27B0045628463() - iLocal_475) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(iLocal_53))
				{
					unk_0x7C65DAC73C35C862(iLocal_53, 2, false, false);
					unk_0x7C65DAC73C35C862(iLocal_53, 3, false, false);
					func_24(unk_0x1899F328B0E12848(iLocal_53, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_47 != 8)
			{
				func_62(8);
			}
			if (unk_0x7239B21A38F536BA(iLocal_55) && !unk_0xAFC1CA75AD4074D1(iLocal_136))
			{
				if (unk_0xD5037BA82E12416F(iLocal_55) == 0f && (unk_0x9CD27B0045628463() - iLocal_475) > 1000)
				{
					func_24(unk_0x3FEF770D40960D5A(iLocal_55, true), 1);
					unk_0x539E0AE3E6634B9F(&iLocal_55);
				}
				else if ((unk_0x9CD27B0045628463() - iLocal_475) > 5000)
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
	
	if (unk_0x7239B21A38F536BA(iLocal_56) && unk_0xB346476EF1A64897(iLocal_56))
	{
		if (!iLocal_465)
		{
			if (unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(iLocal_56, true), joaat("weapon_stickybomb"), 0.25f, false) || unk_0xBFA48E2FF417213F(unk_0x3FEF770D40960D5A(iLocal_56, true), 0.3f, unk_0xF46CDC33180FDA94(joaat("weapon_stickybomb")), false))
			{
				iLocal_465 = 1;
			}
		}
		iVar0 = 0;
		unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(iLocal_56, true), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_56, true), 1f, 1) || (unk_0xAB0F816885B0E483(2, unk_0x3FEF770D40960D5A(iLocal_56, true), 0.3f) && iLocal_465))
		{
			iLocal_116 = 1;
			iVar0 = 1;
		}
		if (unk_0xEEF059FAD016D209(iLocal_56) < iLocal_131 && unk_0xC86D67D52A707CF8(iLocal_56, unk_0xD80958FC74E988A6(), false))
		{
			iLocal_132 = (iLocal_132 + (iLocal_131 - unk_0xEEF059FAD016D209(iLocal_56)));
			unk_0xA72CD9CA74A5ECBA(iLocal_56);
		}
		if ((unk_0x9CD27B0045628463() - iLocal_466) > 200 && unk_0x7239B21A38F536BA(iLocal_53))
		{
			if (unk_0x1A8B5F3C01E2B477(unk_0x1899F328B0E12848(iLocal_53, 0f, 0f, (1.2195f - 0.27f)), unk_0x1899F328B0E12848(iLocal_53, 0f, fLocal_468, (1.2195f + 0.09f)), 0.45f, true))
			{
				iLocal_466 = unk_0x9CD27B0045628463();
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
		iLocal_131 = unk_0xEEF059FAD016D209(iLocal_56);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x2E2EBA0EE7CED0E0(5, Param3, Param0) || (unk_0x2E2EBA0EE7CED0E0(2, Param3, Param0) && !bParam10)) || (unk_0x2E2EBA0EE7CED0E0(20, Param3, Param0) && !bParam10)) || unk_0x2E2EBA0EE7CED0E0(4, Param3, Param0)) || (unk_0x2E2EBA0EE7CED0E0(28, Param3, Param0) && !bParam10)) || unk_0x2E2EBA0EE7CED0E0(32, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(25, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(9, Param3, Param0)) || (unk_0x2E2EBA0EE7CED0E0(3, Param3, Param0) && !bParam10)) || (unk_0x2E2EBA0EE7CED0E0(6, Param3, Param0) && !bParam10)) || unk_0x2E2EBA0EE7CED0E0(0, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(1, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(23, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(34, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(14, Param3, Param0)) || (unk_0x2E2EBA0EE7CED0E0(30, Param3, Param0) && !bParam10)) || (unk_0x2E2EBA0EE7CED0E0(12, Param3, Param0) && !bParam10)) || unk_0x2E2EBA0EE7CED0E0(7, Param3, Param0)) || (unk_0x2E2EBA0EE7CED0E0(21, Param3, Param0) && !bParam10)) || (unk_0x2E2EBA0EE7CED0E0(18, Param3, Param0) && !bParam10)) || unk_0x2E2EBA0EE7CED0E0(15, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(10, Param3, Param0)) || unk_0x2E2EBA0EE7CED0E0(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xAB0F816885B0E483(5, Param6, fParam9) || (unk_0xAB0F816885B0E483(2, Param6, fParam9) && !bParam10)) || (unk_0xAB0F816885B0E483(20, Param6, fParam9) && !bParam10)) || unk_0xAB0F816885B0E483(4, Param6, fParam9)) || (unk_0xAB0F816885B0E483(28, Param6, fParam9) && !bParam10)) || unk_0xAB0F816885B0E483(32, Param6, fParam9)) || unk_0xAB0F816885B0E483(25, Param6, fParam9)) || unk_0xAB0F816885B0E483(9, Param6, fParam9)) || (unk_0xAB0F816885B0E483(3, Param6, fParam9) && !bParam10)) || (unk_0xAB0F816885B0E483(6, Param6, fParam9) && !bParam10)) || unk_0xAB0F816885B0E483(0, Param6, fParam9)) || unk_0xAB0F816885B0E483(1, Param6, fParam9)) || unk_0xAB0F816885B0E483(23, Param6, fParam9)) || unk_0xAB0F816885B0E483(34, Param6, fParam9)) || unk_0xAB0F816885B0E483(14, Param6, fParam9)) || (unk_0xAB0F816885B0E483(30, Param6, fParam9) && !bParam10)) || (unk_0xAB0F816885B0E483(12, Param6, fParam9) && !bParam10)) || unk_0xAB0F816885B0E483(7, Param6, fParam9)) || (unk_0xAB0F816885B0E483(21, Param6, fParam9) && !bParam10)) || (unk_0xAB0F816885B0E483(18, Param6, fParam9) && !bParam10)) || unk_0xAB0F816885B0E483(15, Param6, fParam9)) || unk_0xAB0F816885B0E483(10, Param6, fParam9)) || unk_0xAB0F816885B0E483(27, Param6, fParam9))
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
	
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_62))
	{
		if (!bLocal_109)
		{
			if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && unk_0x4C241E39B23DF959(iLocal_53, false)) && !bLocal_120)
			{
				if (!bLocal_108)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_59[1]))
					{
						uLocal_59[1] = func_36(iLocal_50[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xA6DB27D19ECBB7DA(uLocal_59[1]))
					{
						unk_0x86A652570E5F25DD(&(uLocal_59[1]));
					}
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_58))
					{
						iLocal_58 = func_34(iLocal_53, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_59[1]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_59[1]));
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
				{
					unk_0x86A652570E5F25DD(&iLocal_58);
				}
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(uLocal_59[0]) && unk_0x729B5F1EFBC0AAEE(uLocal_59[0]) != 119)
			{
				unk_0x86A652570E5F25DD(&(uLocal_59[0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_59[1]) && unk_0x729B5F1EFBC0AAEE(uLocal_59[1]) != 119)
			{
				unk_0x86A652570E5F25DD(&(uLocal_59[1]));
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_58) && unk_0x729B5F1EFBC0AAEE(iLocal_58) != 119)
			{
				unk_0x86A652570E5F25DD(&iLocal_58);
			}
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
					{
						if (unk_0xA3EE4A07279BB9DB(iLocal_50[iVar0], iLocal_53, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_58))
				{
					iLocal_58 = func_34(iLocal_53, 1, 0);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				unk_0x86A652570E5F25DD(&iLocal_58);
			}
			if ((unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0xA6DB27D19ECBB7DA(iLocal_58)) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, false))
				{
					if (unk_0x970F608F0EE6C885(iLocal_58) != 0)
					{
						unk_0x45FF974EEE1C8734(iLocal_58, 0);
					}
				}
				else if (unk_0x970F608F0EE6C885(iLocal_58) != 255)
				{
					unk_0x45FF974EEE1C8734(iLocal_58, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0xAFC1CA75AD4074D1(iLocal_136) && !unk_0x997ABD671D25CA0B(iLocal_50[iVar0], false))
					{
						if (!unk_0xBBCCE00B381F8482(iLocal_50[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_47 == 8 && !unk_0x997ABD671D25CA0B(iLocal_50[iVar0], false))
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
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_59[iVar0]))
					{
						uLocal_59[iVar0] = func_36(iLocal_50[iVar0], 1, 145);
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uLocal_59[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_59[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xAFC1CA75AD4074D1(iLocal_136) && !bLocal_120)
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_63))
				{
					iLocal_63 = func_26(iLocal_136);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(iLocal_63))
			{
				unk_0x86A652570E5F25DD(&iLocal_63);
			}
		}
	}
	else if ((unk_0x7239B21A38F536BA(iLocal_53) && unk_0x7239B21A38F536BA(iLocal_50[0])) && unk_0x7239B21A38F536BA(iLocal_50[1]))
	{
		if ((((((!unk_0xE31C2C72B8692B64(iLocal_53) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 100f, 100f, 30f, false, true, 0)) || (!unk_0xE31C2C72B8692B64(iLocal_50[0]) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[0], 100f, 100f, 30f, false, true, 0))) || (!unk_0xE31C2C72B8692B64(iLocal_50[1]) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[1], 100f, 100f, 30f, false, true, 0))) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 50f, 50f, 20f, false, true, 0)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[0], 50f, 50f, 20f, false, true, 0)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[1], 50f, 50f, 20f, false, true, 0))
		{
			unk_0x86A652570E5F25DD(&iLocal_62);
		}
	}
	if (unk_0xA6DB27D19ECBB7DA(uLocal_59[0]))
	{
		unk_0x75A16C3DA34F1245(uLocal_59[0], iLocal_121);
	}
	if (unk_0xA6DB27D19ECBB7DA(uLocal_59[1]))
	{
		unk_0x75A16C3DA34F1245(uLocal_59[1], bLocal_121);
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
	{
		unk_0x75A16C3DA34F1245(iLocal_58, bLocal_121);
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_63))
	{
		unk_0x75A16C3DA34F1245(iLocal_63, bLocal_121);
	}
	if (!bLocal_121)
	{
		if (bLocal_109 || iLocal_48 == 3)
		{
			bLocal_121 = false;
		}
	}
}

int func_34(int iParam0, bool bParam1, bool bParam2)
{
	return func_35(iParam0, !bParam1, bParam2);
}

int func_35(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_27(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_27(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_27(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_36(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
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
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_40(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
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
	Global_97159 = iParam0;
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_46(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_45() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_48()
{
	return Global_1312736;
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_97173.f_1729.f_539.f_3213)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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
		if (unk_0x80EC48E6679313F9(iLocal_136))
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
	if (!unk_0xAFC1CA75AD4074D1(iLocal_136))
	{
		if (bLocal_108)
		{
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
			{
				if (!func_64(iLocal_53))
				{
					if (iLocal_464 == -1)
					{
						iLocal_464 = unk_0x9CD27B0045628463();
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]))
				{
					if (!func_64(iLocal_53))
					{
						if (iLocal_464 == -1)
						{
							iLocal_464 = unk_0x9CD27B0045628463();
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
			if ((unk_0x9CD27B0045628463() - iLocal_464) > 3000)
			{
				unk_0x2595DD4236549CE3(&(iLocal_50[0]));
				unk_0x2595DD4236549CE3(&(iLocal_50[1]));
				unk_0x43D3807C077261E3(iLocal_53, -1000f, true);
				unk_0x1A9205C1B9EE827F(iLocal_53, true, false);
				unk_0x629BFA74418D6239(&iLocal_53);
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
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x2A488C176D52CCA5(unk_0x225B8B35C88029B3(iLocal_136), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xE31C2C72B8692B64(iParam0) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam0, true)) < 300f)
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
		iLocal_506 = unk_0x9CD27B0045628463();
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		switch (iLocal_49)
		{
			case 0:
				bLocal_109 = true;
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
				{
					if (func_21() < 30f && !unk_0x84A2DD9AC37C35C1(Local_139[3 /*10*/]))
					{
						func_4(&Local_139, cLocal_138, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && unk_0x7239B21A38F536BA(iLocal_55))
					{
						if ((iVar0 != iLocal_129 || bLocal_108) || !unk_0xEFBE71898A993728(iLocal_55, iLocal_50[iVar0]))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_50[iVar0]);
							unk_0xE8854A4326B9E12B(&iLocal_57);
							if (unk_0x997ABD671D25CA0B(iLocal_50[iVar0], false))
							{
								if (iLocal_116)
								{
									if (unk_0x318234F4F3738AF3("move_injured_generic"))
									{
										unk_0xAF8A94EDE7712BEF(iLocal_50[iVar0], "move_injured_generic", 0.25f);
										iLocal_117[iVar0] = 1;
									}
								}
								unk_0x504D54DF3F6F2247(0, 0, 256);
							}
							unk_0x0F804F1DB19B9689(0);
							if (iLocal_117[iVar0])
							{
								unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 3000));
							}
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_57);
							unk_0x5ABA3986D90D8A3B(iLocal_50[iVar0], iLocal_57);
							unk_0x3841422E9C488D8C(&iLocal_57);
						}
						unk_0x9F7794730795E019(iLocal_50[iVar0], 6, false);
						unk_0x9F7794730795E019(iLocal_50[iVar0], 0, true);
						unk_0x9F7794730795E019(iLocal_50[iVar0], 1, false);
						unk_0x4D9CA1009AFBD057(iLocal_50[iVar0], 1);
						unk_0x0703B9079823DA4A(iLocal_50[iVar0], 1);
						unk_0x9F8AA94D6D97DBF4(iLocal_50[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0x7239B21A38F536BA(iLocal_55) && unk_0xB346476EF1A64897(iLocal_55)) && !unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_50[iLocal_129]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_49++;
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_50[iLocal_129]);
						unk_0xE8854A4326B9E12B(&iLocal_57);
						if (unk_0x997ABD671D25CA0B(iLocal_50[iLocal_129], false))
						{
							unk_0x504D54DF3F6F2247(0, 0, 256);
						}
						unk_0x0F804F1DB19B9689(0);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_57);
						unk_0x5ABA3986D90D8A3B(iLocal_50[iLocal_129], iLocal_57);
						unk_0x3841422E9C488D8C(&iLocal_57);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
				{
					if (unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
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
						if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
						{
							if ((iLocal_48 == 2 && !iLocal_122[iVar0]) && !unk_0x5F9532F3B5CC2551(iLocal_53))
							{
								unk_0xE4723DB6E736CCFF(iLocal_50[iVar0], iLocal_53, unk_0x1899F328B0E12848(iLocal_53, 0f, -4f, 0f), 5f, false);
								iLocal_122[iVar0] = 1;
							}
							if (((unk_0xAFC1CA75AD4074D1(iLocal_136) && !iLocal_122[iVar0]) && iLocal_48 == 3) && !bLocal_120)
							{
								unk_0xE4723DB6E736CCFF(iLocal_50[iVar0], iLocal_53, unk_0x225B8B35C88029B3(iLocal_136), 5f, false);
								iLocal_122[iVar0] = 1;
							}
							if (bLocal_120)
							{
								if (iLocal_122[iVar0])
								{
									unk_0x74D4E028107450A9(iLocal_50[iVar0], false);
									iLocal_122[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x9CD27B0045628463() - iLocal_499)) > unk_0x313CE5879CEB6FCD(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
							{
								if (func_4(&Local_139, cLocal_138, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_499 = unk_0x9CD27B0045628463();
								}
							}
						}
					}
					if (unk_0x4C241E39B23DF959(iLocal_53, false))
					{
						if (!bLocal_108)
						{
							if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, false) && (unk_0x9CD27B0045628463() - iLocal_506) > 5000)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
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
					unk_0xAA74EC0CB0AAEA2C(iLocal_50[iVar0], 0.25f);
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
	
	if ((unk_0x9CD27B0045628463() - iLocal_483) > 250)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
				{
					if (unk_0xFCDFF7B72D23A1AC(iLocal_50[iVar0], unk_0xD80958FC74E988A6(), 19) && unk_0x0267D00AF114F17A(iLocal_50[iVar0], unk_0xD80958FC74E988A6()))
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
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
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
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
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
	
	if (unk_0x7239B21A38F536BA(iLocal_55))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iParam0]))
		{
			if (unk_0xEFBE71898A993728(iLocal_55, iLocal_50[iParam0]))
			{
				if (unk_0x1F0B79228E461EC9(iLocal_50[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x346D81500D088F42(iLocal_50[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x961AC54BF0613F5D(iLocal_55, true, true);
						unk_0x539E0AE3E6634B9F(&iLocal_55);
					}
				}
				else
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_50[iParam0], true);
					unk_0xEA47FE3719165B94(iLocal_50[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
				}
			}
		}
	}
	bVar0 = (!unk_0x7239B21A38F536BA(iLocal_55) || (unk_0x7239B21A38F536BA(iLocal_55) && !unk_0xEFBE71898A993728(iLocal_55, iLocal_50[iParam0])));
	if (bVar0)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iParam0]))
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_50[iParam0], false);
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
	int iVar14;
	
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		Var0 = { func_29(unk_0x2274BC1C4885E333(iLocal_53, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true))) };
		fVar3 = ((unk_0xE83D4F9BA2A38914(iLocal_53) + unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0xE83D4F9BA2A38914(iLocal_53) + unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x163E252DE035A133(unk_0x3FEF770D40960D5A(iLocal_53, true), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x163E252DE035A133(unk_0x3FEF770D40960D5A(iLocal_53, true), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_500) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_50)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_50[iVar12], true), Var5[iVar12 /*3*/]) > 2f)
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
				if ((((((!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar12]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_50[iVar12], true), Var5[iVar12 /*3*/]) > 2f) && (unk_0x9CD27B0045628463() - iLocal_503[iVar12]) > 1000) && !unk_0x997ABD671D25CA0B(iLocal_50[iVar12], false)) && !iLocal_480[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_500 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
						}
						unk_0xE8854A4326B9E12B(&iVar14);
						if (func_66() || func_32(Local_500))
						{
							unk_0xB2A16444EAD9AE47(0, Var5[iVar12 /*3*/], unk_0xD80958FC74E988A6(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), -1, true);
						}
						else
						{
							unk_0x11315AB3385B8AC0(0, Var5[iVar12 /*3*/], Local_500, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x6671F3EEC681BDA1(0, Local_500, -1, true, false);
						}
						unk_0x39E72BC99E6360CB(iVar14);
						unk_0x5ABA3986D90D8A3B(iLocal_50[iVar12], iVar14);
						unk_0x3841422E9C488D8C(&iVar14);
					}
					iLocal_503[iVar12] = unk_0x9CD27B0045628463();
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
	
	if (unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!bLocal_108)
				{
					unk_0x9F8AA94D6D97DBF4(iParam0, true);
					unk_0xE1EF3C1216AFF2CD(iParam0);
					Local_484 = { unk_0x44A8FCB8ED227738(iLocal_53, 0) };
					Local_487 = { unk_0xAFBD61CC738D9EB9(iLocal_53, 2) };
					Local_490 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_panic", Local_484, Local_487, 0f, 2) };
					if (((!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0x5F9532F3B5CC2551(iLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(iLocal_50[0])) && !unk_0x5F9532F3B5CC2551(iLocal_50[0]))
					{
						if (func_21() < 20f)
						{
							if (bLocal_109)
							{
								func_4(&Local_139, cLocal_138, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xAFC1CA75AD4074D1(iLocal_136))
						{
							if (bLocal_109)
							{
								unk_0x15D3A79D4E44B913(iParam0, unk_0x225B8B35C88029B3(iLocal_136), 2f, -1, 0.25f, false, 40000f);
							}
							else
							{
								unk_0x15D3A79D4E44B913(iParam0, unk_0x225B8B35C88029B3(iLocal_136), 1f, -1, 0.25f, false, 40000f);
							}
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(iParam0))
					{
						if (unk_0xAFC1CA75AD4074D1(iLocal_136))
						{
							unk_0x15D3A79D4E44B913(iParam0, unk_0x225B8B35C88029B3(iLocal_136), 2f, -1, 0.25f, false, 40000f);
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
				if (!unk_0x84A2DD9AC37C35C1(iParam0) && unk_0xAFC1CA75AD4074D1(iLocal_136))
				{
					if ((unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x225B8B35C88029B3(iLocal_136), true) < 2f && !unk_0x47E4E977581C5B55(iParam0)) && (unk_0x9CD27B0045628463() - iLocal_135) > 3000)
					{
						if (unk_0x475768A975D5AD17(iParam0, 4))
						{
							unk_0xADF692B254977C0C(iParam0, joaat("weapon_unarmed"), true);
						}
						unk_0x3288D8ACAECD2AB2(iLocal_136);
						func_79(iParam0);
						unk_0xADF692B254977C0C(iParam0, joaat("weapon_unarmed"), true);
						bLocal_110 = false;
						iLocal_129 = iLocal_128;
						iLocal_49++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(iParam0) && unk_0x4C241E39B23DF959(iLocal_53, false))
				{
					if (unk_0x77F1BEB8863288D5(iParam0, 713668775) != 1)
					{
						if (bLocal_109)
						{
							unk_0x15D3A79D4E44B913(iParam0, Local_490, 2f, -1, 0.1f, 512, Local_487.f_2);
						}
						else
						{
							unk_0x15D3A79D4E44B913(iParam0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
						}
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x84A2DD9AC37C35C1(iParam0))
				{
					if (unk_0xAFC1CA75AD4074D1(iLocal_136))
					{
						iLocal_49 = 0;
					}
					else
					{
						fVar0 = unk_0xE83D4F9BA2A38914(iParam0);
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
						if (unk_0x2A488C176D52CCA5(Local_490, unk_0x3FEF770D40960D5A(iParam0, true)) < 0.3f)
						{
							if (unk_0x73D57CFFDD12C355((fVar0 - Local_487.f_2)) < 15f)
							{
								unk_0x8844BBFCE30AA9E9(iParam0, -8f);
								unk_0xE1EF3C1216AFF2CD(iParam0);
								bLocal_495 = true;
								iLocal_493 = unk_0x8C18E0F9080ADD73(Local_484, Local_487, 2);
								if (bLocal_109)
								{
									unk_0xEEA929141F699854(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xC77720A12FE14A86(iLocal_53, iLocal_493, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xEEA929141F699854(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xC77720A12FE14A86(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x2208438012482A1A(iParam0, false, false);
								iLocal_49++;
							}
						}
						else if (unk_0xE31C2C72B8692B64(iParam0) && !unk_0xE33D59DA70B58FDF(Local_484, 2f))
						{
							unk_0x06843DA7060A026B(iParam0, Local_484, true, false, false, true);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x25D39B935A038A26(iLocal_493))
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
						if ((unk_0x7239B21A38F536BA(iLocal_55) && unk_0xEFBE71898A993728(iLocal_55, iParam0)) && unk_0xE4A310B1D7FA73CC(iLocal_493) > fLocal_507)
						{
							if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_53))
							{
								unk_0x961AC54BF0613F5D(iLocal_55, true, true);
								unk_0x1A9205C1B9EE827F(iLocal_55, false, false);
								unk_0x6B9BBD38AB0796DF(iLocal_55, iLocal_53, 0, unk_0x2274BC1C4885E333(iLocal_53, unk_0x3FEF770D40960D5A(iLocal_55, true)), 90f, 0f, 0f, false, false, false, false, 2, true);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xE4A310B1D7FA73CC(iLocal_493) > fLocal_508)
					{
						unk_0x43D3807C077261E3(iLocal_53, -4f, true);
						unk_0xE1EF3C1216AFF2CD(iParam0);
						if (unk_0x7239B21A38F536BA(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x93D9BD300D7789E5(iLocal_53, 2, true);
							unk_0x93D9BD300D7789E5(iLocal_53, 3, true);
							unk_0x9F8AA94D6D97DBF4(iParam0, false);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x25D39B935A038A26(iLocal_493) && unk_0xE4A310B1D7FA73CC(iLocal_493) > fLocal_508) || !unk_0x25D39B935A038A26(iLocal_493))
				{
					if (!bLocal_109)
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
						{
							unk_0xC20E50AA46D09CA8(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_49++;
				}
				break;
			
			case 6:
				if (unk_0x4C241E39B23DF959(iLocal_53, false))
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
	if (!unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!bLocal_108)
		{
			if ((((((func_21() < 10f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && func_66()) || ((func_21() < 20f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))) || (func_21() < 5f && bLocal_109)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && func_74(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))) || ((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && func_74(unk_0xB6997A7EB3F5C8C0())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_47 != 7)
	{
		if (bLocal_108)
		{
			if (unk_0x25D39B935A038A26(iLocal_493))
			{
				unk_0x43D3807C077261E3(iLocal_53, -8f, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			unk_0x9F8AA94D6D97DBF4(iParam0, false);
		}
	}
	if ((unk_0x4C241E39B23DF959(iLocal_53, false) && iLocal_47 != 7) && unk_0x25D39B935A038A26(iLocal_493))
	{
		unk_0x43D3807C077261E3(iLocal_53, -8f, true);
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
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x7239B21A38F536BA(iLocal_53))
	{
		uVar59 = 4;
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0x1899F328B0E12848(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0x1899F328B0E12848(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0x1899F328B0E12848(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0x1899F328B0E12848(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0x1899F328B0E12848(iLocal_53, fVar73, 1.5f, 0f) };
		if (!bLocal_108)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, true))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0xA3EE4A07279BB9DB(iLocal_50[1], iLocal_53, true))
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
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x7239B21A38F536BA(iLocal_55))
		{
			iLocal_55 = unk_0x509D5878EB39E842(iLocal_104, Local_76, true, true, false);
			unk_0x1760FFA8AB074D66(iLocal_55, false);
		}
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			unk_0x6B9BBD38AB0796DF(iLocal_55, iParam0, unk_0x3F428D08BE5AAE31(iParam0, 28422), Local_89, Local_92, true, false, false, false, 2, true);
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_49)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_50[iVar0], true);
				}
				iVar0++;
			}
			bLocal_109 = true;
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
			{
				if (unk_0x7239B21A38F536BA(func_83()))
				{
					if (!unk_0x84A2DD9AC37C35C1(func_83()))
					{
						if (unk_0xBB40DD2270B65366(iLocal_53, -1) != func_83() && unk_0x22AC59A870E6A669(iLocal_53, -1))
						{
							unk_0xC20E50AA46D09CA8(func_83(), iLocal_53, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && func_83() != iLocal_50[1])
				{
					if (unk_0xBB40DD2270B65366(iLocal_53, 0) != iLocal_50[1] && unk_0x22AC59A870E6A669(iLocal_53, 0))
					{
						unk_0xC20E50AA46D09CA8(iLocal_50[1], iLocal_53, -1, 0, 2f, 1, 0);
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
				if (unk_0x7239B21A38F536BA(func_83()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0x9454528DF15D657A(func_83(), iLocal_53, unk_0xD80958FC74E988A6(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_49++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x7239B21A38F536BA(func_83()))
				{
					unk_0x659427E0EF36BCDE(func_83(), iLocal_53, 0, 5, 0f, 786484, 100f, 100f, true);
					iLocal_49++;
				}
			}
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
			{
				if (unk_0xD5037BA82E12416F(iLocal_53) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x7239B21A38F536BA(iLocal_53) && unk_0x7239B21A38F536BA(unk_0xBB40DD2270B65366(iLocal_53, -1))) && (unk_0x5F9532F3B5CC2551(unk_0xBB40DD2270B65366(iLocal_53, -1)) || unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iLocal_53, -1))))
	{
		iVar1 = 0;
		if (unk_0xBB40DD2270B65366(iLocal_53, -1) == iLocal_50[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 100f)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar1]) && unk_0x77F1BEB8863288D5(iLocal_50[iVar1], 242628503) != 1)
			{
				unk_0x70A2D1137C8ED7C9(iLocal_50[iVar1], 2, true);
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0x7AA80209BDA643EB(0, iLocal_53);
				unk_0x9454528DF15D657A(0, iLocal_53, unk_0xD80958FC74E988A6(), 8, 50f, 786484, 100f, 5f, true);
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(iLocal_50[iVar1], iVar2);
				unk_0x3841422E9C488D8C(&iVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0x4C241E39B23DF959(iLocal_53, false) || unk_0xAFC1CA75AD4074D1(iLocal_136)) || iLocal_48 == 3) || unk_0x679BE1DAF71DA874(iLocal_53, 0, 7000)) || unk_0x679BE1DAF71DA874(iLocal_53, 3, 30000)) || unk_0x679BE1DAF71DA874(iLocal_53, 2, 30000)) || unk_0x679BE1DAF71DA874(iLocal_53, 1, 40000)) || (iLocal_49 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x7239B21A38F536BA(iLocal_53))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_53))
		{
			if (((((unk_0xEEF059FAD016D209(iLocal_53) < 300 || unk_0xC45D23BAF168AAB8(iLocal_53) < 200f) || (unk_0xBA291848A0815CA9(iLocal_53, 0, false) && unk_0xBA291848A0815CA9(iLocal_53, 1, false))) || (unk_0xBA291848A0815CA9(iLocal_53, 4, false) && unk_0xBA291848A0815CA9(iLocal_53, 5, false))) || (unk_0xBA291848A0815CA9(iLocal_53, 0, false) && unk_0xBA291848A0815CA9(iLocal_53, 4, false))) || (unk_0xBA291848A0815CA9(iLocal_53, 1, false) && unk_0xBA291848A0815CA9(iLocal_53, 5, false)))
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
	if (unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x5F9532F3B5CC2551(iLocal_50[0]))
		{
			if (!unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, false))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0x5F9532F3B5CC2551(iLocal_50[1]))
		{
			if (!unk_0xA3EE4A07279BB9DB(iLocal_50[1], iLocal_53, false))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x5F9532F3B5CC2551(iLocal_50[0]))
	{
		return iLocal_50[0];
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0x5F9532F3B5CC2551(iLocal_50[1]))
	{
		return iLocal_50[1];
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_108)
			{
				if (unk_0x7239B21A38F536BA(iLocal_55) && unk_0xB346476EF1A64897(iLocal_55))
				{
					unk_0x961AC54BF0613F5D(iLocal_55, true, true);
				}
			}
			if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_139, cLocal_138, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
					{
						unk_0x9F7794730795E019(iLocal_50[iVar0], 17, true);
						unk_0x70A2D1137C8ED7C9(iLocal_50[iVar0], 128, true);
						unk_0x70A2D1137C8ED7C9(iLocal_50[iVar0], 16, true);
						unk_0x9F7794730795E019(iLocal_50[iVar0], 1, false);
						unk_0xE8854A4326B9E12B(&iVar1);
						if (unk_0x997ABD671D25CA0B(iLocal_50[iVar0], true))
						{
							unk_0x504D54DF3F6F2247(iLocal_50[iVar0], 0, 256);
						}
						unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(iLocal_50[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_112 = true;
			iLocal_49++;
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
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
	
	iVar1 = unk_0xA7C4F2C6E744A550(iParam0) + 1;
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x22AC59A870E6A669(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xD80958FC74E988A6())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x84A2DD9AC37C35C1(iVar2))
					{
						if (unk_0x12534C348C6CB68B(iVar2))
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
					iVar3 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
					if (!unk_0x84A2DD9AC37C35C1(iVar3))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_4(&Local_139, cLocal_138, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x7239B21A38F536BA(iLocal_55) && unk_0xB346476EF1A64897(iLocal_55))
					{
						if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_50[0]))
						{
							func_87(0);
						}
						else
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_50[0]);
						}
						if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_50[1]))
						{
							func_87(1);
						}
						else
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_50[1]);
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
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]))
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
	if (unk_0x7239B21A38F536BA(iLocal_54))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_54) && unk_0x4C241E39B23DF959(iLocal_53, false))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_54, true), unk_0x3FEF770D40960D5A(iLocal_53, true)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x5F9532F3B5CC2551(iLocal_54) || !unk_0x4C241E39B23DF959(iLocal_54, false)) || (!unk_0x5333F526F6AB19AA(iLocal_54, 90f) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_54, true)))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_50[0], unk_0xD80958FC74E988A6(), true))
		{
			func_62(8);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_50[1], unk_0xD80958FC74E988A6(), true))
		{
			func_62(8);
		}
	}
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
	if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && func_66()) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7))
	{
		func_62(2);
	}
	if (!unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		func_62(5);
	}
}

void func_87(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iParam0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xE1EF3C1216AFF2CD(iLocal_50[iParam0]);
		unk_0xE8854A4326B9E12B(&iLocal_57);
		if (unk_0x997ABD671D25CA0B(iLocal_50[iParam0], false))
		{
			unk_0x504D54DF3F6F2247(0, 0, 256);
		}
		unk_0x0F804F1DB19B9689(0);
		unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 0, 2);
		unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), -1, false);
		unk_0x39E72BC99E6360CB(iLocal_57);
		unk_0x5ABA3986D90D8A3B(iLocal_50[iParam0], iLocal_57);
		unk_0x3841422E9C488D8C(&iLocal_57);
		if (iLocal_130 == 0)
		{
			iLocal_130 = unk_0xD9F8455409B525E9(116, unk_0x3FEF770D40960D5A(iLocal_50[iParam0], true), -1f);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
			{
				unk_0x9F8AA94D6D97DBF4(iLocal_50[0], true);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
			{
				unk_0x9F8AA94D6D97DBF4(iLocal_50[1], true);
			}
			if (func_95())
			{
				if (func_4(&Local_139, cLocal_138, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (func_94() || func_93())
				{
					func_4(&Local_139, cLocal_138, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
				{
					func_4(&Local_139, cLocal_138, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x7239B21A38F536BA(iLocal_55) && unk_0xB346476EF1A64897(iLocal_55))
				{
					if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_50[0]))
					{
						func_87(0);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_50[0]);
					}
					if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_50[1]))
					{
						func_87(1);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_50[1]);
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iLocal_129]))
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
					if (!func_91(iLocal_50[iVar1], 1000) && (func_21() < 2f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x5F9532F3B5CC2551(iLocal_50[iVar1]))
					{
						if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_50[iVar1]) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_50[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x9CD27B0045628463() - iLocal_499)) > unk_0x313CE5879CEB6FCD(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_499 = unk_0x9CD27B0045628463();
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
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x7239B21A38F536BA(iLocal_50[iVar2]))
		{
			if ((unk_0x84A2DD9AC37C35C1(iLocal_50[iVar2]) || unk_0x5F9532F3B5CC2551(iLocal_50[iVar2])) && unk_0xC86D67D52A707CF8(iLocal_50[iVar2], unk_0xD80958FC74E988A6(), false))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || unk_0x84A2DD9AC37C35C1(iLocal_50[1])) || bLocal_120)
	{
		func_62(8);
	}
	if ((unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && func_66())
	{
		if (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true))
		{
			func_62(8);
		}
	}
	if (!unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		func_62(5);
	}
	if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
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
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x7239B21A38F536BA(iParam0))
		{
			if ((unk_0x524AC5ECEA15343E(iParam0) && !unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0))) || (unk_0x6AC7003FA6E5575E(iParam0) && unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam0, true)) > fLocal_497)
				{
					iVar0 = 1;
				}
				if ((unk_0x9CD27B0045628463() - iLocal_498) > iParam1)
				{
					fLocal_497 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam0, true));
					iLocal_498 = unk_0x9CD27B0045628463();
				}
			}
		}
	}
	return iVar0;
}

int func_92()
{
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 20f, 20f, 5f, false, true, 0) && !unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, 0f, 1.7532f, 0.5984f), unk_0x1899F328B0E12848(iLocal_53, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
			{
				if ((!unk_0xA3EE4A07279BB9DB(iLocal_50[iVar0], iLocal_53, false) && unk_0xEC5F66E459AF3BB2(unk_0xD80958FC74E988A6(), iLocal_53)) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true)) < 400f)
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
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()) == iLocal_53)
		{
			if (unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && unk_0x751B70C3D034E187(iLocal_50[0], unk_0xD80958FC74E988A6(), 20f, 20f, 5f, false, true, 0)) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && unk_0x751B70C3D034E187(iLocal_50[1], unk_0xD80958FC74E988A6(), 20f, 20f, 5f, false, true, 0)))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_96(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_97(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_121(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_98(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_98(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
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
	if (!unk_0xE520FF1AD2785B40())
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
				if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && uParam7)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
			if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
			{
				if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && uParam7)
				{
					if (!func_96(iVar0))
					{
						func_123(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
		if (!unk_0xF22B6C47C6EAB066(iVar0))
		{
			if (func_96(iVar0) && unk_0x4D79439A6B55AC67())
			{
				unk_0x8DFCED7A656F8802(true);
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
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
	if (func_100(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_100(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
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
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_102(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
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
		if ((!unk_0xCA042B6957743895(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_34909)
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
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
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
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_105()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_106(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
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
	
	unk_0x51669F7D1FB53D9F(false);
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
	unk_0xD51ADCD2D8BC0FB3(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Param1, -1, iVar2, iVar3);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_112(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
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
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_112(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
				if (!func_111(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
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
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_109(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
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
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
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
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
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
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
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
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_113()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
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
	if (func_100(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
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
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_96(iVar0))
							{
								func_123(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_96(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_121(uParam0, 0, 0);
	}
	if (func_120(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_118())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
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
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_118()
{
	return func_119(unk_0x4F8644AF03D0E0D6());
}

int func_119(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_120(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_121(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446208.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_96(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

void func_122(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_6), iParam0);
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_124(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_28117.f_6, iParam0);
}

int func_125(int iParam0)
{
	if (func_128())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_50(Global_97162))
		{
			func_126(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_50(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
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
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_123(func_127(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_123(func_127(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_123(func_127(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
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
	switch (func_129(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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
		if (Global_87667.f_44 == 1)
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
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
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
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
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
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_131(int iParam0)
{
	return func_132(iParam0, Global_34909);
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
	if (Global_34909 == 15)
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_49)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(iLocal_53, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
				{
					unk_0x9F7794730795E019(iLocal_50[0], 6, true);
					unk_0x9F7794730795E019(iLocal_50[1], 6, true);
					unk_0x9F8AA94D6D97DBF4(iLocal_50[0], true);
					unk_0x9F8AA94D6D97DBF4(iLocal_50[1], true);
					if (unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, false) && unk_0xA3EE4A07279BB9DB(iLocal_50[1], iLocal_53, false))
					{
						if (iLocal_46 == 2)
						{
							unk_0xE8854A4326B9E12B(&iVar0);
							unk_0xE2A2AA2F659D77A7(0, iLocal_53, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(0, iLocal_53, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar0);
							unk_0x5ABA3986D90D8A3B(iLocal_50[0], iVar0);
							unk_0x3841422E9C488D8C(&iVar0);
							iLocal_49++;
						}
						else if (iLocal_46 == 4)
						{
							unk_0xE8854A4326B9E12B(&iVar1);
							unk_0xE2A2AA2F659D77A7(0, iLocal_53, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(0, iLocal_53, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar1);
							unk_0x5ABA3986D90D8A3B(iLocal_50[0], iVar1);
							unk_0x3841422E9C488D8C(&iVar1);
							iLocal_49++;
						}
						else if (iLocal_46 == 7)
						{
							unk_0xE8854A4326B9E12B(&iVar2);
							unk_0xE2A2AA2F659D77A7(0, iLocal_53, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(0, iLocal_53, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar2);
							unk_0x5ABA3986D90D8A3B(iLocal_50[0], iVar2);
							unk_0x3841422E9C488D8C(&iVar2);
							iLocal_49++;
						}
						else
						{
							unk_0x480142959D337D00(iLocal_50[0], iLocal_53, 10f, 786603);
							iLocal_49++;
						}
					}
					else
					{
						if (!unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, false) && unk_0x77F1BEB8863288D5(iLocal_50[0], -1794415470) != 1)
						{
							unk_0xC20E50AA46D09CA8(iLocal_50[0], iLocal_53, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xA3EE4A07279BB9DB(iLocal_50[1], iLocal_53, false) && unk_0x77F1BEB8863288D5(iLocal_50[1], -1794415470) != 1)
						{
							unk_0xC20E50AA46D09CA8(iLocal_50[1], iLocal_53, -1, 0, 1f, 8388608, 0);
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
			if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_50)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar3]) && !unk_0x5F9532F3B5CC2551(iLocal_50[iVar3]))
					{
						if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()) && unk_0x9A497FE2DF198913(iLocal_50[iVar3]))
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
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, true))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_47 == 4)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar4, true);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x3903E216620488E8("PLAYER HAS PROJECTILE WEAPON", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 0, 0, 255, 255);
				if ((unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, 0f, -3.44f, -3f), unk_0x1899F328B0E12848(iLocal_53, 0f, -13.44f, 3f), 2.3f, false, true, 0)) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, 0f, -3.44f, -3f), unk_0x1899F328B0E12848(iLocal_53, 0f, -13.44f, 3f), 2.3f, false, true, 0))
				{
					unk_0xA3BB2E9555C05A8F("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_53, true)) < 225f)
				{
					unk_0xA3BB2E9555C05A8F("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
				}
			}
		}
		if (((unk_0x4C241E39B23DF959(iLocal_53, false) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_53, true), 25f, 0)) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_50[0], true), 20f, 0))) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_50[1], true), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_47 != 4)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
			{
				unk_0x9F7794730795E019(iLocal_50[0], 6, false);
				unk_0x9F8AA94D6D97DBF4(iLocal_50[0], false);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
			{
				unk_0x9F7794730795E019(iLocal_50[1], 6, false);
				unk_0x9F8AA94D6D97DBF4(iLocal_50[1], false);
			}
		}
	}
}

int func_135()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iLocal_53, true) };
		Var3 = { unk_0x0A794A5A57F8DF91(iLocal_53) };
		Var6 = { unk_0x2274BC1C4885E333(iLocal_53, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
		if (((Var6.f_1 > 1f && (((unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_53) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_53)) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_50[0])) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_50[1]))) && unk_0x73D57CFFDD12C355(unk_0x186FC4BE848E1C92(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x186FC4BE848E1C92(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, 2.7f, 7f, -2f), unk_0x1899F328B0E12848(iLocal_53, 2.7f, -3.25f, 3f), 3f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, -2.7f, 7f, -2f), unk_0x1899F328B0E12848(iLocal_53, -2.7f, -3.25f, 3f), 3f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(iLocal_53, 0f, 7f, -2f), unk_0x1899F328B0E12848(iLocal_53, 0f, 0f, 3f), 2.4f, false, true, 0))
		{
			if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
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
	
	if (unk_0x4C241E39B23DF959(iLocal_53, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
		{
			iVar0 = unk_0xB6997A7EB3F5C8C0();
		}
		if (unk_0x7239B21A38F536BA(iVar0) && unk_0x7239B21A38F536BA(iLocal_53))
		{
			return ((unk_0x4C241E39B23DF959(iVar0, false) && unk_0x17FFC1B2BA35A494(iVar0, iLocal_53)) && unk_0xD5037BA82E12416F(iVar0) > 10f);
		}
	}
	return 0;
}

int func_138()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (iLocal_115)
		{
			return 1;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) || unk_0x5F9532F3B5CC2551(iLocal_50[0]))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_50[0], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) || unk_0x5F9532F3B5CC2551(iLocal_50[1]))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_50[1], unk_0xD80958FC74E988A6(), true))
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
	
	if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1])) && unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		switch (iLocal_49)
		{
			case 0:
				Local_484 = { unk_0x44A8FCB8ED227738(iLocal_53, 0) };
				Local_487 = { unk_0xAFBD61CC738D9EB9(iLocal_53, 2) };
				Local_490 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0f, 2) };
				bLocal_495 = false;
				iLocal_496 = 0;
				unk_0x49733E92263139D1(iLocal_53);
				unk_0xE8854A4326B9E12B(&iLocal_57);
				unk_0x919BE13EED931959(0, 5000);
				unk_0x15D3A79D4E44B913(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
				unk_0x93B93A37987F1F3D(0, Local_487.f_2, 0);
				unk_0x39E72BC99E6360CB(iLocal_57);
				unk_0x5ABA3986D90D8A3B(iLocal_50[1], iLocal_57);
				unk_0x3841422E9C488D8C(&iLocal_57);
				iLocal_49++;
				break;
			
			case 1:
				Local_484 = { unk_0x44A8FCB8ED227738(iLocal_53, 0) };
				Local_487 = { unk_0xAFBD61CC738D9EB9(iLocal_53, 2) };
				Local_490 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0f, 2) };
				if (!unk_0x25D39B935A038A26(iLocal_494))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_76) < 22500f && unk_0xE9676F61BC0B3321(iLocal_53))
					{
						iLocal_494 = unk_0x8C18E0F9080ADD73(Local_484, Local_487, 2);
						unk_0xEEA929141F699854(iLocal_50[0], iLocal_494, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						unk_0xD9A897A4C6C2974F(iLocal_494, true);
					}
				}
				if (unk_0x77F1BEB8863288D5(iLocal_50[1], 242628503) != 1)
				{
					unk_0xE8854A4326B9E12B(&iLocal_57);
					unk_0x15D3A79D4E44B913(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
					unk_0x93B93A37987F1F3D(0, Local_487.f_2, 0);
					unk_0x39E72BC99E6360CB(iLocal_57);
					unk_0x5ABA3986D90D8A3B(iLocal_50[1], iLocal_57);
					unk_0x3841422E9C488D8C(&iLocal_57);
				}
				fVar0 = unk_0xE83D4F9BA2A38914(iLocal_50[1]);
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
				if (unk_0x73D57CFFDD12C355((fVar0 - Local_487.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_490, unk_0x3FEF770D40960D5A(iLocal_50[1], true)) < 0.2f)
				{
					unk_0x8844BBFCE30AA9E9(iLocal_50[1], -8f);
					unk_0xE1EF3C1216AFF2CD(iLocal_50[1]);
					bLocal_495 = true;
					iLocal_493 = unk_0x8C18E0F9080ADD73(Local_484, Local_487, 2);
					unk_0xEEA929141F699854(iLocal_50[1], iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xC77720A12FE14A86(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!iLocal_105)
				{
					if (((unk_0x25D39B935A038A26(iLocal_493) && unk_0xE4A310B1D7FA73CC(iLocal_493) > 0.09f) && unk_0xE4A310B1D7FA73CC(iLocal_493) < 0.11f) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[1], 20f, 20f, 5f, false, true, 0))
						{
							if (func_4(&Local_139, cLocal_138, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_105 = 1;
							}
						}
					}
				}
				if (unk_0x25D39B935A038A26(iLocal_493))
				{
					if (!bLocal_108)
					{
						if ((unk_0x7239B21A38F536BA(iLocal_55) && unk_0xEFBE71898A993728(iLocal_55, iLocal_50[1])) && unk_0xE4A310B1D7FA73CC(iLocal_493) > 0.3793f)
						{
							if (!unk_0xEFBE71898A993728(iLocal_55, iLocal_53))
							{
								unk_0x961AC54BF0613F5D(iLocal_55, true, true);
								unk_0x1A9205C1B9EE827F(iLocal_55, false, false);
								unk_0x6B9BBD38AB0796DF(iLocal_55, iLocal_53, 0, unk_0x2274BC1C4885E333(iLocal_53, unk_0x3FEF770D40960D5A(iLocal_55, true)), 90f, 0f, 0f, false, false, false, false, 2, true);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xE4A310B1D7FA73CC(iLocal_493) > 0.546243f)
					{
						unk_0x43D3807C077261E3(iLocal_53, -4f, true);
						if (unk_0x7239B21A38F536BA(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x93D9BD300D7789E5(iLocal_53, 2, true);
							unk_0x93D9BD300D7789E5(iLocal_53, 3, true);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_105)
				{
					if (((unk_0x25D39B935A038A26(iLocal_493) && unk_0xE4A310B1D7FA73CC(iLocal_493) > 0.56f) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_50[1], 20f, 20f, 5f, false, true, 0))
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_105 = 1;
						}
					}
				}
				if (!iLocal_496)
				{
					if ((unk_0x25D39B935A038A26(iLocal_493) && unk_0xE4A310B1D7FA73CC(iLocal_493) > 0.6f) || !unk_0x25D39B935A038A26(iLocal_493))
					{
						if (unk_0x25D39B935A038A26(iLocal_494))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_50[0]);
							iLocal_494 = unk_0x8C18E0F9080ADD73(Local_484, Local_487, 2);
							unk_0xEEA929141F699854(iLocal_50[0], iLocal_494, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_496 = 1;
					}
				}
				else if ((unk_0x25D39B935A038A26(iLocal_494) && unk_0xE4A310B1D7FA73CC(iLocal_494) >= 0.92f) || !unk_0x25D39B935A038A26(iLocal_494))
				{
					if (!unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, false) && unk_0x77F1BEB8863288D5(iLocal_50[0], -1794415470) != 1)
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_50[0]);
						unk_0xC20E50AA46D09CA8(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0x25D39B935A038A26(iLocal_493) && unk_0xEAF4CD9EA3E7E922(iLocal_50[1], unk_0xD24D37CC275948CC("ENDS_IN_WALK")))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_50[1]);
					unk_0xC20E50AA46D09CA8(iLocal_50[1], iLocal_53, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0xFE3F9C29F7B32BD5(iLocal_53, 0) == 0f) && unk_0xFE3F9C29F7B32BD5(iLocal_53, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x93D9BD300D7789E5(iLocal_53, 0, true);
					unk_0x93D9BD300D7789E5(iLocal_53, 1, true);
				}
				break;
		}
		if (((!unk_0x84A2DD9AC37C35C1(func_3()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(func_3(), true)) < 30f) && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
	{
		if (unk_0xAFC1CA75AD4074D1(iLocal_136))
		{
			func_62(7);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
			{
				if (unk_0x1F0B79228E461EC9(iLocal_50[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_46 != 2)
					{
						unk_0x83CDB10EA29B370B(iLocal_50[0], "random@security_van", "driver_exit_panic", Local_484, Local_487, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_50[0]);
						unk_0xEA47FE3719165B94(iLocal_50[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0f, false, false, false);
					}
				}
			}
			if ((unk_0x4C241E39B23DF959(iLocal_53, false) && unk_0x25D39B935A038A26(iLocal_493)) && !unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
			{
				unk_0x43D3807C077261E3(iLocal_53, -1000f, true);
				unk_0xE1EF3C1216AFF2CD(iLocal_50[1]);
			}
		}
		if (bLocal_108 && !unk_0xAFC1CA75AD4074D1(iLocal_136))
		{
			unk_0x93D9BD300D7789E5(iLocal_53, 2, true);
			unk_0x93D9BD300D7789E5(iLocal_53, 3, true);
		}
	}
}

int func_140()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				if (func_74(unk_0xB6997A7EB3F5C8C0()))
				{
					iLocal_54 = unk_0xB6997A7EB3F5C8C0();
					return 1;
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if (func_74(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				fLocal_479 = (fLocal_479 + unk_0x15C40837039FFAF7());
			}
			else if (fLocal_479 > 0f)
			{
				fLocal_479 = (fLocal_479 - (unk_0x15C40837039FFAF7() * 10f));
			}
			else if (fLocal_479 < 0f)
			{
				fLocal_479 = 0f;
			}
			if (fLocal_479 > 3f)
			{
				iLocal_54 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
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
		if ((((((!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_50[iVar0]) || unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true)) < 9f) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x47E4E977581C5B55(iLocal_50[iVar0]))
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
		if (!unk_0xA3EE4A07279BB9DB(iLocal_50[0], iLocal_53, false) || !unk_0xA3EE4A07279BB9DB(iLocal_50[1], iLocal_53, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true);
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6())))
		{
			if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]))
				{
					if (unk_0x751B70C3D034E187(iLocal_50[0], unk_0xD80958FC74E988A6(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]))
				{
					if (unk_0x751B70C3D034E187(iLocal_50[1], unk_0xD80958FC74E988A6(), 12f, 12f, 5f, false, true, 0))
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
		if ((((((!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && unk_0xC86D67D52A707CF8(iLocal_50[iVar0], unk_0xD80958FC74E988A6(), true)) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && unk_0x4859F1FC66A6278E(iLocal_50[iVar0], unk_0xD80958FC74E988A6()))) || unk_0xC86D67D52A707CF8(iLocal_50[iVar0], unk_0xD80958FC74E988A6(), true)) || (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true) && func_66())) || unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0])) || unk_0x5F9532F3B5CC2551(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return 1;
	}
	if (unk_0x4C241E39B23DF959(iLocal_53, false))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]))
			{
				if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()) && unk_0x9A497FE2DF198913(iLocal_50[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_53, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_76, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0x4C241E39B23DF959(iLocal_53, false) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_53, true), 25f, 0)) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_50[0], true), 20f, 0))) || (!unk_0x84A2DD9AC37C35C1(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(iLocal_50[1], true), 20f, 0)))
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
		if (unk_0x7239B21A38F536BA(iLocal_50[iVar0]))
		{
			if ((!unk_0x84A2DD9AC37C35C1(iLocal_50[iVar0]) && !unk_0x5F9532F3B5CC2551(iLocal_50[iVar0])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true), 5f, true) || func_31(unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true) + Vector(5f, 10f, 10f), unk_0x3FEF770D40960D5A(iLocal_50[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xC86D67D52A707CF8(iLocal_50[iVar0], unk_0xD80958FC74E988A6(), true))
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
	
	iLocal_53 = unk_0xAF35D0D2583051B0(iLocal_103, Local_76, fLocal_79, 1, 1);
	iLocal_56 = unk_0x509D5878EB39E842(joaat("prop_security_case_01"), Local_76, true, true, false);
	unk_0x6B9BBD38AB0796DF(iLocal_56, iLocal_53, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true);
	unk_0xEA1C610A04DB6BBB(iLocal_56, 0);
	unk_0xA53ED5520C07654A(iLocal_56, iLocal_53, false);
	unk_0x49733E92263139D1(iLocal_53);
	unk_0xB664292EAECF7FA6(iLocal_53, 3);
	unk_0xFAEE099C6F890BB8(iLocal_56, false, true, true, true, true, true, false, false);
	unk_0xEA02E132F5C68722(iLocal_53, true, 0f);
	unk_0x6B76DC1F3AE6E6A3(iLocal_53, 700);
	unk_0x8BA6F76BC53A1493(iLocal_53, false, 0);
	unk_0x0DC7CABAB1E9B67E(iLocal_53, 1);
	unk_0x068F64F2470F9656(iLocal_53, false);
	unk_0x5AFEEDD9BB2899D7(iLocal_53, true);
	unk_0x07FB139B592FA687((Local_76.f_0 - 200f), (Local_76.f_1 - 200f), (Local_76.f_0 + 200f), (Local_76.f_1 + 200f));
	if (iLocal_45 == 3)
	{
		iLocal_50[0] = unk_0x7DD959874C1FD534(iLocal_53, 26, iLocal_102, -1, true, true);
		iLocal_50[1] = unk_0x7DD959874C1FD534(iLocal_53, 26, iLocal_102, 0, true, true);
		unk_0x2497C4717C8B881E(iLocal_53, 1, 1);
		unk_0x0DC7CABAB1E9B67E(iLocal_53, 1);
	}
	else
	{
		iLocal_50[1] = unk_0xD49F9B0955C367DE(26, iLocal_102, Local_66[1 /*3*/], fLocal_73[1], true, true);
		iLocal_50[0] = unk_0xD49F9B0955C367DE(26, iLocal_102, Local_66[0 /*3*/], fLocal_73[0], true, true);
		unk_0x69F4BE8C8CC4796C(iLocal_50[1], iLocal_50[0], -1, 0, 2);
	}
	func_79(iLocal_50[1]);
	unk_0xF372BC22FCB88606("Security_guards", &iLocal_65);
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		unk_0xA9C8960E8684C1B5(iLocal_50[iVar0], 0);
		unk_0x9F7794730795E019(iLocal_50[iVar0], 1, false);
		unk_0x9F7794730795E019(iLocal_50[iVar0], 13, false);
		unk_0x9F7794730795E019(iLocal_50[iVar0], 6, true);
		unk_0x9F7794730795E019(iLocal_50[iVar0], 8, false);
		unk_0x9F7794730795E019(iLocal_50[iVar0], 10, true);
		unk_0x70A2D1137C8ED7C9(iLocal_50[iVar0], 512, true);
		unk_0x1913FE4CBF41C463(iLocal_50[iVar0], 118, false);
		unk_0x70A2D1137C8ED7C9(iLocal_50[iVar0], 128, true);
		unk_0xDF993EE5E90ABA25(iLocal_50[iVar0], false);
		unk_0xEA02E132F5C68722(iLocal_50[iVar0], true, 0f);
		unk_0xBC0ED94165A48BC2(iLocal_50[iVar0], true);
		unk_0x94D94BF1A75AED3D(iLocal_50[iVar0], true);
		unk_0xBF0FD6E56C964FCB(iLocal_50[iVar0], joaat("weapon_pistol"), -1, false, true);
		unk_0xC80A74AC829DDD92(iLocal_50[iVar0], iLocal_65);
		unk_0x971D38760FBC02EF(iLocal_50[iVar0], true);
		unk_0x5927F96A78577363(iLocal_50[iVar0], 250);
		iVar0++;
	}
	unk_0x0DC7CABAB1E9B67E(iLocal_50[1], 1);
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_65);
	unk_0xBF25EB89375A37AD(1, iLocal_65, joaat("COP"));
	unk_0xBF25EB89375A37AD(2, iLocal_65, joaat("player"));
	unk_0xBF25EB89375A37AD(2, joaat("player"), iLocal_65);
	if (iLocal_45 == 1)
	{
		unk_0x93376B65A266EB5F(iLocal_50[0], 0, 1, 0, false);
		unk_0xEBD76F2359F190AC(iLocal_50[0], false);
		unk_0x93376B65A266EB5F(iLocal_50[1], 0, 1, 0, false);
		unk_0xEBD76F2359F190AC(iLocal_50[1], false);
	}
	if (func_11() == 0 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_68(&Local_139, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_68(&Local_139, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_68(&Local_139, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	func_68(&Local_139, 3, iLocal_50[0], "SECVANGUY1", 0, 1);
	func_68(&Local_139, 4, iLocal_50[1], "SECVANGUY2", 0, 1);
	unk_0x0FC2D89AC25A5814(iLocal_103, true);
	unk_0xE163A4BCE4DE6F11(iLocal_102, true);
	if (iLocal_45 != 3)
	{
	}
}

float func_146(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
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
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 29))
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

int func_150(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		if (unk_0xA921AA820C25702F(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(iParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(sParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(sParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(sParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(sParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(iParam0, 27));
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(iParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(iParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
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
		if (unk_0xA921AA820C25702F(iParam0, iVar0))
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
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x0C515FAB3FF9EA92(sParam3, "NULL"))
					{
						if (unk_0x0C515FAB3FF9EA92(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], iParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], 30);
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_167())
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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
	if (unk_0xCA042B6957743895(&cVar2))
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
	return Global_96891 > 0;
}

int func_165()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_167()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_167())
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
	if ((Global_97162 == func_59() && unk_0xD2D57F1D764117B1()) && Global_97163)
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
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_146 + uParam0->f_147) || unk_0xA921AA820C25702F(Global_89784.f_20, 2)) || unk_0xA921AA820C25702F(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_171(int* iParam0)
{
	func_172(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_172(int* iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(*iParam0, 30))
	{
		switch (func_151(*iParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(iParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(sParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(sParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(sParam1, unk_0xA921AA820C25702F(*iParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(sParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(*iParam0, 27));
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(iParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 29);
	}
}

void func_173()
{
	iLocal_104 = joaat("prop_security_case_01");
	iLocal_103 = joaat("stockade");
	iLocal_102 = joaat("s_m_m_armoured_01");
	iLocal_127 = unk_0xD53343AA4FB7DD28(3000, 8000);
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
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_176(int iParam0)
{
	Global_97162 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
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
		if (Global_97162 != -1)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
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
		if (!func_211(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
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
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
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
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_120(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
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
	
	func_199(&uVar0, unk_0x494E97C2EF27C470());
	func_198(&uVar0, unk_0x13D2B8ADD79640F2());
	func_197(&uVar0, unk_0x25223CA6B4D20B7F());
	func_196(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_195(&uVar0, unk_0xBBC72712E80257A1());
	func_194(&uVar0, unk_0x961777E64BDAF717());
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
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_1()) || Global_96220) || Global_24446) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_1()) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_1()) || Global_96220) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_1()) || Global_96220) || Global_24446) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_18(8, -1)) || func_205()) || func_204()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_1()) || Global_24446) || func_209()) || func_18(8, -1)) || func_207()) || func_206()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_1()) || func_207()) || Global_96220) || Global_24446) || func_209()) || Global_35953) || func_18(8, -1)) || func_206()) || func_204()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_1()) || Global_96220) || Global_24446) || func_209()) || func_18(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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
	return Global_89823.f_1;
}

int func_204()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_89836.f_291 > 0;
}

bool func_208()
{
	return Global_89836.f_290 > 0;
}

var func_209()
{
	return Global_1315898;
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
	return Global_97173.f_5944.f_889[iParam0];
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
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
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
		if (unk_0xAFC1CA75AD4074D1(iLocal_136))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_63))
			{
				unk_0x86A652570E5F25DD(&iLocal_63);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_56))
		{
			unk_0x539E0AE3E6634B9F(&iLocal_56);
		}
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			if (unk_0xE31C2C72B8692B64(iLocal_55))
			{
				unk_0x539E0AE3E6634B9F(&iLocal_55);
			}
			else
			{
				unk_0x3AE22DEB5BA5A3E6(&iLocal_55);
			}
		}
		unk_0xE532F5D78798DAAB(iLocal_103);
		unk_0xE532F5D78798DAAB(iLocal_102);
		unk_0xE532F5D78798DAAB(iLocal_104);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0xE163A4BCE4DE6F11(iLocal_102, false);
		unk_0x0FC2D89AC25A5814(iLocal_103, false);
	}
	if (iLocal_130 != 0)
	{
		unk_0x2CDA538C44C6CCE5(iLocal_130);
	}
	unk_0x31D16B74C6E29D66(iLocal_64, false);
	func_121(&uLocal_304, 0, 0);
	func_223(-1);
	func_218(&uLocal_316, 0);
	unk_0x1090044AD1DA76FA();
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
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*18*/], 30))
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

void func_222(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		switch (func_151(iParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(iParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(sParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(sParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(sParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(sParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(iParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(iParam2, unk_0xA921AA820C25702F(iParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
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
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_97162, 1), 64);
		if (func_58(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_224(&Global_24503);
	Global_97163 = 0;
	func_176(-1);
}

void func_224(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
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
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
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
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
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
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x22AC59A870E6A669(iParam0, -1))
		{
			return -1;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 0))
		{
			return 0;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 2))
		{
			return 2;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 3))
		{
			return 3;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 4))
		{
			return 4;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 5))
		{
			return 5;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 6))
		{
			return 6;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 7))
		{
			return 7;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

