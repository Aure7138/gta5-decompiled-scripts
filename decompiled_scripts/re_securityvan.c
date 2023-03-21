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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[2] = { 0, 0 };
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67[2];
	float fLocal_74[2] = { 0f, 0f };
	struct<3> Local_77 = { 0, 0, 0 } ;
	float fLocal_80 = 0f;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118[2] = { 0, 0 };
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	char[] cLocal_139[8] = 0;
	struct<10> Local_140[16];
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1000;
	var uLocal_315 = 1000;
	var uLocal_316 = 0;
	var uLocal_317 = 8;
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
	var uLocal_463 = 0;
	var uLocal_464 = 1;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	float fLocal_469 = 0f;
	struct<3> Local_470 = { 0, 0, 0 } ;
	struct<3> Local_473 = { 0, 0, 0 } ;
	int iLocal_476 = 0;
	struct<3> Local_477 = { 0, 0, 0 } ;
	float fLocal_480 = 0f;
	int iLocal_481[2] = { 0, 0 };
	int iLocal_484 = 0;
	struct<3> Local_485 = { 0, 0, 0 } ;
	struct<3> Local_488 = { 0, 0, 0 } ;
	struct<3> Local_491 = { 0, 0, 0 } ;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	bool bLocal_496 = 0;
	int iLocal_497 = 0;
	float fLocal_498 = 0f;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	struct<3> Local_501 = { 0, 0, 0 } ;
	int iLocal_504[2] = { 0, 0 };
	int iLocal_507 = 0;
	float fLocal_508 = 0f;
	float fLocal_509 = 0f;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512[2] = { 0, 0 };
	int iLocal_515[2] = { 0, 0 };
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
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_81 = { 0.0203f, -3.1441f, 0.5027f };
	Local_84 = { 90f, 0f, 0f };
	Local_90 = { 0f, 0f, 0f };
	Local_93 = { 0f, 0f, 0f };
	iLocal_129 = 1;
	iLocal_130 = 1;
	cLocal_139 = "RESECAU";
	iLocal_465 = -1;
	fLocal_469 = -3.55f;
	Local_470 = { 0.014f, -0.9111f, 1.2317f };
	Local_473 = { 0f, -3.4368f, 1.2317f };
	iLocal_494 = -1;
	iLocal_495 = -1;
	iLocal_507 = -1;
	Local_87 = { Local_87 };
	Local_87 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2A488C176D52CCA5(Local_87, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_47 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_47 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -389f, 6061f, 31f) < 5f)
	{
		iLocal_47 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_47 = 4;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_47 = 5;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_47 = 6;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_47 = 7;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_47 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_47 = 9;
	}
	else if (unk_0x2A488C176D52CCA5(Local_87, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_47 = 10;
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	else
	{
		if (unk_0xE8A79675302ED812(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_54, 0))
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0xD179FA0466FA4FE3(iLocal_51[iVar0], iLocal_54, -1, func_243(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0xDE2D2B13F24A979D(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_226();
		}
		if (!func_186(Local_87, 9, iLocal_47, 1, 0))
		{
			unk_0x95E4B6F3ED223F5A();
		}
		else
		{
			func_183(-1);
		}
	}
	func_182();
	uLocal_65 = unk_0x1DAA351326EA3537(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_179(&uLocal_317);
		if (!func_178())
		{
			if (func_177())
			{
				func_226();
			}
			unk_0x2E94C9549322098D("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0x684B06333594F9EA() && !func_165())
					{
						if (func_156())
						{
							if ((iLocal_46 == 3 && !(unk_0x33CC9445B2DF9387(Local_77, 3f) && func_155(unk_0xBC25C936A095B5BA(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x33CC9445B2DF9387(Local_77, 8f))
									{
										unk_0x6C5F5B5F6894CCE3(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_154();
								if (unk_0xE59B7F5A03335350(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0xA4DFFFD5B234240D(iLocal_54, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_226();
					}
					break;
				
				case 1:
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0xE59B7F5A03335350(iLocal_54, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) < 10000f || !unk_0x41A5D6415E2CC10E(iLocal_54)) || (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x41A5D6415E2CC10E(iLocal_51[0]))) || (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x41A5D6415E2CC10E(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_153())
					{
						iLocal_510++;
					}
					if (iLocal_510 != 1)
					{
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 2:
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iLocal_46 != 3)
						{
							func_148();
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_54) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (iLocal_46 == 3)
						{
							func_143();
							if (!unk_0x41A5D6415E2CC10E(iLocal_54) && (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < 100f || func_153()))
							{
								func_134(1);
							}
						}
						else if (((!unk_0x41A5D6415E2CC10E(iLocal_54) && iLocal_48 == 4) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_153())
						{
							func_134(1);
						}
						if ((iLocal_48 == 4 && unk_0x41A5D6415E2CC10E(iLocal_54)) && iLocal_46 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) > 100f)
							{
								func_226();
							}
							else
							{
								func_134(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0x41A5D6415E2CC10E(iLocal_54))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) > 62500f)
					{
						func_226();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) > 10000f && !unk_0x684B06333594F9EA())
					{
						func_226();
					}
				}
			}
		}
		else
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			if (!unk_0x2DA8CA50A72528FB(uLocal_63))
			{
				if (!func_133(2) && !bLocal_114)
				{
					if (!unk_0xF16DAFF595E80F7C())
					{
						func_132("SV_VANHELP1", 15000);
						func_131(2);
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_56, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 0;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0xA901403F1DB7A780(uLocal_137)) && unk_0xE59B7F5A03335350(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 1;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0xA901403F1DB7A780(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x85EA1A40FC3A6769(uLocal_137), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 2;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_56))
					{
						func_123(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_56, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 1))
					{
						func_123(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0xA901403F1DB7A780(uLocal_137))
					{
						func_98(&uLocal_305, unk_0x85EA1A40FC3A6769(uLocal_137), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x85EA1A40FC3A6769(uLocal_137), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_130(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0x1D403DFADBC2DE3C(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_133(0) || (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_stickybomb"), 0) && !func_133(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0xF16DAFF595E80F7C() && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < 225f)
							{
								func_132("SV_DOORHELP1", 15000);
								func_131(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0xF16DAFF595E80F7C())
							{
								iLocal_135 = unk_0x105601648511CC64();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x105601648511CC64() - iLocal_135) > 2000 && unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_stickybomb"), 0))
							{
								func_132("SV_DOORHELP2", 15000);
								func_131(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_97("SV_DOORHELP1") || func_97("SV_DOORHELP2"))
					{
						unk_0x7456702622C62EA0(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_148();
					break;
				
				case 2:
					func_89();
					break;
				
				case 3:
					func_87();
					break;
				
				case 4:
					func_143();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
					{
						if (unk_0x10B4C722662E355C(iLocal_51[0]) != 3)
						{
							unk_0x4FFC2E7B0181636C(iLocal_51[0], 3);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
					{
						if (unk_0x10B4C722662E355C(iLocal_51[1]) != 3)
						{
							unk_0x4FFC2E7B0181636C(iLocal_51[1], 3);
						}
					}
					if (((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0)) && !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && !unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_73(iLocal_51[1]);
						func_71(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0x36CEFBE9B745A58D(iLocal_51[1]) || unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0))
						{
							iLocal_50 = 0;
							iLocal_129 = 0;
						}
						else
						{
							func_73(iLocal_51[1]);
						}
					}
					else if (iLocal_129 == 0)
					{
						if (unk_0x36CEFBE9B745A58D(iLocal_51[0]) || unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0))
						{
							iLocal_129 = -1;
						}
						else
						{
							func_73(iLocal_51[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_226();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0x3187EF5798B5D209(iLocal_54, -1, 0) == unk_0xBC25C936A095B5BA()) && !bLocal_113) && iLocal_48 != 8)
			{
				if (bLocal_109)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (bLocal_110)
			{
				if (unk_0xF9E3B31053F43360(iLocal_66, joaat("player")) != 5)
				{
					unk_0xA902E18EDF6FA0C8(5, iLocal_66, joaat("player"));
					unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0xA901403F1DB7A780(uLocal_137) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x85EA1A40FC3A6769(uLocal_137)) > 250f)
				{
					func_62(9);
				}
			}
			if (!bLocal_121)
			{
				if (func_61())
				{
					bLocal_121 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x724D816EA203A79E(iLocal_51[iVar2]))
				{
					if ((!unk_0x1D403DFADBC2DE3C(iLocal_51[iVar2], 0) && !unk_0x36CEFBE9B745A58D(iLocal_51[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_51[0], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_54))
				{
					if (unk_0xE59B7F5A03335350(iLocal_54, 0))
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 10000f && unk_0x41A5D6415E2CC10E(iLocal_54)) || unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 62500f)
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
		if (!bLocal_107)
		{
			if (func_22())
			{
				iLocal_127 = unk_0x105601648511CC64();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x105601648511CC64() - iLocal_127) > 5000)
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
					if (func_21() < 30f)
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_108 = true;
						}
					}
					else
					{
						bLocal_108 = true;
					}
				}
			}
		}
		if (((unk_0x105601648511CC64() - iLocal_127) > 10000 && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x491B2241281A03B7(0, 3);
			if (iVar4 == 0)
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					}
					unk_0x38428C0051CE903C(unk_0xB5CEFD608600A09F(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
				}
			}
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 && func_2())
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x9BA320A867CC80B3(iLocal_54, 0) > 0f || unk_0x9BA320A867CC80B3(iLocal_54, 1) > 0f)
			{
				if (unk_0xA3E58143095D5828(iLocal_54) == 3)
				{
					unk_0xD421BC740C5340C3(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x9BA320A867CC80B3(iLocal_54, 0) == 0f && unk_0x9BA320A867CC80B3(iLocal_54, 1) == 0f)
				{
					if (unk_0xA3E58143095D5828(iLocal_54) == 1)
					{
						unk_0xD421BC740C5340C3(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0x9A172FCB057ABAEF(iLocal_131);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar5]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[iVar5], 0))
				{
					if (unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x2ED10ACF200755F4(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x2ED10ACF200755F4(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x2ED10ACF200755F4(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x2ED10ACF200755F4(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x72C9157015C2151B(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0x0FC2D36CE8F740E4(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 0, -1056964608);
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 0, -1056964608);
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 0, -1056964608);
							unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x72C9157015C2151B(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0x0FC2D36CE8F740E4(iLocal_51[iVar5], 1);
							iLocal_115 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 0, -1056964608);
						unk_0x2396C3BAAE2ACE94(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0x724D816EA203A79E(iLocal_56) && unk_0xE7E55F7532DEE345(iLocal_56)) && !unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130])) && !unk_0x96044E39418AAF17(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0x96044E39418AAF17(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x96044E39418AAF17(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xE896C0AD02364F2A(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0x724D816EA203A79E(iLocal_54))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0x5502708AECB47F5D(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && (((unk_0xE59B7F5A03335350(iLocal_54, 0) && bLocal_114) && unk_0xA901403F1DB7A780(uLocal_137)) || (!unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0xA901403F1DB7A780(uLocal_137)))) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x85EA1A40FC3A6769(uLocal_137)) < 20f)
	{
		iVar1 = unk_0xDD69F88FEB1D3ABD(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_m_y_cop_01") || unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0xDD69F88FEB1D3ABD(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_m_y_cop_01") || unk_0x6F79ECA8C83E4357(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, 0, 1024);
		if (unk_0xE59B7F5A03335350(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar0, 0, 1024);
		if (unk_0xE59B7F5A03335350(iVar2, 0))
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
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_51[iVar1];
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
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
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
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_17();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_6();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
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
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_7()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_8()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_11();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_16(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_13(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_19()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[0], 1));
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[1], 1));
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
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0x724D816EA203A79E(iLocal_51[iVar1]))
			{
				if (((!unk_0x36CEFBE9B745A58D(iLocal_51[iVar1]) && unk_0xD9C1758D86688CEA(iLocal_51[iVar1], unk_0xBC25C936A095B5BA(), 1)) || unk_0x36CEFBE9B745A58D(iLocal_51[iVar1])) || unk_0x1D403DFADBC2DE3C(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && iLocal_116)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()
{
	if (!bLocal_121)
	{
		if (!bLocal_109)
		{
			if (unk_0x724D816EA203A79E(iLocal_56))
			{
				if (!unk_0xE7E55F7532DEE345(iLocal_56))
				{
					unk_0xA35241BCE4C1A24B(&iLocal_56);
					if (!unk_0xA901403F1DB7A780(uLocal_137) && !bLocal_111)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x105601648511CC64() - iLocal_136) > 3000)
				{
					if (unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]) || unk_0x2CDE18D6C89522AD(iLocal_51[iLocal_130]))
					{
						unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
						iLocal_136 = unk_0x105601648511CC64();
					}
				}
			}
			else if (!unk_0xA901403F1DB7A780(uLocal_137))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]) || ((!unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]) && unk_0x2CDE18D6C89522AD(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_56);
		}
		if (unk_0xA901403F1DB7A780(uLocal_137))
		{
			unk_0x9680DF46F29C0428(uLocal_137);
		}
	}
}

void func_24(struct<3> Param0, bool bParam3)
{
	if (!bLocal_121 && !bLocal_111)
	{
		if (!bParam3)
		{
			if (bLocal_109)
			{
				Param0 = { unk_0xEFF59CF8CAAFA23E(unk_0xA4455714F3DCE207(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xEFF59CF8CAAFA23E(unk_0x541C2AEF053615BC(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xF0059F27F7BB6680(&uLocal_138, 3);
		unk_0xF0059F27F7BB6680(&uLocal_138, 4);
		unk_0xF0059F27F7BB6680(&uLocal_138, 1);
		if (bParam3)
		{
			uLocal_137 = unk_0x37B86314BDCAA6F0(joaat("pickup_money_security_case"), Param0, unk_0xD7490CDEF40F3DA2(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x249B372087B496EC(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0x2DA8CA50A72528FB(uLocal_64))
		{
			uLocal_64 = func_25(uLocal_137);
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_56);
		}
		bLocal_111 = true;
	}
}

int func_25(var uParam0)
{
	return func_26(uParam0);
}

int func_26(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA901403F1DB7A780(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x480F8C5F7EE6B525(uParam0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_27(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
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
		if (unk_0x724D816EA203A79E(iLocal_57))
		{
			unk_0x1C5BDB4E5D257D63(iLocal_54, 2, 0, 0);
			unk_0x1C5BDB4E5D257D63(iLocal_54, 3, 0, 0);
			if (unk_0x724D816EA203A79E(iLocal_57))
			{
				unk_0xA35241BCE4C1A24B(&iLocal_57);
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (bLocal_109)
			{
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (unk_0x9BA320A867CC80B3(iLocal_54, 2) == 0f && unk_0x9BA320A867CC80B3(iLocal_54, 3) == 0f)
			{
				if (unk_0x724D816EA203A79E(iLocal_56))
				{
					if (unk_0xE7E55F7532DEE345(iLocal_56))
					{
						unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
					}
					unk_0x5DBE04849460E608(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
				{
					if (((unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0x9BA320A867CC80B3(iLocal_54, 2) > 0.25f) && unk_0x9BA320A867CC80B3(iLocal_54, 3) > 0.25f) || !unk_0xE59B7F5A03335350(iLocal_54, 0))
					{
						if (unk_0x724D816EA203A79E(iLocal_56))
						{
							if (unk_0xE7E55F7532DEE345(iLocal_56))
							{
								unk_0x10B5C0C7337B8420(unk_0x2F079D1FC5F6CB99(), "DOORS_BLOWN", unk_0x3EA3A28A85F8C32F(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x17175087F2DB6AC8(iLocal_56, 1, 0);
								unk_0xD434A01DEA38A939(iLocal_56, 1, 0);
								unk_0x46913653D1C7E82E(iLocal_56);
								unk_0xDF8A3F99E7CDEF9C(iLocal_56, 1);
								Local_477 = { unk_0x541C2AEF053615BC(iLocal_56, 1) - unk_0x541C2AEF053615BC(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_477) > 10f)
								{
									Local_477 = { func_29(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0x5EBD7EB63AD5FB1D(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x105601648511CC64();
							}
							else if (unk_0x81B5C0676B8DA7FE(unk_0x541C2AEF053615BC(iLocal_56, 1), unk_0xA4455714F3DCE207(iLocal_54, Local_470), unk_0xA4455714F3DCE207(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x105601648511CC64() - iLocal_476) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_54))
				{
					unk_0x1C5BDB4E5D257D63(iLocal_54, 2, 0, 0);
					unk_0x1C5BDB4E5D257D63(iLocal_54, 3, 0, 0);
					func_24(unk_0xA4455714F3DCE207(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_62(8);
			}
			if (unk_0x724D816EA203A79E(iLocal_56) && !unk_0xA901403F1DB7A780(uLocal_137))
			{
				if (unk_0x8910237449BB6F79(iLocal_56) == 0f && (unk_0x105601648511CC64() - iLocal_476) > 1000)
				{
					func_24(unk_0x541C2AEF053615BC(iLocal_56, 1), 1);
					unk_0xA35241BCE4C1A24B(&iLocal_56);
				}
				else if ((unk_0x105601648511CC64() - iLocal_476) > 5000)
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
	
	if (unk_0x724D816EA203A79E(iLocal_57) && unk_0xE7E55F7532DEE345(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x70CF24CEFB0F53B0(unk_0x541C2AEF053615BC(iLocal_57, 1), 0.3f, unk_0x20839301BD7D82F0(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_57, 1), 1f, 1) || (unk_0xC9FA5D38428AB6BE(2, unk_0x541C2AEF053615BC(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0x8D66276473ABD7CC(iLocal_57) < iLocal_132 && unk_0xD9C1758D86688CEA(iLocal_57, unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0x8D66276473ABD7CC(iLocal_57)));
			unk_0x5502708AECB47F5D(iLocal_57);
		}
		if ((unk_0x105601648511CC64() - iLocal_467) > 200 && unk_0x724D816EA203A79E(iLocal_54))
		{
			if (unk_0x596EC89128D2052F(unk_0xA4455714F3DCE207(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0xA4455714F3DCE207(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0x105601648511CC64();
				iLocal_468++;
			}
		}
		if (iLocal_468 > 5)
		{
			return 1;
		}
		if (iLocal_133 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_132 = unk_0x8D66276473ABD7CC(iLocal_57);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0xCD6353203C21B4FD(5, Param3, Param0) || (unk_0xCD6353203C21B4FD(2, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(20, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(4, Param3, Param0)) || (unk_0xCD6353203C21B4FD(28, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(32, Param3, Param0)) || unk_0xCD6353203C21B4FD(25, Param3, Param0)) || unk_0xCD6353203C21B4FD(9, Param3, Param0)) || (unk_0xCD6353203C21B4FD(3, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(6, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(0, Param3, Param0)) || unk_0xCD6353203C21B4FD(1, Param3, Param0)) || unk_0xCD6353203C21B4FD(23, Param3, Param0)) || unk_0xCD6353203C21B4FD(34, Param3, Param0)) || unk_0xCD6353203C21B4FD(14, Param3, Param0)) || (unk_0xCD6353203C21B4FD(30, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(12, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(7, Param3, Param0)) || (unk_0xCD6353203C21B4FD(21, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(18, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(15, Param3, Param0)) || unk_0xCD6353203C21B4FD(10, Param3, Param0)) || unk_0xCD6353203C21B4FD(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xC9FA5D38428AB6BE(5, Param6, iParam9) || (unk_0xC9FA5D38428AB6BE(2, Param6, iParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(20, Param6, iParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(4, Param6, iParam9)) || (unk_0xC9FA5D38428AB6BE(28, Param6, iParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(32, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(25, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(9, Param6, iParam9)) || (unk_0xC9FA5D38428AB6BE(3, Param6, iParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(6, Param6, iParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(0, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(1, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(23, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(34, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(14, Param6, iParam9)) || (unk_0xC9FA5D38428AB6BE(30, Param6, iParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(12, Param6, iParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(7, Param6, iParam9)) || (unk_0xC9FA5D38428AB6BE(21, Param6, iParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(18, Param6, iParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(15, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(10, Param6, iParam9)) || unk_0xC9FA5D38428AB6BE(27, Param6, iParam9))
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
	
	if (!unk_0x2DA8CA50A72528FB(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && unk_0xE59B7F5A03335350(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_60[1]))
					{
						uLocal_60[1] = func_36(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_60[1]))
					{
						unk_0x07B8ECB35A4ED3AC(&(uLocal_60[1]));
					}
					if (!unk_0x2DA8CA50A72528FB(uLocal_59))
					{
						uLocal_59 = func_34(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(uLocal_60[1]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_60[1]));
				}
				if (unk_0x2DA8CA50A72528FB(uLocal_59))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_60[0]) && unk_0xD0C1AD29EFD63811(uLocal_60[0]) != 119)
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_60[0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_60[1]) && unk_0xD0C1AD29EFD63811(uLocal_60[1]) != 119)
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_60[1]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_59) && unk_0xD0C1AD29EFD63811(uLocal_59) != 119)
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_59);
			}
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_59))
				{
					uLocal_59 = func_34(iLocal_54, 1, 0);
				}
			}
			else if (unk_0x2DA8CA50A72528FB(uLocal_59))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_59);
			}
			if ((unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0x2DA8CA50A72528FB(uLocal_59)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 0))
				{
					if (unk_0xB1D6718ACE798CBB(uLocal_59) != 0)
					{
						unk_0x7781946F1FC054FA(uLocal_59, 0);
					}
				}
				else if (unk_0xB1D6718ACE798CBB(uLocal_59) != 255)
				{
					unk_0x7781946F1FC054FA(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0xA901403F1DB7A780(uLocal_137) && !unk_0x5237AF95232D78C5(iLocal_51[iVar0], 0))
					{
						if (!unk_0x889DA6CE8E4DB344(iLocal_51[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0x5237AF95232D78C5(iLocal_51[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_48 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_36(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uLocal_60[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xA901403F1DB7A780(uLocal_137) && !bLocal_121)
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_64))
				{
					uLocal_64 = func_26(uLocal_137);
				}
			}
			else if (unk_0x2DA8CA50A72528FB(uLocal_64))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_64);
			}
		}
	}
	else if ((unk_0x724D816EA203A79E(iLocal_54) && unk_0x724D816EA203A79E(iLocal_51[0])) && unk_0x724D816EA203A79E(iLocal_51[1]))
	{
		if ((((((!unk_0x41A5D6415E2CC10E(iLocal_54) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x41A5D6415E2CC10E(iLocal_51[0]) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x41A5D6415E2CC10E(iLocal_51[1]) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_63);
		}
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_60[0]))
	{
		unk_0x222805B89367761E(uLocal_60[0], iLocal_122);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_60[1]))
	{
		unk_0x222805B89367761E(uLocal_60[1], iLocal_122);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_59))
	{
		unk_0x222805B89367761E(uLocal_59, iLocal_122);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_64))
	{
		unk_0x222805B89367761E(uLocal_64, iLocal_122);
	}
	if (!iLocal_122)
	{
		if (bLocal_110 || iLocal_49 == 3)
		{
			iLocal_122 = 0;
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
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_27(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_27(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_27(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(uVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_105220.f_28021[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(uVar0, &(Global_105220.f_28021[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_37()
{
	func_39(9, iLocal_47);
	while (!func_38())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_226();
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
			Global_105220.f_24966.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_105208 = iParam1;
		if (Global_105206 == 0)
		{
			if (((Global_105209 == 1 || Global_105209 == 5) || Global_105209 == 11) || Global_105209 == 25)
			{
				func_40(2);
			}
			else if ((Global_105209 == 26 || Global_105209 == 8) || Global_105209 == 17)
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
	Global_105206 = iParam0;
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
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = uParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_46(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_45() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
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
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

int func_45()
{
	return Global_25277;
}

int func_46(int iParam0, int iParam1)
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
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_48();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar18, iParam1, iVar1, iParam3);
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
		unk_0xF0059F27F7BB6680(&(Global_105220.f_20381.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
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
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_105220.f_20381[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_105220.f_20381.f_145 < 9)
	{
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_4), sParam1, 16);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_9 = iParam5;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_11 = iParam6;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_12 = uParam2;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_13 = iParam7;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_14 = iParam8;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = -1;
		}
		Global_105220.f_20381.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_105220.f_20381.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 0))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[0])
			{
				Global_105220.f_20381.f_146[0] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 1))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[1])
			{
				Global_105220.f_20381.f_146[1] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 2))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[2])
			{
				Global_105220.f_20381.f_146[2] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_105220.f_2354.f_539.f_4301)
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
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20381.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
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
	if (bLocal_111)
	{
		if (unk_0xF1B911222059B1A1(uLocal_137))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	iLocal_48 = iParam0;
	iLocal_50 = 0;
}

int func_63()
{
	if (!unk_0xA901403F1DB7A780(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				if (!func_64(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x105601648511CC64();
					}
				}
				else if (iLocal_465 != -1)
				{
					iLocal_465 = -1;
				}
			}
		}
		if (!bLocal_109)
		{
			if (iLocal_130 != -1)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]))
				{
					if (!func_64(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x105601648511CC64();
						}
					}
					else if (iLocal_465 != -1)
					{
						iLocal_465 = -1;
					}
				}
			}
		}
		if (iLocal_465 != -1)
		{
			if ((unk_0x105601648511CC64() - iLocal_465) > 3000)
			{
				unk_0x02537C8C1BEEB477(&(iLocal_51[0]));
				unk_0x02537C8C1BEEB477(&(iLocal_51[1]));
				unk_0x6C3BE67B02D72CDC(iLocal_54, -1000f, 1);
				unk_0xD434A01DEA38A939(iLocal_54, 1, 0);
				unk_0x1E7A09C1710FB071(&iLocal_54);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_465 != -1)
		{
			iLocal_465 = -1;
		}
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x2A488C176D52CCA5(unk_0x85EA1A40FC3A6769(uLocal_137), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x41A5D6415E2CC10E(iParam0) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam0, 1)) < 300f)
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
	
	if (iLocal_507 == -1)
	{
		iLocal_507 = unk_0x105601648511CC64();
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
				{
					if (func_21() < 30f && !unk_0x36CEFBE9B745A58D(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && unk_0x724D816EA203A79E(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_51[iVar0]);
							unk_0xC5A6DFE2B8987B17(&uLocal_58);
							if (unk_0x5237AF95232D78C5(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x320539481B2F0121("move_injured_generic"))
									{
										unk_0x43B967881C60631D(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0xA3981DED4FC2E56E(0, 0, 256);
							}
							unk_0x44C98C11ED6DD327(0);
							if (iLocal_118[iVar0])
							{
								unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 3000));
							}
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_58);
							unk_0xA8E6405305C0D7DF(iLocal_51[iVar0], uLocal_58);
							unk_0x02DAF06EA4F08219(&uLocal_58);
						}
						unk_0x91629AC1E1F78419(iLocal_51[iVar0], 6, 0);
						unk_0x91629AC1E1F78419(iLocal_51[iVar0], 0, 1);
						unk_0x91629AC1E1F78419(iLocal_51[iVar0], 1, 0);
						unk_0x54480313BB3E8DD0(iLocal_51[iVar0], 1);
						unk_0xEB061E1EBFED4D59(iLocal_51[iVar0], 1);
						unk_0x2E35C4FA5F0ED22F(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x724D816EA203A79E(iLocal_56) && unk_0xE7E55F7532DEE345(iLocal_56)) && !unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_51[iLocal_130]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_51[iLocal_130]);
						unk_0xC5A6DFE2B8987B17(&uLocal_58);
						if (unk_0x5237AF95232D78C5(iLocal_51[iLocal_130], 0))
						{
							unk_0xA3981DED4FC2E56E(0, 0, 256);
						}
						unk_0x44C98C11ED6DD327(0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x535008C596714F9E(uLocal_58);
						unk_0xA8E6405305C0D7DF(iLocal_51[iLocal_130], uLocal_58);
						unk_0x02DAF06EA4F08219(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
				{
					if (unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
					{
						if (Local_140[3 /*10*/] != iLocal_51[1])
						{
							func_69(&Local_140, 3);
							func_69(&Local_140, 4);
							func_68(&Local_140, 3, iLocal_51[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_51)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								unk_0xDE6B8773FB16B4DE(iLocal_51[iVar0], iLocal_54, unk_0xA4455714F3DCE207(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0xA901403F1DB7A780(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0xDE6B8773FB16B4DE(iLocal_51[iVar0], iLocal_54, unk_0x85EA1A40FC3A6769(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0xED9A67BF9F6ED860(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x105601648511CC64() - iLocal_500)) > unk_0x55AEFCD285ECC0F2(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x105601648511CC64();
								}
							}
						}
					}
					if (unk_0xE59B7F5A03335350(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 0) && (unk_0x105601648511CC64() - iLocal_507) > 5000)
							{
								if (func_21() > (30f + (30f / 10f)))
								{
									func_62(7);
								}
								if (func_21() > (30f / 2f) && !func_66())
								{
									if (!bLocal_109)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_48 != 8)
								{
									iLocal_123[0] = 0;
									iLocal_123[1] = 0;
									iLocal_507 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (unk_0x83666F9FB8FEBD4B() > iVar1 && iLocal_118[iVar0])
				{
					unk_0x7FD552896FDFC9E4(iLocal_51[iVar0], 1048576000);
					iLocal_118[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_66()
{
	int iVar0;
	
	if ((unk_0x105601648511CC64() - iLocal_484) > 250)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
				{
					if (unk_0x4833C1F1F1364989(iLocal_51[iVar0], unk_0xBC25C936A095B5BA(), 19) && unk_0x5CEC84BB4AC55121(iLocal_51[iVar0], unk_0xBC25C936A095B5BA()))
					{
						iLocal_481[iVar0] = 1;
					}
					else
					{
						iLocal_481[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_481[0] || iLocal_481[1]);
}

int func_67()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
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
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
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
	
	if (unk_0x724D816EA203A79E(iLocal_56))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[iParam0]))
		{
			if (unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0x96044E39418AAF17(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
						unk_0xA35241BCE4C1A24B(&iLocal_56);
					}
				}
				else
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_51[iParam0], 1);
					unk_0xE896C0AD02364F2A(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x724D816EA203A79E(iLocal_56) || (unk_0x724D816EA203A79E(iLocal_56) && !unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[iParam0]))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_51[iParam0], 0);
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
	
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		Var0 = { func_29(unk_0x1483995DFFF0DEEA(iLocal_54, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1))) };
		fVar3 = ((unk_0x349C94FFF43E2979(iLocal_54) + unk_0xFDC254CE02DB0919(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x349C94FFF43E2979(iLocal_54) + unk_0xFDC254CE02DB0919(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_51)
			{
				if ((((((!unk_0x36CEFBE9B745A58D(iLocal_51[iVar12]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x105601648511CC64() - iLocal_504[iVar12]) > 1000) && !unk_0x5237AF95232D78C5(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_501 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						}
						unk_0xC5A6DFE2B8987B17(&uVar14);
						if (func_66() || func_32(Local_501))
						{
							unk_0x8744E2AAA4C44FDC(0, Var5[iVar12 /*3*/], unk_0xBC25C936A095B5BA(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 1);
						}
						else
						{
							unk_0x5A996221BB5E3258(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0xF90A8AD825CA2E0C(0, Local_501, -1, 1, 0);
						}
						unk_0x535008C596714F9E(uVar14);
						unk_0xA8E6405305C0D7DF(iLocal_51[iVar12], uVar14);
						unk_0x02DAF06EA4F08219(&uVar14);
					}
					iLocal_504[iVar12] = unk_0x105601648511CC64();
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
	
	if (unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0x2E35C4FA5F0ED22F(iParam0, 1);
					unk_0xA4E856A8CD53B8DF(iParam0);
					Local_485 = { unk_0x3EA3A28A85F8C32F(iLocal_54, 0) };
					Local_488 = { unk_0xD7490CDEF40F3DA2(iLocal_54, 2) };
					Local_491 = { unk_0x883FF674F22D1F7C("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0)) && !unk_0x36CEFBE9B745A58D(iLocal_51[0])) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0))
					{
						if (func_21() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xA901403F1DB7A780(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x346129B364057FF6(iParam0, unk_0x85EA1A40FC3A6769(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x346129B364057FF6(iParam0, unk_0x85EA1A40FC3A6769(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(iParam0))
					{
						if (unk_0xA901403F1DB7A780(uLocal_137))
						{
							unk_0x346129B364057FF6(iParam0, unk_0x85EA1A40FC3A6769(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
				}
				else
				{
					iLocal_50 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x36CEFBE9B745A58D(iParam0) && unk_0xA901403F1DB7A780(uLocal_137))
				{
					if ((unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x85EA1A40FC3A6769(uLocal_137), 1) < 2f && !unk_0x2CDE18D6C89522AD(iParam0)) && (unk_0x105601648511CC64() - iLocal_136) > 3000)
					{
						if (unk_0x72C9157015C2151B(iParam0, 4))
						{
							unk_0x8E25082A46F87892(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0x9680DF46F29C0428(uLocal_137);
						func_79(iParam0);
						unk_0x8E25082A46F87892(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x36CEFBE9B745A58D(iParam0) && unk_0xE59B7F5A03335350(iLocal_54, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0x346129B364057FF6(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0x346129B364057FF6(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x36CEFBE9B745A58D(iParam0))
				{
					if (unk_0xA901403F1DB7A780(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0x349C94FFF43E2979(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_488.f_2 > 180f)
						{
							Local_488.f_2 = (Local_488.f_2 - 360f);
						}
						if (Local_488.f_2 <= -180f)
						{
							Local_488.f_2 = (Local_488.f_2 + 360f);
						}
						if (unk_0x2A488C176D52CCA5(Local_491, unk_0x541C2AEF053615BC(iParam0, 1)) < 0.3f)
						{
							if (unk_0x357058E632979E65((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0xD8CB3489A1200ABB(iParam0, -1056964608);
								unk_0xA4E856A8CD53B8DF(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0xD0D858E538FD01C3(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0xB62398E536F695FC(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xBEBE356CCD6268A1(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xB62398E536F695FC(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xBEBE356CCD6268A1(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x2EB4D46478766D87(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x41A5D6415E2CC10E(iParam0) && !unk_0x33CC9445B2DF9387(Local_485, 2f))
						{
							unk_0x641B19E156645A92(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x77FC50899603581D(iLocal_494))
				{
					if (bLocal_110)
					{
						fLocal_508 = 0.42f;
					}
					else
					{
						fLocal_508 = 0.3893f;
					}
					if (bLocal_110)
					{
						fLocal_509 = 0.52f;
					}
					else
					{
						fLocal_509 = 0.546243f;
					}
					if (!bLocal_109)
					{
						if ((unk_0x724D816EA203A79E(iLocal_56) && unk_0xB6A16B5E7EB81F9B(iLocal_56, iParam0)) && unk_0x8FD30584EB38411B(iLocal_494) > fLocal_508)
						{
							if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_54))
							{
								unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
								unk_0xD434A01DEA38A939(iLocal_56, 0, 0);
								unk_0x5DBE04849460E608(iLocal_56, iLocal_54, 0, unk_0x1483995DFFF0DEEA(iLocal_54, unk_0x541C2AEF053615BC(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x8FD30584EB38411B(iLocal_494) > fLocal_509)
					{
						unk_0x6C3BE67B02D72CDC(iLocal_54, -4f, 1);
						unk_0xA4E856A8CD53B8DF(iParam0);
						if (unk_0x724D816EA203A79E(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x82948B11F55E5713(iLocal_54, 2, 1);
							unk_0x82948B11F55E5713(iLocal_54, 3, 1);
							unk_0x2E35C4FA5F0ED22F(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x77FC50899603581D(iLocal_494) && unk_0x8FD30584EB38411B(iLocal_494) > fLocal_509) || !unk_0x77FC50899603581D(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
						{
							unk_0xD179FA0466FA4FE3(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0xE59B7F5A03335350(iLocal_54, 0))
				{
					if (bLocal_110)
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
	if (!unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!bLocal_109)
		{
			if ((((((func_21() < 10f && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) && func_66()) || ((func_21() < 20f && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))) || (func_21() < 5f && bLocal_110)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_74(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))) || ((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A())) && func_74(unk_0x3E12B546F3F2597A())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0x77FC50899603581D(iLocal_494))
			{
				unk_0x6C3BE67B02D72CDC(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			unk_0x2E35C4FA5F0ED22F(iParam0, 0);
		}
	}
	if ((unk_0xE59B7F5A03335350(iLocal_54, 0) && iLocal_48 != 7) && unk_0x77FC50899603581D(iLocal_494))
	{
		unk_0x6C3BE67B02D72CDC(iLocal_54, -8f, 1);
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
	if (unk_0x724D816EA203A79E(iParam0) && unk_0x724D816EA203A79E(iLocal_54))
	{
		uVar59 = 4;
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0xA4455714F3DCE207(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x62F3A07C43FFB568(iLocal_51[1], iLocal_54, 1))
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
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x724D816EA203A79E(iLocal_56))
		{
			iLocal_56 = unk_0xB6896943DA475493(iLocal_105, Local_77, 1, 1, 0);
			unk_0x30034548191398D0(iLocal_56, 0);
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			unk_0x5DBE04849460E608(iLocal_56, iParam0, unk_0xFA18E720A39243D0(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_50)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				if (unk_0x724D816EA203A79E(func_83()))
				{
					if (!unk_0x36CEFBE9B745A58D(func_83()))
					{
						if (unk_0x3187EF5798B5D209(iLocal_54, -1, 0) != func_83() && unk_0x1AAF0C23233C57AF(iLocal_54, -1, 0))
						{
							unk_0xD179FA0466FA4FE3(func_83(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && func_83() != iLocal_51[1])
				{
					if (unk_0x3187EF5798B5D209(iLocal_54, 0, 0) != iLocal_51[1] && unk_0x1AAF0C23233C57AF(iLocal_54, 0, 0))
					{
						unk_0xD179FA0466FA4FE3(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_50++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (unk_0x724D816EA203A79E(func_83()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x1A06AE15BF21D407(func_83(), iLocal_54, unk_0xBC25C936A095B5BA(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x724D816EA203A79E(func_83()))
				{
					unk_0x488EB206498BC561(func_83(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				if (unk_0x8910237449BB6F79(iLocal_54) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x724D816EA203A79E(iLocal_54) && unk_0x724D816EA203A79E(unk_0x3187EF5798B5D209(iLocal_54, -1, 0))) && (unk_0x1D403DFADBC2DE3C(unk_0x3187EF5798B5D209(iLocal_54, -1, 0), 0) || unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x3187EF5798B5D209(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_54, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 100f)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar1]) && unk_0xF4FCC3C1048FF2AB(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0xABA7AE40608505F2(iLocal_51[iVar1], 2, 1);
				unk_0xC5A6DFE2B8987B17(&uVar2);
				unk_0x9BFB4F4439403039(0, iLocal_54, 0);
				unk_0x1A06AE15BF21D407(0, iLocal_54, unk_0xBC25C936A095B5BA(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x535008C596714F9E(uVar2);
				unk_0xA8E6405305C0D7DF(iLocal_51[iVar1], uVar2);
				unk_0x02DAF06EA4F08219(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0xE59B7F5A03335350(iLocal_54, 0) || unk_0xA901403F1DB7A780(uLocal_137)) || iLocal_49 == 3) || unk_0xBCDD4514E5CAE591(iLocal_54, 0, 7000)) || unk_0xBCDD4514E5CAE591(iLocal_54, 3, 30000)) || unk_0xBCDD4514E5CAE591(iLocal_54, 2, 30000)) || unk_0xBCDD4514E5CAE591(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x724D816EA203A79E(iLocal_54))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
		{
			if (((((unk_0x8D66276473ABD7CC(iLocal_54) < 300 || unk_0x77F5C030D3238E26(iLocal_54) < 200f) || (unk_0xE1A8FD31526DD6C8(iLocal_54, 0, 0) && unk_0xE1A8FD31526DD6C8(iLocal_54, 1, 0))) || (unk_0xE1A8FD31526DD6C8(iLocal_54, 4, 0) && unk_0xE1A8FD31526DD6C8(iLocal_54, 5, 0))) || (unk_0xE1A8FD31526DD6C8(iLocal_54, 0, 0) && unk_0xE1A8FD31526DD6C8(iLocal_54, 4, 0))) || (unk_0xE1A8FD31526DD6C8(iLocal_54, 1, 0) && unk_0xE1A8FD31526DD6C8(iLocal_54, 5, 0)))
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
	if (unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0))
		{
			if (!unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0))
		{
			if (!unk_0x62F3A07C43FFB568(iLocal_51[1], iLocal_54, 0))
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
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0))
	{
		return iLocal_51[1];
	}
	return 0;
}

void func_84()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_109)
			{
				if (unk_0x724D816EA203A79E(iLocal_56) && unk_0xE7E55F7532DEE345(iLocal_56))
				{
					unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
					{
						unk_0x91629AC1E1F78419(iLocal_51[iVar0], 17, 1);
						unk_0xABA7AE40608505F2(iLocal_51[iVar0], 128, 1);
						unk_0xABA7AE40608505F2(iLocal_51[iVar0], 16, 1);
						unk_0x91629AC1E1F78419(iLocal_51[iVar0], 1, 0);
						unk_0xC5A6DFE2B8987B17(&uVar1);
						if (unk_0x5237AF95232D78C5(iLocal_51[iVar0], 1))
						{
							unk_0xA3981DED4FC2E56E(iLocal_51[iVar0], 0, 256);
						}
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
						unk_0x535008C596714F9E(uVar1);
						unk_0xA8E6405305C0D7DF(iLocal_51[iVar0], uVar1);
						unk_0x02DAF06EA4F08219(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				if (func_85(iLocal_54, 1, 0, 0, 0, 0, 1, 0))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x524ABB0435146845(iParam0) + 1;
	if (iParam4 || !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_86(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x724D816EA203A79E(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xBC25C936A095B5BA())
				{
				}
				else if (iParam2 && unk_0x15DBD981998D4FE1(iVar2))
				{
					if (unk_0x904E94842BB9E173(unk_0x5363B43856FA7779(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x36CEFBE9B745A58D(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_86(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x1AAF0C23233C57AF(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x724D816EA203A79E(iVar0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, iParam1);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iVar0, 451360105) == 1 || unk_0xF4FCC3C1048FF2AB(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iParam0, 0), unk_0x541C2AEF053615BC(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_87()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_56) && unk_0xE7E55F7532DEE345(iLocal_56))
					{
						if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[0]))
						{
							func_88(0);
						}
						else
						{
							unk_0xA4E856A8CD53B8DF(iLocal_51[0]);
						}
						if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[1]))
						{
							func_88(1);
						}
						else
						{
							unk_0xA4E856A8CD53B8DF(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_88(0);
						func_88(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]))
					{
						func_88(iLocal_130);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!func_67())
				{
					if (func_4(&Local_140, cLocal_139, "RESEC_CAR2", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if ((unk_0x83666F9FB8FEBD4B() > 12000 && !func_67()) && func_4(&Local_140, cLocal_139, "RESEC_CAR3", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_50++;
				}
				break;
			
			case 4:
				if ((unk_0x83666F9FB8FEBD4B() > 7000 && !func_67()) && func_4(&Local_140, cLocal_139, "RESEC_CAR4", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_50 > 0)
	{
		func_71(-1, 1);
	}
	if (unk_0x724D816EA203A79E(iLocal_55))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_55, 0) && unk_0xE59B7F5A03335350(iLocal_54, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_55, 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x1D403DFADBC2DE3C(iLocal_55, 0) || !unk_0xE59B7F5A03335350(iLocal_55, 0)) || (!unk_0xB506EAE677B8090D(iLocal_55, 1119092736) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_55, 1)))
		{
			if (!func_74(iLocal_55))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_51[0], unk_0xBC25C936A095B5BA(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_51[1], unk_0xBC25C936A095B5BA(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_116)
		{
			func_62(8);
		}
	}
	if (bLocal_121)
	{
		func_62(8);
	}
	if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && func_66()) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7))
	{
		func_62(2);
	}
	if (!unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		func_62(5);
	}
}

void func_88(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[iParam0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_51[iParam0]);
		unk_0xC5A6DFE2B8987B17(&uLocal_58);
		if (unk_0x5237AF95232D78C5(iLocal_51[iParam0], 0))
		{
			unk_0xA3981DED4FC2E56E(0, 0, 256);
		}
		unk_0x44C98C11ED6DD327(0);
		unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
		unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
		unk_0x535008C596714F9E(uLocal_58);
		unk_0xA8E6405305C0D7DF(iLocal_51[iParam0], uLocal_58);
		unk_0x02DAF06EA4F08219(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0x9C23040DD1853B23(116, unk_0x541C2AEF053615BC(iLocal_51[iParam0], 1), -1082130432);
		}
	}
}

void func_89()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_51[0], 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_51[1], 1);
			}
			if (func_96())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_95() || func_94())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x724D816EA203A79E(iLocal_56) && unk_0xE7E55F7532DEE345(iLocal_56))
				{
					if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[0]))
					{
						func_88(0);
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_51[0]);
					}
					if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[1]))
					{
						func_88(1);
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_88(0);
					func_88(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_130))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[iLocal_130]))
				{
					func_88(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_93())
			{
				if (!func_92(iLocal_54, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
				{
					bVar0 = true;
				}
				else if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					unk_0xC1B1E9A034A63A62(7000);
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (func_95())
					{
						bVar0 = true;
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (func_94())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_92(iLocal_51[iVar1], 1000) && (func_21() < 2f && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x1D403DFADBC2DE3C(iLocal_51[iVar1], 0))
					{
						if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_51[iVar1]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x105601648511CC64() - iLocal_500)) > unk_0x55AEFCD285ECC0F2(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x105601648511CC64();
						}
					}
				}
				if (bVar0)
				{
					func_90();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x724D816EA203A79E(iLocal_51[iVar2]))
		{
			if ((unk_0x36CEFBE9B745A58D(iLocal_51[iVar2]) || unk_0x1D403DFADBC2DE3C(iLocal_51[iVar2], 0)) && unk_0xD9C1758D86688CEA(iLocal_51[iVar2], unk_0xBC25C936A095B5BA(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x36CEFBE9B745A58D(iLocal_51[0]) || unk_0x36CEFBE9B745A58D(iLocal_51[1])) || bLocal_121)
	{
		func_62(8);
	}
	if ((unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && func_66())
	{
		if (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		func_62(5);
	}
	if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_90()
{
	Global_14666 = 0;
	func_91();
}

void func_91()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x724D816EA203A79E(iParam0))
		{
			if ((unk_0x386592AF38881675(iParam0) && !unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0))) || (unk_0xD27AC0E9B78CFDD7(iParam0) && unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x105601648511CC64() - iLocal_499) > iParam1)
				{
					fLocal_498 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam0, 1));
					iLocal_499 = unk_0x105601648511CC64();
				}
			}
		}
	}
	return iVar0;
}

int func_93()
{
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0xA4455714F3DCE207(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
			{
				if ((!unk_0x62F3A07C43FFB568(iLocal_51[iVar0], iLocal_54, 0) && unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), iLocal_54)) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_95()
{
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()) == iLocal_54)
		{
			if (unk_0x756B942C10C07DC2(unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && unk_0xE642C1AC73CE364E(iLocal_51[0], unk_0xBC25C936A095B5BA(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && unk_0xE642C1AC73CE364E(iLocal_51[1], unk_0xBC25C936A095B5BA(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_97(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_98(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_130(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_99(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_99(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_97(iVar0))
	{
		func_122();
	}
	if (!unk_0xBFFAD293E2DA992B())
	{
		if (func_117(uParam0, bParam6, bParam8, 0))
		{
			func_116(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_104(iVar0))
			{
				if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if ((unk_0x33CC9445B2DF9387(Param1, 1f) && !unk_0xF16DAFF595E80F7C()) && uParam7)
					{
						if (!func_97(iVar0))
						{
							func_132(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_103(1);
							}
						}
					}
				}
			}
		}
		else if (func_104(iVar0))
		{
			if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
			{
				if ((unk_0x33CC9445B2DF9387(Param1, 1f) && !unk_0xF16DAFF595E80F7C()) && uParam7)
				{
					if (!func_97(iVar0))
					{
						func_132(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
						{
							func_103(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xEAEFBBEC1AEA464B(iVar0))
		{
			if (func_97(iVar0) && unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				func_130(uParam0, iVar0, 1);
			}
		}
		if (!func_117(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
			{
				func_100(uParam0);
			}
		}
	}
}

void func_100(var uParam0)
{
	if (func_101(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_101(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_103(bool bParam0)
{
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_105220.f_10020.f_100++;
			}
			return Global_105220.f_10020.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_105220.f_10020.f_101++;
			}
			return Global_105220.f_10020.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_105220.f_10020.f_102++;
			}
			return Global_105220.f_10020.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_104(char* sParam0)
{
	if (!func_105(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_97(sParam0)) || func_97("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (func_103(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_105(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_115(0))
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_113() || func_112(Global_4456448.f_148478)) || func_111())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_110(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_109(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_106(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_106(int iParam0)
{
	if (iParam0 != func_108())
	{
		if (func_107(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_107(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_108()
{
	return -1;
}

int func_109(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
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
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

var func_111()
{
	return Global_2447942.f_16;
}

bool func_112(int iParam0)
{
	return iParam0 == 51;
}

var func_113()
{
	return Global_2447942.f_15;
}

bool func_114()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

int func_115(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_116(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x4AED68BFACFB14CB(0);
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
	unk_0x7EA10E956229CFA8(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), Param1, -1, iVar2, iVar3);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_117(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_102(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_121(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_120(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_119(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_102(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_105(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_122();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_120(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_122()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

void func_123(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_124(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_124(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_130(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_125(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_125(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_97(iVar0))
	{
		func_122();
	}
	if (func_101(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_117(uParam0, bParam7, bParam9, 0))
			{
				func_126(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_104(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam8)
						{
							if (!func_97(iVar0))
							{
								func_132(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_103(1);
								}
							}
						}
					}
				}
			}
			else if (func_104(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam8)
					{
						if (!func_97(iVar0))
						{
							func_132(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_103(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam5))
			{
				if (func_97(sParam5))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			if (!func_117(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
				{
					func_100(uParam0);
				}
			}
		}
	}
	else
	{
		func_130(uParam0, iVar0, 0);
	}
}

void func_126(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316801 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_130(uParam0, 0, 0);
	}
	if (func_129(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_127())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(0);
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
	unk_0x1DE00CFB4CAEB978(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_127()
{
	return func_128(unk_0xB5CEFD608600A09F());
}

int func_128(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_129(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_130(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_97(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_97(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

void func_131(int iParam0)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_6), iParam0);
}

void func_132(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

bool func_133(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_6, iParam0);
}

int func_134(int iParam0)
{
	if (func_137())
	{
		Global_105210 = 1;
		Global_105207 = unk_0x105601648511CC64();
		if (func_50(Global_105209))
		{
			func_135(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_50(Global_105209))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_105220.f_24966.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_132(func_136(iParam0), -1);
					Global_105220.f_24966.f_2++;
					unk_0xF0059F27F7BB6680(&Global_105216, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_132(func_136(iParam0), -1);
					Global_105220.f_24966.f_3++;
					unk_0xF0059F27F7BB6680(&Global_105216, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_132(func_136(iParam0), -1);
					Global_105220.f_24966.f_4++;
					unk_0xF0059F27F7BB6680(&Global_105216, 2);
				}
			}
			break;
	}
}

char* func_136(int iParam0)
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

int func_137()
{
	switch (func_138(&Global_25336, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_138(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90578.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_142(0))
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_17206.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_35905 = iParam2;
		Global_35867 = *uParam0;
		Global_35868 = iParam4;
		Global_35866 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35866 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35866)
			{
				if (Global_35872[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35867 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_35866 == 8)
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		Global_35872[Global_35866 /*4*/] = Global_35869;
		Global_35872[Global_35866 /*4*/].f_1 = iParam1;
		Global_35872[Global_35866 /*4*/].f_2 = iParam2;
		Global_35872[Global_35866 /*4*/].f_3 = 0;
		Global_35866++;
		if (iParam4 != 0)
		{
			func_139(uParam0, iParam4);
		}
	}
	return 2;
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35866 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35866)
	{
		if (Global_35872[iVar0 /*4*/] == *uParam0)
		{
			Global_35872[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_35905);
}

int func_141(int iParam0, int iParam1)
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

int func_142(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_143()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0xE59B7F5A03335350(iLocal_54, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
				{
					unk_0x91629AC1E1F78419(iLocal_51[0], 6, 1);
					unk_0x91629AC1E1F78419(iLocal_51[1], 6, 1);
					unk_0x2E35C4FA5F0ED22F(iLocal_51[0], 1);
					unk_0x2E35C4FA5F0ED22F(iLocal_51[1], 1);
					if (unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 0) && unk_0x62F3A07C43FFB568(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0xC5A6DFE2B8987B17(&uVar0);
							unk_0x509F549022512095(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x204BA7B1C7DD25F4(0, iLocal_54, 10f, 786603);
							unk_0x535008C596714F9E(uVar0);
							unk_0xA8E6405305C0D7DF(iLocal_51[0], uVar0);
							unk_0x02DAF06EA4F08219(&uVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0xC5A6DFE2B8987B17(&uVar1);
							unk_0x509F549022512095(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x204BA7B1C7DD25F4(0, iLocal_54, 10f, 786603);
							unk_0x535008C596714F9E(uVar1);
							unk_0xA8E6405305C0D7DF(iLocal_51[0], uVar1);
							unk_0x02DAF06EA4F08219(&uVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0xC5A6DFE2B8987B17(&uVar2);
							unk_0x509F549022512095(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x204BA7B1C7DD25F4(0, iLocal_54, 10f, 786603);
							unk_0x535008C596714F9E(uVar2);
							unk_0xA8E6405305C0D7DF(iLocal_51[0], uVar2);
							unk_0x02DAF06EA4F08219(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0x204BA7B1C7DD25F4(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 0) && unk_0xF4FCC3C1048FF2AB(iLocal_51[0], -1794415470) != 1)
						{
							unk_0xD179FA0466FA4FE3(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x62F3A07C43FFB568(iLocal_51[1], iLocal_54, 0) && unk_0xF4FCC3C1048FF2AB(iLocal_51[1], -1794415470) != 1)
						{
							unk_0xD179FA0466FA4FE3(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_147() || func_146()) || func_95()) || func_94()) || func_145()) || func_144())
			{
				if (func_21() < 20f)
				{
					func_90();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar3]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[iVar3], 0))
					{
						if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && unk_0xA4813477CC5DD00F(iLocal_51[iVar3]))
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
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0xF4329A6EA1D0B578("PLAYER HAS PROJECTILE WEAPON", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 0, 0, 255, 255);
				if ((unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, 0f, -3.44f, -3f), unk_0xA4455714F3DCE207(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, 0f, -3.44f, -3f), unk_0xA4455714F3DCE207(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0xD4E50AEC04C3A55A("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_54, 1)) < 225f)
				{
					unk_0xD4E50AEC04C3A55A("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
				}
			}
		}
		if (((unk_0xE59B7F5A03335350(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_54, 1), 25f, 0)) || (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_51[0], 1), 20f, 0))) || (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_51[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
			{
				unk_0x91629AC1E1F78419(iLocal_51[0], 6, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_51[0], 0);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
			{
				unk_0x91629AC1E1F78419(iLocal_51[1], 6, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_51[1], 0);
			}
		}
	}
}

int func_144()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - unk_0x541C2AEF053615BC(iLocal_54, 1) };
		Var3 = { unk_0xF90427F311003E57(iLocal_54) };
		Var6 = { unk_0x1483995DFFF0DEEA(iLocal_54, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_54) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_54)) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_51[0])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_51[1]))) && unk_0x357058E632979E65(unk_0x77211CE25DED4FDB(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x77211CE25DED4FDB(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, 2.7f, 7f, -2f), unk_0xA4455714F3DCE207(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, -2.7f, 7f, -2f), unk_0xA4455714F3DCE207(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_54, 0f, 7f, -2f), unk_0xA4455714F3DCE207(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iLocal_54, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if (unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()))
		{
			iVar0 = unk_0x3E12B546F3F2597A();
		}
		if (unk_0x724D816EA203A79E(iVar0) && unk_0x724D816EA203A79E(iLocal_54))
		{
			return ((unk_0xE59B7F5A03335350(iVar0, 0) && unk_0xE921F8171F0733B3(iVar0, iLocal_54)) && unk_0x8910237449BB6F79(iVar0) > 10f);
		}
	}
	return 0;
}

int func_147()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) || unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_51[0], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) || unk_0x1D403DFADBC2DE3C(iLocal_51[1], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_51[1], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_148()
{
	float fVar0;
	
	if ((!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && !unk_0x36CEFBE9B745A58D(iLocal_51[1])) && unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0x3EA3A28A85F8C32F(iLocal_54, 0) };
				Local_488 = { unk_0xD7490CDEF40F3DA2(iLocal_54, 2) };
				Local_491 = { unk_0x883FF674F22D1F7C("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0xF0A40F19AAB79E88(iLocal_54, 1084227584);
				unk_0xC5A6DFE2B8987B17(&uLocal_58);
				unk_0xDE2D2B13F24A979D(0, 5000);
				unk_0x346129B364057FF6(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0xC0FDCDB0DF739C50(0, Local_488.f_2, 0);
				unk_0x535008C596714F9E(uLocal_58);
				unk_0xA8E6405305C0D7DF(iLocal_51[1], uLocal_58);
				unk_0x02DAF06EA4F08219(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0x3EA3A28A85F8C32F(iLocal_54, 0) };
				Local_488 = { unk_0xD7490CDEF40F3DA2(iLocal_54, 2) };
				Local_491 = { unk_0x883FF674F22D1F7C("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0x77FC50899603581D(iLocal_495))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_77) < 22500f && unk_0xD7B6937E7976D0CB(iLocal_54))
					{
						iLocal_495 = unk_0xD0D858E538FD01C3(Local_485, Local_488, 2);
						unk_0xB62398E536F695FC(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xC2BF3DE5E47F801D(iLocal_495, 1);
					}
				}
				if (unk_0xF4FCC3C1048FF2AB(iLocal_51[1], 242628503) != 1)
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_58);
					unk_0x346129B364057FF6(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0xC0FDCDB0DF739C50(0, Local_488.f_2, 0);
					unk_0x535008C596714F9E(uLocal_58);
					unk_0xA8E6405305C0D7DF(iLocal_51[1], uLocal_58);
					unk_0x02DAF06EA4F08219(&uLocal_58);
				}
				fVar0 = unk_0x349C94FFF43E2979(iLocal_51[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_488.f_2 > 180f)
				{
					Local_488.f_2 = (Local_488.f_2 - 360f);
				}
				if (Local_488.f_2 <= -180f)
				{
					Local_488.f_2 = (Local_488.f_2 + 360f);
				}
				if (unk_0x357058E632979E65((fVar0 - Local_488.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_491, unk_0x541C2AEF053615BC(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0xD8CB3489A1200ABB(iLocal_51[1], -1056964608);
					unk_0xA4E856A8CD53B8DF(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0xD0D858E538FD01C3(Local_485, Local_488, 2);
					unk_0xB62398E536F695FC(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xBEBE356CCD6268A1(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0x77FC50899603581D(iLocal_494) && unk_0x8FD30584EB38411B(iLocal_494) > 0.09f) && unk_0x8FD30584EB38411B(iLocal_494) < 0.11f) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0x77FC50899603581D(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0x724D816EA203A79E(iLocal_56) && unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_51[1])) && unk_0x8FD30584EB38411B(iLocal_494) > 0.3793f)
						{
							if (!unk_0xB6A16B5E7EB81F9B(iLocal_56, iLocal_54))
							{
								unk_0x17175087F2DB6AC8(iLocal_56, 1, 1);
								unk_0xD434A01DEA38A939(iLocal_56, 0, 0);
								unk_0x5DBE04849460E608(iLocal_56, iLocal_54, 0, unk_0x1483995DFFF0DEEA(iLocal_54, unk_0x541C2AEF053615BC(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x8FD30584EB38411B(iLocal_494) > 0.546243f)
					{
						unk_0x6C3BE67B02D72CDC(iLocal_54, -4f, 1);
						if (unk_0x724D816EA203A79E(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x82948B11F55E5713(iLocal_54, 2, 1);
							unk_0x82948B11F55E5713(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0x77FC50899603581D(iLocal_494) && unk_0x8FD30584EB38411B(iLocal_494) > 0.56f) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0x77FC50899603581D(iLocal_494) && unk_0x8FD30584EB38411B(iLocal_494) > 0.6f) || !unk_0x77FC50899603581D(iLocal_494))
					{
						if (unk_0x77FC50899603581D(iLocal_495))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_51[0]);
							iLocal_495 = unk_0xD0D858E538FD01C3(Local_485, Local_488, 2);
							unk_0xB62398E536F695FC(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0x77FC50899603581D(iLocal_495) && unk_0x8FD30584EB38411B(iLocal_495) >= 0.92f) || !unk_0x77FC50899603581D(iLocal_495))
				{
					if (!unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 0) && unk_0xF4FCC3C1048FF2AB(iLocal_51[0], -1794415470) != 1)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_51[0]);
						unk_0xD179FA0466FA4FE3(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0x77FC50899603581D(iLocal_494) && unk_0x619CCA1A6FD0BC87(iLocal_51[1], unk_0x56BEECB328B6D29D("ENDS_IN_WALK")))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_51[1]);
					unk_0xD179FA0466FA4FE3(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0x9BA320A867CC80B3(iLocal_54, 0) == 0f) && unk_0x9BA320A867CC80B3(iLocal_54, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x82948B11F55E5713(iLocal_54, 0, 1);
					unk_0x82948B11F55E5713(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0x36CEFBE9B745A58D(func_3()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(func_3(), 1)) < 30f) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
	{
		if (unk_0xA901403F1DB7A780(uLocal_137))
		{
			func_62(7);
		}
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_152())
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
		else if (func_150())
		{
			func_62(2);
		}
		else if (func_149())
		{
			func_62(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_90();
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
			{
				if (unk_0x96044E39418AAF17(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x16F091616F4E9EA0(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_51[0]);
						unk_0xE896C0AD02364F2A(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xE59B7F5A03335350(iLocal_54, 0) && unk_0x77FC50899603581D(iLocal_494)) && !unk_0x36CEFBE9B745A58D(iLocal_51[1]))
			{
				unk_0x6C3BE67B02D72CDC(iLocal_54, -1000f, 1);
				unk_0xA4E856A8CD53B8DF(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0xA901403F1DB7A780(uLocal_137))
		{
			unk_0x82948B11F55E5713(iLocal_54, 2, 1);
			unk_0x82948B11F55E5713(iLocal_54, 3, 1);
		}
	}
}

int func_149()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (func_74(unk_0x3E12B546F3F2597A()))
				{
					iLocal_55 = unk_0x3E12B546F3F2597A();
					return 1;
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (func_74(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x11F9F9006143871A());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x11F9F9006143871A() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_51[iVar0]) || unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1)) < 9f) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x2CDE18D6C89522AD(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_94())
	{
		return 1;
	}
	if ((func_151() || func_95()) && func_66())
	{
		if (!unk_0x62F3A07C43FFB568(iLocal_51[0], iLocal_54, 0) || !unk_0x62F3A07C43FFB568(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA())))
		{
			if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[0]))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_51[0], unk_0xBC25C936A095B5BA(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_51[1]))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_51[1], unk_0xBC25C936A095B5BA(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && unk_0xD9C1758D86688CEA(iLocal_51[iVar0], unk_0xBC25C936A095B5BA(), 1)) || (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && unk_0x8F97799512B006B7(iLocal_51[iVar0], unk_0xBC25C936A095B5BA()))) || unk_0xD9C1758D86688CEA(iLocal_51[iVar0], unk_0xBC25C936A095B5BA(), 1)) || (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1) && func_66())) || unk_0x36CEFBE9B745A58D(iLocal_51[iVar0])) || unk_0x1D403DFADBC2DE3C(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_145() || func_96())
	{
		return 1;
	}
	if (unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]))
			{
				if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && unk_0xA4813477CC5DD00F(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0xE59B7F5A03335350(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_54, 1), 25f, 0)) || (!unk_0x36CEFBE9B745A58D(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_51[0], 1), 20f, 0))) || (!unk_0x36CEFBE9B745A58D(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0x724D816EA203A79E(iLocal_51[iVar0]))
		{
			if ((!unk_0x36CEFBE9B745A58D(iLocal_51[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_51[iVar0], 0)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1), 5f, 1) || func_31(unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0x541C2AEF053615BC(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xD9C1758D86688CEA(iLocal_51[iVar0], unk_0xBC25C936A095B5BA(), 1))
				{
					bLocal_110 = true;
					return 1;
				}
			}
			else
			{
				bLocal_110 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_154()
{
	int iVar0;
	
	iLocal_54 = unk_0x61C05BF08A1E0EFE(iLocal_104, Local_77, fLocal_80, 1, 1, 0);
	iLocal_57 = unk_0xB6896943DA475493(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0x5DBE04849460E608(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xDC078F87049ECECE(iLocal_57, 0, 0);
	unk_0x22F5005A525A1855(iLocal_57, iLocal_54, 0);
	unk_0xF0A40F19AAB79E88(iLocal_54, 1084227584);
	unk_0xD421BC740C5340C3(iLocal_54, 3);
	unk_0x06D93FD5E4D394CF(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0xE43AD8CB1B4DDED9(iLocal_54, 1, 0);
	unk_0x65E471E4A2D56226(iLocal_54, 700, 0);
	unk_0xD38EB677CBE7440A(iLocal_54, 0, 0);
	unk_0xB71D41C0310C93DE(iLocal_54, 1, 1);
	unk_0x38419C97AD330777(iLocal_54, 0);
	unk_0x09F6B51861E304AB(iLocal_54, 1);
	unk_0x4B656426561BA934((Local_77.f_0 - 200f), (Local_77.f_1 - 200f), (Local_77.f_0 + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0xFD8987C090669BD5(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0xFD8987C090669BD5(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x2D655AA68FA1736B(iLocal_54, 1, 1, 0);
		unk_0xB71D41C0310C93DE(iLocal_54, 1, 1);
	}
	else
	{
		iLocal_51[1] = unk_0x01B3635C3E8EDD81(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0x01B3635C3E8EDD81(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0x56F2E1B5599188FA(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_79(iLocal_51[1]);
	unk_0xB2CB6EAA6B280A84("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0x8EF3D958386640FE(iLocal_51[iVar0], 0);
		unk_0x91629AC1E1F78419(iLocal_51[iVar0], 1, 0);
		unk_0x91629AC1E1F78419(iLocal_51[iVar0], 13, 0);
		unk_0x91629AC1E1F78419(iLocal_51[iVar0], 6, 1);
		unk_0x91629AC1E1F78419(iLocal_51[iVar0], 8, 0);
		unk_0x91629AC1E1F78419(iLocal_51[iVar0], 10, 1);
		unk_0xABA7AE40608505F2(iLocal_51[iVar0], 512, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_51[iVar0], 118, 0);
		unk_0xABA7AE40608505F2(iLocal_51[iVar0], 128, 1);
		unk_0x12D2D85EBAC186AA(iLocal_51[iVar0], 0);
		unk_0xE43AD8CB1B4DDED9(iLocal_51[iVar0], 1, 0);
		unk_0x2FEB3A9B7C91A02D(iLocal_51[iVar0], 1);
		unk_0x8E2B5DA484CC2BB8(iLocal_51[iVar0], 1);
		unk_0x7A535CE1F001F3FE(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x4106FAF8AA1D69D5(iLocal_51[iVar0], iLocal_66);
		unk_0x22321800954A532E(iLocal_51[iVar0], 1);
		unk_0xAF9FC4463EA3090B(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0xB71D41C0310C93DE(iLocal_51[1], 1, 1);
	unk_0xA902E18EDF6FA0C8(1, joaat("COP"), iLocal_66);
	unk_0xA902E18EDF6FA0C8(1, iLocal_66, joaat("COP"));
	unk_0xA902E18EDF6FA0C8(2, iLocal_66, joaat("player"));
	unk_0xA902E18EDF6FA0C8(2, joaat("player"), iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0x70FF586D857F1A81(iLocal_51[0], 0, 1, 0, 0);
		unk_0x751846449040F7EC(iLocal_51[0], 0);
		unk_0x70FF586D857F1A81(iLocal_51[1], 0, 1, 0, 0);
		unk_0x751846449040F7EC(iLocal_51[1], 0);
	}
	if (func_11() == 0 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_68(&Local_140, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_68(&Local_140, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_68(&Local_140, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	func_68(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_68(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0x8510BC031C24B862(iLocal_104, 1);
	unk_0x23180B0A9E8D2951(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_155(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

bool func_156()
{
	func_164(&uLocal_317, iLocal_103);
	func_164(&uLocal_317, iLocal_104);
	func_164(&uLocal_317, iLocal_105);
	func_162(&uLocal_317, "random@security_van");
	func_162(&uLocal_317, "weapons@holster_1h");
	func_162(&uLocal_317, "move_injured_generic");
	func_161(&uLocal_317, 3);
	return func_157(&uLocal_317);
}

int func_157(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_158(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_158(var uParam0)
{
	return func_159(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_159(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_160(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(uParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(uParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(uParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(uParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(uParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
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

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_162(var uParam0, char* sParam1)
{
	func_163(uParam0, 1, -1, sParam1, 0);
}

void func_163(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_164(var uParam0, int iParam1)
{
	func_163(uParam0, 0, iParam1, "NULL", 0);
}

int func_165()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_176())
		{
			return 0;
		}
	}
	if (func_172())
	{
		return 1;
	}
	if (func_166(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166(float fParam0, bool bParam1)
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
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 3))
				{
					func_167(iVar32, &Var0);
					fVar35 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var0.f_6, 1);
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

void func_167(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_168(uParam1, "Abigail1", func_170(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 1:
			func_168(uParam1, "Abigail2", func_170(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 2:
			func_168(uParam1, "Barry1", func_170(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 3:
			func_168(uParam1, "Barry2", func_170(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 4:
			func_168(uParam1, "Barry3", func_170(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 5:
			func_168(uParam1, "Barry3A", func_170(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 6:
			func_168(uParam1, "Barry3C", func_170(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 7:
			func_168(uParam1, "Barry4", func_170(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_169(iParam0), 0, 0);
			break;
		
		case 8:
			func_168(uParam1, "Dreyfuss1", func_170(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 9:
			func_168(uParam1, "Epsilon1", func_170(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 10:
			func_168(uParam1, "Epsilon2", func_170(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 11:
			func_168(uParam1, "Epsilon3", func_170(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 12:
			func_168(uParam1, "Epsilon4", func_170(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 13:
			func_168(uParam1, "Epsilon5", func_170(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 14:
			func_168(uParam1, "Epsilon6", func_170(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 15:
			func_168(uParam1, "Epsilon7", func_170(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 16:
			func_168(uParam1, "Epsilon8", func_170(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 17:
			func_168(uParam1, "Extreme1", func_170(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 18:
			func_168(uParam1, "Extreme2", func_170(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 19:
			func_168(uParam1, "Extreme3", func_170(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 20:
			func_168(uParam1, "Extreme4", func_170(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 21:
			func_168(uParam1, "Fanatic1", func_170(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_169(iParam0), 1, 0);
			break;
		
		case 22:
			func_168(uParam1, "Fanatic2", func_170(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_169(iParam0), 1, 0);
			break;
		
		case 23:
			func_168(uParam1, "Fanatic3", func_170(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_169(iParam0), 0, 1);
			break;
		
		case 24:
			func_168(uParam1, "Hao1", func_170(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_169(iParam0), 0, 1);
			break;
		
		case 25:
			func_168(uParam1, "Hunting1", func_170(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 26:
			func_168(uParam1, "Hunting2", func_170(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 27:
			func_168(uParam1, "Josh1", func_170(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 28:
			func_168(uParam1, "Josh2", func_170(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 29:
			func_168(uParam1, "Josh3", func_170(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 30:
			func_168(uParam1, "Josh4", func_170(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 31:
			func_168(uParam1, "Maude1", func_170(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 32:
			func_168(uParam1, "Minute1", func_170(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 33:
			func_168(uParam1, "Minute2", func_170(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 34:
			func_168(uParam1, "Minute3", func_170(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 35:
			func_168(uParam1, "MrsPhilips1", func_170(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 36:
			func_168(uParam1, "MrsPhilips2", func_170(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 37:
			func_168(uParam1, "Nigel1", func_170(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 38:
			func_168(uParam1, "Nigel1A", func_170(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 39:
			func_168(uParam1, "Nigel1B", func_170(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 40:
			func_168(uParam1, "Nigel1C", func_170(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 41:
			func_168(uParam1, "Nigel1D", func_170(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 42:
			func_168(uParam1, "Nigel2", func_170(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 43:
			func_168(uParam1, "Nigel3", func_170(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 44:
			func_168(uParam1, "Omega1", func_170(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 45:
			func_168(uParam1, "Omega2", func_170(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 46:
			func_168(uParam1, "Paparazzo1", func_170(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 47:
			func_168(uParam1, "Paparazzo2", func_170(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 48:
			func_168(uParam1, "Paparazzo3", func_170(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 49:
			func_168(uParam1, "Paparazzo3A", func_170(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 50:
			func_168(uParam1, "Paparazzo3B", func_170(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 51:
			func_168(uParam1, "Paparazzo4", func_170(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 52:
			func_168(uParam1, "Rampage1", func_170(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 54:
			func_168(uParam1, "Rampage3", func_170(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 55:
			func_168(uParam1, "Rampage4", func_170(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 56:
			func_168(uParam1, "Rampage5", func_170(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 53:
			func_168(uParam1, "Rampage2", func_170(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 57:
			func_168(uParam1, "TheLastOne", func_170(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 58:
			func_168(uParam1, "Tonya1", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 59:
			func_168(uParam1, "Tonya2", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 60:
			func_168(uParam1, "Tonya3", func_170(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 61:
			func_168(uParam1, "Tonya4", func_170(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 62:
			func_168(uParam1, "Tonya5", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_168(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_169(int iParam0)
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

struct<2> func_170(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_171(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_171(int iParam0)
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

int func_172()
{
	if (func_175() && !func_176())
	{
		return 1;
	}
	if (func_174() && func_173())
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return Global_104938 > 0;
}

int func_174()
{
	if (Global_90022 != -1)
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
	}
	return 0;
}

int func_176()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_177()
{
	if (!func_140(5))
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_176())
		{
			return 0;
		}
	}
	if (func_166(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if ((Global_105209 == func_59() && unk_0x8520DF5301DD9811()) && Global_105210)
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_146 + uParam0->f_147) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 2)) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_180(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_180(var uParam0)
{
	func_181(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_181(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0xFA30DFD0084E92FE(*uParam0, 30))
	{
		switch (func_160(*uParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(uParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(uParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(uParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(uParam1, unk_0xFA30DFD0084E92FE(*uParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(uParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(uParam1, unk_0xFA30DFD0084E92FE(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(uParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(uParam0, 29);
	}
}

void func_182()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0x491B2241281A03B7(3000, 8000);
	switch (iLocal_47)
	{
		case 1:
			Local_96 = { -315.889f, -1550.554f, 7.233013f };
			Local_99 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_102 = 180f;
			Local_77 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_80 = -64.3539f;
			Local_67[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_74[0] = 158.3857f;
			Local_67[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_74[1] = 290.3041f;
			iLocal_46 = 1;
			break;
		
		case 2:
			Local_96 = { -538.2149f, -868.7426f, 17.96054f };
			Local_99 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_102 = 121.5f;
			Local_77 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_80 = -89.02679f;
			Local_67[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_74[0] = 12.5464f;
			Local_67[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_74[1] = 352.4951f;
			iLocal_46 = 1;
			break;
		
		case 3:
			Local_96 = { -468.6309f, 6101.907f, 14.8912f };
			Local_99 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_102 = 152.25f;
			Local_77 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_80 = 188.9862f;
			Local_67[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_74[0] = 251.7138f;
			Local_67[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_74[1] = 154.0836f;
			iLocal_46 = 2;
			break;
		
		case 4:
			Local_96 = { -631.3408f, -1105.581f, 7.220509f };
			Local_99 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_102 = 177.25f;
			Local_77 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_80 = 263.4662f;
			Local_67[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_74[0] = 338.8304f;
			Local_67[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_74[1] = 151.297f;
			iLocal_46 = 1;
			break;
		
		case 5:
			Local_77 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_80 = 26.9919f;
			iLocal_46 = 3;
			break;
		
		case 6:
			Local_77 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_80 = 271.1543f;
			iLocal_46 = 3;
			break;
		
		case 7:
			Local_77 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_80 = 335.9052f;
			iLocal_46 = 3;
			break;
		
		case 8:
			Local_77 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_80 = 119.1519f;
			iLocal_46 = 3;
			break;
		
		case 9:
			Local_77 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_80 = 83.1204f;
			iLocal_46 = 3;
			break;
		
		case 10:
			Local_77 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_80 = 248.8625f;
			iLocal_46 = 3;
			break;
		
		default:
			break;
	}
}

void func_183(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_185(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_105206 = 0;
	func_184();
}

void func_184()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), 1);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	}
}

void func_185(int iParam0)
{
	Global_105209 = iParam0;
}

int func_186(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_143601)
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
		if (!func_225())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_176())
			{
				return 0;
			}
		}
		if (!Global_105220.f_9056)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (func_224())
		{
			return 0;
		}
		if (Global_105209 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_166(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_223(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_222(func_11()) == 4 || func_222(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_221(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_220(Global_105220.f_24966.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_105211) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_219())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_140(5))
		{
			return 0;
		}
		if (func_210(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_25423)
		{
			return 0;
		}
		if (func_223(30) && !func_210(30, 0))
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
				Var5 = { Global_105220.f_2354.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_105220.f_2354.f_539.f_2276[iVar4];
				if (func_209(iVar8))
				{
					if (func_187(iVar4))
					{
						if (!func_129(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var5) < (210f * 210f))
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

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_105220.f_2354.f_539.f_2276[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_192(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_196(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_198(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_199(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_207(&uVar0, unk_0x7E09057438B9D216());
	func_206(&uVar0, unk_0x6E06C0DB9B43570D());
	func_205(&uVar0, unk_0xBE14F159908E4EE5());
	func_204(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_203(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
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
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_1()) || Global_104267) || Global_25279) || func_218()) || func_18(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_1()) || Global_25279) || func_218()) || func_18(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_1()) || Global_104267) || Global_25279) || func_218()) || func_18(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5) || Global_36452 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_1()) || Global_104267) || Global_25279) || func_218()) || func_18(8, -1)) || func_217()) || func_216()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_18(8, -1)) || func_214()) || func_213()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_1()) || Global_25279) || func_218()) || func_18(8, -1)) || func_216()) || func_215()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_1()) || func_216()) || Global_104267) || Global_25279) || func_218()) || Global_37057) || func_18(8, -1)) || func_215()) || func_213()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_1()) || Global_104267) || Global_25279) || func_218()) || func_18(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()
{
	return Global_92994.f_1;
}

int func_213()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	if (Global_71238)
	{
		return 1;
	}
	else if (Global_55961 && !Global_55967)
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_93007.f_322 > 0;
}

bool func_217()
{
	return Global_93007.f_321 > 0;
}

var func_218()
{
	return Global_1312854;
}

int func_219()
{
	func_10();
	if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)
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

int func_222(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_105220.f_7659.f_919[iParam0];
}

bool func_223(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_1, iVar0);
	}
	return bVar1;
}

int func_224()
{
	var uVar0;
	
	if (Global_25427)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(uVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_225()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_226()
{
	if (func_178())
	{
		if (unk_0xA901403F1DB7A780(uLocal_137))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_64))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_64);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_57))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_57);
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			if (unk_0x41A5D6415E2CC10E(iLocal_56))
			{
				unk_0xA35241BCE4C1A24B(&iLocal_56);
			}
			else
			{
				unk_0xF8ED8988FAF2823F(&iLocal_56);
			}
		}
		unk_0x2CA123B0622F495C(iLocal_104);
		unk_0x2CA123B0622F495C(iLocal_103);
		unk_0x2CA123B0622F495C(iLocal_105);
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0x23180B0A9E8D2951(iLocal_103, 0);
		unk_0x8510BC031C24B862(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0x9A172FCB057ABAEF(iLocal_131);
	}
	unk_0x483687B0FCA5415A(uLocal_65, 0);
	func_130(&uLocal_305, 0, 0);
	func_232(-1);
	func_227(&uLocal_317, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_227(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_229(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_228(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_228(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_230(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_230(var uParam0)
{
	func_231(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_231(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_160(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(uParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(uParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(uParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(uParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(uParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

void func_232(int iParam0)
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
	if (func_178())
	{
		func_236(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_105211 = unk_0x105601648511CC64();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_105209, 1), 64);
		if (func_58(Global_105209) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_105208, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_105206, (unk_0x105601648511CC64() - Global_105207), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105216, 0) && Global_105220.f_24966.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_105216, 0);
	}
	func_233(&Global_25336);
	Global_105210 = 0;
	func_185(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35867)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35866 = 0;
	Global_35868 = 0;
	Global_35905 = 15;
	Global_55964 = 0;
	Global_55965 = 0;
}

char* func_234(int iParam0, bool bParam1)
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

void func_235(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_194(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_105220.f_24966.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_242(int iParam0)
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

int func_243(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

