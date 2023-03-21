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
		unk_0xA232817B0B36F2E5();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0xA232817B0B36F2E5();
		}
	}
	else
	{
		if (unk_0x78BF2001491914AC(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
				{
					if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
					{
						if (!unk_0x5B9B499C707C2A95(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0xA6AC097BEBB7B1F0(iLocal_51[iVar0], iLocal_54, -1, func_238(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0xD605CAC9F8611B4D(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_221();
		}
		if (!func_181(Local_87, 9, iLocal_47, 1, 0))
		{
			unk_0xA232817B0B36F2E5();
		}
		else
		{
			func_178(-1);
		}
	}
	func_177();
	uLocal_65 = unk_0x25118499AB6F447B(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_174(&uLocal_317);
		if (!func_173())
		{
			if (func_172())
			{
				func_221();
			}
			unk_0xE57EE82872DC7A9F("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0xC6D11983DAD48A48() && !func_160())
					{
						if (func_151())
						{
							if ((iLocal_46 == 3 && !(unk_0x14CEA5D3B9541B99(Local_77, 3f) && func_150(unk_0x2A5EB8B0FE590B91(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x14CEA5D3B9541B99(Local_77, 8f))
									{
										unk_0x333EF04F1A5ADEB5(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_149();
								if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0xDFFEF66D82BDA05C(iLocal_54, 5f);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_221();
					}
					break;
				
				case 1:
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && unk_0x7FAC45D56235AB39(iLocal_54, 0))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) < 10000f || !unk_0x812A9839F66D4B43(iLocal_54)) || (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x812A9839F66D4B43(iLocal_51[0]))) || (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0x812A9839F66D4B43(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_148())
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
							func_143();
						}
					}
					if (unk_0x2137828D03306CAF(iLocal_54) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (iLocal_46 == 3)
						{
							func_138();
							if (!unk_0x812A9839F66D4B43(iLocal_54) && (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < 100f || func_148()))
							{
								func_129(1);
							}
						}
						else if (((!unk_0x812A9839F66D4B43(iLocal_54) && iLocal_48 == 4) || unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_148())
						{
							func_129(1);
						}
						if ((iLocal_48 == 4 && unk_0x812A9839F66D4B43(iLocal_54)) && iLocal_46 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) > 100f)
							{
								func_221();
							}
							else
							{
								func_129(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0x812A9839F66D4B43(iLocal_54))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) > 62500f)
					{
						func_221();
					}
					if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) > 10000f && !unk_0xC6D11983DAD48A48())
					{
						func_221();
					}
				}
			}
		}
		else
		{
			unk_0x0EA9C6F829566CB7(unk_0x0FFED3E94261A832());
			if (!unk_0xBDD3EABACAB97D09(uLocal_63))
			{
				if (!func_128(2) && !bLocal_114)
				{
					if (!unk_0x6235C49EA2DBA22D())
					{
						func_127("SV_VANHELP1", 15000);
						func_126(2);
					}
				}
				if (unk_0x2137828D03306CAF(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_56, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 0;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0x0BF40BFCD677686E(uLocal_137)) && unk_0x7FAC45D56235AB39(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 1;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0x0BF40BFCD677686E(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x6DB9E754798EC35C(uLocal_137), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = 2;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0x2137828D03306CAF(iLocal_56))
					{
						func_118(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_56, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 1))
					{
						func_118(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0x0BF40BFCD677686E(uLocal_137))
					{
						func_99(&uLocal_305, unk_0x6DB9E754798EC35C(uLocal_137), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x6DB9E754798EC35C(uLocal_137), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_511 = -1;
							func_125(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0xA9A04898798AE9E6(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_128(0) || (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_stickybomb"), 0) && !func_128(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0x6235C49EA2DBA22D() && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < 225f)
							{
								func_127("SV_DOORHELP1", 15000);
								func_126(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0x6235C49EA2DBA22D())
							{
								iLocal_135 = unk_0x3732B96D7A1859B4();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x3732B96D7A1859B4() - iLocal_135) > 2000 && unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_stickybomb"), 0))
							{
								func_127("SV_DOORHELP2", 15000);
								func_126(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_98("SV_DOORHELP1") || func_98("SV_DOORHELP2"))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_143();
					break;
				
				case 2:
					func_90();
					break;
				
				case 3:
					func_88();
					break;
				
				case 4:
					func_138();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
					{
						if (unk_0xDA5C54A6A05A8C8D(iLocal_51[0]) != 3)
						{
							unk_0xBD80FA58B5BBBAF4(iLocal_51[0], 3);
						}
					}
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
					{
						if (unk_0xDA5C54A6A05A8C8D(iLocal_51[1]) != 3)
						{
							unk_0xBD80FA58B5BBBAF4(iLocal_51[1], 3);
						}
					}
					if (((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0xA9A04898798AE9E6(iLocal_51[0], 0)) && !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && !unk_0xA9A04898798AE9E6(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_73(iLocal_51[1]);
						func_71(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0x769F0F6444C1ABE0(iLocal_51[1]) || unk_0xA9A04898798AE9E6(iLocal_51[1], 0))
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
						if (unk_0x769F0F6444C1ABE0(iLocal_51[0]) || unk_0xA9A04898798AE9E6(iLocal_51[0], 0))
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
					func_221();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x8F8E5C33266ED978(iLocal_54, -1, 0) == unk_0x2A5EB8B0FE590B91()) && !bLocal_113) && iLocal_48 != 8)
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
				if (unk_0xAEF0E480E33587E6(iLocal_66, joaat("player")) != 5)
				{
					unk_0x3A8EFBE4AB457FE2(5, iLocal_66, joaat("player"));
					unk_0x3A8EFBE4AB457FE2(5, joaat("player"), iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0x0BF40BFCD677686E(uLocal_137) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0x6DB9E754798EC35C(uLocal_137)) > 250f)
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
				if (unk_0x2137828D03306CAF(iLocal_51[iVar2]))
				{
					if ((!unk_0xA9A04898798AE9E6(iLocal_51[iVar2], 0) && !unk_0x769F0F6444C1ABE0(iLocal_51[iVar2])) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_51[0], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x2137828D03306CAF(iLocal_54))
				{
					if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
					{
						if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 10000f && unk_0x812A9839F66D4B43(iLocal_54)) || unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 62500f)
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
				iLocal_127 = unk_0x3732B96D7A1859B4();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x3732B96D7A1859B4() - iLocal_127) > 5000)
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 2, 0);
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
		if (((unk_0x3732B96D7A1859B4() - iLocal_127) > 10000 && unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x895FB9FE885E36ED(0, 3);
			if (iVar4 == 0)
			{
				unk_0x74A5A7443264D9EE("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x74A5A7443264D9EE("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x74A5A7443264D9EE("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(func_3(), 1)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
					{
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 2, 0);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
					}
					unk_0xAB7673E0CB07892B(unk_0x0FFED3E94261A832(), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1));
				}
			}
		}
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0 && func_2())
		{
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 2, 0);
			unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xB2C6EB7B345D25EC(iLocal_54, 0) > 0f || unk_0xB2C6EB7B345D25EC(iLocal_54, 1) > 0f)
			{
				if (unk_0xEC63E312ACFB2C99(iLocal_54) == 3)
				{
					unk_0xD1A53D507962BF1F(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xB2C6EB7B345D25EC(iLocal_54, 0) == 0f && unk_0xB2C6EB7B345D25EC(iLocal_54, 1) == 0f)
				{
					if (unk_0xEC63E312ACFB2C99(iLocal_54) == 1)
					{
						unk_0xD1A53D507962BF1F(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0x945CEEA33F8631DD(iLocal_131);
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar5]) && !unk_0xA9A04898798AE9E6(iLocal_51[iVar5], 0))
				{
					if (unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x74F4D06625A95FE9(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x74F4D06625A95FE9(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x74F4D06625A95FE9(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x74F4D06625A95FE9(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x09A26025E0F821B1(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0x93C3E0DB435FCD13(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 0, -1056964608);
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 0, -1056964608);
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 0, -1056964608);
							unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x09A26025E0F821B1(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0x93C3E0DB435FCD13(iLocal_51[iVar5], 1);
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
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 0, -1056964608);
						unk_0xEFFFE2443E196C45(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0x2137828D03306CAF(iLocal_56) && unk_0xED01C551E3A161C0(iLocal_56)) && !unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130])) && !unk_0x453DB1DBE5D81637(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0x453DB1DBE5D81637(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x453DB1DBE5D81637(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xF1C3427BFED79E6B(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0x2137828D03306CAF(iLocal_54))
			{
				if (unk_0xE8594BE97055E9A1(iLocal_54, unk_0x2A5EB8B0FE590B91(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0x869E3FDF7FDABA6A(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && (((unk_0x7FAC45D56235AB39(iLocal_54, 0) && bLocal_114) && unk_0x0BF40BFCD677686E(uLocal_137)) || (!unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0x0BF40BFCD677686E(uLocal_137)))) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) < 20f) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0x6DB9E754798EC35C(uLocal_137)) < 20f)
	{
		iVar1 = unk_0x28853F6929258930(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x769F0F6444C1ABE0(iVar1))
		{
			if (unk_0xD3B21CE53AA7BE51(iVar1) == joaat("s_m_y_cop_01") || unk_0xD3B21CE53AA7BE51(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x28853F6929258930(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x769F0F6444C1ABE0(iVar1))
		{
			if (unk_0xD3B21CE53AA7BE51(iVar1) == joaat("s_m_y_cop_01") || unk_0xD3B21CE53AA7BE51(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x4A60AEEC5C07D641(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), fVar0, 0, 1024);
		if (unk_0x7FAC45D56235AB39(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x4A60AEEC5C07D641(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), fVar0, 0, 1024);
		if (unk_0x7FAC45D56235AB39(iVar2, 0))
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1));
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_6();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_7()
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

int func_8()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14443 = func_11();
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

int func_11()
{
	func_12();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_15(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_14(unk_0x2A5EB8B0FE590B91());
			if (func_13(iVar0) && (!func_16(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_13(Global_103236.f_2164.f_539.f_4301))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[0], 1));
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1));
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0x2137828D03306CAF(iLocal_51[iVar1]))
			{
				if (((!unk_0x769F0F6444C1ABE0(iLocal_51[iVar1]) && unk_0xE8594BE97055E9A1(iLocal_51[iVar1], unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x769F0F6444C1ABE0(iLocal_51[iVar1])) || unk_0xA9A04898798AE9E6(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && iLocal_116)
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
			if (unk_0x2137828D03306CAF(iLocal_56))
			{
				if (!unk_0xED01C551E3A161C0(iLocal_56))
				{
					unk_0xBE35B7268C680A20(&iLocal_56);
					if (!unk_0x0BF40BFCD677686E(uLocal_137) && !bLocal_111)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x3732B96D7A1859B4() - iLocal_136) > 3000)
				{
					if (unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]) || unk_0x62F5757271CA0B05(iLocal_51[iLocal_130]))
					{
						unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
						iLocal_136 = unk_0x3732B96D7A1859B4();
					}
				}
			}
			else if (!unk_0x0BF40BFCD677686E(uLocal_137))
			{
				if (unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]) || ((!unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]) && unk_0x62F5757271CA0B05(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x2137828D03306CAF(iLocal_56))
		{
			unk_0xBE35B7268C680A20(&iLocal_56);
		}
		if (unk_0x0BF40BFCD677686E(uLocal_137))
		{
			unk_0x3282EED5CD1F19DB(uLocal_137);
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
				Param0 = { unk_0xD1DD9E0C094C8224(unk_0x82D9CF397BA8C885(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xD1DD9E0C094C8224(unk_0xD1EE0E9FCD74A37B(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0xF6082E2ADA1C795B(&uLocal_138, 3);
		unk_0xF6082E2ADA1C795B(&uLocal_138, 4);
		unk_0xF6082E2ADA1C795B(&uLocal_138, 1);
		if (bParam3)
		{
			uLocal_137 = unk_0x3983F27697F8C8F6(joaat("pickup_money_security_case"), Param0, unk_0x37C8136AF6C0BC9B(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x3870C683DB87CF73(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0xBDD3EABACAB97D09(uLocal_64))
		{
			uLocal_64 = func_25(uLocal_137);
		}
		if (unk_0x2137828D03306CAF(iLocal_56))
		{
			unk_0xBE35B7268C680A20(&iLocal_56);
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
	
	if (!unk_0x0BF40BFCD677686E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE00666690A9B6DD3(uParam0);
	unk_0x0B584E556B01101F(uVar0, func_27(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
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
		if (unk_0x2137828D03306CAF(iLocal_57))
		{
			unk_0xE90B4C21E7E6817C(iLocal_54, 2, 0, 0);
			unk_0xE90B4C21E7E6817C(iLocal_54, 3, 0, 0);
			if (unk_0x2137828D03306CAF(iLocal_57))
			{
				unk_0xBE35B7268C680A20(&iLocal_57);
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
			if (unk_0xB2C6EB7B345D25EC(iLocal_54, 2) == 0f && unk_0xB2C6EB7B345D25EC(iLocal_54, 3) == 0f)
			{
				if (unk_0x2137828D03306CAF(iLocal_56))
				{
					if (unk_0xED01C551E3A161C0(iLocal_56))
					{
						unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
					}
					unk_0x5DAB197A499B8499(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0xA9A04898798AE9E6(iLocal_54, 0))
				{
					if (((unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0xB2C6EB7B345D25EC(iLocal_54, 2) > 0.25f) && unk_0xB2C6EB7B345D25EC(iLocal_54, 3) > 0.25f) || !unk_0x7FAC45D56235AB39(iLocal_54, 0))
					{
						if (unk_0x2137828D03306CAF(iLocal_56))
						{
							if (unk_0xED01C551E3A161C0(iLocal_56))
							{
								unk_0x52EF42797AD5A36D(unk_0x9FF6FFD9EB30D086(), "DOORS_BLOWN", unk_0x398D060E1D834545(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0xA806066ECDF61E23(iLocal_56, 1, 0);
								unk_0x81642E3BC0111BF2(iLocal_56, 1, 0);
								unk_0x435850511E04A8D1(iLocal_56);
								unk_0xC5CFF5770D08D6C9(iLocal_56, 1);
								Local_477 = { unk_0xD1EE0E9FCD74A37B(iLocal_56, 1) - unk_0xD1EE0E9FCD74A37B(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_477) > 10f)
								{
									Local_477 = { func_29(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0x748D711A16EB2994(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x3732B96D7A1859B4();
							}
							else if (unk_0xC59120BA43AEC562(unk_0xD1EE0E9FCD74A37B(iLocal_56, 1), unk_0x82D9CF397BA8C885(iLocal_54, Local_470), unk_0x82D9CF397BA8C885(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x3732B96D7A1859B4() - iLocal_476) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x2137828D03306CAF(iLocal_54))
				{
					unk_0xE90B4C21E7E6817C(iLocal_54, 2, 0, 0);
					unk_0xE90B4C21E7E6817C(iLocal_54, 3, 0, 0);
					func_24(unk_0x82D9CF397BA8C885(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_62(8);
			}
			if (unk_0x2137828D03306CAF(iLocal_56) && !unk_0x0BF40BFCD677686E(uLocal_137))
			{
				if (unk_0xD2660BAC03EB7433(iLocal_56) == 0f && (unk_0x3732B96D7A1859B4() - iLocal_476) > 1000)
				{
					func_24(unk_0xD1EE0E9FCD74A37B(iLocal_56, 1), 1);
					unk_0xBE35B7268C680A20(&iLocal_56);
				}
				else if ((unk_0x3732B96D7A1859B4() - iLocal_476) > 5000)
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
	
	if (unk_0x2137828D03306CAF(iLocal_57) && unk_0xED01C551E3A161C0(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0x4FD6F4B002CC85B3(unk_0xD1EE0E9FCD74A37B(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0xB6BD4D7F41395E57(unk_0xD1EE0E9FCD74A37B(iLocal_57, 1), 0.3f, unk_0xFD813CABE9E41119(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0xFAB03194FFF49EB5(unk_0xD1EE0E9FCD74A37B(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_57, 1), 1f, 1) || (unk_0x4A40D388873A536C(2, unk_0xD1EE0E9FCD74A37B(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0xE86A53C202B21FAB(iLocal_57) < iLocal_132 && unk_0xE8594BE97055E9A1(iLocal_57, unk_0x2A5EB8B0FE590B91(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0xE86A53C202B21FAB(iLocal_57)));
			unk_0x869E3FDF7FDABA6A(iLocal_57);
		}
		if ((unk_0x3732B96D7A1859B4() - iLocal_467) > 200 && unk_0x2137828D03306CAF(iLocal_54))
		{
			if (unk_0x557815BD0FB5253D(unk_0x82D9CF397BA8C885(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0x82D9CF397BA8C885(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0x3732B96D7A1859B4();
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
		iLocal_132 = unk_0xE86A53C202B21FAB(iLocal_57);
	}
	return 0;
}

int func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x6D554E257ADAFBBF(5, Param3, Param0) || (unk_0x6D554E257ADAFBBF(2, Param3, Param0) && !bParam10)) || (unk_0x6D554E257ADAFBBF(20, Param3, Param0) && !bParam10)) || unk_0x6D554E257ADAFBBF(4, Param3, Param0)) || (unk_0x6D554E257ADAFBBF(28, Param3, Param0) && !bParam10)) || unk_0x6D554E257ADAFBBF(32, Param3, Param0)) || unk_0x6D554E257ADAFBBF(25, Param3, Param0)) || unk_0x6D554E257ADAFBBF(9, Param3, Param0)) || (unk_0x6D554E257ADAFBBF(3, Param3, Param0) && !bParam10)) || (unk_0x6D554E257ADAFBBF(6, Param3, Param0) && !bParam10)) || unk_0x6D554E257ADAFBBF(0, Param3, Param0)) || unk_0x6D554E257ADAFBBF(1, Param3, Param0)) || unk_0x6D554E257ADAFBBF(23, Param3, Param0)) || unk_0x6D554E257ADAFBBF(34, Param3, Param0)) || unk_0x6D554E257ADAFBBF(14, Param3, Param0)) || (unk_0x6D554E257ADAFBBF(30, Param3, Param0) && !bParam10)) || (unk_0x6D554E257ADAFBBF(12, Param3, Param0) && !bParam10)) || unk_0x6D554E257ADAFBBF(7, Param3, Param0)) || (unk_0x6D554E257ADAFBBF(21, Param3, Param0) && !bParam10)) || (unk_0x6D554E257ADAFBBF(18, Param3, Param0) && !bParam10)) || unk_0x6D554E257ADAFBBF(15, Param3, Param0)) || unk_0x6D554E257ADAFBBF(10, Param3, Param0)) || unk_0x6D554E257ADAFBBF(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x4A40D388873A536C(5, Param6, iParam9) || (unk_0x4A40D388873A536C(2, Param6, iParam9) && !bParam10)) || (unk_0x4A40D388873A536C(20, Param6, iParam9) && !bParam10)) || unk_0x4A40D388873A536C(4, Param6, iParam9)) || (unk_0x4A40D388873A536C(28, Param6, iParam9) && !bParam10)) || unk_0x4A40D388873A536C(32, Param6, iParam9)) || unk_0x4A40D388873A536C(25, Param6, iParam9)) || unk_0x4A40D388873A536C(9, Param6, iParam9)) || (unk_0x4A40D388873A536C(3, Param6, iParam9) && !bParam10)) || (unk_0x4A40D388873A536C(6, Param6, iParam9) && !bParam10)) || unk_0x4A40D388873A536C(0, Param6, iParam9)) || unk_0x4A40D388873A536C(1, Param6, iParam9)) || unk_0x4A40D388873A536C(23, Param6, iParam9)) || unk_0x4A40D388873A536C(34, Param6, iParam9)) || unk_0x4A40D388873A536C(14, Param6, iParam9)) || (unk_0x4A40D388873A536C(30, Param6, iParam9) && !bParam10)) || (unk_0x4A40D388873A536C(12, Param6, iParam9) && !bParam10)) || unk_0x4A40D388873A536C(7, Param6, iParam9)) || (unk_0x4A40D388873A536C(21, Param6, iParam9) && !bParam10)) || (unk_0x4A40D388873A536C(18, Param6, iParam9) && !bParam10)) || unk_0x4A40D388873A536C(15, Param6, iParam9)) || unk_0x4A40D388873A536C(10, Param6, iParam9)) || unk_0x4A40D388873A536C(27, Param6, iParam9))
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
	
	if (!unk_0xBDD3EABACAB97D09(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && unk_0x7FAC45D56235AB39(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0xBDD3EABACAB97D09(uLocal_60[1]))
					{
						uLocal_60[1] = func_36(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_60[1]))
					{
						unk_0x789C84F1B8496AD0(&(uLocal_60[1]));
					}
					if (!unk_0xBDD3EABACAB97D09(uLocal_59))
					{
						uLocal_59 = func_34(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_60[1]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_60[1]));
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_59))
				{
					unk_0x789C84F1B8496AD0(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_60[0]) && unk_0x25B0DAFFAF8FB873(uLocal_60[0]) != 119)
			{
				unk_0x789C84F1B8496AD0(&(uLocal_60[0]));
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_60[1]) && unk_0x25B0DAFFAF8FB873(uLocal_60[1]) != 119)
			{
				unk_0x789C84F1B8496AD0(&(uLocal_60[1]));
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_59) && unk_0x25B0DAFFAF8FB873(uLocal_59) != 119)
			{
				unk_0x789C84F1B8496AD0(&uLocal_59);
			}
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
					{
						if (unk_0x5B9B499C707C2A95(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_59))
				{
					uLocal_59 = func_34(iLocal_54, 1, 0);
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_59))
			{
				unk_0x789C84F1B8496AD0(&uLocal_59);
			}
			if ((unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0xBDD3EABACAB97D09(uLocal_59)) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 0))
				{
					if (unk_0x180D385E81136C7B(uLocal_59) != 0)
					{
						unk_0x7FF3A84437112BB2(uLocal_59, 0);
					}
				}
				else if (unk_0x180D385E81136C7B(uLocal_59) != 255)
				{
					unk_0x7FF3A84437112BB2(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0x0BF40BFCD677686E(uLocal_137) && !unk_0xC4A39E4229BD3ABE(iLocal_51[iVar0], 0))
					{
						if (!unk_0xE4B596B1029F4F6A(iLocal_51[iVar0]) || unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0xC4A39E4229BD3ABE(iLocal_51[iVar0], 0))
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
					if (!unk_0xBDD3EABACAB97D09(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_36(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uLocal_60[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x0BF40BFCD677686E(uLocal_137) && !bLocal_121)
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_64))
				{
					uLocal_64 = func_26(uLocal_137);
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_64))
			{
				unk_0x789C84F1B8496AD0(&uLocal_64);
			}
		}
	}
	else if ((unk_0x2137828D03306CAF(iLocal_54) && unk_0x2137828D03306CAF(iLocal_51[0])) && unk_0x2137828D03306CAF(iLocal_51[1]))
	{
		if ((((((!unk_0x812A9839F66D4B43(iLocal_54) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x812A9839F66D4B43(iLocal_51[0]) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x812A9839F66D4B43(iLocal_51[1]) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x789C84F1B8496AD0(&uLocal_63);
		}
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_60[0]))
	{
		unk_0xE1E81CBB89115254(uLocal_60[0], iLocal_122);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_60[1]))
	{
		unk_0xE1E81CBB89115254(uLocal_60[1], iLocal_122);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_59))
	{
		unk_0xE1E81CBB89115254(uLocal_59, iLocal_122);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_64))
	{
		unk_0xE1E81CBB89115254(uLocal_64, iLocal_122);
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
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_27(unk_0x591AF4C50B46E014(), 1f, 1f));
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
		unk_0x0B584E556B01101F(uVar0, func_27(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_27(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_36(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
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
	func_221();
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
			Global_103236.f_24776.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_103224 = iParam1;
		if (Global_103222 == 0)
		{
			if (((Global_103225 == 1 || Global_103225 == 5) || Global_103225 == 11) || Global_103225 == 25)
			{
				func_40(2);
			}
			else if ((Global_103225 == 26 || Global_103225 == 8) || Global_103225 == 17)
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
	Global_103222 = iParam0;
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
		Global_103236.f_9975[iParam0 /*12*/].f_10 = uParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = uParam2;
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
		func_46(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_45() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

int func_45()
{
	return Global_25222;
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_48();
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

int func_48()
{
	return Global_1312735;
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_20191.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
	switch (Global_103236.f_2164.f_539.f_4301)
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
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20191.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xFABF5258A318B1DC(), 64);
	uVar16 = func_60(Var0);
	return uVar16;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam0))
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
		if (unk_0xAD910300E4B4553D(uLocal_137))
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
	if (!unk_0x0BF40BFCD677686E(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
			{
				if (!func_64(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x3732B96D7A1859B4();
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
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]))
				{
					if (!func_64(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x3732B96D7A1859B4();
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
			if ((unk_0x3732B96D7A1859B4() - iLocal_465) > 3000)
			{
				unk_0x6C559FCFFD2365CB(&(iLocal_51[0]));
				unk_0x6C559FCFFD2365CB(&(iLocal_51[1]));
				unk_0x860D46ACBCB64ED9(iLocal_54, -1000f, 1);
				unk_0x81642E3BC0111BF2(iLocal_54, 1, 0);
				unk_0xFECCD8AF38671477(&iLocal_54);
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
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && unk_0x2A488C176D52CCA5(unk_0x6DB9E754798EC35C(uLocal_137), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x812A9839F66D4B43(iParam0) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam0, 1)) < 300f)
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
		iLocal_507 = unk_0x3732B96D7A1859B4();
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
				{
					if (func_21() < 30f && !unk_0x769F0F6444C1ABE0(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && unk_0x2137828D03306CAF(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0x654FFF4D16298AC5(iLocal_51[iVar0]);
							unk_0x219EE6A7B599E7DC(&uLocal_58);
							if (unk_0xC4A39E4229BD3ABE(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x0C709135471077E2("move_injured_generic"))
									{
										unk_0x1241657DD24F3387(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0x8F2751B831A7B303(0, 0, 256);
							}
							unk_0xAF2C217E49954DFD(0);
							if (iLocal_118[iVar0])
							{
								unk_0xD605CAC9F8611B4D(0, unk_0x895FB9FE885E36ED(1000, 3000));
							}
							unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
							unk_0xBD718C5BA2122192(uLocal_58);
							unk_0x234E551BB8E8813B(iLocal_51[iVar0], uLocal_58);
							unk_0xEDD36C58DDE03C8F(&uLocal_58);
						}
						unk_0x89AEA58335779997(iLocal_51[iVar0], 6, 0);
						unk_0x89AEA58335779997(iLocal_51[iVar0], 0, 1);
						unk_0x89AEA58335779997(iLocal_51[iVar0], 1, 0);
						unk_0xB5AEEE6CCF634ECA(iLocal_51[iVar0], 1);
						unk_0x0E05C8E294DD31A1(iLocal_51[iVar0], 1);
						unk_0x4C47904AE69D7393(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x2137828D03306CAF(iLocal_56) && unk_0xED01C551E3A161C0(iLocal_56)) && !unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]))
				{
					unk_0x654FFF4D16298AC5(iLocal_51[iLocal_130]);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]))
					{
						unk_0x654FFF4D16298AC5(iLocal_51[iLocal_130]);
						unk_0x219EE6A7B599E7DC(&uLocal_58);
						if (unk_0xC4A39E4229BD3ABE(iLocal_51[iLocal_130], 0))
						{
							unk_0x8F2751B831A7B303(0, 0, 256);
						}
						unk_0xAF2C217E49954DFD(0);
						unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
						unk_0xBD718C5BA2122192(uLocal_58);
						unk_0x234E551BB8E8813B(iLocal_51[iLocal_130], uLocal_58);
						unk_0xEDD36C58DDE03C8F(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
				{
					if (unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
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
						if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0xA9A04898798AE9E6(iLocal_54, 0))
							{
								unk_0x6EB9CDEFE029E586(iLocal_51[iVar0], iLocal_54, unk_0x82D9CF397BA8C885(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0x0BF40BFCD677686E(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0x6EB9CDEFE029E586(iLocal_51[iVar0], iLocal_54, unk_0x6DB9E754798EC35C(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0x375AF521D1ADB2DD(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x3732B96D7A1859B4() - iLocal_500)) > unk_0x399F81B56505EE6F(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x3732B96D7A1859B4();
								}
							}
						}
					}
					if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 0) && (unk_0x3732B96D7A1859B4() - iLocal_507) > 5000)
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
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
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
					unk_0x3851B6B87498EDBF(iLocal_51[iVar0], 1048576000);
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
	
	if ((unk_0x3732B96D7A1859B4() - iLocal_484) > 250)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
				{
					if (unk_0x2FF6D1D6A0790F5A(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91(), 19) && unk_0x4E9A7A90A945365B(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91()))
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
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
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
	
	if (unk_0x2137828D03306CAF(iLocal_56))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[iParam0]))
		{
			if (unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0x453DB1DBE5D81637(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x1E479544F884CFB5(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
						unk_0xBE35B7268C680A20(&iLocal_56);
					}
				}
				else
				{
					unk_0x4C47904AE69D7393(iLocal_51[iParam0], 1);
					unk_0xF1C3427BFED79E6B(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x2137828D03306CAF(iLocal_56) || (unk_0x2137828D03306CAF(iLocal_56) && !unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[iParam0]))
		{
			unk_0x4C47904AE69D7393(iLocal_51[iParam0], 0);
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
	
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		Var0 = { func_29(unk_0xABF3BF12B0129BAF(iLocal_54, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1))) };
		fVar3 = ((unk_0x6DAB28241B34DEED(iLocal_54) + unk_0x2410C2F4DC01A40D(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((unk_0x6DAB28241B34DEED(iLocal_54) + unk_0x2410C2F4DC01A40D(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_72(&fVar3);
		func_72(&fVar4);
		if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar12]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
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
				if ((((((!unk_0x769F0F6444C1ABE0(iLocal_51[iVar12]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0x3732B96D7A1859B4() - iLocal_504[iVar12]) > 1000) && !unk_0xC4A39E4229BD3ABE(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_66())
						{
							Local_501 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
						}
						unk_0x219EE6A7B599E7DC(&uVar14);
						if (func_66() || func_32(Local_501))
						{
							unk_0xF7D2F9A8A20E06C8(0, Var5[iVar12 /*3*/], unk_0x2A5EB8B0FE590B91(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xD6E739D9CC93B1C2(0, unk_0x2A5EB8B0FE590B91(), -1, 1);
						}
						else
						{
							unk_0x7289CA86DCAAEC68(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x60B5C9E92D23B70D(0, Local_501, -1, 1, 0);
						}
						unk_0xBD718C5BA2122192(uVar14);
						unk_0x234E551BB8E8813B(iLocal_51[iVar12], uVar14);
						unk_0xEDD36C58DDE03C8F(&uVar14);
					}
					iLocal_504[iVar12] = unk_0x3732B96D7A1859B4();
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
	
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0x4C47904AE69D7393(iParam0, 1);
					unk_0x654FFF4D16298AC5(iParam0);
					Local_485 = { unk_0x398D060E1D834545(iLocal_54, 0) };
					Local_488 = { unk_0x37C8136AF6C0BC9B(iLocal_54, 2) };
					Local_491 = { unk_0xAF69F990354E417A("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0xA9A04898798AE9E6(iLocal_51[1], 0)) && !unk_0x769F0F6444C1ABE0(iLocal_51[0])) && !unk_0xA9A04898798AE9E6(iLocal_51[0], 0))
					{
						if (func_21() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x0BF40BFCD677686E(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x28FB7E63A217D6DE(iParam0, unk_0x6DB9E754798EC35C(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x28FB7E63A217D6DE(iParam0, unk_0x6DB9E754798EC35C(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_79(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0x769F0F6444C1ABE0(iParam0))
					{
						if (unk_0x0BF40BFCD677686E(uLocal_137))
						{
							unk_0x28FB7E63A217D6DE(iParam0, unk_0x6DB9E754798EC35C(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
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
				if (!unk_0x769F0F6444C1ABE0(iParam0) && unk_0x0BF40BFCD677686E(uLocal_137))
				{
					if ((unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam0, 1), unk_0x6DB9E754798EC35C(uLocal_137), 1) < 2f && !unk_0x62F5757271CA0B05(iParam0)) && (unk_0x3732B96D7A1859B4() - iLocal_136) > 3000)
					{
						if (unk_0x09A26025E0F821B1(iParam0, 4))
						{
							unk_0x1776A639860985BF(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0x3282EED5CD1F19DB(uLocal_137);
						func_79(iParam0);
						unk_0x1776A639860985BF(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x769F0F6444C1ABE0(iParam0) && unk_0x7FAC45D56235AB39(iLocal_54, 0))
				{
					if (unk_0xE897E371352225D5(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0x28FB7E63A217D6DE(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0x28FB7E63A217D6DE(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x769F0F6444C1ABE0(iParam0))
				{
					if (unk_0x0BF40BFCD677686E(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0x6DAB28241B34DEED(iParam0);
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
						if (unk_0x2A488C176D52CCA5(Local_491, unk_0xD1EE0E9FCD74A37B(iParam0, 1)) < 0.3f)
						{
							if (unk_0x3FEF699D13BCC798((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0x3656064C54774689(iParam0, -1056964608);
								unk_0x654FFF4D16298AC5(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0x6D46C949A32B8D73(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0x5F778B8D6D7DF47B(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xA5537C55BC0E41FD(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x5F778B8D6D7DF47B(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xA5537C55BC0E41FD(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xB1D181DBFC526F52(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x812A9839F66D4B43(iParam0) && !unk_0x14CEA5D3B9541B99(Local_485, 2f))
						{
							unk_0x8E979F037EACE55A(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x354ACA1BAED67927(iLocal_494))
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
						if ((unk_0x2137828D03306CAF(iLocal_56) && unk_0xAA14E382041F4A6A(iLocal_56, iParam0)) && unk_0x58DF249E321EAB8E(iLocal_494) > fLocal_508)
						{
							if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_54))
							{
								unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
								unk_0x81642E3BC0111BF2(iLocal_56, 0, 0);
								unk_0x5DAB197A499B8499(iLocal_56, iLocal_54, 0, unk_0xABF3BF12B0129BAF(iLocal_54, unk_0xD1EE0E9FCD74A37B(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x58DF249E321EAB8E(iLocal_494) > fLocal_509)
					{
						unk_0x860D46ACBCB64ED9(iLocal_54, -4f, 1);
						unk_0x654FFF4D16298AC5(iParam0);
						if (unk_0x2137828D03306CAF(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x63A99CC1C4BD5677(iLocal_54, 2, 1);
							unk_0x63A99CC1C4BD5677(iLocal_54, 3, 1);
							unk_0x4C47904AE69D7393(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x354ACA1BAED67927(iLocal_494) && unk_0x58DF249E321EAB8E(iLocal_494) > fLocal_509) || !unk_0x354ACA1BAED67927(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
						{
							unk_0xA6AC097BEBB7B1F0(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
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
	if (!unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!bLocal_109)
		{
			if ((((((func_21() < 10f && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6)) && func_66()) || ((func_21() < 20f && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6)) && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))) || (func_21() < 5f && bLocal_110)) || (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && func_74(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))) || ((!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0x2137828D03306CAF(unk_0x19D9DFABC3C7D219())) && func_74(unk_0x19D9DFABC3C7D219())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0x354ACA1BAED67927(iLocal_494))
			{
				unk_0x860D46ACBCB64ED9(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0x4C47904AE69D7393(iParam0, 0);
		}
	}
	if ((unk_0x7FAC45D56235AB39(iLocal_54, 0) && iLocal_48 != 7) && unk_0x354ACA1BAED67927(iLocal_494))
	{
		unk_0x860D46ACBCB64ED9(iLocal_54, -8f, 1);
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
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x2137828D03306CAF(iLocal_54))
	{
		uVar59 = 4;
		unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0x82D9CF397BA8C885(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_75(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 1))
		{
			if (func_75(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0x5B9B499C707C2A95(iLocal_51[1], iLocal_54, 1))
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
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (!unk_0x2137828D03306CAF(iLocal_56))
		{
			iLocal_56 = unk_0xA3618B5F6184DAD2(iLocal_105, Local_77, 1, 1, 0);
			unk_0xE86C3B50CF07F041(iLocal_56, 0);
		}
		if (unk_0x2137828D03306CAF(iLocal_56))
		{
			unk_0x5DAB197A499B8499(iLocal_56, iParam0, unk_0xC88C187E2120E0BE(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1);
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
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
				{
					unk_0x4C47904AE69D7393(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
			{
				if (unk_0x2137828D03306CAF(func_83()))
				{
					if (!unk_0x769F0F6444C1ABE0(func_83()))
					{
						if (unk_0x8F8E5C33266ED978(iLocal_54, -1, 0) != func_83() && unk_0x457D9E478E06E354(iLocal_54, -1, 0))
						{
							unk_0xA6AC097BEBB7B1F0(func_83(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && func_83() != iLocal_51[1])
				{
					if (unk_0x8F8E5C33266ED978(iLocal_54, 0, 0) != iLocal_51[1] && unk_0x457D9E478E06E354(iLocal_54, 0, 0))
					{
						unk_0xA6AC097BEBB7B1F0(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
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
				if (unk_0x2137828D03306CAF(func_83()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x8C6A1F8B258BDF97(func_83(), iLocal_54, unk_0x2A5EB8B0FE590B91(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x2137828D03306CAF(func_83()))
				{
					unk_0x82D957BF5625B846(func_83(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
			{
				if (unk_0xD2660BAC03EB7433(iLocal_54) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x2137828D03306CAF(iLocal_54) && unk_0x2137828D03306CAF(unk_0x8F8E5C33266ED978(iLocal_54, -1, 0))) && (unk_0xA9A04898798AE9E6(unk_0x8F8E5C33266ED978(iLocal_54, -1, 0), 0) || unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x8F8E5C33266ED978(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 100f)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar1]) && unk_0xE897E371352225D5(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0xAE833788DEAB23CA(iLocal_51[iVar1], 2, 1);
				unk_0x219EE6A7B599E7DC(&uVar2);
				unk_0x91233DD2A90FD0C8(0, iLocal_54);
				unk_0x8C6A1F8B258BDF97(0, iLocal_54, unk_0x2A5EB8B0FE590B91(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0xBD718C5BA2122192(uVar2);
				unk_0x234E551BB8E8813B(iLocal_51[iVar1], uVar2);
				unk_0xEDD36C58DDE03C8F(&uVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0x7FAC45D56235AB39(iLocal_54, 0) || unk_0x0BF40BFCD677686E(uLocal_137)) || iLocal_49 == 3) || unk_0x12CF5C6534A94BEE(iLocal_54, 0, 7000)) || unk_0x12CF5C6534A94BEE(iLocal_54, 3, 30000)) || unk_0x12CF5C6534A94BEE(iLocal_54, 2, 30000)) || unk_0x12CF5C6534A94BEE(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x2137828D03306CAF(iLocal_54))
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_54, 0))
		{
			if (((((unk_0xE86A53C202B21FAB(iLocal_54) < 300 || unk_0xB01B1648698791BB(iLocal_54) < 200f) || (unk_0xD8BFF899C7596F35(iLocal_54, 0, 0) && unk_0xD8BFF899C7596F35(iLocal_54, 1, 0))) || (unk_0xD8BFF899C7596F35(iLocal_54, 4, 0) && unk_0xD8BFF899C7596F35(iLocal_54, 5, 0))) || (unk_0xD8BFF899C7596F35(iLocal_54, 0, 0) && unk_0xD8BFF899C7596F35(iLocal_54, 4, 0))) || (unk_0xD8BFF899C7596F35(iLocal_54, 1, 0) && unk_0xD8BFF899C7596F35(iLocal_54, 5, 0)))
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
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0xA9A04898798AE9E6(iLocal_51[0], 0))
		{
			if (!unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0xA9A04898798AE9E6(iLocal_51[1], 0))
		{
			if (!unk_0x5B9B499C707C2A95(iLocal_51[1], iLocal_54, 0))
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
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0xA9A04898798AE9E6(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0xA9A04898798AE9E6(iLocal_51[1], 0))
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
				if (unk_0x2137828D03306CAF(iLocal_56) && unk_0xED01C551E3A161C0(iLocal_56))
				{
					unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
					{
						unk_0x89AEA58335779997(iLocal_51[iVar0], 17, 1);
						unk_0xAE833788DEAB23CA(iLocal_51[iVar0], 128, 1);
						unk_0xAE833788DEAB23CA(iLocal_51[iVar0], 16, 1);
						unk_0x89AEA58335779997(iLocal_51[iVar0], 1, 0);
						unk_0x219EE6A7B599E7DC(&uVar1);
						if (unk_0xC4A39E4229BD3ABE(iLocal_51[iVar0], 1))
						{
							unk_0x8F2751B831A7B303(iLocal_51[iVar0], 0, 256);
						}
						unk_0xCD6FB688ED8B6284(0, unk_0x2A5EB8B0FE590B91(), 300f, -1, 0, 0);
						unk_0xBD718C5BA2122192(uVar1);
						unk_0x234E551BB8E8813B(iLocal_51[iVar0], uVar1);
						unk_0xEDD36C58DDE03C8F(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
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
	
	iVar1 = unk_0xCBA4F77BB9D2F115(iParam0) + 1;
	if (iParam4 || !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_86(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x2A5EB8B0FE590B91())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x769F0F6444C1ABE0(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							if (unk_0xEA49C7D4FDCF922C(unk_0xB0BB7458627D389F(iVar2)) == 0)
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
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
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
	int iVar1;
	
	if (!unk_0x457D9E478E06E354(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_87())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
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

int func_87()
{
	return -1;
}

void func_88()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x2137828D03306CAF(iLocal_56) && unk_0xED01C551E3A161C0(iLocal_56))
					{
						if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[0]))
						{
							func_89(0);
						}
						else
						{
							unk_0x654FFF4D16298AC5(iLocal_51[0]);
						}
						if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[1]))
						{
							func_89(1);
						}
						else
						{
							unk_0x654FFF4D16298AC5(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_89(0);
						func_89(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_130))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]))
					{
						func_89(iLocal_130);
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
	if (unk_0x2137828D03306CAF(iLocal_55))
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_55, 0) && unk_0x7FAC45D56235AB39(iLocal_54, 0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_55, 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0xA9A04898798AE9E6(iLocal_55, 0) || !unk_0x7FAC45D56235AB39(iLocal_55, 0)) || (!unk_0x7659EAAF617FD593(iLocal_55, 1119092736) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_55, 1)))
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
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xE8594BE97055E9A1(iLocal_51[0], unk_0x2A5EB8B0FE590B91(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xE8594BE97055E9A1(iLocal_51[1], unk_0x2A5EB8B0FE590B91(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
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
	if ((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && func_66()) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 7))
	{
		func_62(2);
	}
	if (!unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		func_62(5);
	}
}

void func_89(int iParam0)
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[iParam0]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x654FFF4D16298AC5(iLocal_51[iParam0]);
		unk_0x219EE6A7B599E7DC(&uLocal_58);
		if (unk_0xC4A39E4229BD3ABE(iLocal_51[iParam0], 0))
		{
			unk_0x8F2751B831A7B303(0, 0, 256);
		}
		unk_0xAF2C217E49954DFD(0);
		unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
		unk_0xD6E739D9CC93B1C2(0, unk_0x2A5EB8B0FE590B91(), -1, 0);
		unk_0xBD718C5BA2122192(uLocal_58);
		unk_0x234E551BB8E8813B(iLocal_51[iParam0], uLocal_58);
		unk_0xEDD36C58DDE03C8F(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0x9947331DC007985A(116, unk_0xD1EE0E9FCD74A37B(iLocal_51[iParam0], 1), -1082130432);
		}
	}
}

void func_90()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
			{
				unk_0x4C47904AE69D7393(iLocal_51[0], 1);
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
			{
				unk_0x4C47904AE69D7393(iLocal_51[1], 1);
			}
			if (func_97())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_62(8);
				}
			}
			else if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (func_96() || func_95())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(0);
				if (unk_0x2137828D03306CAF(iLocal_56) && unk_0xED01C551E3A161C0(iLocal_56))
				{
					if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[0]))
					{
						func_89(0);
					}
					else
					{
						unk_0x654FFF4D16298AC5(iLocal_51[0]);
					}
					if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[1]))
					{
						func_89(1);
					}
					else
					{
						unk_0x654FFF4D16298AC5(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_89(0);
					func_89(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_130))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[iLocal_130]))
				{
					func_89(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_94())
			{
				if (!func_93(iLocal_54, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
				{
					bVar0 = true;
				}
				else if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					unk_0xC1B1E9A034A63A62(7000);
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (func_96())
					{
						bVar0 = true;
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (func_95())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_93(iLocal_51[iVar1], 1000) && (func_21() < 2f && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0xA9A04898798AE9E6(iLocal_51[iVar1], 0))
					{
						if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_51[iVar1]) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x3732B96D7A1859B4() - iLocal_500)) > unk_0x399F81B56505EE6F(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x3732B96D7A1859B4();
						}
					}
				}
				if (bVar0)
				{
					func_91();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && unk_0x2137828D03306CAF(iLocal_51[iVar2]))
		{
			if ((unk_0x769F0F6444C1ABE0(iLocal_51[iVar2]) || unk_0xA9A04898798AE9E6(iLocal_51[iVar2], 0)) && unk_0xE8594BE97055E9A1(iLocal_51[iVar2], unk_0x2A5EB8B0FE590B91(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x769F0F6444C1ABE0(iLocal_51[0]) || unk_0x769F0F6444C1ABE0(iLocal_51[1])) || bLocal_121)
	{
		func_62(8);
	}
	if ((unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && func_66())
	{
		if (unk_0xE8594BE97055E9A1(iLocal_54, unk_0x2A5EB8B0FE590B91(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		func_62(5);
	}
	if ((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6)) && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_91()
{
	Global_14611 = 0;
	func_92();
}

void func_92()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x2137828D03306CAF(iParam0))
		{
			if ((unk_0xEE46DE31F43DCAF1(iParam0) && !unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0))) || (unk_0x82DF3B947FC3E281(iParam0) && unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x3732B96D7A1859B4() - iLocal_499) > iParam1)
				{
					fLocal_498 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam0, 1));
					iLocal_499 = unk_0x3732B96D7A1859B4();
				}
			}
		}
	}
	return iVar0;
}

int func_94()
{
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0x82D9CF397BA8C885(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
			{
				if ((!unk_0x5B9B499C707C2A95(iLocal_51[iVar0], iLocal_54, 0) && unk_0xF147FDD417194D5D(unk_0x2A5EB8B0FE590B91(), iLocal_54)) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_96()
{
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91()) == iLocal_54)
		{
			if (unk_0x534BC85DAB12639A(unk_0x2A5EB8B0FE590B91()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && unk_0x2860DA9980AC4109(iLocal_51[0], unk_0x2A5EB8B0FE590B91(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && unk_0x2860DA9980AC4109(iLocal_51[1], unk_0x2A5EB8B0FE590B91(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 4) && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_98(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_99(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		func_125(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_100(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_100(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x943D8B466B9BD1A3())
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x47988E04F8E2F0AD(iVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_98(iVar0))
	{
		func_117();
	}
	if (!unk_0x943D8B466B9BD1A3())
	{
		if (func_112(uParam0, bParam6, bParam8, 0))
		{
			func_111(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_105(iVar0))
			{
				if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if ((unk_0x14CEA5D3B9541B99(Param1, 1f) && !unk_0x6235C49EA2DBA22D()) && uParam7)
					{
						if (!func_98(iVar0))
						{
							func_127(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
							{
								func_104(1);
							}
						}
					}
				}
			}
		}
		else if (func_105(iVar0))
		{
			if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
			{
				if ((unk_0x14CEA5D3B9541B99(Param1, 1f) && !unk_0x6235C49EA2DBA22D()) && uParam7)
				{
					if (!func_98(iVar0))
					{
						func_127(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
						{
							func_104(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x47988E04F8E2F0AD(iVar0))
		{
			if (func_98(iVar0) && unk_0x6235C49EA2DBA22D())
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
			{
				func_125(uParam0, iVar0, 1);
			}
		}
		if (!func_112(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_103(uParam0))
			{
				func_101(uParam0);
			}
		}
	}
}

void func_101(var uParam0)
{
	if (func_102(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0x47ABE7550330D9FC(1);
		unk_0xF01DFB77A6A50908(0);
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_102(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x82DF3B947FC3E281(iParam0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEE46DE31F43DCAF1(iParam0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x3732B96D7A1859B4()
		{
			return 1;
		}
	}
	return 0;
}

int func_104(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_103236.f_9830.f_100++;
			}
			return Global_103236.f_9830.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_103236.f_9830.f_101++;
			}
			return Global_103236.f_9830.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_103236.f_9830.f_102++;
			}
			return Global_103236.f_9830.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_105(char* sParam0)
{
	if (!func_106(1, 1, 0))
	{
		if ((!unk_0x58478145CAF8429C(sParam0) && func_98(sParam0)) || func_98("CMN_HINT"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_104(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		return 0;
	}
	if (func_110(0))
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (unk_0x2593BD27F8406EC2())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x09952BA662A7629B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
			{
				return 0;
			}
			if (unk_0xFC99B60347524C55())
			{
				return 0;
			}
		}
	}
	if (func_108())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x3A55AED06BFC52DE(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), func_107(unk_0x2A5EB8B0FE590B91(), 0)) || (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("apc") && func_107(unk_0x2A5EB8B0FE590B91(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_108()
{
	return Global_2445217.f_13;
}

bool func_109()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_110(int iParam0)
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

void func_111(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x47ABE7550330D9FC(0);
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
	unk_0x7DE3563ED891F613(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x6B823DB6B46BB1F2(unk_0x2A5EB8B0FE590B91(), Param1, -1, iVar2, iVar3);
	unk_0x18A0B296F4932A7B("FocusIn", 0, 0);
	unk_0xB0D390F8FEB78903("HINT_CAM_SCENE");
	unk_0x08BE237DBCD9CBD9(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3732B96D7A1859B4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_112(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_103(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (!func_116(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3732B96D7A1859B4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_115(bParam1, bParam2, bParam3) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (func_114(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_103(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_106(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_117();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_117()
{
	unk_0xF6082E2ADA1C795B(&Global_2314, 4);
}

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_119(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_119(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		func_125(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_120(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_120(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x943D8B466B9BD1A3())
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x47988E04F8E2F0AD(iVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_98(iVar0))
	{
		func_117();
	}
	if (func_102(iParam1) && unk_0x18570CCBAF7F635C(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			unk_0x2C9BFB18AC97D56A(unk_0xC3A7AD90290CA72E(iParam1));
			unk_0xB6E06390C751480C(unk_0xC3A7AD90290CA72E(iParam1), 1);
			if (unk_0x2CA699E76FE1F362(unk_0xC3A7AD90290CA72E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x82DF3B947FC3E281(iParam1))
		{
			unk_0x8D2653D3B0E4E932(unk_0x761AC59E782D169D(iParam1));
			if (unk_0x7C985EA0E2CA156C(unk_0x761AC59E782D169D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam1))
		{
			unk_0xB6F65B032F5104E8(unk_0x3D7676880675803E(iParam1));
			if (unk_0xC6E81CD09CBFB72A(unk_0x3D7676880675803E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x943D8B466B9BD1A3())
		{
			if (func_112(uParam0, bParam7, bParam9, 0))
			{
				func_121(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_105(iVar0))
				{
					if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if ((iVar1 && !unk_0x6235C49EA2DBA22D()) && uParam8)
						{
							if (!func_98(iVar0))
							{
								func_127(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
								{
									func_104(1);
								}
							}
						}
					}
				}
			}
			else if (func_105(iVar0))
			{
				if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
				{
					if (((unk_0x57F6052FCF93BCFF(iParam1) && iVar1) && !unk_0x6235C49EA2DBA22D()) && uParam8)
					{
						if (!func_98(iVar0))
						{
							func_127(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
							{
								func_104(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x47988E04F8E2F0AD(sParam5))
			{
				if (func_98(sParam5))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			if (!func_112(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_103(uParam0))
				{
					func_101(uParam0);
				}
			}
		}
	}
	else
	{
		func_125(uParam0, iVar0, 0);
	}
}

void func_121(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		func_125(uParam0, 0, 0);
	}
	if (func_124(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			iVar0 = unk_0xC3A7AD90290CA72E(iParam1);
			if (!unk_0xC4A39E4229BD3ABE(iVar0, 0))
			{
				if (unk_0xDB61DD81432BD145(iVar0))
				{
					if (!func_122())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x8F40CB4DCBB7C8AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x47ABE7550330D9FC(0);
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
	unk_0x8E8B3A8DE1143EAE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDF42871EAD55C9B(unk_0x2A5EB8B0FE590B91(), iParam1, -1, iVar3, iVar4);
	unk_0x18A0B296F4932A7B("FocusIn", 0, 0);
	unk_0xB0D390F8FEB78903("HINT_CAM_SCENE");
	unk_0x08BE237DBCD9CBD9(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3732B96D7A1859B4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_122()
{
	return func_123(unk_0x0FFED3E94261A832());
}

int func_123(var uParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_124(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
		{
			return;
		}
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0xF01DFB77A6A50908(iParam2);
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x47ABE7550330D9FC(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x47988E04F8E2F0AD(uParam0->f_3))
	{
		if (func_98(uParam0->f_3))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	if (!unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (func_98(sVar0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

void func_126(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_6), iParam0);
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

bool func_128(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_6, iParam0);
}

int func_129(int iParam0)
{
	if (func_132())
	{
		Global_103226 = 1;
		Global_103223 = unk_0x3732B96D7A1859B4();
		if (func_50(Global_103225))
		{
			func_130(0);
		}
		unk_0x016711C6F4D08FCE(1, "RE_TITLE");
		if (iParam0 && func_50(Global_103225))
		{
			unk_0x847E5C2DF89423C1();
		}
		return 1;
	}
	return 0;
}

void func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_103236.f_24776.f_2 < 3)
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_127(func_131(iParam0), -1);
					Global_103236.f_24776.f_2++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 1))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_127(func_131(iParam0), -1);
					Global_103236.f_24776.f_3++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 2))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_127(func_131(iParam0), -1);
					Global_103236.f_24776.f_4++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 2);
				}
			}
			break;
	}
}

char* func_131(int iParam0)
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

int func_132()
{
	switch (func_133(&Global_25281, 0, 5, 0, unk_0xFF09208EC90C94CB()))
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

int func_133(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89400.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_137(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x1EF72C87138AD63D(unk_0x8A41C463063AFC8E(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6A11DD53643C828(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_135(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_134(uParam0, iParam4);
		}
	}
	return 2;
}

void func_134(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_135(int iParam0)
{
	return func_136(iParam0, Global_35813);
}

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_135(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
				{
					unk_0x89AEA58335779997(iLocal_51[0], 6, 1);
					unk_0x89AEA58335779997(iLocal_51[1], 6, 1);
					unk_0x4C47904AE69D7393(iLocal_51[0], 1);
					unk_0x4C47904AE69D7393(iLocal_51[1], 1);
					if (unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 0) && unk_0x5B9B499C707C2A95(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0x219EE6A7B599E7DC(&uVar0);
							unk_0xED057CE9299687BC(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x37959C6A7F431781(0, iLocal_54, 10f, 786603);
							unk_0xBD718C5BA2122192(uVar0);
							unk_0x234E551BB8E8813B(iLocal_51[0], uVar0);
							unk_0xEDD36C58DDE03C8F(&uVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0x219EE6A7B599E7DC(&uVar1);
							unk_0xED057CE9299687BC(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x37959C6A7F431781(0, iLocal_54, 10f, 786603);
							unk_0xBD718C5BA2122192(uVar1);
							unk_0x234E551BB8E8813B(iLocal_51[0], uVar1);
							unk_0xEDD36C58DDE03C8F(&uVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0x219EE6A7B599E7DC(&uVar2);
							unk_0xED057CE9299687BC(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x37959C6A7F431781(0, iLocal_54, 10f, 786603);
							unk_0xBD718C5BA2122192(uVar2);
							unk_0x234E551BB8E8813B(iLocal_51[0], uVar2);
							unk_0xEDD36C58DDE03C8F(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0x37959C6A7F431781(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 0) && unk_0xE897E371352225D5(iLocal_51[0], -1794415470) != 1)
						{
							unk_0xA6AC097BEBB7B1F0(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x5B9B499C707C2A95(iLocal_51[1], iLocal_54, 0) && unk_0xE897E371352225D5(iLocal_51[1], -1794415470) != 1)
						{
							unk_0xA6AC097BEBB7B1F0(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_142() || func_141()) || func_96()) || func_95()) || func_140()) || func_139())
			{
				if (func_21() < 20f)
				{
					func_91();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar3]) && !unk_0xA9A04898798AE9E6(iLocal_51[iVar3], 0))
					{
						if (unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()) && unk_0xB833DDD4C8B30212(iLocal_51[iVar3]))
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
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x1EE6775A40DCD8C5("PLAYER HAS PROJECTILE WEAPON", unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 0, 0, 255, 255);
				if ((unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()) && !unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, 0f, -3.44f, -3f), unk_0x82D9CF397BA8C885(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, 0f, -3.44f, -3f), unk_0x82D9CF397BA8C885(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x10E6318A0AC17B8D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_54, 1)) < 225f)
				{
					unk_0x10E6318A0AC17B8D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
				{
				}
			}
		}
		if (((unk_0x7FAC45D56235AB39(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), 25f, 0)) || (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_51[0], 1), 20f, 0))) || (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
			{
				unk_0x89AEA58335779997(iLocal_51[0], 6, 0);
				unk_0x4C47904AE69D7393(iLocal_51[0], 0);
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
			{
				unk_0x89AEA58335779997(iLocal_51[1], 6, 0);
				unk_0x4C47904AE69D7393(iLocal_51[1], 0);
			}
		}
	}
}

int func_139()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832())) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) - unk_0xD1EE0E9FCD74A37B(iLocal_54, 1) };
		Var3 = { unk_0x09BFAEEB73544139(iLocal_54) };
		Var6 = { unk_0xABF3BF12B0129BAF(iLocal_54, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_54) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_54)) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_51[0])) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_51[1]))) && unk_0x3FEF699D13BCC798(unk_0x8A19CC9865A4AAC2(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x8A19CC9865A4AAC2(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if ((unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, 2.7f, 7f, -2f), unk_0x82D9CF397BA8C885(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, -2.7f, 7f, -2f), unk_0x82D9CF397BA8C885(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_54, 0f, 7f, -2f), unk_0x82D9CF397BA8C885(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (unk_0x2137828D03306CAF(unk_0x19D9DFABC3C7D219()))
		{
			iVar0 = unk_0x19D9DFABC3C7D219();
		}
		if (unk_0x2137828D03306CAF(iVar0) && unk_0x2137828D03306CAF(iLocal_54))
		{
			return ((unk_0x7FAC45D56235AB39(iVar0, 0) && unk_0xB588E9EC60290D87(iVar0, iLocal_54)) && unk_0xD2660BAC03EB7433(iVar0) > 10f);
		}
	}
	return 0;
}

int func_142()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) || unk_0xA9A04898798AE9E6(iLocal_51[0], 0))
		{
			if (unk_0xE8594BE97055E9A1(iLocal_51[0], unk_0x2A5EB8B0FE590B91(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) || unk_0xA9A04898798AE9E6(iLocal_51[1], 0))
		{
			if (unk_0xE8594BE97055E9A1(iLocal_51[1], unk_0x2A5EB8B0FE590B91(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_143()
{
	float fVar0;
	
	if ((!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && !unk_0x769F0F6444C1ABE0(iLocal_51[1])) && unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0x398D060E1D834545(iLocal_54, 0) };
				Local_488 = { unk_0x37C8136AF6C0BC9B(iLocal_54, 2) };
				Local_491 = { unk_0xAF69F990354E417A("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0x07C140F31B3CDAFA(iLocal_54, 1084227584);
				unk_0x219EE6A7B599E7DC(&uLocal_58);
				unk_0xD605CAC9F8611B4D(0, 5000);
				unk_0x28FB7E63A217D6DE(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0x274810FAE1CBA3EA(0, Local_488.f_2, 0);
				unk_0xBD718C5BA2122192(uLocal_58);
				unk_0x234E551BB8E8813B(iLocal_51[1], uLocal_58);
				unk_0xEDD36C58DDE03C8F(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0x398D060E1D834545(iLocal_54, 0) };
				Local_488 = { unk_0x37C8136AF6C0BC9B(iLocal_54, 2) };
				Local_491 = { unk_0xAF69F990354E417A("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0x354ACA1BAED67927(iLocal_495))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_77) < 22500f && unk_0xE861489D53FFD076(iLocal_54))
					{
						iLocal_495 = unk_0x6D46C949A32B8D73(Local_485, Local_488, 2);
						unk_0x5F778B8D6D7DF47B(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xA2218E1CAB0028A5(iLocal_495, 1);
					}
				}
				if (unk_0xE897E371352225D5(iLocal_51[1], 242628503) != 1)
				{
					unk_0x219EE6A7B599E7DC(&uLocal_58);
					unk_0x28FB7E63A217D6DE(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0x274810FAE1CBA3EA(0, Local_488.f_2, 0);
					unk_0xBD718C5BA2122192(uLocal_58);
					unk_0x234E551BB8E8813B(iLocal_51[1], uLocal_58);
					unk_0xEDD36C58DDE03C8F(&uLocal_58);
				}
				fVar0 = unk_0x6DAB28241B34DEED(iLocal_51[1]);
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
				if (unk_0x3FEF699D13BCC798((fVar0 - Local_488.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_491, unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0x3656064C54774689(iLocal_51[1], -1056964608);
					unk_0x654FFF4D16298AC5(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0x6D46C949A32B8D73(Local_485, Local_488, 2);
					unk_0x5F778B8D6D7DF47B(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xA5537C55BC0E41FD(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0x354ACA1BAED67927(iLocal_494) && unk_0x58DF249E321EAB8E(iLocal_494) > 0.09f) && unk_0x58DF249E321EAB8E(iLocal_494) < 0.11f) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0x354ACA1BAED67927(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0x2137828D03306CAF(iLocal_56) && unk_0xAA14E382041F4A6A(iLocal_56, iLocal_51[1])) && unk_0x58DF249E321EAB8E(iLocal_494) > 0.3793f)
						{
							if (!unk_0xAA14E382041F4A6A(iLocal_56, iLocal_54))
							{
								unk_0xA806066ECDF61E23(iLocal_56, 1, 1);
								unk_0x81642E3BC0111BF2(iLocal_56, 0, 0);
								unk_0x5DAB197A499B8499(iLocal_56, iLocal_54, 0, unk_0xABF3BF12B0129BAF(iLocal_54, unk_0xD1EE0E9FCD74A37B(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x58DF249E321EAB8E(iLocal_494) > 0.546243f)
					{
						unk_0x860D46ACBCB64ED9(iLocal_54, -4f, 1);
						if (unk_0x2137828D03306CAF(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x63A99CC1C4BD5677(iLocal_54, 2, 1);
							unk_0x63A99CC1C4BD5677(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0x354ACA1BAED67927(iLocal_494) && unk_0x58DF249E321EAB8E(iLocal_494) > 0.56f) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0x354ACA1BAED67927(iLocal_494) && unk_0x58DF249E321EAB8E(iLocal_494) > 0.6f) || !unk_0x354ACA1BAED67927(iLocal_494))
					{
						if (unk_0x354ACA1BAED67927(iLocal_495))
						{
							unk_0x654FFF4D16298AC5(iLocal_51[0]);
							iLocal_495 = unk_0x6D46C949A32B8D73(Local_485, Local_488, 2);
							unk_0x5F778B8D6D7DF47B(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0x354ACA1BAED67927(iLocal_495) && unk_0x58DF249E321EAB8E(iLocal_495) >= 0.92f) || !unk_0x354ACA1BAED67927(iLocal_495))
				{
					if (!unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 0) && unk_0xE897E371352225D5(iLocal_51[0], -1794415470) != 1)
					{
						unk_0x654FFF4D16298AC5(iLocal_51[0]);
						unk_0xA6AC097BEBB7B1F0(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0x354ACA1BAED67927(iLocal_494) && unk_0xBACC7F03AA5D0762(iLocal_51[1], unk_0xCAEDBF30E3EA14FC("ENDS_IN_WALK")))
				{
					unk_0x654FFF4D16298AC5(iLocal_51[1]);
					unk_0xA6AC097BEBB7B1F0(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(0);
				}
				if ((func_82() && unk_0xB2C6EB7B345D25EC(iLocal_54, 0) == 0f) && unk_0xB2C6EB7B345D25EC(iLocal_54, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x63A99CC1C4BD5677(iLocal_54, 0, 1);
					unk_0x63A99CC1C4BD5677(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0x769F0F6444C1ABE0(func_3()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(func_3(), 1)) < 30f) && unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
	{
		if (unk_0x0BF40BFCD677686E(uLocal_137))
		{
			func_62(7);
		}
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_147())
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
		else if (func_145())
		{
			func_62(2);
		}
		else if (func_144())
		{
			func_62(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_91();
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
			{
				if (unk_0x453DB1DBE5D81637(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x272807C2BACC5351(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x654FFF4D16298AC5(iLocal_51[0]);
						unk_0xF1C3427BFED79E6B(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x7FAC45D56235AB39(iLocal_54, 0) && unk_0x354ACA1BAED67927(iLocal_494)) && !unk_0x769F0F6444C1ABE0(iLocal_51[1]))
			{
				unk_0x860D46ACBCB64ED9(iLocal_54, -1000f, 1);
				unk_0x654FFF4D16298AC5(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0x0BF40BFCD677686E(uLocal_137))
		{
			unk_0x63A99CC1C4BD5677(iLocal_54, 2, 1);
			unk_0x63A99CC1C4BD5677(iLocal_54, 3, 1);
		}
	}
}

int func_144()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
			{
				if (func_74(unk_0x19D9DFABC3C7D219()))
				{
					iLocal_55 = unk_0x19D9DFABC3C7D219();
					return 1;
				}
			}
		}
		else if (!unk_0xA9A04898798AE9E6(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
		{
			if (func_74(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0xBCA469D44FBFAC80());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0xBCA469D44FBFAC80() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832())) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_51[iVar0]) || unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1)) < 9f) && !unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x62F5757271CA0B05(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_95())
	{
		return 1;
	}
	if ((func_146() || func_96()) && func_66())
	{
		if (!unk_0x5B9B499C707C2A95(iLocal_51[0], iLocal_54, 0) || !unk_0x5B9B499C707C2A95(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar0, 1);
		if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91())))
		{
			if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[0]))
				{
					if (unk_0x2860DA9980AC4109(iLocal_51[0], unk_0x2A5EB8B0FE590B91(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x769F0F6444C1ABE0(iLocal_51[1]))
				{
					if (unk_0x2860DA9980AC4109(iLocal_51[1], unk_0x2A5EB8B0FE590B91(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && unk_0xE8594BE97055E9A1(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91(), 1)) || (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && unk_0xC567CF20FD312AC1(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91()))) || unk_0xE8594BE97055E9A1(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91(), 1)) || (unk_0xE8594BE97055E9A1(iLocal_54, unk_0x2A5EB8B0FE590B91(), 1) && func_66())) || unk_0x769F0F6444C1ABE0(iLocal_51[iVar0])) || unk_0xA9A04898798AE9E6(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_140() || func_97())
	{
		return 1;
	}
	if (unk_0x7FAC45D56235AB39(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]))
			{
				if (unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()) && unk_0xB833DDD4C8B30212(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()) || unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0x7FAC45D56235AB39(iLocal_54, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_54, 1), 25f, 0)) || (!unk_0x769F0F6444C1ABE0(iLocal_51[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_51[0], 1), 20f, 0))) || (!unk_0x769F0F6444C1ABE0(iLocal_51[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD1EE0E9FCD74A37B(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0x2137828D03306CAF(iLocal_51[iVar0]))
		{
			if ((!unk_0x769F0F6444C1ABE0(iLocal_51[iVar0]) && !unk_0xA9A04898798AE9E6(iLocal_51[iVar0], 0)) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if ((unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1), 5f, 1) || func_31(unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0xD1EE0E9FCD74A37B(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xE8594BE97055E9A1(iLocal_51[iVar0], unk_0x2A5EB8B0FE590B91(), 1))
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

void func_149()
{
	int iVar0;
	
	iLocal_54 = unk_0xE42A511281C9895B(iLocal_104, Local_77, fLocal_80, 1, 1, 0);
	iLocal_57 = unk_0xA3618B5F6184DAD2(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0x5DAB197A499B8499(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x4C1FCB3943DAF647(iLocal_57, 0, 0);
	unk_0x8FFCA03B16F9F5EB(iLocal_57, iLocal_54, 0);
	unk_0x07C140F31B3CDAFA(iLocal_54, 1084227584);
	unk_0xD1A53D507962BF1F(iLocal_54, 3);
	unk_0x9C27A9366AD7DE0B(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0x0CF63D18742CACD4(iLocal_54, 1, 0);
	unk_0x67E5DE1657F60AC6(iLocal_54, 700);
	unk_0xD3E5E6DE4F3CED03(iLocal_54, 0, 0);
	unk_0xD44F61F61676BA14(iLocal_54, 1);
	unk_0x2379B6E271B8CA42(iLocal_54, 0);
	unk_0xE61D91D1AB14536B(iLocal_54, 1);
	unk_0x22B61B02AFE2AF2E((Local_77.f_0 - 200f), (Local_77.f_1 - 200f), (Local_77.f_0 + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0x7B47BFDF39EC38D3(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0x7B47BFDF39EC38D3(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x2DEA38A68AA89671(iLocal_54, 1, 1, 0);
		unk_0xD44F61F61676BA14(iLocal_54, 1);
	}
	else
	{
		iLocal_51[1] = unk_0xD00B79C0E206E082(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0xD00B79C0E206E082(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0xEDF42871EAD55C9B(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_79(iLocal_51[1]);
	unk_0xEE8231F61ED038B0("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0x88D9DF53359130B9(iLocal_51[iVar0], 0);
		unk_0x89AEA58335779997(iLocal_51[iVar0], 1, 0);
		unk_0x89AEA58335779997(iLocal_51[iVar0], 13, 0);
		unk_0x89AEA58335779997(iLocal_51[iVar0], 6, 1);
		unk_0x89AEA58335779997(iLocal_51[iVar0], 8, 0);
		unk_0x89AEA58335779997(iLocal_51[iVar0], 10, 1);
		unk_0xAE833788DEAB23CA(iLocal_51[iVar0], 512, 1);
		unk_0x31AC59B7C21A2047(iLocal_51[iVar0], 118, 0);
		unk_0xAE833788DEAB23CA(iLocal_51[iVar0], 128, 1);
		unk_0x876D35DC1850E7FC(iLocal_51[iVar0], 0);
		unk_0x0CF63D18742CACD4(iLocal_51[iVar0], 1, 0);
		unk_0x13DE0BD5FC063164(iLocal_51[iVar0], 1);
		unk_0xC5C40F444D9F3FEE(iLocal_51[iVar0], 1);
		unk_0x0013D519C885E60B(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x3C030E241A3543D2(iLocal_51[iVar0], iLocal_66);
		unk_0x015B50BC21C88C8C(iLocal_51[iVar0], 1);
		unk_0xCEF34666451D1CD0(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0xD44F61F61676BA14(iLocal_51[1], 1);
	unk_0x3A8EFBE4AB457FE2(1, joaat("COP"), iLocal_66);
	unk_0x3A8EFBE4AB457FE2(1, iLocal_66, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(2, iLocal_66, joaat("player"));
	unk_0x3A8EFBE4AB457FE2(2, joaat("player"), iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0xDEC831C0189DE207(iLocal_51[0], 0, 1, 0, 0);
		unk_0xB5FB8AA9DCCAC75B(iLocal_51[0], 0);
		unk_0xDEC831C0189DE207(iLocal_51[1], 0, 1, 0, 0);
		unk_0xB5FB8AA9DCCAC75B(iLocal_51[1], 0);
	}
	if (func_11() == 0 && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		func_68(&Local_140, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		func_68(&Local_140, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		func_68(&Local_140, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
	}
	func_68(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_68(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0x02E663D7DDAE8202(iLocal_104, 1);
	unk_0xF81FB2DEF90C0B69(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_150(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

bool func_151()
{
	func_159(&uLocal_317, iLocal_103);
	func_159(&uLocal_317, iLocal_104);
	func_159(&uLocal_317, iLocal_105);
	func_157(&uLocal_317, "random@security_van");
	func_157(&uLocal_317, "weapons@holster_1h");
	func_157(&uLocal_317, "move_injured_generic");
	func_156(&uLocal_317, 3);
	return func_152(&uLocal_317);
}

int func_152(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_153(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_153(var uParam0)
{
	return func_154(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_154(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xAA4F14DA15DB0B51(iParam0, 30))
	{
		if (unk_0xAA4F14DA15DB0B51(iParam0, 29))
		{
			switch (func_155(iParam0))
			{
				case 0:
					return unk_0xA1FC9D7AEA164881(uParam2);
					break;
				
				case 1:
					return unk_0x45834D6C20FFF689(uParam1);
					break;
				
				case 2:
					return unk_0x0C709135471077E2(uParam1);
					break;
				
				case 3:
					return unk_0xB5ABADF6417115F2(sParam1);
					break;
				
				case 4:
					return unk_0x3FCFBAC760CAEC03(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xF6D41300D4DD067A(sParam1);
					break;
				
				case 6:
					return unk_0x741298E7009A20C9(sParam1, unk_0xAA4F14DA15DB0B51(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x9C29C619BDECB0C6(uParam2);
					break;
				
				case 8:
					return unk_0x44FB58EFDA8731B7(uParam2);
					break;
				
				case 9:
					return unk_0x1135D5BD86A70AD2();
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

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_157(var uParam0, char* sParam1)
{
	func_158(uParam0, 1, -1, sParam1, 0);
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x35302CD5A5D37EED(sParam3, "NULL"))
					{
						if (unk_0x35302CD5A5D37EED(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF6082E2ADA1C795B(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF6082E2ADA1C795B(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_159(var uParam0, int iParam1)
{
	func_158(uParam0, 0, iParam1, "NULL", 0);
}

int func_160()
{
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_171())
		{
			return 0;
		}
	}
	if (func_167())
	{
		return 1;
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_161(float fParam0, bool bParam1)
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_55();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 2) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 3))
				{
					func_162(iVar32, &Var0);
					fVar35 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0.f_6, 1);
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

void func_162(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_163(uParam1, "Abigail1", func_165(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 1:
			func_163(uParam1, "Abigail2", func_165(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 2:
			func_163(uParam1, "Barry1", func_165(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 3:
			func_163(uParam1, "Barry2", func_165(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 4:
			func_163(uParam1, "Barry3", func_165(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 5:
			func_163(uParam1, "Barry3A", func_165(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 6:
			func_163(uParam1, "Barry3C", func_165(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 7:
			func_163(uParam1, "Barry4", func_165(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_164(iParam0), 0, 0);
			break;
		
		case 8:
			func_163(uParam1, "Dreyfuss1", func_165(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 9:
			func_163(uParam1, "Epsilon1", func_165(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 10:
			func_163(uParam1, "Epsilon2", func_165(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 11:
			func_163(uParam1, "Epsilon3", func_165(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 12:
			func_163(uParam1, "Epsilon4", func_165(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 13:
			func_163(uParam1, "Epsilon5", func_165(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 14:
			func_163(uParam1, "Epsilon6", func_165(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 15:
			func_163(uParam1, "Epsilon7", func_165(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 16:
			func_163(uParam1, "Epsilon8", func_165(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 17:
			func_163(uParam1, "Extreme1", func_165(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 18:
			func_163(uParam1, "Extreme2", func_165(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 19:
			func_163(uParam1, "Extreme3", func_165(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 20:
			func_163(uParam1, "Extreme4", func_165(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 21:
			func_163(uParam1, "Fanatic1", func_165(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 22:
			func_163(uParam1, "Fanatic2", func_165(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 23:
			func_163(uParam1, "Fanatic3", func_165(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_164(iParam0), 0, 1);
			break;
		
		case 24:
			func_163(uParam1, "Hao1", func_165(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_164(iParam0), 0, 1);
			break;
		
		case 25:
			func_163(uParam1, "Hunting1", func_165(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 26:
			func_163(uParam1, "Hunting2", func_165(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 27:
			func_163(uParam1, "Josh1", func_165(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 28:
			func_163(uParam1, "Josh2", func_165(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 29:
			func_163(uParam1, "Josh3", func_165(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 30:
			func_163(uParam1, "Josh4", func_165(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 31:
			func_163(uParam1, "Maude1", func_165(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 32:
			func_163(uParam1, "Minute1", func_165(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 33:
			func_163(uParam1, "Minute2", func_165(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 34:
			func_163(uParam1, "Minute3", func_165(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 35:
			func_163(uParam1, "MrsPhilips1", func_165(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 36:
			func_163(uParam1, "MrsPhilips2", func_165(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 37:
			func_163(uParam1, "Nigel1", func_165(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 38:
			func_163(uParam1, "Nigel1A", func_165(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 39:
			func_163(uParam1, "Nigel1B", func_165(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 40:
			func_163(uParam1, "Nigel1C", func_165(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 41:
			func_163(uParam1, "Nigel1D", func_165(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 42:
			func_163(uParam1, "Nigel2", func_165(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 43:
			func_163(uParam1, "Nigel3", func_165(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 44:
			func_163(uParam1, "Omega1", func_165(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 45:
			func_163(uParam1, "Omega2", func_165(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 46:
			func_163(uParam1, "Paparazzo1", func_165(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 47:
			func_163(uParam1, "Paparazzo2", func_165(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 48:
			func_163(uParam1, "Paparazzo3", func_165(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 49:
			func_163(uParam1, "Paparazzo3A", func_165(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 50:
			func_163(uParam1, "Paparazzo3B", func_165(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 51:
			func_163(uParam1, "Paparazzo4", func_165(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 52:
			func_163(uParam1, "Rampage1", func_165(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 54:
			func_163(uParam1, "Rampage3", func_165(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 55:
			func_163(uParam1, "Rampage4", func_165(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 56:
			func_163(uParam1, "Rampage5", func_165(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 53:
			func_163(uParam1, "Rampage2", func_165(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 57:
			func_163(uParam1, "TheLastOne", func_165(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 58:
			func_163(uParam1, "Tonya1", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 59:
			func_163(uParam1, "Tonya2", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 60:
			func_163(uParam1, "Tonya3", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 61:
			func_163(uParam1, "Tonya4", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 62:
			func_163(uParam1, "Tonya5", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_163(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_164(int iParam0)
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

struct<2> func_165(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_166(iParam0) };
	if (unk_0x58478145CAF8429C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_166(int iParam0)
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

int func_167()
{
	if (func_170() && !func_171())
	{
		return 1;
	}
	if (func_169() && func_168())
	{
		return 1;
	}
	return 0;
}

bool func_168()
{
	return Global_102954 > 0;
}

int func_169()
{
	if (Global_88844 != -1)
	{
		return 1;
	}
	return 0;
}

int func_170()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

int func_171()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_172()
{
	if (!func_135(5))
	{
		return 1;
	}
	if (func_167())
	{
		return 1;
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_171())
		{
			return 0;
		}
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	if ((Global_103225 == func_59() && unk_0x0EF1484C8ECA32F8()) && Global_103226)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x5E60CE6A99DCBE0A() >= (uParam0->f_146 + uParam0->f_147) || unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 2)) || unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 29))
					{
						func_175(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x5E60CE6A99DCBE0A();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_175(var uParam0)
{
	func_176(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_176(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 30))
	{
		switch (func_155(*uParam0))
		{
			case 0:
				unk_0x0F39DF6675B2333E(uParam2);
				break;
			
			case 1:
				unk_0xA7C81DED990D3418(uParam1);
				break;
			
			case 2:
				unk_0x7F37C67732B5EECD(uParam1);
				break;
			
			case 3:
				unk_0x91A9530585A5AF03(uParam1, unk_0xAA4F14DA15DB0B51(*uParam0, 28));
				break;
			
			case 4:
				unk_0x6C2A4A9F6C64E132(uParam2, uParam1);
				break;
			
			case 5:
				unk_0xBD7617BB733D8EC9(uParam1);
				break;
			
			case 6:
				unk_0x741298E7009A20C9(uParam1, unk_0xAA4F14DA15DB0B51(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA9515FF24FA319E3(uParam2);
				break;
			
			case 8:
				unk_0xC9173FA08E7D8227(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x926AB8F66F783F4D();
				break;
			
			default:
				break;
		}
		unk_0xF6082E2ADA1C795B(uParam0, 29);
	}
}

void func_177()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0x895FB9FE885E36ED(3000, 8000);
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

void func_178(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_180(iParam0);
	unk_0x2D47D0FBCE479E9D(0);
	unk_0x0A397D1B8C0E7CF0(1);
	Global_103222 = 0;
	func_179();
}

void func_179()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x02E663D7DDAE8202(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), 1);
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	}
}

void func_180(int iParam0)
{
	Global_103225 = iParam0;
}

int func_181(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_141282)
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
		if (!func_220())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_171())
			{
				return 0;
			}
		}
		if (!Global_103236.f_8866)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_167())
		{
			return 0;
		}
		if (func_219())
		{
			return 0;
		}
		if (Global_103225 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_161(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_218(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_217(func_11()) == 4 || func_217(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_216(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_215(Global_103236.f_24776.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3732B96D7A1859B4() - Global_103227) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_214())
		{
			return 0;
		}
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
		{
			return 0;
		}
		if (!func_206(4))
		{
			return 0;
		}
		if (!func_135(5))
		{
			return 0;
		}
		if (func_205(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
		{
			if ((unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(377.153f, -717.567f, 10.0536f) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(320.9934f, 265.2515f, 82.1221f)) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_205(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_218(30) && !func_205(30, 0))
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
				Var5 = { Global_103236.f_2164.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_103236.f_2164.f_539.f_2276[iVar4];
				if (func_204(iVar8))
				{
					if (func_182(iVar4))
					{
						if (!func_124(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var5) < (210f * 210f))
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

bool func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_103236.f_2164.f_539.f_2276[iParam0];
	return func_183(iVar0);
}

int func_183(int iParam0)
{
	return func_184(iParam0, 1);
}

int func_184(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_204(iParam0))
	{
		return 0;
	}
	func_185(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_185(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_186(func_197(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_186(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_196(iParam0, iParam1))
	{
		iVar0 = func_195(iParam1);
		iVar1 = func_193(iParam0);
		iVar2 = (func_193(iParam0) - func_193(iParam1));
		iVar3 = (func_195(iParam0) - func_195(iParam1));
		iVar4 = (func_192(iParam0) - func_192(iParam1));
		iVar5 = (func_191(iParam0) - func_191(iParam1));
		iVar6 = (func_190(iParam0) - func_190(iParam1));
		iVar7 = (func_189(iParam0) - func_189(iParam1));
	}
	else
	{
		iVar0 = func_195(iParam0);
		iVar1 = func_193(iParam1);
		iVar2 = (func_193(iParam1) - func_193(iParam0));
		iVar3 = (func_195(iParam1) - func_195(iParam0));
		iVar4 = (func_192(iParam1) - func_192(iParam0));
		iVar5 = (func_191(iParam1) - func_191(iParam0));
		iVar6 = (func_190(iParam1) - func_190(iParam0));
		iVar7 = (func_189(iParam1) - func_189(iParam0));
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
		iVar4 = (iVar4 + func_188(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_187(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_187(float fParam0, float fParam1, float fParam2)
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

int func_188(int iParam0, int iParam1)
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

int func_189(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_190(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_191(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_192(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_193(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_194(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_194(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_195(int iParam0)
{
	return iParam0 & 15;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_204(iParam1) || !func_204(iParam0))
	{
		return 1;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
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
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
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
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_197()
{
	var uVar0;
	
	func_203(&uVar0, unk_0xD887411BD4A4A92D());
	func_202(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_201(&uVar0, unk_0xDA870B7547A455EA());
	func_200(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_199(&uVar0, unk_0x0FD588FC21950895());
	func_198(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

void func_198(var uParam0, int iParam1)
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

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_195(*uParam0);
	iVar1 = func_193(*uParam0);
	if (iParam1 < 1 || iParam1 > func_188(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_201(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_202(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_204(int iParam0)
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
	iVar0 = func_189(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_190(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_191(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_193(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_195(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_192(iParam0);
	if (iVar5 < 1 || iVar5 > func_188(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_205(int iParam0, int iParam1)
{
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
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
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_1()) || Global_102283) || Global_25224) || func_213()) || func_18(8, -1)) || func_212()) || func_211()) || func_210()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_1()) || Global_25224) || func_213()) || func_18(8, -1)) || func_210()) || func_212()) || func_211()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_1()) || Global_102283) || Global_25224) || func_213()) || func_18(8, -1)) || func_210()) || func_212()) || func_211()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_1()) || Global_102283) || Global_25224) || func_213()) || func_18(8, -1)) || func_212()) || func_211()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_18(8, -1)) || func_209()) || func_208()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_212()) || func_211()) || func_208()) || func_207())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_1()) || Global_25224) || func_213()) || func_18(8, -1)) || func_211()) || func_210()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_1()) || func_211()) || Global_102283) || Global_25224) || func_213()) || Global_36944) || func_18(8, -1)) || func_210()) || func_208()) || func_209()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_1()) || Global_102283) || Global_25224) || func_213()) || func_18(8, -1)) || func_210()) || func_208()) || func_212()) || func_211()) || func_209())
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

var func_207()
{
	return Global_91816.f_1;
}

int func_208()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_209()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_211()
{
	return Global_91829.f_310 > 0;
}

bool func_212()
{
	return Global_91829.f_309 > 0;
}

var func_213()
{
	return Global_1312852;
}

int func_214()
{
	func_10();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return func_196(func_197(), iParam0);
}

int func_216(int iParam0, int iParam1, int iParam2)
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

int func_217(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_103236.f_7469.f_919[iParam0];
}

bool func_218(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_220())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_1, iVar0);
	}
	return bVar1;
}

int func_219()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(uVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_220()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_221()
{
	if (func_173())
	{
		if (unk_0x0BF40BFCD677686E(uLocal_137))
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_64))
			{
				unk_0x789C84F1B8496AD0(&uLocal_64);
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_57))
		{
			unk_0xBE35B7268C680A20(&iLocal_57);
		}
		if (unk_0x2137828D03306CAF(iLocal_56))
		{
			if (unk_0x812A9839F66D4B43(iLocal_56))
			{
				unk_0xBE35B7268C680A20(&iLocal_56);
			}
			else
			{
				unk_0x0EE36F9D946F47F2(&iLocal_56);
			}
		}
		unk_0xFD213087BC4CC3B3(iLocal_104);
		unk_0xFD213087BC4CC3B3(iLocal_103);
		unk_0xFD213087BC4CC3B3(iLocal_105);
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0xF81FB2DEF90C0B69(iLocal_103, 0);
		unk_0x02E663D7DDAE8202(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0x945CEEA33F8631DD(iLocal_131);
	}
	unk_0x6790C1CEA32DA629(uLocal_65, 0);
	func_125(&uLocal_305, 0, 0);
	func_227(-1);
	func_222(&uLocal_317, 0);
	unk_0xA232817B0B36F2E5();
}

void func_222(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_224(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_223(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_223(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*18*/], 30))
		{
			func_225(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_225(var uParam0)
{
	func_226(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_226(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xAA4F14DA15DB0B51(iParam0, 30))
	{
		switch (func_155(iParam0))
		{
			case 0:
				unk_0xFD213087BC4CC3B3(uParam2);
				break;
			
			case 1:
				unk_0x15167ADA0B7D44AE(uParam1);
				break;
			
			case 2:
				unk_0xD8BA8255AB229DF9(uParam1);
				break;
			
			case 3:
				unk_0x2FCDEAA8BCC22D85(uParam1);
				break;
			
			case 4:
				unk_0x0090DF2486F4EBEE(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xD431C233427B1AA2(uParam1);
				break;
			
			case 6:
				unk_0x2A91BA279681D7D2();
				break;
			
			case 7:
				unk_0xBD71E7CB90D1A6FC(iParam2);
				break;
			
			case 8:
				unk_0xEF7A86AB02E46379(iParam2, unk_0xAA4F14DA15DB0B51(iParam0, 26));
				break;
			
			case 9:
				unk_0x2C495F7C13999480();
				break;
			
			default:
				break;
		}
	}
}

void func_227(int iParam0)
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
	if (func_173())
	{
		func_231(iParam0);
		unk_0x016711C6F4D08FCE(0, 0);
		Global_103227 = unk_0x3732B96D7A1859B4();
		func_230(30000);
		StringCopy(&cVar0, func_229(Global_103225, 1), 64);
		if (func_58(Global_103225) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_103224, 64);
		}
		unk_0xFB2DC910C33320E0(&cVar0, Global_103222, (unk_0x3732B96D7A1859B4() - Global_103223), 0);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103232, 0) && Global_103236.f_24776.f_2 < 3)
	{
		unk_0x507FE690B1271947(&Global_103232, 0);
	}
	func_228(&Global_25281);
	Global_103226 = 0;
	func_180(-1);
}

void func_228(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

char* func_229(int iParam0, bool bParam1)
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

void func_230(int iParam0)
{
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
}

void func_231(int iParam0)
{
	func_232(iParam0, 0, func_237(iParam0));
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_197();
	func_235(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_234(iParam0, &uVar0);
	Var1 = { func_233(&uVar0) };
}

struct<16> func_233(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_191(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_190(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_189(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_192(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_193(*uParam0), 64);
	return Var0;
}

void func_234(int iParam0, var uParam1)
{
	Global_103236.f_24776.f_43[iParam0] = *uParam1;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_193(*uParam0);
	iVar1 = func_195(*uParam0);
	iVar2 = func_192(*uParam0);
	iVar3 = func_191(*uParam0);
	iVar4 = func_190(*uParam0);
	iVar5 = func_189(*uParam0);
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
	iVar6 = func_188(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_188(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_236(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_203(uParam0, iParam1);
	func_202(uParam0, iParam2);
	func_201(uParam0, iParam3);
	func_199(uParam0, iParam5);
	func_200(uParam0, iParam4);
	func_198(uParam0, iParam6);
}

int func_237(int iParam0)
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

int func_238(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x457D9E478E06E354(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x457D9E478E06E354(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x457D9E478E06E354(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x457D9E478E06E354(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x457D9E478E06E354(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x457D9E478E06E354(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x457D9E478E06E354(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x457D9E478E06E354(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x457D9E478E06E354(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x457D9E478E06E354(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

