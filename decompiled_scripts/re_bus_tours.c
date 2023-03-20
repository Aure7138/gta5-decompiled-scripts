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
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		if (unk_0xB86D29B10F627379(iLocal_305, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_305, 0))
				{
					unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), unk_0xC899C78DB72CCBCC(iLocal_305, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), unk_0xC230DD956E2F5507(iLocal_305));
					unk_0x4FE2FB654BF367EB(unk_0x096275889B8E0EE0(), 1);
					unk_0xC27FB879C2B9A2EB("RE_BUS_TOUR_SCENE");
					unk_0x43FB2E98C3D3A62B(iLocal_305, 0);
				}
			}
		}
		func_214();
	}
	if (!func_213())
	{
		unk_0x5E8B6D17FF91CD59();
	}
	if (func_180(Local_278, 2, 0, 1, 0))
	{
		func_177(-1);
	}
	else
	{
		unk_0x5E8B6D17FF91CD59();
	}
	func_175();
	func_174();
	while (true)
	{
		func_173();
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
		}
		switch (iLocal_311)
		{
			case 0:
				if (unk_0x4F4FF2F3B81506A7())
				{
					if (func_213())
					{
						switch (iLocal_47)
						{
							case 0:
								func_169();
								break;
							
							case 1:
								if (unk_0xB86D29B10F627379(iLocal_305, 0))
								{
									if (unk_0x6CFF81397164A1D3(iLocal_284) || unk_0x6CFF81397164A1D3(uLocal_285))
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
				if (unk_0xB86D29B10F627379(iLocal_305, 0))
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
	unk_0x84FAB590577B7033(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0x562F5D788AF3FA80(0, 68, 1);
	unk_0x562F5D788AF3FA80(0, 99, 1);
	unk_0x562F5D788AF3FA80(0, 1, 1);
	unk_0x562F5D788AF3FA80(0, 2, 1);
	if (!unk_0x6CFF81397164A1D3(iLocal_285) && !unk_0x6CFF81397164A1D3(iLocal_284))
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
			unk_0xA5929C2E57AC90D1();
			unk_0xB5F6539FA93ECBF6(2);
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (!unk_0xEB8F1713A0FC1B96(unk_0x096275889B8E0EE0(), iLocal_305) && iLocal_277 + 1 < 13)
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
				unk_0x84FAB590577B7033("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_305))
			{
				iLocal_315 = 1;
			}
			unk_0x84B81EF78BD22357(iLocal_305);
		}
		else
		{
			func_3(&uLocal_342, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0x96F78A6A075D55D9(iLocal_305, 3);
			unk_0x54800D386C5825E5(iLocal_305, 0);
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
					unk_0x89EEEEF0CEB4D045(0);
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
		if (unk_0x200E87988220C592())
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_8())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
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
	unk_0x89EEEEF0CEB4D045(0);
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
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
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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

int func_10()
{
	func_11();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_14(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_13(unk_0x096275889B8E0EE0());
			if (func_12(iVar0) && (!func_15(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_12(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_34913 == iParam0;
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_18()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
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
	if (unk_0xB86D29B10F627379(iParam0, 0))
	{
		if ((unk_0x1ABA9753939503C5(iParam0, 0, 7000) || unk_0x1ABA9753939503C5(iParam0, 1, 7000)) || unk_0x1ABA9753939503C5(iParam0, 2, 7000))
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
		if (unk_0xCCBB0BB9790E1F47(2, 225))
		{
			if (iLocal_318)
			{
				iLocal_318 = 0;
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 256);
				unk_0xF081C5E1DF4B09BF(1);
			}
			else
			{
				iLocal_318 = 1;
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				unk_0xF081C5E1DF4B09BF(0);
			}
		}
	}
	if (iLocal_318 && !Local_51[13 /*15*/].f_9)
	{
		if (unk_0x2E04AB5FEE042D4A())
		{
			unk_0x1BCEC33D54CFCA8A(0);
		}
		func_24();
	}
	else if (iLocal_316)
	{
		if (unk_0x153AD457764FD704(uLocal_327))
		{
			unk_0x4E67E0B6D7FD5145(uLocal_327, 0);
			unk_0x33281167E4942E4F(0, 0, 0, 1, 0, 0);
			unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
			func_22(Local_51[iLocal_277 /*15*/].f_4, Local_51[iLocal_277 /*15*/].f_7);
		}
	}
	else if (unk_0x153AD457764FD704(uLocal_327))
	{
		unk_0x4E67E0B6D7FD5145(uLocal_327, 0);
		unk_0x33281167E4942E4F(0, 0, 0, 1, 0, 0);
		unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
	}
}

void func_22(struct<3> Param0, var uParam3)
{
	if (unk_0xB86D29B10F627379(iLocal_305, 0))
	{
		if (!unk_0x153AD457764FD704(uLocal_327) && !unk_0x2E04AB5FEE042D4A())
		{
			if (!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_262.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0xFA33B8C69A4A6A0F(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_313 = unk_0x4F67E8ECA7D3F667();
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_284))
		{
			unk_0xAD92B87536A0B81C(iLocal_284, 3f);
		}
		iLocal_316 = 1;
	}
}

void func_23(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_298 = unk_0x4F67E8ECA7D3F667();
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		iVar1 = unk_0x9C1C462D7B1DD1F9(6000, 16000);
		unk_0x67BFB35F43BF984D(unk_0x096275889B8E0EE0(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0x6CFF81397164A1D3(uLocal_286[iVar0]))
		{
			iVar1 = unk_0x9C1C462D7B1DD1F9(6000, 16000);
			iLocal_292[iVar0] = unk_0x9C1C462D7B1DD1F9(0, 2000);
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
	if (unk_0x153AD457764FD704(uLocal_327))
	{
		if (unk_0x3653C46DD33107D5(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 218) * 127f));
		iVar11 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 219) * 127f));
		iVar12 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 220) * 127f));
		iVar13 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 221) * 127f));
		if (!unk_0x1A89600CDAF62A93())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || unk_0x3653C46DD33107D5(2))
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
		if ((iVar12 > 28 || iVar12 < -28) || unk_0x3653C46DD33107D5(2))
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
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x3653C46DD33107D5(2))
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
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x3653C46DD33107D5(2))
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
		func_25(unk_0x096275889B8E0EE0(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		unk_0x27666E5988D9D429(uLocal_327, fVar1);
		unk_0xFDC0DF7F6FB0A592(uLocal_327, unk_0x096275889B8E0EE0(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_327 = unk_0xE72CDBA7F0A02DD6("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0xFDC0DF7F6FB0A592(uLocal_327, unk_0x096275889B8E0EE0(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0xA924028272A61364(uLocal_327, 0.01f);
		fLocal_340 = -70f;
		fLocal_341 = 3f;
		func_25(unk_0x096275889B8E0EE0(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		unk_0x27666E5988D9D429(uLocal_327, fVar1);
		unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 0);
		unk_0x33281167E4942E4F(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0x6CFF81397164A1D3(uParam0))
	{
		if (unk_0x153AD457764FD704(*uParam1))
		{
			uVar0 = unk_0xC230DD956E2F5507(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0x63DFA6810AD78719(*uParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x6CFF81397164A1D3(uLocal_286[2]))
	{
		if (unk_0x04932A97CB319DE0(uLocal_286[2], -880529684) == 7)
		{
			if (unk_0x4F67E8ECA7D3F667() > iLocal_335 + 8000)
			{
				unk_0x4FE2FB654BF367EB(uLocal_286[2], 0);
				Var0 = { unk_0xC899C78DB72CCBCC(uLocal_286[2], unk_0xE29F927A961F8AAA(0f, 2f), unk_0xE29F927A961F8AAA(0f, 2f), 0.5f) };
				iVar3 = unk_0x9C1C462D7B1DD1F9(1000, 6000);
				unk_0x67BFB35F43BF984D(uLocal_286[2], Var0, iVar3, 2049, 2);
				iLocal_335 = unk_0x4F67E8ECA7D3F667();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_277 + 1;
	if (!iLocal_338 && unk_0x37F9A426FBCF4AF2())
	{
		unk_0xFADD04DD444BE86D("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0xCCBB0BB9790E1F47(2, 223) || iLocal_315 == 1)
		{
			if (unk_0x37F9A426FBCF4AF2())
			{
				if (unk_0xB86D29B10F627379(iLocal_305, 0))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_284))
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
	if (unk_0xB86D29B10F627379(iLocal_305, 0))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_284))
		{
			unk_0x0F1ABE64C3C18E5A(iLocal_284);
			unk_0xF4BF3E3D7FE56705(&uLocal_325);
			unk_0xBB26FB233542CFFE(0, iLocal_305, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			unk_0xBB26FB233542CFFE(0, iLocal_305, Local_262.f_1, 3f, 0, joaat("tourbus"), iLocal_510, 3f, 15f);
			unk_0xFF7E39890B2840DD(uLocal_325);
			unk_0xD59C10966EB589EA(iLocal_284, uLocal_325);
			unk_0x5EC7E18324A7D03D(&uLocal_325);
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
	unk_0x5F70787AC4BF7928("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x40C719A5E410B9E4(1000);
	while (!unk_0xF5472C80DF2FF847())
	{
		unk_0xA5929C2E57AC90D1();
		unk_0xB5F6539FA93ECBF6(2);
		if (!unk_0xB86D29B10F627379(iLocal_305, 0))
		{
			func_214();
		}
		if (unk_0x6CFF81397164A1D3(iLocal_284))
		{
			func_214();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0x1BCEC33D54CFCA8A(1);
	}
	unk_0x5D1EB123EAC5D071(0f);
	if (!unk_0x6CFF81397164A1D3(iLocal_284))
	{
		unk_0x0F1ABE64C3C18E5A(iLocal_284);
	}
	if (unk_0xB86D29B10F627379(iLocal_305, 0))
	{
		unk_0x894DDE7F2D919046(Param0.f_0, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0);
		unk_0xF6A103413A202C37(iLocal_305, Param0.f_0, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(iLocal_305, fParam3);
		unk_0xF9F92AF49F12F6E7(iLocal_305, 0f);
		unk_0xBB26FB233542CFFE(iLocal_284, iLocal_305, unk_0xA86D5F069399F44D(iLocal_305, 1), 0f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		func_33(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0xB86D29B10F627379(iLocal_305, 0))
	{
		unk_0x7263332501E07F52(iLocal_305);
		unk_0xB64CFA14CB9A2E78(iLocal_305, 1, 1);
		if (iVar0 < 13)
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_284))
			{
				unk_0xBB26FB233542CFFE(iLocal_284, iLocal_305, Local_51[iVar0 /*15*/].f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			}
		}
		else if (!unk_0x6CFF81397164A1D3(iLocal_284))
		{
			unk_0xBB26FB233542CFFE(iLocal_284, iLocal_305, Local_262.f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		}
		unk_0xF9F92AF49F12F6E7(iLocal_305, 8f);
	}
	func_31();
	unk_0x0C085886B2D6687B(3);
	iLocal_49 = 3;
	func_21(1);
	unk_0xC27FB879C2B9A2EB("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x6A053CF596F67DF7(1000);
	while (unk_0x0CECCC63FFA2EF24())
	{
		unk_0xA5929C2E57AC90D1();
		unk_0xB5F6539FA93ECBF6(2);
		func_21(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA5929C2E57AC90D1();
	unk_0xB5F6539FA93ECBF6(2);
	func_21(1);
}

void func_31()
{
	Global_14558 = 0;
	func_32();
}

void func_32()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

void func_33(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x88ACEAB8BF7F812A(Param0, iParam3, iParam4, 127);
	if (unk_0xCD873A48D113E465(uVar0))
	{
		iVar1 = (unk_0x4F67E8ECA7D3F667() + iParam5);
		while (!unk_0xA31A90A5F6A2C963(uVar0) && unk_0x4F67E8ECA7D3F667() < iVar1)
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
		if (unk_0x4F67E8ECA7D3F667() < iVar1)
		{
		}
		unk_0x3594F798649853E3(uVar0);
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
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
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
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
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
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
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
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
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
							if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_51[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_51[12 /*15*/].f_9)
								{
									Local_51[13 /*15*/].f_9 = 1;
									iLocal_313 = unk_0x4F67E8ECA7D3F667();
									iLocal_49 = 2;
								}
							}
						}
						else if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_51[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_305, 0))
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
				iLocal_312 = unk_0x4F67E8ECA7D3F667();
				if (unk_0xB86D29B10F627379(iLocal_305, 0))
				{
					if (iVar1 <= 13)
					{
						func_76(unk_0xA86D5F069399F44D(iLocal_305, 1), Local_51[iVar1 /*15*/].f_1, &Local_319, &Local_322, 500);
					}
					if (unk_0x421CEB1D8D021C2D(Local_319.f_0, Local_319.f_1, Local_322.f_0, Local_322.f_1))
					{
						if ((iLocal_312 - iLocal_313) > 0)
						{
							if (func_75(&uLocal_342, "BUSTOAU", Local_51[iLocal_277 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0xF4BF3E3D7FE56705(&uVar2);
										unk_0xBB26FB233542CFFE(0, iLocal_305, -100.461f, -206.1412f, 44.4215f, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										unk_0xBB26FB233542CFFE(0, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										unk_0xFF7E39890B2840DD(uVar2);
										unk_0xD59C10966EB589EA(iLocal_284, uVar2);
										unk_0x5EC7E18324A7D03D(&uVar2);
									}
									else
									{
										unk_0xBB26FB233542CFFE(iLocal_284, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
									}
								}
								iLocal_313 = unk_0x4F67E8ECA7D3F667();
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
				iLocal_312 = unk_0x4F67E8ECA7D3F667();
				func_40(Local_51[iLocal_277 /*15*/].f_4);
				if ((iLocal_312 - iLocal_313) > 5000)
				{
					if (!func_81())
					{
						iLocal_316 = 0;
						iLocal_313 = unk_0x4F67E8ECA7D3F667();
						if (unk_0x2E04AB5FEE042D4A())
						{
							unk_0x1BCEC33D54CFCA8A(1);
						}
						if (Local_51[13 /*15*/].f_9 == 1)
						{
							iLocal_49 = 4;
						}
						else
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_284))
							{
								unk_0xAD92B87536A0B81C(iLocal_284, 15f);
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
		if ((unk_0x4F67E8ECA7D3F667() - iLocal_298) > iLocal_292[iVar0] && iLocal_299[iVar0] == 0)
		{
			if (!unk_0x7D5B1F88E7504BBA(uLocal_286[iVar0]))
			{
				unk_0x67BFB35F43BF984D(uLocal_286[iVar0], Param0, 20000, 2050, 4);
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
			if (unk_0x153AD457764FD704(uLocal_327))
			{
				unk_0x4E67E0B6D7FD5145(uLocal_327, 0);
				unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
			}
			func_66(1, 1, 1, 0);
			unk_0xDA4E6E0EDF5FE3A0(1);
			unk_0x1B3DA717B9AFF828(0);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
			unk_0xF081C5E1DF4B09BF(1);
			uLocal_328 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_329 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x87295BCA613800C8(uLocal_328, 1);
			unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			unk_0x8B15AE2987C1AC8F(uLocal_329, uLocal_328, 17000, 1, 1);
			func_75(&uLocal_342, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0xF6A103413A202C37(iLocal_305, Local_262.f_1, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(iLocal_305, Local_262.f_13);
			unk_0x7263332501E07F52(iLocal_305);
			unk_0x96F78A6A075D55D9(iLocal_305, 3);
			if (!unk_0x6CFF81397164A1D3(iLocal_284))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_284);
				unk_0xAD92B87536A0B81C(iLocal_284, 0f);
				unk_0xF4BF3E3D7FE56705(&uLocal_325);
				unk_0xDD3F03022D31980D(0, iLocal_305, 24, 10000);
				unk_0xFF7E39890B2840DD(uLocal_325);
				unk_0xD59C10966EB589EA(iLocal_284, uLocal_325);
				unk_0x5EC7E18324A7D03D(&uLocal_325);
			}
			unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
			unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 268.4057f);
			unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
			unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
			iLocal_316 = 1;
			iLocal_313 = unk_0x4F67E8ECA7D3F667();
			iLocal_332 = 1;
			break;
		
		case 1:
			iLocal_312 = unk_0x4F67E8ECA7D3F667();
			if ((iLocal_312 - iLocal_313) > 3000)
			{
				unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
				unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 268.4057f);
				unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
				unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
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
					if (unk_0xD42BD6EB2E0F1677(uLocal_286[iLocal_334]))
					{
						if (!unk_0x6CFF81397164A1D3(uLocal_286[iLocal_334]))
						{
							unk_0xFA8B88A1EF049B33(uLocal_286[iLocal_334]);
							unk_0xCF2B9C0645C4651B(uLocal_286[iLocal_334], fVar0[iLocal_334]);
							unk_0xF6A103413A202C37(uLocal_286[iLocal_334], Var6[iLocal_334 /*3*/], 1, 0, 0, 1);
							unk_0x4736475B6CFB795C(uLocal_286[iLocal_334], 1193033728, 0);
						}
					}
					iLocal_334++;
				}
				iLocal_313 = unk_0x4F67E8ECA7D3F667();
				iLocal_332 = 2;
			}
			break;
		
		case 2:
			iLocal_312 = unk_0x4F67E8ECA7D3F667();
			if ((iLocal_312 - iLocal_313) > 13000)
			{
				iLocal_332 = 3;
			}
			break;
		
		case 3:
			unk_0x87295BCA613800C8(uLocal_328, 0);
			unk_0x33281167E4942E4F(0, 1, 3000, 0, 0, 0);
			unk_0x5D1EB123EAC5D071(0f);
			unk_0x4E67E0B6D7FD5145(uLocal_328, 0);
			unk_0x4E67E0B6D7FD5145(uLocal_329, 0);
			unk_0xDA4E6E0EDF5FE3A0(0);
			unk_0x1B3DA717B9AFF828(1);
			func_66(0, 1, 1, 0);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
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

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
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
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_48(func_54(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_47(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
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
	Global_97339 = iParam0;
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
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_51(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_50() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
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
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_53()
{
	return Global_1312737;
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_59();
	}
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_60()
{
	func_11();
	switch (Global_97353.f_1729.f_539.f_3213)
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_62(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_65(Var0);
	return uVar16;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_72(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_7())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_71(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_72(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_71(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_67(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
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
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_72(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_73(int iParam0)
{
	if (unk_0x37F9A426FBCF4AF2())
	{
		if ((unk_0x4F67E8ECA7D3F667() - Global_27) > iParam0)
		{
			Global_26 = unk_0x4F67E8ECA7D3F667();
		}
		Global_27 = unk_0x4F67E8ECA7D3F667();
		if ((unk_0x4F67E8ECA7D3F667() - Global_26) > iParam0)
		{
			if (func_74())
			{
				Global_26 = unk_0x4F67E8ECA7D3F667();
				return 1;
			}
		}
	}
	return 0;
}

int func_74()
{
	if (unk_0x535384D6067BA42E())
	{
		return 0;
	}
	if (unk_0xCCBB0BB9790E1F47(0, 18) || unk_0xCCBB0BB9790E1F47(2, 18))
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
			iLocal_313 = unk_0x4F67E8ECA7D3F667();
			iLocal_314 = 1;
			break;
		
		case 1:
			iLocal_312 = unk_0x4F67E8ECA7D3F667();
			if ((iLocal_312 - iLocal_313) > 2000)
			{
				if (!func_81())
				{
					iLocal_313 = unk_0x4F67E8ECA7D3F667();
					iLocal_314 = 2;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				unk_0x84FAB590577B7033("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_538)
			{
				iLocal_312 = unk_0x4F67E8ECA7D3F667();
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
						unk_0x84FAB590577B7033("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0x17033CDF9E0B42C6(uLocal_286[iLocal_539], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_540++;
						if (iLocal_540 == 3)
						{
							iLocal_538 = 0;
						}
						iLocal_541 = unk_0x9C1C462D7B1DD1F9(9000, 14000);
						iLocal_313 = unk_0x4F67E8ECA7D3F667();
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
				iLocal_312 = unk_0x4F67E8ECA7D3F667();
				if ((iLocal_312 - iLocal_313) > 10000)
				{
					if (!func_81())
					{
						if (func_80(&uLocal_342, "BUSTOAU", "BUSTO_RAMB", sLocal_513[iLocal_507], 4, 0, 0))
						{
							iLocal_507++;
							iLocal_313 = unk_0x4F67E8ECA7D3F667();
							iLocal_538 = 1;
							iLocal_540 = 0;
						}
						else
						{
							unk_0x84FAB590577B7033("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
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
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		if (unk_0xC714CD036FBC4541(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79()
{
	if (unk_0xCCBB0BB9790E1F47(2, 222) && !iLocal_537)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_305))
		{
			if (unk_0xB86D29B10F627379(iLocal_305, 0))
			{
				if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
				{
					if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_305, 0))
					{
						if (!unk_0x6CFF81397164A1D3(iLocal_284))
						{
							unk_0xDD3F03022D31980D(iLocal_284, iLocal_305, 24, 5000);
							fLocal_307 = unk_0xFB6BA510A533DF81(iLocal_305);
							while (fLocal_307 > 5f)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0xB86D29B10F627379(iLocal_305, 0))
								{
									fLocal_307 = unk_0xFB6BA510A533DF81(iLocal_305);
								}
							}
							func_29();
							unk_0x0C085886B2D6687B(iLocal_509);
							unk_0x4FE2FB654BF367EB(unk_0x096275889B8E0EE0(), 1);
							unk_0xC27FB879C2B9A2EB("RE_BUS_TOUR_SCENE");
							unk_0x43FB2E98C3D3A62B(iLocal_305, 0);
							if (unk_0x153AD457764FD704(uLocal_327))
							{
								unk_0x4E67E0B6D7FD5145(uLocal_327, 0);
								unk_0x33281167E4942E4F(0, 0, 0, 1, 0, 0);
								unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
							}
							unk_0x8889F46BFCE53C65(unk_0x096275889B8E0EE0(), iLocal_305, 0);
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
	if (Global_15692 != 0 || unk_0x200E87988220C592())
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
			unk_0x606374EBFC27B133(0.5f);
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
			unk_0x606374EBFC27B133(0.6f);
			break;
	}
}

void func_83()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_285) && !unk_0x6CFF81397164A1D3(iLocal_284))
	{
		switch (iLocal_50)
		{
			case 0:
				unk_0xB90411F480457A6C(0);
				unk_0x5F70787AC4BF7928("RE_BUS_TOUR_SCENE");
				unk_0x70D3E526218BF867(iLocal_305, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0x4FE2FB654BF367EB(unk_0x096275889B8E0EE0(), 0);
				func_66(1, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 256);
				unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
				unk_0xD3BDEFB5C25B69C4(Local_262.f_1, 30f, 0);
				unk_0x226FFF85EFDD21F5(iLocal_284, 0);
				unk_0xF80258351D8421EB(unk_0x096275889B8E0EE0(), iLocal_305, 2);
				unk_0xDA4E6E0EDF5FE3A0(1);
				unk_0x1B3DA717B9AFF828(0);
				uLocal_328 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_329 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x87295BCA613800C8(uLocal_328, 1);
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
				unk_0x8B15AE2987C1AC8F(uLocal_329, uLocal_328, 6500, 1, 1);
				if (unk_0xB86D29B10F627379(unk_0x2F96E7720B0B19EA(), 0))
				{
					if (unk_0xC057F02B837A27F6(unk_0x2F96E7720B0B19EA(), iLocal_305, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0xCF2B9C0645C4651B(unk_0x2F96E7720B0B19EA(), 65f);
						unk_0xF6A103413A202C37(unk_0x2F96E7720B0B19EA(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0x7F7FCF431E93AE1E("BusTours");
				if (unk_0xB86D29B10F627379(iLocal_305, 0))
				{
					func_76(unk_0xA86D5F069399F44D(iLocal_305, 1), Local_51[0 /*15*/].f_1, &Local_319, &Local_322, 500);
					iLocal_543 = unk_0x4F67E8ECA7D3F667();
					iLocal_50 = 1;
				}
				if (unk_0x420537F38720164C() == 4)
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
				if ((unk_0x4F67E8ECA7D3F667() - iLocal_543) > 5000 && !iLocal_542)
				{
					func_75(&uLocal_342, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_109("Enter_bus"))
					{
						unk_0x0BFC2C61FB5B6CA1(1);
					}
					iLocal_542 = 1;
				}
				if ((unk_0x4F67E8ECA7D3F667() - iLocal_543) > 6200)
				{
					if (iLocal_318 == 1)
					{
						if (iLocal_544 == 0)
						{
							unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
							unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_544 = 1;
						}
					}
				}
				if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
				{
					if ((unk_0xEB8F1713A0FC1B96(unk_0x096275889B8E0EE0(), iLocal_305) && unk_0xEB8F1713A0FC1B96(iLocal_285, iLocal_305)) && unk_0xEB8F1713A0FC1B96(iLocal_284, iLocal_305))
					{
						iLocal_50 = 2;
					}
					else if (func_73(1000))
					{
						if (unk_0xE052C1B1CAA4ECE4(iLocal_305, 0))
						{
							unk_0xF80258351D8421EB(iLocal_285, iLocal_305, 0);
						}
						iLocal_50 = 2;
					}
				}
				break;
			
			case 2:
				unk_0xBB26FB233542CFFE(iLocal_284, iLocal_305, Local_51[0 /*15*/].f_1, Local_51[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
				unk_0x87295BCA613800C8(uLocal_328, 0);
				unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
				unk_0x4E67E0B6D7FD5145(uLocal_328, 0);
				unk_0x4E67E0B6D7FD5145(uLocal_329, 0);
				unk_0xDA4E6E0EDF5FE3A0(0);
				unk_0x1B3DA717B9AFF828(1);
				unk_0xA5929C2E57AC90D1();
				unk_0xB5F6539FA93ECBF6(2);
				func_66(0, 1, 1, 0);
				iLocal_330 = func_10();
				func_84(iLocal_330, 1, iLocal_511);
				iLocal_509 = unk_0xDE1C4FE916C04ECF();
				if (!iLocal_318)
				{
					unk_0x0C085886B2D6687B(3);
				}
				else
				{
					func_21(1);
				}
				unk_0xF2C3C9DA47AAA54A(&uLocal_309);
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
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_85(Global_97353.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0xBC2C927F5C264960())
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
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
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
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_87(iParam0);
	if (Global_34913 == 15)
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
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_88(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_90() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_90() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_89(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_90() /*8053*/].f_5756.f_10, iParam0);
}

int func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_105(&Global_2544859))
	{
		if (func_103(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
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
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
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
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
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
	uParam0->f_1 = (func_101(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_101(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
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
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_108()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

bool func_109(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

void func_110()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_285))
	{
		unk_0x0F1ABE64C3C18E5A(iLocal_285);
		unk_0x12C24A48BF610759(iLocal_285, iLocal_305, 10000, 0, 2f, 262144, 0);
		unk_0x2AD4789CBFD829EC(iLocal_285, 1);
		iLocal_339 = 1;
	}
}

void func_111()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (func_151())
		{
			unk_0x96F78A6A075D55D9(iLocal_305, 3);
			unk_0x54800D386C5825E5(iLocal_305, 0);
			func_214();
		}
		else if (func_142(4))
		{
			if ((unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_305, 5f, 5f, 5f, 0, 1, 0) && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0)) && !func_109("TX_H02"))
			{
				if (func_140())
				{
					if (!iLocal_512)
					{
						unk_0x96F78A6A075D55D9(iLocal_305, 1);
						iLocal_512 = 1;
					}
					unk_0xFADD04DD444BE86D("Enter_bus", 0);
					if (unk_0x2503EB2EA811EC9A(2, 23))
					{
						unk_0x12C24A48BF610759(unk_0x096275889B8E0EE0(), iLocal_305, -1, 2, 1f, 8, 0);
					}
					if (!unk_0xCD82FA174080B3B1(uLocal_309))
					{
						if (unk_0xCD82FA174080B3B1(uLocal_310))
						{
							unk_0xF2C3C9DA47AAA54A(&uLocal_310);
						}
						uLocal_309 = unk_0xAF129458D90982F3(iLocal_305);
						unk_0x5F3268378F24D97B(uLocal_309, 1);
						unk_0x17D3E31025A05A57(uLocal_309, Global_24490);
						if (!unk_0x6CFF81397164A1D3(iLocal_285))
						{
							unk_0xD4648EA39998A07B(iLocal_285, unk_0x096275889B8E0EE0(), -1, 0, 2);
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
					unk_0xFADD04DD444BE86D("No_bus_money", 0);
					if (iLocal_512)
					{
						unk_0x96F78A6A075D55D9(iLocal_305, 2);
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
	if (unk_0x376BFBD88CF0F34D(Local_278, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0x6CFF81397164A1D3(*uParam0))
		{
			if (func_114(*uParam0))
			{
				if (!unk_0x138190F64DB4BBD1(*uParam0))
				{
					unk_0xDC19C288082E586E(*uParam0, 1, 0);
					unk_0x0F1ABE64C3C18E5A(*uParam0);
					unk_0x49876BF356F39E66(*uParam0, 1);
					unk_0x88C774425FE9380C(*uParam0, "randompassenger");
					unk_0x020E173F318C12DA(*uParam0, 134, 1);
					switch (iLocal_334)
					{
						case 0:
							if (unk_0xB86D29B10F627379(iLocal_305, 0))
							{
								unk_0xF80258351D8421EB(*uParam0, iLocal_305, 3);
								unk_0x2AD4789CBFD829EC(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0xB86D29B10F627379(iLocal_305, 0))
							{
								unk_0xF80258351D8421EB(*uParam0, iLocal_305, 7);
								unk_0x2AD4789CBFD829EC(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0xB86D29B10F627379(iLocal_305, 0))
							{
								unk_0xF80258351D8421EB(*uParam0, iLocal_305, 6);
								unk_0x2AD4789CBFD829EC(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0xB86D29B10F627379(iLocal_305, 0))
							{
								unk_0xF80258351D8421EB(*uParam0, iLocal_305, 8);
								unk_0x2AD4789CBFD829EC(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0xB86D29B10F627379(iLocal_305, 0))
							{
								unk_0xF80258351D8421EB(*uParam0, iLocal_305, 1);
								unk_0x2AD4789CBFD829EC(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_113(unk_0xD275D621ABBB1F83(*uParam0));
					unk_0xD937A3C5EF78C429(*uParam0, sVar0);
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
		iVar0 = unk_0x9C1C462D7B1DD1F9(0, 16);
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
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 33);
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
	if (((((unk_0xDA76A9F39210D365(uParam0) == joaat("a_m_m_tramp_01") || unk_0xDA76A9F39210D365(iParam0) == joaat("a_f_m_tramp_01")) || unk_0xDA76A9F39210D365(iParam0) == joaat("a_m_o_tramp_01")) || unk_0xDA76A9F39210D365(iParam0) == joaat("s_m_y_cop_01")) || unk_0xDA76A9F39210D365(iParam0) == joaat("s_m_y_fireman_01")) || unk_0xDA76A9F39210D365(iParam0) == joaat("a_f_y_hiker_01"))
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
	if (unk_0xB86D29B10F627379(iLocal_305, 0))
	{
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()) == iLocal_305)
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
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_55(Global_97342))
		{
			func_118(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_55(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
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
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_119(func_120(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_119(func_120(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_119(func_120(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_119(var uParam0, int iParam1)
{
	unk_0x0718552FB84CF252(uParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
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
	switch (func_122(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
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
		if (!func_124(iParam2))
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
			func_123(uParam0, iParam4);
		}
	}
	return 2;
}

void func_123(var uParam0, int iParam1)
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

bool func_124(int iParam0)
{
	return func_125(iParam0, Global_34913);
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
	if (Global_34913 == 15)
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
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_134())
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_12(func_10()))
		{
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_129(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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
	if (unk_0x2CF12F9ACF18F048(&cVar2))
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
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
	return Global_97071 > 0;
}

int func_137()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_139()
{
	if ((Global_97342 == func_64() && unk_0x924D54E5698AE3E0()) && Global_97343)
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
			unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
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
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_150()) || Global_96400) || Global_24446) || func_149()) || func_17(8, -1)) || func_148()) || func_147()) || func_146()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_150()) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_148()) || func_147()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_150()) || Global_96400) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_148()) || func_147()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_150()) || Global_96400) || Global_24446) || func_149()) || func_17(8, -1)) || func_148()) || func_147()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_150() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_17(8, -1)) || func_145()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_148()) || func_147()) || func_144()) || func_143())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_150()) || Global_24446) || func_149()) || func_17(8, -1)) || func_147()) || func_146()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_150()) || func_147()) || Global_96400) || Global_24446) || func_149()) || Global_35957) || func_17(8, -1)) || func_146()) || func_144()) || func_145()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_150()) || Global_96400) || Global_24446) || func_149()) || func_17(8, -1)) || func_146()) || func_144()) || func_148()) || func_147()) || func_145())
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
	return Global_90001.f_1;
}

int func_144()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_145()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_146()
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

bool func_147()
{
	return Global_90014.f_291 > 0;
}

bool func_148()
{
	return Global_90014.f_290 > 0;
}

var func_149()
{
	return Global_1315900;
}

int func_150()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_151()
{
	if (func_164(iLocal_285))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_285))
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
	if (!unk_0x6CFF81397164A1D3(iLocal_284))
	{
		if (((func_156(iLocal_284) || !unk_0x52BE10F427339B39(iLocal_284, 0)) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_284)) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_284))
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
	if (unk_0x7B6E7BEC1143AC86(iLocal_305, unk_0x096275889B8E0EE0(), 1))
	{
		if (func_164(iLocal_285))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_285))
			{
				func_152(iLocal_285);
				func_154(iLocal_285, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_214();
	}
	if (unk_0xC82CF208C2B19199() >= 19 || unk_0xC82CF208C2B19199() <= 6)
	{
		if (!func_81())
		{
			if (func_75(&uLocal_342, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_305, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
{
	if (func_164(iLocal_285))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_285))
		{
			unk_0x49876BF356F39E66(uParam0, 0);
			unk_0x0F1ABE64C3C18E5A(uParam0);
			unk_0x06C6AD4F38E8412D(iParam0, unk_0x096275889B8E0EE0(), 100f, -1, 0, 0);
			unk_0x2AD4789CBFD829EC(iParam0, 1);
			func_31();
		}
	}
}

void func_153()
{
	if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_285, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_312 = unk_0x4F67E8ECA7D3F667();
		if ((iLocal_312 - iLocal_313) > 10000)
		{
			if (!func_81())
			{
				func_75(&uLocal_342, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_313 = unk_0x4F67E8ECA7D3F667();
		}
	}
}

void func_154(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_155(iParam2), 1);
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
	if (func_157(uParam0, &uLocal_336, &uLocal_333, iLocal_331, bLocal_337, 1077936128, 0) || unk_0x14BDA64F4D0D5E1D(uParam0))
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
	if (!unk_0x7D5B1F88E7504BBA(uParam0) && !bParam4)
	{
		if (unk_0x20EB7B80D61EEA56(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0) && !bParam4)
		{
			Var3 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			Var6 = { unk_0xA86D5F069399F44D(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 3))
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
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xC652FD308772D79E(Var6, fParam5, 1))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_161(iParam0);
					return 1;
				}
				if (unk_0x05B0061EFDFC8941(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_162("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_161(iParam0);
					return 1;
				}
			}
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 2))
			{
				fVar0 = unk_0x455048DF52431A30(unk_0x096275889B8E0EE0());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					if (unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xD46F9DF1D1273423(iParam0, unk_0x096275889B8E0EE0(), 17))
							{
								func_162("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_162("	aggro Ped knows player is pointing gun\n");
								func_158("		lockOnTimer = ", *uParam2);
								func_162("\n");
								func_158("		time since not LockedOn = ", (unk_0x4F67E8ECA7D3F667() - iLocal_42));
								func_162("\n");
								bVar2 = true;
								if (unk_0x4F67E8ECA7D3F667() > (iLocal_42 + *uParam2))
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
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 0))
			{
				if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
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
		iLocal_42 = unk_0x4F67E8ECA7D3F667();
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
	if (unk_0xD3852F22AB713A1F(uParam0, uParam0))
	{
	}
}

void func_161(var uParam0)
{
	unk_0x017C768876AE01E6(uParam0);
}

void func_162(char* sParam0)
{
	func_160(sParam0);
}

int func_163(int iParam0, int iParam1)
{
	if (unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x7B6E7BEC1143AC86(uParam0, unk_0x096275889B8E0EE0(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
	{
		if ((unk_0x5741F02781727066(iParam0) - unk_0x82368787EA73C0F7(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_165()
{
	unk_0x08D005DDAC232EF6(0, 1);
	unk_0x08D005DDAC232EF6(1, 1);
	unk_0x08D005DDAC232EF6(2, 1);
	unk_0x08D005DDAC232EF6(3, 1);
	unk_0x08D005DDAC232EF6(4, 1);
	unk_0x08D005DDAC232EF6(5, 1);
	unk_0x08D005DDAC232EF6(6, 1);
	unk_0x08D005DDAC232EF6(7, 1);
	unk_0x08D005DDAC232EF6(8, 1);
}

void func_166()
{
	unk_0x96722257E5381E00(unk_0x217E9DC48139933D());
	unk_0x8580C7F49F4DB286(unk_0x217E9DC48139933D(), 5);
	unk_0x8580C7F49F4DB286(unk_0x217E9DC48139933D(), 3);
	unk_0x8580C7F49F4DB286(unk_0x217E9DC48139933D(), 15);
	unk_0x8580C7F49F4DB286(unk_0x217E9DC48139933D(), 2);
	unk_0x8580C7F49F4DB286(unk_0x217E9DC48139933D(), 4);
}

void func_167()
{
	if (iLocal_317)
	{
		unk_0x3A75D916CC3E33B5(Local_319.f_0, Local_319.f_1, Local_322.f_0, Local_322.f_1);
	}
}

void func_168()
{
	if (unk_0xEBB17EEF2FE92872("RAIN") || unk_0xEBB17EEF2FE92872("THUNDER"))
	{
		unk_0xDDB809241EF124FA("OVERCAST", 10000f);
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
		unk_0xFA28FE3A6246FC30(iVar0);
		unk_0xFA28FE3A6246FC30(iVar1);
		unk_0xA862A2AD321F94B4(sLocal_508);
		unk_0xFA28FE3A6246FC30(joaat("tourbus"));
		unk_0x7C11D0C2EFACD80D("BUSTOUR", 2);
		if ((((unk_0x1283B8B89DD5D1B6(iVar0) && unk_0x1283B8B89DD5D1B6(iVar1)) && unk_0x27FF6FE8009B40CA(sLocal_508)) && unk_0x1283B8B89DD5D1B6(joaat("tourbus"))) && unk_0x6C01088174B23EE3(2))
		{
			unk_0xCEA4E87102552C46(0);
			unk_0x23CFFD4CCB243354(Local_278, &uLocal_281, &uLocal_306, 1, 1077936128, 0);
			iLocal_305 = unk_0xF757863E1E2D8F12(joaat("tourbus"), Local_262.f_1, Local_262.f_13, 1, 1);
			unk_0x7263332501E07F52(iLocal_305);
			unk_0x96F78A6A075D55D9(iLocal_305, 3);
			unk_0x24AED2A608F93C4C(iLocal_305, 0);
			unk_0x394A1F7D15980AF6(iLocal_305, "OFF");
			unk_0x501354951CD942DE(iLocal_305, 0, 0);
			unk_0xBB6F89150BC9D16B(iLocal_305, 2, 1);
			unk_0x57F925DF866E2CBD(joaat("tourbus"), 1);
			unk_0x5F5E2B1B9EAECC0F(iLocal_305, 100f);
			iLocal_284 = unk_0x63FC6DA06F97F02C(iLocal_305, 26, iVar1, -1, 1, 1);
			unk_0x49876BF356F39E66(iLocal_284, 1);
			unk_0x020E173F318C12DA(iLocal_284, 251, 1);
			unk_0xDFD20B2D788C0216(iLocal_284, 1);
			if (unk_0xD42BD6EB2E0F1677(iLocal_284))
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_284))
				{
					unk_0x584EEBEECD248926(iLocal_284, 3, 1, 2, 0);
					unk_0x584EEBEECD248926(iLocal_284, 4, 0, 2, 0);
				}
			}
			iLocal_285 = unk_0x9066DFD4D92E6773(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0xD937A3C5EF78C429(iLocal_285, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x49876BF356F39E66(iLocal_285, 1);
			unk_0x5E95290AF8605EA1(iLocal_285, 0);
			unk_0x584EEBEECD248926(iLocal_285, 0, 1, 0, 0);
			unk_0x584EEBEECD248926(iLocal_285, 2, 1, 0, 0);
			unk_0x584EEBEECD248926(iLocal_285, 3, 0, 0, 0);
			unk_0x584EEBEECD248926(iLocal_285, 4, 1, 0, 0);
			unk_0xF4BF3E3D7FE56705(&uLocal_326);
			unk_0x8DBC05C86F873CC9(0, sLocal_508, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, sLocal_508, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(0, sLocal_508, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x291AD951CA118D2C(uLocal_326, 1);
			unk_0xFF7E39890B2840DD(uLocal_326);
			unk_0xD59C10966EB589EA(iLocal_285, uLocal_326);
			unk_0x5EC7E18324A7D03D(&uLocal_326);
			func_171(&uLocal_342, 3, iLocal_285, "TOURGUIDE", 0, 1);
			if (!unk_0xCD82FA174080B3B1(uLocal_310))
			{
				uLocal_310 = unk_0xAF129458D90982F3(iLocal_305);
				unk_0x74F74D3207ED525C(uLocal_310, 85);
			}
			func_170();
			iLocal_47 = 1;
		}
	}
}

void func_170()
{
	unk_0x32A582AACCBCAEFE(iLocal_284, 17, 1);
	unk_0x32A582AACCBCAEFE(iLocal_285, 17, 1);
	unk_0x352AB5EAB2338B18("re_bus_tours1", &uLocal_308);
	unk_0x6ECBACF91786FB7A(iLocal_284, uLocal_308);
	unk_0x6ECBACF91786FB7A(iLocal_285, uLocal_308);
	unk_0x9E0FEFE102840007(1, uLocal_308, joaat("player"));
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

int func_172()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_134())
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
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_178();
}

void func_178()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

void func_179(int iParam0)
{
	Global_97342 = iParam0;
}

int func_180(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
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
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_134())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
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
		if (Global_97342 != -1)
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
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
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
		if (!func_207(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
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
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
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
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_204(iVar8))
				{
					if (func_182(iVar4))
					{
						if (!func_181(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_194(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
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
	
	func_203(&uVar0, unk_0xB6101ABE62B5F080());
	func_202(&uVar0, unk_0x4E162231B823DBBF());
	func_201(&uVar0, unk_0xC82CF208C2B19199());
	func_200(&uVar0, unk_0xDF2FD796C54480A5());
	func_199(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_198(&uVar0, unk_0xE136DCA28C4A48BA());
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
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
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
	return Global_97353.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_211()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(uVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(iVar0, 0)))
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
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_213()
{
	if (unk_0xC82CF208C2B19199() > 19 || unk_0xC82CF208C2B19199() < 6)
	{
		return 0;
	}
	return 1;
}

void func_214()
{
	int iVar0;
	
	unk_0x46F5C6FCEA473F73();
	unk_0xD85DFE5C131E4AE9();
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0x1BCEC33D54CFCA8A(0);
		unk_0x5D1EB123EAC5D071(0f);
	}
	if (unk_0x153AD457764FD704(uLocal_328))
	{
		unk_0x87295BCA613800C8(uLocal_328, 0);
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		unk_0x4E67E0B6D7FD5145(uLocal_328, 0);
		unk_0xDA4E6E0EDF5FE3A0(0);
	}
	if (unk_0x153AD457764FD704(uLocal_329))
	{
		unk_0x4E67E0B6D7FD5145(uLocal_329, 0);
	}
	if (iLocal_48 >= 2)
	{
		unk_0x0C085886B2D6687B(iLocal_509);
	}
	unk_0x1B3DA717B9AFF828(1);
	if (iLocal_48 >= 1)
	{
		if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
		{
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_284))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_284))
		{
			unk_0x020E173F318C12DA(iLocal_284, 251, 0);
			unk_0x226FFF85EFDD21F5(iLocal_284, 1);
			unk_0x2AD4789CBFD829EC(iLocal_284, 1);
			unk_0x49876BF356F39E66(iLocal_284, 0);
		}
		unk_0xEB7C3FF98F454165(&iLocal_284);
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_285))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_285))
		{
			unk_0x5E95290AF8605EA1(iLocal_285, 1);
			unk_0x2AD4789CBFD829EC(iLocal_285, 1);
			unk_0x49876BF356F39E66(iLocal_285, 0);
		}
		unk_0xEB7C3FF98F454165(&iLocal_285);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD42BD6EB2E0F1677(uLocal_286[iVar0]))
		{
			if (func_164(uLocal_286[iVar0]))
			{
				unk_0x49876BF356F39E66(uLocal_286[iVar0], 0);
			}
			unk_0xEB7C3FF98F454165(&(uLocal_286[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_305))
	{
		unk_0x96F78A6A075D55D9(iLocal_305, 1);
		unk_0x54800D386C5825E5(iLocal_305, 1);
		unk_0x6C9B2BE03BBD5C98(&iLocal_305);
	}
	unk_0xB90411F480457A6C(1);
	if (func_139())
	{
		func_226();
	}
	else
	{
		func_225(&Global_24503);
	}
	unk_0xF081C5E1DF4B09BF(1);
	func_215(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x5E8B6D17FF91CD59();
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
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_97342, 1), 64);
		if (func_63(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_225(&Global_24503);
	Global_97343 = 0;
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
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
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
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
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

void func_226()
{
	func_217(30000);
	func_225(&Global_24503);
	Global_24491 = unk_0x4F67E8ECA7D3F667();
}

