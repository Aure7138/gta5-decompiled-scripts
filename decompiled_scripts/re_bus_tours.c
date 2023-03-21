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
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<15> Local_52[14];
	struct<15> Local_263 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287[5] = { 0, 0, 0, 0, 0 };
	int iLocal_293[5] = { 0, 0, 0, 0, 0 };
	int iLocal_299 = 0;
	int iLocal_300[5] = { 0, 0, 0, 0, 0 };
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	float fLocal_308 = 0f;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	var uLocal_343 = 16;
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
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	char* sLocal_509 = NULL;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	char* sLocal_514[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
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
	Local_320 = { 0f, 0f, 0f };
	Local_323 = { 0f, 0f, 0f };
	sLocal_509 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_511 = 524459;
	iLocal_512 = 40;
	iLocal_542 = 7500;
	Local_279 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 0))
				{
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_306, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), unk_0x93FDA3BF59E7B77F(iLocal_306));
					unk_0x38ADC0C5F4F08C6D(unk_0x18F7BE9ACB7D08F4(), 1);
					unk_0xA11D9B06B99FE786("RE_BUS_TOUR_SCENE");
					unk_0x9DE3D7ABB54710CB(iLocal_306, 0);
				}
			}
		}
		func_219();
	}
	if (!func_218())
	{
		unk_0x810C5D6462DD69E6();
	}
	if (func_185(Local_279, 2, 0, 1, 0))
	{
		func_182(-1);
	}
	else
	{
		unk_0x810C5D6462DD69E6();
	}
	func_180();
	func_179();
	while (true)
	{
		func_178();
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
		}
		switch (iLocal_312)
		{
			case 0:
				if (unk_0x6E65FD9B611945AD())
				{
					if (func_218())
					{
						switch (iLocal_48)
						{
							case 0:
								func_174();
								break;
							
							case 1:
								if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
								{
									if (unk_0x0FAE113CE72ED842(iLocal_285) || unk_0x0FAE113CE72ED842(uLocal_286))
									{
										func_219();
									}
									else
									{
										iLocal_312 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_219();
					}
				}
				else
				{
					func_219();
				}
				break;
			
			case 1:
				if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
				{
					func_1();
				}
				else
				{
					func_219();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_173();
	func_172();
	func_171();
	func_170();
	switch (iLocal_49)
	{
		case 0:
			func_116();
			break;
		
		case 1:
			func_84();
			break;
		
		case 2:
			func_83();
			func_2();
			break;
	}
}

void func_2()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_508, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_278, 64);
	unk_0x45FAF6B9BA0DB549(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	unk_0x9C7EE7DE7041A3F4(0, 99, 1);
	unk_0x9C7EE7DE7041A3F4(0, 1, 1);
	unk_0x9C7EE7DE7041A3F4(0, 2, 1);
	if (!unk_0x0FAE113CE72ED842(iLocal_286) && !unk_0x0FAE113CE72ED842(iLocal_285))
	{
		if (iLocal_537)
		{
			if (!func_82())
			{
				if (iLocal_508 < 14)
				{
					func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0);
				}
				func_219();
			}
		}
		else if (!func_80())
		{
			unk_0x64AF66D7BCEAD666();
			unk_0xE05212008FE9A018(2);
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (!unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iLocal_306) && iLocal_278 + 1 < 13)
				{
					func_219();
				}
			}
			if (!iLocal_317)
			{
				if (unk_0x83666F9FB8FEBD4B() > 12000)
				{
					func_78();
				}
			}
			else
			{
				unk_0x45FAF6B9BA0DB549("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_306))
			{
				iLocal_316 = 1;
			}
			unk_0xC1F655982D4E5525(iLocal_306);
		}
		else
		{
			func_3(&uLocal_343, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0xA2B45B1D3EE42178(iLocal_306, 3);
			unk_0x98AB858AD44F622D(iLocal_306, 0);
			iLocal_537 = 1;
		}
	}
	else
	{
		func_219();
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
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_18();
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
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_16();
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
				func_9();
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
				if (func_8())
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
			if (func_7())
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
			func_6();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_5();
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_6()
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

int func_7()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
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

void func_9()
{
	if (func_15(14))
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
		Global_14453 = func_10();
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

int func_10()
{
	func_11();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_14(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_13(unk_0x18F7BE9ACB7D08F4());
			if (func_12(iVar0) && (!func_15(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_12(Global_104551.f_2353.f_539.f_4301))
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

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_16()
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

bool func_17(int iParam0, int iParam1)
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

void func_18()
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

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
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

int func_20(int iParam0)
{
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if ((unk_0x08438F954B83E80B(iParam0, 0, 7000) || unk_0x08438F954B83E80B(iParam0, 1, 7000)) || unk_0x08438F954B83E80B(iParam0, 2, 7000))
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
		if (unk_0xFC0C00F9DE2AEC93(2, 225))
		{
			if (iLocal_319)
			{
				iLocal_319 = 0;
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 256);
				unk_0x857F8A288C0F3E5B(1);
			}
			else
			{
				iLocal_319 = 1;
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				unk_0x857F8A288C0F3E5B(0);
			}
		}
	}
	if (iLocal_319 && !Local_52[13 /*15*/].f_9)
	{
		if (unk_0x76AF8AC551A53D4C())
		{
			unk_0xBC3C2A3068412290(0);
		}
		func_24();
	}
	else if (iLocal_317)
	{
		if (unk_0x5400DC5FAEBF30F0(uLocal_328))
		{
			unk_0x13AD763DBD687842(uLocal_328, 0);
			unk_0xF5F744EF9F4DB21E(0, 0, 0, 1, 0, 0);
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
			func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
		}
	}
	else if (unk_0x5400DC5FAEBF30F0(uLocal_328))
	{
		unk_0x13AD763DBD687842(uLocal_328, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 0, 1, 0, 0);
		unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
	}
}

void func_22(struct<3> Param0, var uParam3)
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
	{
		if (!unk_0x5400DC5FAEBF30F0(uLocal_328) && !unk_0x76AF8AC551A53D4C())
		{
			if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_263.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0x14156ED1026104AB(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_314 = unk_0x5AFB8ED811F05E4D();
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_285))
		{
			unk_0x9128498462268F73(iLocal_285, 3f);
		}
		iLocal_317 = 1;
	}
}

void func_23(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_299 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar1 = unk_0x61E9B3BFA06B017B(6000, 16000);
		unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0x0FAE113CE72ED842(uLocal_287[iVar0]))
		{
			iVar1 = unk_0x61E9B3BFA06B017B(6000, 16000);
			iLocal_293[iVar0] = unk_0x61E9B3BFA06B017B(0, 2000);
			iLocal_300[iVar0] = 0;
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
	if (unk_0x5400DC5FAEBF30F0(uLocal_328))
	{
		if (unk_0xC9FF45E740135482(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 218) * 127f));
		iVar11 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 219) * 127f));
		iVar12 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 220) * 127f));
		iVar13 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 221) * 127f));
		if (!unk_0x234BD5D0BBB76F14())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || unk_0xC9FF45E740135482(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar13);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar13 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_342 = (fLocal_342 + fVar0);
			if (fLocal_342 < fVar2)
			{
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3)
			{
				fLocal_342 = fVar3;
			}
		}
		if ((iVar12 > 28 || iVar12 < -28) || unk_0xC9FF45E740135482(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar12);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar12 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar4)
			{
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5)
			{
				fLocal_341 = fVar5;
			}
		}
		if ((iVar11 > 28 || iVar11 < -28) || unk_0xC9FF45E740135482(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_342 = (fLocal_342 + fVar0);
			if (fLocal_342 < fVar2)
			{
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3)
			{
				fLocal_342 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || unk_0xC9FF45E740135482(2))
		{
			fVar0 = unk_0xBBDA792448DB5A89(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (unk_0xBBDA792448DB5A89(100) * unk_0xBBDA792448DB5A89(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar4)
			{
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5)
			{
				fLocal_341 = fVar5;
			}
		}
		func_25(unk_0x18F7BE9ACB7D08F4(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0x2A2BB8210FB20081(uLocal_328, fVar1);
		unk_0x505B5B32CED3A500(uLocal_328, unk_0x18F7BE9ACB7D08F4(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_328 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0x505B5B32CED3A500(uLocal_328, unk_0x18F7BE9ACB7D08F4(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0x417F9BCF7BCE9999(uLocal_328, 0.01f);
		fLocal_341 = -70f;
		fLocal_342 = 3f;
		func_25(unk_0x18F7BE9ACB7D08F4(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0x2A2BB8210FB20081(uLocal_328, fVar1);
		unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 0, 0);
		unk_0xF5F744EF9F4DB21E(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		if (unk_0x5400DC5FAEBF30F0(*uParam1))
		{
			uVar0 = unk_0x93FDA3BF59E7B77F(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0xA5D79F87520FD826(*uParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(uLocal_287[2]))
	{
		if (unk_0x2BBAA45ECDE3DAE2(uLocal_287[2], -880529684) == 7)
		{
			if (unk_0x5AFB8ED811F05E4D() > iLocal_336 + 8000)
			{
				unk_0x38ADC0C5F4F08C6D(uLocal_287[2], 0);
				Var0 = { unk_0x0AF3D0AB54EA2104(uLocal_287[2], unk_0x3D81861E1A1652A9(0f, 2f), unk_0x3D81861E1A1652A9(0f, 2f), 0.5f) };
				iVar3 = unk_0x61E9B3BFA06B017B(1000, 6000);
				unk_0x13C89D4679DD9966(uLocal_287[2], Var0, iVar3, 2049, 2);
				iLocal_336 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	if (!iLocal_339 && unk_0xC8AB6A5E6C1E6613())
	{
		unk_0xC9E5EA7F6680C287("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 223) || iLocal_316 == 1)
		{
			if (unk_0xC8AB6A5E6C1E6613())
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_285))
					{
						if (!Local_52[iVar0 /*15*/].f_14 && !Local_52[iVar0 /*15*/].f_9)
						{
							unk_0xC1B1E9A034A63A62(0);
							Local_52[iLocal_278 /*15*/].f_9 = 1;
							func_30(Local_52[iVar0 /*15*/].f_10, Local_52[iVar0 /*15*/].f_13);
							func_29();
							if (iVar0 == 13)
							{
								iLocal_339 = 1;
								func_28();
							}
							Local_52[iVar0 /*15*/].f_14 = 1;
							iLocal_278 = iVar0;
						}
						iLocal_316 = 0;
					}
				}
			}
		}
	}
}

void func_28()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_285))
		{
			unk_0x267F7A2DFDFFB077(iLocal_285);
			unk_0xC8BEB049F3BFC0AB(&uLocal_326);
			unk_0x0F36ED260B9B4408(0, iLocal_306, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			unk_0x0F36ED260B9B4408(0, iLocal_306, Local_263.f_1, 3f, 0, joaat("tourbus"), iLocal_511, 3f, 15f);
			unk_0xAFDA7B8F83B2CA58(uLocal_326);
			unk_0x73F69DD57B7E92A9(iLocal_285, uLocal_326);
			unk_0x56C7B20E11B37066(&uLocal_326);
		}
	}
}

void func_29()
{
	Global_14622 = 0;
	func_18();
}

void func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	unk_0x64D773F3BE6DC50A("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0xFF91FEC6E57575E4(1000);
	while (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x64AF66D7BCEAD666();
		unk_0xE05212008FE9A018(2);
		if (!unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
		{
			func_219();
		}
		if (unk_0x0FAE113CE72ED842(iLocal_285))
		{
			func_219();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(1);
	}
	unk_0xA3F41A1968319181(0f);
	if (!unk_0x0FAE113CE72ED842(iLocal_285))
	{
		unk_0x267F7A2DFDFFB077(iLocal_285);
	}
	if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
	{
		unk_0xE54597236B7D8C63(Param0.f_0, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0, 0);
		unk_0x990FFD4FB6ADD630(iLocal_306, Param0.f_0, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(iLocal_306, fParam3);
		unk_0xFBD899EB9A2EF7F4(iLocal_306, 0f);
		unk_0x0F36ED260B9B4408(iLocal_285, iLocal_306, unk_0x761660F5CE986DC4(iLocal_306, 1), 0f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		func_33(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
	{
		unk_0x9B53B2691E2B1F79(iLocal_306, 1084227584);
		unk_0x0F3F86C855582784(iLocal_306, 1, 1, 0);
		if (iVar0 < 13)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_285))
			{
				unk_0x0F36ED260B9B4408(iLocal_285, iLocal_306, Local_52[iVar0 /*15*/].f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(iLocal_285))
		{
			unk_0x0F36ED260B9B4408(iLocal_285, iLocal_306, Local_263.f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		}
		unk_0xFBD899EB9A2EF7F4(iLocal_306, 8f);
	}
	func_31();
	unk_0x53BE89E1466DFDBF(3);
	iLocal_50 = 3;
	func_21(1);
	unk_0xA11D9B06B99FE786("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x8359CF51370FC969(1000);
	while (unk_0x610450B2545892B5())
	{
		unk_0x64AF66D7BCEAD666();
		unk_0xE05212008FE9A018(2);
		func_21(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x64AF66D7BCEAD666();
	unk_0xE05212008FE9A018(2);
	func_21(1);
}

void func_31()
{
	Global_14622 = 0;
	func_32();
}

void func_32()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_33(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x2AF7FA6E21B7CA1D(Param0, iParam3, iParam4, 127);
	if (unk_0x8CDCFAFBE5805880(uVar0))
	{
		iVar1 = (unk_0x5AFB8ED811F05E4D() + iParam5);
		while (!unk_0x2730617123A2F55C(uVar0) && unk_0x5AFB8ED811F05E4D() < iVar1)
		{
			if (bParam7)
			{
				func_35(0);
			}
			if (bParam6)
			{
				func_34();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x5AFB8ED811F05E4D() < iVar1)
		{
		}
		unk_0x8F5B598E94E51DEB(uVar0);
	}
}

void func_34()
{
	Global_17162.f_6 = 1;
}

void func_35(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_36(int iParam0)
{
	if (Global_14615)
	{
		func_37(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_7())
	{
		Global_14453.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_38(int iParam0)
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

void func_39()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_278 + 1;
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!iLocal_339)
				{
					if (Local_52[12 /*15*/].f_9 || Local_52[13 /*15*/].f_14)
					{
						iLocal_339 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_52[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_52[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_52[12 /*15*/].f_9)
								{
									Local_52[13 /*15*/].f_9 = 1;
									iLocal_314 = unk_0x5AFB8ED811F05E4D();
									iLocal_50 = 2;
								}
							}
						}
						else if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_52[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 0))
							{
								func_22(Local_52[iVar0 /*15*/].f_4, Local_52[iVar0 /*15*/].f_7);
								iLocal_278 = iVar0;
								if (iLocal_318)
								{
									iLocal_318 = 0;
								}
								func_29();
								iLocal_50 = 1;
							}
							else
							{
								iLocal_50 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
				iLocal_313 = unk_0x5AFB8ED811F05E4D();
				if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
				{
					if (iVar1 <= 13)
					{
						func_77(unk_0x761660F5CE986DC4(iLocal_306, 1), Local_52[iVar1 /*15*/].f_1, &Local_320, &Local_323, 500);
					}
					if (unk_0x29C76D80E7597FEE(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1))
					{
						if ((iLocal_313 - iLocal_314) > 0)
						{
							if (func_76(&uLocal_343, "BUSTOAU", Local_52[iLocal_278 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0xC8BEB049F3BFC0AB(&uVar2);
										unk_0x0F36ED260B9B4408(0, iLocal_306, -100.461f, -206.1412f, 44.4215f, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0x0F36ED260B9B4408(0, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0xAFDA7B8F83B2CA58(uVar2);
										unk_0x73F69DD57B7E92A9(iLocal_285, uVar2);
										unk_0x56C7B20E11B37066(&uVar2);
									}
									else
									{
										unk_0x0F36ED260B9B4408(iLocal_285, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
									}
								}
								iLocal_314 = unk_0x5AFB8ED811F05E4D();
								Local_52[iLocal_278 /*15*/].f_14 = 1;
								Local_52[iLocal_278 /*15*/].f_9 = 1;
								iLocal_50 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					iLocal_50 = 3;
				}
				break;
			
			case 3:
				iLocal_313 = unk_0x5AFB8ED811F05E4D();
				func_40(Local_52[iLocal_278 /*15*/].f_4);
				if ((iLocal_313 - iLocal_314) > 5000)
				{
					if (!func_82())
					{
						iLocal_317 = 0;
						iLocal_314 = unk_0x5AFB8ED811F05E4D();
						if (unk_0x76AF8AC551A53D4C())
						{
							unk_0xBC3C2A3068412290(1);
						}
						if (Local_52[13 /*15*/].f_9 == 1)
						{
							iLocal_50 = 4;
						}
						else
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_285))
							{
								unk_0x9128498462268F73(iLocal_285, 15f);
							}
							iLocal_50 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_219();
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
		if ((unk_0x5AFB8ED811F05E4D() - iLocal_299) > iLocal_293[iVar0] && iLocal_300[iVar0] == 0)
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_287[iVar0], 0))
			{
				unk_0x13C89D4679DD9966(uLocal_287[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_300[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_41()
{
	float fVar0[5];
	struct<3> Var6[5];
	
	if (func_74(1000))
	{
		iLocal_333 = 3;
	}
	iLocal_538 = 1;
	switch (iLocal_333)
	{
		case 0:
			if (unk_0x5400DC5FAEBF30F0(uLocal_328))
			{
				unk_0x13AD763DBD687842(uLocal_328, 0);
				unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
			}
			func_66(1, 1, 1, 0);
			unk_0x6224B2BB9DC82EA1(1);
			unk_0x77B57B2BB7F3EA0A(0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
			unk_0x857F8A288C0F3E5B(1);
			uLocal_329 = unk_0x2BD71EC98C2FE73A("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_330 = unk_0x2BD71EC98C2FE73A("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x2C535610856B3F4D(uLocal_329, 1);
			unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			unk_0x544D4FC2BDA00B32(uLocal_330, uLocal_329, 17000, 1, 1);
			func_76(&uLocal_343, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0x990FFD4FB6ADD630(iLocal_306, Local_263.f_1, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(iLocal_306, Local_263.f_13);
			unk_0x9B53B2691E2B1F79(iLocal_306, 1084227584);
			unk_0xA2B45B1D3EE42178(iLocal_306, 3);
			if (!unk_0x0FAE113CE72ED842(iLocal_285))
			{
				unk_0x267F7A2DFDFFB077(iLocal_285);
				unk_0x9128498462268F73(iLocal_285, 0f);
				unk_0xC8BEB049F3BFC0AB(&uLocal_326);
				unk_0x3A40A65D5EFEA1B4(0, iLocal_306, 24, 10000);
				unk_0xAFDA7B8F83B2CA58(uLocal_326);
				unk_0x73F69DD57B7E92A9(iLocal_285, uLocal_326);
				unk_0x56C7B20E11B37066(&uLocal_326);
			}
			unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 268.4057f);
			unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
			iLocal_317 = 1;
			iLocal_314 = unk_0x5AFB8ED811F05E4D();
			iLocal_333 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0x5AFB8ED811F05E4D();
			if ((iLocal_313 - iLocal_314) > 3000)
			{
				unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
				unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 268.4057f);
				unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
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
				iLocal_335 = 0;
				while (iLocal_335 < 5)
				{
					if (unk_0x31F12808DC47A9E5(uLocal_287[iLocal_335]))
					{
						if (!unk_0x0FAE113CE72ED842(uLocal_287[iLocal_335]))
						{
							unk_0xD9FCA20C1C5553F7(uLocal_287[iLocal_335]);
							unk_0xB88121FF8A34A66F(uLocal_287[iLocal_335], fVar0[iLocal_335]);
							unk_0x990FFD4FB6ADD630(uLocal_287[iLocal_335], Var6[iLocal_335 /*3*/], 1, 0, 0, 1);
							unk_0x1A564F5D3F5B4476(uLocal_287[iLocal_335], 1193033728, 0);
						}
					}
					iLocal_335++;
				}
				iLocal_314 = unk_0x5AFB8ED811F05E4D();
				iLocal_333 = 2;
			}
			break;
		
		case 2:
			iLocal_313 = unk_0x5AFB8ED811F05E4D();
			if ((iLocal_313 - iLocal_314) > 13000)
			{
				iLocal_333 = 3;
			}
			break;
		
		case 3:
			unk_0x2C535610856B3F4D(uLocal_329, 0);
			unk_0xF5F744EF9F4DB21E(0, 1, 3000, 0, 0, 0);
			unk_0xA3F41A1968319181(0f);
			unk_0x13AD763DBD687842(uLocal_329, 0);
			unk_0x13AD763DBD687842(uLocal_330, 0);
			unk_0x6224B2BB9DC82EA1(0);
			unk_0x77B57B2BB7F3EA0A(1);
			func_66(0, 1, 1, 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			iLocal_314 = 10000;
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
	func_219();
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

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
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
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_48(func_54(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_47(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
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
	Global_104537 = iParam0;
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
		func_51(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_50() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_44();
				}
			}
		}
	}
}

int func_50()
{
	return Global_25233;
}

int func_51(int iParam0, int iParam1)
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

int func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
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
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_59();
	}
}

void func_59()
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

int func_60()
{
	func_11();
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
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_62(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_65(Var0);
	return uVar16;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_66(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_73(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_7())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_72(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_73(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_72(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_70(unk_0x8CFC7D6E1DA5D304())) && !func_68(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_67())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_70(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_67()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_69(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
	}
	if (Global_1312834[iVar1] == 1)
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

int func_70(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_71()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_72(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_74(int iParam0)
{
	if (unk_0xC8AB6A5E6C1E6613())
	{
		if ((unk_0x5AFB8ED811F05E4D() - Global_28) > iParam0)
		{
			Global_27 = unk_0x5AFB8ED811F05E4D();
		}
		Global_28 = unk_0x5AFB8ED811F05E4D();
		if ((unk_0x5AFB8ED811F05E4D() - Global_27) > iParam0)
		{
			if (func_75())
			{
				Global_27 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
	}
	return 0;
}

int func_75()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

bool func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_77(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!iLocal_318)
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
		iLocal_318 = 1;
	}
}

void func_78()
{
	int iVar0[24];
	char* sVar25;
	
	sLocal_514[0] = "BUSTO_RAMB_1";
	sLocal_514[1] = "BUSTO_RAMB_2";
	sLocal_514[2] = "BUSTO_RAMB_3";
	sLocal_514[3] = "BUSTO_RAMB_4";
	sLocal_514[4] = "BUSTO_RAMB_5";
	sLocal_514[5] = "BUSTO_RAMB_6";
	sLocal_514[6] = "BUSTO_RAMB_7";
	sLocal_514[7] = "BUSTO_RAMB_8";
	sLocal_514[8] = "BUSTO_RAMB_9";
	sLocal_514[9] = "BUSTO_RAMB_10";
	sLocal_514[10] = "BUSTO_RAMB_11";
	sLocal_514[11] = "BUSTO_RAMB_12";
	sLocal_514[12] = "BUSTO_RAMB_13";
	sLocal_514[13] = "BUSTO_RAMB_14";
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
	switch (iLocal_315)
	{
		case 0:
			iLocal_314 = unk_0x5AFB8ED811F05E4D();
			iLocal_315 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0x5AFB8ED811F05E4D();
			if ((iLocal_313 - iLocal_314) > 2000)
			{
				if (!func_82())
				{
					iLocal_314 = unk_0x5AFB8ED811F05E4D();
					iLocal_315 = 2;
				}
			}
			break;
		
		case 2:
			if (func_82())
			{
				unk_0x45FAF6B9BA0DB549("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_539)
			{
				iLocal_313 = unk_0x5AFB8ED811F05E4D();
				if ((iLocal_313 - iLocal_314) > iLocal_542)
				{
					if (func_79(uLocal_287[iLocal_540]))
					{
						if (iLocal_278 == 0)
						{
							sVar25 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_278 % 2) == 0)
						{
							sVar25 = "TOUR_CHAT";
						}
						else
						{
							sVar25 = "TOUR_LANDMARK";
						}
						unk_0x45FAF6B9BA0DB549("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0x729C5B8455454944(uLocal_287[iLocal_540], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_541++;
						if (iLocal_541 == 3)
						{
							iLocal_539 = 0;
						}
						iLocal_542 = unk_0x61E9B3BFA06B017B(9000, 14000);
						iLocal_314 = unk_0x5AFB8ED811F05E4D();
					}
					iLocal_540++;
					if (iLocal_540 == 5)
					{
						iLocal_540 = 0;
					}
				}
			}
			else if (iLocal_508 < 14)
			{
				iLocal_313 = unk_0x5AFB8ED811F05E4D();
				if ((iLocal_313 - iLocal_314) > 10000)
				{
					if (!func_82())
					{
						if (func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0))
						{
							iLocal_508++;
							iLocal_314 = unk_0x5AFB8ED811F05E4D();
							iLocal_539 = 1;
							iLocal_541 = 0;
						}
						else
						{
							unk_0x45FAF6B9BA0DB549("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_539 = 1;
			}
			break;
	}
}

int func_79(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0xABCACE2DFFF670F1(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0xFC0C00F9DE2AEC93(2, 222) && !iLocal_538)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_306))
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 0))
					{
						if (!unk_0x0FAE113CE72ED842(iLocal_285))
						{
							unk_0x3A40A65D5EFEA1B4(iLocal_285, iLocal_306, 24, 5000);
							fLocal_308 = unk_0x2A72627520A107B5(iLocal_306);
							while (fLocal_308 > 5f)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
								{
									fLocal_308 = unk_0x2A72627520A107B5(iLocal_306);
								}
							}
							func_29();
							unk_0x53BE89E1466DFDBF(iLocal_510);
							unk_0x38ADC0C5F4F08C6D(unk_0x18F7BE9ACB7D08F4(), 1);
							unk_0xA11D9B06B99FE786("RE_BUS_TOUR_SCENE");
							unk_0x9DE3D7ABB54710CB(iLocal_306, 0);
							if (unk_0x5400DC5FAEBF30F0(uLocal_328))
							{
								unk_0x13AD763DBD687842(uLocal_328, 0);
								unk_0xF5F744EF9F4DB21E(0, 0, 0, 1, 0, 0);
								unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
							}
							unk_0xD7A975DB04C06BA4(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_81(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_82()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_83()
{
	switch (iLocal_278)
	{
		case 0:
			unk_0x3FA15AFD13DBAD3E(0.5f);
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
			unk_0x3FA15AFD13DBAD3E(0.6f);
			break;
	}
}

void func_84()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_286) && !unk_0x0FAE113CE72ED842(iLocal_285))
	{
		switch (iLocal_51)
		{
			case 0:
				unk_0x9A8BE560E024CAB0(0);
				unk_0x64D773F3BE6DC50A("RE_BUS_TOUR_SCENE");
				unk_0x39801E786EBB5201(iLocal_306, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0x38ADC0C5F4F08C6D(unk_0x18F7BE9ACB7D08F4(), 0);
				func_66(1, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 256);
				unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
				unk_0x8DE1BAABD1480350(Local_263.f_1, 30f, 0);
				unk_0x343E01BBD8361D5F(iLocal_285, 0);
				unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 2);
				unk_0x6224B2BB9DC82EA1(1);
				unk_0x77B57B2BB7F3EA0A(0);
				uLocal_329 = unk_0x2BD71EC98C2FE73A("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_330 = unk_0x2BD71EC98C2FE73A("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x2C535610856B3F4D(uLocal_329, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				unk_0x544D4FC2BDA00B32(uLocal_330, uLocal_329, 6500, 1, 1);
				if (unk_0xC4B84EB67F78C1F0(unk_0x952F33F151D40D1A(), 0))
				{
					if (unk_0xEA07F07380ABC460(unk_0x952F33F151D40D1A(), iLocal_306, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0xB88121FF8A34A66F(unk_0x952F33F151D40D1A(), 65f);
						unk_0x990FFD4FB6ADD630(unk_0x952F33F151D40D1A(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0x011B3C098515A590("BusTours");
				if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
				{
					func_77(unk_0x761660F5CE986DC4(iLocal_306, 1), Local_52[0 /*15*/].f_1, &Local_320, &Local_323, 500);
					iLocal_544 = unk_0x5AFB8ED811F05E4D();
					iLocal_51 = 1;
				}
				if (unk_0xDBB3D0EFC8DECE3D() == 4)
				{
					iLocal_319 = 1;
				}
				iLocal_545 = 0;
				break;
			
			case 1:
				if (!iLocal_340)
				{
					func_115();
				}
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_544) > 5000 && !iLocal_543)
				{
					func_76(&uLocal_343, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_114("Enter_bus"))
					{
						unk_0xEFF1F12403847394(1);
					}
					iLocal_543 = 1;
				}
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_544) > 6200)
				{
					if (iLocal_319 == 1)
					{
						if (iLocal_545 == 0)
						{
							unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
							unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_545 = 1;
						}
					}
				}
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if ((unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iLocal_306) && unk_0x160400EAEE246B4D(iLocal_286, iLocal_306)) && unk_0x160400EAEE246B4D(iLocal_285, iLocal_306))
					{
						iLocal_51 = 2;
					}
					else if (func_74(1000))
					{
						if (unk_0x74B8CA477787A438(iLocal_306, 0, 0))
						{
							unk_0x8D77EFA08616AD64(iLocal_286, iLocal_306, 0);
						}
						iLocal_51 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x0F36ED260B9B4408(iLocal_285, iLocal_306, Local_52[0 /*15*/].f_1, Local_52[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
				unk_0x2C535610856B3F4D(uLocal_329, 0);
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				unk_0x13AD763DBD687842(uLocal_329, 0);
				unk_0x13AD763DBD687842(uLocal_330, 0);
				unk_0x6224B2BB9DC82EA1(0);
				unk_0x77B57B2BB7F3EA0A(1);
				unk_0x64AF66D7BCEAD666();
				unk_0xE05212008FE9A018(2);
				func_66(0, 1, 1, 0);
				iLocal_331 = func_10();
				func_85(iLocal_331, 1, iLocal_512);
				iLocal_510 = unk_0x8FCCBDE3A8532B08();
				if (!iLocal_319)
				{
					unk_0x53BE89E1466DFDBF(3);
				}
				else
				{
					func_21(1);
				}
				unk_0x40D517D991458154(&uLocal_310);
				iLocal_49 = 2;
				break;
		}
	}
	else
	{
		func_219();
	}
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_86(Global_104551.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_113();
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
					func_112(99, 1);
					func_111(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_111(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_111(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_97(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_93(5))
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
							func_111(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_111(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_111(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_111(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_112(95, iParam3);
					break;
				
				case 1:
					func_112(97, iParam3);
					break;
				
				case 2:
					func_112(96, iParam3);
					break;
			}
			func_112(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(iVar1);
	}
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_111(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_111(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_111(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_88(iParam0);
	if (Global_35859 == 15)
	{
		func_87(0);
	}
	return 1;
}

void func_87(bool bParam0)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_89(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_52(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_91() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_91() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_90(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_90(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_91()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0)
{
	func_112(93, iParam0);
	func_112(29, iParam0);
	func_112(30, iParam0);
}

bool func_93(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_94(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_91() /*12062*/].f_7637.f_10, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar1 = func_96(iParam0, iParam1);
	uVar2 = func_95(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_97(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_98(27, 1);
	return 1;
}

int func_98(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_99(iParam0, iParam1);
}

int func_99(int iParam0, int iParam1)
{
	if (func_15(14) && !func_110(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_109(&Global_4267379))
	{
		if (func_107(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_100(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_100(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_107(uParam0, iParam1))
	{
		return 0;
	}
	if (func_106(uParam0) < 0f)
	{
		func_105(uParam0, 0);
	}
	func_103(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_101(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_101(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_107(uParam0, iParam1))
	{
		return 0;
	}
	if (func_106(uParam0) < 0f)
	{
		func_105(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_102(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_102(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_103(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_104(uParam0, iVar0);
		iVar0++;
	}
	func_105(uParam0, (Global_4267378 - 0.5f));
}

void func_104(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_105(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_106(var uParam0)
{
	return uParam0->f_80;
}

bool func_107(var uParam0, int iParam1)
{
	return func_108(uParam0, iParam1) != -1;
}

int func_108(var uParam0, int iParam1)
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

bool func_109(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_110(int iParam0)
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

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_113()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

bool func_114(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_115()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_286))
	{
		unk_0x267F7A2DFDFFB077(iLocal_286);
		unk_0xFDBDFC454E44A5BF(iLocal_286, iLocal_306, 10000, 0, 2f, 262144, 0);
		unk_0x10F31830C95ED2E5(iLocal_286, 1);
		iLocal_340 = 1;
	}
}

void func_116()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_156())
		{
			unk_0xA2B45B1D3EE42178(iLocal_306, 3);
			unk_0x98AB858AD44F622D(iLocal_306, 0);
			func_219();
		}
		else if (func_147(4))
		{
			if ((unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 5f, 5f, 5f, 0, 1, 0) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && !func_114("TX_H02"))
			{
				if (func_145())
				{
					if (!iLocal_513)
					{
						unk_0xA2B45B1D3EE42178(iLocal_306, 1);
						iLocal_513 = 1;
					}
					unk_0xC9E5EA7F6680C287("Enter_bus", 0);
					if (unk_0x02EA7C5633421A0F(2, 23))
					{
						unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), iLocal_306, -1, 2, 1f, 8, 0);
					}
					if (!unk_0xE769D9B5158D0F11(uLocal_310))
					{
						if (unk_0xE769D9B5158D0F11(uLocal_311))
						{
							unk_0x40D517D991458154(&uLocal_311);
						}
						uLocal_310 = unk_0xA8EDC17CEEA40DFA(iLocal_306);
						unk_0x1DF6703E5077ABE1(uLocal_310, 1);
						unk_0x0590222010A36CE4(uLocal_310, Global_25279);
						if (!unk_0x0FAE113CE72ED842(iLocal_286))
						{
							unk_0x6016A20BFEAEFE11(iLocal_286, unk_0x18F7BE9ACB7D08F4(), -1, 0, 2);
						}
						if (!func_144())
						{
							if (func_132())
							{
								func_219();
							}
							else
							{
								func_122(1);
							}
						}
					}
					if (func_121())
					{
						iLocal_538 = 0;
						func_120(1);
					}
				}
				else
				{
					unk_0xC9E5EA7F6680C287("No_bus_money", 0);
					if (iLocal_513)
					{
						unk_0xA2B45B1D3EE42178(iLocal_306, 2);
						iLocal_513 = 0;
					}
				}
			}
		}
		if (iLocal_335 < 5)
		{
			if (func_117(&(uLocal_287[iLocal_335])))
			{
				iLocal_335++;
			}
		}
	}
}

int func_117(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x299E6D2320C80EB5(Local_279, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0x0FAE113CE72ED842(*uParam0))
		{
			if (func_119(*uParam0))
			{
				if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
				{
					unk_0x337F2213526139E0(*uParam0, 1, 0);
					unk_0x267F7A2DFDFFB077(*uParam0);
					unk_0x40E2910BAF39B1C7(*uParam0, 1);
					unk_0x97236214E312A8E7(*uParam0, "randompassenger");
					unk_0x764AFC5A3A16C2B0(*uParam0, 134, 1);
					switch (iLocal_335)
					{
						case 0:
							if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
							{
								unk_0x8D77EFA08616AD64(*uParam0, iLocal_306, 3);
								unk_0x10F31830C95ED2E5(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
							{
								unk_0x8D77EFA08616AD64(*uParam0, iLocal_306, 7);
								unk_0x10F31830C95ED2E5(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
							{
								unk_0x8D77EFA08616AD64(*uParam0, iLocal_306, 6);
								unk_0x10F31830C95ED2E5(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
							{
								unk_0x8D77EFA08616AD64(*uParam0, iLocal_306, 8);
								unk_0x10F31830C95ED2E5(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
							{
								unk_0x8D77EFA08616AD64(*uParam0, iLocal_306, 1);
								unk_0x10F31830C95ED2E5(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_118(unk_0xC1A23BED641FA58E(*uParam0));
					unk_0x2F51E4FCC3B20959(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_118(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 16);
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
	iVar0 = unk_0x61E9B3BFA06B017B(0, 33);
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

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x4F69FBD64CDF125B(uParam0) == joaat("a_m_m_tramp_01") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("s_m_y_cop_01")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_120(int iParam0)
{
	iLocal_51 = 0;
	iLocal_49 = iParam0;
}

int func_121()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_306, 0))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()) == iLocal_306)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (func_126())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_55(Global_104540))
		{
			func_123(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_55(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_124(func_125(iParam0), -1);
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
					func_124(func_125(iParam0), -1);
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
					func_124(func_125(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

void func_124(var uParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

char* func_125(int iParam0)
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

int func_126()
{
	switch (func_127(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
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

int func_127(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_131(0))
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
		if (!func_129(iParam2))
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
			func_128(uParam0, iParam4);
		}
	}
	return 2;
}

void func_128(var uParam0, int iParam1)
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

bool func_129(int iParam0)
{
	return func_130(iParam0, Global_35859);
}

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_129(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_132()
{
	if (!func_129(5))
	{
		return 1;
	}
	if (func_140())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_139())
		{
			return 0;
		}
	}
	if (func_133(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_133(float fParam0, bool bParam1)
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
		if (func_12(func_10()))
		{
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_134(iVar32, &Var0);
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

void func_134(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_135(uParam1, "Abigail1", func_137(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 1:
			func_135(uParam1, "Abigail2", func_137(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 2:
			func_135(uParam1, "Barry1", func_137(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 3:
			func_135(uParam1, "Barry2", func_137(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 4:
			func_135(uParam1, "Barry3", func_137(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 5:
			func_135(uParam1, "Barry3A", func_137(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 6:
			func_135(uParam1, "Barry3C", func_137(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 7:
			func_135(uParam1, "Barry4", func_137(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_136(iParam0), 0, 0);
			break;
		
		case 8:
			func_135(uParam1, "Dreyfuss1", func_137(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 9:
			func_135(uParam1, "Epsilon1", func_137(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 10:
			func_135(uParam1, "Epsilon2", func_137(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 11:
			func_135(uParam1, "Epsilon3", func_137(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 12:
			func_135(uParam1, "Epsilon4", func_137(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 13:
			func_135(uParam1, "Epsilon5", func_137(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 14:
			func_135(uParam1, "Epsilon6", func_137(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 15:
			func_135(uParam1, "Epsilon7", func_137(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 16:
			func_135(uParam1, "Epsilon8", func_137(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 17:
			func_135(uParam1, "Extreme1", func_137(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 18:
			func_135(uParam1, "Extreme2", func_137(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 19:
			func_135(uParam1, "Extreme3", func_137(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 20:
			func_135(uParam1, "Extreme4", func_137(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 21:
			func_135(uParam1, "Fanatic1", func_137(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_136(iParam0), 1, 0);
			break;
		
		case 22:
			func_135(uParam1, "Fanatic2", func_137(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_136(iParam0), 1, 0);
			break;
		
		case 23:
			func_135(uParam1, "Fanatic3", func_137(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_136(iParam0), 0, 1);
			break;
		
		case 24:
			func_135(uParam1, "Hao1", func_137(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_136(iParam0), 0, 1);
			break;
		
		case 25:
			func_135(uParam1, "Hunting1", func_137(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 26:
			func_135(uParam1, "Hunting2", func_137(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 27:
			func_135(uParam1, "Josh1", func_137(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 28:
			func_135(uParam1, "Josh2", func_137(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 29:
			func_135(uParam1, "Josh3", func_137(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 30:
			func_135(uParam1, "Josh4", func_137(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 31:
			func_135(uParam1, "Maude1", func_137(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 32:
			func_135(uParam1, "Minute1", func_137(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 33:
			func_135(uParam1, "Minute2", func_137(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 34:
			func_135(uParam1, "Minute3", func_137(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 35:
			func_135(uParam1, "MrsPhilips1", func_137(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 36:
			func_135(uParam1, "MrsPhilips2", func_137(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 37:
			func_135(uParam1, "Nigel1", func_137(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 38:
			func_135(uParam1, "Nigel1A", func_137(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 39:
			func_135(uParam1, "Nigel1B", func_137(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 40:
			func_135(uParam1, "Nigel1C", func_137(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 41:
			func_135(uParam1, "Nigel1D", func_137(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 42:
			func_135(uParam1, "Nigel2", func_137(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 43:
			func_135(uParam1, "Nigel3", func_137(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 44:
			func_135(uParam1, "Omega1", func_137(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 45:
			func_135(uParam1, "Omega2", func_137(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 46:
			func_135(uParam1, "Paparazzo1", func_137(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 47:
			func_135(uParam1, "Paparazzo2", func_137(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 48:
			func_135(uParam1, "Paparazzo3", func_137(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 49:
			func_135(uParam1, "Paparazzo3A", func_137(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 50:
			func_135(uParam1, "Paparazzo3B", func_137(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 51:
			func_135(uParam1, "Paparazzo4", func_137(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 52:
			func_135(uParam1, "Rampage1", func_137(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 54:
			func_135(uParam1, "Rampage3", func_137(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 55:
			func_135(uParam1, "Rampage4", func_137(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 56:
			func_135(uParam1, "Rampage5", func_137(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 53:
			func_135(uParam1, "Rampage2", func_137(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 57:
			func_135(uParam1, "TheLastOne", func_137(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 58:
			func_135(uParam1, "Tonya1", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 59:
			func_135(uParam1, "Tonya2", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 60:
			func_135(uParam1, "Tonya3", func_137(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 61:
			func_135(uParam1, "Tonya4", func_137(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 62:
			func_135(uParam1, "Tonya5", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_135(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_136(int iParam0)
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

struct<2> func_137(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_138(iParam0) };
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

struct<2> func_138(int iParam0)
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

int func_139()
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

int func_140()
{
	if (func_143() && !func_139())
	{
		return 1;
	}
	if (func_142() && func_141())
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	return Global_104269 > 0;
}

int func_142()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_144()
{
	if ((Global_104540 == func_64() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (func_146(func_10()) >= iLocal_512)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD194C635833AC189(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD194C635833AC189(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD194C635833AC189(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
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
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_155()) || Global_103598) || Global_25235) || func_154()) || func_17(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_155()) || Global_25235) || func_154()) || func_17(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_155()) || Global_103598) || Global_25235) || func_154()) || func_17(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_155()) || Global_103598) || Global_25235) || func_154()) || func_17(8, -1)) || func_153()) || func_152()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_17(8, -1)) || func_150()) || func_149()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
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
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_155()) || Global_25235) || func_154()) || func_17(8, -1)) || func_152()) || func_151()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_155()) || func_152()) || Global_103598) || Global_25235) || func_154()) || Global_36991) || func_17(8, -1)) || func_151()) || func_149()) || func_150()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_155()) || Global_103598) || Global_25235) || func_154()) || func_17(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
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

var func_148()
{
	return Global_92868.f_1;
}

int func_149()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
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

bool func_152()
{
	return Global_92881.f_316 > 0;
}

bool func_153()
{
	return Global_92881.f_315 > 0;
}

var func_154()
{
	return Global_1312854;
}

int func_155()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	if (func_169(iLocal_286))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_286))
		{
			if (func_161(iLocal_286))
			{
				func_159(iLocal_286, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_158();
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
	if (!unk_0x0FAE113CE72ED842(iLocal_285))
	{
		if (((func_161(iLocal_285) || !unk_0x657B649BA2AD3582(iLocal_285, 0)) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iLocal_285)) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iLocal_285))
		{
			func_157(iLocal_286);
			return 1;
		}
	}
	else
	{
		func_157(iLocal_286);
		return 1;
	}
	if (unk_0x1B843A60307EECA4(iLocal_306, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if (func_169(iLocal_286))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_286))
			{
				func_157(iLocal_286);
				func_159(iLocal_286, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_219();
	}
	if (unk_0xF0B96EE16BA9FBE8() >= 19 || unk_0xF0B96EE16BA9FBE8() <= 6)
	{
		if (!func_82())
		{
			if (func_76(&uLocal_343, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_306, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0)
{
	if (func_169(iLocal_286))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_286))
		{
			unk_0x40E2910BAF39B1C7(uParam0, 0);
			unk_0x267F7A2DFDFFB077(uParam0);
			unk_0x9603FB72C3126396(iParam0, unk_0x18F7BE9ACB7D08F4(), 100f, -1, 0, 0);
			unk_0x10F31830C95ED2E5(iParam0, 1);
			func_31();
		}
	}
}

void func_158()
{
	if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_286, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_313 = unk_0x5AFB8ED811F05E4D();
		if ((iLocal_313 - iLocal_314) > 10000)
		{
			if (!func_82())
			{
				func_76(&uLocal_343, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_314 = unk_0x5AFB8ED811F05E4D();
		}
	}
}

void func_159(var uParam0, char* sParam1, int iParam2)
{
	unk_0x729C5B8455454944(uParam0, sParam1, func_160(iParam2), 1);
}

int func_160(int iParam0)
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

int func_161(var uParam0)
{
	if (func_162(uParam0, &uLocal_337, &uLocal_334, iLocal_332, bLocal_338, 1077936128, 0) || unk_0x0B90D19A63676F41(uParam0))
	{
		func_157(uParam0);
		return 1;
	}
	return 0;
}

int func_162(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0) && !bParam4)
	{
		if (unk_0xB4FD6D3F49C8B3B4(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			Var6 = { unk_0x761660F5CE986DC4(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xB03A1684359C50A1(iParam3, 3))
			{
				if (func_168(iParam0, iParam6))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_166(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x70832328F090DD95(Var6, fParam5, 1))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_166(iParam0);
					return 1;
				}
				if (unk_0xAB3BDB14DC75494C(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_166(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 2))
			{
				fVar0 = unk_0xEE0ECB73BFB5F8C1(unk_0x18F7BE9ACB7D08F4());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
				{
					if (unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xAAB9BF2904B9E7CE(iParam0, unk_0x18F7BE9ACB7D08F4(), 17))
							{
								func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_167("	aggro Ped knows player is pointing gun\n");
								func_163("		lockOnTimer = ", *uParam2);
								func_167("\n");
								func_163("		time since not LockedOn = ", (unk_0x5AFB8ED811F05E4D() - iLocal_43));
								func_167("\n");
								bVar2 = true;
								if (unk_0x5AFB8ED811F05E4D() > (iLocal_43 + *uParam2))
								{
									func_167("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_166(iParam0);
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
			if (!unk_0xB03A1684359C50A1(iParam3, 0))
			{
				if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_166(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0x5AFB8ED811F05E4D();
	}
	return 0;
}

void func_163(char* sParam0, int iParam1)
{
	func_165(sParam0);
	func_164(iParam1);
}

void func_164(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_165(char* sParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

void func_166(var uParam0)
{
	unk_0xCC25274D48609FE0(uParam0);
}

void func_167(char* sParam0)
{
	func_165(sParam0);
}

int func_168(int iParam0, int iParam1)
{
	if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x1B843A60307EECA4(uParam0, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if ((unk_0x7E6B188C8AD32E2D(iParam0) - unk_0x0A088F357EF627CA(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	unk_0x348D8FFDC0D0A5C7(0, 1);
	unk_0x348D8FFDC0D0A5C7(1, 1);
	unk_0x348D8FFDC0D0A5C7(2, 1);
	unk_0x348D8FFDC0D0A5C7(3, 1);
	unk_0x348D8FFDC0D0A5C7(4, 1);
	unk_0x348D8FFDC0D0A5C7(5, 1);
	unk_0x348D8FFDC0D0A5C7(6, 1);
	unk_0x348D8FFDC0D0A5C7(7, 1);
	unk_0x348D8FFDC0D0A5C7(8, 1);
}

void func_171()
{
	unk_0xE609714F93CE6935(unk_0x8CFC7D6E1DA5D304());
	unk_0x52AA7BC2DF797B01(unk_0x8CFC7D6E1DA5D304(), 5);
	unk_0x52AA7BC2DF797B01(unk_0x8CFC7D6E1DA5D304(), 3);
	unk_0x52AA7BC2DF797B01(unk_0x8CFC7D6E1DA5D304(), 15);
	unk_0x52AA7BC2DF797B01(unk_0x8CFC7D6E1DA5D304(), 2);
	unk_0x52AA7BC2DF797B01(unk_0x8CFC7D6E1DA5D304(), 4);
}

void func_172()
{
	if (iLocal_318)
	{
		unk_0xEA3ACC77B4C2040A(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1);
	}
}

void func_173()
{
	if (unk_0x60F63EF6698E61FA("RAIN") || unk_0x60F63EF6698E61FA("THUNDER"))
	{
		unk_0xD7C3C869A650A1D6("OVERCAST", 10000f);
	}
}

void func_174()
{
	int iVar0;
	int iVar1;
	
	if (func_177())
	{
		func_219();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0x9016574B77A748EE(iVar0);
		unk_0x9016574B77A748EE(iVar1);
		unk_0x831CD0FBFB26EC7E(sLocal_509);
		unk_0x9016574B77A748EE(joaat("tourbus"));
		unk_0x8E058779F430F4D7("BUSTOUR", 2);
		if ((((unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0xEDFE27D1AEA0EA7F(iVar1)) && unk_0x028356968FDD2DF2(sLocal_509)) && unk_0xEDFE27D1AEA0EA7F(joaat("tourbus"))) && unk_0x9F22E45F3CF7EACA(2))
		{
			unk_0xD2F6D4358B6E3AD0(0);
			unk_0x84E44FF69EA2920B(Local_279, &uLocal_282, &uLocal_307, 1, 1077936128, 0);
			iLocal_306 = unk_0x3064CCF56C6C32BC(joaat("tourbus"), Local_263.f_1, Local_263.f_13, 1, 1, 0);
			unk_0x9B53B2691E2B1F79(iLocal_306, 1084227584);
			unk_0xA2B45B1D3EE42178(iLocal_306, 3);
			unk_0xCF8FDC4FED72AECE(iLocal_306, 0);
			unk_0x0C479E1994DA8B57(iLocal_306, "OFF");
			unk_0x6780B033CB86560E(iLocal_306, 0, 0);
			unk_0xDE2241F5D2C60ED8(iLocal_306, 2, 1);
			unk_0x116D235ABEF5CE46(joaat("tourbus"), 1);
			unk_0x5BA0866A555BBEFD(iLocal_306, 100f);
			iLocal_285 = unk_0xC52E83A4C0F88DAB(iLocal_306, 26, iVar1, -1, 1, 1);
			unk_0x40E2910BAF39B1C7(iLocal_285, 1);
			unk_0x764AFC5A3A16C2B0(iLocal_285, 251, 1);
			unk_0x5D7669465D7A0604(iLocal_285, 1);
			if (unk_0x31F12808DC47A9E5(iLocal_285))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_285))
				{
					unk_0xDEA702F2138E0B35(iLocal_285, 3, 1, 2, 0);
					unk_0xDEA702F2138E0B35(iLocal_285, 4, 0, 2, 0);
				}
			}
			iLocal_286 = unk_0x364B87C5C64BD100(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0x2F51E4FCC3B20959(iLocal_286, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x40E2910BAF39B1C7(iLocal_286, 1);
			unk_0x44EB7E24C5D75087(iLocal_286, 0);
			unk_0xDEA702F2138E0B35(iLocal_286, 0, 1, 0, 0);
			unk_0xDEA702F2138E0B35(iLocal_286, 2, 1, 0, 0);
			unk_0xDEA702F2138E0B35(iLocal_286, 3, 0, 0, 0);
			unk_0xDEA702F2138E0B35(iLocal_286, 4, 1, 0, 0);
			unk_0xC8BEB049F3BFC0AB(&uLocal_327);
			unk_0xB5746603774C4C9D(0, sLocal_509, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sLocal_509, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sLocal_509, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x8F251305F4CAD788(uLocal_327, 1);
			unk_0xAFDA7B8F83B2CA58(uLocal_327);
			unk_0x73F69DD57B7E92A9(iLocal_286, uLocal_327);
			unk_0x56C7B20E11B37066(&uLocal_327);
			func_176(&uLocal_343, 3, iLocal_286, "TOURGUIDE", 0, 1);
			if (!unk_0xE769D9B5158D0F11(uLocal_311))
			{
				uLocal_311 = unk_0xA8EDC17CEEA40DFA(iLocal_306);
				unk_0xDC0EBFC7730AA226(uLocal_311, 85);
			}
			func_175();
			iLocal_48 = 1;
		}
	}
}

void func_175()
{
	unk_0x273FE09AE985A00A(iLocal_285, 17, 1);
	unk_0x273FE09AE985A00A(iLocal_286, 17, 1);
	unk_0x48E76A4B7B58B77A("re_bus_tours1", &uLocal_309);
	unk_0x641E77554763EF06(iLocal_285, uLocal_309);
	unk_0x641E77554763EF06(iLocal_286, uLocal_309);
	unk_0xFB5F4D76105A21B5(1, uLocal_309, joaat("player"));
}

void func_176(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_177()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_139())
		{
			return 0;
		}
	}
	if (func_140())
	{
		return 1;
	}
	if (func_133(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_178()
{
}

void func_179()
{
}

void func_180()
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
	Local_263.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_263.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_263.f_7 = -1;
	Local_263.f_8 = 8f;
	Local_263.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_263.f_13 = 70f;
	Local_263.f_0 = "BUSTO_Px";
	func_181(Var0);
	func_181(Var15);
	func_181(Var30);
	func_181(Var45);
	func_181(Var60);
	func_181(Var75);
	func_181(Var90);
	func_181(Var105);
	func_181(Var120);
	func_181(Var135);
	func_181(Var150);
	func_181(Var165);
	func_181(Var180);
	func_181(Local_263);
	iLocal_278 = 0;
}

void func_181(char[60] cParam0)
{
	Local_52[iLocal_278 /*15*/] = { cParam0 };
	iLocal_278++;
}

void func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
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
		iParam3 = func_64();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_217())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_139())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_45(0))
		{
			return 0;
		}
		if (func_140())
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_133(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_215(iParam3))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_214(func_10()) == 4 || func_214(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_213(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_212(Global_104551.f_24965.f_43[iParam3]))
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
		if (func_211())
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
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_129(5))
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
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_215(30) && !func_210(30, 0))
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
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_209(iVar8))
				{
					if (func_187(iVar4))
					{
						if (!func_186(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
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

bool func_186(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_199(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
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
	
	func_208(&uVar0, unk_0xB093145A4ED05C87());
	func_207(&uVar0, unk_0x4BF279EB036481A0());
	func_206(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_205(&uVar0, unk_0x518720E0DE404FFC());
	func_204(&uVar0, unk_0x5E3E9A684A609866());
	func_203(&uVar0, unk_0xFBE778F13510E585());
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
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	func_9();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_213(int iParam0, int iParam1, int iParam2)
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

int func_214(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_215(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_217())
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

int func_216()
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

int func_217()
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

int func_218()
{
	if (unk_0xF0B96EE16BA9FBE8() > 19 || unk_0xF0B96EE16BA9FBE8() < 6)
	{
		return 0;
	}
	return 1;
}

void func_219()
{
	int iVar0;
	
	unk_0x2216A42B2ED12596();
	unk_0x5E16FDDF59CA03E6();
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(0);
		unk_0xA3F41A1968319181(0f);
	}
	if (unk_0x5400DC5FAEBF30F0(uLocal_329))
	{
		unk_0x2C535610856B3F4D(uLocal_329, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		unk_0x13AD763DBD687842(uLocal_329, 0);
		unk_0x6224B2BB9DC82EA1(0);
	}
	if (unk_0x5400DC5FAEBF30F0(uLocal_330))
	{
		unk_0x13AD763DBD687842(uLocal_330, 0);
	}
	if (iLocal_49 >= 2)
	{
		unk_0x53BE89E1466DFDBF(iLocal_510);
	}
	unk_0x77B57B2BB7F3EA0A(1);
	if (iLocal_49 >= 1)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_285))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_285))
		{
			unk_0x764AFC5A3A16C2B0(iLocal_285, 251, 0);
			unk_0x343E01BBD8361D5F(iLocal_285, 1);
			unk_0x10F31830C95ED2E5(iLocal_285, 1);
			unk_0x40E2910BAF39B1C7(iLocal_285, 0);
		}
		unk_0xDBE64C5761554FBF(&iLocal_285);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_286))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_286))
		{
			unk_0x44EB7E24C5D75087(iLocal_286, 1);
			unk_0x10F31830C95ED2E5(iLocal_286, 1);
			unk_0x40E2910BAF39B1C7(iLocal_286, 0);
		}
		unk_0xDBE64C5761554FBF(&iLocal_286);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x31F12808DC47A9E5(uLocal_287[iVar0]))
		{
			if (func_169(uLocal_287[iVar0]))
			{
				unk_0x40E2910BAF39B1C7(uLocal_287[iVar0], 0);
			}
			unk_0xDBE64C5761554FBF(&(uLocal_287[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x31F12808DC47A9E5(iLocal_306))
	{
		unk_0xA2B45B1D3EE42178(iLocal_306, 1);
		unk_0x98AB858AD44F622D(iLocal_306, 1);
		unk_0x4F5FF3F3FDCAB15D(&iLocal_306);
	}
	unk_0x9A8BE560E024CAB0(1);
	if (func_144())
	{
		func_231();
	}
	else
	{
		func_230(&Global_25292);
	}
	unk_0x857F8A288C0F3E5B(1);
	func_220(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x810C5D6462DD69E6();
}

void func_220(int iParam0)
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
	if (func_144())
	{
		func_223(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_104540, 1), 64);
		if (func_63(Global_104540) > 0)
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
	func_230(&Global_25292);
	Global_104541 = 0;
	func_184(-1);
}

char* func_221(int iParam0, bool bParam1)
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

void func_222(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_223(int iParam0)
{
	func_224(iParam0, 0, func_229(iParam0));
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_227(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_226(iParam0, &uVar0);
	Var1 = { func_225(&uVar0) };
}

struct<16> func_225(var uParam0)
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

void func_226(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_228(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_229(int iParam0)
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

void func_230(var uParam0)
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

void func_231()
{
	func_222(30000);
	func_230(&Global_25292);
	Global_25280 = unk_0x5AFB8ED811F05E4D();
}

