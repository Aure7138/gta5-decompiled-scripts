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
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0xA4E0D8FD51F2A6F7();
		}
	}
	else
	{
		if (unk_0x24862A9CDC8F8874(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
				{
					if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
					{
						if (!unk_0x0C7EC810080F0459(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0x9CEFBE395E148A32(iLocal_51[iVar0], iLocal_54, -1, func_234(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0x1A95AE7201CE6376(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_217();
		}
		if (!func_177(Local_87, 9, iLocal_47, 1, 0))
		{
			unk_0xA4E0D8FD51F2A6F7();
		}
		else
		{
			func_174(-1);
		}
	}
	func_173();
	uLocal_65 = unk_0x8738B068D97CDC64(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_170(&uLocal_317);
		if (!func_169())
		{
			if (func_168())
			{
				func_217();
			}
			unk_0xBB5777EE55D3B041("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0xCAA967E16BBE69CE() && !func_156())
					{
						if (func_147())
						{
							if ((iLocal_46 == 3 && !(unk_0x8EBAC9BC4005929D(Local_77, 3f) && func_146(unk_0xC8B93D94F8954288(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x8EBAC9BC4005929D(Local_77, 8f))
									{
										unk_0x98371F41D43CDFA9(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_145();
								if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0x1034B9E3CD286ADE(iLocal_54, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_217();
					}
					break;
				
				case 1:
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x5D42322C7DB888D0(iLocal_54, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) < 10000f || !unk_0x3F13A387457FD9A7(iLocal_54)) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x3F13A387457FD9A7(iLocal_51[0]))) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0x3F13A387457FD9A7(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_144())
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
							func_139();
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_54) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (iLocal_46 == 3)
						{
							func_134();
							if (!unk_0x3F13A387457FD9A7(iLocal_54) && (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 100f || func_144()))
							{
								func_125(1);
							}
						}
						else if (((!unk_0x3F13A387457FD9A7(iLocal_54) && iLocal_48 == 4) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_144())
						{
							func_125(1);
						}
						if ((iLocal_48 == 4 && unk_0x3F13A387457FD9A7(iLocal_54)) && iLocal_46 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) > 100f)
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
			if (iLocal_510 > 0)
			{
				if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0x3F13A387457FD9A7(iLocal_54))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) > 62500f)
					{
						func_217();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) > 10000f && !unk_0xCAA967E16BBE69CE())
					{
						func_217();
					}
				}
			}
		}
		else
		{
			unk_0x12CC67656ED7F3DF(unk_0xA34E7C2A5118D638());
			if (!unk_0x6B4865E08E90ACC5(uLocal_63))
			{
				if (!func_124(2) && !bLocal_114)
				{
					if (!unk_0xB45DF29A98EEAD5D())
					{
						func_123("SV_VANHELP1", 15000);
						func_122(2);
					}
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_56, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 0;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0x06A2030124FC73B9(uLocal_137)) && unk_0x5D42322C7DB888D0(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0x06A2030124FC73B9(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xDDD91DE55C0C309D(uLocal_137), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 2;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_56))
					{
						func_114(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_56, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 1))
					{
						func_114(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0x06A2030124FC73B9(uLocal_137))
					{
						func_97(&uLocal_305, unk_0xDDD91DE55C0C309D(uLocal_137), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xDDD91DE55C0C309D(uLocal_137), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_121(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0xB6900B8CB0ABBD2B(iLocal_54) && bLocal_109) && !bLocal_111) && (!func_124(0) || (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_stickybomb"), 0) && !func_124(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0xB45DF29A98EEAD5D() && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 225f)
							{
								func_123("SV_DOORHELP1", 15000);
								func_122(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0xB45DF29A98EEAD5D())
							{
								iLocal_135 = unk_0x693EBB4F13506457();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x693EBB4F13506457() - iLocal_135) > 2000 && unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_stickybomb"), 0))
							{
								func_123("SV_DOORHELP2", 15000);
								func_122(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_96("SV_DOORHELP1") || func_96("SV_DOORHELP2"))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
				}
			}
			switch (iLocal_48)
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
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
					{
						if (unk_0xE2A906142EC60944(iLocal_51[0]) != 3)
						{
							unk_0x88348AA03240D5AE(iLocal_51[0], 3);
						}
					}
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
					{
						if (unk_0xE2A906142EC60944(iLocal_51[1]) != 3)
						{
							unk_0x88348AA03240D5AE(iLocal_51[1], 3);
						}
					}
					if (((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[0])) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[1]))
					{
						iLocal_129 = 1;
						func_73(iLocal_51[1]);
						func_71(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0x2DC9BA2299B45EA6(iLocal_51[1]) || unk_0xB6900B8CB0ABBD2B(iLocal_51[1]))
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
						if (unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || unk_0xB6900B8CB0ABBD2B(iLocal_51[0]))
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
					func_217();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0xC0ADAF0814175B68(iLocal_54, -1) == unk_0xC8B93D94F8954288()) && !bLocal_113) && iLocal_48 != 8)
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
				if (unk_0x44AADBFB578FBE73(iLocal_66, joaat("player")) != 5)
				{
					unk_0x6CCF5F545348D54E(5, iLocal_66, joaat("player"));
					unk_0x6CCF5F545348D54E(5, joaat("player"), iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0x06A2030124FC73B9(uLocal_137) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0xDDD91DE55C0C309D(uLocal_137)) > 250f)
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
				if (unk_0x95CCECA3948CFE7B(iLocal_51[iVar2]))
				{
					if ((!unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar2]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_51[0], 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_54))
				{
					if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
					{
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > 10000f && unk_0x3F13A387457FD9A7(iLocal_54)) || unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > 62500f)
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
				iLocal_127 = unk_0x693EBB4F13506457();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x693EBB4F13506457() - iLocal_127) > 5000)
				{
					unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
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
		if (((unk_0x693EBB4F13506457() - iLocal_127) > 10000 && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x531444754C426278(0, 3);
			if (iVar4 == 0)
			{
				unk_0x6550E854B6D80CD9("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x6550E854B6D80CD9("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x6550E854B6D80CD9("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
					{
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
					}
					unk_0x93BECBF0A5E499D6(unk_0xA34E7C2A5118D638(), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
				}
			}
		}
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0 && func_2())
		{
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
			unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (unk_0xBEF21CF3DCA0E59B(iLocal_54, 0) > 0f || unk_0xBEF21CF3DCA0E59B(iLocal_54, 1) > 0f)
			{
				if (unk_0xA6BAF129343F464F(iLocal_54) == 3)
				{
					unk_0x0782F0CAEA719452(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xBEF21CF3DCA0E59B(iLocal_54, 0) == 0f && unk_0xBEF21CF3DCA0E59B(iLocal_54, 1) == 0f)
				{
					if (unk_0xA6BAF129343F464F(iLocal_54) == 1)
					{
						unk_0x0782F0CAEA719452(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0xD873651464A89D4D(iLocal_131);
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar5]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar5]))
				{
					if (unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0xBECB5D1E29317CB7(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xBECB5D1E29317CB7(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0xBECB5D1E29317CB7(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xBECB5D1E29317CB7(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x74BBB84E37C71AAC(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0xEE8A34E761BB8EB0(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0xA987193861052B86(iLocal_51[iVar5], 0, -1056964608);
							unk_0xA987193861052B86(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0xA987193861052B86(iLocal_51[iVar5], 0, -1056964608);
							unk_0xA987193861052B86(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0xA987193861052B86(iLocal_51[iVar5], 0, -1056964608);
							unk_0xA987193861052B86(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x74BBB84E37C71AAC(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0xEE8A34E761BB8EB0(iLocal_51[iVar5], 1);
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
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0xA987193861052B86(iLocal_51[iVar5], 0, -1056964608);
						unk_0xA987193861052B86(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0xB0A9B470CE75BF12(iLocal_56)) && !unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130])) && !unk_0xCD61E9D5CABC7E35(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0xCD61E9D5CABC7E35(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0xCD61E9D5CABC7E35(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x5323F488E6A1B660(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_54))
			{
				if (unk_0x87D4C731B013290A(iLocal_54, unk_0xC8B93D94F8954288(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0x0CBE045BBBA5CFDE(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && (((unk_0x5D42322C7DB888D0(iLocal_54, 0) && bLocal_114) && unk_0x06A2030124FC73B9(uLocal_137)) || (!unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0x06A2030124FC73B9(uLocal_137)))) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0xDDD91DE55C0C309D(uLocal_137)) < 20f)
	{
		iVar1 = unk_0xB8EB8C1E89AC5BB0(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x2DC9BA2299B45EA6(iVar1))
		{
			if (unk_0x6D5BB810CC209E15(iVar1) == joaat("s_m_y_cop_01") || unk_0x6D5BB810CC209E15(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0xB8EB8C1E89AC5BB0(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x2DC9BA2299B45EA6(iVar1))
		{
			if (unk_0x6D5BB810CC209E15(iVar1) == joaat("s_m_y_cop_01") || unk_0x6D5BB810CC209E15(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x072C2EF16D638437(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), fVar0, 0, 1024);
		if (unk_0x5D42322C7DB888D0(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x072C2EF16D638437(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), fVar0, 0, 1024);
		if (unk_0x5D42322C7DB888D0(iVar2, 0))
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
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[1], 1));
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_6();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_7()
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

int func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14413 = func_11();
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

int func_11()
{
	func_12();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_15(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_14(unk_0xC8B93D94F8954288());
			if (func_13(iVar0) && (!func_16(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_13(Global_100976.f_1770.f_539.f_3549))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[0], 1));
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[1], 1));
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
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_51[iVar1]))
			{
				if (((!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar1]) && unk_0x87D4C731B013290A(iLocal_51[iVar1], unk_0xC8B93D94F8954288(), 1)) || unk_0x2DC9BA2299B45EA6(iLocal_51[iVar1])) || unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && iLocal_116)
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
			if (unk_0x95CCECA3948CFE7B(iLocal_56))
			{
				if (!unk_0xB0A9B470CE75BF12(iLocal_56))
				{
					unk_0xA278ECBE30D8AE4F(&iLocal_56);
					if (!unk_0x06A2030124FC73B9(uLocal_137) && !bLocal_111)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x693EBB4F13506457() - iLocal_136) > 3000)
				{
					if (unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]) || unk_0x770AAB67BDD9C729(iLocal_51[iLocal_130]))
					{
						unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
						iLocal_136 = unk_0x693EBB4F13506457();
					}
				}
			}
			else if (!unk_0x06A2030124FC73B9(uLocal_137))
			{
				if (unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]) || ((!unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]) && unk_0x770AAB67BDD9C729(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_56);
		}
		if (unk_0x06A2030124FC73B9(uLocal_137))
		{
			unk_0x7412597305E608CE(uLocal_137);
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
				Param0 = { unk_0x9204FE00BC816343(unk_0xCC31DB73C65552D8(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0x9204FE00BC816343(unk_0x44C17CCB85A88A1F(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0x59A0729D503ED758(&uLocal_138, 3);
		unk_0x59A0729D503ED758(&uLocal_138, 4);
		unk_0x59A0729D503ED758(&uLocal_138, 1);
		if (bParam3)
		{
			uLocal_137 = unk_0x4DC21548252F1A8E(joaat("pickup_money_security_case"), Param0, unk_0xF57992155BDFCC67(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x0BF6021B7B677E57(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0x6B4865E08E90ACC5(uLocal_64))
		{
			uLocal_64 = func_25(uLocal_137);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_56);
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
	
	if (!unk_0x06A2030124FC73B9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF19CDE403BF1A712(uParam0);
	unk_0x3734DA1F207E7166(uVar0, func_27(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
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
		if (unk_0x95CCECA3948CFE7B(iLocal_57))
		{
			unk_0x8619CDF424980CF9(iLocal_54, 2, 0, 0);
			unk_0x8619CDF424980CF9(iLocal_54, 3, 0, 0);
			if (unk_0x95CCECA3948CFE7B(iLocal_57))
			{
				unk_0xA278ECBE30D8AE4F(&iLocal_57);
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
			if (unk_0xBEF21CF3DCA0E59B(iLocal_54, 2) == 0f && unk_0xBEF21CF3DCA0E59B(iLocal_54, 3) == 0f)
			{
				if (unk_0x95CCECA3948CFE7B(iLocal_56))
				{
					if (unk_0xB0A9B470CE75BF12(iLocal_56))
					{
						unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
					}
					unk_0xAD318582A32CA5D2(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_54))
				{
					if (((unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0xBEF21CF3DCA0E59B(iLocal_54, 2) > 0.25f) && unk_0xBEF21CF3DCA0E59B(iLocal_54, 3) > 0.25f) || !unk_0x5D42322C7DB888D0(iLocal_54, 0))
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_56))
						{
							if (unk_0xB0A9B470CE75BF12(iLocal_56))
							{
								unk_0xE55275772E833643(unk_0x83E9D86E63672B9A(), "DOORS_BLOWN", unk_0xEA9A8033D5CFC295(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0xB81176DFD2611E8B(iLocal_56, 1, 0);
								unk_0x8FB4254399424391(iLocal_56, 1, 0);
								unk_0xE457AC24AF211ECC(iLocal_56);
								unk_0xBA56A0D247C4848D(iLocal_56, 1);
								Local_477 = { unk_0x44C17CCB85A88A1F(iLocal_56, 1) - unk_0x44C17CCB85A88A1F(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_477) > 10f)
								{
									Local_477 = { func_29(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0x3A2304A561B7D162(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x693EBB4F13506457();
							}
							else if (unk_0x77AC31DCFC2EE4DA(unk_0x44C17CCB85A88A1F(iLocal_56, 1), unk_0xCC31DB73C65552D8(iLocal_54, Local_470), unk_0xCC31DB73C65552D8(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x693EBB4F13506457() - iLocal_476) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x95CCECA3948CFE7B(iLocal_54))
				{
					unk_0x8619CDF424980CF9(iLocal_54, 2, 0, 0);
					unk_0x8619CDF424980CF9(iLocal_54, 3, 0, 0);
					func_24(unk_0xCC31DB73C65552D8(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_62(8);
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_56) && !unk_0x06A2030124FC73B9(uLocal_137))
			{
				if (unk_0x9BA9222C7124CA04(iLocal_56) == 0f && (unk_0x693EBB4F13506457() - iLocal_476) > 1000)
				{
					func_24(unk_0x44C17CCB85A88A1F(iLocal_56, 1), 1);
					unk_0xA278ECBE30D8AE4F(&iLocal_56);
				}
				else if ((unk_0x693EBB4F13506457() - iLocal_476) > 5000)
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
	
	if (unk_0x95CCECA3948CFE7B(iLocal_57) && unk_0xB0A9B470CE75BF12(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x32AADF258A6B79F2(unk_0x44C17CCB85A88A1F(iLocal_57, 1), 0.3f, unk_0x06C0DD6C22493B3F(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0x665E3D8ED43A19BF(unk_0x44C17CCB85A88A1F(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_57, 1), 1f, 1) || (unk_0xDF87568D121A99AC(2, unk_0x44C17CCB85A88A1F(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0xD3A4099D2845F152(iLocal_57) < iLocal_132 && unk_0x87D4C731B013290A(iLocal_57, unk_0xC8B93D94F8954288(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0xD3A4099D2845F152(iLocal_57)));
			unk_0x0CBE045BBBA5CFDE(iLocal_57);
		}
		if ((unk_0x693EBB4F13506457() - iLocal_467) > 200 && unk_0x95CCECA3948CFE7B(iLocal_54))
		{
			if (unk_0x2AE94AAE3C6DA0AD(unk_0xCC31DB73C65552D8(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0xCC31DB73C65552D8(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0x693EBB4F13506457();
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
		iLocal_132 = unk_0xD3A4099D2845F152(iLocal_57);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x8004C5FD76EF6DD2(5, Param3, Param0) || (unk_0x8004C5FD76EF6DD2(2, Param3, Param0) && !bParam10)) || (unk_0x8004C5FD76EF6DD2(20, Param3, Param0) && !bParam10)) || unk_0x8004C5FD76EF6DD2(4, Param3, Param0)) || (unk_0x8004C5FD76EF6DD2(28, Param3, Param0) && !bParam10)) || unk_0x8004C5FD76EF6DD2(32, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(25, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(9, Param3, Param0)) || (unk_0x8004C5FD76EF6DD2(3, Param3, Param0) && !bParam10)) || (unk_0x8004C5FD76EF6DD2(6, Param3, Param0) && !bParam10)) || unk_0x8004C5FD76EF6DD2(0, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(1, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(23, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(34, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(14, Param3, Param0)) || (unk_0x8004C5FD76EF6DD2(30, Param3, Param0) && !bParam10)) || (unk_0x8004C5FD76EF6DD2(12, Param3, Param0) && !bParam10)) || unk_0x8004C5FD76EF6DD2(7, Param3, Param0)) || (unk_0x8004C5FD76EF6DD2(21, Param3, Param0) && !bParam10)) || (unk_0x8004C5FD76EF6DD2(18, Param3, Param0) && !bParam10)) || unk_0x8004C5FD76EF6DD2(15, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(10, Param3, Param0)) || unk_0x8004C5FD76EF6DD2(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xDF87568D121A99AC(5, Param6, iParam9) || (unk_0xDF87568D121A99AC(2, Param6, iParam9) && !bParam10)) || (unk_0xDF87568D121A99AC(20, Param6, iParam9) && !bParam10)) || unk_0xDF87568D121A99AC(4, Param6, iParam9)) || (unk_0xDF87568D121A99AC(28, Param6, iParam9) && !bParam10)) || unk_0xDF87568D121A99AC(32, Param6, iParam9)) || unk_0xDF87568D121A99AC(25, Param6, iParam9)) || unk_0xDF87568D121A99AC(9, Param6, iParam9)) || (unk_0xDF87568D121A99AC(3, Param6, iParam9) && !bParam10)) || (unk_0xDF87568D121A99AC(6, Param6, iParam9) && !bParam10)) || unk_0xDF87568D121A99AC(0, Param6, iParam9)) || unk_0xDF87568D121A99AC(1, Param6, iParam9)) || unk_0xDF87568D121A99AC(23, Param6, iParam9)) || unk_0xDF87568D121A99AC(34, Param6, iParam9)) || unk_0xDF87568D121A99AC(14, Param6, iParam9)) || (unk_0xDF87568D121A99AC(30, Param6, iParam9) && !bParam10)) || (unk_0xDF87568D121A99AC(12, Param6, iParam9) && !bParam10)) || unk_0xDF87568D121A99AC(7, Param6, iParam9)) || (unk_0xDF87568D121A99AC(21, Param6, iParam9) && !bParam10)) || (unk_0xDF87568D121A99AC(18, Param6, iParam9) && !bParam10)) || unk_0xDF87568D121A99AC(15, Param6, iParam9)) || unk_0xDF87568D121A99AC(10, Param6, iParam9)) || unk_0xDF87568D121A99AC(27, Param6, iParam9))
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
	
	if (!unk_0x6B4865E08E90ACC5(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && unk_0x5D42322C7DB888D0(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0x6B4865E08E90ACC5(uLocal_60[1]))
					{
						uLocal_60[1] = func_36(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x6B4865E08E90ACC5(uLocal_60[1]))
					{
						unk_0x5356E82C1E5E0C44(&(uLocal_60[1]));
					}
					if (!unk_0x6B4865E08E90ACC5(uLocal_59))
					{
						uLocal_59 = func_34(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x6B4865E08E90ACC5(uLocal_60[1]))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_60[1]));
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_59))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_60[0]) && unk_0x15331474DCAFA459(uLocal_60[0]) != 119)
			{
				unk_0x5356E82C1E5E0C44(&(uLocal_60[0]));
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_60[1]) && unk_0x15331474DCAFA459(uLocal_60[1]) != 119)
			{
				unk_0x5356E82C1E5E0C44(&(uLocal_60[1]));
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_59) && unk_0x15331474DCAFA459(uLocal_59) != 119)
			{
				unk_0x5356E82C1E5E0C44(&uLocal_59);
			}
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
					{
						if (unk_0x0C7EC810080F0459(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_59))
				{
					uLocal_59 = func_34(iLocal_54, 1, 0);
				}
			}
			else if (unk_0x6B4865E08E90ACC5(uLocal_59))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_59);
			}
			if ((unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0x6B4865E08E90ACC5(uLocal_59)) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 0))
				{
					if (unk_0xF40F7B5C29E813BB(uLocal_59) != 0)
					{
						unk_0x7DF168F8439ABF1A(uLocal_59, 0);
					}
				}
				else if (unk_0xF40F7B5C29E813BB(uLocal_59) != 255)
				{
					unk_0x7DF168F8439ABF1A(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0x06A2030124FC73B9(uLocal_137) && !unk_0x277ECDA23D8CCEB4(iLocal_51[iVar0], 0))
					{
						if (!unk_0x54BD36F7F4951C53(iLocal_51[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0x277ECDA23D8CCEB4(iLocal_51[iVar0], 0))
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
					if (!unk_0x6B4865E08E90ACC5(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_36(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0x6B4865E08E90ACC5(uLocal_60[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x06A2030124FC73B9(uLocal_137) && !bLocal_121)
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_64))
				{
					uLocal_64 = func_26(uLocal_137);
				}
			}
			else if (unk_0x6B4865E08E90ACC5(uLocal_64))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_64);
			}
		}
	}
	else if ((unk_0x95CCECA3948CFE7B(iLocal_54) && unk_0x95CCECA3948CFE7B(iLocal_51[0])) && unk_0x95CCECA3948CFE7B(iLocal_51[1]))
	{
		if ((((((!unk_0x3F13A387457FD9A7(iLocal_54) && unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x3F13A387457FD9A7(iLocal_51[0]) && unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x3F13A387457FD9A7(iLocal_51[1]) && unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_63);
		}
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_60[0]))
	{
		unk_0xEBA460B665086587(uLocal_60[0], iLocal_122);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_60[1]))
	{
		unk_0xEBA460B665086587(uLocal_60[1], iLocal_122);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_59))
	{
		unk_0xEBA460B665086587(uLocal_59, iLocal_122);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_64))
	{
		unk_0xEBA460B665086587(uLocal_64, iLocal_122);
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
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_27(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
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
		unk_0x3734DA1F207E7166(uVar0, func_27(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_27(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6B4865E08E90ACC5(uVar0)) && unk_0xF2831232D38CD691(&(Global_100976.f_32519[iParam2 /*29*/].f_3)))
	{
		unk_0x8755DAC584918BF9(uVar0, &(Global_100976.f_32519[iParam2 /*29*/].f_3));
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
			Global_100976.f_29464.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_100964 = iParam1;
		if (Global_100962 == 0)
		{
			if (((Global_100965 == 1 || Global_100965 == 5) || Global_100965 == 11) || Global_100965 == 25)
			{
				func_40(2);
			}
			else if ((Global_100965 == 26 || Global_100965 == 8) || Global_100965 == 17)
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
	Global_100962 = iParam0;
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
		Global_100976.f_8828[iParam0 /*12*/].f_10 = uParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = uParam2;
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
		func_46(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_45() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

int func_45()
{
	return Global_25115;
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_48();
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

int func_48()
{
	return Global_1312746;
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
		unk_0x59A0729D503ED758(&(Global_100976.f_24879.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF8D041B05C3D1FD4(sParam0, ""))
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
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_24879[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_100976.f_24879.f_145 < 9)
	{
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_4), sParam1, 16);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_8 = (unk_0x693EBB4F13506457() + iParam3);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_9 = iParam5;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_11 = iParam6;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_12 = uParam2;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_13 = iParam7;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_14 = iParam8;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = ((unk_0x693EBB4F13506457() + iParam3) + iParam4);
		}
		else
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = -1;
		}
		Global_100976.f_24879.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_100976.f_24879.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 0))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[0])
			{
				Global_100976.f_24879.f_146[0] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 1))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[1])
			{
				Global_100976.f_24879.f_146[1] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 2))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[2])
			{
				Global_100976.f_24879.f_146[2] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_100976.f_1770.f_539.f_3549)
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
		return unk_0xDCC86F723E82125E(Global_100976.f_24879.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_100976.f_29464.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xC4E68AF0B559FAC4(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x7CBED6EFED40E7EB(&cParam0))
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
		if (unk_0x88D33FF63088413E(uLocal_137))
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
	if (!unk_0x06A2030124FC73B9(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				if (!func_64(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x693EBB4F13506457();
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
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]))
				{
					if (!func_64(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x693EBB4F13506457();
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
			if ((unk_0x693EBB4F13506457() - iLocal_465) > 3000)
			{
				unk_0x459A6F82E024C891(&(iLocal_51[0]));
				unk_0x459A6F82E024C891(&(iLocal_51[1]));
				unk_0x20D399098E17A191(iLocal_54, -1000f, 1);
				unk_0x8FB4254399424391(iLocal_54, 1, 0);
				unk_0xEF84021B2AB5E334(&iLocal_54);
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
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x2A488C176D52CCA5(unk_0xDDD91DE55C0C309D(uLocal_137), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x3F13A387457FD9A7(iParam0) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iParam0, 1)) < 300f)
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
		iLocal_507 = unk_0x693EBB4F13506457();
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
				{
					if (func_21() < 30f && !unk_0x2DC9BA2299B45EA6(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && unk_0x95CCECA3948CFE7B(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_51[iVar0]);
							unk_0x3E2E609450787FFE(&uLocal_58);
							if (unk_0x277ECDA23D8CCEB4(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x11896648C9E8F14F("move_injured_generic"))
									{
										unk_0x9740820061E05C06(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0xE5F6BE3F8E937ACE(0, 0, 256);
							}
							unk_0xD1FE26E80A6E2C00(0);
							if (iLocal_118[iVar0])
							{
								unk_0x1A95AE7201CE6376(0, unk_0x531444754C426278(1000, 3000));
							}
							unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
							unk_0x939BC11172AA1303(uLocal_58);
							unk_0xBFE865E3B513451B(iLocal_51[iVar0], uLocal_58);
							unk_0xA9351C9309E03069(&uLocal_58);
						}
						unk_0x1296D571B761D748(iLocal_51[iVar0], 6, 0);
						unk_0x1296D571B761D748(iLocal_51[iVar0], 0, 1);
						unk_0x1296D571B761D748(iLocal_51[iVar0], 1, 0);
						unk_0xC8C48B991776ADA5(iLocal_51[iVar0], 1);
						unk_0x7867B753FDFAFE2B(iLocal_51[iVar0], 1);
						unk_0xAAD662D7E0D59F4C(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0xB0A9B470CE75BF12(iLocal_56)) && !unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]))
				{
					unk_0x5124C5FA52D2AF3E(iLocal_51[iLocal_130]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]))
					{
						unk_0x5124C5FA52D2AF3E(iLocal_51[iLocal_130]);
						unk_0x3E2E609450787FFE(&uLocal_58);
						if (unk_0x277ECDA23D8CCEB4(iLocal_51[iLocal_130], 0))
						{
							unk_0xE5F6BE3F8E937ACE(0, 0, 256);
						}
						unk_0xD1FE26E80A6E2C00(0);
						unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
						unk_0x939BC11172AA1303(uLocal_58);
						unk_0xBFE865E3B513451B(iLocal_51[iLocal_130], uLocal_58);
						unk_0xA9351C9309E03069(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
				{
					if (unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
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
						if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_54))
							{
								unk_0xD10498A973F3D9FC(iLocal_51[iVar0], iLocal_54, unk_0xCC31DB73C65552D8(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0x06A2030124FC73B9(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0xD10498A973F3D9FC(iLocal_51[iVar0], iLocal_54, unk_0xDDD91DE55C0C309D(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0xBE69D5EBB6F72A15(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x693EBB4F13506457() - iLocal_500)) > unk_0xC6D38B918E72181E(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x693EBB4F13506457();
								}
							}
						}
					}
					if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 0) && (unk_0x693EBB4F13506457() - iLocal_507) > 5000)
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
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
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
					unk_0x31D56B8BF9715256(iLocal_51[iVar0], 1048576000);
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
	
	if ((unk_0x693EBB4F13506457() - iLocal_484) > 250)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
				{
					if (unk_0x164373F9651C2457(iLocal_51[iVar0], unk_0xC8B93D94F8954288(), 19) && unk_0x6F40F1AEF9770612(iLocal_51[iVar0], unk_0xC8B93D94F8954288()))
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
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
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
	
	if (unk_0x95CCECA3948CFE7B(iLocal_56))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iParam0]))
		{
			if (unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0xCD61E9D5CABC7E35(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x853B39ECA83DA242(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
						unk_0xA278ECBE30D8AE4F(&iLocal_56);
					}
				}
				else
				{
					unk_0xAAD662D7E0D59F4C(iLocal_51[iParam0], 1);
					unk_0x5323F488E6A1B660(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x95CCECA3948CFE7B(iLocal_56) || (unk_0x95CCECA3948CFE7B(iLocal_56) && !unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iParam0]))
		{
			unk_0xAAD662D7E0D59F4C(iLocal_51[iParam0], 0);
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
	
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		Var0 = { func_29(unk_0xEABAE14292BF78FB(iLocal_54, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1))) };
		fVar3 = ((unk_0x59DD203239FBDCAD(iLocal_54) + unk_0x949D03817D2A6977(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x59DD203239FBDCAD(iLocal_54) + unk_0x949D03817D2A6977(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0xE79F1883B253E5B8(unk_0x44C17CCB85A88A1F(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0xE79F1883B253E5B8(unk_0x44C17CCB85A88A1F(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
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
				if ((((((!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar12]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x693EBB4F13506457() - iLocal_504[iVar12]) > 1000) && !unk_0x277ECDA23D8CCEB4(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_501 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
						}
						unk_0x3E2E609450787FFE(&uVar14);
						if (func_66() || func_32(Local_501))
						{
							unk_0xD9650EE91822AA1A(0, Var5[iVar12 /*3*/], unk_0xC8B93D94F8954288(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x726676CF6AC20DCB(0, unk_0xC8B93D94F8954288(), -1, 1);
						}
						else
						{
							unk_0x93D50BF03216123D(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x5FDC0B9DA4CCF60A(0, Local_501, -1, 1, 0);
						}
						unk_0x939BC11172AA1303(uVar14);
						unk_0xBFE865E3B513451B(iLocal_51[iVar12], uVar14);
						unk_0xA9351C9309E03069(&uVar14);
					}
					iLocal_504[iVar12] = unk_0x693EBB4F13506457();
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
	
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0xAAD662D7E0D59F4C(iParam0, 1);
					unk_0x5124C5FA52D2AF3E(iParam0);
					Local_485 = { unk_0xEA9A8033D5CFC295(iLocal_54, 0) };
					Local_488 = { unk_0xF57992155BDFCC67(iLocal_54, 2) };
					Local_491 = { unk_0xFF6CF906805A063D("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[1])) && !unk_0x2DC9BA2299B45EA6(iLocal_51[0])) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[0]))
					{
						if (func_21() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x06A2030124FC73B9(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x81333BEA4837207C(iParam0, unk_0xDDD91DE55C0C309D(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x81333BEA4837207C(iParam0, unk_0xDDD91DE55C0C309D(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0x2DC9BA2299B45EA6(iParam0))
					{
						if (unk_0x06A2030124FC73B9(uLocal_137))
						{
							unk_0x81333BEA4837207C(iParam0, unk_0xDDD91DE55C0C309D(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
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
				if (!unk_0x2DC9BA2299B45EA6(iParam0) && unk_0x06A2030124FC73B9(uLocal_137))
				{
					if ((unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0xDDD91DE55C0C309D(uLocal_137), 1) < 2f && !unk_0x770AAB67BDD9C729(iParam0)) && (unk_0x693EBB4F13506457() - iLocal_136) > 3000)
					{
						if (unk_0x74BBB84E37C71AAC(iParam0, 4))
						{
							unk_0x80423B6A45BF05DA(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0x7412597305E608CE(uLocal_137);
						func_79(iParam0);
						unk_0x80423B6A45BF05DA(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x2DC9BA2299B45EA6(iParam0) && unk_0x5D42322C7DB888D0(iLocal_54, 0))
				{
					if (unk_0x090C65D5190A249D(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0x81333BEA4837207C(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0x81333BEA4837207C(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x2DC9BA2299B45EA6(iParam0))
				{
					if (unk_0x06A2030124FC73B9(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0x59DD203239FBDCAD(iParam0);
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
						if (unk_0x2A488C176D52CCA5(Local_491, unk_0x44C17CCB85A88A1F(iParam0, 1)) < 0.3f)
						{
							if (unk_0xA3C5926D6E5619AE((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0xD89BA9C839BD1A48(iParam0, -1056964608);
								unk_0x5124C5FA52D2AF3E(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0x0B15BB6DFB729046(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0xA5666A46C1079EFE(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0x16A73DD34A0EE6C3(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xA5666A46C1079EFE(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0x16A73DD34A0EE6C3(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x01BAA21528B22625(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x3F13A387457FD9A7(iParam0) && !unk_0x8EBAC9BC4005929D(Local_485, 2f))
						{
							unk_0xC76B5C68AB6DC7DF(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xBC6B93737FCDC466(iLocal_494))
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
						if ((unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0x57BA797A9A91EF93(iLocal_56, iParam0)) && unk_0x2091E42376999826(iLocal_494) > fLocal_508)
						{
							if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_54))
							{
								unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
								unk_0x8FB4254399424391(iLocal_56, 0, 0);
								unk_0xAD318582A32CA5D2(iLocal_56, iLocal_54, 0, unk_0xEABAE14292BF78FB(iLocal_54, unk_0x44C17CCB85A88A1F(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x2091E42376999826(iLocal_494) > fLocal_509)
					{
						unk_0x20D399098E17A191(iLocal_54, -4f, 1);
						unk_0x5124C5FA52D2AF3E(iParam0);
						if (unk_0x95CCECA3948CFE7B(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x3D289B1B7567CB62(iLocal_54, 2, 1);
							unk_0x3D289B1B7567CB62(iLocal_54, 3, 1);
							unk_0xAAD662D7E0D59F4C(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xBC6B93737FCDC466(iLocal_494) && unk_0x2091E42376999826(iLocal_494) > fLocal_509) || !unk_0xBC6B93737FCDC466(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
						{
							unk_0x9CEFBE395E148A32(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
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
	if (!unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!bLocal_109)
		{
			if ((((((func_21() < 10f && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6)) && func_66()) || ((func_21() < 20f && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6)) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))) || (func_21() < 5f && bLocal_110)) || (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && func_74(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))) || ((!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x95CCECA3948CFE7B(unk_0x974516F979AD07BC())) && func_74(unk_0x974516F979AD07BC())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0xBC6B93737FCDC466(iLocal_494))
			{
				unk_0x20D399098E17A191(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			unk_0xAAD662D7E0D59F4C(iParam0, 0);
		}
	}
	if ((unk_0x5D42322C7DB888D0(iLocal_54, 0) && iLocal_48 != 7) && unk_0xBC6B93737FCDC466(iLocal_494))
	{
		unk_0x20D399098E17A191(iLocal_54, -8f, 1);
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
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x95CCECA3948CFE7B(iLocal_54))
	{
		uVar59 = 4;
		unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0xCC31DB73C65552D8(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0x0C7EC810080F0459(iLocal_51[1], iLocal_54, 1))
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			iLocal_56 = unk_0x7C62BC1EB194D985(iLocal_105, Local_77, 1, 1, 0);
			unk_0xBC4E8EDD8046417B(iLocal_56, 0);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			unk_0xAD318582A32CA5D2(iLocal_56, iParam0, unk_0xF2122440C667309F(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1);
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
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
				{
					unk_0xAAD662D7E0D59F4C(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				if (unk_0x95CCECA3948CFE7B(func_83()))
				{
					if (!unk_0x2DC9BA2299B45EA6(func_83()))
					{
						if (unk_0xC0ADAF0814175B68(iLocal_54, -1) != func_83() && unk_0x74CAAD9E721B315D(iLocal_54, -1))
						{
							unk_0x9CEFBE395E148A32(func_83(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && func_83() != iLocal_51[1])
				{
					if (unk_0xC0ADAF0814175B68(iLocal_54, 0) != iLocal_51[1] && unk_0x74CAAD9E721B315D(iLocal_54, 0))
					{
						unk_0x9CEFBE395E148A32(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
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
				if (unk_0x95CCECA3948CFE7B(func_83()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					unk_0xC2E4F4B0B73CFE01(func_83(), iLocal_54, unk_0xC8B93D94F8954288(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x95CCECA3948CFE7B(func_83()))
				{
					unk_0xBA1C58C1ED9624DD(func_83(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				if (unk_0x9BA9222C7124CA04(iLocal_54) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x95CCECA3948CFE7B(iLocal_54) && unk_0x95CCECA3948CFE7B(unk_0xC0ADAF0814175B68(iLocal_54, -1))) && (unk_0xB6900B8CB0ABBD2B(unk_0xC0ADAF0814175B68(iLocal_54, -1)) || unk_0x2DC9BA2299B45EA6(unk_0xC0ADAF0814175B68(iLocal_54, -1))))
	{
		iVar1 = 0;
		if (unk_0xC0ADAF0814175B68(iLocal_54, -1) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_54, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > 100f)
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar1]) && unk_0x090C65D5190A249D(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0xF36EA652E4A6CED0(iLocal_51[iVar1], 2, 1);
				unk_0x3E2E609450787FFE(&uVar2);
				unk_0x2798F59E60097FDE(0, iLocal_54);
				unk_0xC2E4F4B0B73CFE01(0, iLocal_54, unk_0xC8B93D94F8954288(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x939BC11172AA1303(uVar2);
				unk_0xBFE865E3B513451B(iLocal_51[iVar1], uVar2);
				unk_0xA9351C9309E03069(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0x5D42322C7DB888D0(iLocal_54, 0) || unk_0x06A2030124FC73B9(uLocal_137)) || iLocal_49 == 3) || unk_0x442EE710FCFD5D0D(iLocal_54, 0, 7000)) || unk_0x442EE710FCFD5D0D(iLocal_54, 3, 30000)) || unk_0x442EE710FCFD5D0D(iLocal_54, 2, 30000)) || unk_0x442EE710FCFD5D0D(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x95CCECA3948CFE7B(iLocal_54))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_54))
		{
			if (((((unk_0xD3A4099D2845F152(iLocal_54) < 300 || unk_0x78FF715074ED0311(iLocal_54) < 200f) || (unk_0x984546D04F4DDFDF(iLocal_54, 0, 0) && unk_0x984546D04F4DDFDF(iLocal_54, 1, 0))) || (unk_0x984546D04F4DDFDF(iLocal_54, 4, 0) && unk_0x984546D04F4DDFDF(iLocal_54, 5, 0))) || (unk_0x984546D04F4DDFDF(iLocal_54, 0, 0) && unk_0x984546D04F4DDFDF(iLocal_54, 4, 0))) || (unk_0x984546D04F4DDFDF(iLocal_54, 1, 0) && unk_0x984546D04F4DDFDF(iLocal_54, 5, 0)))
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
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[0]))
		{
			if (!unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[1]))
		{
			if (!unk_0x0C7EC810080F0459(iLocal_51[1], iLocal_54, 0))
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
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[0]))
	{
		return iLocal_51[0];
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[1]))
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
				if (unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0xB0A9B470CE75BF12(iLocal_56))
				{
					unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
					{
						unk_0x1296D571B761D748(iLocal_51[iVar0], 17, 1);
						unk_0xF36EA652E4A6CED0(iLocal_51[iVar0], 128, 1);
						unk_0xF36EA652E4A6CED0(iLocal_51[iVar0], 16, 1);
						unk_0x1296D571B761D748(iLocal_51[iVar0], 1, 0);
						unk_0x3E2E609450787FFE(&uVar1);
						if (unk_0x277ECDA23D8CCEB4(iLocal_51[iVar0], 1))
						{
							unk_0xE5F6BE3F8E937ACE(iLocal_51[iVar0], 0, 256);
						}
						unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 300f, -1, 0, 0);
						unk_0x939BC11172AA1303(uVar1);
						unk_0xBFE865E3B513451B(iLocal_51[iVar0], uVar1);
						unk_0xA9351C9309E03069(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				if (func_85(iLocal_54, 1, 0, 0, 0))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7EFD275DF858497F(iParam0) + 1;
	if (iParam4 || !unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x74CAAD9E721B315D(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xC8B93D94F8954288())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x2DC9BA2299B45EA6(iVar2))
					{
						if (unk_0xA815CBE767EFA3CB(iVar2))
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
					iVar3 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
					if (!unk_0x2DC9BA2299B45EA6(iVar3))
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
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0xB0A9B470CE75BF12(iLocal_56))
					{
						if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[0]))
						{
							func_87(0);
						}
						else
						{
							unk_0x5124C5FA52D2AF3E(iLocal_51[0]);
						}
						if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[1]))
						{
							func_87(1);
						}
						else
						{
							unk_0x5124C5FA52D2AF3E(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_87(0);
						func_87(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]))
					{
						func_87(iLocal_130);
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
	if (unk_0x95CCECA3948CFE7B(iLocal_55))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_55) && unk_0x5D42322C7DB888D0(iLocal_54, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_55, 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0xB6900B8CB0ABBD2B(iLocal_55) || !unk_0x5D42322C7DB888D0(iLocal_55, 0)) || (!unk_0x381C0C4479AA5C09(iLocal_55, 1119092736) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_55, 1)))
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
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x87D4C731B013290A(iLocal_51[0], unk_0xC8B93D94F8954288(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x87D4C731B013290A(iLocal_51[1], unk_0xC8B93D94F8954288(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
	if ((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && func_66()) && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 7))
	{
		func_62(2);
	}
	if (!unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		func_62(5);
	}
}

void func_87(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iParam0]) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0x5124C5FA52D2AF3E(iLocal_51[iParam0]);
		unk_0x3E2E609450787FFE(&uLocal_58);
		if (unk_0x277ECDA23D8CCEB4(iLocal_51[iParam0], 0))
		{
			unk_0xE5F6BE3F8E937ACE(0, 0, 256);
		}
		unk_0xD1FE26E80A6E2C00(0);
		unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 0, 2);
		unk_0x726676CF6AC20DCB(0, unk_0xC8B93D94F8954288(), -1, 0);
		unk_0x939BC11172AA1303(uLocal_58);
		unk_0xBFE865E3B513451B(iLocal_51[iParam0], uLocal_58);
		unk_0xA9351C9309E03069(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0xD4C0071342AC6B81(116, unk_0x44C17CCB85A88A1F(iLocal_51[iParam0], 1), -1082130432);
		}
	}
}

void func_88()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
			{
				unk_0xAAD662D7E0D59F4C(iLocal_51[0], 1);
			}
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
			{
				unk_0xAAD662D7E0D59F4C(iLocal_51[1], 1);
			}
			if (func_95())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (func_94() || func_93())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0xB0A9B470CE75BF12(iLocal_56))
				{
					if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[0]))
					{
						func_87(0);
					}
					else
					{
						unk_0x5124C5FA52D2AF3E(iLocal_51[0]);
					}
					if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[1]))
					{
						func_87(1);
					}
					else
					{
						unk_0x5124C5FA52D2AF3E(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_87(0);
					func_87(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_130))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iLocal_130]))
				{
					func_87(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_92())
			{
				if (!func_91(iLocal_54, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
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
				while (iVar1 < iLocal_51)
				{
					if (!func_91(iLocal_51[iVar1], 1000) && (func_21() < 2f && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar1]))
					{
						if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iLocal_51[iVar1]) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x693EBB4F13506457() - iLocal_500)) > unk_0xC6D38B918E72181E(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x693EBB4F13506457();
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
	while (iVar2 < iLocal_51)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x95CCECA3948CFE7B(iLocal_51[iVar2]))
		{
			if ((unk_0x2DC9BA2299B45EA6(iLocal_51[iVar2]) || unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar2])) && unk_0x87D4C731B013290A(iLocal_51[iVar2], unk_0xC8B93D94F8954288(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || unk_0x2DC9BA2299B45EA6(iLocal_51[1])) || bLocal_121)
	{
		func_62(8);
	}
	if ((unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && func_66())
	{
		if (unk_0x87D4C731B013290A(iLocal_54, unk_0xC8B93D94F8954288(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		func_62(5);
	}
	if ((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6)) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_89()
{
	Global_14578 = 0;
	func_90();
}

void func_90()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x95CCECA3948CFE7B(iParam0))
		{
			if ((unk_0x96209AADF56E8FE8(iParam0) && !unk_0x2DC9BA2299B45EA6(unk_0x4D3C2AC8339BFB4F(iParam0))) || (unk_0x18BDAFC0B20C2C9E(iParam0) && unk_0x5D42322C7DB888D0(unk_0xE6E6D9800E15A76C(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x693EBB4F13506457() - iLocal_499) > iParam1)
				{
					fLocal_498 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iParam0, 1));
					iLocal_499 = unk_0x693EBB4F13506457();
				}
			}
		}
	}
	return iVar0;
}

int func_92()
{
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0xCC31DB73C65552D8(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
			{
				if ((!unk_0x0C7EC810080F0459(iLocal_51[iVar0], iLocal_54, 0) && unk_0x5DA88066AA7BF80A(unk_0xC8B93D94F8954288(), iLocal_54)) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1)) < 400f)
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
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288()) == iLocal_54)
		{
			if (unk_0xAAFE645D2696AF57(unk_0xC8B93D94F8954288()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && unk_0x5534579797ACFD77(iLocal_51[0], unk_0xC8B93D94F8954288(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && unk_0x5534579797ACFD77(iLocal_51[1], unk_0xC8B93D94F8954288(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 4) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_96(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_97(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		func_121(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_98(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_98(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x000CF7FDBE12A995())
	{
		if (unk_0x693EBB4F13506457() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (!unk_0x000CF7FDBE12A995())
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
				if ((unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0)) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					if ((unk_0x8EBAC9BC4005929D(Param1, 1f) && !unk_0xB45DF29A98EEAD5D()) && uParam7)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
			if (unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0))
			{
				if ((unk_0x8EBAC9BC4005929D(Param1, 1f) && !unk_0xB45DF29A98EEAD5D()) && uParam7)
				{
					if (!func_96(iVar0))
					{
						func_123(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
		if (!unk_0x544AEDB4A15228FF(iVar0))
		{
			if (func_96(iVar0) && unk_0xB45DF29A98EEAD5D())
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
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
				{
					func_121(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
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
	if (func_100(unk_0xC8B93D94F8954288()))
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

int func_100(int iParam0)
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

int func_101(var uParam0)
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

int func_102(bool bParam0)
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

int func_103(char* sParam0)
{
	if (!func_104(1, 1, 0))
	{
		if ((!unk_0xB8A06E7E729EED0A(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		return 0;
	}
	switch (Global_35700)
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
	if (func_106(0))
	{
		return 0;
	}
	if (func_105())
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

bool func_105()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_106(int iParam0)
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

void func_107(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE3B1382567189443(0);
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
	unk_0xBEB31E27E3922F5A(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x170E3F679C0C8F29(unk_0xC8B93D94F8954288(), Param1, -1, iVar2, iVar3);
	unk_0xD7F5001BB6D13A64("FocusIn", 0, 0);
	unk_0x925AE2E6F6E41362("HINT_CAM_SCENE");
	unk_0xC4EE38A4CFF7544C(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x693EBB4F13506457();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_111(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_112(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
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
			if ((unk_0x693EBB4F13506457() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
					{
						if (!func_112(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x693EBB4F13506457();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_112(bParam1, bParam2, bParam3))
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
				if (!func_111(bParam1, bParam2, bParam3) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
				else if (!func_112(bParam1, bParam2, bParam3))
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
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || func_109(bParam1, bParam2, bParam3))
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

int func_110(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_111(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
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

void func_113()
{
	unk_0x59A0729D503ED758(&Global_2284, 4);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
	if (func_96(iVar0))
	{
		func_113();
	}
	if (func_100(iParam1) && unk_0xA6CD622BBD209756(iParam1))
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
					if ((unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0)) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if ((iVar1 && !unk_0xB45DF29A98EEAD5D()) && uParam8)
						{
							if (!func_96(iVar0))
							{
								func_123(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
				if (unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0))
				{
					if (((unk_0xE77F5DDBC2E96204(iParam1) && iVar1) && !unk_0xB45DF29A98EEAD5D()) && uParam8)
					{
						if (!func_96(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
			if (!unk_0x544AEDB4A15228FF(sParam5))
			{
				if (func_96(sParam5))
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
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
					{
						func_121(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
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
	
	if (unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		func_121(uParam0, 0, 0);
	}
	if (func_120(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x96209AADF56E8FE8(iParam1))
		{
			uVar0 = unk_0x4D3C2AC8339BFB4F(iParam1);
			if (!unk_0x277ECDA23D8CCEB4(uVar0, 0))
			{
				if (unk_0xA815CBE767EFA3CB(iVar0))
				{
					if (!func_118())
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

bool func_118()
{
	return func_119(unk_0xA34E7C2A5118D638());
}

int func_119(var uParam0)
{
	if (unk_0x6D5BB810CC209E15(unk_0xCF4C00513A86E840(uParam0)) == joaat("mp_f_freemode_01"))
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
		if (func_96(uParam0->f_3))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
	if (!unk_0x544AEDB4A15228FF(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
}

void func_122(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_100976.f_29464.f_6), iParam0);
}

void func_123(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

bool func_124(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_29464.f_6, iParam0);
}

int func_125(int iParam0)
{
	if (func_128())
	{
		Global_100966 = 1;
		Global_100963 = unk_0x693EBB4F13506457();
		if (func_50(Global_100965))
		{
			func_126(0);
		}
		unk_0x4968FFFAEFDFD625(1, "RE_TITLE");
		if (iParam0 && func_50(Global_100965))
		{
			unk_0x837755F6FCE9B0E2();
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
			if (Global_100976.f_29464.f_2 < 3)
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_123(func_127(iParam0), -1);
					Global_100976.f_29464.f_2++;
					unk_0x59A0729D503ED758(&Global_100972, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xDCC86F723E82125E(Global_100972, 1))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_123(func_127(iParam0), -1);
					Global_100976.f_29464.f_3++;
					unk_0x59A0729D503ED758(&Global_100972, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xDCC86F723E82125E(Global_100972, 2))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_123(func_127(iParam0), -1);
					Global_100976.f_29464.f_4++;
					unk_0x59A0729D503ED758(&Global_100972, 2);
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
	switch (func_129(&Global_25174, 0, 5, 0, unk_0x46CF50E0E5A24635()))
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
		if (Global_88917.f_44 == 1)
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
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
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
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
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
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_131(int iParam0)
{
	return func_132(iParam0, Global_35700);
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
	if (Global_35700 == 15)
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
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
				{
					unk_0x1296D571B761D748(iLocal_51[0], 6, 1);
					unk_0x1296D571B761D748(iLocal_51[1], 6, 1);
					unk_0xAAD662D7E0D59F4C(iLocal_51[0], 1);
					unk_0xAAD662D7E0D59F4C(iLocal_51[1], 1);
					if (unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 0) && unk_0x0C7EC810080F0459(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0x3E2E609450787FFE(&uVar0);
							unk_0xAC59C2795E065D27(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x84D04CB0E2B93F55(0, iLocal_54, 10f, 786603);
							unk_0x939BC11172AA1303(uVar0);
							unk_0xBFE865E3B513451B(iLocal_51[0], uVar0);
							unk_0xA9351C9309E03069(&uVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0x3E2E609450787FFE(&uVar1);
							unk_0xAC59C2795E065D27(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x84D04CB0E2B93F55(0, iLocal_54, 10f, 786603);
							unk_0x939BC11172AA1303(uVar1);
							unk_0xBFE865E3B513451B(iLocal_51[0], uVar1);
							unk_0xA9351C9309E03069(&uVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0x3E2E609450787FFE(&uVar2);
							unk_0xAC59C2795E065D27(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x84D04CB0E2B93F55(0, iLocal_54, 10f, 786603);
							unk_0x939BC11172AA1303(uVar2);
							unk_0xBFE865E3B513451B(iLocal_51[0], uVar2);
							unk_0xA9351C9309E03069(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0x84D04CB0E2B93F55(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 0) && unk_0x090C65D5190A249D(iLocal_51[0], -1794415470) != 1)
						{
							unk_0x9CEFBE395E148A32(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x0C7EC810080F0459(iLocal_51[1], iLocal_54, 0) && unk_0x090C65D5190A249D(iLocal_51[1], -1794415470) != 1)
						{
							unk_0x9CEFBE395E148A32(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
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
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar3]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar3]))
					{
						if (unk_0x493D58455424944D(unk_0xC8B93D94F8954288()) && unk_0xB03AB89ABCAB2B4E(iLocal_51[iVar3]))
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
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x47410D70C3D09CA4("PLAYER HAS PROJECTILE WEAPON", unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 0, 0, 255, 255);
				if ((unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, 0f, -3.44f, -3f), unk_0xCC31DB73C65552D8(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, 0f, -3.44f, -3f), unk_0xCC31DB73C65552D8(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x67EF9AC42FF90644("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_54, 1)) < 225f)
				{
					unk_0x67EF9AC42FF90644("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
				{
				}
			}
		}
		if (((unk_0x5D42322C7DB888D0(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_54, 1), 25f, 0)) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_51[0], 1), 20f, 0))) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_51[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
			{
				unk_0x1296D571B761D748(iLocal_51[0], 6, 0);
				unk_0xAAD662D7E0D59F4C(iLocal_51[0], 0);
			}
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
			{
				unk_0x1296D571B761D748(iLocal_51[1], 6, 0);
				unk_0xAAD662D7E0D59F4C(iLocal_51[1], 0);
			}
		}
	}
}

int func_135()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638())) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) - unk_0x44C17CCB85A88A1F(iLocal_54, 1) };
		Var3 = { unk_0x2CDF65DEC17DF0F9(iLocal_54) };
		Var6 = { unk_0xEABAE14292BF78FB(iLocal_54, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iLocal_54) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iLocal_54)) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iLocal_51[0])) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iLocal_51[1]))) && unk_0xA3C5926D6E5619AE(unk_0x3CD093DDA8B5D04F(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x3CD093DDA8B5D04F(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, 2.7f, 7f, -2f), unk_0xCC31DB73C65552D8(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, -2.7f, 7f, -2f), unk_0xCC31DB73C65552D8(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_54, 0f, 7f, -2f), unk_0xCC31DB73C65552D8(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
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
	
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
			{
				iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			}
		}
		else if (unk_0x95CCECA3948CFE7B(unk_0x974516F979AD07BC()))
		{
			iVar0 = unk_0x974516F979AD07BC();
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && unk_0x95CCECA3948CFE7B(iLocal_54))
		{
			return ((unk_0x5D42322C7DB888D0(iVar0, 0) && unk_0xA499226F64D3A26A(iVar0, iLocal_54)) && unk_0x9BA9222C7124CA04(iVar0) > 10f);
		}
	}
	return 0;
}

int func_138()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) || unk_0xB6900B8CB0ABBD2B(iLocal_51[0]))
		{
			if (unk_0x87D4C731B013290A(iLocal_51[0], unk_0xC8B93D94F8954288(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) || unk_0xB6900B8CB0ABBD2B(iLocal_51[1]))
		{
			if (unk_0x87D4C731B013290A(iLocal_51[1], unk_0xC8B93D94F8954288(), 1))
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
	
	if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1])) && unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0xEA9A8033D5CFC295(iLocal_54, 0) };
				Local_488 = { unk_0xF57992155BDFCC67(iLocal_54, 2) };
				Local_491 = { unk_0xFF6CF906805A063D("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0xF18809B65D87E197(iLocal_54);
				unk_0x3E2E609450787FFE(&uLocal_58);
				unk_0x1A95AE7201CE6376(0, 5000);
				unk_0x81333BEA4837207C(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0x6EAFBB3A7F6ADEA9(0, Local_488.f_2, 0);
				unk_0x939BC11172AA1303(uLocal_58);
				unk_0xBFE865E3B513451B(iLocal_51[1], uLocal_58);
				unk_0xA9351C9309E03069(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0xEA9A8033D5CFC295(iLocal_54, 0) };
				Local_488 = { unk_0xF57992155BDFCC67(iLocal_54, 2) };
				Local_491 = { unk_0xFF6CF906805A063D("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0xBC6B93737FCDC466(iLocal_495))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_77) < 22500f && unk_0xFB44A1BAEC72FE5C(iLocal_54))
					{
						iLocal_495 = unk_0x0B15BB6DFB729046(Local_485, Local_488, 2);
						unk_0xA5666A46C1079EFE(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0x53DDB73894A6597A(iLocal_495, 1);
					}
				}
				if (unk_0x090C65D5190A249D(iLocal_51[1], 242628503) != 1)
				{
					unk_0x3E2E609450787FFE(&uLocal_58);
					unk_0x81333BEA4837207C(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0x6EAFBB3A7F6ADEA9(0, Local_488.f_2, 0);
					unk_0x939BC11172AA1303(uLocal_58);
					unk_0xBFE865E3B513451B(iLocal_51[1], uLocal_58);
					unk_0xA9351C9309E03069(&uLocal_58);
				}
				fVar0 = unk_0x59DD203239FBDCAD(iLocal_51[1]);
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
				if (unk_0xA3C5926D6E5619AE((fVar0 - Local_488.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_491, unk_0x44C17CCB85A88A1F(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0xD89BA9C839BD1A48(iLocal_51[1], -1056964608);
					unk_0x5124C5FA52D2AF3E(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0x0B15BB6DFB729046(Local_485, Local_488, 2);
					unk_0xA5666A46C1079EFE(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0x16A73DD34A0EE6C3(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0xBC6B93737FCDC466(iLocal_494) && unk_0x2091E42376999826(iLocal_494) > 0.09f) && unk_0x2091E42376999826(iLocal_494) < 0.11f) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0xBC6B93737FCDC466(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0x95CCECA3948CFE7B(iLocal_56) && unk_0x57BA797A9A91EF93(iLocal_56, iLocal_51[1])) && unk_0x2091E42376999826(iLocal_494) > 0.3793f)
						{
							if (!unk_0x57BA797A9A91EF93(iLocal_56, iLocal_54))
							{
								unk_0xB81176DFD2611E8B(iLocal_56, 1, 1);
								unk_0x8FB4254399424391(iLocal_56, 0, 0);
								unk_0xAD318582A32CA5D2(iLocal_56, iLocal_54, 0, unk_0xEABAE14292BF78FB(iLocal_54, unk_0x44C17CCB85A88A1F(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x2091E42376999826(iLocal_494) > 0.546243f)
					{
						unk_0x20D399098E17A191(iLocal_54, -4f, 1);
						if (unk_0x95CCECA3948CFE7B(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x3D289B1B7567CB62(iLocal_54, 2, 1);
							unk_0x3D289B1B7567CB62(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0xBC6B93737FCDC466(iLocal_494) && unk_0x2091E42376999826(iLocal_494) > 0.56f) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0xBC6B93737FCDC466(iLocal_494) && unk_0x2091E42376999826(iLocal_494) > 0.6f) || !unk_0xBC6B93737FCDC466(iLocal_494))
					{
						if (unk_0xBC6B93737FCDC466(iLocal_495))
						{
							unk_0x5124C5FA52D2AF3E(iLocal_51[0]);
							iLocal_495 = unk_0x0B15BB6DFB729046(Local_485, Local_488, 2);
							unk_0xA5666A46C1079EFE(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0xBC6B93737FCDC466(iLocal_495) && unk_0x2091E42376999826(iLocal_495) >= 0.92f) || !unk_0xBC6B93737FCDC466(iLocal_495))
				{
					if (!unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 0) && unk_0x090C65D5190A249D(iLocal_51[0], -1794415470) != 1)
					{
						unk_0x5124C5FA52D2AF3E(iLocal_51[0]);
						unk_0x9CEFBE395E148A32(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xBC6B93737FCDC466(iLocal_494) && unk_0x1E13AB82EFC29B1D(iLocal_51[1], unk_0x7CBED6EFED40E7EB("ENDS_IN_WALK")))
				{
					unk_0x5124C5FA52D2AF3E(iLocal_51[1]);
					unk_0x9CEFBE395E148A32(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0xBEF21CF3DCA0E59B(iLocal_54, 0) == 0f) && unk_0xBEF21CF3DCA0E59B(iLocal_54, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x3D289B1B7567CB62(iLocal_54, 0, 1);
					unk_0x3D289B1B7567CB62(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0x2DC9BA2299B45EA6(func_3()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(func_3(), 1)) < 30f) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
	{
		if (unk_0x06A2030124FC73B9(uLocal_137))
		{
			func_62(7);
		}
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_89();
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
			{
				if (unk_0xCD61E9D5CABC7E35(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x4D498C117F9987CB(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x5124C5FA52D2AF3E(iLocal_51[0]);
						unk_0x5323F488E6A1B660(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x5D42322C7DB888D0(iLocal_54, 0) && unk_0xBC6B93737FCDC466(iLocal_494)) && !unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
			{
				unk_0x20D399098E17A191(iLocal_54, -1000f, 1);
				unk_0x5124C5FA52D2AF3E(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0x06A2030124FC73B9(uLocal_137))
		{
			unk_0x3D289B1B7567CB62(iLocal_54, 2, 1);
			unk_0x3D289B1B7567CB62(iLocal_54, 3, 1);
		}
	}
}

int func_140()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
			{
				if (func_74(unk_0x974516F979AD07BC()))
				{
					iLocal_55 = unk_0x974516F979AD07BC();
					return 1;
				}
			}
		}
		else if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
		{
			if (func_74(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x6CE7EDC8B5C46819());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x6CE7EDC8B5C46819() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
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
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638())) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iLocal_51[iVar0]) || unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1)) < 9f) && !unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x770AAB67BDD9C729(iLocal_51[iVar0]))
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
		if (!unk_0x0C7EC810080F0459(iLocal_51[0], iLocal_54, 0) || !unk_0x0C7EC810080F0459(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1);
		if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288())))
		{
			if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]))
				{
					if (unk_0x5534579797ACFD77(iLocal_51[0], unk_0xC8B93D94F8954288(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]))
				{
					if (unk_0x5534579797ACFD77(iLocal_51[1], unk_0xC8B93D94F8954288(), 12f, 12f, 5f, 0, 1, 0))
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
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && unk_0x87D4C731B013290A(iLocal_51[iVar0], unk_0xC8B93D94F8954288(), 1)) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && unk_0xA81F17D63315B662(iLocal_51[iVar0], unk_0xC8B93D94F8954288()))) || unk_0x87D4C731B013290A(iLocal_51[iVar0], unk_0xC8B93D94F8954288(), 1)) || (unk_0x87D4C731B013290A(iLocal_54, unk_0xC8B93D94F8954288(), 1) && func_66())) || unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0])) || unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_136() || func_95())
	{
		return 1;
	}
	if (unk_0x5D42322C7DB888D0(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]))
			{
				if (unk_0x493D58455424944D(unk_0xC8B93D94F8954288()) && unk_0xB03AB89ABCAB2B4E(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0x5D42322C7DB888D0(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_54, 1), 25f, 0)) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_51[0], 1), 20f, 0))) || (!unk_0x2DC9BA2299B45EA6(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x44C17CCB85A88A1F(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_51[iVar0]))
		{
			if ((!unk_0x2DC9BA2299B45EA6(iLocal_51[iVar0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_51[iVar0])) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if ((unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1), 5f, 1) || func_31(unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0x44C17CCB85A88A1F(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0x87D4C731B013290A(iLocal_51[iVar0], unk_0xC8B93D94F8954288(), 1))
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

void func_145()
{
	int iVar0;
	
	iLocal_54 = unk_0xD53B4DCC7B2C8551(iLocal_104, Local_77, fLocal_80, 1, 1);
	iLocal_57 = unk_0x7C62BC1EB194D985(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0xAD318582A32CA5D2(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x872B541D7953A19B(iLocal_57, 0, 0);
	unk_0x478C881F35352202(iLocal_57, iLocal_54, 0);
	unk_0xF18809B65D87E197(iLocal_54);
	unk_0x0782F0CAEA719452(iLocal_54, 3);
	unk_0x916DBBB1A4A313B5(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0x5660CB9995F99E7B(iLocal_54, 1, 0);
	unk_0xFE93132CC8944C8C(iLocal_54, 700);
	unk_0x20F2C35BB8206D0D(iLocal_54, 0, 0);
	unk_0x05BE583DF8C6A617(iLocal_54, 1);
	unk_0x60BB25BD1E3BF46A(iLocal_54, 0);
	unk_0x308B44C4E19BC120(iLocal_54, 1);
	unk_0x45A1CC0823F31402((Local_77.f_0 - 200f), (Local_77.f_1 - 200f), (Local_77.f_0 + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0xDEFAEEE1A4058454(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0xDEFAEEE1A4058454(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x57892FEA93664769(iLocal_54, 1, 1, 0);
		unk_0x05BE583DF8C6A617(iLocal_54, 1);
	}
	else
	{
		iLocal_51[1] = unk_0x71DD988C1B903F5D(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0x71DD988C1B903F5D(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0xE48D9147BC1F4CD7(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_79(iLocal_51[1]);
	unk_0x4A606A8BE6924115("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0x90115CB23FA58DD6(iLocal_51[iVar0], 0);
		unk_0x1296D571B761D748(iLocal_51[iVar0], 1, 0);
		unk_0x1296D571B761D748(iLocal_51[iVar0], 13, 0);
		unk_0x1296D571B761D748(iLocal_51[iVar0], 6, 1);
		unk_0x1296D571B761D748(iLocal_51[iVar0], 8, 0);
		unk_0x1296D571B761D748(iLocal_51[iVar0], 10, 1);
		unk_0xF36EA652E4A6CED0(iLocal_51[iVar0], 512, 1);
		unk_0xC778754E36F3FFD6(iLocal_51[iVar0], 118, 0);
		unk_0xF36EA652E4A6CED0(iLocal_51[iVar0], 128, 1);
		unk_0x653823E36974771E(iLocal_51[iVar0], 0);
		unk_0x5660CB9995F99E7B(iLocal_51[iVar0], 1, 0);
		unk_0x6AEF3997AED77246(iLocal_51[iVar0], 1);
		unk_0x682C8FAE03434B24(iLocal_51[iVar0], 1);
		unk_0x640290651A86938B(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0xCBD60E398042F554(iLocal_51[iVar0], iLocal_66);
		unk_0xF1A02DDEC7E15D6E(iLocal_51[iVar0], 1);
		unk_0xDABDA88E15232316(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0x05BE583DF8C6A617(iLocal_51[1], 1);
	unk_0x6CCF5F545348D54E(1, joaat("COP"), iLocal_66);
	unk_0x6CCF5F545348D54E(1, iLocal_66, joaat("COP"));
	unk_0x6CCF5F545348D54E(2, iLocal_66, joaat("player"));
	unk_0x6CCF5F545348D54E(2, joaat("player"), iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0x9982920999FF4733(iLocal_51[0], 0, 1, 0, 0);
		unk_0x143FDE7C357D360A(iLocal_51[0], 0);
		unk_0x9982920999FF4733(iLocal_51[1], 0, 1, 0, 0);
		unk_0x143FDE7C357D360A(iLocal_51[1], 0);
	}
	if (func_11() == 0 && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_68(&Local_140, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_68(&Local_140, 1, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_68(&Local_140, 2, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
	}
	func_68(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_68(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0xB7FAA1C591A4664F(iLocal_104, 1);
	unk_0x97627662D1345021(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_146(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

bool func_147()
{
	func_155(&uLocal_317, iLocal_103);
	func_155(&uLocal_317, iLocal_104);
	func_155(&uLocal_317, iLocal_105);
	func_153(&uLocal_317, "random@security_van");
	func_153(&uLocal_317, "weapons@holster_1h");
	func_153(&uLocal_317, "move_injured_generic");
	func_152(&uLocal_317, 3);
	return func_148(&uLocal_317);
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
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0xDCC86F723E82125E(iParam0, 30))
	{
		if (unk_0xDCC86F723E82125E(iParam0, 29))
		{
			switch (func_151(iParam0))
			{
				case 0:
					return unk_0x0845149A26DABBA5(uParam2);
					break;
				
				case 1:
					return unk_0xF9B86DC1728F1339(uParam1);
					break;
				
				case 2:
					return unk_0x11896648C9E8F14F(uParam1);
					break;
				
				case 3:
					return unk_0x701C5CF3E1956924(sParam1);
					break;
				
				case 4:
					return unk_0x953ED5E61AD54581(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB5C09DEC6D45DA8(sParam1);
					break;
				
				case 6:
					return unk_0xC4C141A321D45FD8(sParam1, unk_0xDCC86F723E82125E(iParam0, 27));
					break;
				
				case 7:
					return unk_0xBEA48FDD63E5E9DD(uParam2);
					break;
				
				case 8:
					return unk_0xF0DCEBB4ADA5D981(uParam2);
					break;
				
				case 9:
					return unk_0xB6161F3A3EDA5AA1();
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
		if (unk_0xDCC86F723E82125E(iParam0, iVar0))
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
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xF8D041B05C3D1FD4(sParam3, "NULL"))
					{
						if (unk_0xF8D041B05C3D1FD4(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x59A0729D503ED758(uParam0[iVar0 /*18*/], iParam1);
			unk_0x59A0729D503ED758(uParam0[iVar0 /*18*/], 30);
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
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_167())
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
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 2) && !unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var0.f_6, 1);
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
	if (unk_0xB8A06E7E729EED0A(&cVar2))
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
	return Global_100694 > 0;
}

int func_165()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_167()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
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
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_167())
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
	if ((Global_100965 == func_59() && unk_0x0C5B2801849FF3C3()) && Global_100966)
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
		if ((unk_0xB36863F9C6D42649() >= (uParam0->f_146 + uParam0->f_147) || unk_0xDCC86F723E82125E(Global_91106.f_20, 2)) || unk_0xDCC86F723E82125E(Global_91106.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 29))
					{
						func_171(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xB36863F9C6D42649();
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
	if (unk_0xDCC86F723E82125E(*uParam0, 30))
	{
		switch (func_151(*uParam0))
		{
			case 0:
				unk_0x7567CEA8E6B5340B(uParam2);
				break;
			
			case 1:
				unk_0xC0E8B67A4385D37D(uParam1);
				break;
			
			case 2:
				unk_0x841AF342F853B150(uParam1);
				break;
			
			case 3:
				unk_0x1F0D08B8266D20DB(uParam1, unk_0xDCC86F723E82125E(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC80AE0BAE243FFB1(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x354516B1347786F1(uParam1);
				break;
			
			case 6:
				unk_0xC4C141A321D45FD8(uParam1, unk_0xDCC86F723E82125E(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0BDFD9BDBD966ED3(uParam2);
				break;
			
			case 8:
				unk_0xF3AC452C34BF0E13(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x8CBF0FAEA6BA6D37();
				break;
			
			default:
				break;
		}
		unk_0x59A0729D503ED758(uParam0, 29);
	}
}

void func_173()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0x531444754C426278(3000, 8000);
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
	unk_0x0FC823641743BB61(0);
	unk_0xDE3A07FF40453D42(1);
	Global_100962 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			unk_0xB7FAA1C591A4664F(unk_0x6D5BB810CC209E15(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)), 1);
		}
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
	}
}

void func_176(int iParam0)
{
	Global_100965 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_137788)
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
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			Var1 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_100976.f_7719)
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
		if (Global_100965 != -1)
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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
		if (!func_211(Global_100976.f_29464.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x693EBB4F13506457() - Global_100967) < 150000)
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
		if (unk_0x19959F2595D26484())
		{
			return 0;
		}
		if (unk_0x0C5B2801849FF3C3())
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
		if (unk_0x8F89BA1339F45476(unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288())))
		{
			if ((unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(377.153f, -717.567f, 10.0536f) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(320.9934f, 265.2515f, 82.1221f)) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_25261)
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
				Var5 = { Global_100976.f_1770.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_100976.f_1770.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_120(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_100976.f_1770.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
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
	
	func_199(&uVar0, unk_0x4C374828FD653ECC());
	func_198(&uVar0, unk_0x44AD07D9D178F321());
	func_197(&uVar0, unk_0x342FDFC48311CCCE());
	func_196(&uVar0, unk_0x818078CDB71D3E9C());
	func_195(&uVar0, unk_0x49D01BEA8D03E892());
	func_194(&uVar0, unk_0x90D477BB666B03DB());
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
	if (unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_1()) || Global_100023) || Global_25117) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_1()) || Global_25117) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_1()) || Global_100023) || Global_25117) || func_209()) || func_18(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_1()) || Global_100023) || Global_25117) || func_209()) || func_18(8, -1)) || func_208()) || func_207()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_18(8, -1)) || func_205()) || func_204()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_1()) || Global_25117) || func_209()) || func_18(8, -1)) || func_207()) || func_206()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_1()) || func_207()) || Global_100023) || Global_25117) || func_209()) || Global_36750) || func_18(8, -1)) || func_206()) || func_204()) || func_205()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_1()) || Global_100023) || Global_25117) || func_209()) || func_18(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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
	return Global_91145.f_1;
}

int func_204()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_91158.f_297 > 0;
}

bool func_208()
{
	return Global_91158.f_296 > 0;
}

var func_209()
{
	return Global_1315911;
}

int func_210()
{
	func_10();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_100976.f_6322.f_919[iParam0];
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
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	var uVar0;
	
	if (Global_25265)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			uVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(uVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC0ADAF0814175B68(iVar0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_216()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
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
		if (unk_0x06A2030124FC73B9(uLocal_137))
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_64))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_64);
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_57))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_57);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_56))
		{
			if (unk_0x3F13A387457FD9A7(iLocal_56))
			{
				unk_0xA278ECBE30D8AE4F(&iLocal_56);
			}
			else
			{
				unk_0xC2BB205CCEB68102(&iLocal_56);
			}
		}
		unk_0x4BBD72565A0AF033(iLocal_104);
		unk_0x4BBD72565A0AF033(iLocal_103);
		unk_0x4BBD72565A0AF033(iLocal_105);
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x97627662D1345021(iLocal_103, 0);
		unk_0xB7FAA1C591A4664F(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0xD873651464A89D4D(iLocal_131);
	}
	unk_0x9DBF08025225340D(uLocal_65, 0);
	func_121(&uLocal_305, 0, 0);
	func_223(-1);
	func_218(&uLocal_317, 0);
	unk_0xA4E0D8FD51F2A6F7();
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
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0xDCC86F723E82125E(iParam0, 30))
	{
		switch (func_151(iParam0))
		{
			case 0:
				unk_0x4BBD72565A0AF033(uParam2);
				break;
			
			case 1:
				unk_0x3ECF1E41E6ED71D8(uParam1);
				break;
			
			case 2:
				unk_0xF762ED015503B979(uParam1);
				break;
			
			case 3:
				unk_0x26574ED84900A376(uParam1);
				break;
			
			case 4:
				unk_0x28ED861DB3DADA0B(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xC83A0582E6D2E6F3(uParam1);
				break;
			
			case 6:
				unk_0x5E56B49A7D5150F6();
				break;
			
			case 7:
				unk_0x9D77813390E90FDB(iParam2);
				break;
			
			case 8:
				unk_0x48591CDE727D1F6A(iParam2, unk_0xDCC86F723E82125E(iParam0, 26));
				break;
			
			case 9:
				unk_0x946BF5DFB2A71B9E();
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
		unk_0x4968FFFAEFDFD625(0, 0);
		Global_100967 = unk_0x693EBB4F13506457();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_100965, 1), 64);
		if (func_58(Global_100965) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_100964, 64);
		}
		unk_0x7CCB5DC58A4B30A1(&cVar0, Global_100962, (unk_0x693EBB4F13506457() - Global_100963), 0);
	}
	else if (unk_0xDCC86F723E82125E(Global_100972, 0) && Global_100976.f_29464.f_2 < 3)
	{
		unk_0x77621132305B133B(&Global_100972, 0);
	}
	func_224(&Global_25174);
	Global_100966 = 0;
	func_176(-1);
}

void func_224(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
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
	Global_36251 = (unk_0x693EBB4F13506457() + iParam0);
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
	Global_100976.f_29464.f_43[iParam0] = *uParam1;
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
	if (!unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		if (unk_0x74CAAD9E721B315D(iParam0, -1))
		{
			return -1;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 0))
		{
			return 0;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 2))
		{
			return 2;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 3))
		{
			return 3;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 4))
		{
			return 4;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 5))
		{
			return 5;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 6))
		{
			return 6;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 7))
		{
			return 7;
		}
		if (unk_0x74CAAD9E721B315D(iParam0, 8))
		{
			return 8;
		}
	}
	return -2;
}

