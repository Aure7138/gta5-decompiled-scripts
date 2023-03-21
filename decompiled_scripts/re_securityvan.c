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
		unk_0x810C5D6462DD69E6();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0x810C5D6462DD69E6();
		}
	}
	else
	{
		if (unk_0x76BF814AB8D4CAB8(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
				{
					if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
					{
						if (!unk_0x88B79D32B518C327(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0xFDBDFC454E44A5BF(iLocal_51[iVar0], iLocal_54, -1, func_242(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0x73E31FC09D8359DB(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_225();
		}
		if (!func_185(Local_87, 9, iLocal_47, 1, 0))
		{
			unk_0x810C5D6462DD69E6();
		}
		else
		{
			func_182(-1);
		}
	}
	func_181();
	uLocal_65 = unk_0x1701E0E6A11D6B65(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_178(&uLocal_317);
		if (!func_177())
		{
			if (func_176())
			{
				func_225();
			}
			unk_0x89FD0BC32FAB9F88("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0x6E65FD9B611945AD() && !func_164())
					{
						if (func_155())
						{
							if ((iLocal_46 == 3 && !(unk_0x6157232E032EBC56(Local_77, 3f) && func_154(unk_0x18F7BE9ACB7D08F4(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x6157232E032EBC56(Local_77, 8f))
									{
										unk_0x7EE425AE3317BA69(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_153();
								if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0xFBD899EB9A2EF7F4(iLocal_54, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_225();
					}
					break;
				
				case 1:
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) < 10000f || !unk_0xD76674575E7BA743(iLocal_54)) || (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0xD76674575E7BA743(iLocal_51[0]))) || (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0xD76674575E7BA743(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_152())
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
							func_147();
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_54) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						if (iLocal_46 == 3)
						{
							func_142();
							if (!unk_0xD76674575E7BA743(iLocal_54) && (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < 100f || func_152()))
							{
								func_133(1);
							}
						}
						else if (((!unk_0xD76674575E7BA743(iLocal_54) && iLocal_48 == 4) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_152())
						{
							func_133(1);
						}
						if ((iLocal_48 == 4 && unk_0xD76674575E7BA743(iLocal_54)) && iLocal_46 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) > 100f)
							{
								func_225();
							}
							else
							{
								func_133(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0xD76674575E7BA743(iLocal_54))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) > 62500f)
					{
						func_225();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) > 10000f && !unk_0x6E65FD9B611945AD())
					{
						func_225();
					}
				}
			}
		}
		else
		{
			unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
			if (!unk_0xE769D9B5158D0F11(uLocal_63))
			{
				if (!func_132(2) && !bLocal_114)
				{
					if (!unk_0x622E10ED992CEB95())
					{
						func_131("SV_VANHELP1", 15000);
						func_130(2);
					}
				}
				if (unk_0x31F12808DC47A9E5(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_56, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 0;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0x351CD242DF0BE9BA(uLocal_137)) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 1;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0x351CD242DF0BE9BA(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xF5BE9412C59FF617(uLocal_137), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 2;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0x31F12808DC47A9E5(iLocal_56))
					{
						func_122(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_56, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 1))
					{
						func_122(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0x351CD242DF0BE9BA(uLocal_137))
					{
						func_98(&uLocal_305, unk_0xF5BE9412C59FF617(uLocal_137), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xF5BE9412C59FF617(uLocal_137), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_129(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0x74C2FE037DFC8B4A(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_132(0) || (unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_stickybomb"), 0) && !func_132(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0x622E10ED992CEB95() && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < 225f)
							{
								func_131("SV_DOORHELP1", 15000);
								func_130(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0x622E10ED992CEB95())
							{
								iLocal_135 = unk_0x5AFB8ED811F05E4D();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_135) > 2000 && unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_stickybomb"), 0))
							{
								func_131("SV_DOORHELP2", 15000);
								func_130(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_97("SV_DOORHELP1") || func_97("SV_DOORHELP2"))
					{
						unk_0xEFF1F12403847394(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_147();
					break;
				
				case 2:
					func_89();
					break;
				
				case 3:
					func_87();
					break;
				
				case 4:
					func_142();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
					{
						if (unk_0x7F01DF106C930B4D(iLocal_51[0]) != 3)
						{
							unk_0xC8E4ED8901EAF826(iLocal_51[0], 3);
						}
					}
					if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
					{
						if (unk_0x7F01DF106C930B4D(iLocal_51[1]) != 3)
						{
							unk_0xC8E4ED8901EAF826(iLocal_51[1], 3);
						}
					}
					if (((!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0)) && !unk_0x0FAE113CE72ED842(iLocal_51[1])) && !unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_73(iLocal_51[1]);
						func_71(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0x0FAE113CE72ED842(iLocal_51[1]) || unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0))
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
						if (unk_0x0FAE113CE72ED842(iLocal_51[0]) || unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0))
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
					func_225();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0) == unk_0x18F7BE9ACB7D08F4()) && !bLocal_113) && iLocal_48 != 8)
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
				if (unk_0xB052D95D688673A4(iLocal_66, joaat("player")) != 5)
				{
					unk_0xFB5F4D76105A21B5(5, iLocal_66, joaat("player"));
					unk_0xFB5F4D76105A21B5(5, joaat("player"), iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0x351CD242DF0BE9BA(uLocal_137) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0xF5BE9412C59FF617(uLocal_137)) > 250f)
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
				if (unk_0x31F12808DC47A9E5(iLocal_51[iVar2]))
				{
					if ((!unk_0x74C2FE037DFC8B4A(iLocal_51[iVar2], 0) && !unk_0x0FAE113CE72ED842(iLocal_51[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_51[0], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x31F12808DC47A9E5(iLocal_54))
				{
					if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
					{
						if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 10000f && unk_0xD76674575E7BA743(iLocal_54)) || unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 62500f)
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
				iLocal_127 = unk_0x5AFB8ED811F05E4D();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_127) > 5000)
				{
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
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
		if (((unk_0x5AFB8ED811F05E4D() - iLocal_127) > 10000 && unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x61E9B3BFA06B017B(0, 3);
			if (iVar4 == 0)
			{
				unk_0x9581BDC15A63820A("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x9581BDC15A63820A("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x9581BDC15A63820A("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1])) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
					{
						unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
						unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
					}
					unk_0xCCECCD0702719A39(unk_0x8CFC7D6E1DA5D304(), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
				}
			}
		}
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0 && func_2())
		{
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
			unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x841242FE915D0B29(iLocal_54, 0) > 0f || unk_0x841242FE915D0B29(iLocal_54, 1) > 0f)
			{
				if (unk_0xA15463616D2BE67B(iLocal_54) == 3)
				{
					unk_0xA2B45B1D3EE42178(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x841242FE915D0B29(iLocal_54, 0) == 0f && unk_0x841242FE915D0B29(iLocal_54, 1) == 0f)
				{
					if (unk_0xA15463616D2BE67B(iLocal_54) == 1)
					{
						unk_0xA2B45B1D3EE42178(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0xD59E155864F4A591(iLocal_131);
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar5]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[iVar5], 0))
				{
					if (unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x2CE89754501B1383(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x2CE89754501B1383(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x2CE89754501B1383(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x2CE89754501B1383(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x9381BBF272130ED6(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0xCB70BD6BF4CCD313(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 0, -1056964608);
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 0, -1056964608);
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 0, -1056964608);
							unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x9381BBF272130ED6(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0xCB70BD6BF4CCD313(iLocal_51[iVar5], 1);
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
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 0, -1056964608);
						unk_0x0DC92B9260EBB221(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x4A296E47F281D02F(iLocal_56)) && !unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130])) && !unk_0xDFEB6D8BCE2B43F6(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0xDFEB6D8BCE2B43F6(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0xDFEB6D8BCE2B43F6(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xB5746603774C4C9D(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0x31F12808DC47A9E5(iLocal_54))
			{
				if (unk_0x1B843A60307EECA4(iLocal_54, unk_0x18F7BE9ACB7D08F4(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0xA3F48AA4B6323A62(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && (((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && bLocal_114) && unk_0x351CD242DF0BE9BA(uLocal_137)) || (!unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0x351CD242DF0BE9BA(uLocal_137)))) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0xF5BE9412C59FF617(uLocal_137)) < 20f)
	{
		iVar1 = unk_0x5A96E2A522F78DFB(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x0FAE113CE72ED842(iVar1))
		{
			if (unk_0x4F69FBD64CDF125B(iVar1) == joaat("s_m_y_cop_01") || unk_0x4F69FBD64CDF125B(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x5A96E2A522F78DFB(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x0FAE113CE72ED842(iVar1))
		{
			if (unk_0x4F69FBD64CDF125B(iVar1) == joaat("s_m_y_cop_01") || unk_0x4F69FBD64CDF125B(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x953153CFE1324F48(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), fVar0, 0, 1024);
		if (unk_0xC4B84EB67F78C1F0(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x953153CFE1324F48(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), fVar0, 0, 1024);
		if (unk_0xC4B84EB67F78C1F0(iVar2, 0))
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
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[1], 1));
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_17();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_6();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_7()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_8()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_11();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_15(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_14(unk_0x18F7BE9ACB7D08F4());
			if (func_13(iVar0) && (!func_16(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_13(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_19()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[0], 1));
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[1], 1));
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
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0x31F12808DC47A9E5(iLocal_51[iVar1]))
			{
				if (((!unk_0x0FAE113CE72ED842(iLocal_51[iVar1]) && unk_0x1B843A60307EECA4(iLocal_51[iVar1], unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0FAE113CE72ED842(iLocal_51[iVar1])) || unk_0x74C2FE037DFC8B4A(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1])) && iLocal_116)
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
			if (unk_0x31F12808DC47A9E5(iLocal_56))
			{
				if (!unk_0x4A296E47F281D02F(iLocal_56))
				{
					unk_0x5BE35A26B9097351(&iLocal_56);
					if (!unk_0x351CD242DF0BE9BA(uLocal_137) && !bLocal_111)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x5AFB8ED811F05E4D() - iLocal_136) > 3000)
				{
					if (unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]) || unk_0x0B90D19A63676F41(iLocal_51[iLocal_130]))
					{
						unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
						iLocal_136 = unk_0x5AFB8ED811F05E4D();
					}
				}
			}
			else if (!unk_0x351CD242DF0BE9BA(uLocal_137))
			{
				if (unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]) || ((!unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]) && unk_0x0B90D19A63676F41(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x31F12808DC47A9E5(iLocal_56))
		{
			unk_0x5BE35A26B9097351(&iLocal_56);
		}
		if (unk_0x351CD242DF0BE9BA(uLocal_137))
		{
			unk_0x28A314B9FED396D5(uLocal_137);
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
				Param0 = { unk_0xA5D7493D711B335A(unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xA5D7493D711B335A(unk_0x761660F5CE986DC4(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xD2A9C3F486236CC5(&uLocal_138, 3);
		unk_0xD2A9C3F486236CC5(&uLocal_138, 4);
		unk_0xD2A9C3F486236CC5(&uLocal_138, 1);
		if (bParam3)
		{
			uLocal_137 = unk_0x8767B3B24E487514(joaat("pickup_money_security_case"), Param0, unk_0x26A3403C90A0B224(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x5ABEF538412867C6(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0xE769D9B5158D0F11(uLocal_64))
		{
			uLocal_64 = func_25(uLocal_137);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_56))
		{
			unk_0x5BE35A26B9097351(&iLocal_56);
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
	
	if (!unk_0x351CD242DF0BE9BA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x34373C6A4661A2FA(uParam0);
	unk_0x0590222010A36CE4(uVar0, func_27(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
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
		if (unk_0x31F12808DC47A9E5(iLocal_57))
		{
			unk_0x9F2024F28D07EE1E(iLocal_54, 2, 0, 0);
			unk_0x9F2024F28D07EE1E(iLocal_54, 3, 0, 0);
			if (unk_0x31F12808DC47A9E5(iLocal_57))
			{
				unk_0x5BE35A26B9097351(&iLocal_57);
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
			if (unk_0x841242FE915D0B29(iLocal_54, 2) == 0f && unk_0x841242FE915D0B29(iLocal_54, 3) == 0f)
			{
				if (unk_0x31F12808DC47A9E5(iLocal_56))
				{
					if (unk_0x4A296E47F281D02F(iLocal_56))
					{
						unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
					}
					unk_0x947CE5CCDDBA0651(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
				{
					if (((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0x841242FE915D0B29(iLocal_54, 2) > 0.25f) && unk_0x841242FE915D0B29(iLocal_54, 3) > 0.25f) || !unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
					{
						if (unk_0x31F12808DC47A9E5(iLocal_56))
						{
							if (unk_0x4A296E47F281D02F(iLocal_56))
							{
								unk_0xFF4225D4B94E1277(unk_0x2D524E0AFDB169D5(), "DOORS_BLOWN", unk_0x79CEF243729F54F9(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x964B3F361C3DBDF4(iLocal_56, 1, 0);
								unk_0xF342BF6A7A4C7A8F(iLocal_56, 1, 0);
								unk_0x2F96E5B023BC3998(iLocal_56);
								unk_0xC4E1F2B378137853(iLocal_56, 1);
								Local_477 = { unk_0x761660F5CE986DC4(iLocal_56, 1) - unk_0x761660F5CE986DC4(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_477) > 10f)
								{
									Local_477 = { func_29(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0x4B75B258E14231A7(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x5AFB8ED811F05E4D();
							}
							else if (unk_0xD4ADBBD57F62F0F1(unk_0x761660F5CE986DC4(iLocal_56, 1), unk_0x0AF3D0AB54EA2104(iLocal_54, Local_470), unk_0x0AF3D0AB54EA2104(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x5AFB8ED811F05E4D() - iLocal_476) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x31F12808DC47A9E5(iLocal_54))
				{
					unk_0x9F2024F28D07EE1E(iLocal_54, 2, 0, 0);
					unk_0x9F2024F28D07EE1E(iLocal_54, 3, 0, 0);
					func_24(unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_62(8);
			}
			if (unk_0x31F12808DC47A9E5(iLocal_56) && !unk_0x351CD242DF0BE9BA(uLocal_137))
			{
				if (unk_0x2A72627520A107B5(iLocal_56) == 0f && (unk_0x5AFB8ED811F05E4D() - iLocal_476) > 1000)
				{
					func_24(unk_0x761660F5CE986DC4(iLocal_56, 1), 1);
					unk_0x5BE35A26B9097351(&iLocal_56);
				}
				else if ((unk_0x5AFB8ED811F05E4D() - iLocal_476) > 5000)
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
	
	if (unk_0x31F12808DC47A9E5(iLocal_57) && unk_0x4A296E47F281D02F(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x0DDC3D6589A9421A(unk_0x761660F5CE986DC4(iLocal_57, 1), 0.3f, unk_0x00AA11D4077A2C43(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_57, 1), 1f, 1) || (unk_0x7824A0A217B1F7A8(2, unk_0x761660F5CE986DC4(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0x0A088F357EF627CA(iLocal_57) < iLocal_132 && unk_0x1B843A60307EECA4(iLocal_57, unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0x0A088F357EF627CA(iLocal_57)));
			unk_0xA3F48AA4B6323A62(iLocal_57);
		}
		if ((unk_0x5AFB8ED811F05E4D() - iLocal_467) > 200 && unk_0x31F12808DC47A9E5(iLocal_54))
		{
			if (unk_0x8D3781049D6B7B38(unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0x5AFB8ED811F05E4D();
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
		iLocal_132 = unk_0x0A088F357EF627CA(iLocal_57);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0xD7C6D93EF1B80F06(5, Param3, Param0) || (unk_0xD7C6D93EF1B80F06(2, Param3, Param0) && !bParam10)) || (unk_0xD7C6D93EF1B80F06(20, Param3, Param0) && !bParam10)) || unk_0xD7C6D93EF1B80F06(4, Param3, Param0)) || (unk_0xD7C6D93EF1B80F06(28, Param3, Param0) && !bParam10)) || unk_0xD7C6D93EF1B80F06(32, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(25, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(9, Param3, Param0)) || (unk_0xD7C6D93EF1B80F06(3, Param3, Param0) && !bParam10)) || (unk_0xD7C6D93EF1B80F06(6, Param3, Param0) && !bParam10)) || unk_0xD7C6D93EF1B80F06(0, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(1, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(23, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(34, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(14, Param3, Param0)) || (unk_0xD7C6D93EF1B80F06(30, Param3, Param0) && !bParam10)) || (unk_0xD7C6D93EF1B80F06(12, Param3, Param0) && !bParam10)) || unk_0xD7C6D93EF1B80F06(7, Param3, Param0)) || (unk_0xD7C6D93EF1B80F06(21, Param3, Param0) && !bParam10)) || (unk_0xD7C6D93EF1B80F06(18, Param3, Param0) && !bParam10)) || unk_0xD7C6D93EF1B80F06(15, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(10, Param3, Param0)) || unk_0xD7C6D93EF1B80F06(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x7824A0A217B1F7A8(5, Param6, iParam9) || (unk_0x7824A0A217B1F7A8(2, Param6, iParam9) && !bParam10)) || (unk_0x7824A0A217B1F7A8(20, Param6, iParam9) && !bParam10)) || unk_0x7824A0A217B1F7A8(4, Param6, iParam9)) || (unk_0x7824A0A217B1F7A8(28, Param6, iParam9) && !bParam10)) || unk_0x7824A0A217B1F7A8(32, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(25, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(9, Param6, iParam9)) || (unk_0x7824A0A217B1F7A8(3, Param6, iParam9) && !bParam10)) || (unk_0x7824A0A217B1F7A8(6, Param6, iParam9) && !bParam10)) || unk_0x7824A0A217B1F7A8(0, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(1, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(23, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(34, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(14, Param6, iParam9)) || (unk_0x7824A0A217B1F7A8(30, Param6, iParam9) && !bParam10)) || (unk_0x7824A0A217B1F7A8(12, Param6, iParam9) && !bParam10)) || unk_0x7824A0A217B1F7A8(7, Param6, iParam9)) || (unk_0x7824A0A217B1F7A8(21, Param6, iParam9) && !bParam10)) || (unk_0x7824A0A217B1F7A8(18, Param6, iParam9) && !bParam10)) || unk_0x7824A0A217B1F7A8(15, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(10, Param6, iParam9)) || unk_0x7824A0A217B1F7A8(27, Param6, iParam9))
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
	
	if (!unk_0xE769D9B5158D0F11(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0x0FAE113CE72ED842(iLocal_51[1]) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0xE769D9B5158D0F11(uLocal_60[1]))
					{
						uLocal_60[1] = func_36(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xE769D9B5158D0F11(uLocal_60[1]))
					{
						unk_0x40D517D991458154(&(uLocal_60[1]));
					}
					if (!unk_0xE769D9B5158D0F11(uLocal_59))
					{
						uLocal_59 = func_34(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xE769D9B5158D0F11(uLocal_60[1]))
				{
					unk_0x40D517D991458154(&(uLocal_60[1]));
				}
				if (unk_0xE769D9B5158D0F11(uLocal_59))
				{
					unk_0x40D517D991458154(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0xE769D9B5158D0F11(uLocal_60[0]) && unk_0x9B5F15A9BEB487E0(uLocal_60[0]) != 119)
			{
				unk_0x40D517D991458154(&(uLocal_60[0]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_60[1]) && unk_0x9B5F15A9BEB487E0(uLocal_60[1]) != 119)
			{
				unk_0x40D517D991458154(&(uLocal_60[1]));
			}
			if (unk_0xE769D9B5158D0F11(uLocal_59) && unk_0x9B5F15A9BEB487E0(uLocal_59) != 119)
			{
				unk_0x40D517D991458154(&uLocal_59);
			}
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
					{
						if (unk_0x88B79D32B518C327(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_59))
				{
					uLocal_59 = func_34(iLocal_54, 1, 0);
				}
			}
			else if (unk_0xE769D9B5158D0F11(uLocal_59))
			{
				unk_0x40D517D991458154(&uLocal_59);
			}
			if ((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0xE769D9B5158D0F11(uLocal_59)) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 0))
				{
					if (unk_0x62FE0DE30E64B492(uLocal_59) != 0)
					{
						unk_0x1DB03C7D3DC49006(uLocal_59, 0);
					}
				}
				else if (unk_0x62FE0DE30E64B492(uLocal_59) != 255)
				{
					unk_0x1DB03C7D3DC49006(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0x351CD242DF0BE9BA(uLocal_137) && !unk_0x657B649BA2AD3582(iLocal_51[iVar0], 0))
					{
						if (!unk_0x3ECC58F70B51B88E(iLocal_51[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0x657B649BA2AD3582(iLocal_51[iVar0], 0))
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
					if (!unk_0xE769D9B5158D0F11(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_36(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0xE769D9B5158D0F11(uLocal_60[iVar0]))
				{
					unk_0x40D517D991458154(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x351CD242DF0BE9BA(uLocal_137) && !bLocal_121)
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_64))
				{
					uLocal_64 = func_26(uLocal_137);
				}
			}
			else if (unk_0xE769D9B5158D0F11(uLocal_64))
			{
				unk_0x40D517D991458154(&uLocal_64);
			}
		}
	}
	else if ((unk_0x31F12808DC47A9E5(iLocal_54) && unk_0x31F12808DC47A9E5(iLocal_51[0])) && unk_0x31F12808DC47A9E5(iLocal_51[1]))
	{
		if ((((((!unk_0xD76674575E7BA743(iLocal_54) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0xD76674575E7BA743(iLocal_51[0]) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0xD76674575E7BA743(iLocal_51[1]) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x40D517D991458154(&uLocal_63);
		}
	}
	if (unk_0xE769D9B5158D0F11(uLocal_60[0]))
	{
		unk_0x2E9500102925D891(uLocal_60[0], iLocal_122);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_60[1]))
	{
		unk_0x2E9500102925D891(uLocal_60[1], iLocal_122);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_59))
	{
		unk_0x2E9500102925D891(uLocal_59, iLocal_122);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_64))
	{
		unk_0x2E9500102925D891(uLocal_64, iLocal_122);
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
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_27(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_27(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_27(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
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
	func_225();
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
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_40(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
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
	Global_104537 = iParam0;
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_46(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_45() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_45()
{
	return Global_25233;
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_48();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
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
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_104551.f_2353.f_539.f_4301)
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
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
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
		if (unk_0x3EFEA066EF92D5B7(uLocal_137))
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
	if (!unk_0x351CD242DF0BE9BA(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				if (!func_64(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x5AFB8ED811F05E4D();
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
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]))
				{
					if (!func_64(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x5AFB8ED811F05E4D();
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
			if ((unk_0x5AFB8ED811F05E4D() - iLocal_465) > 3000)
			{
				unk_0xDBE64C5761554FBF(&(iLocal_51[0]));
				unk_0xDBE64C5761554FBF(&(iLocal_51[1]));
				unk_0xF392BEDFD9CD33F7(iLocal_54, -1000f, 1);
				unk_0xF342BF6A7A4C7A8F(iLocal_54, 1, 0);
				unk_0x4F5FF3F3FDCAB15D(&iLocal_54);
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
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x2A488C176D52CCA5(unk_0xF5BE9412C59FF617(uLocal_137), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xD76674575E7BA743(iParam0) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1)) < 300f)
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
		iLocal_507 = unk_0x5AFB8ED811F05E4D();
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1]))
				{
					if (func_21() < 30f && !unk_0x0FAE113CE72ED842(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && unk_0x31F12808DC47A9E5(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0x267F7A2DFDFFB077(iLocal_51[iVar0]);
							unk_0xC8BEB049F3BFC0AB(&uLocal_58);
							if (unk_0x657B649BA2AD3582(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x302010EE1D40EBC3("move_injured_generic"))
									{
										unk_0x7DCD69F135A25F0E(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0x5941F8B2A813BBA8(0, 0, 256);
							}
							unk_0x81D9C52E2A8DA464(0);
							if (iLocal_118[iVar0])
							{
								unk_0x73E31FC09D8359DB(0, unk_0x61E9B3BFA06B017B(1000, 3000));
							}
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_58);
							unk_0x73F69DD57B7E92A9(iLocal_51[iVar0], uLocal_58);
							unk_0x56C7B20E11B37066(&uLocal_58);
						}
						unk_0x273FE09AE985A00A(iLocal_51[iVar0], 6, 0);
						unk_0x273FE09AE985A00A(iLocal_51[iVar0], 0, 1);
						unk_0x273FE09AE985A00A(iLocal_51[iVar0], 1, 0);
						unk_0x9B78D121254B9A0D(iLocal_51[iVar0], 1);
						unk_0x1070F6BBC5E06444(iLocal_51[iVar0], 1);
						unk_0x40E2910BAF39B1C7(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x4A296E47F281D02F(iLocal_56)) && !unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]))
				{
					unk_0x267F7A2DFDFFB077(iLocal_51[iLocal_130]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]))
					{
						unk_0x267F7A2DFDFFB077(iLocal_51[iLocal_130]);
						unk_0xC8BEB049F3BFC0AB(&uLocal_58);
						if (unk_0x657B649BA2AD3582(iLocal_51[iLocal_130], 0))
						{
							unk_0x5941F8B2A813BBA8(0, 0, 256);
						}
						unk_0x81D9C52E2A8DA464(0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						unk_0xAFDA7B8F83B2CA58(uLocal_58);
						unk_0x73F69DD57B7E92A9(iLocal_51[iLocal_130], uLocal_58);
						unk_0x56C7B20E11B37066(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1]))
				{
					if (unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1]))
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
						if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
							{
								unk_0x692B480372016EFD(iLocal_51[iVar0], iLocal_54, unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0x351CD242DF0BE9BA(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0x692B480372016EFD(iLocal_51[iVar0], iLocal_54, unk_0xF5BE9412C59FF617(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0x08900F2B902A7387(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x5AFB8ED811F05E4D() - iLocal_500)) > unk_0x3D81861E1A1652A9(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x5AFB8ED811F05E4D();
								}
							}
						}
					}
					if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 0) && (unk_0x5AFB8ED811F05E4D() - iLocal_507) > 5000)
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
			if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
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
					unk_0xE32626D0E44BC8F1(iLocal_51[iVar0], 1048576000);
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
	
	if ((unk_0x5AFB8ED811F05E4D() - iLocal_484) > 250)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
				{
					if (unk_0xAAB9BF2904B9E7CE(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4(), 19) && unk_0x4CA763CF04749B94(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4()))
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
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
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
	
	if (unk_0x31F12808DC47A9E5(iLocal_56))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[iParam0]))
		{
			if (unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0xE825CDE0EAED051D(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
						unk_0x5BE35A26B9097351(&iLocal_56);
					}
				}
				else
				{
					unk_0x40E2910BAF39B1C7(iLocal_51[iParam0], 1);
					unk_0xB5746603774C4C9D(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x31F12808DC47A9E5(iLocal_56) || (unk_0x31F12808DC47A9E5(iLocal_56) && !unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[iParam0]))
		{
			unk_0x40E2910BAF39B1C7(iLocal_51[iParam0], 0);
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
	
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		Var0 = { func_29(unk_0xCC9FF9C751023D2A(iLocal_54, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1))) };
		fVar3 = ((unk_0x93FDA3BF59E7B77F(iLocal_54) + unk_0x7F21F40674579303(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x93FDA3BF59E7B77F(iLocal_54) + unk_0x7F21F40674579303(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0xA89DC5E1C1F12DBF(unk_0x761660F5CE986DC4(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0xA89DC5E1C1F12DBF(unk_0x761660F5CE986DC4(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
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
				if ((((((!unk_0x0FAE113CE72ED842(iLocal_51[iVar12]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x5AFB8ED811F05E4D() - iLocal_504[iVar12]) > 1000) && !unk_0x657B649BA2AD3582(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_501 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
						}
						unk_0xC8BEB049F3BFC0AB(&uVar14);
						if (func_66() || func_32(Local_501))
						{
							unk_0x394F5D18B411ECAD(0, Var5[iVar12 /*3*/], unk_0x18F7BE9ACB7D08F4(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), -1, 1);
						}
						else
						{
							unk_0x8C2B5EF615301194(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x769D0AED8DB447AD(0, Local_501, -1, 1, 0);
						}
						unk_0xAFDA7B8F83B2CA58(uVar14);
						unk_0x73F69DD57B7E92A9(iLocal_51[iVar12], uVar14);
						unk_0x56C7B20E11B37066(&uVar14);
					}
					iLocal_504[iVar12] = unk_0x5AFB8ED811F05E4D();
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
	
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0x40E2910BAF39B1C7(iParam0, 1);
					unk_0x267F7A2DFDFFB077(iParam0);
					Local_485 = { unk_0x79CEF243729F54F9(iLocal_54, 0) };
					Local_488 = { unk_0x26A3403C90A0B224(iLocal_54, 2) };
					Local_491 = { unk_0xC0DC85E31910C008("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0)) && !unk_0x0FAE113CE72ED842(iLocal_51[0])) && !unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0))
					{
						if (func_21() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x351CD242DF0BE9BA(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0xA303A4837FBB8DDE(iParam0, unk_0xF5BE9412C59FF617(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0xA303A4837FBB8DDE(iParam0, unk_0xF5BE9412C59FF617(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0x0FAE113CE72ED842(iParam0))
					{
						if (unk_0x351CD242DF0BE9BA(uLocal_137))
						{
							unk_0xA303A4837FBB8DDE(iParam0, unk_0xF5BE9412C59FF617(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
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
				if (!unk_0x0FAE113CE72ED842(iParam0) && unk_0x351CD242DF0BE9BA(uLocal_137))
				{
					if ((unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), unk_0xF5BE9412C59FF617(uLocal_137), 1) < 2f && !unk_0x0B90D19A63676F41(iParam0)) && (unk_0x5AFB8ED811F05E4D() - iLocal_136) > 3000)
					{
						if (unk_0x9381BBF272130ED6(iParam0, 4))
						{
							unk_0x5C7D86C4752CBC68(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0x28A314B9FED396D5(uLocal_137);
						func_79(iParam0);
						unk_0x5C7D86C4752CBC68(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x0FAE113CE72ED842(iParam0) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
				{
					if (unk_0x2BBAA45ECDE3DAE2(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0xA303A4837FBB8DDE(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0xA303A4837FBB8DDE(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x0FAE113CE72ED842(iParam0))
				{
					if (unk_0x351CD242DF0BE9BA(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0x93FDA3BF59E7B77F(iParam0);
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
						if (unk_0x2A488C176D52CCA5(Local_491, unk_0x761660F5CE986DC4(iParam0, 1)) < 0.3f)
						{
							if (unk_0x36E1A96E1D63ED91((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0xDAA43D91610F5E2F(iParam0, -1056964608);
								unk_0x267F7A2DFDFFB077(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0x3C3438327FFEB224(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0x4DD2EB945B4192FD(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0x2ADF31478643C93D(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x4DD2EB945B4192FD(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0x2ADF31478643C93D(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x8F2E6C470A0005D4(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0xD76674575E7BA743(iParam0) && !unk_0x6157232E032EBC56(Local_485, 2f))
						{
							unk_0x990FFD4FB6ADD630(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xCF0FA6AB02EA68F7(iLocal_494))
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
						if ((unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x9EE4192FE475677C(iLocal_56, iParam0)) && unk_0x74CE979B042A1253(iLocal_494) > fLocal_508)
						{
							if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_54))
							{
								unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
								unk_0xF342BF6A7A4C7A8F(iLocal_56, 0, 0);
								unk_0x947CE5CCDDBA0651(iLocal_56, iLocal_54, 0, unk_0xCC9FF9C751023D2A(iLocal_54, unk_0x761660F5CE986DC4(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x74CE979B042A1253(iLocal_494) > fLocal_509)
					{
						unk_0xF392BEDFD9CD33F7(iLocal_54, -4f, 1);
						unk_0x267F7A2DFDFFB077(iParam0);
						if (unk_0x31F12808DC47A9E5(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0xFC8F21F2629FD98F(iLocal_54, 2, 1);
							unk_0xFC8F21F2629FD98F(iLocal_54, 3, 1);
							unk_0x40E2910BAF39B1C7(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xCF0FA6AB02EA68F7(iLocal_494) && unk_0x74CE979B042A1253(iLocal_494) > fLocal_509) || !unk_0xCF0FA6AB02EA68F7(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
						{
							unk_0xFDBDFC454E44A5BF(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
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
	if (!unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1])) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!bLocal_109)
		{
			if ((((((func_21() < 10f && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6)) && func_66()) || ((func_21() < 20f && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6)) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))) || (func_21() < 5f && bLocal_110)) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_74(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))) || ((!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A())) && func_74(unk_0x952F33F151D40D1A())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0xCF0FA6AB02EA68F7(iLocal_494))
			{
				unk_0xF392BEDFD9CD33F7(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			unk_0x40E2910BAF39B1C7(iParam0, 0);
		}
	}
	if ((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && iLocal_48 != 7) && unk_0xCF0FA6AB02EA68F7(iLocal_494))
	{
		unk_0xF392BEDFD9CD33F7(iLocal_54, -8f, 1);
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
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0x31F12808DC47A9E5(iLocal_54))
	{
		uVar59 = 4;
		unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0x0AF3D0AB54EA2104(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0x0AF3D0AB54EA2104(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0x0AF3D0AB54EA2104(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0x0AF3D0AB54EA2104(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0x0AF3D0AB54EA2104(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0x88B79D32B518C327(iLocal_51[1], iLocal_54, 1))
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
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (!unk_0x31F12808DC47A9E5(iLocal_56))
		{
			iLocal_56 = unk_0x7082ECB3731CD86C(iLocal_105, Local_77, 1, 1, 0);
			unk_0x5F1E15DC35404E1B(iLocal_56, 0);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_56))
		{
			unk_0x947CE5CCDDBA0651(iLocal_56, iParam0, unk_0xCA57A734FF47CDF5(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1);
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
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
				{
					unk_0x40E2910BAF39B1C7(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				if (unk_0x31F12808DC47A9E5(func_83()))
				{
					if (!unk_0x0FAE113CE72ED842(func_83()))
					{
						if (unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0) != func_83() && unk_0x74B8CA477787A438(iLocal_54, -1, 0))
						{
							unk_0xFDBDFC454E44A5BF(func_83(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && func_83() != iLocal_51[1])
				{
					if (unk_0x4983F8C51A0C0AF3(iLocal_54, 0, 0) != iLocal_51[1] && unk_0x74B8CA477787A438(iLocal_54, 0, 0))
					{
						unk_0xFDBDFC454E44A5BF(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
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
				if (unk_0x31F12808DC47A9E5(func_83()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x48CA7222706D392C(func_83(), iLocal_54, unk_0x18F7BE9ACB7D08F4(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x31F12808DC47A9E5(func_83()))
				{
					unk_0x8A58BE5F8F3F4E69(func_83(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				if (unk_0x2A72627520A107B5(iLocal_54) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x31F12808DC47A9E5(iLocal_54) && unk_0x31F12808DC47A9E5(unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0))) && (unk_0x74C2FE037DFC8B4A(unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0), 0) || unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x4983F8C51A0C0AF3(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_54, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 100f)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar1]) && unk_0x2BBAA45ECDE3DAE2(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0x470C9634914699C0(iLocal_51[iVar1], 2, 1);
				unk_0xC8BEB049F3BFC0AB(&uVar2);
				unk_0x5C5C969498EE7548(0, iLocal_54, 0);
				unk_0x48CA7222706D392C(0, iLocal_54, unk_0x18F7BE9ACB7D08F4(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0xAFDA7B8F83B2CA58(uVar2);
				unk_0x73F69DD57B7E92A9(iLocal_51[iVar1], uVar2);
				unk_0x56C7B20E11B37066(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0xC4B84EB67F78C1F0(iLocal_54, 0) || unk_0x351CD242DF0BE9BA(uLocal_137)) || iLocal_49 == 3) || unk_0x08438F954B83E80B(iLocal_54, 0, 7000)) || unk_0x08438F954B83E80B(iLocal_54, 3, 30000)) || unk_0x08438F954B83E80B(iLocal_54, 2, 30000)) || unk_0x08438F954B83E80B(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x31F12808DC47A9E5(iLocal_54))
	{
		if (!unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
		{
			if (((((unk_0x0A088F357EF627CA(iLocal_54) < 300 || unk_0x5719E0F2FB0A1A07(iLocal_54) < 200f) || (unk_0x9308517E4356A987(iLocal_54, 0, 0) && unk_0x9308517E4356A987(iLocal_54, 1, 0))) || (unk_0x9308517E4356A987(iLocal_54, 4, 0) && unk_0x9308517E4356A987(iLocal_54, 5, 0))) || (unk_0x9308517E4356A987(iLocal_54, 0, 0) && unk_0x9308517E4356A987(iLocal_54, 4, 0))) || (unk_0x9308517E4356A987(iLocal_54, 1, 0) && unk_0x9308517E4356A987(iLocal_54, 5, 0)))
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
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0))
		{
			if (!unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0))
		{
			if (!unk_0x88B79D32B518C327(iLocal_51[1], iLocal_54, 0))
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
	if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0))
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
				if (unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x4A296E47F281D02F(iLocal_56))
				{
					unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) || !unk_0x0FAE113CE72ED842(iLocal_51[1])) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
					{
						unk_0x273FE09AE985A00A(iLocal_51[iVar0], 17, 1);
						unk_0x470C9634914699C0(iLocal_51[iVar0], 128, 1);
						unk_0x470C9634914699C0(iLocal_51[iVar0], 16, 1);
						unk_0x273FE09AE985A00A(iLocal_51[iVar0], 1, 0);
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						if (unk_0x657B649BA2AD3582(iLocal_51[iVar0], 1))
						{
							unk_0x5941F8B2A813BBA8(iLocal_51[iVar0], 0, 256);
						}
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 300f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(iLocal_51[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				if (func_85(iLocal_54, 1, 0, 0, 0, 0, 1, 0))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xE4752B503DF3FEC0(iParam0) + 1;
	if (iParam4 || !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_86(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x31F12808DC47A9E5(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x18F7BE9ACB7D08F4())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x0FAE113CE72ED842(iVar2))
					{
						if (unk_0xEE1E09882FA264CA(iVar2))
						{
							if (unk_0xFF3D7D0CFD33DE47(unk_0xD3287DCBDBC58316(iVar2)) == 0)
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
				else if (!unk_0x0FAE113CE72ED842(iVar2))
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
	
	if (!unk_0x74B8CA477787A438(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, iParam1);
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(iVar0, 451360105) == 1 || unk_0x2BBAA45ECDE3DAE2(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 0), unk_0x761660F5CE986DC4(iVar0, 0)) < 10f)
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
	if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x4A296E47F281D02F(iLocal_56))
					{
						if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[0]))
						{
							func_88(0);
						}
						else
						{
							unk_0x267F7A2DFDFFB077(iLocal_51[0]);
						}
						if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[1]))
						{
							func_88(1);
						}
						else
						{
							unk_0x267F7A2DFDFFB077(iLocal_51[1]);
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
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]))
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
	if (unk_0x31F12808DC47A9E5(iLocal_55))
	{
		if (!unk_0x74C2FE037DFC8B4A(iLocal_55, 0) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_55, 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x74C2FE037DFC8B4A(iLocal_55, 0) || !unk_0xC4B84EB67F78C1F0(iLocal_55, 0)) || (!unk_0xE886206626BBEA49(iLocal_55, 1119092736) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_55, 1)))
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
	if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x1B843A60307EECA4(iLocal_51[0], unk_0x18F7BE9ACB7D08F4(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x1B843A60307EECA4(iLocal_51[1], unk_0x18F7BE9ACB7D08F4(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
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
	if ((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && func_66()) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 7))
	{
		func_62(2);
	}
	if (!unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		func_62(5);
	}
}

void func_88(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(iLocal_51[iParam0]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x267F7A2DFDFFB077(iLocal_51[iParam0]);
		unk_0xC8BEB049F3BFC0AB(&uLocal_58);
		if (unk_0x657B649BA2AD3582(iLocal_51[iParam0], 0))
		{
			unk_0x5941F8B2A813BBA8(0, 0, 256);
		}
		unk_0x81D9C52E2A8DA464(0);
		unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 0, 2);
		unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), -1, 0);
		unk_0xAFDA7B8F83B2CA58(uLocal_58);
		unk_0x73F69DD57B7E92A9(iLocal_51[iParam0], uLocal_58);
		unk_0x56C7B20E11B37066(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0x32F4AD6D5EBC595D(116, unk_0x761660F5CE986DC4(iLocal_51[iParam0], 1), -1082130432);
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
			if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
			{
				unk_0x40E2910BAF39B1C7(iLocal_51[0], 1);
			}
			if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
			{
				unk_0x40E2910BAF39B1C7(iLocal_51[1], 1);
			}
			if (func_96())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1])) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (func_95() || func_94())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x4A296E47F281D02F(iLocal_56))
				{
					if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[0]))
					{
						func_88(0);
					}
					else
					{
						unk_0x267F7A2DFDFFB077(iLocal_51[0]);
					}
					if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[1]))
					{
						func_88(1);
					}
					else
					{
						unk_0x267F7A2DFDFFB077(iLocal_51[1]);
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
				if (!unk_0x0FAE113CE72ED842(iLocal_51[iLocal_130]))
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
					if (!func_92(iLocal_51[iVar1], 1000) && (func_21() < 2f && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x74C2FE037DFC8B4A(iLocal_51[iVar1], 0))
					{
						if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iLocal_51[iVar1]) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x5AFB8ED811F05E4D() - iLocal_500)) > unk_0x3D81861E1A1652A9(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x5AFB8ED811F05E4D();
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
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x31F12808DC47A9E5(iLocal_51[iVar2]))
		{
			if ((unk_0x0FAE113CE72ED842(iLocal_51[iVar2]) || unk_0x74C2FE037DFC8B4A(iLocal_51[iVar2], 0)) && unk_0x1B843A60307EECA4(iLocal_51[iVar2], unk_0x18F7BE9ACB7D08F4(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x0FAE113CE72ED842(iLocal_51[0]) || unk_0x0FAE113CE72ED842(iLocal_51[1])) || bLocal_121)
	{
		func_62(8);
	}
	if ((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && func_66())
	{
		if (unk_0x1B843A60307EECA4(iLocal_54, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		func_62(5);
	}
	if ((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6)) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
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
	Global_14622 = 0;
	func_91();
}

void func_91()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x31F12808DC47A9E5(iParam0))
		{
			if ((unk_0xB6C2454233C8F532(iParam0) && !unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0))) || (unk_0x978B4E1292EBBE41(iParam0) && unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_499) > iParam1)
				{
					fLocal_498 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1));
					iLocal_499 = unk_0x5AFB8ED811F05E4D();
				}
			}
		}
	}
	return iVar0;
}

int func_93()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
			{
				if ((!unk_0x88B79D32B518C327(iLocal_51[iVar0], iLocal_54, 0) && unk_0x299A8727F19AED60(unk_0x18F7BE9ACB7D08F4(), iLocal_54)) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1)) < 400f)
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
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()) == iLocal_54)
		{
			if (unk_0x730282349E531F39(unk_0x18F7BE9ACB7D08F4()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) && unk_0xEA07F07380ABC460(iLocal_51[0], unk_0x18F7BE9ACB7D08F4(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && unk_0xEA07F07380ABC460(iLocal_51[1], unk_0x18F7BE9ACB7D08F4(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 4) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_97(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_98(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		func_129(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_99(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_99(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x76AF8AC551A53D4C())
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0xE0C4A595CD61B7F2(iVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
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
		func_121();
	}
	if (!unk_0x76AF8AC551A53D4C())
	{
		if (func_116(uParam0, bParam6, bParam8, 0))
		{
			func_115(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_104(iVar0))
			{
				if ((unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0)) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if ((unk_0x6157232E032EBC56(Param1, 1f) && !unk_0x622E10ED992CEB95()) && uParam7)
					{
						if (!func_97(iVar0))
						{
							func_131(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
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
			if (unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0))
			{
				if ((unk_0x6157232E032EBC56(Param1, 1f) && !unk_0x622E10ED992CEB95()) && uParam7)
				{
					if (!func_97(iVar0))
					{
						func_131(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
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
		if (!unk_0xE0C4A595CD61B7F2(iVar0))
		{
			if (func_97(iVar0) && unk_0x622E10ED992CEB95())
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				func_129(uParam0, iVar0, 1);
			}
		}
		if (!func_116(uParam0, bParam6, bParam8, 0))
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
	if (func_101(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0x9A8BE560E024CAB0(1);
		unk_0xBC3C2A3068412290(0);
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		unk_0x605B63B87CCF606F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_101(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0x978B4E1292EBBE41(iParam0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xB6C2454233C8F532(iParam0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam0))
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
		if (uParam0->f_2 + iVar0) > unk_0x5AFB8ED811F05E4D()
		{
			return 1;
		}
	}
	return 0;
}

int func_103(bool bParam0)
{
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104551.f_10019.f_100++;
			}
			return Global_104551.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104551.f_10019.f_101++;
			}
			return Global_104551.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104551.f_10019.f_102++;
			}
			return Global_104551.f_10019.f_102;
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
		if ((!unk_0xFAFFA408239A026B(sParam0) && func_97(sParam0)) || func_97("CMN_HINT"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return 0;
	}
	switch (Global_35859)
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
	if (bParam0)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 0;
	}
	if (func_114(0))
	{
		return 0;
	}
	if (func_113())
	{
		return 0;
	}
	if (unk_0x91A08229665C71F1())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53082)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				return 0;
			}
			if (unk_0xE368D11FD9469808())
			{
				return 0;
			}
		}
	}
	if ((func_112() || func_111(Global_1646129.f_138609)) || func_110())
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if ((unk_0xF8DAA7AB81AFC008(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), func_109(unk_0x18F7BE9ACB7D08F4(), 0)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("apc") && func_109(unk_0x18F7BE9ACB7D08F4(), 0) != -1)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("akula") && func_109(unk_0x18F7BE9ACB7D08F4(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_106(unk_0x8CFC7D6E1DA5D304()))
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
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_107(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
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
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
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

var func_110()
{
	return Global_2447128.f_16;
}

bool func_111(int iParam0)
{
	return iParam0 == 51;
}

var func_112()
{
	return Global_2447128.f_15;
}

bool func_113()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

int func_114(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_115(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x9A8BE560E024CAB0(0);
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
	unk_0x14156ED1026104AB(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), Param1, -1, iVar2, iVar3);
	unk_0x9575CEFF222148A6("FocusIn", 0, 0);
	unk_0x64D773F3BE6DC50A("HINT_CAM_SCENE");
	unk_0x929C3CBA660376D5(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_116(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
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
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (!func_120(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_119(bParam1, bParam2, bParam3) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (func_118(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_118(bParam1, bParam2, bParam3))
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
		func_121();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				unk_0x9A8BE560E024CAB0(0);
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
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
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
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				unk_0x9A8BE560E024CAB0(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_121()
{
	unk_0xD2A9C3F486236CC5(&Global_2324, 4);
}

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_123(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_123(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		func_129(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_124(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_124(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x76AF8AC551A53D4C())
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xE0C4A595CD61B7F2(iVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
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
		func_121();
	}
	if (func_101(iParam1) && unk_0xBF0517F7142EEB5B(iParam1))
	{
		iVar1 = 0;
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			unk_0xD8FED54465FFD16D(unk_0x6DE4035D8BAB73B4(iParam1));
			unk_0x1834FEB33AA9A42E(unk_0x6DE4035D8BAB73B4(iParam1), 1);
			if (unk_0xC5581857956555AD(unk_0x6DE4035D8BAB73B4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x978B4E1292EBBE41(iParam1))
		{
			unk_0x537FF9DF0013B635(unk_0x00ABCA0241A97143(iParam1));
			if (unk_0x95AB6E5C406E24CB(unk_0x00ABCA0241A97143(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam1))
		{
			unk_0x33385B2D899D1FC3(unk_0x466780B966EA4B56(iParam1));
			if (unk_0xFAA49DBF76CAA296(unk_0x466780B966EA4B56(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x76AF8AC551A53D4C())
		{
			if (func_116(uParam0, bParam7, bParam9, 0))
			{
				func_125(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_104(iVar0))
				{
					if ((unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0)) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if ((iVar1 && !unk_0x622E10ED992CEB95()) && uParam8)
						{
							if (!func_97(iVar0))
							{
								func_131(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
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
				if (unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0))
				{
					if (((unk_0x3AAE8FF7FB37F69E(iParam1) && iVar1) && !unk_0x622E10ED992CEB95()) && uParam8)
					{
						if (!func_97(iVar0))
						{
							func_131(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
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
			if (!unk_0xE0C4A595CD61B7F2(sParam5))
			{
				if (func_97(sParam5))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			if (!func_116(uParam0, bParam7, bParam9, 0))
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
		func_129(uParam0, iVar0, 0);
	}
}

void func_125(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316746 == 1)
	{
		return;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		func_129(uParam0, 0, 0);
	}
	if (func_128(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			iVar0 = unk_0x6DE4035D8BAB73B4(iParam1);
			if (!unk_0x657B649BA2AD3582(iVar0, 0))
			{
				if (unk_0xEE1E09882FA264CA(iVar0))
				{
					if (!func_126())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xC1A23BED641FA58E(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x9A8BE560E024CAB0(0);
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
	unk_0x211B8384E5838644(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), iParam1, -1, iVar3, iVar4);
	unk_0x9575CEFF222148A6("FocusIn", 0, 0);
	unk_0x64D773F3BE6DC50A("HINT_CAM_SCENE");
	unk_0x929C3CBA660376D5(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_126()
{
	return func_127(unk_0x8CFC7D6E1DA5D304());
}

int func_127(int iParam0)
{
	if (unk_0x4F69FBD64CDF125B(unk_0x6604E096142B4B55(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_128(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_129(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(iParam2);
		unk_0x605B63B87CCF606F("FocusIn");
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x9A8BE560E024CAB0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(uParam0->f_3))
	{
		if (func_97(uParam0->f_3))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (func_97(sVar0))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
}

void func_130(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_6), iParam0);
}

void func_131(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

bool func_132(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_104551.f_24965.f_6, iParam0);
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_50(Global_104540))
		{
			func_134(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_50(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_131(func_135(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_131(func_135(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_131(func_135(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
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

int func_136()
{
	switch (func_137(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_141(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_139(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_35859);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1]))
				{
					unk_0x273FE09AE985A00A(iLocal_51[0], 6, 1);
					unk_0x273FE09AE985A00A(iLocal_51[1], 6, 1);
					unk_0x40E2910BAF39B1C7(iLocal_51[0], 1);
					unk_0x40E2910BAF39B1C7(iLocal_51[1], 1);
					if (unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 0) && unk_0x88B79D32B518C327(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0xC8BEB049F3BFC0AB(&uVar0);
							unk_0x0F36ED260B9B4408(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D24CE144A81296(0, iLocal_54, 10f, 786603);
							unk_0xAFDA7B8F83B2CA58(uVar0);
							unk_0x73F69DD57B7E92A9(iLocal_51[0], uVar0);
							unk_0x56C7B20E11B37066(&uVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0xC8BEB049F3BFC0AB(&uVar1);
							unk_0x0F36ED260B9B4408(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D24CE144A81296(0, iLocal_54, 10f, 786603);
							unk_0xAFDA7B8F83B2CA58(uVar1);
							unk_0x73F69DD57B7E92A9(iLocal_51[0], uVar1);
							unk_0x56C7B20E11B37066(&uVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0xC8BEB049F3BFC0AB(&uVar2);
							unk_0x0F36ED260B9B4408(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D24CE144A81296(0, iLocal_54, 10f, 786603);
							unk_0xAFDA7B8F83B2CA58(uVar2);
							unk_0x73F69DD57B7E92A9(iLocal_51[0], uVar2);
							unk_0x56C7B20E11B37066(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0x21D24CE144A81296(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 0) && unk_0x2BBAA45ECDE3DAE2(iLocal_51[0], -1794415470) != 1)
						{
							unk_0xFDBDFC454E44A5BF(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x88B79D32B518C327(iLocal_51[1], iLocal_54, 0) && unk_0x2BBAA45ECDE3DAE2(iLocal_51[1], -1794415470) != 1)
						{
							unk_0xFDBDFC454E44A5BF(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_146() || func_145()) || func_95()) || func_94()) || func_144()) || func_143())
			{
				if (func_21() < 20f)
				{
					func_90();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar3]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[iVar3], 0))
					{
						if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()) && unk_0x422DF8890E5A5CBB(iLocal_51[iVar3]))
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
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x36E5882A1B6EA35B("PLAYER HAS PROJECTILE WEAPON", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 0, 0, 255, 255);
				if ((unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -3.44f, -3f), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -3.44f, -3f), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x45FAF6B9BA0DB549("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_54, 1)) < 225f)
				{
					unk_0x45FAF6B9BA0DB549("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
				{
				}
			}
		}
		if (((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_54, 1), 25f, 0)) || (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_51[0], 1), 20f, 0))) || (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_51[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
			{
				unk_0x273FE09AE985A00A(iLocal_51[0], 6, 0);
				unk_0x40E2910BAF39B1C7(iLocal_51[0], 0);
			}
			if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
			{
				unk_0x273FE09AE985A00A(iLocal_51[1], 6, 0);
				unk_0x40E2910BAF39B1C7(iLocal_51[1], 0);
			}
		}
	}
}

int func_143()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304())) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) - unk_0x761660F5CE986DC4(iLocal_54, 1) };
		Var3 = { unk_0x9B40AD9E8738972C(iLocal_54) };
		Var6 = { unk_0xCC9FF9C751023D2A(iLocal_54, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iLocal_54) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iLocal_54)) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iLocal_51[0])) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iLocal_51[1]))) && unk_0x36E1A96E1D63ED91(unk_0x828D7620A6039793(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x828D7620A6039793(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_144()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if ((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, 2.7f, 7f, -2f), unk_0x0AF3D0AB54EA2104(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, -2.7f, 7f, -2f), unk_0x0AF3D0AB54EA2104(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 7f, -2f), unk_0x0AF3D0AB54EA2104(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145()
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
			{
				iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A()))
		{
			iVar0 = unk_0x952F33F151D40D1A();
		}
		if (unk_0x31F12808DC47A9E5(iVar0) && unk_0x31F12808DC47A9E5(iLocal_54))
		{
			return ((unk_0xC4B84EB67F78C1F0(iVar0, 0) && unk_0x8D11942CD2B49BB5(iVar0, iLocal_54)) && unk_0x2A72627520A107B5(iVar0) > 10f);
		}
	}
	return 0;
}

int func_146()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[0]) || unk_0x74C2FE037DFC8B4A(iLocal_51[0], 0))
		{
			if (unk_0x1B843A60307EECA4(iLocal_51[0], unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_51[1]) || unk_0x74C2FE037DFC8B4A(iLocal_51[1], 0))
		{
			if (unk_0x1B843A60307EECA4(iLocal_51[1], unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_147()
{
	float fVar0;
	
	if ((!unk_0x0FAE113CE72ED842(iLocal_51[0]) && !unk_0x0FAE113CE72ED842(iLocal_51[1])) && unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0x79CEF243729F54F9(iLocal_54, 0) };
				Local_488 = { unk_0x26A3403C90A0B224(iLocal_54, 2) };
				Local_491 = { unk_0xC0DC85E31910C008("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0x9B53B2691E2B1F79(iLocal_54, 1084227584);
				unk_0xC8BEB049F3BFC0AB(&uLocal_58);
				unk_0x73E31FC09D8359DB(0, 5000);
				unk_0xA303A4837FBB8DDE(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0x8A32C8BCE5987E9B(0, Local_488.f_2, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_58);
				unk_0x73F69DD57B7E92A9(iLocal_51[1], uLocal_58);
				unk_0x56C7B20E11B37066(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0x79CEF243729F54F9(iLocal_54, 0) };
				Local_488 = { unk_0x26A3403C90A0B224(iLocal_54, 2) };
				Local_491 = { unk_0xC0DC85E31910C008("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0xCF0FA6AB02EA68F7(iLocal_495))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_77) < 22500f && unk_0x2CA94F9BC722F737(iLocal_54))
					{
						iLocal_495 = unk_0x3C3438327FFEB224(Local_485, Local_488, 2);
						unk_0x4DD2EB945B4192FD(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xAB888668498FCC04(iLocal_495, 1);
					}
				}
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_51[1], 242628503) != 1)
				{
					unk_0xC8BEB049F3BFC0AB(&uLocal_58);
					unk_0xA303A4837FBB8DDE(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0x8A32C8BCE5987E9B(0, Local_488.f_2, 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_58);
					unk_0x73F69DD57B7E92A9(iLocal_51[1], uLocal_58);
					unk_0x56C7B20E11B37066(&uLocal_58);
				}
				fVar0 = unk_0x93FDA3BF59E7B77F(iLocal_51[1]);
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
				if (unk_0x36E1A96E1D63ED91((fVar0 - Local_488.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_491, unk_0x761660F5CE986DC4(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0xDAA43D91610F5E2F(iLocal_51[1], -1056964608);
					unk_0x267F7A2DFDFFB077(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0x3C3438327FFEB224(Local_485, Local_488, 2);
					unk_0x4DD2EB945B4192FD(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0x2ADF31478643C93D(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0xCF0FA6AB02EA68F7(iLocal_494) && unk_0x74CE979B042A1253(iLocal_494) > 0.09f) && unk_0x74CE979B042A1253(iLocal_494) < 0.11f) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0xCF0FA6AB02EA68F7(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0x31F12808DC47A9E5(iLocal_56) && unk_0x9EE4192FE475677C(iLocal_56, iLocal_51[1])) && unk_0x74CE979B042A1253(iLocal_494) > 0.3793f)
						{
							if (!unk_0x9EE4192FE475677C(iLocal_56, iLocal_54))
							{
								unk_0x964B3F361C3DBDF4(iLocal_56, 1, 1);
								unk_0xF342BF6A7A4C7A8F(iLocal_56, 0, 0);
								unk_0x947CE5CCDDBA0651(iLocal_56, iLocal_54, 0, unk_0xCC9FF9C751023D2A(iLocal_54, unk_0x761660F5CE986DC4(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x74CE979B042A1253(iLocal_494) > 0.546243f)
					{
						unk_0xF392BEDFD9CD33F7(iLocal_54, -4f, 1);
						if (unk_0x31F12808DC47A9E5(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0xFC8F21F2629FD98F(iLocal_54, 2, 1);
							unk_0xFC8F21F2629FD98F(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0xCF0FA6AB02EA68F7(iLocal_494) && unk_0x74CE979B042A1253(iLocal_494) > 0.56f) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0xCF0FA6AB02EA68F7(iLocal_494) && unk_0x74CE979B042A1253(iLocal_494) > 0.6f) || !unk_0xCF0FA6AB02EA68F7(iLocal_494))
					{
						if (unk_0xCF0FA6AB02EA68F7(iLocal_495))
						{
							unk_0x267F7A2DFDFFB077(iLocal_51[0]);
							iLocal_495 = unk_0x3C3438327FFEB224(Local_485, Local_488, 2);
							unk_0x4DD2EB945B4192FD(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0xCF0FA6AB02EA68F7(iLocal_495) && unk_0x74CE979B042A1253(iLocal_495) >= 0.92f) || !unk_0xCF0FA6AB02EA68F7(iLocal_495))
				{
					if (!unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 0) && unk_0x2BBAA45ECDE3DAE2(iLocal_51[0], -1794415470) != 1)
					{
						unk_0x267F7A2DFDFFB077(iLocal_51[0]);
						unk_0xFDBDFC454E44A5BF(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xCF0FA6AB02EA68F7(iLocal_494) && unk_0xD55D1B0CCDF27F0C(iLocal_51[1], unk_0x6E987D62C8535B6E("ENDS_IN_WALK")))
				{
					unk_0x267F7A2DFDFFB077(iLocal_51[1]);
					unk_0xFDBDFC454E44A5BF(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0x841242FE915D0B29(iLocal_54, 0) == 0f) && unk_0x841242FE915D0B29(iLocal_54, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0xFC8F21F2629FD98F(iLocal_54, 0, 1);
					unk_0xFC8F21F2629FD98F(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0x0FAE113CE72ED842(func_3()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(func_3(), 1)) < 30f) && unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
	{
		if (unk_0x351CD242DF0BE9BA(uLocal_137))
		{
			func_62(7);
		}
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_151())
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
		else if (func_149())
		{
			func_62(2);
		}
		else if (func_148())
		{
			func_62(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_90();
			if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x981A584B2E775D45(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x267F7A2DFDFFB077(iLocal_51[0]);
						unk_0xB5746603774C4C9D(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && unk_0xCF0FA6AB02EA68F7(iLocal_494)) && !unk_0x0FAE113CE72ED842(iLocal_51[1]))
			{
				unk_0xF392BEDFD9CD33F7(iLocal_54, -1000f, 1);
				unk_0x267F7A2DFDFFB077(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0x351CD242DF0BE9BA(uLocal_137))
		{
			unk_0xFC8F21F2629FD98F(iLocal_54, 2, 1);
			unk_0xFC8F21F2629FD98F(iLocal_54, 3, 1);
		}
	}
}

int func_148()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
			{
				if (func_74(unk_0x952F33F151D40D1A()))
				{
					iLocal_55 = unk_0x952F33F151D40D1A();
					return 1;
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
		{
			if (func_74(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x64031EF2AE5F9603());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x64031EF2AE5F9603() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304())) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && (unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iLocal_51[iVar0]) || unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1)) < 9f) && !unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x0B90D19A63676F41(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_94())
	{
		return 1;
	}
	if ((func_150() || func_95()) && func_66())
	{
		if (!unk_0x88B79D32B518C327(iLocal_51[0], iLocal_54, 0) || !unk_0x88B79D32B518C327(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1);
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4())))
		{
			if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_51[0]))
				{
					if (unk_0xEA07F07380ABC460(iLocal_51[0], unk_0x18F7BE9ACB7D08F4(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x0FAE113CE72ED842(iLocal_51[1]))
				{
					if (unk_0xEA07F07380ABC460(iLocal_51[1], unk_0x18F7BE9ACB7D08F4(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && unk_0x1B843A60307EECA4(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4(), 1)) || (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && unk_0x8E6B1A41766B5731(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4()))) || unk_0x1B843A60307EECA4(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4(), 1)) || (unk_0x1B843A60307EECA4(iLocal_54, unk_0x18F7BE9ACB7D08F4(), 1) && func_66())) || unk_0x0FAE113CE72ED842(iLocal_51[iVar0])) || unk_0x74C2FE037DFC8B4A(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_144() || func_96())
	{
		return 1;
	}
	if (unk_0xC4B84EB67F78C1F0(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]))
			{
				if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()) && unk_0x422DF8890E5A5CBB(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) || unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0xC4B84EB67F78C1F0(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_54, 1), 25f, 0)) || (!unk_0x0FAE113CE72ED842(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_51[0], 1), 20f, 0))) || (!unk_0x0FAE113CE72ED842(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0x761660F5CE986DC4(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_51[iVar0]))
		{
			if ((!unk_0x0FAE113CE72ED842(iLocal_51[iVar0]) && !unk_0x74C2FE037DFC8B4A(iLocal_51[iVar0], 0)) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if ((unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1), 5f, 1) || func_31(unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0x761660F5CE986DC4(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0x1B843A60307EECA4(iLocal_51[iVar0], unk_0x18F7BE9ACB7D08F4(), 1))
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

void func_153()
{
	int iVar0;
	
	iLocal_54 = unk_0x3064CCF56C6C32BC(iLocal_104, Local_77, fLocal_80, 1, 1, 0);
	iLocal_57 = unk_0x7082ECB3731CD86C(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0x947CE5CCDDBA0651(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xA12407EB7D7CF146(iLocal_57, 0, 0);
	unk_0x0CE5BA07FA760294(iLocal_57, iLocal_54, 0);
	unk_0x9B53B2691E2B1F79(iLocal_54, 1084227584);
	unk_0xA2B45B1D3EE42178(iLocal_54, 3);
	unk_0x8BA533846256EA8E(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0xFC9BA95283E53AFD(iLocal_54, 1, 0);
	unk_0x874004759C4BE8DC(iLocal_54, 700);
	unk_0x6780B033CB86560E(iLocal_54, 0, 0);
	unk_0x503DF1366BC3493D(iLocal_54, 1, 1);
	unk_0x67004CAEC39A5A18(iLocal_54, 0);
	unk_0x116C776F8CFE5194(iLocal_54, 1);
	unk_0xEA3ACC77B4C2040A((Local_77.f_0 - 200f), (Local_77.f_1 - 200f), (Local_77.f_0 + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0xC52E83A4C0F88DAB(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0xC52E83A4C0F88DAB(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x0F3F86C855582784(iLocal_54, 1, 1, 0);
		unk_0x503DF1366BC3493D(iLocal_54, 1, 1);
	}
	else
	{
		iLocal_51[1] = unk_0x364B87C5C64BD100(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0x364B87C5C64BD100(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0x6016A20BFEAEFE11(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_79(iLocal_51[1]);
	unk_0x48E76A4B7B58B77A("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0xD592E5486B0119A2(iLocal_51[iVar0], 0);
		unk_0x273FE09AE985A00A(iLocal_51[iVar0], 1, 0);
		unk_0x273FE09AE985A00A(iLocal_51[iVar0], 13, 0);
		unk_0x273FE09AE985A00A(iLocal_51[iVar0], 6, 1);
		unk_0x273FE09AE985A00A(iLocal_51[iVar0], 8, 0);
		unk_0x273FE09AE985A00A(iLocal_51[iVar0], 10, 1);
		unk_0x470C9634914699C0(iLocal_51[iVar0], 512, 1);
		unk_0x764AFC5A3A16C2B0(iLocal_51[iVar0], 118, 0);
		unk_0x470C9634914699C0(iLocal_51[iVar0], 128, 1);
		unk_0xFE6A6646619C0AED(iLocal_51[iVar0], 0);
		unk_0xFC9BA95283E53AFD(iLocal_51[iVar0], 1, 0);
		unk_0xEE12C3935551C9B1(iLocal_51[iVar0], 1);
		unk_0xD60265036564F81C(iLocal_51[iVar0], 1);
		unk_0x7D154B840BD03D00(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x641E77554763EF06(iLocal_51[iVar0], iLocal_66);
		unk_0x10F31830C95ED2E5(iLocal_51[iVar0], 1);
		unk_0xC74F690FB603E9C5(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0x503DF1366BC3493D(iLocal_51[1], 1, 1);
	unk_0xFB5F4D76105A21B5(1, joaat("COP"), iLocal_66);
	unk_0xFB5F4D76105A21B5(1, iLocal_66, joaat("COP"));
	unk_0xFB5F4D76105A21B5(2, iLocal_66, joaat("player"));
	unk_0xFB5F4D76105A21B5(2, joaat("player"), iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0xD8D896F64358DA36(iLocal_51[0], 0, 1, 0, 0);
		unk_0xB2A4C6D6B4409A15(iLocal_51[0], 0);
		unk_0xD8D896F64358DA36(iLocal_51[1], 0, 1, 0, 0);
		unk_0xB2A4C6D6B4409A15(iLocal_51[1], 0);
	}
	if (func_11() == 0 && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_68(&Local_140, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_68(&Local_140, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_68(&Local_140, 2, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	func_68(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_68(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0x116D235ABEF5CE46(iLocal_104, 1);
	unk_0xB2EF92AE2CB97F2F(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_154(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

bool func_155()
{
	func_163(&uLocal_317, iLocal_103);
	func_163(&uLocal_317, iLocal_104);
	func_163(&uLocal_317, iLocal_105);
	func_161(&uLocal_317, "random@security_van");
	func_161(&uLocal_317, "weapons@holster_1h");
	func_161(&uLocal_317, "move_injured_generic");
	func_160(&uLocal_317, 3);
	return func_156(&uLocal_317);
}

int func_156(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_157(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_157(var uParam0)
{
	return func_158(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_158(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xB03A1684359C50A1(iParam0, 30))
	{
		if (unk_0xB03A1684359C50A1(iParam0, 29))
		{
			switch (func_159(iParam0))
			{
				case 0:
					return unk_0xEDFE27D1AEA0EA7F(uParam2);
					break;
				
				case 1:
					return unk_0x028356968FDD2DF2(uParam1);
					break;
				
				case 2:
					return unk_0x302010EE1D40EBC3(uParam1);
					break;
				
				case 3:
					return unk_0x1865CC0DAB5F6A86(sParam1);
					break;
				
				case 4:
					return unk_0x53500A7D168BF5F6(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x9BE1DFFE71D3D3DA(sParam1);
					break;
				
				case 6:
					return unk_0xFF22FE9205F44FB6(sParam1, unk_0xB03A1684359C50A1(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x943750A69922D35E(uParam2);
					break;
				
				case 8:
					return unk_0x9F22E45F3CF7EACA(uParam2);
					break;
				
				case 9:
					return unk_0x8851E7053F291F92();
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

int func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB03A1684359C50A1(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_161(var uParam0, char* sParam1)
{
	func_162(uParam0, 1, -1, sParam1, 0);
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x9D39145AD645E383(sParam3, "NULL"))
					{
						if (unk_0x9D39145AD645E383(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*18*/], iParam1);
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_163(var uParam0, int iParam1)
{
	func_162(uParam0, 0, iParam1, "NULL", 0);
}

int func_164()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_165(float fParam0, bool bParam1)
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
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_166(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
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

void func_166(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_167(uParam1, "Abigail1", func_169(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 1:
			func_167(uParam1, "Abigail2", func_169(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 2:
			func_167(uParam1, "Barry1", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 3:
			func_167(uParam1, "Barry2", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 4:
			func_167(uParam1, "Barry3", func_169(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 5:
			func_167(uParam1, "Barry3A", func_169(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 6:
			func_167(uParam1, "Barry3C", func_169(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 7:
			func_167(uParam1, "Barry4", func_169(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_168(iParam0), 0, 0);
			break;
		
		case 8:
			func_167(uParam1, "Dreyfuss1", func_169(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 9:
			func_167(uParam1, "Epsilon1", func_169(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 10:
			func_167(uParam1, "Epsilon2", func_169(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 11:
			func_167(uParam1, "Epsilon3", func_169(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 12:
			func_167(uParam1, "Epsilon4", func_169(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 13:
			func_167(uParam1, "Epsilon5", func_169(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 14:
			func_167(uParam1, "Epsilon6", func_169(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 15:
			func_167(uParam1, "Epsilon7", func_169(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 16:
			func_167(uParam1, "Epsilon8", func_169(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 17:
			func_167(uParam1, "Extreme1", func_169(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 18:
			func_167(uParam1, "Extreme2", func_169(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 19:
			func_167(uParam1, "Extreme3", func_169(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 20:
			func_167(uParam1, "Extreme4", func_169(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 21:
			func_167(uParam1, "Fanatic1", func_169(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 22:
			func_167(uParam1, "Fanatic2", func_169(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 23:
			func_167(uParam1, "Fanatic3", func_169(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_168(iParam0), 0, 1);
			break;
		
		case 24:
			func_167(uParam1, "Hao1", func_169(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_168(iParam0), 0, 1);
			break;
		
		case 25:
			func_167(uParam1, "Hunting1", func_169(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 26:
			func_167(uParam1, "Hunting2", func_169(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 27:
			func_167(uParam1, "Josh1", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 28:
			func_167(uParam1, "Josh2", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 29:
			func_167(uParam1, "Josh3", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 30:
			func_167(uParam1, "Josh4", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 31:
			func_167(uParam1, "Maude1", func_169(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 32:
			func_167(uParam1, "Minute1", func_169(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 33:
			func_167(uParam1, "Minute2", func_169(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 34:
			func_167(uParam1, "Minute3", func_169(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 35:
			func_167(uParam1, "MrsPhilips1", func_169(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 36:
			func_167(uParam1, "MrsPhilips2", func_169(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 37:
			func_167(uParam1, "Nigel1", func_169(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 38:
			func_167(uParam1, "Nigel1A", func_169(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 39:
			func_167(uParam1, "Nigel1B", func_169(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 40:
			func_167(uParam1, "Nigel1C", func_169(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 41:
			func_167(uParam1, "Nigel1D", func_169(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 42:
			func_167(uParam1, "Nigel2", func_169(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 43:
			func_167(uParam1, "Nigel3", func_169(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 44:
			func_167(uParam1, "Omega1", func_169(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 45:
			func_167(uParam1, "Omega2", func_169(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 46:
			func_167(uParam1, "Paparazzo1", func_169(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 47:
			func_167(uParam1, "Paparazzo2", func_169(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 48:
			func_167(uParam1, "Paparazzo3", func_169(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 49:
			func_167(uParam1, "Paparazzo3A", func_169(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 50:
			func_167(uParam1, "Paparazzo3B", func_169(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 51:
			func_167(uParam1, "Paparazzo4", func_169(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 52:
			func_167(uParam1, "Rampage1", func_169(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 54:
			func_167(uParam1, "Rampage3", func_169(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 55:
			func_167(uParam1, "Rampage4", func_169(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 56:
			func_167(uParam1, "Rampage5", func_169(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 53:
			func_167(uParam1, "Rampage2", func_169(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 57:
			func_167(uParam1, "TheLastOne", func_169(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 58:
			func_167(uParam1, "Tonya1", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 59:
			func_167(uParam1, "Tonya2", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 60:
			func_167(uParam1, "Tonya3", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 61:
			func_167(uParam1, "Tonya4", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 62:
			func_167(uParam1, "Tonya5", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_167(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_168(int iParam0)
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

struct<2> func_169(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_170(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_170(int iParam0)
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

int func_171()
{
	if (func_174() && !func_175())
	{
		return 1;
	}
	if (func_173() && func_172())
	{
		return 1;
	}
	return 0;
}

bool func_172()
{
	return Global_104269 > 0;
}

int func_173()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_175()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_176()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if ((Global_104540 == func_59() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

void func_178(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x756DE011CEDBBD7E() >= (uParam0->f_146 + uParam0->f_147) || unk_0xB03A1684359C50A1(Global_92829.f_20, 2)) || unk_0xB03A1684359C50A1(Global_92829.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 29))
					{
						func_179(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x756DE011CEDBBD7E();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_179(var uParam0)
{
	func_180(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_180(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 30))
	{
		switch (func_159(*uParam0))
		{
			case 0:
				unk_0x9016574B77A748EE(uParam2);
				break;
			
			case 1:
				unk_0x831CD0FBFB26EC7E(uParam1);
				break;
			
			case 2:
				unk_0x385AB5B1656B03B3(uParam1);
				break;
			
			case 3:
				unk_0x1E7BE791ACBDDC05(uParam1, unk_0xB03A1684359C50A1(*uParam0, 28));
				break;
			
			case 4:
				unk_0xAE5F484E08487A0F(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x556D5BBBB0AC3BCB(uParam1);
				break;
			
			case 6:
				unk_0xFF22FE9205F44FB6(uParam1, unk_0xB03A1684359C50A1(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xEB608F49F9230874(uParam2);
				break;
			
			case 8:
				unk_0x8E058779F430F4D7(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xF43D99776B580DA7();
				break;
			
			default:
				break;
		}
		unk_0xD2A9C3F486236CC5(uParam0, 29);
	}
}

void func_181()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0x61E9B3BFA06B017B(3000, 8000);
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

void func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_183();
}

void func_183()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

void func_184(int iParam0)
{
	Global_104540 = iParam0;
}

int func_185(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
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
		if (!func_224())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_175())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_165(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_221(func_11()) == 4 || func_221(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_220(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_218())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_210(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_209(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_209(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_222(30) && !func_209(30, 0))
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
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_208(iVar8))
				{
					if (func_186(iVar4))
					{
						if (!func_128(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
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

bool func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_187(iVar0);
}

int func_187(int iParam0)
{
	return func_188(iParam0, 1);
}

int func_188(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_208(iParam0))
	{
		return 0;
	}
	func_189(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_190(func_201(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(iParam0, iParam1))
	{
		iVar0 = func_199(iParam1);
		iVar1 = func_197(iParam0);
		iVar2 = (func_197(iParam0) - func_197(iParam1));
		iVar3 = (func_199(iParam0) - func_199(iParam1));
		iVar4 = (func_196(iParam0) - func_196(iParam1));
		iVar5 = (func_195(iParam0) - func_195(iParam1));
		iVar6 = (func_194(iParam0) - func_194(iParam1));
		iVar7 = (func_193(iParam0) - func_193(iParam1));
	}
	else
	{
		iVar0 = func_199(iParam0);
		iVar1 = func_197(iParam1);
		iVar2 = (func_197(iParam1) - func_197(iParam0));
		iVar3 = (func_199(iParam1) - func_199(iParam0));
		iVar4 = (func_196(iParam1) - func_196(iParam0));
		iVar5 = (func_195(iParam1) - func_195(iParam0));
		iVar6 = (func_194(iParam1) - func_194(iParam0));
		iVar7 = (func_193(iParam1) - func_193(iParam0));
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
		iVar4 = (iVar4 + func_192(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_191(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_191(float fParam0, float fParam1, float fParam2)
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

int func_192(int iParam0, int iParam1)
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

int func_193(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_194(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_196(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_197(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_198(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_199(int iParam0)
{
	return iParam0 & 15;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_208(iParam1) || !func_208(iParam0))
	{
		return 1;
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
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	var uVar0;
	
	func_207(&uVar0, unk_0xB093145A4ED05C87());
	func_206(&uVar0, unk_0x4BF279EB036481A0());
	func_205(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_204(&uVar0, unk_0x518720E0DE404FFC());
	func_203(&uVar0, unk_0x5E3E9A684A609866());
	func_202(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_202(var uParam0, int iParam1)
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

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_197(*uParam0);
	if (iParam1 < 1 || iParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_208(int iParam0)
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
	iVar0 = func_193(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_194(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_195(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_197(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_199(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_196(iParam0);
	if (iVar5 < 1 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
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
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_1()) || Global_103598) || Global_25235) || func_217()) || func_18(8, -1)) || func_216()) || func_215()) || func_214()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_1()) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_1()) || Global_103598) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_1()) || Global_103598) || Global_25235) || func_217()) || func_18(8, -1)) || func_216()) || func_215()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_18(8, -1)) || func_213()) || func_212()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_216()) || func_215()) || func_212()) || func_211())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_1()) || Global_25235) || func_217()) || func_18(8, -1)) || func_215()) || func_214()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_1()) || func_215()) || Global_103598) || Global_25235) || func_217()) || Global_36991) || func_18(8, -1)) || func_214()) || func_212()) || func_213()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_1()) || Global_103598) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_212()) || func_216()) || func_215()) || func_213())
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

var func_211()
{
	return Global_92868.f_1;
}

int func_212()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_213()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	return Global_92881.f_316 > 0;
}

bool func_216()
{
	return Global_92881.f_315 > 0;
}

var func_217()
{
	return Global_1312854;
}

int func_218()
{
	func_10();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)
{
	return func_200(func_201(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
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

int func_221(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_222(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_223()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()
{
	if (func_177())
	{
		if (unk_0x351CD242DF0BE9BA(uLocal_137))
		{
			if (unk_0xE769D9B5158D0F11(uLocal_64))
			{
				unk_0x40D517D991458154(&uLocal_64);
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_57))
		{
			unk_0x5BE35A26B9097351(&iLocal_57);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_56))
		{
			if (unk_0xD76674575E7BA743(iLocal_56))
			{
				unk_0x5BE35A26B9097351(&iLocal_56);
			}
			else
			{
				unk_0xF0862FA354B164C4(&iLocal_56);
			}
		}
		unk_0x419C9117019F2E5A(iLocal_104);
		unk_0x419C9117019F2E5A(iLocal_103);
		unk_0x419C9117019F2E5A(iLocal_105);
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0xB2EF92AE2CB97F2F(iLocal_103, 0);
		unk_0x116D235ABEF5CE46(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0xD59E155864F4A591(iLocal_131);
	}
	unk_0x7E1D02126DA8A751(uLocal_65, 0);
	func_129(&uLocal_305, 0, 0);
	func_231(-1);
	func_226(&uLocal_317, 0);
	unk_0x810C5D6462DD69E6();
}

void func_226(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_228(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_227(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_227(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*18*/], 30))
		{
			func_229(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_229(var uParam0)
{
	func_230(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_230(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(iParam0, 30))
	{
		switch (func_159(iParam0))
		{
			case 0:
				unk_0x419C9117019F2E5A(uParam2);
				break;
			
			case 1:
				unk_0x334F1DD67B2EC86A(uParam1);
				break;
			
			case 2:
				unk_0xB7B15F3C9DD17B22(uParam1);
				break;
			
			case 3:
				unk_0x1D492DC0B64A955F(uParam1);
				break;
			
			case 4:
				unk_0xFD32699B58C2E7EF(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x8E7D27D1F47D1D08(uParam1);
				break;
			
			case 6:
				unk_0x6279F6030B6B0475();
				break;
			
			case 7:
				unk_0x2009DF0140702794(iParam2);
				break;
			
			case 8:
				unk_0x000ED7BEBF44F5EA(iParam2, unk_0xB03A1684359C50A1(iParam0, 26));
				break;
			
			case 9:
				unk_0xDB38C3D40ACF4B3D();
				break;
			
			default:
				break;
		}
	}
}

void func_231(int iParam0)
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
	if (func_177())
	{
		func_235(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_104540, 1), 64);
		if (func_58(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_232(&Global_25292);
	Global_104541 = 0;
	func_184(-1);
}

void func_232(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

char* func_233(int iParam0, bool bParam1)
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

void func_234(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_235(int iParam0)
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_201();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_193(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_197(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_199(*uParam0);
	iVar2 = func_196(*uParam0);
	iVar3 = func_195(*uParam0);
	iVar4 = func_194(*uParam0);
	iVar5 = func_193(*uParam0);
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
	iVar6 = func_192(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, iParam1);
	func_206(uParam0, iParam2);
	func_205(uParam0, iParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, iParam4);
	func_202(uParam0, iParam6);
}

int func_241(int iParam0)
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

int func_242(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x74B8CA477787A438(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x74B8CA477787A438(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x74B8CA477787A438(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x74B8CA477787A438(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x74B8CA477787A438(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x74B8CA477787A438(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x74B8CA477787A438(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x74B8CA477787A438(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x74B8CA477787A438(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x74B8CA477787A438(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

