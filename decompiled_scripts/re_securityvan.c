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
		unk_0xC23A229F78DAD92A();
	}
	if (Global_3)
	{
		if (iLocal_46 != 2)
		{
			unk_0xC23A229F78DAD92A();
		}
	}
	else
	{
		if (unk_0x8D841F1DD3FA555F(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
				{
					if (unk_0x7404950238A154C2(iLocal_53, 0))
					{
						if (!unk_0x04C377C10639B842(iLocal_50[iVar0], iLocal_53, 0))
						{
							unk_0x3C3A95141D01773E(iLocal_50[iVar0], iLocal_53, -1, func_234(iLocal_53), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0x52A7A8711E08087B(iLocal_50[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(Local_86, 9, iLocal_46, 1, 0))
		{
			unk_0xC23A229F78DAD92A();
		}
		else
		{
			func_174(-1);
		}
	}
	func_173();
	uLocal_64 = unk_0x13705C66F125D98D(Local_76 + Vector(30f, 30f, 30f), Local_76 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
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
			unk_0x36137B7A77318822("RE_SV", 0);
			switch (iLocal_509)
			{
				case 0:
					if (unk_0x52AB115D3D6A8417() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_45 == 3 && !(unk_0x547A2AA158CA2804(Local_76, 3f) && func_146(unk_0x81873881071CD9FE(), Local_76, 1) < 150f)) || iLocal_45 != 3)
							{
								if (iLocal_45 == 3)
								{
									if (!unk_0x547A2AA158CA2804(Local_76, 8f))
									{
										unk_0x7C6BF0CD5D7454C9(Local_76, 4f, 1, 0, 0, 0);
									}
									iLocal_47 = 4;
									bLocal_108 = true;
								}
								else
								{
									iLocal_47 = 1;
								}
								func_145();
								if (unk_0x7404950238A154C2(iLocal_53, 0) && iLocal_45 == 3)
								{
									unk_0x3D24414865131CB8(iLocal_53, 5f);
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
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x7404950238A154C2(iLocal_53, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) < 10000f || !unk_0x895C275673BCEAB0(iLocal_53)) || (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x895C275673BCEAB0(iLocal_50[0]))) || (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x895C275673BCEAB0(iLocal_50[1])))
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
					if (unk_0x86CCCD2FAE9D5E65(iLocal_53) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (iLocal_45 == 3)
						{
							func_134();
							if (!unk_0x895C275673BCEAB0(iLocal_53) && (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 100f || func_144()))
							{
								func_125(1);
							}
						}
						else if (((!unk_0x895C275673BCEAB0(iLocal_53) && iLocal_47 == 4) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_95, Local_98, fLocal_101, 0, 1, 0)) || func_144())
						{
							func_125(1);
						}
						if ((iLocal_47 == 4 && unk_0x895C275673BCEAB0(iLocal_53)) && iLocal_45 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) > 100f)
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
				if (unk_0x7404950238A154C2(iLocal_53, 0) && unk_0x895C275673BCEAB0(iLocal_53))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) > 62500f)
					{
						func_217();
					}
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) > 10000f && !unk_0x52AB115D3D6A8417())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
			if (!unk_0xFBACB273AA628CC5(uLocal_62))
			{
				if (!func_124(2) && !bLocal_113)
				{
					if (!unk_0xA83A609D74168B30())
					{
						func_123("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
				{
					if (iLocal_510 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_55, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 0;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (((bLocal_108 && !unk_0x7423A8514A6F26DA(uLocal_136)) && unk_0x7404950238A154C2(iLocal_53, 0)) && !bLocal_120)
				{
					if (iLocal_510 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (unk_0x7423A8514A6F26DA(uLocal_136))
				{
					if (iLocal_510 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x6212DFFA012D5E5B(uLocal_136), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = 2;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (iLocal_510 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
					{
						func_114(&uLocal_304, iLocal_55, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_55, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 1)
				{
					if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 1))
					{
						func_114(&uLocal_304, iLocal_53, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				else if (iLocal_510 == 2)
				{
					if (unk_0x7423A8514A6F26DA(uLocal_136))
					{
						func_97(&uLocal_304, unk_0x6212DFFA012D5E5B(uLocal_136), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x6212DFFA012D5E5B(uLocal_136), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_510 = -1;
							func_121(&uLocal_304, 0, 0);
						}
					}
				}
				if (((!unk_0x930F8FBB8E9537CC(iLocal_53) && bLocal_108) && !bLocal_110) && (!func_124(0) || (unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_stickybomb"), 0) && !func_124(1))))
				{
					switch (iLocal_133)
					{
						case 0:
							if (!unk_0xA83A609D74168B30() && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 225f)
							{
								func_123("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_133++;
							}
							break;
						
						case 1:
							if (!unk_0xA83A609D74168B30())
							{
								iLocal_134 = unk_0x48E480685981C7D4();
								iLocal_133++;
							}
							break;
						
						case 2:
							if ((unk_0x48E480685981C7D4() - iLocal_134) > 2000 && unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_stickybomb"), 0))
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
						unk_0xB8BB626315D394F5(1);
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
					if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
					{
						if (unk_0x2CECB091948840A9(iLocal_50[0]) != 3)
						{
							unk_0x27ECBE0F286DB33B(iLocal_50[0], 3);
						}
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
					{
						if (unk_0x2CECB091948840A9(iLocal_50[1]) != 3)
						{
							unk_0x27ECBE0F286DB33B(iLocal_50[1], 3);
						}
					}
					if (((!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x930F8FBB8E9537CC(iLocal_50[0])) && !unk_0x5FEB513A4402FD59(iLocal_50[1])) && !unk_0x930F8FBB8E9537CC(iLocal_50[1]))
					{
						iLocal_128 = 1;
						func_73(iLocal_50[1]);
						func_71(0, 1);
					}
					else if (iLocal_128 == 1)
					{
						if (unk_0x5FEB513A4402FD59(iLocal_50[1]) || unk_0x930F8FBB8E9537CC(iLocal_50[1]))
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
						if (unk_0x5FEB513A4402FD59(iLocal_50[0]) || unk_0x930F8FBB8E9537CC(iLocal_50[0]))
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
			if ((((unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0xB0B9E53CEFDB16AA(iLocal_53, -1) == unk_0x81873881071CD9FE()) && !bLocal_112) && iLocal_47 != 8)
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
				if (unk_0xD273E693E19632C9(iLocal_65, joaat("player")) != 5)
				{
					unk_0xF8E77F310A5B6EAB(5, iLocal_65, joaat("player"));
					unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_65);
				}
			}
			if (bLocal_110)
			{
				if ((unk_0x7423A8514A6F26DA(uLocal_136) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uLocal_136)) > 250f)
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
				if (unk_0x86CCCD2FAE9D5E65(iLocal_50[iVar2]))
				{
					if ((!unk_0x930F8FBB8E9537CC(iLocal_50[iVar2]) && !unk_0x5FEB513A4402FD59(iLocal_50[iVar2])) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_50[0], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
				{
					if (unk_0x7404950238A154C2(iLocal_53, 0))
					{
						if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 10000f && unk_0x895C275673BCEAB0(iLocal_53)) || unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 62500f)
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
				iLocal_126 = unk_0x48E480685981C7D4();
				bLocal_106 = true;
			}
		}
		if (bLocal_106)
		{
			if (!bLocal_107)
			{
				if ((unk_0x48E480685981C7D4() - iLocal_126) > 5000)
				{
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
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
		if (((unk_0x48E480685981C7D4() - iLocal_126) > 10000 && unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) && !iLocal_125)
		{
			iVar4 = unk_0x2E0A9E3291F398E3(0, 3);
			if (iVar4 == 0)
			{
				unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_125 = 1;
		}
		if (bLocal_107)
		{
			if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1])) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
					{
						unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
						unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
					}
					unk_0xC685FEEB417A72C8(unk_0x1329891157A54C63(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
				}
			}
		}
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0 && func_2())
		{
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0x1D2AAC4A6D0B54F2(iLocal_53, 0) > 0f || unk_0x1D2AAC4A6D0B54F2(iLocal_53, 1) > 0f)
			{
				if (unk_0x4AC847D90EBAFAEE(iLocal_53) == 3)
				{
					unk_0xC390A6485FB80923(iLocal_53, 1);
				}
			}
			if (!bLocal_111)
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 0))
				{
					bLocal_111 = true;
				}
			}
			if (!bLocal_111)
			{
				if (unk_0x1D2AAC4A6D0B54F2(iLocal_53, 0) == 0f && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 1) == 0f)
				{
					if (unk_0x4AC847D90EBAFAEE(iLocal_53) == 1)
					{
						unk_0xC390A6485FB80923(iLocal_53, 3);
					}
				}
			}
		}
		if (iLocal_130 != 0)
		{
			if ((iLocal_47 == 8 || iLocal_47 == 6) || iLocal_47 == 4)
			{
				unk_0xB506887196D58A15(iLocal_130);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_50)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar5]) && !unk_0x930F8FBB8E9537CC(iLocal_50[iVar5]))
				{
					if (unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[iVar5]))
					{
						if (iLocal_47 == 1)
						{
							if (!iLocal_511[iVar5])
							{
								unk_0x9B70A01749E63C1C(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x9B70A01749E63C1C(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_511[iVar5] = 1;
							}
						}
						if (iLocal_47 == 7)
						{
							if (!iLocal_514[iVar5])
							{
								unk_0x9B70A01749E63C1C(iLocal_50[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x9B70A01749E63C1C(iLocal_50[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_514[iVar5] = 1;
							}
						}
						if (unk_0x2B738BBCCA41F260(iLocal_50[iVar5], 4) && !iLocal_114)
						{
							unk_0x30407CDA9AA59737(iLocal_50[iVar5], 1);
							iLocal_114 = 1;
						}
					}
					else
					{
						if (iLocal_511[iVar5])
						{
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 0, -1056964608);
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 1, -1056964608);
							iLocal_511[iVar5] = 0;
						}
						if (iLocal_514[iVar5])
						{
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 0, -1056964608);
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 1, -1056964608);
							iLocal_514[iVar5] = 0;
						}
						if (iLocal_511[iVar5] || iLocal_514[iVar5])
						{
							iLocal_511[iVar5] = 0;
							iLocal_514[iVar5] = 0;
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 0, -1056964608);
							unk_0xB70B1ED326335521(iLocal_50[iVar5], 1, -1056964608);
						}
						if (unk_0x2B738BBCCA41F260(iLocal_50[iVar5], 4) && iLocal_114)
						{
							unk_0x30407CDA9AA59737(iLocal_50[iVar5], 1);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar5]))
				{
					if (iLocal_511[iVar5] || iLocal_514[iVar5])
					{
						iLocal_511[iVar5] = 0;
						iLocal_514[iVar5] = 0;
						unk_0xB70B1ED326335521(iLocal_50[iVar5], 0, -1056964608);
						unk_0xB70B1ED326335521(iLocal_50[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_108 && !bLocal_495)
		{
			if (((((unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xCB8B9E751036ECB2(iLocal_55)) && !unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129])) && !unk_0x0BAE7BE122182FA8(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 3)) && !unk_0x0BAE7BE122182FA8(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x0BAE7BE122182FA8(iLocal_50[iLocal_129], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x31C1393E4ACFD794(iLocal_50[iLocal_129], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_115)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1))
				{
					iLocal_115 = 1;
				}
				unk_0xD24EA1F9FB501BB5(iLocal_53);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && (((unk_0x7404950238A154C2(iLocal_53, 0) && bLocal_113) && unk_0x7423A8514A6F26DA(uLocal_136)) || (!unk_0x7404950238A154C2(iLocal_53, 0) && unk_0x7423A8514A6F26DA(uLocal_136)))) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uLocal_136)) < 20f)
	{
		iVar1 = unk_0x76440C1BF84E203E(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x5FEB513A4402FD59(iVar1))
		{
			if (unk_0x14B7103DBD149FFE(iVar1) == joaat("s_m_y_cop_01") || unk_0x14B7103DBD149FFE(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x76440C1BF84E203E(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x5FEB513A4402FD59(iVar1))
		{
			if (unk_0x14B7103DBD149FFE(iVar1) == joaat("s_m_y_cop_01") || unk_0x14B7103DBD149FFE(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0xE800E479A60822F5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, 0, 1024);
		if (unk_0x7404950238A154C2(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0xE800E479A60822F5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, 0, 1024);
		if (unk_0x7404950238A154C2(iVar2, 0))
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[1], 1));
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_6();
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_7()
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

int func_8()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14394 = func_11();
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

int func_11()
{
	func_12();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_15(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_14(unk_0x81873881071CD9FE());
			if (func_13(iVar0) && (!func_16(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_13(Global_98931.f_1750.f_539.f_3549))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[0], 1));
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[1], 1));
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_50)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_50[iVar1]))
			{
				if (((!unk_0x5FEB513A4402FD59(iLocal_50[iVar1]) && unk_0xBBEF8270CE27C0EE(iLocal_50[iVar1], unk_0x81873881071CD9FE(), 1)) || unk_0x5FEB513A4402FD59(iLocal_50[iVar1])) || unk_0x930F8FBB8E9537CC(iLocal_50[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1])) && iLocal_115)
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
			if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
			{
				if (!unk_0xCB8B9E751036ECB2(iLocal_55))
				{
					unk_0xAB6AFD52AD641D70(&iLocal_55);
					if (!unk_0x7423A8514A6F26DA(uLocal_136) && !bLocal_110)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x48E480685981C7D4() - iLocal_135) > 3000)
				{
					if (unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]) || unk_0xD81BC0FD4D47CC04(iLocal_50[iLocal_129]))
					{
						unk_0xD88DD5B581458979(iLocal_55, 1, 1);
						iLocal_135 = unk_0x48E480685981C7D4();
					}
				}
			}
			else if (!unk_0x7423A8514A6F26DA(uLocal_136))
			{
				if (unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]) || ((!unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]) && unk_0xD81BC0FD4D47CC04(iLocal_50[iLocal_129])) && !bLocal_110))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_55);
		}
		if (unk_0x7423A8514A6F26DA(uLocal_136))
		{
			unk_0xA8FBABD3B6C9A9C9(uLocal_136);
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
				Param0 = { unk_0xC1B6FBB7681A920C(unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xC1B6FBB7681A920C(unk_0xB6AE0DAE06D56288(iLocal_50[iLocal_129], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xF3148AAF69AF9CBC(&uLocal_137, 3);
		unk_0xF3148AAF69AF9CBC(&uLocal_137, 4);
		unk_0xF3148AAF69AF9CBC(&uLocal_137, 1);
		if (bParam3)
		{
			uLocal_136 = unk_0x087C450D4ED68A11(joaat("pickup_money_security_case"), Param0, unk_0x1FC13B3C61DF24B9(iLocal_55, 2), 0, uLocal_127, 2, 1, 0);
		}
		else
		{
			uLocal_136 = unk_0xB2486A72F6F99B4C(joaat("pickup_money_security_case"), Param0, uLocal_137, uLocal_127, 1, 0);
		}
		if (!unk_0xFBACB273AA628CC5(uLocal_63))
		{
			uLocal_63 = func_25(uLocal_136);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_55);
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
	
	if (!unk_0x7423A8514A6F26DA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x8D0412562F2DBA20(uParam0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_27(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
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
		if (unk_0x86CCCD2FAE9D5E65(iLocal_56))
		{
			unk_0x4DBA43D6DE677017(iLocal_53, 2, 0, 0);
			unk_0x4DBA43D6DE677017(iLocal_53, 3, 0, 0);
			if (unk_0x86CCCD2FAE9D5E65(iLocal_56))
			{
				unk_0xAB6AFD52AD641D70(&iLocal_56);
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
			if (unk_0x1D2AAC4A6D0B54F2(iLocal_53, 2) == 0f && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 3) == 0f)
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
				{
					if (unk_0xCB8B9E751036ECB2(iLocal_55))
					{
						unk_0xD88DD5B581458979(iLocal_55, 1, 1);
					}
					unk_0x75F9EE7629363312(iLocal_55, iLocal_53, 0, Local_80, Local_83, 0, 0, 0, 0, 2, 1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_110 && !bLocal_120)
			{
				if (!unk_0x930F8FBB8E9537CC(iLocal_53))
				{
					if (((unk_0x7404950238A154C2(iLocal_53, 0) && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 2) > 0.25f) && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 3) > 0.25f) || !unk_0x7404950238A154C2(iLocal_53, 0))
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
						{
							if (unk_0xCB8B9E751036ECB2(iLocal_55))
							{
								unk_0x5A24D808FBE871F7(unk_0xEDDCCC3D357A50F8(), "DOORS_BLOWN", unk_0xDE2CF83C47088189(iLocal_53, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0xD88DD5B581458979(iLocal_55, 1, 0);
								unk_0x5CEA5F12775261F2(iLocal_55, 1, 0);
								unk_0x3729EADD1945A108(iLocal_55);
								unk_0xC1594874DE8816F6(iLocal_55, 1);
								Local_476 = { unk_0xB6AE0DAE06D56288(iLocal_55, 1) - unk_0xB6AE0DAE06D56288(iLocal_53, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_476) > 10f)
								{
									Local_476 = { func_29(Local_476) };
									Local_476 = { Local_476 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_132 < 100)
								{
									iLocal_116 = 1;
								}
								unk_0x14A3456454DB40CE(iLocal_55, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_475 = unk_0x48E480685981C7D4();
							}
							else if (unk_0xA8E32A859505A5B5(unk_0xB6AE0DAE06D56288(iLocal_55, 1), unk_0xB07F27EC3B05E4EA(iLocal_53, Local_469), unk_0xB07F27EC3B05E4EA(iLocal_53, Local_472), 0) >= 1f)
							{
								iLocal_48 = 3;
								iLocal_122[0] = 0;
								iLocal_122[1] = 0;
							}
							else if ((unk_0x48E480685981C7D4() - iLocal_475) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
				{
					unk_0x4DBA43D6DE677017(iLocal_53, 2, 0, 0);
					unk_0x4DBA43D6DE677017(iLocal_53, 3, 0, 0);
					func_24(unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_47 != 8)
			{
				func_62(8);
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_55) && !unk_0x7423A8514A6F26DA(uLocal_136))
			{
				if (unk_0xA04824262F150982(iLocal_55) == 0f && (unk_0x48E480685981C7D4() - iLocal_475) > 1000)
				{
					func_24(unk_0xB6AE0DAE06D56288(iLocal_55, 1), 1);
					unk_0xAB6AFD52AD641D70(&iLocal_55);
				}
				else if ((unk_0x48E480685981C7D4() - iLocal_475) > 5000)
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
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_56) && unk_0xCB8B9E751036ECB2(iLocal_56))
	{
		if (!iLocal_465)
		{
			if (unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iLocal_56, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x667A6FB4A24C8B47(unk_0xB6AE0DAE06D56288(iLocal_56, 1), 0.3f, unk_0x0BF51DF34080D28D(joaat("weapon_stickybomb")), 0))
			{
				iLocal_465 = 1;
			}
		}
		iVar0 = 0;
		unk_0xC918E8450C58D3B0(unk_0xB6AE0DAE06D56288(iLocal_56, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_56, 1), 1f, 1) || (unk_0xF46EAA2C25D08B6F(2, unk_0xB6AE0DAE06D56288(iLocal_56, 1), 0.3f) && iLocal_465))
		{
			iLocal_116 = 1;
			iVar0 = 1;
		}
		if (unk_0x4DC6EF945236C0F7(iLocal_56) < iLocal_131 && unk_0xBBEF8270CE27C0EE(iLocal_56, unk_0x81873881071CD9FE(), 0))
		{
			iLocal_132 = (iLocal_132 + (iLocal_131 - unk_0x4DC6EF945236C0F7(iLocal_56)));
			unk_0xD24EA1F9FB501BB5(iLocal_56);
		}
		if ((unk_0x48E480685981C7D4() - iLocal_466) > 200 && unk_0x86CCCD2FAE9D5E65(iLocal_53))
		{
			if (unk_0x8125B7035116E97E(unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 0f, (1.2195f - 0.27f)), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, fLocal_468, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_466 = unk_0x48E480685981C7D4();
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
		iLocal_131 = unk_0x4DC6EF945236C0F7(iLocal_56);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x6BB52CE7AD47544C(5, Param3, Param0) || (unk_0x6BB52CE7AD47544C(2, Param3, Param0) && !bParam10)) || (unk_0x6BB52CE7AD47544C(20, Param3, Param0) && !bParam10)) || unk_0x6BB52CE7AD47544C(4, Param3, Param0)) || (unk_0x6BB52CE7AD47544C(28, Param3, Param0) && !bParam10)) || unk_0x6BB52CE7AD47544C(32, Param3, Param0)) || unk_0x6BB52CE7AD47544C(25, Param3, Param0)) || unk_0x6BB52CE7AD47544C(9, Param3, Param0)) || (unk_0x6BB52CE7AD47544C(3, Param3, Param0) && !bParam10)) || (unk_0x6BB52CE7AD47544C(6, Param3, Param0) && !bParam10)) || unk_0x6BB52CE7AD47544C(0, Param3, Param0)) || unk_0x6BB52CE7AD47544C(1, Param3, Param0)) || unk_0x6BB52CE7AD47544C(23, Param3, Param0)) || unk_0x6BB52CE7AD47544C(34, Param3, Param0)) || unk_0x6BB52CE7AD47544C(14, Param3, Param0)) || (unk_0x6BB52CE7AD47544C(30, Param3, Param0) && !bParam10)) || (unk_0x6BB52CE7AD47544C(12, Param3, Param0) && !bParam10)) || unk_0x6BB52CE7AD47544C(7, Param3, Param0)) || (unk_0x6BB52CE7AD47544C(21, Param3, Param0) && !bParam10)) || (unk_0x6BB52CE7AD47544C(18, Param3, Param0) && !bParam10)) || unk_0x6BB52CE7AD47544C(15, Param3, Param0)) || unk_0x6BB52CE7AD47544C(10, Param3, Param0)) || unk_0x6BB52CE7AD47544C(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xF46EAA2C25D08B6F(5, Param6, iParam9) || (unk_0xF46EAA2C25D08B6F(2, Param6, iParam9) && !bParam10)) || (unk_0xF46EAA2C25D08B6F(20, Param6, iParam9) && !bParam10)) || unk_0xF46EAA2C25D08B6F(4, Param6, iParam9)) || (unk_0xF46EAA2C25D08B6F(28, Param6, iParam9) && !bParam10)) || unk_0xF46EAA2C25D08B6F(32, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(25, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(9, Param6, iParam9)) || (unk_0xF46EAA2C25D08B6F(3, Param6, iParam9) && !bParam10)) || (unk_0xF46EAA2C25D08B6F(6, Param6, iParam9) && !bParam10)) || unk_0xF46EAA2C25D08B6F(0, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(1, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(23, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(34, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(14, Param6, iParam9)) || (unk_0xF46EAA2C25D08B6F(30, Param6, iParam9) && !bParam10)) || (unk_0xF46EAA2C25D08B6F(12, Param6, iParam9) && !bParam10)) || unk_0xF46EAA2C25D08B6F(7, Param6, iParam9)) || (unk_0xF46EAA2C25D08B6F(21, Param6, iParam9) && !bParam10)) || (unk_0xF46EAA2C25D08B6F(18, Param6, iParam9) && !bParam10)) || unk_0xF46EAA2C25D08B6F(15, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(10, Param6, iParam9)) || unk_0xF46EAA2C25D08B6F(27, Param6, iParam9))
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
	
	if (!unk_0xFBACB273AA628CC5(uLocal_62))
	{
		if (!bLocal_109)
		{
			if ((!unk_0x5FEB513A4402FD59(iLocal_50[1]) && unk_0x7404950238A154C2(iLocal_53, 0)) && !bLocal_120)
			{
				if (!bLocal_108)
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_59[1]))
					{
						uLocal_59[1] = func_36(iLocal_50[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xFBACB273AA628CC5(uLocal_59[1]))
					{
						unk_0x0A8175F24237A3D4(&(uLocal_59[1]));
					}
					if (!unk_0xFBACB273AA628CC5(uLocal_58))
					{
						uLocal_58 = func_34(iLocal_53, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xFBACB273AA628CC5(uLocal_59[1]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_59[1]));
				}
				if (unk_0xFBACB273AA628CC5(uLocal_58))
				{
					unk_0x0A8175F24237A3D4(&uLocal_58);
				}
			}
		}
		else
		{
			if (unk_0xFBACB273AA628CC5(uLocal_59[0]) && unk_0x9690E1F2E1319B51(uLocal_59[0]) != 119)
			{
				unk_0x0A8175F24237A3D4(&(uLocal_59[0]));
			}
			if (unk_0xFBACB273AA628CC5(uLocal_59[1]) && unk_0x9690E1F2E1319B51(uLocal_59[1]) != 119)
			{
				unk_0x0A8175F24237A3D4(&(uLocal_59[1]));
			}
			if (unk_0xFBACB273AA628CC5(uLocal_58) && unk_0x9690E1F2E1319B51(uLocal_58) != 119)
			{
				unk_0x0A8175F24237A3D4(&uLocal_58);
			}
			if (unk_0x7404950238A154C2(iLocal_53, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
					{
						if (unk_0x04C377C10639B842(iLocal_50[iVar0], iLocal_53, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_58))
				{
					uLocal_58 = func_34(iLocal_53, 1, 0);
				}
			}
			else if (unk_0xFBACB273AA628CC5(uLocal_58))
			{
				unk_0x0A8175F24237A3D4(&uLocal_58);
			}
			if ((unk_0x7404950238A154C2(iLocal_53, 0) && unk_0xFBACB273AA628CC5(uLocal_58)) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 0))
				{
					if (unk_0x8849D149F1DEE8C1(uLocal_58) != 0)
					{
						unk_0x9DA87A96BDB876EC(uLocal_58, 0);
					}
				}
				else if (unk_0x8849D149F1DEE8C1(uLocal_58) != 255)
				{
					unk_0x9DA87A96BDB876EC(uLocal_58, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (!unk_0x7423A8514A6F26DA(uLocal_136) && !unk_0xE5AB05962FA1FF3F(iLocal_50[iVar0], 0))
					{
						if (!unk_0x5EF53977B76418E5(iLocal_50[iVar0]) || unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_47 == 8 && !unk_0xE5AB05962FA1FF3F(iLocal_50[iVar0], 0))
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
					if (!unk_0xFBACB273AA628CC5(uLocal_59[iVar0]))
					{
						uLocal_59[iVar0] = func_36(iLocal_50[iVar0], 1, 145);
					}
				}
				else if (unk_0xFBACB273AA628CC5(uLocal_59[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_59[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x7423A8514A6F26DA(uLocal_136) && !bLocal_120)
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_63))
				{
					uLocal_63 = func_26(uLocal_136);
				}
			}
			else if (unk_0xFBACB273AA628CC5(uLocal_63))
			{
				unk_0x0A8175F24237A3D4(&uLocal_63);
			}
		}
	}
	else if ((unk_0x86CCCD2FAE9D5E65(iLocal_53) && unk_0x86CCCD2FAE9D5E65(iLocal_50[0])) && unk_0x86CCCD2FAE9D5E65(iLocal_50[1]))
	{
		if ((((((!unk_0x895C275673BCEAB0(iLocal_53) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x895C275673BCEAB0(iLocal_50[0]) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x895C275673BCEAB0(iLocal_50[1]) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 50f, 50f, 20f, 0, 1, 0)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x0A8175F24237A3D4(&uLocal_62);
		}
	}
	if (unk_0xFBACB273AA628CC5(uLocal_59[0]))
	{
		unk_0x3C8D013C840ADA0A(uLocal_59[0], iLocal_121);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_59[1]))
	{
		unk_0x3C8D013C840ADA0A(uLocal_59[1], iLocal_121);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_58))
	{
		unk_0x3C8D013C840ADA0A(uLocal_58, iLocal_121);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_63))
	{
		unk_0x3C8D013C840ADA0A(uLocal_63, iLocal_121);
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
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_27(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
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
		unk_0xD6DF56BB9537BCC5(uVar0, func_27(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_27(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
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
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_40(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
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
	Global_98917 = iParam0;
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
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
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
		func_46(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_45() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_45()
{
	return Global_24946;
}

int func_46(int iParam0, int iParam1)
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_48();
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

int func_48()
{
	return Global_1312729;
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_98931.f_1750.f_539.f_3549)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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
		if (unk_0x0AEC8EB3EC414C02(uLocal_136))
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
	if (!unk_0x7423A8514A6F26DA(uLocal_136))
	{
		if (bLocal_108)
		{
			if (unk_0x7404950238A154C2(iLocal_53, 0))
			{
				if (!func_64(iLocal_53))
				{
					if (iLocal_464 == -1)
					{
						iLocal_464 = unk_0x48E480685981C7D4();
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
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]))
				{
					if (!func_64(iLocal_53))
					{
						if (iLocal_464 == -1)
						{
							iLocal_464 = unk_0x48E480685981C7D4();
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
			if ((unk_0x48E480685981C7D4() - iLocal_464) > 3000)
			{
				unk_0x71A8BCA218722FA1(&(iLocal_50[0]));
				unk_0x71A8BCA218722FA1(&(iLocal_50[1]));
				unk_0x80E0D9AA3C331C9A(iLocal_53, -1000f, 1);
				unk_0x5CEA5F12775261F2(iLocal_53, 1, 0);
				unk_0xE0913C01F5C0CC3D(&iLocal_53);
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
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x2A488C176D52CCA5(unk_0x6212DFFA012D5E5B(uLocal_136), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x895C275673BCEAB0(iParam0) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam0, 1)) < 300f)
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
		iLocal_506 = unk_0x48E480685981C7D4();
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		switch (iLocal_49)
		{
			case 0:
				bLocal_109 = true;
				if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1]))
				{
					if (func_21() < 30f && !unk_0x5FEB513A4402FD59(Local_139[3 /*10*/]))
					{
						func_4(&Local_139, cLocal_138, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && unk_0x86CCCD2FAE9D5E65(iLocal_55))
					{
						if ((iVar0 != iLocal_129 || bLocal_108) || !unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[iVar0]))
						{
							unk_0x27CC98B7C879C320(iLocal_50[iVar0]);
							unk_0xEAD984C2869B8B7C(&uLocal_57);
							if (unk_0xE5AB05962FA1FF3F(iLocal_50[iVar0], 0))
							{
								if (iLocal_116)
								{
									if (unk_0xDBB20E5B224C075C("move_injured_generic"))
									{
										unk_0x350B20EBD616FAD8(iLocal_50[iVar0], "move_injured_generic", 1048576000);
										iLocal_117[iVar0] = 1;
									}
								}
								unk_0x98046F3D16B9CF76(0, 0, 256);
							}
							unk_0xF64D185C5B88AF31(0);
							if (iLocal_117[iVar0])
							{
								unk_0x52A7A8711E08087B(0, unk_0x2E0A9E3291F398E3(1000, 3000));
							}
							unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
							unk_0x56D9ED1541046AF6(uLocal_57);
							unk_0xC65002CAA1212AF9(iLocal_50[iVar0], uLocal_57);
							unk_0xA3561415EB3DA3A3(&uLocal_57);
						}
						unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 6, 0);
						unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 0, 1);
						unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 1, 0);
						unk_0xA97FB3A1E6744863(iLocal_50[iVar0], 1);
						unk_0x632435B4905EF92E(iLocal_50[iVar0], 1);
						unk_0x1D15D99A10A15334(iLocal_50[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xCB8B9E751036ECB2(iLocal_55)) && !unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]))
				{
					unk_0x27CC98B7C879C320(iLocal_50[iLocal_129]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_49++;
				break;
			
			case 1:
				if (func_70(iLocal_129))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]))
					{
						unk_0x27CC98B7C879C320(iLocal_50[iLocal_129]);
						unk_0xEAD984C2869B8B7C(&uLocal_57);
						if (unk_0xE5AB05962FA1FF3F(iLocal_50[iLocal_129], 0))
						{
							unk_0x98046F3D16B9CF76(0, 0, 256);
						}
						unk_0xF64D185C5B88AF31(0);
						unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
						unk_0x56D9ED1541046AF6(uLocal_57);
						unk_0xC65002CAA1212AF9(iLocal_50[iLocal_129], uLocal_57);
						unk_0xA3561415EB3DA3A3(&uLocal_57);
					}
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1]))
				{
					if (unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1]))
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
						if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
						{
							if ((iLocal_48 == 2 && !iLocal_122[iVar0]) && !unk_0x930F8FBB8E9537CC(iLocal_53))
							{
								unk_0xA3EEFBEF4FB432EA(iLocal_50[iVar0], iLocal_53, unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -4f, 0f), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (((unk_0x7423A8514A6F26DA(uLocal_136) && !iLocal_122[iVar0]) && iLocal_48 == 3) && !bLocal_120)
							{
								unk_0xA3EEFBEF4FB432EA(iLocal_50[iVar0], iLocal_53, unk_0x6212DFFA012D5E5B(uLocal_136), 5f, 0);
								iLocal_122[iVar0] = 1;
							}
							if (bLocal_120)
							{
								if (iLocal_122[iVar0])
								{
									unk_0x6A5F414A4B63FEE7(iLocal_50[iVar0], 0);
									iLocal_122[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x48E480685981C7D4() - iLocal_499)) > unk_0x3ECD26BA4F631EE2(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4))
							{
								if (func_4(&Local_139, cLocal_138, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_499 = unk_0x48E480685981C7D4();
								}
							}
						}
					}
					if (unk_0x7404950238A154C2(iLocal_53, 0))
					{
						if (!bLocal_108)
						{
							if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 0) && (unk_0x48E480685981C7D4() - iLocal_506) > 5000)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
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
					unk_0x2288F0F0680B6992(iLocal_50[iVar0], 1048576000);
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
	
	if ((unk_0x48E480685981C7D4() - iLocal_483) > 250)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_50)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
				{
					if (unk_0xA1AC67F9B7B2E9C4(iLocal_50[iVar0], unk_0x81873881071CD9FE(), 19) && unk_0x246F0F22FE99F17E(iLocal_50[iVar0], unk_0x81873881071CD9FE()))
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
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
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
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[iParam0]))
		{
			if (unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[iParam0]))
			{
				if (unk_0x0BAE7BE122182FA8(iLocal_50[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0xC00796CF40447CA8(iLocal_50[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0xD88DD5B581458979(iLocal_55, 1, 1);
						unk_0xAB6AFD52AD641D70(&iLocal_55);
					}
				}
				else
				{
					unk_0x1D15D99A10A15334(iLocal_50[iParam0], 1);
					unk_0x31C1393E4ACFD794(iLocal_50[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x86CCCD2FAE9D5E65(iLocal_55) || (unk_0x86CCCD2FAE9D5E65(iLocal_55) && !unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[iParam0])));
	if (bVar0)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[iParam0]))
		{
			unk_0x1D15D99A10A15334(iLocal_50[iParam0], 0);
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
	
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		Var0 = { func_29(unk_0xFF603DE3EBE2C5F9(iLocal_53, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1))) };
		fVar3 = ((unk_0x3306AAAFE3B25098(iLocal_53) + unk_0x097CA9356FED843D(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x3306AAAFE3B25098(iLocal_53) + unk_0x097CA9356FED843D(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x957F1AE07A974C5E(unk_0xB6AE0DAE06D56288(iLocal_53, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x957F1AE07A974C5E(unk_0xB6AE0DAE06D56288(iLocal_53, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_500) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_50)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
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
				if ((((((!unk_0x5FEB513A4402FD59(iLocal_50[iVar12]) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_50[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x48E480685981C7D4() - iLocal_503[iVar12]) > 1000) && !unk_0xE5AB05962FA1FF3F(iLocal_50[iVar12], 0)) && !iLocal_480[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_500 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
						}
						unk_0xEAD984C2869B8B7C(&uVar14);
						if (func_66() || func_32(Local_500))
						{
							unk_0xE2585A2920C4268E(0, Var5[iVar12 /*3*/], unk_0x81873881071CD9FE(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xE7D69AA8A129E7D3(0, unk_0x81873881071CD9FE(), -1, 1);
						}
						else
						{
							unk_0xC5A6BA63DF40D65A(0, Var5[iVar12 /*3*/], Local_500, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x9746FEAEDB7B010A(0, Local_500, -1, 1, 0);
						}
						unk_0x56D9ED1541046AF6(uVar14);
						unk_0xC65002CAA1212AF9(iLocal_50[iVar12], uVar14);
						unk_0xA3561415EB3DA3A3(&uVar14);
					}
					iLocal_503[iVar12] = unk_0x48E480685981C7D4();
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
	
	if (unk_0x7404950238A154C2(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!bLocal_108)
				{
					unk_0x1D15D99A10A15334(iParam0, 1);
					unk_0x27CC98B7C879C320(iParam0);
					Local_484 = { unk_0xDE2CF83C47088189(iLocal_53, 0) };
					Local_487 = { unk_0x1FC13B3C61DF24B9(iLocal_53, 2) };
					Local_490 = { unk_0x5F1005EAF356FBDD("random@security_van", "sec_case_into_van_panic", Local_484, Local_487, 0, 2) };
					if (((!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x930F8FBB8E9537CC(iLocal_50[1])) && !unk_0x5FEB513A4402FD59(iLocal_50[0])) && !unk_0x930F8FBB8E9537CC(iLocal_50[0]))
					{
						if (func_21() < 20f)
						{
							if (bLocal_109)
							{
								func_4(&Local_139, cLocal_138, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x7423A8514A6F26DA(uLocal_136))
						{
							if (bLocal_109)
							{
								unk_0xD91194CE3D1E1D77(iParam0, unk_0x6212DFFA012D5E5B(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0xD91194CE3D1E1D77(iParam0, unk_0x6212DFFA012D5E5B(uLocal_136), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_49++;
						}
						else
						{
							func_79(iParam0);
							iLocal_49 = 2;
						}
					}
					else if (!unk_0x5FEB513A4402FD59(iParam0))
					{
						if (unk_0x7423A8514A6F26DA(uLocal_136))
						{
							unk_0xD91194CE3D1E1D77(iParam0, unk_0x6212DFFA012D5E5B(uLocal_136), 2f, -1, 0.25f, 0, 1193033728);
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
				if (!unk_0x5FEB513A4402FD59(iParam0) && unk_0x7423A8514A6F26DA(uLocal_136))
				{
					if ((unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0x6212DFFA012D5E5B(uLocal_136), 1) < 2f && !unk_0xD81BC0FD4D47CC04(iParam0)) && (unk_0x48E480685981C7D4() - iLocal_135) > 3000)
					{
						if (unk_0x2B738BBCCA41F260(iParam0, 4))
						{
							unk_0x649CF94A4282A7FD(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0xA8FBABD3B6C9A9C9(uLocal_136);
						func_79(iParam0);
						unk_0x649CF94A4282A7FD(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_110 = false;
						iLocal_129 = iLocal_128;
						iLocal_49++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x5FEB513A4402FD59(iParam0) && unk_0x7404950238A154C2(iLocal_53, 0))
				{
					if (unk_0xFA1212DE7C455679(iParam0, 713668775) != 1)
					{
						if (bLocal_109)
						{
							unk_0xD91194CE3D1E1D77(iParam0, Local_490, 2f, -1, 0.1f, 512, Local_487.f_2);
						}
						else
						{
							unk_0xD91194CE3D1E1D77(iParam0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
						}
						iLocal_49++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x5FEB513A4402FD59(iParam0))
				{
					if (unk_0x7423A8514A6F26DA(uLocal_136))
					{
						iLocal_49 = 0;
					}
					else
					{
						fVar0 = unk_0x3306AAAFE3B25098(iParam0);
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
						if (unk_0x2A488C176D52CCA5(Local_490, unk_0xB6AE0DAE06D56288(iParam0, 1)) < 0.3f)
						{
							if (unk_0xB9AA84B14E04BC20((fVar0 - Local_487.f_2)) < 15f)
							{
								unk_0xB1ECD5A6C1165CC7(iParam0, -1056964608);
								unk_0x27CC98B7C879C320(iParam0);
								bLocal_495 = true;
								iLocal_493 = unk_0x59C061A719024602(Local_484, Local_487, 2);
								if (bLocal_109)
								{
									unk_0x58BEA8B2364F8C48(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0x0F5BEB6747CF25B4(iLocal_53, iLocal_493, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x58BEA8B2364F8C48(iParam0, iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0x0F5BEB6747CF25B4(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x95BE9BA77CA91710(iParam0, 0, 0);
								iLocal_49++;
							}
						}
						else if (unk_0x895C275673BCEAB0(iParam0) && !unk_0x547A2AA158CA2804(Local_484, 2f))
						{
							unk_0xB067093BBAF0A747(iParam0, Local_484, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xDD7720E17AF5FE17(iLocal_493))
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
						if ((unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xEB15D648177E41E9(iLocal_55, iParam0)) && unk_0xF855C83E3A17514B(iLocal_493) > fLocal_507)
						{
							if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_53))
							{
								unk_0xD88DD5B581458979(iLocal_55, 1, 1);
								unk_0x5CEA5F12775261F2(iLocal_55, 0, 0);
								unk_0x75F9EE7629363312(iLocal_55, iLocal_53, 0, unk_0xFF603DE3EBE2C5F9(iLocal_53, unk_0xB6AE0DAE06D56288(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xF855C83E3A17514B(iLocal_493) > fLocal_508)
					{
						unk_0x80E0D9AA3C331C9A(iLocal_53, -4f, 1);
						unk_0x27CC98B7C879C320(iParam0);
						if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x9523562C21915B31(iLocal_53, 2, 1);
							unk_0x9523562C21915B31(iLocal_53, 3, 1);
							unk_0x1D15D99A10A15334(iParam0, 0);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xDD7720E17AF5FE17(iLocal_493) && unk_0xF855C83E3A17514B(iLocal_493) > fLocal_508) || !unk_0xDD7720E17AF5FE17(iLocal_493))
				{
					if (!bLocal_109)
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
						{
							unk_0x3C3A95141D01773E(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_49++;
				}
				break;
			
			case 6:
				if (unk_0x7404950238A154C2(iLocal_53, 0))
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
	if (!unk_0x7404950238A154C2(iLocal_53, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1])) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!bLocal_108)
		{
			if ((((((func_21() < 10f && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) && func_66()) || ((func_21() < 20f && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))) || (func_21() < 5f && bLocal_109)) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_74(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))) || ((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x86CCCD2FAE9D5E65(unk_0x2ADE2CEED2637E95())) && func_74(unk_0x2ADE2CEED2637E95())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_47 != 7)
	{
		if (bLocal_108)
		{
			if (unk_0xDD7720E17AF5FE17(iLocal_493))
			{
				unk_0x80E0D9AA3C331C9A(iLocal_53, -8f, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			unk_0x1D15D99A10A15334(iParam0, 0);
		}
	}
	if ((unk_0x7404950238A154C2(iLocal_53, 0) && iLocal_47 != 7) && unk_0xDD7720E17AF5FE17(iLocal_493))
	{
		unk_0x80E0D9AA3C331C9A(iLocal_53, -8f, 1);
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
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x86CCCD2FAE9D5E65(iLocal_53))
	{
		uVar59 = 4;
		unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0xB07F27EC3B05E4EA(iLocal_53, fVar73, 1.5f, 0f) };
		if (!bLocal_108)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x04C377C10639B842(iLocal_50[1], iLocal_53, 1))
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
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			iLocal_55 = unk_0xF364195A57BB7AE3(iLocal_104, Local_76, 1, 1, 0);
			unk_0x57B73553960790B6(iLocal_55, 0);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			unk_0x75F9EE7629363312(iLocal_55, iParam0, unk_0xDED1B3B1138F742B(iParam0, 28422), Local_89, Local_92, 1, 0, 0, 0, 2, 1);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
				{
					unk_0x1D15D99A10A15334(iLocal_50[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_109 = true;
			if (unk_0x7404950238A154C2(iLocal_53, 0))
			{
				if (unk_0x86CCCD2FAE9D5E65(func_83()))
				{
					if (!unk_0x5FEB513A4402FD59(func_83()))
					{
						if (unk_0xB0B9E53CEFDB16AA(iLocal_53, -1) != func_83() && unk_0xBEB00EB4ADDC2A33(iLocal_53, -1))
						{
							unk_0x3C3A95141D01773E(func_83(), iLocal_53, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && func_83() != iLocal_50[1])
				{
					if (unk_0xB0B9E53CEFDB16AA(iLocal_53, 0) != iLocal_50[1] && unk_0xBEB00EB4ADDC2A33(iLocal_53, 0))
					{
						unk_0x3C3A95141D01773E(iLocal_50[1], iLocal_53, -1, 0, 1073741824, 1, 0);
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
				if (unk_0x86CCCD2FAE9D5E65(func_83()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					unk_0xEFACB1875068FA30(func_83(), iLocal_53, unk_0x81873881071CD9FE(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x86CCCD2FAE9D5E65(func_83()))
				{
					unk_0x31F198965149F7F4(func_83(), iLocal_53, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_49++;
				}
			}
			break;
		
		case 3:
			if (unk_0x7404950238A154C2(iLocal_53, 0))
			{
				if (unk_0xA04824262F150982(iLocal_53) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x86CCCD2FAE9D5E65(iLocal_53) && unk_0x86CCCD2FAE9D5E65(unk_0xB0B9E53CEFDB16AA(iLocal_53, -1))) && (unk_0x930F8FBB8E9537CC(unk_0xB0B9E53CEFDB16AA(iLocal_53, -1)) || unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iLocal_53, -1))))
	{
		iVar1 = 0;
		if (unk_0xB0B9E53CEFDB16AA(iLocal_53, -1) == iLocal_50[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 100f)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar1]) && unk_0xFA1212DE7C455679(iLocal_50[iVar1], 242628503) != 1)
			{
				unk_0x7F5F0D37173E518C(iLocal_50[iVar1], 2, 1);
				unk_0xEAD984C2869B8B7C(&uVar2);
				unk_0xD74093F7638FAFA8(0, iLocal_53);
				unk_0xEFACB1875068FA30(0, iLocal_53, unk_0x81873881071CD9FE(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x56D9ED1541046AF6(uVar2);
				unk_0xC65002CAA1212AF9(iLocal_50[iVar1], uVar2);
				unk_0xA3561415EB3DA3A3(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0x7404950238A154C2(iLocal_53, 0) || unk_0x7423A8514A6F26DA(uLocal_136)) || iLocal_48 == 3) || unk_0x088B9F587DA37464(iLocal_53, 0, 7000)) || unk_0x088B9F587DA37464(iLocal_53, 3, 30000)) || unk_0x088B9F587DA37464(iLocal_53, 2, 30000)) || unk_0x088B9F587DA37464(iLocal_53, 1, 40000)) || (iLocal_49 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_53))
		{
			if (((((unk_0x4DC6EF945236C0F7(iLocal_53) < 300 || unk_0xFF463728B23A0037(iLocal_53) < 200f) || (unk_0x2A87B5EC03992FB8(iLocal_53, 0, 0) && unk_0x2A87B5EC03992FB8(iLocal_53, 1, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_53, 4, 0) && unk_0x2A87B5EC03992FB8(iLocal_53, 5, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_53, 0, 0) && unk_0x2A87B5EC03992FB8(iLocal_53, 4, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_53, 1, 0) && unk_0x2A87B5EC03992FB8(iLocal_53, 5, 0)))
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
	if (unk_0x7404950238A154C2(iLocal_53, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x930F8FBB8E9537CC(iLocal_50[0]))
		{
			if (!unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x930F8FBB8E9537CC(iLocal_50[1]))
		{
			if (!unk_0x04C377C10639B842(iLocal_50[1], iLocal_53, 0))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x930F8FBB8E9537CC(iLocal_50[0]))
	{
		return iLocal_50[0];
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x930F8FBB8E9537CC(iLocal_50[1]))
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
				if (unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xCB8B9E751036ECB2(iLocal_55))
				{
					unk_0xD88DD5B581458979(iLocal_55, 1, 1);
				}
			}
			if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) || !unk_0x5FEB513A4402FD59(iLocal_50[1])) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_139, cLocal_138, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_50)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
					{
						unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 17, 1);
						unk_0x7F5F0D37173E518C(iLocal_50[iVar0], 128, 1);
						unk_0x7F5F0D37173E518C(iLocal_50[iVar0], 16, 1);
						unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 1, 0);
						unk_0xEAD984C2869B8B7C(&uVar1);
						if (unk_0xE5AB05962FA1FF3F(iLocal_50[iVar0], 1))
						{
							unk_0x98046F3D16B9CF76(iLocal_50[iVar0], 0, 256);
						}
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(uVar1);
						unk_0xC65002CAA1212AF9(iLocal_50[iVar0], uVar1);
						unk_0xA3561415EB3DA3A3(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_112 = true;
			iLocal_49++;
			break;
		
		case 1:
			if (unk_0x7404950238A154C2(iLocal_53, 0))
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
	
	iVar1 = unk_0x59D35AC211D17FAB(iParam0) + 1;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x81873881071CD9FE())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (unk_0x0452D5BF20AD945A(iVar2))
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
					iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
					if (!unk_0x5FEB513A4402FD59(iVar3))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1]))
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_4(&Local_139, cLocal_138, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xCB8B9E751036ECB2(iLocal_55))
					{
						if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[0]))
						{
							func_87(0);
						}
						else
						{
							unk_0x27CC98B7C879C320(iLocal_50[0]);
						}
						if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[1]))
						{
							func_87(1);
						}
						else
						{
							unk_0x27CC98B7C879C320(iLocal_50[1]);
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
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]))
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
	if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_54) && unk_0x7404950238A154C2(iLocal_53, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_54, 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x930F8FBB8E9537CC(iLocal_54) || !unk_0x7404950238A154C2(iLocal_54, 0)) || (!unk_0xE5A3577CADD45750(iLocal_54, 1119092736) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_54, 1)))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_50[0], unk_0x81873881071CD9FE(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_50[1], unk_0x81873881071CD9FE(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
	if ((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && func_66()) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7))
	{
		func_62(2);
	}
	if (!unk_0x7404950238A154C2(iLocal_53, 0))
	{
		func_62(5);
	}
}

void func_87(int iParam0)
{
	if (!unk_0x5FEB513A4402FD59(iLocal_50[iParam0]) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0x27CC98B7C879C320(iLocal_50[iParam0]);
		unk_0xEAD984C2869B8B7C(&uLocal_57);
		if (unk_0xE5AB05962FA1FF3F(iLocal_50[iParam0], 0))
		{
			unk_0x98046F3D16B9CF76(0, 0, 256);
		}
		unk_0xF64D185C5B88AF31(0);
		unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 0, 2);
		unk_0xE7D69AA8A129E7D3(0, unk_0x81873881071CD9FE(), -1, 0);
		unk_0x56D9ED1541046AF6(uLocal_57);
		unk_0xC65002CAA1212AF9(iLocal_50[iParam0], uLocal_57);
		unk_0xA3561415EB3DA3A3(&uLocal_57);
		if (iLocal_130 == 0)
		{
			iLocal_130 = unk_0x8532947B41197C8B(116, unk_0xB6AE0DAE06D56288(iLocal_50[iParam0], 1), -1082130432);
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
			if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
			{
				unk_0x1D15D99A10A15334(iLocal_50[0], 1);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
			{
				unk_0x1D15D99A10A15334(iLocal_50[1], 1);
			}
			if (func_95())
			{
				if (func_4(&Local_139, cLocal_138, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1])) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (func_94() || func_93())
				{
					func_4(&Local_139, cLocal_138, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4))
				{
					func_4(&Local_139, cLocal_138, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xCB8B9E751036ECB2(iLocal_55))
				{
					if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[0]))
					{
						func_87(0);
					}
					else
					{
						unk_0x27CC98B7C879C320(iLocal_50[0]);
					}
					if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[1]))
					{
						func_87(1);
					}
					else
					{
						unk_0x27CC98B7C879C320(iLocal_50[1]);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_50[iLocal_129]))
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
					if (!func_91(iLocal_50[iVar1], 1000) && (func_21() < 2f && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x930F8FBB8E9537CC(iLocal_50[iVar1]))
					{
						if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_50[iVar1]) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_50[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x48E480685981C7D4() - iLocal_499)) > unk_0x3ECD26BA4F631EE2(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_499 = unk_0x48E480685981C7D4();
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
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x86CCCD2FAE9D5E65(iLocal_50[iVar2]))
		{
			if ((unk_0x5FEB513A4402FD59(iLocal_50[iVar2]) || unk_0x930F8FBB8E9537CC(iLocal_50[iVar2])) && unk_0xBBEF8270CE27C0EE(iLocal_50[iVar2], unk_0x81873881071CD9FE(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x5FEB513A4402FD59(iLocal_50[0]) || unk_0x5FEB513A4402FD59(iLocal_50[1])) || bLocal_120)
	{
		func_62(8);
	}
	if ((unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && func_66())
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x7404950238A154C2(iLocal_53, 0))
	{
		func_62(5);
	}
	if ((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
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
	Global_14559 = 0;
	func_90();
}

void func_90()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam0))
		{
			if ((unk_0xCF0C46D719D5302C(iParam0) && !unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0))) || (unk_0xCF8AA94BAD0F766A(iParam0) && unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam0, 1)) > fLocal_497)
				{
					iVar0 = 1;
				}
				if ((unk_0x48E480685981C7D4() - iLocal_498) > iParam1)
				{
					fLocal_497 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam0, 1));
					iLocal_498 = unk_0x48E480685981C7D4();
				}
			}
		}
	}
	return iVar0;
}

int func_92()
{
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 20f, 20f, 5f, 0, 1, 0) && !unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 1.7532f, 0.5984f), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
			{
				if ((!unk_0x04C377C10639B842(iLocal_50[iVar0], iLocal_53, 0) && unk_0xF2B8FCF27DF5227E(unk_0x81873881071CD9FE(), iLocal_53)) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1)) < 400f)
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
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()) == iLocal_53)
		{
			if (unk_0x5864DB3B46706FE6(unk_0x81873881071CD9FE()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) && unk_0x8D28631AAAEFC957(iLocal_50[0], unk_0x81873881071CD9FE(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && unk_0x8D28631AAAEFC957(iLocal_50[1], unk_0x81873881071CD9FE(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_96(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_97(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_98(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_98(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (!unk_0xCA020F3125A93EB9())
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
				if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && uParam7)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
			if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
			{
				if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && uParam7)
				{
					if (!func_96(iVar0))
					{
						func_123(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
		if (!unk_0x4357449749A521B1(iVar0))
		{
			if (func_96(iVar0) && unk_0xA83A609D74168B30())
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
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
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
	if (func_100(unk_0x81873881071CD9FE()))
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

int func_100(int iParam0)
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

int func_101(var uParam0)
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

int func_102(bool bParam0)
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

int func_103(char* sParam0)
{
	if (!func_104(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
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
	if (func_106(0))
	{
		return 0;
	}
	if (func_105())
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

bool func_105()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_106(int iParam0)
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

void func_107(var uParam0, struct<3> Param1, int iParam4)
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

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_112(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
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
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_112(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_112(bParam1, bParam2, bParam3))
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
				if (!func_111(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
				else if (!func_112(bParam1, bParam2, bParam3))
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
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_109(bParam1, bParam2, bParam3))
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

int func_110(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_111(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

void func_113()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (func_100(iParam1) && unk_0x1DB417C2D78C2390(iParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			unk_0xDADDFD5743EF6B4C(unk_0x8F1CCE5AF629C4D3(iParam1));
			unk_0xAA2EC5375B3FAE29(unk_0x8F1CCE5AF629C4D3(iParam1), 1);
			if (unk_0x06B618A8746F665B(unk_0x8F1CCE5AF629C4D3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xCF8AA94BAD0F766A(iParam1))
		{
			unk_0xFBE0C43B6A21C8D0(unk_0x522C7043B2B961F9(iParam1));
			if (unk_0x29C2AB191ACB1F1A(unk_0x522C7043B2B961F9(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam1))
		{
			unk_0x078BE1F12FC92912(unk_0x440E5F4F3C17D1EB(iParam1));
			if (unk_0x336B49310DF9C666(unk_0x440E5F4F3C17D1EB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xCA020F3125A93EB9())
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
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_96(iVar0))
							{
								func_123(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
			if (!unk_0x4357449749A521B1(sParam5))
			{
				if (func_96(sParam5))
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
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
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
	
	if (unk_0x930F8FBB8E9537CC(iParam1))
	{
		func_121(uParam0, 0, 0);
	}
	if (func_120(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			uVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(uVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_118())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xBFC4295E811860E5(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0D7089406F6A5C6E(0);
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
	unk_0xA9076AE35130AE29(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iParam1, -1, iVar3, iVar4);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_118()
{
	return func_119(unk_0x1329891157A54C63());
}

int func_119(var uParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_120(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_121(var uParam0, int iParam1, int iParam2)
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
		if (func_96(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

void func_122(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_6), iParam0);
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

bool func_124(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_6, iParam0);
}

int func_125(int iParam0)
{
	if (func_128())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_50(Global_98920))
		{
			func_126(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_50(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
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
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_123(func_127(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_123(func_127(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_123(func_127(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
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
	switch (func_129(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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
		if (Global_88620.f_44 == 1)
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
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
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
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
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
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_131(int iParam0)
{
	return func_132(iParam0, Global_35443);
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
	if (Global_35443 == 15)
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
			if (unk_0x7404950238A154C2(iLocal_53, 0))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1]))
				{
					unk_0x4B9FA68A3AC8C29D(iLocal_50[0], 6, 1);
					unk_0x4B9FA68A3AC8C29D(iLocal_50[1], 6, 1);
					unk_0x1D15D99A10A15334(iLocal_50[0], 1);
					unk_0x1D15D99A10A15334(iLocal_50[1], 1);
					if (unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 0) && unk_0x04C377C10639B842(iLocal_50[1], iLocal_53, 0))
					{
						if (iLocal_46 == 2)
						{
							unk_0xEAD984C2869B8B7C(&uVar0);
							unk_0x1ABA8A919187E144(0, iLocal_53, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x2D7E8CD6F4101CAB(0, iLocal_53, 10f, 786603);
							unk_0x56D9ED1541046AF6(uVar0);
							unk_0xC65002CAA1212AF9(iLocal_50[0], uVar0);
							unk_0xA3561415EB3DA3A3(&uVar0);
							iLocal_49++;
						}
						else if (iLocal_46 == 4)
						{
							unk_0xEAD984C2869B8B7C(&uVar1);
							unk_0x1ABA8A919187E144(0, iLocal_53, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x2D7E8CD6F4101CAB(0, iLocal_53, 10f, 786603);
							unk_0x56D9ED1541046AF6(uVar1);
							unk_0xC65002CAA1212AF9(iLocal_50[0], uVar1);
							unk_0xA3561415EB3DA3A3(&uVar1);
							iLocal_49++;
						}
						else if (iLocal_46 == 7)
						{
							unk_0xEAD984C2869B8B7C(&uVar2);
							unk_0x1ABA8A919187E144(0, iLocal_53, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x2D7E8CD6F4101CAB(0, iLocal_53, 10f, 786603);
							unk_0x56D9ED1541046AF6(uVar2);
							unk_0xC65002CAA1212AF9(iLocal_50[0], uVar2);
							unk_0xA3561415EB3DA3A3(&uVar2);
							iLocal_49++;
						}
						else
						{
							unk_0x2D7E8CD6F4101CAB(iLocal_50[0], iLocal_53, 10f, 786603);
							iLocal_49++;
						}
					}
					else
					{
						if (!unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 0) && unk_0xFA1212DE7C455679(iLocal_50[0], -1794415470) != 1)
						{
							unk_0x3C3A95141D01773E(iLocal_50[0], iLocal_53, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x04C377C10639B842(iLocal_50[1], iLocal_53, 0) && unk_0xFA1212DE7C455679(iLocal_50[1], -1794415470) != 1)
						{
							unk_0x3C3A95141D01773E(iLocal_50[1], iLocal_53, -1, 0, 1f, 8388608, 0);
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
			if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_50)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar3]) && !unk_0x930F8FBB8E9537CC(iLocal_50[iVar3]))
					{
						if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()) && unk_0x70847137E3B37A59(iLocal_50[iVar3]))
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
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_47 == 4)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x3009205CFCC7E866("PLAYER HAS PROJECTILE WEAPON", unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 0, 0, 255, 255);
				if ((unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -3.44f, -3f), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -3.44f, -3f), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x49A7D5BE22C6B8ED("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_53, 1)) < 225f)
				{
					unk_0x49A7D5BE22C6B8ED("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
				}
			}
		}
		if (((unk_0x7404950238A154C2(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_53, 1), 25f, 0)) || (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_50[0], 1), 20f, 0))) || (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_50[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_47 != 4)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
			{
				unk_0x4B9FA68A3AC8C29D(iLocal_50[0], 6, 0);
				unk_0x1D15D99A10A15334(iLocal_50[0], 0);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
			{
				unk_0x4B9FA68A3AC8C29D(iLocal_50[1], 6, 0);
				unk_0x1D15D99A10A15334(iLocal_50[1], 0);
			}
		}
	}
}

int func_135()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0x7404950238A154C2(iLocal_53, 0) && unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63())) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(iLocal_53, 1) };
		Var3 = { unk_0xC99223BD7E489FC6(iLocal_53) };
		Var6 = { unk_0xFF603DE3EBE2C5F9(iLocal_53, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_53) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_53)) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_50[0])) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_50[1]))) && unk_0xB9AA84B14E04BC20(unk_0x340B0B7228EC1565(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x340B0B7228EC1565(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if ((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, 2.7f, 7f, -2f), unk_0xB07F27EC3B05E4EA(iLocal_53, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, -2.7f, 7f, -2f), unk_0xB07F27EC3B05E4EA(iLocal_53, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 7f, -2f), unk_0xB07F27EC3B05E4EA(iLocal_53, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
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
	
	if (unk_0x7404950238A154C2(iLocal_53, 0) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
			{
				iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			}
		}
		else if (unk_0x86CCCD2FAE9D5E65(unk_0x2ADE2CEED2637E95()))
		{
			iVar0 = unk_0x2ADE2CEED2637E95();
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x86CCCD2FAE9D5E65(iLocal_53))
		{
			return ((unk_0x7404950238A154C2(iVar0, 0) && unk_0xB454AC819016CE5E(iVar0, iLocal_53)) && unk_0xA04824262F150982(iVar0) > 10f);
		}
	}
	return 0;
}

int func_138()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (iLocal_115)
		{
			return 1;
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[0]) || unk_0x930F8FBB8E9537CC(iLocal_50[0]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_50[0], unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_50[1]) || unk_0x930F8FBB8E9537CC(iLocal_50[1]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_50[1], unk_0x81873881071CD9FE(), 1))
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
	
	if ((!unk_0x5FEB513A4402FD59(iLocal_50[0]) && !unk_0x5FEB513A4402FD59(iLocal_50[1])) && unk_0x7404950238A154C2(iLocal_53, 0))
	{
		switch (iLocal_49)
		{
			case 0:
				Local_484 = { unk_0xDE2CF83C47088189(iLocal_53, 0) };
				Local_487 = { unk_0x1FC13B3C61DF24B9(iLocal_53, 2) };
				Local_490 = { unk_0x5F1005EAF356FBDD("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				bLocal_495 = false;
				iLocal_496 = 0;
				unk_0x5CC9D6711FE01F0D(iLocal_53);
				unk_0xEAD984C2869B8B7C(&uLocal_57);
				unk_0x52A7A8711E08087B(0, 5000);
				unk_0xD91194CE3D1E1D77(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
				unk_0x5D5CFD0EDDA0BC90(0, Local_487.f_2, 0);
				unk_0x56D9ED1541046AF6(uLocal_57);
				unk_0xC65002CAA1212AF9(iLocal_50[1], uLocal_57);
				unk_0xA3561415EB3DA3A3(&uLocal_57);
				iLocal_49++;
				break;
			
			case 1:
				Local_484 = { unk_0xDE2CF83C47088189(iLocal_53, 0) };
				Local_487 = { unk_0x1FC13B3C61DF24B9(iLocal_53, 2) };
				Local_490 = { unk_0x5F1005EAF356FBDD("random@security_van", "sec_case_into_van_calm", Local_484, Local_487, 0, 2) };
				if (!unk_0xDD7720E17AF5FE17(iLocal_494))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_76) < 22500f && unk_0x35333815A7E1BC14(iLocal_53))
					{
						iLocal_494 = unk_0x59C061A719024602(Local_484, Local_487, 2);
						unk_0x58BEA8B2364F8C48(iLocal_50[0], iLocal_494, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xFD9AE4CEB0ED9DDF(iLocal_494, 1);
					}
				}
				if (unk_0xFA1212DE7C455679(iLocal_50[1], 242628503) != 1)
				{
					unk_0xEAD984C2869B8B7C(&uLocal_57);
					unk_0xD91194CE3D1E1D77(0, Local_490, 1f, -1, 0.1f, 512, Local_487.f_2);
					unk_0x5D5CFD0EDDA0BC90(0, Local_487.f_2, 0);
					unk_0x56D9ED1541046AF6(uLocal_57);
					unk_0xC65002CAA1212AF9(iLocal_50[1], uLocal_57);
					unk_0xA3561415EB3DA3A3(&uLocal_57);
				}
				fVar0 = unk_0x3306AAAFE3B25098(iLocal_50[1]);
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
				if (unk_0xB9AA84B14E04BC20((fVar0 - Local_487.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_490, unk_0xB6AE0DAE06D56288(iLocal_50[1], 1)) < 0.2f)
				{
					unk_0xB1ECD5A6C1165CC7(iLocal_50[1], -1056964608);
					unk_0x27CC98B7C879C320(iLocal_50[1]);
					bLocal_495 = true;
					iLocal_493 = unk_0x59C061A719024602(Local_484, Local_487, 2);
					unk_0x58BEA8B2364F8C48(iLocal_50[1], iLocal_493, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0x0F5BEB6747CF25B4(iLocal_53, iLocal_493, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_49++;
				}
				break;
			
			case 2:
				if (!iLocal_105)
				{
					if (((unk_0xDD7720E17AF5FE17(iLocal_493) && unk_0xF855C83E3A17514B(iLocal_493) > 0.09f) && unk_0xF855C83E3A17514B(iLocal_493) < 0.11f) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_139, cLocal_138, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_105 = 1;
							}
						}
					}
				}
				if (unk_0xDD7720E17AF5FE17(iLocal_493))
				{
					if (!bLocal_108)
					{
						if ((unk_0x86CCCD2FAE9D5E65(iLocal_55) && unk_0xEB15D648177E41E9(iLocal_55, iLocal_50[1])) && unk_0xF855C83E3A17514B(iLocal_493) > 0.3793f)
						{
							if (!unk_0xEB15D648177E41E9(iLocal_55, iLocal_53))
							{
								unk_0xD88DD5B581458979(iLocal_55, 1, 1);
								unk_0x5CEA5F12775261F2(iLocal_55, 0, 0);
								unk_0x75F9EE7629363312(iLocal_55, iLocal_53, 0, unk_0xFF603DE3EBE2C5F9(iLocal_53, unk_0xB6AE0DAE06D56288(iLocal_55, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_108 = true;
						}
					}
					else if (unk_0xF855C83E3A17514B(iLocal_493) > 0.546243f)
					{
						unk_0x80E0D9AA3C331C9A(iLocal_53, -4f, 1);
						if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
						{
							iLocal_105 = 0;
							unk_0x9523562C21915B31(iLocal_53, 2, 1);
							unk_0x9523562C21915B31(iLocal_53, 3, 1);
							iLocal_49++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_105)
				{
					if (((unk_0xDD7720E17AF5FE17(iLocal_493) && unk_0xF855C83E3A17514B(iLocal_493) > 0.56f) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_50[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_139, cLocal_138, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_105 = 1;
						}
					}
				}
				if (!iLocal_496)
				{
					if ((unk_0xDD7720E17AF5FE17(iLocal_493) && unk_0xF855C83E3A17514B(iLocal_493) > 0.6f) || !unk_0xDD7720E17AF5FE17(iLocal_493))
					{
						if (unk_0xDD7720E17AF5FE17(iLocal_494))
						{
							unk_0x27CC98B7C879C320(iLocal_50[0]);
							iLocal_494 = unk_0x59C061A719024602(Local_484, Local_487, 2);
							unk_0x58BEA8B2364F8C48(iLocal_50[0], iLocal_494, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_496 = 1;
					}
				}
				else if ((unk_0xDD7720E17AF5FE17(iLocal_494) && unk_0xF855C83E3A17514B(iLocal_494) >= 0.92f) || !unk_0xDD7720E17AF5FE17(iLocal_494))
				{
					if (!unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 0) && unk_0xFA1212DE7C455679(iLocal_50[0], -1794415470) != 1)
					{
						unk_0x27CC98B7C879C320(iLocal_50[0]);
						unk_0x3C3A95141D01773E(iLocal_50[0], iLocal_53, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xDD7720E17AF5FE17(iLocal_493) && unk_0x61BAE3B4A4A2B2BB(iLocal_50[1], unk_0x8DAF7A748E41AD46("ENDS_IN_WALK")))
				{
					unk_0x27CC98B7C879C320(iLocal_50[1]);
					unk_0x3C3A95141D01773E(iLocal_50[1], iLocal_53, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 0) == 0f) && unk_0x1D2AAC4A6D0B54F2(iLocal_53, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x9523562C21915B31(iLocal_53, 0, 1);
					unk_0x9523562C21915B31(iLocal_53, 1, 1);
				}
				break;
		}
		if (((!unk_0x5FEB513A4402FD59(func_3()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(func_3(), 1)) < 30f) && unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
	{
		if (unk_0x7423A8514A6F26DA(uLocal_136))
		{
			func_62(7);
		}
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
			if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
			{
				if (unk_0x0BAE7BE122182FA8(iLocal_50[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_46 != 2)
					{
						unk_0x7C6E9DADDEC3138E(iLocal_50[0], "random@security_van", "driver_exit_panic", Local_484, Local_487, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x27CC98B7C879C320(iLocal_50[0]);
						unk_0x31C1393E4ACFD794(iLocal_50[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x7404950238A154C2(iLocal_53, 0) && unk_0xDD7720E17AF5FE17(iLocal_493)) && !unk_0x5FEB513A4402FD59(iLocal_50[1]))
			{
				unk_0x80E0D9AA3C331C9A(iLocal_53, -1000f, 1);
				unk_0x27CC98B7C879C320(iLocal_50[1]);
			}
		}
		if (bLocal_108 && !unk_0x7423A8514A6F26DA(uLocal_136))
		{
			unk_0x9523562C21915B31(iLocal_53, 2, 1);
			unk_0x9523562C21915B31(iLocal_53, 3, 1);
		}
	}
}

int func_140()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (func_74(unk_0x2ADE2CEED2637E95()))
				{
					iLocal_54 = unk_0x2ADE2CEED2637E95();
					return 1;
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
		{
			if (func_74(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				fLocal_479 = (fLocal_479 + unk_0x8D51D24D214E2FF2());
			}
			else if (fLocal_479 > 0f)
			{
				fLocal_479 = (fLocal_479 - (unk_0x8D51D24D214E2FF2() * 10f));
			}
			else if (fLocal_479 < 0f)
			{
				fLocal_479 = 0f;
			}
			if (fLocal_479 > 3f)
			{
				iLocal_54 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
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
		if ((((((!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63())) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_50[iVar0]) || unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1)) < 9f) && !unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0xD81BC0FD4D47CC04(iLocal_50[iVar0]))
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
		if (!unk_0x04C377C10639B842(iLocal_50[0], iLocal_53, 0) || !unk_0x04C377C10639B842(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1);
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE())))
		{
			if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_50[0]))
				{
					if (unk_0x8D28631AAAEFC957(iLocal_50[0], unk_0x81873881071CD9FE(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_50[1]))
				{
					if (unk_0x8D28631AAAEFC957(iLocal_50[1], unk_0x81873881071CD9FE(), 12f, 12f, 5f, 0, 1, 0))
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
		if ((((((!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && unk_0xBBEF8270CE27C0EE(iLocal_50[iVar0], unk_0x81873881071CD9FE(), 1)) || (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && unk_0xFB9BF178E208C231(iLocal_50[iVar0], unk_0x81873881071CD9FE()))) || unk_0xBBEF8270CE27C0EE(iLocal_50[iVar0], unk_0x81873881071CD9FE(), 1)) || (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1) && func_66())) || unk_0x5FEB513A4402FD59(iLocal_50[iVar0])) || unk_0x930F8FBB8E9537CC(iLocal_50[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return 1;
	}
	if (unk_0x7404950238A154C2(iLocal_53, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]))
			{
				if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()) && unk_0x70847137E3B37A59(iLocal_50[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_53, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
	{
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_76, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0x7404950238A154C2(iLocal_53, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_53, 1), 25f, 0)) || (!unk_0x5FEB513A4402FD59(iLocal_50[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_50[0], 1), 20f, 0))) || (!unk_0x5FEB513A4402FD59(iLocal_50[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB6AE0DAE06D56288(iLocal_50[1], 1), 20f, 0)))
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
		if (unk_0x86CCCD2FAE9D5E65(iLocal_50[iVar0]))
		{
			if ((!unk_0x5FEB513A4402FD59(iLocal_50[iVar0]) && !unk_0x930F8FBB8E9537CC(iLocal_50[iVar0])) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if ((unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1), 5f, 1) || func_31(unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1) + Vector(5f, 10f, 10f), unk_0xB6AE0DAE06D56288(iLocal_50[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xBBEF8270CE27C0EE(iLocal_50[iVar0], unk_0x81873881071CD9FE(), 1))
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
	
	iLocal_53 = unk_0xE00F8DEA9778FC87(iLocal_103, Local_76, fLocal_79, 1, 1);
	iLocal_56 = unk_0xF364195A57BB7AE3(joaat("prop_security_case_01"), Local_76, 1, 1, 0);
	unk_0x75F9EE7629363312(iLocal_56, iLocal_53, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xABA9860C0161F3CD(iLocal_56, 0);
	unk_0x6436C99061D370A7(iLocal_56, iLocal_53, 0);
	unk_0x5CC9D6711FE01F0D(iLocal_53);
	unk_0xC390A6485FB80923(iLocal_53, 3);
	unk_0xCEDA5B7DDF6C8846(iLocal_56, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0xA0E2C72EEFBD5858(iLocal_53, 1, 0);
	unk_0x9765BF567DB87B5F(iLocal_53, 700);
	unk_0x55E6058CA305144A(iLocal_53, 0, 0);
	unk_0x3B7AFF7DCE22C1CF(iLocal_53, 1);
	unk_0x70999EB8C809CFC7(iLocal_53, 0);
	unk_0x644B92FD8C775616(iLocal_53, 1);
	unk_0xCF95B143971C4F42((Local_76.f_0 - 200f), (Local_76.f_1 - 200f), (Local_76.f_0 + 200f), (Local_76.f_1 + 200f));
	if (iLocal_45 == 3)
	{
		iLocal_50[0] = unk_0x4D135F3066A9BF9C(iLocal_53, 26, iLocal_102, -1, 1, 1);
		iLocal_50[1] = unk_0x4D135F3066A9BF9C(iLocal_53, 26, iLocal_102, 0, 1, 1);
		unk_0x686D6CDC14C4BA6C(iLocal_53, 1, 1);
		unk_0x3B7AFF7DCE22C1CF(iLocal_53, 1);
	}
	else
	{
		iLocal_50[1] = unk_0x206897C6DBC12488(26, iLocal_102, Local_66[1 /*3*/], fLocal_73[1], 1, 1);
		iLocal_50[0] = unk_0x206897C6DBC12488(26, iLocal_102, Local_66[0 /*3*/], fLocal_73[0], 1, 1);
		unk_0xAF625598EDA64AD3(iLocal_50[1], iLocal_50[0], -1, 0, 2);
	}
	func_79(iLocal_50[1]);
	unk_0x4865E80F793024CE("Security_guards", &iLocal_65);
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		unk_0x0CD6B65135C8C3FE(iLocal_50[iVar0], 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 1, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 13, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 6, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 8, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_50[iVar0], 10, 1);
		unk_0x7F5F0D37173E518C(iLocal_50[iVar0], 512, 1);
		unk_0xCE566DBDCACD245E(iLocal_50[iVar0], 118, 0);
		unk_0x7F5F0D37173E518C(iLocal_50[iVar0], 128, 1);
		unk_0x2644F84BE1F3524B(iLocal_50[iVar0], 0);
		unk_0xA0E2C72EEFBD5858(iLocal_50[iVar0], 1, 0);
		unk_0x36C8C9789AEE2A5D(iLocal_50[iVar0], 1);
		unk_0xC1FE60958AC9A638(iLocal_50[iVar0], 1);
		unk_0x8E4A427F5C43E416(iLocal_50[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x506A601663C5417C(iLocal_50[iVar0], iLocal_65);
		unk_0x6CB332CB31E9FA96(iLocal_50[iVar0], 1);
		unk_0x6927F8C100125A71(iLocal_50[iVar0], 250);
		iVar0++;
	}
	unk_0x3B7AFF7DCE22C1CF(iLocal_50[1], 1);
	unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_65);
	unk_0xF8E77F310A5B6EAB(1, iLocal_65, joaat("COP"));
	unk_0xF8E77F310A5B6EAB(2, iLocal_65, joaat("player"));
	unk_0xF8E77F310A5B6EAB(2, joaat("player"), iLocal_65);
	if (iLocal_45 == 1)
	{
		unk_0x8F6F76DC62AD09F1(iLocal_50[0], 0, 1, 0, 0);
		unk_0x88ED7588393C4981(iLocal_50[0], 0);
		unk_0x8F6F76DC62AD09F1(iLocal_50[1], 0, 1, 0, 0);
		unk_0x88ED7588393C4981(iLocal_50[1], 0);
	}
	if (func_11() == 0 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		func_68(&Local_139, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		func_68(&Local_139, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		func_68(&Local_139, 2, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	func_68(&Local_139, 3, iLocal_50[0], "SECVANGUY1", 0, 1);
	func_68(&Local_139, 4, iLocal_50[1], "SECVANGUY2", 0, 1);
	unk_0xB5A91586385F755B(iLocal_103, 1);
	unk_0xCC3B713B19102AAC(iLocal_102, 1);
	if (iLocal_45 != 3)
	{
	}
}

float func_146(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0x236D8AD7EE179F46(iParam0, 30))
	{
		if (unk_0x236D8AD7EE179F46(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return unk_0x33ACB874CECA2D4B(uParam2);
					break;
				
				case 1:
					return unk_0x8E8B546E1A81D27F(uParam1);
					break;
				
				case 2:
					return unk_0xDBB20E5B224C075C(uParam1);
					break;
				
				case 3:
					return unk_0x682001A921A80123(sParam1);
					break;
				
				case 4:
					return unk_0x498998F33897432E(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x0F7866B4F5BE7CD4(sParam1);
					break;
				
				case 6:
					return unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(iParam0, 27));
					break;
				
				case 7:
					return unk_0x55D66FAE859776D2(uParam2);
					break;
				
				case 8:
					return unk_0xCD8DA898314F3016(uParam2);
					break;
				
				case 9:
					return unk_0x7A74065A1435C8AB();
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
		if (unk_0x236D8AD7EE179F46(iParam0, iVar0))
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xD994929E13CC1ED5(sParam3, "NULL"))
					{
						if (unk_0xD994929E13CC1ED5(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], 30);
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_167())
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
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
	return Global_98649 > 0;
}

int func_165()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_167()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_167())
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
	if ((Global_98920 == func_59() && unk_0x9284F36E422CA571()) && Global_98921)
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
		if ((unk_0x5CE96B2C9C8B727F() >= (uParam0->f_146 + uParam0->f_147) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 2)) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x5CE96B2C9C8B727F();
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
	if (unk_0x236D8AD7EE179F46(*uParam0, 30))
	{
		switch (func_151(*uParam0))
		{
			case 0:
				unk_0x32A12757CBF48A33(uParam2);
				break;
			
			case 1:
				unk_0x295DC04FC13E025B(uParam1);
				break;
			
			case 2:
				unk_0xF147E5A343BAF150(uParam1);
				break;
			
			case 3:
				unk_0xB711FC19ADBD3C70(uParam1, unk_0x236D8AD7EE179F46(*uParam0, 28));
				break;
			
			case 4:
				unk_0x995DCDA796A47049(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x2D148CBB17A2B0C7(uParam1);
				break;
			
			case 6:
				unk_0x9D2B95F4020E5347(uParam1, unk_0x236D8AD7EE179F46(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0A3E2A43DEA2DB9D(uParam2);
				break;
			
			case 8:
				unk_0x86B83C54AF71BD12(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x18C8823792832C78();
				break;
			
			default:
				break;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 29);
	}
}

void func_173()
{
	iLocal_104 = joaat("prop_security_case_01");
	iLocal_103 = joaat("stockade");
	iLocal_102 = joaat("s_m_m_armoured_01");
	uLocal_127 = unk_0x2E0A9E3291F398E3(3000, 8000);
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
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_176(int iParam0)
{
	Global_98920 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
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
		if (Global_98920 != -1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
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
		if (!func_211(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
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
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
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
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_25092)
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
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_120(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
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
	
	func_199(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_198(&uVar0, unk_0x25B31B877207A3A9());
	func_197(&uVar0, unk_0x0C937048CF6952B5());
	func_196(&uVar0, unk_0x8B6B3DD84CE74978());
	func_195(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_194(&uVar0, unk_0x57E483B654EDD986());
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
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_1()) || Global_97978) || Global_24948) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_1()) || Global_24948) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_1()) || Global_97978) || Global_24948) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_1()) || Global_97978) || Global_24948) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_18(8, -1)) || func_205()) || func_204()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_1()) || Global_24948) || func_209()) || func_18(8, -1)) || func_207()) || func_206()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_1()) || func_207()) || Global_97978) || Global_24948) || func_209()) || Global_36493) || func_18(8, -1)) || func_206()) || func_204()) || func_205()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_1()) || Global_97978) || Global_24948) || func_209()) || func_18(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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
	return Global_90848.f_1;
}

int func_204()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_90861.f_297 > 0;
}

bool func_208()
{
	return Global_90861.f_296 > 0;
}

var func_209()
{
	return Global_1315892;
}

int func_210()
{
	func_10();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_98931.f_6302.f_919[iParam0];
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
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
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
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_217()
{
	if (func_169())
	{
		if (unk_0x7423A8514A6F26DA(uLocal_136))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_63))
			{
				unk_0x0A8175F24237A3D4(&uLocal_63);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_56))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_56);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			if (unk_0x895C275673BCEAB0(iLocal_55))
			{
				unk_0xAB6AFD52AD641D70(&iLocal_55);
			}
			else
			{
				unk_0xB5713813CBD9E79F(&iLocal_55);
			}
		}
		unk_0x887F4488DA99FD21(iLocal_103);
		unk_0x887F4488DA99FD21(iLocal_102);
		unk_0x887F4488DA99FD21(iLocal_104);
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0xCC3B713B19102AAC(iLocal_102, 0);
		unk_0xB5A91586385F755B(iLocal_103, 0);
	}
	if (iLocal_130 != 0)
	{
		unk_0xB506887196D58A15(iLocal_130);
	}
	unk_0xE91F714E010C7127(uLocal_64, 0);
	func_121(&uLocal_304, 0, 0);
	func_223(-1);
	func_218(&uLocal_316, 0);
	unk_0xC23A229F78DAD92A();
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0x236D8AD7EE179F46(iParam0, 30))
	{
		switch (func_151(iParam0))
		{
			case 0:
				unk_0x887F4488DA99FD21(uParam2);
				break;
			
			case 1:
				unk_0xD8323B49BAE93D80(uParam1);
				break;
			
			case 2:
				unk_0x89A95366100690C0(uParam1);
				break;
			
			case 3:
				unk_0x9B331DCFDFC55491(uParam1);
				break;
			
			case 4:
				unk_0x4855165A2773595C(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x010ACF5A865CA942(uParam1);
				break;
			
			case 6:
				unk_0xABF33AFE6B2877A8();
				break;
			
			case 7:
				unk_0xEDEECB22A033000E(iParam2);
				break;
			
			case 8:
				unk_0xBEE99C97A1B87F95(iParam2, unk_0x236D8AD7EE179F46(iParam0, 26));
				break;
			
			case 9:
				unk_0x954FB3FC1E04A7A9();
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
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_98920, 1), 64);
		if (func_58(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_224(&Global_25005);
	Global_98921 = 0;
	func_176(-1);
}

void func_224(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
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
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
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
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
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
	func_195(uParam0, iParam5);
	func_196(uParam0, iParam4);
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
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		if (unk_0xBEB00EB4ADDC2A33(iParam0, -1))
		{
			return -1;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 0))
		{
			return 0;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 1))
		{
			return 1;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 2))
		{
			return 2;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 3))
		{
			return 3;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 4))
		{
			return 4;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 5))
		{
			return 5;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 6))
		{
			return 6;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 7))
		{
			return 7;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

