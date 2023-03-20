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
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<15> Local_51[14];
	struct<15> Local_262 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286[5] = { 0, 0, 0, 0, 0 };
	int iLocal_292[5] = { 0, 0, 0, 0, 0 };
	int iLocal_298 = 0;
	int iLocal_299[5] = { 0, 0, 0, 0, 0 };
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	float fLocal_307 = 0f;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	var uLocal_342 = 16;
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
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	int iLocal_507 = 0;
	char* sLocal_508 = NULL;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	char* sLocal_513[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
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
	Local_319 = { 0f, 0f, 0f };
	Local_322 = { 0f, 0f, 0f };
	sLocal_508 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_510 = 524459;
	iLocal_511 = 40;
	iLocal_541 = 7500;
	Local_278 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7547D7CF93115D6D(11))
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_305, 0))
				{
					unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_305, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), unk_0xA9D6B28E708753B6(iLocal_305));
					unk_0xC9CD9F3D2675F791(unk_0x507DA4994C3D8EBD(), 1);
					unk_0xAB5C0FE0C680BC7F("RE_BUS_TOUR_SCENE");
					unk_0x66685ABDD5A8BFC3(iLocal_305, 0);
				}
			}
		}
		func_214();
	}
	if (!func_213())
	{
		unk_0x883793591E631A3B();
	}
	if (func_180(Local_278, 2, 0, 1, 0))
	{
		func_177(-1);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	func_175();
	func_174();
	while (true)
	{
		func_173();
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
		}
		switch (iLocal_311)
		{
			case 0:
				if (unk_0x3BCCCFB165E15A65())
				{
					if (func_213())
					{
						switch (iLocal_47)
						{
							case 0:
								func_169();
								break;
							
							case 1:
								if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
								{
									if (unk_0x9F94F2CFDCA78C55(iLocal_284) || unk_0x9F94F2CFDCA78C55(uLocal_285))
									{
										func_214();
									}
									else
									{
										iLocal_311 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_214();
					}
				}
				else
				{
					func_214();
				}
				break;
			
			case 1:
				if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
				{
					func_1();
				}
				else
				{
					func_214();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_168();
	func_167();
	func_166();
	func_165();
	switch (iLocal_48)
	{
		case 0:
			func_111();
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			func_2();
			break;
	}
}

void func_2()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_507, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_277, 64);
	unk_0x9C64F97D3F9CCA97(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 99, 1);
	unk_0x500F4CA776CEBD0A(0, 1, 1);
	unk_0x500F4CA776CEBD0A(0, 2, 1);
	if (!unk_0x9F94F2CFDCA78C55(iLocal_285) && !unk_0x9F94F2CFDCA78C55(iLocal_284))
	{
		if (iLocal_536)
		{
			if (!func_81())
			{
				if (iLocal_507 < 14)
				{
					func_80(&uLocal_342, "BUSTOAU", "BUSTO_RAMB", sLocal_513[iLocal_507], 4, 0, 0);
				}
				func_214();
			}
		}
		else if (!func_79())
		{
			unk_0xCEC2C1A952E78932();
			unk_0xD9E638F7F8DCAA60(2);
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0x764E7360C13E7383(unk_0x507DA4994C3D8EBD(), iLocal_305) && iLocal_277 + 1 < 13)
				{
					func_214();
				}
			}
			if (!iLocal_316)
			{
				if (unk_0x83666F9FB8FEBD4B() > 12000)
				{
					func_77();
				}
			}
			else
			{
				unk_0x9C64F97D3F9CCA97("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_305))
			{
				iLocal_315 = 1;
			}
			unk_0x3D9568341F46CF22(iLocal_305);
		}
		else
		{
			func_3(&uLocal_342, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0xCDC1FD4387DA32EC(iLocal_305, 3);
			unk_0x43F7F4A62787BC4B(iLocal_305, 0);
			iLocal_536 = 1;
		}
	}
	else
	{
		func_214();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD858EC6FECDB4B3F(0);
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
					func_18();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_16();
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_9();
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_8())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_7())
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_6();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_5();
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
		func_18();
	}
	return 0;
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_6()
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_7()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_9()
{
	if (func_15(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_10();
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

int func_10()
{
	func_11();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_14(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_13(unk_0x507DA4994C3D8EBD());
			if (func_12(iVar0) && (!func_15(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_12(Global_97173.f_1729.f_539.f_3213))
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

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_16()
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

bool func_17(int iParam0, int iParam1)
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_18()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

int func_20(int iParam0)
{
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if ((unk_0xD803509E70F20530(iParam0, 0, 7000) || unk_0xD803509E70F20530(iParam0, 1, 7000)) || unk_0xD803509E70F20530(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0x58FC9C7DF8FE009B(2, 225))
		{
			if (iLocal_318)
			{
				iLocal_318 = 0;
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 256);
				unk_0x01DCF56A472637FD(1);
			}
			else
			{
				iLocal_318 = 1;
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
				unk_0x01DCF56A472637FD(0);
			}
		}
	}
	if (iLocal_318 && !Local_51[13 /*15*/].f_9)
	{
		if (unk_0x4DA2E12E0157B5A3())
		{
			unk_0x0D1C3C2B4975D8AC(0);
		}
		func_24();
	}
	else if (iLocal_316)
	{
		if (unk_0x17D71902CA06091B(uLocal_327))
		{
			unk_0x44151B6071157DDD(uLocal_327, 0);
			unk_0x92931D2249E68921(0, 0, 0, 1, 0, 0);
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
			func_22(Local_51[iLocal_277 /*15*/].f_4, Local_51[iLocal_277 /*15*/].f_7);
		}
	}
	else if (unk_0x17D71902CA06091B(uLocal_327))
	{
		unk_0x44151B6071157DDD(uLocal_327, 0);
		unk_0x92931D2249E68921(0, 0, 0, 1, 0, 0);
		unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
	}
}

void func_22(struct<3> Param0, var uParam3)
{
	if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
	{
		if (!unk_0x17D71902CA06091B(uLocal_327) && !unk_0x4DA2E12E0157B5A3())
		{
			if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_262.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0x372F870A74439808(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_313 = unk_0xF976C624234A4AA8();
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
		{
			unk_0x4369A55DCA9625D1(iLocal_284, 3f);
		}
		iLocal_316 = 1;
	}
}

void func_23(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_298 = unk_0xF976C624234A4AA8();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		iVar1 = unk_0x4D3E68F73B727E49(6000, 16000);
		unk_0xE6D93A0484388DB3(unk_0x507DA4994C3D8EBD(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_286[iVar0]))
		{
			iVar1 = unk_0x4D3E68F73B727E49(6000, 16000);
			iLocal_292[iVar0] = unk_0x4D3E68F73B727E49(0, 2000);
			iLocal_299[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_24()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (unk_0x17D71902CA06091B(uLocal_327))
	{
		if (unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 218) * 127f));
		iVar11 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 219) * 127f));
		iVar12 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 220) * 127f));
		iVar13 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 221) * 127f));
		if (!unk_0xEEBA0A292090EE79())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar13);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar13 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar2)
			{
				fLocal_341 = fVar2;
			}
			if (fLocal_341 > fVar3)
			{
				fLocal_341 = fVar3;
			}
		}
		if ((iVar12 > 28 || iVar12 < -28) || unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar12);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar12 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_340 = (fLocal_340 + fVar0);
			if (fLocal_340 < fVar4)
			{
				fLocal_340 = fVar4;
			}
			if (fLocal_340 > fVar5)
			{
				fLocal_340 = fVar5;
			}
		}
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar2)
			{
				fLocal_341 = fVar2;
			}
			if (fLocal_341 > fVar3)
			{
				fLocal_341 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_340 = (fLocal_340 + fVar0);
			if (fLocal_340 < fVar4)
			{
				fLocal_340 = fVar4;
			}
			if (fLocal_340 > fVar5)
			{
				fLocal_340 = fVar5;
			}
		}
		func_25(unk_0x507DA4994C3D8EBD(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		unk_0x435B97ECA622D5B0(uLocal_327, fVar1);
		unk_0x04BEA87701970868(uLocal_327, unk_0x507DA4994C3D8EBD(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_327 = unk_0x07A7435490ED9AAB("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0x04BEA87701970868(uLocal_327, unk_0x507DA4994C3D8EBD(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0x80EA879A2C86EFE7(uLocal_327, 0.01f);
		fLocal_340 = -70f;
		fLocal_341 = 3f;
		func_25(unk_0x507DA4994C3D8EBD(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		unk_0x435B97ECA622D5B0(uLocal_327, fVar1);
		unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 0);
		unk_0x92931D2249E68921(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		if (unk_0x17D71902CA06091B(*uParam1))
		{
			uVar0 = unk_0xA9D6B28E708753B6(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0x46AA97C6CB72D170(*uParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x9F94F2CFDCA78C55(uLocal_286[2]))
	{
		if (unk_0xEC043AB2FEE0E94F(uLocal_286[2], -880529684) == 7)
		{
			if (unk_0xF976C624234A4AA8() > iLocal_335 + 8000)
			{
				unk_0xC9CD9F3D2675F791(uLocal_286[2], 0);
				Var0 = { unk_0x0CAFB9D38494283D(uLocal_286[2], unk_0x01E9A2D3AF075537(0f, 2f), unk_0x01E9A2D3AF075537(0f, 2f), 0.5f) };
				iVar3 = unk_0x4D3E68F73B727E49(1000, 6000);
				unk_0xE6D93A0484388DB3(uLocal_286[2], Var0, iVar3, 2049, 2);
				iLocal_335 = unk_0xF976C624234A4AA8();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_277 + 1;
	if (!iLocal_338 && unk_0x8D4100BAA46EE198())
	{
		unk_0xD43B1BB61E829561("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0x58FC9C7DF8FE009B(2, 223) || iLocal_315 == 1)
		{
			if (unk_0x8D4100BAA46EE198())
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
					{
						if (!Local_51[iVar0 /*15*/].f_14 && !Local_51[iVar0 /*15*/].f_9)
						{
							unk_0xC1B1E9A034A63A62(0);
							Local_51[iLocal_277 /*15*/].f_9 = 1;
							func_30(Local_51[iVar0 /*15*/].f_10, Local_51[iVar0 /*15*/].f_13);
							func_29();
							if (iVar0 == 13)
							{
								iLocal_338 = 1;
								func_28();
							}
							Local_51[iVar0 /*15*/].f_14 = 1;
							iLocal_277 = iVar0;
						}
						iLocal_315 = 0;
					}
				}
			}
		}
	}
}

void func_28()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
		{
			unk_0xAC57FBF981AB03F4(iLocal_284);
			unk_0xB5DC017AFD430D1B(&uLocal_325);
			unk_0x5E44C1186E137E21(0, iLocal_305, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			unk_0x5E44C1186E137E21(0, iLocal_305, Local_262.f_1, 3f, 0, joaat("tourbus"), iLocal_510, 3f, 15f);
			unk_0x6EE8A5CF9AC75F12(uLocal_325);
			unk_0x8229311A391A4EC6(iLocal_284, uLocal_325);
			unk_0x9F77DFFC61FCB68C(&uLocal_325);
		}
	}
}

void func_29()
{
	Global_14558 = 0;
	func_18();
}

void func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = iLocal_277 + 1;
	unk_0xD56AC40382654643("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x7C69A4879766A867(1000);
	while (!unk_0xC2C705ED6124A7C2())
	{
		unk_0xCEC2C1A952E78932();
		unk_0xD9E638F7F8DCAA60(2);
		if (!unk_0xCA8794CE207FC6D5(iLocal_305, 0))
		{
			func_214();
		}
		if (unk_0x9F94F2CFDCA78C55(iLocal_284))
		{
			func_214();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(1);
	}
	unk_0xBE5E0E5A454F4D6A(0f);
	if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
	{
		unk_0xAC57FBF981AB03F4(iLocal_284);
	}
	if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
	{
		unk_0x407F91A831576A66(Param0.f_0, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0);
		unk_0xF85858E5CBF4D9F0(iLocal_305, Param0.f_0, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(iLocal_305, fParam3);
		unk_0xADE31BE382A60FA4(iLocal_305, 0f);
		unk_0x5E44C1186E137E21(iLocal_284, iLocal_305, unk_0xBF1B13057E5119A4(iLocal_305, 1), 0f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		func_33(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
	{
		unk_0xD90C30D269B19096(iLocal_305);
		unk_0xE0E038A4E5C7727B(iLocal_305, 1, 1);
		if (iVar0 < 13)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
			{
				unk_0x5E44C1186E137E21(iLocal_284, iLocal_305, Local_51[iVar0 /*15*/].f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			}
		}
		else if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
		{
			unk_0x5E44C1186E137E21(iLocal_284, iLocal_305, Local_262.f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		}
		unk_0xADE31BE382A60FA4(iLocal_305, 8f);
	}
	func_31();
	unk_0x7152968414A8007F(3);
	iLocal_49 = 3;
	func_21(1);
	unk_0xAB5C0FE0C680BC7F("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x662E87A876F1069D(1000);
	while (unk_0xC17F446CF864854D())
	{
		unk_0xCEC2C1A952E78932();
		unk_0xD9E638F7F8DCAA60(2);
		func_21(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCEC2C1A952E78932();
	unk_0xD9E638F7F8DCAA60(2);
	func_21(1);
}

void func_31()
{
	Global_14558 = 0;
	func_32();
}

void func_32()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

void func_33(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x67C7B526372AB1F7(Param0, iParam3, iParam4, 127);
	if (unk_0xB6507CA6AC51E37A(uVar0))
	{
		iVar1 = (unk_0xF976C624234A4AA8() + iParam5);
		while (!unk_0x08F23802DAAA26B2(uVar0) && unk_0xF976C624234A4AA8() < iVar1)
		{
			if (bParam7)
			{
				func_35();
			}
			if (bParam6)
			{
				func_34();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0xF976C624234A4AA8() < iVar1)
		{
		}
		unk_0x1484CB72453DE620(uVar0);
	}
}

void func_34()
{
	Global_17098.f_6 = 1;
}

void func_35()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_36(int iParam0)
{
	if (Global_14551)
	{
		func_37(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_7())
	{
		Global_14393.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_277 + 1;
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!iLocal_338)
				{
					if (Local_51[12 /*15*/].f_9 || Local_51[13 /*15*/].f_14)
					{
						iLocal_338 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_51[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_51[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_51[12 /*15*/].f_9)
								{
									Local_51[13 /*15*/].f_9 = 1;
									iLocal_313 = unk_0xF976C624234A4AA8();
									iLocal_49 = 2;
								}
							}
						}
						else if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_51[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_305, 0))
							{
								func_22(Local_51[iVar0 /*15*/].f_4, Local_51[iVar0 /*15*/].f_7);
								iLocal_277 = iVar0;
								if (iLocal_317)
								{
									iLocal_317 = 0;
								}
								func_29();
								iLocal_49 = 1;
							}
							else
							{
								iLocal_49 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_22(Local_51[iLocal_277 /*15*/].f_4, Local_51[iLocal_277 /*15*/].f_7);
				iLocal_312 = unk_0xF976C624234A4AA8();
				if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
				{
					if (iVar1 <= 13)
					{
						func_76(unk_0xBF1B13057E5119A4(iLocal_305, 1), Local_51[iVar1 /*15*/].f_1, &Local_319, &Local_322, 500);
					}
					if (unk_0x65AB4C5AAF640EB0(Local_319.f_0, Local_319.f_1, Local_322.f_0, Local_322.f_1))
					{
						if ((iLocal_312 - iLocal_313) > 0)
						{
							if (func_75(&uLocal_342, "BUSTOAU", Local_51[iLocal_277 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0xB5DC017AFD430D1B(&uVar2);
										unk_0x5E44C1186E137E21(0, iLocal_305, -100.461f, -206.1412f, 44.4215f, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										unk_0x5E44C1186E137E21(0, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										unk_0x6EE8A5CF9AC75F12(uVar2);
										unk_0x8229311A391A4EC6(iLocal_284, uVar2);
										unk_0x9F77DFFC61FCB68C(&uVar2);
									}
									else
									{
										unk_0x5E44C1186E137E21(iLocal_284, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
									}
								}
								iLocal_313 = unk_0xF976C624234A4AA8();
								Local_51[iLocal_277 /*15*/].f_14 = 1;
								Local_51[iLocal_277 /*15*/].f_9 = 1;
								iLocal_49 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					iLocal_49 = 3;
				}
				break;
			
			case 3:
				iLocal_312 = unk_0xF976C624234A4AA8();
				func_40(Local_51[iLocal_277 /*15*/].f_4);
				if ((iLocal_312 - iLocal_313) > 5000)
				{
					if (!func_81())
					{
						iLocal_316 = 0;
						iLocal_313 = unk_0xF976C624234A4AA8();
						if (unk_0x4DA2E12E0157B5A3())
						{
							unk_0x0D1C3C2B4975D8AC(1);
						}
						if (Local_51[13 /*15*/].f_9 == 1)
						{
							iLocal_49 = 4;
						}
						else
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
							{
								unk_0x4369A55DCA9625D1(iLocal_284, 15f);
							}
							iLocal_49 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_214();
				break;
			}
	}
}

void func_40(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((unk_0xF976C624234A4AA8() - iLocal_298) > iLocal_292[iVar0] && iLocal_299[iVar0] == 0)
		{
			if (!unk_0xE5D56342B0FF1D0D(uLocal_286[iVar0]))
			{
				unk_0xE6D93A0484388DB3(uLocal_286[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_299[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_41()
{
	float fVar0[5];
	struct<3> Var6[5];
	
	if (func_73(1000))
	{
		iLocal_332 = 3;
	}
	iLocal_537 = 1;
	switch (iLocal_332)
	{
		case 0:
			if (unk_0x17D71902CA06091B(uLocal_327))
			{
				unk_0x44151B6071157DDD(uLocal_327, 0);
				unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
			}
			func_66(1, 1, 1, 0);
			unk_0x48840068BEF14F82(1);
			unk_0x255259988FBEFACC(0);
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
			unk_0x01DCF56A472637FD(1);
			uLocal_328 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_329 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x6F430D0F1783A56E(uLocal_328, 1);
			unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
			unk_0xB09853C2B8C94A37(uLocal_329, uLocal_328, 17000, 1, 1);
			func_75(&uLocal_342, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0xF85858E5CBF4D9F0(iLocal_305, Local_262.f_1, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(iLocal_305, Local_262.f_13);
			unk_0xD90C30D269B19096(iLocal_305);
			unk_0xCDC1FD4387DA32EC(iLocal_305, 3);
			if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
			{
				unk_0xAC57FBF981AB03F4(iLocal_284);
				unk_0x4369A55DCA9625D1(iLocal_284, 0f);
				unk_0xB5DC017AFD430D1B(&uLocal_325);
				unk_0xDD4FB99FF9DED807(0, iLocal_305, 24, 10000);
				unk_0x6EE8A5CF9AC75F12(uLocal_325);
				unk_0x8229311A391A4EC6(iLocal_284, uLocal_325);
				unk_0x9F77DFFC61FCB68C(&uLocal_325);
			}
			unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
			unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 268.4057f);
			unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
			iLocal_316 = 1;
			iLocal_313 = unk_0xF976C624234A4AA8();
			iLocal_332 = 1;
			break;
		
		case 1:
			iLocal_312 = unk_0xF976C624234A4AA8();
			if ((iLocal_312 - iLocal_313) > 3000)
			{
				unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
				unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 268.4057f);
				unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
				unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
				Var6[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var6[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var6[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var6[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var6[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_334 = 0;
				while (iLocal_334 < 5)
				{
					if (unk_0xFD68187442384158(uLocal_286[iLocal_334]))
					{
						if (!unk_0x9F94F2CFDCA78C55(uLocal_286[iLocal_334]))
						{
							unk_0xCEBD1B99CF343672(uLocal_286[iLocal_334]);
							unk_0x248DC16118AE5035(uLocal_286[iLocal_334], fVar0[iLocal_334]);
							unk_0xF85858E5CBF4D9F0(uLocal_286[iLocal_334], Var6[iLocal_334 /*3*/], 1, 0, 0, 1);
							unk_0xB68382181B4C4177(uLocal_286[iLocal_334], 1193033728, 0);
						}
					}
					iLocal_334++;
				}
				iLocal_313 = unk_0xF976C624234A4AA8();
				iLocal_332 = 2;
			}
			break;
		
		case 2:
			iLocal_312 = unk_0xF976C624234A4AA8();
			if ((iLocal_312 - iLocal_313) > 13000)
			{
				iLocal_332 = 3;
			}
			break;
		
		case 3:
			unk_0x6F430D0F1783A56E(uLocal_328, 0);
			unk_0x92931D2249E68921(0, 1, 3000, 0, 0, 0);
			unk_0xBE5E0E5A454F4D6A(0f);
			unk_0x44151B6071157DDD(uLocal_328, 0);
			unk_0x44151B6071157DDD(uLocal_329, 0);
			unk_0x48840068BEF14F82(0);
			unk_0x255259988FBEFACC(1);
			func_66(0, 1, 1, 0);
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			iLocal_313 = 10000;
			func_42();
			return 1;
			break;
	}
	return 0;
}

void func_42()
{
	func_46(-1, 0);
	func_43();
	func_214();
}

void func_43()
{
	func_44();
}

int func_44()
{
	if (func_45(0))
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

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_46(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_63(iParam0))
	{
		func_62(iParam0, iParam1);
		if (!func_61(51))
		{
			func_57("RE_REWARD", 1, 0, 4000, 10000, func_60(), 0, 138, 0);
			func_56(51);
		}
		if (func_55(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_48(func_54(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_47(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_47(7);
			}
			else
			{
				func_47(1);
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_97159 = iParam0;
}

void func_48(int iParam0, var uParam1, var uParam2)
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
		func_52((891 + iParam0), 1, -1, 1);
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
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
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
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
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
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_51(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_50() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_44();
				}
			}
		}
	}
}

int func_50()
{
	return Global_24444;
}

int func_51(int iParam0, int iParam1)
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
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_53()
{
	return Global_1312736;
}

int func_54(int iParam0, int iParam1)
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

int func_55(int iParam0)
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

void func_56(int iParam0)
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_59();
	}
}

void func_59()
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
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_60()
{
	func_11();
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

int func_61(int iParam0)
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_62(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_63(int iParam0)
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

int func_64()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_65(Var0);
	return uVar16;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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

void func_66(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_72(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_7())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_71(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_72(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_71(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_67(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_67(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_68())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_71(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_72(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_73(int iParam0)
{
	if (unk_0x8D4100BAA46EE198())
	{
		if ((unk_0xF976C624234A4AA8() - Global_27) > iParam0)
		{
			Global_26 = unk_0xF976C624234A4AA8();
		}
		Global_27 = unk_0xF976C624234A4AA8();
		if ((unk_0xF976C624234A4AA8() - Global_26) > iParam0)
		{
			if (func_74())
			{
				Global_26 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

int func_74()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

bool func_75(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_76(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!iLocal_317)
	{
		if (Param3.f_0 <= Param0.f_0)
		{
			*uParam6 = Param3.f_0;
			*uParam7 = Param0.f_0;
		}
		else
		{
			*uParam6 = Param0.f_0;
			*uParam7 = Param3.f_0;
		}
		if (Param3.f_1 <= Param0.f_1)
		{
			uParam6->f_1 = Param3.f_1;
			uParam7->f_1 = Param0.f_1;
		}
		else
		{
			uParam6->f_1 = Param0.f_1;
			uParam7->f_1 = Param3.f_1;
		}
		*uParam6 = { *uParam6 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		*uParam7 = { *uParam7 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		iLocal_317 = 1;
	}
}

void func_77()
{
	int iVar0[24];
	char* sVar25;
	
	sLocal_513[0] = "BUSTO_RAMB_1";
	sLocal_513[1] = "BUSTO_RAMB_2";
	sLocal_513[2] = "BUSTO_RAMB_3";
	sLocal_513[3] = "BUSTO_RAMB_4";
	sLocal_513[4] = "BUSTO_RAMB_5";
	sLocal_513[5] = "BUSTO_RAMB_6";
	sLocal_513[6] = "BUSTO_RAMB_7";
	sLocal_513[7] = "BUSTO_RAMB_8";
	sLocal_513[8] = "BUSTO_RAMB_9";
	sLocal_513[9] = "BUSTO_RAMB_10";
	sLocal_513[10] = "BUSTO_RAMB_11";
	sLocal_513[11] = "BUSTO_RAMB_12";
	sLocal_513[12] = "BUSTO_RAMB_13";
	sLocal_513[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_314)
	{
		case 0:
			iLocal_313 = unk_0xF976C624234A4AA8();
			iLocal_314 = 1;
			break;
		
		case 1:
			iLocal_312 = unk_0xF976C624234A4AA8();
			if ((iLocal_312 - iLocal_313) > 2000)
			{
				if (!func_81())
				{
					iLocal_313 = unk_0xF976C624234A4AA8();
					iLocal_314 = 2;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				unk_0x9C64F97D3F9CCA97("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_538)
			{
				iLocal_312 = unk_0xF976C624234A4AA8();
				if ((iLocal_312 - iLocal_313) > iLocal_541)
				{
					if (func_78(uLocal_286[iLocal_539]))
					{
						if (iLocal_277 == 0)
						{
							sVar25 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_277 % 2) == 0)
						{
							sVar25 = "TOUR_CHAT";
						}
						else
						{
							sVar25 = "TOUR_LANDMARK";
						}
						unk_0x9C64F97D3F9CCA97("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0xF3E45A7DABC97254(uLocal_286[iLocal_539], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_540++;
						if (iLocal_540 == 3)
						{
							iLocal_538 = 0;
						}
						iLocal_541 = unk_0x4D3E68F73B727E49(9000, 14000);
						iLocal_313 = unk_0xF976C624234A4AA8();
					}
					iLocal_539++;
					if (iLocal_539 == 5)
					{
						iLocal_539 = 0;
					}
				}
			}
			else if (iLocal_507 < 14)
			{
				iLocal_312 = unk_0xF976C624234A4AA8();
				if ((iLocal_312 - iLocal_313) > 10000)
				{
					if (!func_81())
					{
						if (func_80(&uLocal_342, "BUSTOAU", "BUSTO_RAMB", sLocal_513[iLocal_507], 4, 0, 0))
						{
							iLocal_507++;
							iLocal_313 = unk_0xF976C624234A4AA8();
							iLocal_538 = 1;
							iLocal_540 = 0;
						}
						else
						{
							unk_0x9C64F97D3F9CCA97("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_538 = 1;
			}
			break;
	}
}

int func_78(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		if (unk_0xB5A57318FFBC236D(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79()
{
	if (unk_0x58FC9C7DF8FE009B(2, 222) && !iLocal_537)
	{
		if (unk_0xFD68187442384158(iLocal_305))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_305, 0))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
						{
							unk_0xDD4FB99FF9DED807(iLocal_284, iLocal_305, 24, 5000);
							fLocal_307 = unk_0x11F6A4A45943670E(iLocal_305);
							while (fLocal_307 > 5f)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
								{
									fLocal_307 = unk_0x11F6A4A45943670E(iLocal_305);
								}
							}
							func_29();
							unk_0x7152968414A8007F(iLocal_509);
							unk_0xC9CD9F3D2675F791(unk_0x507DA4994C3D8EBD(), 1);
							unk_0xAB5C0FE0C680BC7F("RE_BUS_TOUR_SCENE");
							unk_0x66685ABDD5A8BFC3(iLocal_305, 0);
							if (unk_0x17D71902CA06091B(uLocal_327))
							{
								unk_0x44151B6071157DDD(uLocal_327, 0);
								unk_0x92931D2249E68921(0, 0, 0, 1, 0, 0);
								unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
							}
							unk_0x9632B185BE7E73E6(unk_0x507DA4994C3D8EBD(), iLocal_305, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_80(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_81()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_82()
{
	switch (iLocal_277)
	{
		case 0:
			unk_0x6471EB4B59AE203B(0.5f);
			break;
		
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			unk_0x6471EB4B59AE203B(0.6f);
			break;
	}
}

void func_83()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_285) && !unk_0x9F94F2CFDCA78C55(iLocal_284))
	{
		switch (iLocal_50)
		{
			case 0:
				unk_0x2E98407DE29E0D76(0);
				unk_0xD56AC40382654643("RE_BUS_TOUR_SCENE");
				unk_0x182B7266FFDC76F3(iLocal_305, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0xC9CD9F3D2675F791(unk_0x507DA4994C3D8EBD(), 0);
				func_66(1, 1, 1, 0);
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 256);
				unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
				unk_0x13196E39740F8C20(Local_262.f_1, 30f, 0);
				unk_0xEA0F21C3BB415566(iLocal_284, 0);
				unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iLocal_305, 2);
				unk_0x48840068BEF14F82(1);
				unk_0x255259988FBEFACC(0);
				uLocal_328 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_329 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x6F430D0F1783A56E(uLocal_328, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				unk_0xB09853C2B8C94A37(uLocal_329, uLocal_328, 6500, 1, 1);
				if (unk_0xCA8794CE207FC6D5(unk_0xF6EA6ED8FFB5B505(), 0))
				{
					if (unk_0x2F406E91B59DB558(unk_0xF6EA6ED8FFB5B505(), iLocal_305, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0x248DC16118AE5035(unk_0xF6EA6ED8FFB5B505(), 65f);
						unk_0xF85858E5CBF4D9F0(unk_0xF6EA6ED8FFB5B505(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0xE9AD5BEA272D4AC8("BusTours");
				if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
				{
					func_76(unk_0xBF1B13057E5119A4(iLocal_305, 1), Local_51[0 /*15*/].f_1, &Local_319, &Local_322, 500);
					iLocal_543 = unk_0xF976C624234A4AA8();
					iLocal_50 = 1;
				}
				if (unk_0x25A5D05A7AF9563B() == 4)
				{
					iLocal_318 = 1;
				}
				iLocal_544 = 0;
				break;
			
			case 1:
				if (!iLocal_339)
				{
					func_110();
				}
				if ((unk_0xF976C624234A4AA8() - iLocal_543) > 5000 && !iLocal_542)
				{
					func_75(&uLocal_342, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_109("Enter_bus"))
					{
						unk_0x4A4C1A1BC79EFE8F(1);
					}
					iLocal_542 = 1;
				}
				if ((unk_0xF976C624234A4AA8() - iLocal_543) > 6200)
				{
					if (iLocal_318 == 1)
					{
						if (iLocal_544 == 0)
						{
							unk_0x8EEEED91D5DD768C("CamPushInNeutral", 0, 0);
							unk_0x84795EA8F54230A1(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_544 = 1;
						}
					}
				}
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					if ((unk_0x764E7360C13E7383(unk_0x507DA4994C3D8EBD(), iLocal_305) && unk_0x764E7360C13E7383(iLocal_285, iLocal_305)) && unk_0x764E7360C13E7383(iLocal_284, iLocal_305))
					{
						iLocal_50 = 2;
					}
					else if (func_73(1000))
					{
						if (unk_0xC51FBEBD87CFD69C(iLocal_305, 0))
						{
							unk_0x11460EBE0487B44F(iLocal_285, iLocal_305, 0);
						}
						iLocal_50 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x5E44C1186E137E21(iLocal_284, iLocal_305, Local_51[0 /*15*/].f_1, Local_51[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
				unk_0x6F430D0F1783A56E(uLocal_328, 0);
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				unk_0x44151B6071157DDD(uLocal_328, 0);
				unk_0x44151B6071157DDD(uLocal_329, 0);
				unk_0x48840068BEF14F82(0);
				unk_0x255259988FBEFACC(1);
				unk_0xCEC2C1A952E78932();
				unk_0xD9E638F7F8DCAA60(2);
				func_66(0, 1, 1, 0);
				iLocal_330 = func_10();
				func_84(iLocal_330, 1, iLocal_511);
				iLocal_509 = unk_0xCFCDD75CC6F54408();
				if (!iLocal_318)
				{
					unk_0x7152968414A8007F(3);
				}
				else
				{
					func_21(1);
				}
				unk_0xA0A65B537B1F11EC(&uLocal_309);
				iLocal_48 = 2;
				break;
		}
	}
	else
	{
		func_214();
	}
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_85(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_108();
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
					func_107(99, 1);
					func_106(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_106(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_106(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_92(5))
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
							func_106(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_106(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_106(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_92(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_106(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_106(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_106(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_106(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_106(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_106(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_106(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_106(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_106(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x00ADB26EA48763F7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_106(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_106(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_106(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_106(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_92(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_106(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_106(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_106(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_106(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_91(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_107(95, iParam3);
					break;
				
				case 1:
					func_107(97, iParam3);
					break;
				
				case 2:
					func_107(96, iParam3);
					break;
			}
			func_107(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_88(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_88(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_106(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_106(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_106(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_87(iParam0);
	if (Global_34909 == 15)
	{
		func_86(0);
	}
	return 1;
}

void func_86(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_88(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_90() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_90() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_89(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_89(int iParam0)
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

int func_90()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_91(int iParam0)
{
	func_107(93, iParam0);
	func_107(29, iParam0);
	func_107(30, iParam0);
}

bool func_92(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_90() /*8053*/].f_5756.f_10, iParam0);
}

int func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_105(&Global_2543759))
	{
		if (func_103(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_102(uParam0, iVar0);
		iVar0++;
	}
	func_100(&(uParam0->f_62), (8f - 0.5f));
}

void func_100(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_101() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_101()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

void func_102(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
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

bool func_105(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_108()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

bool func_109(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_110()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
	{
		unk_0xAC57FBF981AB03F4(iLocal_285);
		unk_0x36B42DB2912118E2(iLocal_285, iLocal_305, 10000, 0, 2f, 262144, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_285, 1);
		iLocal_339 = 1;
	}
}

void func_111()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (func_151())
		{
			unk_0xCDC1FD4387DA32EC(iLocal_305, 3);
			unk_0x43F7F4A62787BC4B(iLocal_305, 0);
			func_214();
		}
		else if (func_142(4))
		{
			if ((unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_305, 5f, 5f, 5f, 0, 1, 0) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && !func_109("TX_H02"))
			{
				if (func_140())
				{
					if (!iLocal_512)
					{
						unk_0xCDC1FD4387DA32EC(iLocal_305, 1);
						iLocal_512 = 1;
					}
					unk_0xD43B1BB61E829561("Enter_bus", 0);
					if (unk_0xBD883E84B4B6E14E(2, 23))
					{
						unk_0x36B42DB2912118E2(unk_0x507DA4994C3D8EBD(), iLocal_305, -1, 2, 1f, 8, 0);
					}
					if (!unk_0xD361727124133DF3(uLocal_309))
					{
						if (unk_0xD361727124133DF3(uLocal_310))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_310);
						}
						uLocal_309 = unk_0xB6F075D13B917FBE(iLocal_305);
						unk_0x109908E4511B0839(uLocal_309, 1);
						unk_0x1D8833C0F155BFE7(uLocal_309, Global_24490);
						if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
						{
							unk_0x8E759206778E571F(iLocal_285, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
						}
						if (!func_139())
						{
							if (func_127())
							{
								func_214();
							}
							else
							{
								func_117(1);
							}
						}
					}
					if (func_116())
					{
						iLocal_537 = 0;
						func_115(1);
					}
				}
				else
				{
					unk_0xD43B1BB61E829561("No_bus_money", 0);
					if (iLocal_512)
					{
						unk_0xCDC1FD4387DA32EC(iLocal_305, 2);
						iLocal_512 = 0;
					}
				}
			}
		}
		if (iLocal_334 < 5)
		{
			if (func_112(&(uLocal_286[iLocal_334])))
			{
				iLocal_334++;
			}
		}
	}
}

int func_112(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x0B676D277AA38546(Local_278, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			if (func_114(*uParam0))
			{
				if (!unk_0x73E2404DC70203CD(*uParam0))
				{
					unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
					unk_0xAC57FBF981AB03F4(*uParam0);
					unk_0x2DC5B31EBB810396(*uParam0, 1);
					unk_0x3F671607BC1804B5(*uParam0, "randompassenger");
					unk_0x7FEDD088E489CE41(*uParam0, 134, 1);
					switch (iLocal_334)
					{
						case 0:
							if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
							{
								unk_0x11460EBE0487B44F(*uParam0, iLocal_305, 3);
								unk_0xA1E4BA3B17C6D931(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
							{
								unk_0x11460EBE0487B44F(*uParam0, iLocal_305, 7);
								unk_0xA1E4BA3B17C6D931(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
							{
								unk_0x11460EBE0487B44F(*uParam0, iLocal_305, 6);
								unk_0xA1E4BA3B17C6D931(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
							{
								unk_0x11460EBE0487B44F(*uParam0, iLocal_305, 8);
								unk_0xA1E4BA3B17C6D931(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
							{
								unk_0x11460EBE0487B44F(*uParam0, iLocal_305, 1);
								unk_0xA1E4BA3B17C6D931(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_113(unk_0xB9DC6B81F29B0CA8(*uParam0));
					unk_0x454E090239AFF6E8(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_113(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = unk_0x4D3E68F73B727E49(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = unk_0x4D3E68F73B727E49(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x26EA758C2A691D06(uParam0) == joaat("a_m_m_tramp_01") || unk_0x26EA758C2A691D06(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x26EA758C2A691D06(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x26EA758C2A691D06(iParam0) == joaat("s_m_y_cop_01")) || unk_0x26EA758C2A691D06(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x26EA758C2A691D06(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_115(int iParam0)
{
	iLocal_50 = 0;
	iLocal_48 = iParam0;
}

int func_116()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_305, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD()) == iLocal_305)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_121())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_55(Global_97162))
		{
			func_118(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_55(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_119(func_120(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_119(func_120(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_119(func_120(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_119(var uParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

char* func_120(int iParam0)
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

int func_121()
{
	switch (func_122(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_122(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_126(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
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
		if (!func_124(iParam2))
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
			func_123(uParam0, iParam4);
		}
	}
	return 2;
}

void func_123(var uParam0, int iParam1)
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

bool func_124(int iParam0)
{
	return func_125(iParam0, Global_34909);
}

int func_125(int iParam0, int iParam1)
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

int func_126(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_124(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_127()
{
	if (!func_124(5))
	{
		return 1;
	}
	if (func_135())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_128(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_128(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_12(func_10()))
		{
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_129(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_129(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_130(uParam1, "Abigail1", func_132(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 1:
			func_130(uParam1, "Abigail2", func_132(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 2:
			func_130(uParam1, "Barry1", func_132(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 3:
			func_130(uParam1, "Barry2", func_132(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 4:
			func_130(uParam1, "Barry3", func_132(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 5:
			func_130(uParam1, "Barry3A", func_132(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 6:
			func_130(uParam1, "Barry3C", func_132(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 7:
			func_130(uParam1, "Barry4", func_132(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_131(iParam0), 0, 0);
			break;
		
		case 8:
			func_130(uParam1, "Dreyfuss1", func_132(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 9:
			func_130(uParam1, "Epsilon1", func_132(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 10:
			func_130(uParam1, "Epsilon2", func_132(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 11:
			func_130(uParam1, "Epsilon3", func_132(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 12:
			func_130(uParam1, "Epsilon4", func_132(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 13:
			func_130(uParam1, "Epsilon5", func_132(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 14:
			func_130(uParam1, "Epsilon6", func_132(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 15:
			func_130(uParam1, "Epsilon7", func_132(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 16:
			func_130(uParam1, "Epsilon8", func_132(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 17:
			func_130(uParam1, "Extreme1", func_132(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 18:
			func_130(uParam1, "Extreme2", func_132(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 19:
			func_130(uParam1, "Extreme3", func_132(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 20:
			func_130(uParam1, "Extreme4", func_132(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 21:
			func_130(uParam1, "Fanatic1", func_132(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_131(iParam0), 1, 0);
			break;
		
		case 22:
			func_130(uParam1, "Fanatic2", func_132(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_131(iParam0), 1, 0);
			break;
		
		case 23:
			func_130(uParam1, "Fanatic3", func_132(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_131(iParam0), 0, 1);
			break;
		
		case 24:
			func_130(uParam1, "Hao1", func_132(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_131(iParam0), 0, 1);
			break;
		
		case 25:
			func_130(uParam1, "Hunting1", func_132(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 26:
			func_130(uParam1, "Hunting2", func_132(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 27:
			func_130(uParam1, "Josh1", func_132(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 28:
			func_130(uParam1, "Josh2", func_132(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 29:
			func_130(uParam1, "Josh3", func_132(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 30:
			func_130(uParam1, "Josh4", func_132(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 31:
			func_130(uParam1, "Maude1", func_132(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 32:
			func_130(uParam1, "Minute1", func_132(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 33:
			func_130(uParam1, "Minute2", func_132(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 34:
			func_130(uParam1, "Minute3", func_132(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 35:
			func_130(uParam1, "MrsPhilips1", func_132(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 36:
			func_130(uParam1, "MrsPhilips2", func_132(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 37:
			func_130(uParam1, "Nigel1", func_132(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 38:
			func_130(uParam1, "Nigel1A", func_132(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 39:
			func_130(uParam1, "Nigel1B", func_132(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_131(iParam0), 1, 1);
			break;
		
		case 40:
			func_130(uParam1, "Nigel1C", func_132(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_131(iParam0), 1, 1);
			break;
		
		case 41:
			func_130(uParam1, "Nigel1D", func_132(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_131(iParam0), 1, 1);
			break;
		
		case 42:
			func_130(uParam1, "Nigel2", func_132(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 43:
			func_130(uParam1, "Nigel3", func_132(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_131(iParam0), 1, 1);
			break;
		
		case 44:
			func_130(uParam1, "Omega1", func_132(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 45:
			func_130(uParam1, "Omega2", func_132(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 46:
			func_130(uParam1, "Paparazzo1", func_132(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 47:
			func_130(uParam1, "Paparazzo2", func_132(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 48:
			func_130(uParam1, "Paparazzo3", func_132(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 49:
			func_130(uParam1, "Paparazzo3A", func_132(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 50:
			func_130(uParam1, "Paparazzo3B", func_132(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 51:
			func_130(uParam1, "Paparazzo4", func_132(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 52:
			func_130(uParam1, "Rampage1", func_132(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 54:
			func_130(uParam1, "Rampage3", func_132(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 55:
			func_130(uParam1, "Rampage4", func_132(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 56:
			func_130(uParam1, "Rampage5", func_132(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_131(iParam0), 0, 0);
			break;
		
		case 53:
			func_130(uParam1, "Rampage2", func_132(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_131(iParam0), 1, 0);
			break;
		
		case 57:
			func_130(uParam1, "TheLastOne", func_132(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 58:
			func_130(uParam1, "Tonya1", func_132(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 59:
			func_130(uParam1, "Tonya2", func_132(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 60:
			func_130(uParam1, "Tonya3", func_132(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 61:
			func_130(uParam1, "Tonya4", func_132(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		case 62:
			func_130(uParam1, "Tonya5", func_132(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_131(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_130(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_131(int iParam0)
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

struct<2> func_132(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_133(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_133(int iParam0)
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

int func_134()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_135()
{
	if (func_138() && !func_134())
	{
		return 1;
	}
	if (func_137() && func_136())
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return Global_96891 > 0;
}

int func_137()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_139()
{
	if ((Global_97162 == func_64() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	if (func_141(func_10()) >= iLocal_511)
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iVar0 = func_10();
				if (!func_12(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_150()) || Global_96220) || Global_24446) || func_149()) || func_17(8, -1)) || func_148()) || func_147()) || func_146()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_150()) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_148()) || func_147()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_150()) || Global_96220) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_148()) || func_147()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_150()) || Global_96220) || Global_24446) || func_149()) || func_17(8, -1)) || func_148()) || func_147()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_150() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_17(8, -1)) || func_145()) || func_144()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_148()) || func_147()) || func_144()) || func_143())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_150()) || Global_24446) || func_149()) || func_17(8, -1)) || func_147()) || func_146()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_150()) || func_147()) || Global_96220) || Global_24446) || func_149()) || Global_35953) || func_17(8, -1)) || func_146()) || func_144()) || func_145()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_150()) || Global_96220) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_144()) || func_148()) || func_147()) || func_145())
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

var func_143()
{
	return Global_89823.f_1;
}

int func_144()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_145()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_146()
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

bool func_147()
{
	return Global_89836.f_291 > 0;
}

bool func_148()
{
	return Global_89836.f_290 > 0;
}

var func_149()
{
	return Global_1315898;
}

int func_150()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_151()
{
	if (func_164(iLocal_285))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
		{
			if (func_156(iLocal_285))
			{
				func_154(iLocal_285, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_153();
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
	{
		if (((func_156(iLocal_284) || !unk_0x2A24448FF232F834(iLocal_284, 0)) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_284)) || unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_284))
		{
			func_152(iLocal_285);
			return 1;
		}
	}
	else
	{
		func_152(iLocal_285);
		return 1;
	}
	if (unk_0x6255AE2591FE7603(iLocal_305, unk_0x507DA4994C3D8EBD(), 1))
	{
		if (func_164(iLocal_285))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
			{
				func_152(iLocal_285);
				func_154(iLocal_285, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_214();
	}
	if (unk_0xE76C684D1C903A71() >= 19 || unk_0xE76C684D1C903A71() <= 6)
	{
		if (!func_81())
		{
			if (func_75(&uLocal_342, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_305, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
{
	if (func_164(iLocal_285))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
		{
			unk_0x2DC5B31EBB810396(uParam0, 0);
			unk_0xAC57FBF981AB03F4(uParam0);
			unk_0xA859D289EEB2D72A(iParam0, unk_0x507DA4994C3D8EBD(), 100f, -1, 0, 0);
			unk_0xA1E4BA3B17C6D931(iParam0, 1);
			func_31();
		}
	}
}

void func_153()
{
	if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_285, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_312 = unk_0xF976C624234A4AA8();
		if ((iLocal_312 - iLocal_313) > 10000)
		{
			if (!func_81())
			{
				func_75(&uLocal_342, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_313 = unk_0xF976C624234A4AA8();
		}
	}
}

void func_154(var uParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(uParam0, sParam1, func_155(iParam2), 1);
}

int func_155(int iParam0)
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

int func_156(var uParam0)
{
	if (func_157(uParam0, &uLocal_336, &uLocal_333, iLocal_331, bLocal_337, 1077936128, 0) || unk_0x1983DA3C921BB046(uParam0))
	{
		func_152(uParam0);
		return 1;
	}
	return 0;
}

int func_157(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0xE5D56342B0FF1D0D(uParam0) && !bParam4)
	{
		if (unk_0x73B082A8BFC119BA(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0) && !bParam4)
		{
			Var3 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			Var6 = { unk_0xBF1B13057E5119A4(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x61D8FEAF64881CDA(iParam3, 3))
			{
				if (func_163(iParam0, iParam6))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_161(iParam0);
					return 1;
				}
			}
			if (!unk_0x61D8FEAF64881CDA(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x0982F2F40B035E77(Var6, fParam5, 1))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_161(iParam0);
					return 1;
				}
				if (unk_0xEE93FF4158B54B09(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_161(iParam0);
					return 1;
				}
			}
			if (!unk_0x61D8FEAF64881CDA(iParam3, 2))
			{
				fVar0 = unk_0x009E72A131A3CFE4(unk_0x507DA4994C3D8EBD());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
				{
					if (unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x15DEAA4402D18301(iParam0, unk_0x507DA4994C3D8EBD(), 17))
							{
								func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_162("	aggro Ped knows player is pointing gun\n");
								func_158("		lockOnTimer = ", *uParam2);
								func_162("\n");
								func_158("		time since not LockedOn = ", (unk_0xF976C624234A4AA8() - iLocal_42));
								func_162("\n");
								bVar2 = true;
								if (unk_0xF976C624234A4AA8() > (iLocal_42 + *uParam2))
								{
									func_162("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_161(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0x61D8FEAF64881CDA(iParam3, 0))
			{
				if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_161(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_42 = unk_0xF976C624234A4AA8();
	}
	return 0;
}

void func_158(char* sParam0, int iParam1)
{
	func_160(sParam0);
	func_159(iParam1);
}

void func_159(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_160(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

void func_161(var uParam0)
{
	unk_0x7416091E97852604(uParam0);
}

void func_162(char* sParam0)
{
	func_160(sParam0);
}

int func_163(int iParam0, int iParam1)
{
	if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x6255AE2591FE7603(uParam0, unk_0x507DA4994C3D8EBD(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		if ((unk_0xD7873D6F1741A9A4(iParam0) - unk_0x5D422B4764FA2ACA(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_165()
{
	unk_0x2C5CC0AC66859B07(0, 1);
	unk_0x2C5CC0AC66859B07(1, 1);
	unk_0x2C5CC0AC66859B07(2, 1);
	unk_0x2C5CC0AC66859B07(3, 1);
	unk_0x2C5CC0AC66859B07(4, 1);
	unk_0x2C5CC0AC66859B07(5, 1);
	unk_0x2C5CC0AC66859B07(6, 1);
	unk_0x2C5CC0AC66859B07(7, 1);
	unk_0x2C5CC0AC66859B07(8, 1);
}

void func_166()
{
	unk_0x0CFD4301FF0DDCA9(unk_0xAF65E5A58BE87D95());
	unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 5);
	unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 3);
	unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 15);
	unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 2);
	unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 4);
}

void func_167()
{
	if (iLocal_317)
	{
		unk_0x32BB0750E9174D6C(Local_319.f_0, Local_319.f_1, Local_322.f_0, Local_322.f_1);
	}
}

void func_168()
{
	if (unk_0xDF94AC3FC45A62F4("RAIN") || unk_0xDF94AC3FC45A62F4("THUNDER"))
	{
		unk_0xDD37DC2407389271("OVERCAST", 10000f);
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	
	if (func_172())
	{
		func_214();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0xCBE6AC5010E5CE5C(iVar0);
		unk_0xCBE6AC5010E5CE5C(iVar1);
		unk_0x395C5D98343F0040(sLocal_508);
		unk_0xCBE6AC5010E5CE5C(joaat("tourbus"));
		unk_0x481B0AD01AC057F7("BUSTOUR", 2);
		if ((((unk_0xD291857D0C9C7FEC(iVar0) && unk_0xD291857D0C9C7FEC(iVar1)) && unk_0xCE40391AB65FE305(sLocal_508)) && unk_0xD291857D0C9C7FEC(joaat("tourbus"))) && unk_0x6C741637F73EA9EC(2))
		{
			unk_0xD19A0D6084034A69(0);
			unk_0x839399EDBB568AF1(Local_278, &uLocal_281, &uLocal_306, 1, 1077936128, 0);
			iLocal_305 = unk_0x546974B676313326(joaat("tourbus"), Local_262.f_1, Local_262.f_13, 1, 1);
			unk_0xD90C30D269B19096(iLocal_305);
			unk_0xCDC1FD4387DA32EC(iLocal_305, 3);
			unk_0xE22810FDCF98C21A(iLocal_305, 0);
			unk_0xAEB769DB49B3E4FC(iLocal_305, "OFF");
			unk_0xCDED36A388C5C6F3(iLocal_305, 0, 0);
			unk_0x25A5C91E8079E04E(iLocal_305, 2, 1);
			unk_0x941F924D5E9C2140(joaat("tourbus"), 1);
			unk_0xDAFFEDA410DDC991(iLocal_305, 100f);
			iLocal_284 = unk_0xC68FBD37098CE438(iLocal_305, 26, iVar1, -1, 1, 1);
			unk_0x2DC5B31EBB810396(iLocal_284, 1);
			unk_0x7FEDD088E489CE41(iLocal_284, 251, 1);
			unk_0xBF75756655C78CFC(iLocal_284, 1);
			if (unk_0xFD68187442384158(iLocal_284))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
				{
					unk_0xF2685765B7BEBCB0(iLocal_284, 3, 1, 2, 0);
					unk_0xF2685765B7BEBCB0(iLocal_284, 4, 0, 2, 0);
				}
			}
			iLocal_285 = unk_0x7B88529CAE3B7F15(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0x454E090239AFF6E8(iLocal_285, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x2DC5B31EBB810396(iLocal_285, 1);
			unk_0x6A750A31D18DA81A(iLocal_285, 0);
			unk_0xF2685765B7BEBCB0(iLocal_285, 0, 1, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_285, 2, 1, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_285, 3, 0, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_285, 4, 1, 0, 0);
			unk_0xB5DC017AFD430D1B(&uLocal_326);
			unk_0xEC0A546609840086(0, sLocal_508, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, sLocal_508, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, sLocal_508, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xC3DFF4EEE866DBF6(uLocal_326, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_326);
			unk_0x8229311A391A4EC6(iLocal_285, uLocal_326);
			unk_0x9F77DFFC61FCB68C(&uLocal_326);
			func_171(&uLocal_342, 3, iLocal_285, "TOURGUIDE", 0, 1);
			if (!unk_0xD361727124133DF3(uLocal_310))
			{
				uLocal_310 = unk_0xB6F075D13B917FBE(iLocal_305);
				unk_0x01DF6D56C47E7482(uLocal_310, 85);
			}
			func_170();
			iLocal_47 = 1;
		}
	}
}

void func_170()
{
	unk_0x3A1E687904400847(iLocal_284, 17, 1);
	unk_0x3A1E687904400847(iLocal_285, 17, 1);
	unk_0x46B6351EE89452C8("re_bus_tours1", &uLocal_308);
	unk_0xE440546F94B26235(iLocal_284, uLocal_308);
	unk_0xE440546F94B26235(iLocal_285, uLocal_308);
	unk_0xCA4EA7D4F6DCCD43(1, uLocal_308, joaat("player"));
}

void func_171(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

int func_172()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_135())
	{
		return 1;
	}
	if (func_128(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_173()
{
}

void func_174()
{
}

void func_175()
{
	struct<15> Var0;
	struct<15> Var15;
	struct<15> Var30;
	struct<15> Var45;
	struct<15> Var60;
	struct<15> Var75;
	struct<15> Var90;
	struct<15> Var105;
	struct<15> Var120;
	struct<15> Var135;
	struct<15> Var150;
	struct<15> Var165;
	struct<15> Var180;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0.f_0 = "BUSTO_P1";
	Var15.f_1 = { -214.9f, 267.4f, 91.5f };
	Var15.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var15.f_7 = 9000;
	Var15.f_8 = (8f - 1f);
	Var15.f_10 = { -188.67f, 265.43f, 92.15f };
	Var15.f_13 = 81.79f;
	Var15.f_0 = "BUSTO_P5";
	Var30.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var30.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var30.f_7 = 9000;
	Var30.f_8 = 8f;
	Var30.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var30.f_13 = 85f;
	Var30.f_0 = "BUSTO_P6";
	Var45.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var45.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var45.f_7 = 9000;
	Var45.f_8 = (8f + 2f);
	Var45.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var45.f_13 = 25f;
	Var45.f_0 = "BUSTO_P7";
	Var60.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var60.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var60.f_7 = 9000;
	Var60.f_8 = (8f + 3f);
	Var60.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var60.f_13 = 105f;
	Var60.f_0 = "BUSTO_P8";
	Var75.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var75.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var75.f_7 = 9000;
	Var75.f_8 = (8f + 2f);
	Var75.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var75.f_13 = 47f;
	Var75.f_0 = "BUSTO_P9";
	Var90.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var90.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var90.f_7 = 9000;
	Var90.f_8 = (8f + 4f);
	Var90.f_10 = { -1168.448f, 257.0845f, 66.3477f };
	Var90.f_13 = 105f;
	Var90.f_0 = "BUSTO_P10";
	Var105.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var105.f_4 = { -1421.479f, -193.5715f, 50f };
	Var105.f_7 = 9000;
	Var105.f_8 = (8f + 4f);
	Var105.f_10 = { -1398.391f, -114.7998f, 50.028f };
	Var105.f_13 = 178f;
	Var105.f_0 = "BUSTO_P11";
	Var120.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var120.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var120.f_7 = 9000;
	Var120.f_8 = (15f + 4f);
	Var120.f_10 = { -1356.912f, -437.5389f, 34.0665f };
	Var120.f_13 = 215f;
	Var120.f_0 = "BUSTO_P3";
	Var135.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var135.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var135.f_7 = 9000;
	Var135.f_8 = (15f + 6f);
	Var135.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var135.f_13 = 290f;
	Var135.f_0 = "BUSTO_P2";
	Var150.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var150.f_4 = { -695f, 22f, 53f };
	Var150.f_7 = 9000;
	Var150.f_8 = (15f + 5f);
	Var150.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var150.f_13 = 27.9347f;
	Var150.f_0 = "BUSTO_P14";
	Var165.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var165.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var165.f_7 = 6000;
	Var165.f_8 = (15f + 5f);
	Var165.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var165.f_13 = 250f;
	Var165.f_0 = "BUSTO_P13";
	Var180.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var180.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var180.f_7 = 6000;
	Var180.f_8 = (15f + 3f);
	Var180.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var180.f_13 = 70f;
	Var180.f_0 = "BUSTO_P4";
	Local_262.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_262.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_262.f_7 = -1;
	Local_262.f_8 = 8f;
	Local_262.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_262.f_13 = 70f;
	Local_262.f_0 = "BUSTO_Px";
	func_176(Var0);
	func_176(Var15);
	func_176(Var30);
	func_176(Var45);
	func_176(Var60);
	func_176(Var75);
	func_176(Var90);
	func_176(Var105);
	func_176(Var120);
	func_176(Var135);
	func_176(Var150);
	func_176(Var165);
	func_176(Var180);
	func_176(Local_262);
	iLocal_277 = 0;
}

void func_176(char[60] cParam0)
{
	Local_51[iLocal_277 /*15*/] = { cParam0 };
	iLocal_277++;
}

void func_177(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_179(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_178();
}

void func_178()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_179(int iParam0)
{
	Global_97162 = iParam0;
}

int func_180(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_64();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_212())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_134())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_45(0))
		{
			return 0;
		}
		if (func_135())
		{
			return 0;
		}
		if (func_211())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_128(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_210(iParam3))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_209(func_10()) == 4 || func_209(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_208(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_207(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_206())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_142(4))
		{
			return 0;
		}
		if (!func_124(5))
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
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_205(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_210(30) && !func_205(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_12(func_10()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_204(iVar8))
				{
					if (func_182(iVar4))
					{
						if (!func_181(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
							{
								if (func_10() != iVar4)
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

bool func_181(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_194(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
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
	
	func_203(&uVar0, unk_0x2784A8234E9B4202());
	func_202(&uVar0, unk_0x06F66CEDC24218A4());
	func_201(&uVar0, unk_0xE76C684D1C903A71());
	func_200(&uVar0, unk_0xA277D6C04B4B44C8());
	func_199(&uVar0, unk_0x1285C2DD1E4945FF());
	func_198(&uVar0, unk_0xCFC08A7C99F98C5B());
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
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	func_9();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_207(int iParam0)
{
	return func_196(func_197(), iParam0);
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_209(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_210(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_212())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_211()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_212()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_213()
{
	if (unk_0xE76C684D1C903A71() > 19 || unk_0xE76C684D1C903A71() < 6)
	{
		return 0;
	}
	return 1;
}

void func_214()
{
	int iVar0;
	
	unk_0x262D794F49C1A5EB();
	unk_0x3B89C082BD00A29F();
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(0);
		unk_0xBE5E0E5A454F4D6A(0f);
	}
	if (unk_0x17D71902CA06091B(uLocal_328))
	{
		unk_0x6F430D0F1783A56E(uLocal_328, 0);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x44151B6071157DDD(uLocal_328, 0);
		unk_0x48840068BEF14F82(0);
	}
	if (unk_0x17D71902CA06091B(uLocal_329))
	{
		unk_0x44151B6071157DDD(uLocal_329, 0);
	}
	if (iLocal_48 >= 2)
	{
		unk_0x7152968414A8007F(iLocal_509);
	}
	unk_0x255259988FBEFACC(1);
	if (iLocal_48 >= 1)
	{
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
		}
	}
	if (unk_0xFD68187442384158(iLocal_284))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_284))
		{
			unk_0x7FEDD088E489CE41(iLocal_284, 251, 0);
			unk_0xEA0F21C3BB415566(iLocal_284, 1);
			unk_0xA1E4BA3B17C6D931(iLocal_284, 1);
			unk_0x2DC5B31EBB810396(iLocal_284, 0);
		}
		unk_0xCA4DD92F1F2931F3(&iLocal_284);
	}
	if (unk_0xFD68187442384158(iLocal_285))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_285))
		{
			unk_0x6A750A31D18DA81A(iLocal_285, 1);
			unk_0xA1E4BA3B17C6D931(iLocal_285, 1);
			unk_0x2DC5B31EBB810396(iLocal_285, 0);
		}
		unk_0xCA4DD92F1F2931F3(&iLocal_285);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xFD68187442384158(uLocal_286[iVar0]))
		{
			if (func_164(uLocal_286[iVar0]))
			{
				unk_0x2DC5B31EBB810396(uLocal_286[iVar0], 0);
			}
			unk_0xCA4DD92F1F2931F3(&(uLocal_286[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xFD68187442384158(iLocal_305))
	{
		unk_0xCDC1FD4387DA32EC(iLocal_305, 1);
		unk_0x43F7F4A62787BC4B(iLocal_305, 1);
		unk_0xB67623A401171555(&iLocal_305);
	}
	unk_0x2E98407DE29E0D76(1);
	if (func_139())
	{
		func_226();
	}
	else
	{
		func_225(&Global_24503);
	}
	unk_0x01DCF56A472637FD(1);
	func_215(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x883793591E631A3B();
}

void func_215(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_139())
	{
		func_218(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_97162, 1), 64);
		if (func_63(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_225(&Global_24503);
	Global_97163 = 0;
	func_179(-1);
}

char* func_216(int iParam0, bool bParam1)
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

void func_217(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_218(int iParam0)
{
	func_219(iParam0, 0, func_224(iParam0));
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_197();
	func_222(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_221(iParam0, &uVar0);
	Var1 = { func_220(&uVar0) };
}

struct<16> func_220(var uParam0)
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

void func_221(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_223(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_203(uParam0, iParam1);
	func_202(uParam0, iParam2);
	func_201(uParam0, iParam3);
	func_200(uParam0, iParam4);
	func_199(uParam0, iParam5);
	func_198(uParam0, iParam6);
}

int func_224(int iParam0)
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

void func_225(var uParam0)
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

void func_226()
{
	func_217(30000);
	func_225(&Global_24503);
	Global_24491 = unk_0xF976C624234A4AA8();
}

