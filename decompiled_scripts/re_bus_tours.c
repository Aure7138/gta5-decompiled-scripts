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
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		if (unk_0x1095F403F52B42E1(iLocal_306, 0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_306, 0))
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), unk_0x3201284584C7CD83(iLocal_306, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), unk_0x552C823E1D2A019C(iLocal_306));
					unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 1);
					unk_0x5AD7D03C214BDA88("RE_BUS_TOUR_SCENE");
					unk_0x3C50F1F859BA232B(iLocal_306, 0);
				}
			}
		}
		func_220();
	}
	if (!func_219())
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (func_186(Local_279, 2, 0, 1, 0))
	{
		func_183(-1);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	func_181();
	func_180();
	while (true)
	{
		func_179();
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
		}
		switch (iLocal_312)
		{
			case 0:
				if (unk_0x1F85F8C7CC4639AE())
				{
					if (func_219())
					{
						switch (iLocal_48)
						{
							case 0:
								func_175();
								break;
							
							case 1:
								if (unk_0x1095F403F52B42E1(iLocal_306, 0))
								{
									if (unk_0x4915F4759304D5CF(iLocal_285) || unk_0x4915F4759304D5CF(uLocal_286))
									{
										func_220();
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
						func_220();
					}
				}
				else
				{
					func_220();
				}
				break;
			
			case 1:
				if (unk_0x1095F403F52B42E1(iLocal_306, 0))
				{
					func_1();
				}
				else
				{
					func_220();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_174();
	func_173();
	func_172();
	func_171();
	switch (iLocal_49)
	{
		case 0:
			func_117();
			break;
		
		case 1:
			func_85();
			break;
		
		case 2:
			func_84();
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
	unk_0x73B1F715F502CBFC(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0xD481A812073CCF02(0, 68, 1);
	unk_0xD481A812073CCF02(0, 99, 1);
	unk_0xD481A812073CCF02(0, 1, 1);
	unk_0xD481A812073CCF02(0, 2, 1);
	if (!unk_0x4915F4759304D5CF(iLocal_286) && !unk_0x4915F4759304D5CF(iLocal_285))
	{
		if (iLocal_537)
		{
			if (!func_83())
			{
				if (iLocal_508 < 14)
				{
					func_82(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0);
				}
				func_220();
			}
		}
		else if (!func_81())
		{
			unk_0xCAFB88D6C0B52307();
			unk_0xD8C147DA332E7F06(2);
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iLocal_306) && iLocal_278 + 1 < 13)
				{
					func_220();
				}
			}
			if (!iLocal_317)
			{
				if (unk_0x83666F9FB8FEBD4B() > 12000)
				{
					func_79();
				}
			}
			else
			{
				unk_0x73B1F715F502CBFC("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_40();
			func_27();
			func_21(0);
			if (func_20(iLocal_306))
			{
				iLocal_316 = 1;
			}
			unk_0x2EFDA14DBA0F33F8(iLocal_306);
		}
		else
		{
			func_3(&uLocal_343, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0x14293208022014FA(iLocal_306, 3);
			unk_0xF0F3162A538A2D92(iLocal_306, 0);
			iLocal_537 = 1;
		}
	}
	else
	{
		func_220();
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
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 1;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
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
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_16();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_9();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_8())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
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
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_6();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_5();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
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
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_6()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_7()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_10();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

int func_10()
{
	func_11();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_14(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_13(unk_0xA19140A5C42D8715());
			if (func_12(iVar0) && (!func_15(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_12(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
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
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_18()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_20(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if ((unk_0xEB9F2352179A557A(iParam0, 0, 7000) || unk_0xEB9F2352179A557A(iParam0, 1, 7000)) || unk_0xEB9F2352179A557A(iParam0, 2, 7000))
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
		if (unk_0xDF0ADAD7E584090D(2, 225))
		{
			if (iLocal_319)
			{
				iLocal_319 = 0;
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 256);
				unk_0x207FFFF07A784C81(1);
			}
			else
			{
				iLocal_319 = 1;
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
				unk_0x207FFFF07A784C81(0);
			}
		}
	}
	if (iLocal_319 && !Local_52[13 /*15*/].f_9)
	{
		if (unk_0xECD112E8A7AB2E8A())
		{
			unk_0xEB60EF2E9051E817(0);
		}
		func_24();
	}
	else if (iLocal_317)
	{
		if (unk_0x37B568B777BC65F9(uLocal_328))
		{
			unk_0x77F0486CE0E598D5(uLocal_328, 0);
			unk_0x8E88E73F74A9FF79(0, 0, 0, 1, 0, 0);
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
			func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
		}
	}
	else if (unk_0x37B568B777BC65F9(uLocal_328))
	{
		unk_0x77F0486CE0E598D5(uLocal_328, 0);
		unk_0x8E88E73F74A9FF79(0, 0, 0, 1, 0, 0);
		unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
	}
}

void func_22(struct<3> Param0, var uParam3)
{
	if (unk_0x1095F403F52B42E1(iLocal_306, 0))
	{
		if (!unk_0x37B568B777BC65F9(uLocal_328) && !unk_0xECD112E8A7AB2E8A())
		{
			if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_263.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0x8FC4ABE2F219CFC2(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_314 = unk_0xFD34717937104F1C();
			}
		}
		if (!unk_0x4915F4759304D5CF(iLocal_285))
		{
			unk_0x4B690F60A2635642(iLocal_285, 3f);
		}
		iLocal_317 = 1;
	}
}

void func_23(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_299 = unk_0xFD34717937104F1C();
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		iVar1 = unk_0x22C775856F4633CA(6000, 16000);
		unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0x4915F4759304D5CF(uLocal_287[iVar0]))
		{
			iVar1 = unk_0x22C775856F4633CA(6000, 16000);
			iLocal_293[iVar0] = unk_0x22C775856F4633CA(0, 2000);
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
	if (unk_0x37B568B777BC65F9(uLocal_328))
	{
		if (unk_0x0B9F814BC8D14042(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = unk_0xF34EE736CF047844((unk_0xB641B72602719CC8(2, 218) * 127f));
		iVar11 = unk_0xF34EE736CF047844((unk_0xB641B72602719CC8(2, 219) * 127f));
		iVar12 = unk_0xF34EE736CF047844((unk_0xB641B72602719CC8(2, 220) * 127f));
		iVar13 = unk_0xF34EE736CF047844((unk_0xB641B72602719CC8(2, 221) * 127f));
		if (!unk_0x8300DAA4A7C3C9F8())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || unk_0x0B9F814BC8D14042(2))
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
		if ((iVar12 > 28 || iVar12 < -28) || unk_0x0B9F814BC8D14042(2))
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
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x0B9F814BC8D14042(2))
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
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x0B9F814BC8D14042(2))
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
		func_25(unk_0xA19140A5C42D8715(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0xF62A5A3CB8DB2402(uLocal_328, fVar1);
		unk_0xABE3EC0FA16227B5(uLocal_328, unk_0xA19140A5C42D8715(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_328 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0xABE3EC0FA16227B5(uLocal_328, unk_0xA19140A5C42D8715(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0x6F05C2B0A1DB4CAA(uLocal_328, 0.01f);
		fLocal_341 = -70f;
		fLocal_342 = 3f;
		func_25(unk_0xA19140A5C42D8715(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0xF62A5A3CB8DB2402(uLocal_328, fVar1);
		unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 0, 0);
		unk_0x8E88E73F74A9FF79(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0x4915F4759304D5CF(uParam0))
	{
		if (unk_0x37B568B777BC65F9(*uParam1))
		{
			uVar0 = unk_0x552C823E1D2A019C(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0xC831502E35848BE4(*uParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(uLocal_287[2]))
	{
		if (unk_0xF9D4EF1338E38AFB(uLocal_287[2], -880529684) == 7)
		{
			if (unk_0xFD34717937104F1C() > iLocal_336 + 8000)
			{
				unk_0xB583A7C3FEE69710(uLocal_287[2], 0);
				Var0 = { unk_0x3201284584C7CD83(uLocal_287[2], unk_0xF59B9063EDAC7451(0f, 2f), unk_0xF59B9063EDAC7451(0f, 2f), 0.5f) };
				iVar3 = unk_0x22C775856F4633CA(1000, 6000);
				unk_0x8CBE3882704F529D(uLocal_287[2], Var0, iVar3, 2049, 2);
				iLocal_336 = unk_0xFD34717937104F1C();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	if (!iLocal_339 && unk_0x3A83743561B4F70C())
	{
		unk_0x4BE5BB87853412F3("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0xDF0ADAD7E584090D(2, 223) || iLocal_316 == 1)
		{
			if (unk_0x3A83743561B4F70C())
			{
				if (unk_0x1095F403F52B42E1(iLocal_306, 0))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_285))
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
	if (unk_0x1095F403F52B42E1(iLocal_306, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_285))
		{
			unk_0x9568B1B58F78FF36(iLocal_285);
			unk_0x2F89329397A277BC(&uLocal_326);
			unk_0xE49301B2B6F420DE(0, iLocal_306, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			unk_0xE49301B2B6F420DE(0, iLocal_306, Local_263.f_1, 3f, 0, joaat("tourbus"), iLocal_511, 3f, 15f);
			unk_0x301F42EEE3C40328(uLocal_326);
			unk_0xE1072FA2FECBAD96(iLocal_285, uLocal_326);
			unk_0x3A95A0A3221D4208(&uLocal_326);
		}
	}
}

void func_29()
{
	Global_14688 = 0;
	func_18();
}

void func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	unk_0x8969D02DEDC106D2("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x9662BE461F9FDF9E(1000);
	while (!unk_0x71364F510A1CB69F())
	{
		unk_0xCAFB88D6C0B52307();
		unk_0xD8C147DA332E7F06(2);
		if (!unk_0x1095F403F52B42E1(iLocal_306, 0))
		{
			func_220();
		}
		if (unk_0x4915F4759304D5CF(iLocal_285))
		{
			func_220();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xEB60EF2E9051E817(1);
	}
	unk_0xD87B76260C547F31(0f);
	if (!unk_0x4915F4759304D5CF(iLocal_285))
	{
		unk_0x9568B1B58F78FF36(iLocal_285);
	}
	if (unk_0x1095F403F52B42E1(iLocal_306, 0))
	{
		unk_0x01AF8CB960828C2B(Param0.f_0, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0, 0);
		unk_0x4299736016AECE26(iLocal_306, Param0.f_0, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0x92DDCF53AA47A63D(iLocal_306, fParam3);
		unk_0x625FB4B0328423D9(iLocal_306, 0f);
		unk_0xE49301B2B6F420DE(iLocal_285, iLocal_306, unk_0xE2BBD32891C18569(iLocal_306, 1), 0f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		func_33(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0x1095F403F52B42E1(iLocal_306, 0))
	{
		unk_0x99F546A9200EA026(iLocal_306, 1084227584);
		unk_0xC19EDC1D7179164C(iLocal_306, 1, 1, 0);
		if (iVar0 < 13)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_285))
			{
				unk_0xE49301B2B6F420DE(iLocal_285, iLocal_306, Local_52[iVar0 /*15*/].f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			}
		}
		else if (!unk_0x4915F4759304D5CF(iLocal_285))
		{
			unk_0xE49301B2B6F420DE(iLocal_285, iLocal_306, Local_263.f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		}
		unk_0x625FB4B0328423D9(iLocal_306, 8f);
	}
	func_31();
	unk_0x559BDFBB7312C0FB(3);
	iLocal_50 = 3;
	func_21(1);
	unk_0x5AD7D03C214BDA88("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x70C1F5AA59767FE6(1000);
	while (unk_0x3BE8B7AEED1A3971())
	{
		unk_0xCAFB88D6C0B52307();
		unk_0xD8C147DA332E7F06(2);
		func_21(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCAFB88D6C0B52307();
	unk_0xD8C147DA332E7F06(2);
	func_21(1);
}

void func_31()
{
	Global_14688 = 0;
	func_32();
}

void func_32()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
	}
}

void func_33(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x9D22BD3C08954356(Param0, iParam3, iParam4, 127);
	if (unk_0x3E916160A9F1C90C(uVar0))
	{
		iVar1 = (unk_0xFD34717937104F1C() + iParam5);
		while (!unk_0x5B66F1DF84F47874(uVar0) && unk_0xFD34717937104F1C() < iVar1)
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
		if (unk_0xFD34717937104F1C() < iVar1)
		{
		}
		unk_0xE2F714507B54AC4D(uVar0);
	}
}

void func_34()
{
	Global_17228.f_6 = 1;
}

void func_35(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14681)
	{
		func_37(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_7())
	{
		Global_14513.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_40()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_278 + 1;
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
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
							if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_52[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_52[12 /*15*/].f_9)
								{
									Local_52[13 /*15*/].f_9 = 1;
									iLocal_314 = unk_0xFD34717937104F1C();
									iLocal_50 = 2;
								}
							}
						}
						else if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_52[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_306, 0))
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
				iLocal_313 = unk_0xFD34717937104F1C();
				if (unk_0x1095F403F52B42E1(iLocal_306, 0))
				{
					if (iVar1 <= 13)
					{
						func_78(unk_0xE2BBD32891C18569(iLocal_306, 1), Local_52[iVar1 /*15*/].f_1, &Local_320, &Local_323, 500);
					}
					if (unk_0x789CFCFF551BAB0A(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1))
					{
						if ((iLocal_313 - iLocal_314) > 0)
						{
							if (func_77(&uLocal_343, "BUSTOAU", Local_52[iLocal_278 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0x2F89329397A277BC(&uVar2);
										unk_0xE49301B2B6F420DE(0, iLocal_306, -100.461f, -206.1412f, 44.4215f, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0xE49301B2B6F420DE(0, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0x301F42EEE3C40328(uVar2);
										unk_0xE1072FA2FECBAD96(iLocal_285, uVar2);
										unk_0x3A95A0A3221D4208(&uVar2);
									}
									else
									{
										unk_0xE49301B2B6F420DE(iLocal_285, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
									}
								}
								iLocal_314 = unk_0xFD34717937104F1C();
								Local_52[iLocal_278 /*15*/].f_14 = 1;
								Local_52[iLocal_278 /*15*/].f_9 = 1;
								iLocal_50 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_42())
				{
					iLocal_50 = 3;
				}
				break;
			
			case 3:
				iLocal_313 = unk_0xFD34717937104F1C();
				func_41(Local_52[iLocal_278 /*15*/].f_4);
				if ((iLocal_313 - iLocal_314) > 5000)
				{
					if (!func_83())
					{
						iLocal_317 = 0;
						iLocal_314 = unk_0xFD34717937104F1C();
						if (unk_0xECD112E8A7AB2E8A())
						{
							unk_0xEB60EF2E9051E817(1);
						}
						if (Local_52[13 /*15*/].f_9 == 1)
						{
							iLocal_50 = 4;
						}
						else
						{
							if (!unk_0x4915F4759304D5CF(iLocal_285))
							{
								unk_0x4B690F60A2635642(iLocal_285, 15f);
							}
							iLocal_50 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_220();
				break;
			}
	}
}

void func_41(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((unk_0xFD34717937104F1C() - iLocal_299) > iLocal_293[iVar0] && iLocal_300[iVar0] == 0)
		{
			if (!unk_0x7112137033807390(uLocal_287[iVar0], 0))
			{
				unk_0x8CBE3882704F529D(uLocal_287[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_300[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_42()
{
	float fVar0[5];
	struct<3> Var6[5];
	
	if (func_75(1000))
	{
		iLocal_333 = 3;
	}
	iLocal_538 = 1;
	switch (iLocal_333)
	{
		case 0:
			if (unk_0x37B568B777BC65F9(uLocal_328))
			{
				unk_0x77F0486CE0E598D5(uLocal_328, 0);
				unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
			}
			func_67(1, 1, 1, 0, 0);
			unk_0x0859ADD704E2755D(1);
			unk_0xDC374DA4DC566237(0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
			unk_0x207FFFF07A784C81(1);
			uLocal_329 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_330 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x930701157A4B9374(uLocal_329, 1);
			unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
			unk_0xD21CD2A6F93F44A6(uLocal_330, uLocal_329, 17000, 1, 1);
			func_77(&uLocal_343, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0x4299736016AECE26(iLocal_306, Local_263.f_1, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(iLocal_306, Local_263.f_13);
			unk_0x99F546A9200EA026(iLocal_306, 1084227584);
			unk_0x14293208022014FA(iLocal_306, 3);
			if (!unk_0x4915F4759304D5CF(iLocal_285))
			{
				unk_0x9568B1B58F78FF36(iLocal_285);
				unk_0x4B690F60A2635642(iLocal_285, 0f);
				unk_0x2F89329397A277BC(&uLocal_326);
				unk_0x95015EE4AAC98495(0, iLocal_306, 24, 10000);
				unk_0x301F42EEE3C40328(uLocal_326);
				unk_0xE1072FA2FECBAD96(iLocal_285, uLocal_326);
				unk_0x3A95A0A3221D4208(&uLocal_326);
			}
			unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 268.4057f);
			unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
			iLocal_317 = 1;
			iLocal_314 = unk_0xFD34717937104F1C();
			iLocal_333 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0xFD34717937104F1C();
			if ((iLocal_313 - iLocal_314) > 3000)
			{
				unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 268.4057f);
				unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
				unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
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
					if (unk_0xDC5D81351D6A4DDB(uLocal_287[iLocal_335]))
					{
						if (!unk_0x4915F4759304D5CF(uLocal_287[iLocal_335]))
						{
							unk_0x836A6A722DEA63F1(uLocal_287[iLocal_335]);
							unk_0x92DDCF53AA47A63D(uLocal_287[iLocal_335], fVar0[iLocal_335]);
							unk_0x4299736016AECE26(uLocal_287[iLocal_335], Var6[iLocal_335 /*3*/], 1, 0, 0, 1);
							unk_0x1CBE3F8ED90509B2(uLocal_287[iLocal_335], 1193033728, 0);
						}
					}
					iLocal_335++;
				}
				iLocal_314 = unk_0xFD34717937104F1C();
				iLocal_333 = 2;
			}
			break;
		
		case 2:
			iLocal_313 = unk_0xFD34717937104F1C();
			if ((iLocal_313 - iLocal_314) > 13000)
			{
				iLocal_333 = 3;
			}
			break;
		
		case 3:
			unk_0x930701157A4B9374(uLocal_329, 0);
			unk_0x8E88E73F74A9FF79(0, 1, 3000, 0, 0, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0x77F0486CE0E598D5(uLocal_329, 0);
			unk_0x77F0486CE0E598D5(uLocal_330, 0);
			unk_0x0859ADD704E2755D(0);
			unk_0xDC374DA4DC566237(1);
			func_67(0, 1, 1, 0, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
			iLocal_314 = 10000;
			func_43();
			return 1;
			break;
	}
	return 0;
}

void func_43()
{
	func_47(-1, 0);
	func_44();
	func_220();
}

void func_44()
{
	func_45();
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_49(func_55(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_48(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_48(7);
			}
			else
			{
				func_48(1);
			}
		}
	}
}

void func_48(int iParam0)
{
	Global_106056 = iParam0;
}

void func_49(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = uParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
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
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853))
	{
		func_52(13, unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_51() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_45();
				}
			}
		}
	}
}

int func_51()
{
	return Global_25459;
}

int func_52(int iParam0, int iParam1)
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
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_54()
{
	return Global_1312736;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_20382.f_150[iVar1]), iVar0);
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3CAC2741CC1A631F(sParam0, ""))
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
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (unk_0xFD34717937104F1C() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((unk_0xFD34717937104F1C() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_60();
	}
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_61()
{
	func_11();
	switch (Global_106070.f_2355.f_539.f_4301)
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

int func_62(int iParam0)
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
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20382.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar16 = func_66(Var0);
	return uVar16;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFEB6EEC0545AF7AA(&cParam0))
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

void func_67(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_74(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(0);
			}
			if (!func_7())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_73(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_74(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_73(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_71(unk_0xD4E735F4B6A956AC())) && !func_69(unk_0xD4E735F4B6A956AC(), 0)) && !func_68()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_71(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_68()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
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
		iVar1 = func_54();
	}
	if (Global_1312837[iVar1] == 1)
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

int func_71(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_72())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_73(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_74(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

int func_75(int iParam0)
{
	if (unk_0x3A83743561B4F70C())
	{
		if ((unk_0xFD34717937104F1C() - Global_28) > iParam0)
		{
			Global_27 = unk_0xFD34717937104F1C();
		}
		Global_28 = unk_0xFD34717937104F1C();
		if ((unk_0xFD34717937104F1C() - Global_27) > iParam0)
		{
			if (func_76())
			{
				Global_27 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

int func_76()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xDF0ADAD7E584090D(0, 18) || unk_0xDF0ADAD7E584090D(2, 18))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_4(sParam2, iParam3, 0);
}

void func_78(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
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

void func_79()
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
			iLocal_314 = unk_0xFD34717937104F1C();
			iLocal_315 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0xFD34717937104F1C();
			if ((iLocal_313 - iLocal_314) > 2000)
			{
				if (!func_83())
				{
					iLocal_314 = unk_0xFD34717937104F1C();
					iLocal_315 = 2;
				}
			}
			break;
		
		case 2:
			if (func_83())
			{
				unk_0x73B1F715F502CBFC("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_539)
			{
				iLocal_313 = unk_0xFD34717937104F1C();
				if ((iLocal_313 - iLocal_314) > iLocal_542)
				{
					if (func_80(uLocal_287[iLocal_540]))
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
						unk_0x73B1F715F502CBFC("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0xE85BD4A26C0DFACA(uLocal_287[iLocal_540], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_541++;
						if (iLocal_541 == 3)
						{
							iLocal_539 = 0;
						}
						iLocal_542 = unk_0x22C775856F4633CA(9000, 14000);
						iLocal_314 = unk_0xFD34717937104F1C();
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
				iLocal_313 = unk_0xFD34717937104F1C();
				if ((iLocal_313 - iLocal_314) > 10000)
				{
					if (!func_83())
					{
						if (func_82(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0))
						{
							iLocal_508++;
							iLocal_314 = unk_0xFD34717937104F1C();
							iLocal_539 = 1;
							iLocal_541 = 0;
						}
						else
						{
							unk_0x73B1F715F502CBFC("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
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

int func_80(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0, 0))
	{
		if (unk_0x7E870945361E94B7(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	if (unk_0xDF0ADAD7E584090D(2, 222) && !iLocal_538)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_306))
		{
			if (unk_0x1095F403F52B42E1(iLocal_306, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_306, 0))
					{
						if (!unk_0x4915F4759304D5CF(iLocal_285))
						{
							unk_0x95015EE4AAC98495(iLocal_285, iLocal_306, 24, 5000);
							fLocal_308 = unk_0xEAA5CEF8875FEEED(iLocal_306);
							while (fLocal_308 > 5f)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0x1095F403F52B42E1(iLocal_306, 0))
								{
									fLocal_308 = unk_0xEAA5CEF8875FEEED(iLocal_306);
								}
							}
							func_29();
							unk_0x559BDFBB7312C0FB(iLocal_510);
							unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 1);
							unk_0x5AD7D03C214BDA88("RE_BUS_TOUR_SCENE");
							unk_0x3C50F1F859BA232B(iLocal_306, 0);
							if (unk_0x37B568B777BC65F9(uLocal_328))
							{
								unk_0x77F0486CE0E598D5(uLocal_328, 0);
								unk_0x8E88E73F74A9FF79(0, 0, 0, 1, 0, 0);
								unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
							}
							unk_0xFBA5AC89E66201B2(unk_0xA19140A5C42D8715(), iLocal_306, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_82(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_83()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	switch (iLocal_278)
	{
		case 0:
			unk_0x5FEB5D55B0DE217B(0.5f);
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
			unk_0x5FEB5D55B0DE217B(0.6f);
			break;
	}
}

void func_85()
{
	if (!unk_0x4915F4759304D5CF(iLocal_286) && !unk_0x4915F4759304D5CF(iLocal_285))
	{
		switch (iLocal_51)
		{
			case 0:
				unk_0xB9514DB95C310944(0);
				unk_0x8969D02DEDC106D2("RE_BUS_TOUR_SCENE");
				unk_0xA95C9BC9CAF4C02D(iLocal_306, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 0);
				func_67(1, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 256);
				unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
				unk_0x9827D9AC8985F888(Local_263.f_1, 30f, 0);
				unk_0xC35C0EB12F3FFC86(iLocal_285, 0);
				unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_306, 2);
				unk_0x0859ADD704E2755D(1);
				unk_0xDC374DA4DC566237(0);
				uLocal_329 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_330 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x930701157A4B9374(uLocal_329, 1);
				unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
				unk_0xD21CD2A6F93F44A6(uLocal_330, uLocal_329, 6500, 1, 1);
				if (unk_0x1095F403F52B42E1(unk_0xC409B91AC4749F88(), 0))
				{
					if (unk_0x10E54C268D1B3FED(unk_0xC409B91AC4749F88(), iLocal_306, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0x92DDCF53AA47A63D(unk_0xC409B91AC4749F88(), 65f);
						unk_0x4299736016AECE26(unk_0xC409B91AC4749F88(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0xD427B2DF0DC98BBA("BusTours");
				if (unk_0x1095F403F52B42E1(iLocal_306, 0))
				{
					func_78(unk_0xE2BBD32891C18569(iLocal_306, 1), Local_52[0 /*15*/].f_1, &Local_320, &Local_323, 500);
					iLocal_544 = unk_0xFD34717937104F1C();
					iLocal_51 = 1;
				}
				if (unk_0x06EBD57CD6085DD1() == 4)
				{
					iLocal_319 = 1;
				}
				iLocal_545 = 0;
				break;
			
			case 1:
				if (!iLocal_340)
				{
					func_116();
				}
				if ((unk_0xFD34717937104F1C() - iLocal_544) > 5000 && !iLocal_543)
				{
					func_77(&uLocal_343, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_115("Enter_bus"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					iLocal_543 = 1;
				}
				if ((unk_0xFD34717937104F1C() - iLocal_544) > 6200)
				{
					if (iLocal_319 == 1)
					{
						if (iLocal_545 == 0)
						{
							unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
							unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_545 = 1;
						}
					}
				}
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if ((unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iLocal_306) && unk_0xB10F7FE89663CB5B(iLocal_286, iLocal_306)) && unk_0xB10F7FE89663CB5B(iLocal_285, iLocal_306))
					{
						iLocal_51 = 2;
					}
					else if (func_75(1000))
					{
						if (unk_0x588F5E48C78F1C73(iLocal_306, 0, 0))
						{
							unk_0x692D5500D82E4F5D(iLocal_286, iLocal_306, 0);
						}
						iLocal_51 = 2;
					}
				}
				break;
			
			case 2:
				unk_0xE49301B2B6F420DE(iLocal_285, iLocal_306, Local_52[0 /*15*/].f_1, Local_52[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
				unk_0x930701157A4B9374(uLocal_329, 0);
				unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
				unk_0x77F0486CE0E598D5(uLocal_329, 0);
				unk_0x77F0486CE0E598D5(uLocal_330, 0);
				unk_0x0859ADD704E2755D(0);
				unk_0xDC374DA4DC566237(1);
				unk_0xCAFB88D6C0B52307();
				unk_0xD8C147DA332E7F06(2);
				func_67(0, 1, 1, 0, 0);
				iLocal_331 = func_10();
				func_86(iLocal_331, 1, iLocal_512);
				iLocal_510 = unk_0x0FBCD55C0F213948();
				if (!iLocal_319)
				{
					unk_0x559BDFBB7312C0FB(3);
				}
				else
				{
					func_21(1);
				}
				unk_0xE1623437A3194332(&uLocal_310);
				iLocal_49 = 2;
				break;
		}
	}
	else
	{
		func_220();
	}
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_87(Global_106070.f_28022[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_114();
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
					func_113(99, 1);
					func_112(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_112(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_112(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_98(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_94(5))
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
							func_112(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_112(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_112(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_94(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_112(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_112(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_112(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_112(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_112(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_112(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_112(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_112(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_112(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB09979570758BDAD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_112(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_112(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_112(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_112(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_112(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_112(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_94(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_112(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_112(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_112(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_112(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_112(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_112(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_93(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_113(95, iParam3);
					break;
				
				case 1:
					func_113(97, iParam3);
					break;
				
				case 2:
					func_113(96, iParam3);
					break;
			}
			func_113(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_90(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_90(iVar1);
	}
	iVar5 = (Global_53355[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53355[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53355[iVar2] = 2147483647;
				}
				else
				{
					Global_53355[iVar2] = (Global_53355[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_112(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_112(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_112(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53355[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53355[iVar2];
			Global_53355[iVar2] = (Global_53355[iVar2] - iParam3);
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
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106070.f_20536.f_233[iVar2 /*69*/]++;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_1++;
		if (Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_89(iParam0);
	if (Global_36117 == 15)
	{
		func_88(0);
	}
	return 1;
}

void func_88(bool bParam0)
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
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_90(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_53(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_53(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_53(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_53(137, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_92() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_92() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_91(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_91(int iParam0)
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
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_92()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_93(int iParam0)
{
	func_113(93, iParam0);
	func_113(29, iParam0);
	func_113(30, iParam0);
}

bool func_94(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_95(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_95(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_95(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_95(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_92() /*12745*/].f_8178.f_10, iParam0);
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_54();
	}
	iVar1 = func_97(iParam0, iParam1);
	uVar2 = func_96(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_54();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_98(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x16E6CF5D5B848918(27))
	{
		return 0;
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2AD48F3CEBA882E9(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x93180BE33E7149EF(joaat("num_cash_spent"), iVar1, 1);
		func_52(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_99(27, 1);
	return 1;
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_100(iParam0, iParam1);
}

int func_100(int iParam0, int iParam1)
{
	if (func_15(14) && !func_111(iParam0))
	{
		return 0;
	}
	if (unk_0x16E6CF5D5B848918(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_110(&Global_4268566))
	{
		if (func_108(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_101(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xFA4FDE2EBD31459D(iParam0))
		{
			return 0;
		}
		if (unk_0x16E6CF5D5B848918(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_101(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_111(iParam1))
	{
		return 0;
	}
	if (func_108(uParam0, iParam1))
	{
		return 0;
	}
	if (func_107(uParam0) < 0f)
	{
		func_106(uParam0, 0);
	}
	func_104(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_102(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_102(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_111(iParam1))
	{
		return 0;
	}
	if (func_108(uParam0, iParam1))
	{
		return 0;
	}
	if (func_107(uParam0) < 0f)
	{
		func_106(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_103(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_103(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_104(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_105(uParam0, iVar0);
		iVar0++;
	}
	func_106(uParam0, (Global_4268565 - 0.5f));
}

void func_105(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_106(var uParam0, float fParam1)
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

float func_107(var uParam0)
{
	return uParam0->f_80;
}

bool func_108(var uParam0, int iParam1)
{
	return func_109(uParam0, iParam1) != -1;
}

int func_109(var uParam0, int iParam1)
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

bool func_110(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_111(int iParam0)
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

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_114()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53355[0] == iVar0)
		{
			Global_53355[0] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53355[1] == iVar0)
		{
			Global_53355[1] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53355[2] == iVar0)
		{
			Global_53355[2] = iVar0;
		}
	}
}

bool func_115(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_116()
{
	if (!unk_0x4915F4759304D5CF(iLocal_286))
	{
		unk_0x9568B1B58F78FF36(iLocal_286);
		unk_0xA2EBCD9385E56019(iLocal_286, iLocal_306, 10000, 0, 2f, 262144, 0);
		unk_0xD738221C247C8B71(iLocal_286, 1);
		iLocal_340 = 1;
	}
}

void func_117()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_157())
		{
			unk_0x14293208022014FA(iLocal_306, 3);
			unk_0xF0F3162A538A2D92(iLocal_306, 0);
			func_220();
		}
		else if (func_148(4))
		{
			if ((unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_306, 5f, 5f, 5f, 0, 1, 0) && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) && !func_115("TX_H02"))
			{
				if (func_146())
				{
					if (!iLocal_513)
					{
						unk_0x14293208022014FA(iLocal_306, 1);
						iLocal_513 = 1;
					}
					unk_0x4BE5BB87853412F3("Enter_bus", 0);
					if (unk_0xD73B1037F6BD4B90(2, 23))
					{
						unk_0xA2EBCD9385E56019(unk_0xA19140A5C42D8715(), iLocal_306, -1, 2, 1f, 8, 0);
					}
					if (!unk_0xCE3CB618AFE55EFB(uLocal_310))
					{
						if (unk_0xCE3CB618AFE55EFB(uLocal_311))
						{
							unk_0xE1623437A3194332(&uLocal_311);
						}
						uLocal_310 = unk_0x6A15DD6A863D5E27(iLocal_306);
						unk_0xF46EDCACB3804F87(uLocal_310, 1);
						unk_0x575CF00E129E0CE1(uLocal_310, Global_25505);
						if (!unk_0x4915F4759304D5CF(iLocal_286))
						{
							unk_0x22DD1D053CFF9707(iLocal_286, unk_0xA19140A5C42D8715(), -1, 0, 2);
						}
						if (!func_145())
						{
							if (func_133())
							{
								func_220();
							}
							else
							{
								func_123(1);
							}
						}
					}
					if (func_122())
					{
						iLocal_538 = 0;
						func_121(1);
					}
				}
				else
				{
					unk_0x4BE5BB87853412F3("No_bus_money", 0);
					if (iLocal_513)
					{
						unk_0x14293208022014FA(iLocal_306, 2);
						iLocal_513 = 0;
					}
				}
			}
		}
		if (iLocal_335 < 5)
		{
			if (func_118(&(uLocal_287[iLocal_335])))
			{
				iLocal_335++;
			}
		}
	}
}

int func_118(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x00A7785CBA069915(Local_279, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0x4915F4759304D5CF(*uParam0))
		{
			if (func_120(*uParam0))
			{
				if (!unk_0x4943BEEC19289B8E(*uParam0))
				{
					unk_0x1F7948851FB36E88(*uParam0, 1, 0);
					unk_0x9568B1B58F78FF36(*uParam0);
					unk_0x1F4E5EFBFE503FB3(*uParam0, 1);
					unk_0xC4C22DDB26872744(*uParam0, "randompassenger");
					unk_0x13E0A8160525AE55(*uParam0, 134, 1);
					switch (iLocal_335)
					{
						case 0:
							if (unk_0x1095F403F52B42E1(iLocal_306, 0))
							{
								unk_0x692D5500D82E4F5D(*uParam0, iLocal_306, 3);
								unk_0xD738221C247C8B71(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0x1095F403F52B42E1(iLocal_306, 0))
							{
								unk_0x692D5500D82E4F5D(*uParam0, iLocal_306, 7);
								unk_0xD738221C247C8B71(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0x1095F403F52B42E1(iLocal_306, 0))
							{
								unk_0x692D5500D82E4F5D(*uParam0, iLocal_306, 6);
								unk_0xD738221C247C8B71(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0x1095F403F52B42E1(iLocal_306, 0))
							{
								unk_0x692D5500D82E4F5D(*uParam0, iLocal_306, 8);
								unk_0xD738221C247C8B71(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0x1095F403F52B42E1(iLocal_306, 0))
							{
								unk_0x692D5500D82E4F5D(*uParam0, iLocal_306, 1);
								unk_0xD738221C247C8B71(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_119(unk_0x18F3A53F9DAFB8C9(*uParam0));
					unk_0x4FE3554969185993(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_119(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = unk_0x22C775856F4633CA(0, 16);
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
	iVar0 = unk_0x22C775856F4633CA(0, 33);
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

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x8F474E419F56E48D(uParam0) == joaat("a_m_m_tramp_01") || unk_0x8F474E419F56E48D(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x8F474E419F56E48D(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x8F474E419F56E48D(iParam0) == joaat("s_m_y_cop_01")) || unk_0x8F474E419F56E48D(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x8F474E419F56E48D(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_121(int iParam0)
{
	iLocal_51 = 0;
	iLocal_49 = iParam0;
}

int func_122()
{
	if (unk_0x1095F403F52B42E1(iLocal_306, 0))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()) == iLocal_306)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_127())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_56(Global_106059))
		{
			func_124(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_56(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_125(func_126(iParam0), -1);
					Global_106070.f_24967.f_2++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 1))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_125(func_126(iParam0), -1);
					Global_106070.f_24967.f_3++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 2))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_125(func_126(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

void func_125(var uParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(uParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

char* func_126(int iParam0)
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

int func_127()
{
	switch (func_128(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
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

int func_128(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_132(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_130(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_129(uParam0, iParam4);
		}
	}
	return 2;
}

void func_129(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_130(int iParam0)
{
	return func_131(iParam0, Global_36117);
}

int func_131(int iParam0, int iParam1)
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

int func_132(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_130(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_133()
{
	if (!func_130(5))
	{
		return 1;
	}
	if (func_141())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_134(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_134(float fParam0, bool bParam1)
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
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (func_12(func_10()))
		{
			iVar36 = func_61();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar32 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar32 /*6*/], 3))
				{
					func_135(iVar32, &Var0);
					fVar35 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Var0.f_6, 1);
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

void func_135(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_136(uParam1, "Abigail1", func_138(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 1:
			func_136(uParam1, "Abigail2", func_138(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 2:
			func_136(uParam1, "Barry1", func_138(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 3:
			func_136(uParam1, "Barry2", func_138(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 4:
			func_136(uParam1, "Barry3", func_138(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 5:
			func_136(uParam1, "Barry3A", func_138(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 6:
			func_136(uParam1, "Barry3C", func_138(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 7:
			func_136(uParam1, "Barry4", func_138(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_137(iParam0), 0, 0);
			break;
		
		case 8:
			func_136(uParam1, "Dreyfuss1", func_138(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 9:
			func_136(uParam1, "Epsilon1", func_138(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 10:
			func_136(uParam1, "Epsilon2", func_138(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 11:
			func_136(uParam1, "Epsilon3", func_138(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 12:
			func_136(uParam1, "Epsilon4", func_138(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 13:
			func_136(uParam1, "Epsilon5", func_138(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 14:
			func_136(uParam1, "Epsilon6", func_138(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 15:
			func_136(uParam1, "Epsilon7", func_138(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 16:
			func_136(uParam1, "Epsilon8", func_138(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 17:
			func_136(uParam1, "Extreme1", func_138(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 18:
			func_136(uParam1, "Extreme2", func_138(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 19:
			func_136(uParam1, "Extreme3", func_138(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 20:
			func_136(uParam1, "Extreme4", func_138(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 21:
			func_136(uParam1, "Fanatic1", func_138(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_137(iParam0), 1, 0);
			break;
		
		case 22:
			func_136(uParam1, "Fanatic2", func_138(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_137(iParam0), 1, 0);
			break;
		
		case 23:
			func_136(uParam1, "Fanatic3", func_138(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_137(iParam0), 0, 1);
			break;
		
		case 24:
			func_136(uParam1, "Hao1", func_138(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_137(iParam0), 0, 1);
			break;
		
		case 25:
			func_136(uParam1, "Hunting1", func_138(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 26:
			func_136(uParam1, "Hunting2", func_138(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 27:
			func_136(uParam1, "Josh1", func_138(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 28:
			func_136(uParam1, "Josh2", func_138(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 29:
			func_136(uParam1, "Josh3", func_138(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 30:
			func_136(uParam1, "Josh4", func_138(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 31:
			func_136(uParam1, "Maude1", func_138(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 32:
			func_136(uParam1, "Minute1", func_138(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 33:
			func_136(uParam1, "Minute2", func_138(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 34:
			func_136(uParam1, "Minute3", func_138(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 35:
			func_136(uParam1, "MrsPhilips1", func_138(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 36:
			func_136(uParam1, "MrsPhilips2", func_138(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 37:
			func_136(uParam1, "Nigel1", func_138(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 38:
			func_136(uParam1, "Nigel1A", func_138(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 39:
			func_136(uParam1, "Nigel1B", func_138(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_137(iParam0), 1, 1);
			break;
		
		case 40:
			func_136(uParam1, "Nigel1C", func_138(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_137(iParam0), 1, 1);
			break;
		
		case 41:
			func_136(uParam1, "Nigel1D", func_138(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_137(iParam0), 1, 1);
			break;
		
		case 42:
			func_136(uParam1, "Nigel2", func_138(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 43:
			func_136(uParam1, "Nigel3", func_138(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_137(iParam0), 1, 1);
			break;
		
		case 44:
			func_136(uParam1, "Omega1", func_138(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 45:
			func_136(uParam1, "Omega2", func_138(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 46:
			func_136(uParam1, "Paparazzo1", func_138(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 47:
			func_136(uParam1, "Paparazzo2", func_138(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 48:
			func_136(uParam1, "Paparazzo3", func_138(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 49:
			func_136(uParam1, "Paparazzo3A", func_138(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 50:
			func_136(uParam1, "Paparazzo3B", func_138(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 51:
			func_136(uParam1, "Paparazzo4", func_138(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 52:
			func_136(uParam1, "Rampage1", func_138(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 54:
			func_136(uParam1, "Rampage3", func_138(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 55:
			func_136(uParam1, "Rampage4", func_138(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 56:
			func_136(uParam1, "Rampage5", func_138(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_137(iParam0), 0, 0);
			break;
		
		case 53:
			func_136(uParam1, "Rampage2", func_138(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_137(iParam0), 1, 0);
			break;
		
		case 57:
			func_136(uParam1, "TheLastOne", func_138(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 58:
			func_136(uParam1, "Tonya1", func_138(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 59:
			func_136(uParam1, "Tonya2", func_138(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 60:
			func_136(uParam1, "Tonya3", func_138(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 61:
			func_136(uParam1, "Tonya4", func_138(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		case 62:
			func_136(uParam1, "Tonya5", func_138(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_137(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_136(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_137(int iParam0)
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

struct<2> func_138(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_139(iParam0) };
	if (unk_0x429D45A6C6520026(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_139(int iParam0)
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

int func_140()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0x9E14E7823B1059CE() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	if (func_144() && !func_140())
	{
		return 1;
	}
	if (func_143() && func_142())
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return Global_105788 > 0;
}

int func_143()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_145()
{
	if ((Global_106059 == func_65() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (func_147(func_10()) >= iLocal_512)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
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
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_156()) || Global_105117) || Global_25461) || func_155()) || func_17(8, -1)) || func_154()) || func_153()) || func_152()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_156()) || Global_25461) || func_155()) || func_17(8, -1)) || func_152()) || func_154()) || func_153()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_156()) || Global_105117) || Global_25461) || func_155()) || func_17(8, -1)) || func_152()) || func_154()) || func_153()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_156()) || Global_105117) || Global_25461) || func_155()) || func_17(8, -1)) || func_154()) || func_153()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_156() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_17(8, -1)) || func_151()) || func_150()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_154()) || func_153()) || func_150()) || func_149())
						{
							return 0;
						}
						if ((unk_0x47C3DC461C758C29() && unk_0xF6F3AB25005ED460() != 3) && unk_0x84C1DECF60EFBBD7() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
						{
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_156()) || Global_25461) || func_155()) || func_17(8, -1)) || func_153()) || func_152()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_156()) || func_153()) || Global_105117) || Global_25461) || func_155()) || Global_37271) || func_17(8, -1)) || func_152()) || func_150()) || func_151()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_156()) || Global_105117) || Global_25461) || func_155()) || func_17(8, -1)) || func_152()) || func_150()) || func_154()) || func_153()) || func_151())
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

var func_149()
{
	return Global_93271.f_1;
}

int func_150()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_151()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	return Global_93284.f_328 > 0;
}

bool func_154()
{
	return Global_93284.f_327 > 0;
}

var func_155()
{
	return Global_1312857;
}

int func_156()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_157()
{
	if (func_170(iLocal_286))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_286))
		{
			if (func_162(iLocal_286))
			{
				func_160(iLocal_286, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_159();
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
	if (!unk_0x4915F4759304D5CF(iLocal_285))
	{
		if (((func_162(iLocal_285) || !unk_0x5D7DFE2058701942(iLocal_285, 0)) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iLocal_285)) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iLocal_285))
		{
			func_158(iLocal_286);
			return 1;
		}
	}
	else
	{
		func_158(iLocal_286);
		return 1;
	}
	if (unk_0xDEAEC99031DCB92A(iLocal_306, unk_0xA19140A5C42D8715(), 1))
	{
		if (func_170(iLocal_286))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_286))
			{
				func_158(iLocal_286);
				func_160(iLocal_286, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_220();
	}
	if (unk_0x34CEB9721AC6A0A9() >= 19 || unk_0x34CEB9721AC6A0A9() <= 6)
	{
		if (!func_83())
		{
			if (func_77(&uLocal_343, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_306, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	if (func_170(iLocal_286))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_286))
		{
			unk_0x1F4E5EFBFE503FB3(uParam0, 0);
			unk_0x9568B1B58F78FF36(uParam0);
			unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
			unk_0xD738221C247C8B71(iParam0, 1);
			func_31();
		}
	}
}

void func_159()
{
	if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_286, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_313 = unk_0xFD34717937104F1C();
		if ((iLocal_313 - iLocal_314) > 10000)
		{
			if (!func_83())
			{
				func_77(&uLocal_343, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_314 = unk_0xFD34717937104F1C();
		}
	}
}

void func_160(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(uParam0, sParam1, func_161(iParam2), 1);
}

int func_161(int iParam0)
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

int func_162(var uParam0)
{
	if (func_163(uParam0, &uLocal_337, &uLocal_334, iLocal_332, bLocal_338, 1077936128, 0) || unk_0x685AE6AF34B35D3B(uParam0))
	{
		func_158(uParam0);
		return 1;
	}
	return 0;
}

int func_163(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x7112137033807390(uParam0, 0) && !bParam4)
	{
		if (unk_0x2206F47E5C82D52C(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x7112137033807390(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			Var6 = { unk_0xE2BBD32891C18569(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x05EFB6A616B6FADE(iParam3, 3))
			{
				if (func_169(iParam0, iParam6))
				{
					func_168("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_168("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_167(iParam0);
					return 1;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x9809FE4B550B1EFE(Var6, fParam5, 1))
				{
					func_168("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_168("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_167(iParam0);
					return 1;
				}
				if (unk_0x0AF5F990243ADDFB(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_168("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_168("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_167(iParam0);
					return 1;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam3, 2))
			{
				fVar0 = unk_0xE430B9C6C2A954DD(unk_0xA19140A5C42D8715());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
				{
					if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x58DE86018EA47551(iParam0, unk_0xA19140A5C42D8715(), 17))
							{
								func_168("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_168("	aggro Ped knows player is pointing gun\n");
								func_164("		lockOnTimer = ", *uParam2);
								func_168("\n");
								func_164("		time since not LockedOn = ", (unk_0xFD34717937104F1C() - iLocal_43));
								func_168("\n");
								bVar2 = true;
								if (unk_0xFD34717937104F1C() > (iLocal_43 + *uParam2))
								{
									func_168("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_167(iParam0);
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
			if (!unk_0x05EFB6A616B6FADE(iParam3, 0))
			{
				if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
				{
					func_168("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_168("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_167(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0xFD34717937104F1C();
	}
	return 0;
}

void func_164(char* sParam0, int iParam1)
{
	func_166(sParam0);
	func_165(iParam1);
}

void func_165(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_166(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(uParam0, uParam0))
	{
	}
}

void func_167(var uParam0)
{
	unk_0x68995A99EFE15C73(uParam0);
}

void func_168(char* sParam0)
{
	func_166(sParam0);
}

int func_169(int iParam0, int iParam1)
{
	if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xDEAEC99031DCB92A(uParam0, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
	{
		if ((unk_0xF49CB145FAD56CFD(iParam0) - unk_0x24A1A7BF4ED94B71(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_171()
{
	unk_0x4C38964D26CECFD6(0, 1);
	unk_0x4C38964D26CECFD6(1, 1);
	unk_0x4C38964D26CECFD6(2, 1);
	unk_0x4C38964D26CECFD6(3, 1);
	unk_0x4C38964D26CECFD6(4, 1);
	unk_0x4C38964D26CECFD6(5, 1);
	unk_0x4C38964D26CECFD6(6, 1);
	unk_0x4C38964D26CECFD6(7, 1);
	unk_0x4C38964D26CECFD6(8, 1);
}

void func_172()
{
	unk_0x280AD73D0C26D45B(unk_0xD4E735F4B6A956AC());
	unk_0x09DAAE86322DF12D(unk_0xD4E735F4B6A956AC(), 5);
	unk_0x09DAAE86322DF12D(unk_0xD4E735F4B6A956AC(), 3);
	unk_0x09DAAE86322DF12D(unk_0xD4E735F4B6A956AC(), 15);
	unk_0x09DAAE86322DF12D(unk_0xD4E735F4B6A956AC(), 2);
	unk_0x09DAAE86322DF12D(unk_0xD4E735F4B6A956AC(), 4);
}

void func_173()
{
	if (iLocal_318)
	{
		unk_0x7E393C5E27D0ACA8(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1);
	}
}

void func_174()
{
	if (unk_0x94749ACCB40AFA88("RAIN") || unk_0x94749ACCB40AFA88("THUNDER"))
	{
		unk_0x3E3FCB801A0CF08C("OVERCAST", 10000f);
	}
}

void func_175()
{
	int iVar0;
	int iVar1;
	
	if (func_178())
	{
		func_220();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0xCACEBBBEAD8F262E(iVar0);
		unk_0xCACEBBBEAD8F262E(iVar1);
		unk_0x6D68030C791111E0(sLocal_509);
		unk_0xCACEBBBEAD8F262E(joaat("tourbus"));
		unk_0x6A633E13B2A856AE("BUSTOUR", 2);
		if ((((unk_0x7FC99CCC73354033(iVar0) && unk_0x7FC99CCC73354033(iVar1)) && unk_0x39C2D9AB77873F84(sLocal_509)) && unk_0x7FC99CCC73354033(joaat("tourbus"))) && unk_0xD744813D9841CA9A(2))
		{
			unk_0x789152CB302E8726(0);
			unk_0xB40E9D1C648558DD(Local_279, &uLocal_282, &uLocal_307, 1, 1077936128, 0);
			iLocal_306 = unk_0x48CFBECB146FD1A1(joaat("tourbus"), Local_263.f_1, Local_263.f_13, 1, 1, 0);
			unk_0x99F546A9200EA026(iLocal_306, 1084227584);
			unk_0x14293208022014FA(iLocal_306, 3);
			unk_0xFA3262CC29012212(iLocal_306, 0);
			unk_0x11D8017AF1DF991E(iLocal_306, "OFF");
			unk_0x9F3F43B8D4BC7F09(iLocal_306, 0, 0);
			unk_0x6202B241A8864FC2(iLocal_306, 2, 1);
			unk_0xFC00A668AFC2126D(joaat("tourbus"), 1);
			unk_0x117F5CD9634D61A9(iLocal_306, 100f);
			iLocal_285 = unk_0x91A7C8CA5E332C03(iLocal_306, 26, iVar1, -1, 1, 1);
			unk_0x1F4E5EFBFE503FB3(iLocal_285, 1);
			unk_0x13E0A8160525AE55(iLocal_285, 251, 1);
			unk_0xA78BBA5574A997CD(iLocal_285, 1);
			if (unk_0xDC5D81351D6A4DDB(iLocal_285))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_285))
				{
					unk_0x72A0FF8C49CFFC0D(iLocal_285, 3, 1, 2, 0);
					unk_0x72A0FF8C49CFFC0D(iLocal_285, 4, 0, 2, 0);
				}
			}
			iLocal_286 = unk_0x35C6E06B120EB2E3(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0x4FE3554969185993(iLocal_286, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x1F4E5EFBFE503FB3(iLocal_286, 1);
			unk_0x96BFF0680C7B6FD5(iLocal_286, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_286, 0, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_286, 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_286, 3, 0, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_286, 4, 1, 0, 0);
			unk_0x2F89329397A277BC(&uLocal_327);
			unk_0x3F01127ECD227890(0, sLocal_509, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x3F01127ECD227890(0, sLocal_509, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x3F01127ECD227890(0, sLocal_509, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x4C9989F866EF6731(uLocal_327, 1);
			unk_0x301F42EEE3C40328(uLocal_327);
			unk_0xE1072FA2FECBAD96(iLocal_286, uLocal_327);
			unk_0x3A95A0A3221D4208(&uLocal_327);
			func_177(&uLocal_343, 3, iLocal_286, "TOURGUIDE", 0, 1);
			if (!unk_0xCE3CB618AFE55EFB(uLocal_311))
			{
				uLocal_311 = unk_0x6A15DD6A863D5E27(iLocal_306);
				unk_0x7DB79A42AADE120F(uLocal_311, 85);
			}
			func_176();
			iLocal_48 = 1;
		}
	}
}

void func_176()
{
	unk_0x3B7A32E04BBE59A5(iLocal_285, 17, 1);
	unk_0x3B7A32E04BBE59A5(iLocal_286, 17, 1);
	unk_0x94E87D83163B4BEB("re_bus_tours1", &uLocal_309);
	unk_0xDFA901280292A2FB(iLocal_285, uLocal_309);
	unk_0xDFA901280292A2FB(iLocal_286, uLocal_309);
	unk_0x80E7C4A78224C8F9(1, uLocal_309, joaat("player"));
}

void func_177(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

int func_178()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_141())
	{
		return 1;
	}
	if (func_134(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_179()
{
}

void func_180()
{
}

void func_181()
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
	func_182(Var0);
	func_182(Var15);
	func_182(Var30);
	func_182(Var45);
	func_182(Var60);
	func_182(Var75);
	func_182(Var90);
	func_182(Var105);
	func_182(Var120);
	func_182(Var135);
	func_182(Var150);
	func_182(Var165);
	func_182(Var180);
	func_182(Local_263);
	iLocal_278 = 0;
}

void func_182(char[60] cParam0)
{
	Local_52[iLocal_278 /*15*/] = { cParam0 };
	iLocal_278++;
}

void func_183(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_185(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_184();
}

void func_184()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xFC00A668AFC2126D(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), 1);
		}
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, 0);
	}
}

void func_185(int iParam0)
{
	Global_106059 = iParam0;
}

int func_186(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_144510)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_65();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			Var1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_46(0))
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (func_217())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_134(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_216(iParam3))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_215(func_10()) == 4 || func_215(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_214(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_213(Global_106070.f_24967.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xFD34717937104F1C() - Global_106061) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_212())
		{
			return 0;
		}
		if (unk_0x356461BAB19FFA77())
		{
			return 0;
		}
		if (unk_0x62558A57CB60EE71())
		{
			return 0;
		}
		if (!func_148(4))
		{
			return 0;
		}
		if (!func_130(5))
		{
			return 0;
		}
		if (func_211(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x893915B076B1DDF7(unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())))
		{
			if ((unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(377.153f, -717.567f, 10.0536f) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(320.9934f, 265.2515f, 82.1221f)) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_211(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_216(30) && !func_211(30, 0))
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
				Var5 = { Global_106070.f_2355.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_106070.f_2355.f_539.f_2276[iVar4];
				if (func_210(iVar8))
				{
					if (func_188(iVar4))
					{
						if (!func_187(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Var5) < (210f * 210f))
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

bool func_187(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_189(iVar0);
}

int func_189(int iParam0)
{
	return func_190(iParam0, 1);
}

int func_190(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_210(iParam0))
	{
		return 0;
	}
	func_191(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_192(func_203(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_201(iParam1);
		iVar1 = func_199(iParam0);
		iVar2 = (func_199(iParam0) - func_199(iParam1));
		iVar3 = (func_201(iParam0) - func_201(iParam1));
		iVar4 = (func_198(iParam0) - func_198(iParam1));
		iVar5 = (func_197(iParam0) - func_197(iParam1));
		iVar6 = (func_196(iParam0) - func_196(iParam1));
		iVar7 = (func_195(iParam0) - func_195(iParam1));
	}
	else
	{
		iVar0 = func_201(iParam0);
		iVar1 = func_199(iParam1);
		iVar2 = (func_199(iParam1) - func_199(iParam0));
		iVar3 = (func_201(iParam1) - func_201(iParam0));
		iVar4 = (func_198(iParam1) - func_198(iParam0));
		iVar5 = (func_197(iParam1) - func_197(iParam0));
		iVar6 = (func_196(iParam1) - func_196(iParam0));
		iVar7 = (func_195(iParam1) - func_195(iParam0));
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
		iVar4 = (iVar4 + func_194(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_193(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_193(float fParam0, float fParam1, float fParam2)
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

int func_194(int iParam0, int iParam1)
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

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_196(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_199(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_200(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_200(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_201(int iParam0)
{
	return iParam0 & 15;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_210(iParam1) || !func_210(iParam0))
	{
		return 1;
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
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_203()
{
	var uVar0;
	
	func_209(&uVar0, unk_0xC5B07C33AC7BB174());
	func_208(&uVar0, unk_0x65DA628D62901275());
	func_207(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_206(&uVar0, unk_0xC9A0B68BA813CF99());
	func_205(&uVar0, unk_0x897D202BD69186D5());
	func_204(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_204(var uParam0, int iParam1)
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

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_201(*uParam0);
	iVar1 = func_199(*uParam0);
	if (iParam1 < 1 || iParam1 > func_194(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_210(int iParam0)
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
	iVar0 = func_195(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_196(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_197(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_199(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_201(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_198(iParam0);
	if (iVar5 < 1 || iVar5 > func_194(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	func_9();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_213(int iParam0)
{
	return func_202(func_203(), iParam0);
}

int func_214(int iParam0, int iParam1, int iParam2)
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

int func_215(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_216(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_1, iVar0);
	}
	return bVar1;
}

int func_217()
{
	var uVar0;
	
	if (Global_25609)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(uVar0, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xB0D49A1F9F054602(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_218()
{
	var uVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x2BCFB39E86340DAA(&uVar0, 2);
				unk_0x2BCFB39E86340DAA(&uVar0, 4);
				unk_0x2BCFB39E86340DAA(&uVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219()
{
	if (unk_0x34CEB9721AC6A0A9() > 19 || unk_0x34CEB9721AC6A0A9() < 6)
	{
		return 0;
	}
	return 1;
}

void func_220()
{
	int iVar0;
	
	unk_0xFFC237573AEB000B();
	unk_0xF0E859E9E316E981();
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xEB60EF2E9051E817(0);
		unk_0xD87B76260C547F31(0f);
	}
	if (unk_0x37B568B777BC65F9(uLocal_329))
	{
		unk_0x930701157A4B9374(uLocal_329, 0);
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
		unk_0x77F0486CE0E598D5(uLocal_329, 0);
		unk_0x0859ADD704E2755D(0);
	}
	if (unk_0x37B568B777BC65F9(uLocal_330))
	{
		unk_0x77F0486CE0E598D5(uLocal_330, 0);
	}
	if (iLocal_49 >= 2)
	{
		unk_0x559BDFBB7312C0FB(iLocal_510);
	}
	unk_0xDC374DA4DC566237(1);
	if (iLocal_49 >= 1)
	{
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_285))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_285))
		{
			unk_0x13E0A8160525AE55(iLocal_285, 251, 0);
			unk_0xC35C0EB12F3FFC86(iLocal_285, 1);
			unk_0xD738221C247C8B71(iLocal_285, 1);
			unk_0x1F4E5EFBFE503FB3(iLocal_285, 0);
		}
		unk_0x7E4E83D33161D01A(&iLocal_285);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_286))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_286))
		{
			unk_0x96BFF0680C7B6FD5(iLocal_286, 1);
			unk_0xD738221C247C8B71(iLocal_286, 1);
			unk_0x1F4E5EFBFE503FB3(iLocal_286, 0);
		}
		unk_0x7E4E83D33161D01A(&iLocal_286);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xDC5D81351D6A4DDB(uLocal_287[iVar0]))
		{
			if (func_170(uLocal_287[iVar0]))
			{
				unk_0x1F4E5EFBFE503FB3(uLocal_287[iVar0], 0);
			}
			unk_0x7E4E83D33161D01A(&(uLocal_287[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_306))
	{
		unk_0x14293208022014FA(iLocal_306, 1);
		unk_0xF0F3162A538A2D92(iLocal_306, 1);
		unk_0x792676988A48387F(&iLocal_306);
	}
	unk_0xB9514DB95C310944(1);
	if (func_145())
	{
		func_232();
	}
	else
	{
		func_231(&Global_25518);
	}
	unk_0x207FFFF07A784C81(1);
	func_221(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_221(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145())
	{
		func_224(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_223(30000);
		StringCopy(&cVar0, func_222(Global_106059, 1), 64);
		if (func_64(Global_106059) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106058, 64);
		}
		unk_0xAC757D2BA72C24C9(&cVar0, Global_106056, (unk_0xFD34717937104F1C() - Global_106057), 0);
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106066, 0) && Global_106070.f_24967.f_2 < 3)
	{
		unk_0xFA57C719261AA55D(&Global_106066, 0);
	}
	func_231(&Global_25518);
	Global_106060 = 0;
	func_185(-1);
}

char* func_222(int iParam0, bool bParam1)
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

void func_223(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_224(int iParam0)
{
	func_225(iParam0, 0, func_230(iParam0));
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_203();
	func_228(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_227(iParam0, &uVar0);
	Var1 = { func_226(&uVar0) };
}

struct<16> func_226(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_199(*uParam0), 64);
	return Var0;
}

void func_227(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_201(*uParam0);
	iVar2 = func_198(*uParam0);
	iVar3 = func_197(*uParam0);
	iVar4 = func_196(*uParam0);
	iVar5 = func_195(*uParam0);
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
	iVar6 = func_194(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_194(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_229(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_209(uParam0, iParam1);
	func_208(uParam0, iParam2);
	func_207(uParam0, iParam3);
	func_205(uParam0, iParam5);
	func_206(uParam0, iParam4);
	func_204(uParam0, iParam6);
}

int func_230(int iParam0)
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

void func_231(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_232()
{
	func_223(30000);
	func_231(&Global_25518);
	Global_25506 = unk_0xFD34717937104F1C();
}

