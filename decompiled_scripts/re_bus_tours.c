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
	if (unk_0x2EC83C7ACA23E8A4(11))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_306, 0))
				{
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), unk_0x2E01486DB8218E16(iLocal_306, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), unk_0x5E6FDC4F3A8C8EDE(iLocal_306));
					unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 1);
					unk_0x7C1793252FA472B6("RE_BUS_TOUR_SCENE");
					unk_0x14F2413A60FF70C3(iLocal_306, 0);
				}
			}
		}
		func_216();
	}
	if (!func_215())
	{
		unk_0x78C587487CD40B92();
	}
	if (func_182(Local_279, 2, 0, 1, 0))
	{
		func_179(-1);
	}
	else
	{
		unk_0x78C587487CD40B92();
	}
	func_177();
	func_176();
	while (true)
	{
		func_175();
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
		}
		switch (iLocal_312)
		{
			case 0:
				if (unk_0x43045253AC4C7FF5())
				{
					if (func_215())
					{
						switch (iLocal_48)
						{
							case 0:
								func_171();
								break;
							
							case 1:
								if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
								{
									if (unk_0xEB361B4BD195A4D3(iLocal_285) || unk_0xEB361B4BD195A4D3(uLocal_286))
									{
										func_216();
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
						func_216();
					}
				}
				else
				{
					func_216();
				}
				break;
			
			case 1:
				if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
				{
					func_1();
				}
				else
				{
					func_216();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_170();
	func_169();
	func_168();
	func_167();
	switch (iLocal_49)
	{
		case 0:
			func_113();
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
	unk_0xEAAACF3402024FE8(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0xABC36CFE4F3421A0(0, 68, 1);
	unk_0xABC36CFE4F3421A0(0, 99, 1);
	unk_0xABC36CFE4F3421A0(0, 1, 1);
	unk_0xABC36CFE4F3421A0(0, 2, 1);
	if (!unk_0xEB361B4BD195A4D3(iLocal_286) && !unk_0xEB361B4BD195A4D3(iLocal_285))
	{
		if (iLocal_537)
		{
			if (!func_82())
			{
				if (iLocal_508 < 14)
				{
					func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0);
				}
				func_216();
			}
		}
		else if (!func_80())
		{
			unk_0x35FBFE9B937728A9();
			unk_0x7ABD1B29E6C2963D(2);
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (!unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iLocal_306) && iLocal_278 + 1 < 13)
				{
					func_216();
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
				unk_0xEAAACF3402024FE8("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_306))
			{
				iLocal_316 = 1;
			}
			unk_0x2B6521A64CBB67B6(iLocal_306);
		}
		else
		{
			func_3(&uLocal_343, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0xB032923150355520(iLocal_306, 3);
			unk_0x325A2C5B8927293C(iLocal_306, 0);
			iLocal_537 = 1;
		}
	}
	else
	{
		func_216();
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
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_18();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_16();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_9();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_8())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_6();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_5();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_6()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_7()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_10();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_10()
{
	func_11();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_14(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_13(unk_0xA0081090911D13E5());
			if (func_12(iVar0) && (!func_15(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_12(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_16()
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

bool func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_18()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

int func_20(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if ((unk_0x9E7343C699F331A6(iParam0, 0, 7000) || unk_0x9E7343C699F331A6(iParam0, 1, 7000)) || unk_0x9E7343C699F331A6(iParam0, 2, 7000))
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
		if (unk_0x2A57AED61E15C7C7(2, 225))
		{
			if (iLocal_319)
			{
				iLocal_319 = 0;
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 256);
				unk_0x157D8C80CC5E9591(1);
			}
			else
			{
				iLocal_319 = 1;
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0x157D8C80CC5E9591(0);
			}
		}
	}
	if (iLocal_319 && !Local_52[13 /*15*/].f_9)
	{
		if (unk_0xFA597181B01136F0())
		{
			unk_0xB3FF3FBDAFD0ADCF(0);
		}
		func_24();
	}
	else if (iLocal_317)
	{
		if (unk_0x0D2E3F017CBCB8A8(uLocal_328))
		{
			unk_0x50C86ABC13A071F8(uLocal_328, 0);
			unk_0x2D5A415AD869CB5F(0, 0, 0, 1, 0, 0);
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
			func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
		}
	}
	else if (unk_0x0D2E3F017CBCB8A8(uLocal_328))
	{
		unk_0x50C86ABC13A071F8(uLocal_328, 0);
		unk_0x2D5A415AD869CB5F(0, 0, 0, 1, 0, 0);
		unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
	}
}

void func_22(struct<3> Param0, var uParam3)
{
	if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
	{
		if (!unk_0x0D2E3F017CBCB8A8(uLocal_328) && !unk_0xFA597181B01136F0())
		{
			if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_263.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				unk_0x88369A72B2D24605(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_314 = unk_0xDF658EB6CA91DFBC();
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iLocal_285))
		{
			unk_0x3CAD3CEB48DD58A0(iLocal_285, 3f);
		}
		iLocal_317 = 1;
	}
}

void func_23(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_299 = unk_0xDF658EB6CA91DFBC();
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		iVar1 = unk_0xB5BF1B58C833F7A9(6000, 16000);
		unk_0x6486E0794864EE9B(unk_0xA0081090911D13E5(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0xEB361B4BD195A4D3(uLocal_287[iVar0]))
		{
			iVar1 = unk_0xB5BF1B58C833F7A9(6000, 16000);
			iLocal_293[iVar0] = unk_0xB5BF1B58C833F7A9(0, 2000);
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
	if (unk_0x0D2E3F017CBCB8A8(uLocal_328))
	{
		if (unk_0x4255B5ECB9D34344(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 218) * 127f));
		iVar11 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 219) * 127f));
		iVar12 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 220) * 127f));
		iVar13 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 221) * 127f));
		if (!unk_0xE761C96558F7D51E())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || unk_0x4255B5ECB9D34344(2))
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
		if ((iVar12 > 28 || iVar12 < -28) || unk_0x4255B5ECB9D34344(2))
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
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x4255B5ECB9D34344(2))
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
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x4255B5ECB9D34344(2))
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
		func_25(unk_0xA0081090911D13E5(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0x033BAA756AF85975(uLocal_328, fVar1);
		unk_0xC65E66FE2F1B36F5(uLocal_328, unk_0xA0081090911D13E5(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_328 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 1);
		unk_0xC65E66FE2F1B36F5(uLocal_328, unk_0xA0081090911D13E5(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		unk_0xF3FCD007B6955B38(uLocal_328, 0.01f);
		fLocal_341 = -70f;
		fLocal_342 = 3f;
		func_25(unk_0xA0081090911D13E5(), &uLocal_328, fLocal_342, 0f, fLocal_341);
		unk_0x033BAA756AF85975(uLocal_328, fVar1);
		unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 0, 0);
		unk_0x2D5A415AD869CB5F(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!unk_0xEB361B4BD195A4D3(uParam0))
	{
		if (unk_0x0D2E3F017CBCB8A8(*uParam1))
		{
			uVar0 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			unk_0x00D89D1097963F54(*uParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0xEB361B4BD195A4D3(uLocal_287[2]))
	{
		if (unk_0x21178DF77817BF39(uLocal_287[2], -880529684) == 7)
		{
			if (unk_0xDF658EB6CA91DFBC() > iLocal_336 + 8000)
			{
				unk_0xD20DF430E654B489(uLocal_287[2], 0);
				Var0 = { unk_0x2E01486DB8218E16(uLocal_287[2], unk_0xF25F352E34274C58(0f, 2f), unk_0xF25F352E34274C58(0f, 2f), 0.5f) };
				iVar3 = unk_0xB5BF1B58C833F7A9(1000, 6000);
				unk_0x6486E0794864EE9B(uLocal_287[2], Var0, iVar3, 2049, 2);
				iLocal_336 = unk_0xDF658EB6CA91DFBC();
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	if (!iLocal_339 && unk_0xB20CA7A3EE29687A())
	{
		unk_0x58CC3788DF029867("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0x2A57AED61E15C7C7(2, 223) || iLocal_316 == 1)
		{
			if (unk_0xB20CA7A3EE29687A())
			{
				if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
				{
					if (!unk_0xEB361B4BD195A4D3(iLocal_285))
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
	if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_285))
		{
			unk_0xD3032BAC1ECE011F(iLocal_285);
			unk_0x95C55738CAE00A20(&uLocal_326);
			unk_0xA41BA6C0692C37D3(0, iLocal_306, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			unk_0xA41BA6C0692C37D3(0, iLocal_306, Local_263.f_1, 3f, 0, joaat("tourbus"), iLocal_511, 3f, 15f);
			unk_0x70B222EEA46C37FA(uLocal_326);
			unk_0x3998B29E786DFD96(iLocal_285, uLocal_326);
			unk_0x7DFD14B8B873D6B5(&uLocal_326);
		}
	}
}

void func_29()
{
	Global_14611 = 0;
	func_18();
}

void func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = iLocal_278 + 1;
	unk_0xC94C39C53546E775("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0xF215E3B07B7990BC(1000);
	while (!unk_0x2C22E7D1C80A53EF())
	{
		unk_0x35FBFE9B937728A9();
		unk_0x7ABD1B29E6C2963D(2);
		if (!unk_0x1F1B2B6E500380C5(iLocal_306, 0))
		{
			func_216();
		}
		if (unk_0xEB361B4BD195A4D3(iLocal_285))
		{
			func_216();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0xB3FF3FBDAFD0ADCF(1);
	}
	unk_0x8BDD755F07063522(0f);
	if (!unk_0xEB361B4BD195A4D3(iLocal_285))
	{
		unk_0xD3032BAC1ECE011F(iLocal_285);
	}
	if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
	{
		unk_0xD74B8343DB9FEFD5(Param0.f_0, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0);
		unk_0x27327EB62D93CDBA(iLocal_306, Param0.f_0, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(iLocal_306, fParam3);
		unk_0xF1F2951FCA900FD0(iLocal_306, 0f);
		unk_0xA41BA6C0692C37D3(iLocal_285, iLocal_306, unk_0xC59DF10B4FC39DF8(iLocal_306, 1), 0f, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		func_33(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
	{
		unk_0x74207974B5483203(iLocal_306);
		unk_0x6F40E1EE32FE6A5E(iLocal_306, 1, 1, 0);
		if (iVar0 < 13)
		{
			if (!unk_0xEB361B4BD195A4D3(iLocal_285))
			{
				unk_0xA41BA6C0692C37D3(iLocal_285, iLocal_306, Local_52[iVar0 /*15*/].f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(iLocal_285))
		{
			unk_0xA41BA6C0692C37D3(iLocal_285, iLocal_306, Local_263.f_1, Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
		}
		unk_0xF1F2951FCA900FD0(iLocal_306, 8f);
	}
	func_31();
	unk_0xB95C16558F8BFC6A(3);
	iLocal_50 = 3;
	func_21(1);
	unk_0x7C1793252FA472B6("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0xA0303A6B8C99DD6A(1000);
	while (unk_0x9AB98132476504BC())
	{
		unk_0x35FBFE9B937728A9();
		unk_0x7ABD1B29E6C2963D(2);
		func_21(1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x35FBFE9B937728A9();
	unk_0x7ABD1B29E6C2963D(2);
	func_21(1);
}

void func_31()
{
	Global_14611 = 0;
	func_32();
}

void func_32()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
	}
}

void func_33(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x9C6515EB1482F76F(Param0, iParam3, iParam4, 127);
	if (unk_0x93C83E475DF075BA(uVar0))
	{
		iVar1 = (unk_0xDF658EB6CA91DFBC() + iParam5);
		while (!unk_0xA17E0AFF560240D3(uVar0) && unk_0xDF658EB6CA91DFBC() < iVar1)
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
		if (unk_0xDF658EB6CA91DFBC() < iVar1)
		{
		}
		unk_0x3A1A6B774A522BCB(uVar0);
	}
}

void func_34()
{
	Global_17151.f_6 = 1;
}

void func_35()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_36(int iParam0)
{
	if (Global_14604)
	{
		func_37(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_7())
	{
		Global_14443.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
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
							if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_52[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_52[12 /*15*/].f_9)
								{
									Local_52[13 /*15*/].f_9 = 1;
									iLocal_314 = unk_0xDF658EB6CA91DFBC();
									iLocal_50 = 2;
								}
							}
						}
						else if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_52[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_306, 0))
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
				iLocal_313 = unk_0xDF658EB6CA91DFBC();
				if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
				{
					if (iVar1 <= 13)
					{
						func_77(unk_0xC59DF10B4FC39DF8(iLocal_306, 1), Local_52[iVar1 /*15*/].f_1, &Local_320, &Local_323, 500);
					}
					if (unk_0x34302C240EA1F13B(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1))
					{
						if ((iLocal_313 - iLocal_314) > 0)
						{
							if (func_76(&uLocal_343, "BUSTOAU", Local_52[iLocal_278 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0x95C55738CAE00A20(&uVar2);
										unk_0xA41BA6C0692C37D3(0, iLocal_306, -100.461f, -206.1412f, 44.4215f, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0xA41BA6C0692C37D3(0, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
										unk_0x70B222EEA46C37FA(uVar2);
										unk_0x3998B29E786DFD96(iLocal_285, uVar2);
										unk_0x7DFD14B8B873D6B5(&uVar2);
									}
									else
									{
										unk_0xA41BA6C0692C37D3(iLocal_285, iLocal_306, Local_52[iVar1 /*15*/].f_1, Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 4f, 15f);
									}
								}
								iLocal_314 = unk_0xDF658EB6CA91DFBC();
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
				iLocal_313 = unk_0xDF658EB6CA91DFBC();
				func_40(Local_52[iLocal_278 /*15*/].f_4);
				if ((iLocal_313 - iLocal_314) > 5000)
				{
					if (!func_82())
					{
						iLocal_317 = 0;
						iLocal_314 = unk_0xDF658EB6CA91DFBC();
						if (unk_0xFA597181B01136F0())
						{
							unk_0xB3FF3FBDAFD0ADCF(1);
						}
						if (Local_52[13 /*15*/].f_9 == 1)
						{
							iLocal_50 = 4;
						}
						else
						{
							if (!unk_0xEB361B4BD195A4D3(iLocal_285))
							{
								unk_0x3CAD3CEB48DD58A0(iLocal_285, 15f);
							}
							iLocal_50 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_216();
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
		if ((unk_0xDF658EB6CA91DFBC() - iLocal_299) > iLocal_293[iVar0] && iLocal_300[iVar0] == 0)
		{
			if (!unk_0x912AD5A10E7633F0(uLocal_287[iVar0], 0))
			{
				unk_0x6486E0794864EE9B(uLocal_287[iVar0], Param0, 20000, 2050, 4);
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
			if (unk_0x0D2E3F017CBCB8A8(uLocal_328))
			{
				unk_0x50C86ABC13A071F8(uLocal_328, 0);
				unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
			}
			func_66(1, 1, 1, 0);
			unk_0x3F6577E39389B251(1);
			unk_0x627D428B266FEDCA(0);
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0x157D8C80CC5E9591(1);
			uLocal_329 = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_330 = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x07553DAC96600443(uLocal_329, 1);
			unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
			unk_0xF13B03E3D574D5F1(uLocal_330, uLocal_329, 17000, 1, 1);
			func_76(&uLocal_343, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0x27327EB62D93CDBA(iLocal_306, Local_263.f_1, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(iLocal_306, Local_263.f_13);
			unk_0x74207974B5483203(iLocal_306);
			unk_0xB032923150355520(iLocal_306, 3);
			if (!unk_0xEB361B4BD195A4D3(iLocal_285))
			{
				unk_0xD3032BAC1ECE011F(iLocal_285);
				unk_0x3CAD3CEB48DD58A0(iLocal_285, 0f);
				unk_0x95C55738CAE00A20(&uLocal_326);
				unk_0xC7A9E9D688D679E8(0, iLocal_306, 24, 10000);
				unk_0x70B222EEA46C37FA(uLocal_326);
				unk_0x3998B29E786DFD96(iLocal_285, uLocal_326);
				unk_0x7DFD14B8B873D6B5(&uLocal_326);
			}
			unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
			unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 268.4057f);
			unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
			iLocal_317 = 1;
			iLocal_314 = unk_0xDF658EB6CA91DFBC();
			iLocal_333 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0xDF658EB6CA91DFBC();
			if ((iLocal_313 - iLocal_314) > 3000)
			{
				unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
				unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 268.4057f);
				unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
				unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
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
					if (unk_0xD3FACCDA4D66AEAD(uLocal_287[iLocal_335]))
					{
						if (!unk_0xEB361B4BD195A4D3(uLocal_287[iLocal_335]))
						{
							unk_0xB0993C95A7DBF879(uLocal_287[iLocal_335]);
							unk_0x10BB9EA2ADBCF0F3(uLocal_287[iLocal_335], fVar0[iLocal_335]);
							unk_0x27327EB62D93CDBA(uLocal_287[iLocal_335], Var6[iLocal_335 /*3*/], 1, 0, 0, 1);
							unk_0x971ED137B3AF56D8(uLocal_287[iLocal_335], 1193033728, 0);
						}
					}
					iLocal_335++;
				}
				iLocal_314 = unk_0xDF658EB6CA91DFBC();
				iLocal_333 = 2;
			}
			break;
		
		case 2:
			iLocal_313 = unk_0xDF658EB6CA91DFBC();
			if ((iLocal_313 - iLocal_314) > 13000)
			{
				iLocal_333 = 3;
			}
			break;
		
		case 3:
			unk_0x07553DAC96600443(uLocal_329, 0);
			unk_0x2D5A415AD869CB5F(0, 1, 3000, 0, 0, 0);
			unk_0x8BDD755F07063522(0f);
			unk_0x50C86ABC13A071F8(uLocal_329, 0);
			unk_0x50C86ABC13A071F8(uLocal_330, 0);
			unk_0x3F6577E39389B251(0);
			unk_0x627D428B266FEDCA(1);
			func_66(0, 1, 1, 0);
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
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
	func_216();
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
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
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
			Global_101553.f_29685.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_48(func_54(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_101541 = iParam1;
		if (Global_101539 == 0)
		{
			if (((Global_101542 == 1 || Global_101542 == 5) || Global_101542 == 11) || Global_101542 == 25)
			{
				func_47(2);
			}
			else if ((Global_101542 == 26 || Global_101542 == 8) || Global_101542 == 17)
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
	Global_101539 = iParam0;
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
	if (Global_101553.f_9049[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101553.f_9049[iParam0 /*12*/].f_6 == 11 || Global_101553.f_9049[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101553.f_9049[iParam0 /*12*/].f_5 = 1;
		Global_101553.f_9049[iParam0 /*12*/].f_10 = uParam1;
		Global_101553.f_9049[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101289 = 0;
	Global_101290 = 0;
	Global_101291 = 0;
	Global_101292 = 0;
	Global_101293 = 0;
	Global_101294 = 0;
	Global_101295 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101553.f_9049.f_3853;
	Global_101553.f_9049.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101553.f_9049[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101553.f_9049[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101289++;
					fVar1 = (fVar1 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101290++;
					fVar2 = (fVar2 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101291++;
					fVar3 = (fVar3 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101292++;
					fVar4 = (fVar4 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101293++;
					fVar5 = (fVar5 + (Global_101553.f_9049[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101294++;
					fVar6 = (fVar6 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101295++;
					fVar7 = (fVar7 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101272 > 0)
	{
		if (Global_101289 == Global_101272)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101273 > 0)
	{
		if (Global_101290 == Global_101273)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101274 > 0)
	{
		if (Global_101291 == Global_101274)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101275 > 0)
	{
		if (Global_101292 == Global_101275)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101276 > 0)
	{
		if (((Global_101293 == Global_101276 || (Global_101276 * 10 / Global_101293) < 41) || Global_101293 > Global_101279) || Global_101293 == Global_101279)
		{
			if (!unk_0x08BA6DD398CA197C(Global_101553.f_9049.f_3856, 14))
			{
				if (Global_101293 == Global_101276)
				{
					unk_0xE8AB1AD861EA93C1(joaat("num_rndevents_completed"), Global_101276, 0);
					unk_0x88B0F0DC270164B7(&(Global_101553.f_9049.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101277 > 0)
	{
		if (Global_101294 == Global_101277)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101278 > 0)
	{
		if (Global_101295 == Global_101278)
		{
			fVar7 = 5f;
		}
	}
	Global_101553.f_9049.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101293 > Global_101279 || Global_101293 == Global_101279)
	{
		iVar9 = Global_101279;
	}
	else
	{
		iVar9 = Global_101293;
	}
	unk_0x10CE8769EE2626C7(joaat("num_missions_completed"), Global_101289, 1);
	unk_0x10CE8769EE2626C7(joaat("num_missions_available"), Global_101272, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_completed"), Global_101290, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_available"), Global_101273, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_completed"), Global_101291, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_available"), Global_101274, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_completed"), Global_101292, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_available"), Global_101275, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_available"), Global_101279, 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_completed"), (Global_101295 + Global_101294), 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_available"), (Global_101278 + Global_101277), 1);
	Global_101296 = (Global_101289 * 100 / Global_101272);
	Global_101298 = ((Global_101291 + Global_101290) * 100 / (Global_101274 + Global_101273));
	Global_101297 = ((Global_101292 + iVar9) * 100 / (Global_101275 + Global_101279));
	Global_101299 = ((Global_101294 + Global_101295) * 100 / (Global_101277 + Global_101278));
	unk_0xA88E0F84F0E0949F(joaat("total_progress_made"), Global_101553.f_9049.f_3853, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_story_missions"), Global_101296, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_ambient_missions"), Global_101297, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_oddjobs"), Global_101298, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853))
	{
		func_51(13, unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853));
	}
	if (!unk_0x426131BF5A0B35D2())
	{
		if (!Global_69617)
		{
			if (func_50() == 2 == 0 && !unk_0xA86CA03D9749EEB3())
			{
				if (unk_0x187CC7D5F9B002AA())
				{
					Global_101287 = 0;
				}
				if (!Global_55816)
				{
					func_44();
				}
			}
		}
	}
}

int func_50()
{
	return Global_25185;
}

int func_51(int iParam0, int iParam1)
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_53()
{
	return Global_1312731;
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
		unk_0x88B0F0DC270164B7(&(Global_101553.f_25100.f_150[iVar1]), iVar0);
	}
}

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x28C1B9853548BD8E(sParam0, ""))
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
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_101553.f_25100[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101553.f_25100.f_145 < 9)
	{
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_4), sParam1, 16);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_8 = (unk_0xDF658EB6CA91DFBC() + iParam3);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_9 = iParam5;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_11 = iParam6;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_12 = uParam2;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_13 = iParam7;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_14 = iParam8;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = ((unk_0xDF658EB6CA91DFBC() + iParam3) + iParam4);
		}
		else
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = -1;
		}
		Global_101553.f_25100.f_145++;
		func_59();
	}
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101553.f_25100.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[0])
			{
				Global_101553.f_25100.f_146[0] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[1])
			{
				Global_101553.f_25100.f_146[1] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[2])
			{
				Global_101553.f_25100.f_146[2] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_60()
{
	func_11();
	switch (Global_101553.f_1991.f_539.f_3549)
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
		return unk_0x08BA6DD398CA197C(Global_101553.f_25100.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_62(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_101553.f_29685.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x367152330DB70D69(), 64);
	uVar16 = func_65(Var0);
	return uVar16;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BB8D1C5FAAB25B3(&cParam0))
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
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_73(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_7())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_72(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_73(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_72(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_70(unk_0x0C1D3C552325765B())) && !func_68(unk_0x0C1D3C552325765B(), 0)) && !func_67())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_70(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_67()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_69(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
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
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_71()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_72(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

int func_74(int iParam0)
{
	if (unk_0xB20CA7A3EE29687A())
	{
		if ((unk_0xDF658EB6CA91DFBC() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDF658EB6CA91DFBC();
		}
		Global_28 = unk_0xDF658EB6CA91DFBC();
		if ((unk_0xDF658EB6CA91DFBC() - Global_27) > iParam0)
		{
			if (func_75())
			{
				Global_27 = unk_0xDF658EB6CA91DFBC();
				return 1;
			}
		}
	}
	return 0;
}

int func_75()
{
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (unk_0x2A57AED61E15C7C7(0, 18) || unk_0x2A57AED61E15C7C7(2, 18))
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
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
			iLocal_314 = unk_0xDF658EB6CA91DFBC();
			iLocal_315 = 1;
			break;
		
		case 1:
			iLocal_313 = unk_0xDF658EB6CA91DFBC();
			if ((iLocal_313 - iLocal_314) > 2000)
			{
				if (!func_82())
				{
					iLocal_314 = unk_0xDF658EB6CA91DFBC();
					iLocal_315 = 2;
				}
			}
			break;
		
		case 2:
			if (func_82())
			{
				unk_0xEAAACF3402024FE8("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_539)
			{
				iLocal_313 = unk_0xDF658EB6CA91DFBC();
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
						unk_0xEAAACF3402024FE8("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0xD8A7A2C7456E47C9(uLocal_287[iLocal_540], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_541++;
						if (iLocal_541 == 3)
						{
							iLocal_539 = 0;
						}
						iLocal_542 = unk_0xB5BF1B58C833F7A9(9000, 14000);
						iLocal_314 = unk_0xDF658EB6CA91DFBC();
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
				iLocal_313 = unk_0xDF658EB6CA91DFBC();
				if ((iLocal_313 - iLocal_314) > 10000)
				{
					if (!func_82())
					{
						if (func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0))
						{
							iLocal_508++;
							iLocal_314 = unk_0xDF658EB6CA91DFBC();
							iLocal_539 = 1;
							iLocal_541 = 0;
						}
						else
						{
							unk_0xEAAACF3402024FE8("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
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
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		if (unk_0x932D892C0ED221F7(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0x2A57AED61E15C7C7(2, 222) && !iLocal_538)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_306))
		{
			if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_306, 0))
					{
						if (!unk_0xEB361B4BD195A4D3(iLocal_285))
						{
							unk_0xC7A9E9D688D679E8(iLocal_285, iLocal_306, 24, 5000);
							fLocal_308 = unk_0x39053CCA2C4B5DA1(iLocal_306);
							while (fLocal_308 > 5f)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
								{
									fLocal_308 = unk_0x39053CCA2C4B5DA1(iLocal_306);
								}
							}
							func_29();
							unk_0xB95C16558F8BFC6A(iLocal_510);
							unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 1);
							unk_0x7C1793252FA472B6("RE_BUS_TOUR_SCENE");
							unk_0x14F2413A60FF70C3(iLocal_306, 0);
							if (unk_0x0D2E3F017CBCB8A8(uLocal_328))
							{
								unk_0x50C86ABC13A071F8(uLocal_328, 0);
								unk_0x2D5A415AD869CB5F(0, 0, 0, 1, 0, 0);
								unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
							}
							unk_0xAB74B3F15710FF7D(unk_0xA0081090911D13E5(), iLocal_306, 0);
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
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_82()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
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
			unk_0x18FB7BCBEDA481BD(0.5f);
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
			unk_0x18FB7BCBEDA481BD(0.6f);
			break;
	}
}

void func_84()
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_286) && !unk_0xEB361B4BD195A4D3(iLocal_285))
	{
		switch (iLocal_51)
		{
			case 0:
				unk_0x841EA440AD1F0294(0);
				unk_0xC94C39C53546E775("RE_BUS_TOUR_SCENE");
				unk_0x70C2DBAE2904E1EA(iLocal_306, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 0);
				func_66(1, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 256);
				unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
				unk_0x30822041FD942595(Local_263.f_1, 30f, 0);
				unk_0xD9AB5877E5CA2FF0(iLocal_285, 0);
				unk_0xC7E3E32FBCC0DCD6(unk_0xA0081090911D13E5(), iLocal_306, 2);
				unk_0x3F6577E39389B251(1);
				unk_0x627D428B266FEDCA(0);
				uLocal_329 = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_330 = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x07553DAC96600443(uLocal_329, 1);
				unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
				unk_0xF13B03E3D574D5F1(uLocal_330, uLocal_329, 6500, 1, 1);
				if (unk_0x1F1B2B6E500380C5(unk_0x525584039F375488(), 0))
				{
					if (unk_0x7298BA0C4D4A4C9E(unk_0x525584039F375488(), iLocal_306, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0x10BB9EA2ADBCF0F3(unk_0x525584039F375488(), 65f);
						unk_0x27327EB62D93CDBA(unk_0x525584039F375488(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				unk_0x0B2A7A28BA9820E3("BusTours");
				if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
				{
					func_77(unk_0xC59DF10B4FC39DF8(iLocal_306, 1), Local_52[0 /*15*/].f_1, &Local_320, &Local_323, 500);
					iLocal_544 = unk_0xDF658EB6CA91DFBC();
					iLocal_51 = 1;
				}
				if (unk_0xFA461E82A81FEF04() == 4)
				{
					iLocal_319 = 1;
				}
				iLocal_545 = 0;
				break;
			
			case 1:
				if (!iLocal_340)
				{
					func_112();
				}
				if ((unk_0xDF658EB6CA91DFBC() - iLocal_544) > 5000 && !iLocal_543)
				{
					func_76(&uLocal_343, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_111("Enter_bus"))
					{
						unk_0x94724F7C938EBE34(1);
					}
					iLocal_543 = 1;
				}
				if ((unk_0xDF658EB6CA91DFBC() - iLocal_544) > 6200)
				{
					if (iLocal_319 == 1)
					{
						if (iLocal_545 == 0)
						{
							unk_0xFF4920BAFCB15F65("CamPushInNeutral", 0, 0);
							unk_0xAB16AADE80707D47(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_545 = 1;
						}
					}
				}
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if ((unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iLocal_306) && unk_0x72550A6F2BC0E12B(iLocal_286, iLocal_306)) && unk_0x72550A6F2BC0E12B(iLocal_285, iLocal_306))
					{
						iLocal_51 = 2;
					}
					else if (func_74(1000))
					{
						if (unk_0x6315EBE95A97CADF(iLocal_306, 0, 0))
						{
							unk_0xC7E3E32FBCC0DCD6(iLocal_286, iLocal_306, 0);
						}
						iLocal_51 = 2;
					}
				}
				break;
			
			case 2:
				unk_0xA41BA6C0692C37D3(iLocal_285, iLocal_306, Local_52[0 /*15*/].f_1, Local_52[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
				unk_0x07553DAC96600443(uLocal_329, 0);
				unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
				unk_0x50C86ABC13A071F8(uLocal_329, 0);
				unk_0x50C86ABC13A071F8(uLocal_330, 0);
				unk_0x3F6577E39389B251(0);
				unk_0x627D428B266FEDCA(1);
				unk_0x35FBFE9B937728A9();
				unk_0x7ABD1B29E6C2963D(2);
				func_66(0, 1, 1, 0);
				iLocal_331 = func_10();
				func_85(iLocal_331, 1, iLocal_512);
				iLocal_510 = unk_0x3F7C3078AE3BD74B();
				if (!iLocal_319)
				{
					unk_0xB95C16558F8BFC6A(3);
				}
				else
				{
					func_21(1);
				}
				unk_0x0B57C567D698C373(&uLocal_310);
				iLocal_49 = 2;
				break;
		}
	}
	else
	{
		func_216();
	}
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_86(Global_101553.f_32740[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_110();
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
					func_109(99, 1);
					func_108(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_108(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_108(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0);
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
							func_108(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_108(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_108(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_108(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_108(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_108(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_108(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_108(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_108(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_108(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_108(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_108(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD24F6522EB082914())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_108(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_108(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_108(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_108(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_108(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_108(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_108(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_108(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_108(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_109(95, iParam3);
					break;
				
				case 1:
					func_109(97, iParam3);
					break;
				
				case 2:
					func_109(96, iParam3);
					break;
			}
			func_109(98, iParam3);
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
	iVar5 = (Global_52990[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52990[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52990[iVar2] = 2147483647;
				}
				else
				{
					Global_52990[iVar2] = (Global_52990[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_108(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_108(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_108(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52990[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52990[iVar2];
			Global_52990[iVar2] = (Global_52990[iVar2] - iParam3);
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
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101553.f_25254.f_233[iVar2 /*69*/]++;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_1++;
		if (Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_88(iParam0);
	if (Global_35775 == 15)
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
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52998[iVar0 /*3*/][0] = Global_101553.f_25254[iVar0];
		Global_52998.f_31[iVar0 /*3*/][0] = Global_101553.f_25254.f_11[iVar0];
		Global_52998.f_62[iVar0 /*3*/][0] = Global_101553.f_25254.f_22[iVar0];
		Global_52998.f_93[iVar0 /*3*/][0] = Global_101553.f_25254.f_33[iVar0];
		Global_52998.f_124[iVar0 /*3*/][0] = Global_101553.f_25254.f_44[iVar0];
		Global_52998.f_155[iVar0 /*3*/][0] = Global_101553.f_25254.f_55[iVar0];
		Global_52998.f_186[iVar0 /*3*/][0] = Global_101553.f_25254.f_66[iVar0];
		Global_52998.f_217[iVar0 /*3*/][0] = Global_101553.f_25254.f_77[iVar0];
		Global_52998.f_248[iVar0 /*3*/][0] = Global_101553.f_25254.f_88[iVar0];
		if (!bParam0)
		{
			Global_52998[iVar0 /*3*/][1] = Global_101553.f_25254[iVar0];
			Global_52998.f_31[iVar0 /*3*/][1] = Global_101553.f_25254.f_11[iVar0];
			Global_52998.f_62[iVar0 /*3*/][1] = Global_101553.f_25254.f_22[iVar0];
			Global_52998.f_93[iVar0 /*3*/][1] = Global_101553.f_25254.f_33[iVar0];
			Global_52998.f_124[iVar0 /*3*/][1] = Global_101553.f_25254.f_44[iVar0];
			Global_52998.f_155[iVar0 /*3*/][1] = Global_101553.f_25254.f_55[iVar0];
			Global_52998.f_186[iVar0 /*3*/][1] = Global_101553.f_25254.f_66[iVar0];
			Global_52998.f_217[iVar0 /*3*/][1] = Global_101553.f_25254.f_77[iVar0];
			Global_52998.f_248[iVar0 /*3*/][1] = Global_101553.f_25254.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52990[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x10CE8769EE2626C7(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x10CE8769EE2626C7(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x10CE8769EE2626C7(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_89(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0) || unk_0x08BA6DD398CA197C(Global_2097152[func_91() /*10106*/].f_7120.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_2097152[func_91() /*10106*/].f_7120.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x754E61FE98961B39("COUP_RED");
		unk_0xBDE6EEC5F6BDC060(func_90(iParam0));
		unk_0xDAB775768F2B11B1(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_109(93, iParam0);
	func_109(29, iParam0);
	func_109(30, iParam0);
}

bool func_93(int iParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2097152[func_91() /*10106*/].f_7120.f_10, iParam0);
}

int func_94(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3C91BC99A9AE5C7D(27))
	{
		return 0;
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x8A3351ECF43DB941(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x10CE8769EE2626C7(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_95(27, 1);
	return 1;
}

int func_95(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_96(iParam0, iParam1);
}

int func_96(int iParam0, int iParam1)
{
	if (func_15(14) && !func_107(iParam0))
	{
		return 0;
	}
	if (unk_0x3C91BC99A9AE5C7D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69617)
	{
		return 0;
	}
	if (func_106(&Global_2578151))
	{
		if (func_104(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_97(&Global_2578151, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CCFD9D11EFFE8B6(iParam0))
		{
			return 0;
		}
		if (unk_0x3C91BC99A9AE5C7D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_107(iParam1))
	{
		return 0;
	}
	if (func_104(uParam0, iParam1))
	{
		return 0;
	}
	if (func_103(uParam0) < 0f)
	{
		func_102(uParam0, 0);
	}
	func_100(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_98(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_107(iParam1))
	{
		return 0;
	}
	if (func_104(uParam0, iParam1))
	{
		return 0;
	}
	if (func_103(uParam0) < 0f)
	{
		func_102(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_99(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_99(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_100(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_101(uParam0, iVar0);
		iVar0++;
	}
	func_102(uParam0, (Global_2578150 - 0.5f));
}

void func_101(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_102(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_103(var uParam0)
{
	return uParam0->f_72;
}

bool func_104(var uParam0, int iParam1)
{
	return func_105(uParam0, iParam1) != -1;
}

int func_105(var uParam0, int iParam1)
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

bool func_106(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_107(int iParam0)
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

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_110()
{
	int iVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52990[0] == iVar0)
		{
			Global_52990[0] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52990[1] == iVar0)
		{
			Global_52990[1] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52990[2] == iVar0)
		{
			Global_52990[2] = iVar0;
		}
	}
}

bool func_111(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_112()
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_286))
	{
		unk_0xD3032BAC1ECE011F(iLocal_286);
		unk_0xA4FE049E1F729261(iLocal_286, iLocal_306, 10000, 0, 2f, 262144, 0);
		unk_0x77637031DE326F70(iLocal_286, 1);
		iLocal_340 = 1;
	}
}

void func_113()
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (func_153())
		{
			unk_0xB032923150355520(iLocal_306, 3);
			unk_0x325A2C5B8927293C(iLocal_306, 0);
			func_216();
		}
		else if (func_144(4))
		{
			if ((unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_306, 5f, 5f, 5f, 0, 1, 0) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) && !func_111("TX_H02"))
			{
				if (func_142())
				{
					if (!iLocal_513)
					{
						unk_0xB032923150355520(iLocal_306, 1);
						iLocal_513 = 1;
					}
					unk_0x58CC3788DF029867("Enter_bus", 0);
					if (unk_0x7F6103BD34B839B0(2, 23))
					{
						unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), iLocal_306, -1, 2, 1f, 8, 0);
					}
					if (!unk_0x16833EFAA58E63DB(uLocal_310))
					{
						if (unk_0x16833EFAA58E63DB(uLocal_311))
						{
							unk_0x0B57C567D698C373(&uLocal_311);
						}
						uLocal_310 = unk_0x91B4D18C6AFDC14C(iLocal_306);
						unk_0x47C16DAEBDB1E5FD(uLocal_310, 1);
						unk_0xC40118229E47A3D7(uLocal_310, Global_25231);
						if (!unk_0xEB361B4BD195A4D3(iLocal_286))
						{
							unk_0xD5DC2873808A9CB5(iLocal_286, unk_0xA0081090911D13E5(), -1, 0, 2);
						}
						if (!func_141())
						{
							if (func_129())
							{
								func_216();
							}
							else
							{
								func_119(1);
							}
						}
					}
					if (func_118())
					{
						iLocal_538 = 0;
						func_117(1);
					}
				}
				else
				{
					unk_0x58CC3788DF029867("No_bus_money", 0);
					if (iLocal_513)
					{
						unk_0xB032923150355520(iLocal_306, 2);
						iLocal_513 = 0;
					}
				}
			}
		}
		if (iLocal_335 < 5)
		{
			if (func_114(&(uLocal_287[iLocal_335])))
			{
				iLocal_335++;
			}
		}
	}
}

int func_114(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x0F156AC6B7986893(Local_279, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0xEB361B4BD195A4D3(*uParam0))
		{
			if (func_116(*uParam0))
			{
				if (!unk_0x18C670321BC98FDA(*uParam0))
				{
					unk_0x7B17650F15A8876D(*uParam0, 1, 0);
					unk_0xD3032BAC1ECE011F(*uParam0);
					unk_0xFF5CE2ECB4FBD4A8(*uParam0, 1);
					unk_0xDB721F9F36A8FE26(*uParam0, "randompassenger");
					unk_0x705E4255B39314A7(*uParam0, 134, 1);
					switch (iLocal_335)
					{
						case 0:
							if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(*uParam0, iLocal_306, 3);
								unk_0x77637031DE326F70(*uParam0, 1);
							}
							break;
						
						case 1:
							if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(*uParam0, iLocal_306, 7);
								unk_0x77637031DE326F70(*uParam0, 1);
							}
							break;
						
						case 2:
							if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(*uParam0, iLocal_306, 6);
								unk_0x77637031DE326F70(*uParam0, 1);
							}
							break;
						
						case 3:
							if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(*uParam0, iLocal_306, 8);
								unk_0x77637031DE326F70(*uParam0, 1);
							}
							break;
						
						case 4:
							if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(*uParam0, iLocal_306, 1);
								unk_0x77637031DE326F70(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_115(unk_0x1F1602FD864AA4C1(*uParam0));
					unk_0xD97F9F0D7231AC43(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_115(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 16);
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
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 33);
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

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x705BC1BB91F530B5(uParam0) == joaat("a_m_m_tramp_01") || unk_0x705BC1BB91F530B5(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("s_m_y_cop_01")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_117(int iParam0)
{
	iLocal_51 = 0;
	iLocal_49 = iParam0;
}

int func_118()
{
	if (unk_0x1F1B2B6E500380C5(iLocal_306, 0))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5()))
			{
				if (unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5()) == iLocal_306)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (func_123())
	{
		Global_101543 = 1;
		Global_101540 = unk_0xDF658EB6CA91DFBC();
		if (func_55(Global_101542))
		{
			func_120(0);
		}
		unk_0xA57E42D9C41110A9(1, "RE_TITLE");
		if (iParam0 && func_55(Global_101542))
		{
			unk_0x07FD940F5798C7D3();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101553.f_29685.f_2 < 3)
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_121(func_122(iParam0), -1);
					Global_101553.f_29685.f_2++;
					unk_0x88B0F0DC270164B7(&Global_101549, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 1))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_121(func_122(iParam0), -1);
					Global_101553.f_29685.f_3++;
					unk_0x88B0F0DC270164B7(&Global_101549, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 2))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_121(func_122(iParam0), -1);
					Global_101553.f_29685.f_4++;
					unk_0x88B0F0DC270164B7(&Global_101549, 2);
				}
			}
			break;
	}
}

void func_121(var uParam0, int iParam1)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

char* func_122(int iParam0)
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

int func_123()
{
	switch (func_124(&Global_25244, 0, 5, 0, unk_0xEAE20F1125B83888()))
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

int func_124(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89217.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_128(0))
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		unk_0x8F2CF88C37D4A413(unk_0x4A0FB18E33FE5805(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xD74A648A7073D681(8);
		}
		Global_35775 = iParam2;
		Global_35737 = *uParam0;
		Global_35738 = iParam4;
		Global_35736 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35736 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35736)
			{
				if (Global_35742[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35737 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_126(iParam2))
		{
			return 0;
		}
		if (Global_35736 == 8)
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		Global_35742[Global_35736 /*4*/] = Global_35739;
		Global_35742[Global_35736 /*4*/].f_1 = iParam1;
		Global_35742[Global_35736 /*4*/].f_2 = iParam2;
		Global_35742[Global_35736 /*4*/].f_3 = 0;
		Global_35736++;
		if (iParam4 != 0)
		{
			func_125(uParam0, iParam4);
		}
	}
	return 2;
}

void func_125(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35736 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35736)
	{
		if (Global_35742[iVar0 /*4*/] == *uParam0)
		{
			Global_35742[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_35775);
}

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_129()
{
	if (!func_126(5))
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_136())
		{
			return 0;
		}
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130(float fParam0, bool bParam1)
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
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (func_12(func_10()))
		{
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x08BA6DD398CA197C(Global_101553.f_17429[iVar32 /*6*/], 2) && !unk_0x08BA6DD398CA197C(Global_101553.f_17429[iVar32 /*6*/], 3))
				{
					func_131(iVar32, &Var0);
					fVar35 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var0.f_6, 1);
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

void func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 1:
			func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 2:
			func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 3:
			func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 4:
			func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 5:
			func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 6:
			func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 7:
			func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
			break;
		
		case 8:
			func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 9:
			func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 10:
			func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 11:
			func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 12:
			func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 13:
			func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 14:
			func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 15:
			func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 16:
			func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 17:
			func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 18:
			func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 19:
			func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 20:
			func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 21:
			func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 22:
			func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 23:
			func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_133(iParam0), 0, 1);
			break;
		
		case 24:
			func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
			break;
		
		case 25:
			func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 26:
			func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 27:
			func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 28:
			func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 29:
			func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 30:
			func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 31:
			func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 32:
			func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 33:
			func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 34:
			func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 35:
			func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 36:
			func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 37:
			func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 38:
			func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 39:
			func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 40:
			func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 41:
			func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 42:
			func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 43:
			func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 44:
			func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 45:
			func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 46:
			func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 47:
			func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 48:
			func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 49:
			func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 50:
			func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 51:
			func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 52:
			func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 54:
			func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 55:
			func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 56:
			func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 53:
			func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 57:
			func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 58:
			func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 59:
			func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 60:
			func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 61:
			func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 62:
			func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_133(int iParam0)
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

struct<2> func_134(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_135(iParam0) };
	if (unk_0x509383441597090D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_135(int iParam0)
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

int func_136()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xA5F0EF35323210B5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	if (func_140() && !func_136())
	{
		return 1;
	}
	if (func_139() && func_138())
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return Global_101271 > 0;
}

int func_139()
{
	if (Global_88661 != -1)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141()
{
	if ((Global_101542 == func_64() && unk_0x0D9CC5C2000C6EA4()) && Global_101543)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if (func_143(func_10()) >= iLocal_512)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
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
						if (((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_152()) || Global_100600) || Global_25187) || func_151()) || func_17(8, -1)) || func_150()) || func_149()) || func_148()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1) || func_152()) || Global_25187) || func_151()) || func_17(8, -1)) || func_148()) || func_150()) || func_149()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_152()) || Global_100600) || Global_25187) || func_151()) || func_17(8, -1)) || func_148()) || func_150()) || func_149()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5) || Global_36322 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_152()) || Global_100600) || Global_25187) || func_151()) || func_17(8, -1)) || func_150()) || func_149()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_152() || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || func_17(8, -1)) || func_147()) || func_146()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_150()) || func_149()) || func_146()) || func_145())
						{
							return 0;
						}
						if ((unk_0xC740F8182E7E9681() && unk_0x4067637E264DB8F1() != 3) && unk_0x3FC82179CAE1D56D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
						{
							if ((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_152()) || Global_25187) || func_151()) || func_17(8, -1)) || func_149()) || func_148()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || func_152()) || func_149()) || Global_100600) || Global_25187) || func_151()) || Global_36906) || func_17(8, -1)) || func_148()) || func_146()) || func_147()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0)) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1)) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0x019057DADA219C94(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_152()) || Global_100600) || Global_25187) || func_151()) || func_17(8, -1)) || func_148()) || func_146()) || func_150()) || func_149()) || func_147())
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

var func_145()
{
	return Global_91445.f_1;
}

int func_146()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 13);
	}
	return 0;
}

int func_147()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	if (Global_69877)
	{
		return 1;
	}
	else if (Global_55810 && !Global_55816)
	{
		return 1;
	}
	return 0;
}

bool func_149()
{
	return Global_91458.f_304 > 0;
}

bool func_150()
{
	return Global_91458.f_303 > 0;
}

var func_151()
{
	return Global_1315229;
}

int func_152()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

int func_153()
{
	if (func_166(iLocal_286))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_286))
		{
			if (func_158(iLocal_286))
			{
				func_156(iLocal_286, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_155();
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
	if (!unk_0xEB361B4BD195A4D3(iLocal_285))
	{
		if (((func_158(iLocal_285) || !unk_0x39FEE545B315414E(iLocal_285, 0)) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iLocal_285)) || unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iLocal_285))
		{
			func_154(iLocal_286);
			return 1;
		}
	}
	else
	{
		func_154(iLocal_286);
		return 1;
	}
	if (unk_0x4AEC0F4FC7FE62C7(iLocal_306, unk_0xA0081090911D13E5(), 1))
	{
		if (func_166(iLocal_286))
		{
			if (!unk_0xEB361B4BD195A4D3(iLocal_286))
			{
				func_154(iLocal_286);
				func_156(iLocal_286, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_216();
	}
	if (unk_0x7C42343912622BB6() >= 19 || unk_0x7C42343912622BB6() <= 6)
	{
		if (!func_82())
		{
			if (func_76(&uLocal_343, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_306, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_154(int iParam0)
{
	if (func_166(iLocal_286))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_286))
		{
			unk_0xFF5CE2ECB4FBD4A8(uParam0, 0);
			unk_0xD3032BAC1ECE011F(uParam0);
			unk_0x69E46DC398F0B2BD(iParam0, unk_0xA0081090911D13E5(), 100f, -1, 0, 0);
			unk_0x77637031DE326F70(iParam0, 1);
			func_31();
		}
	}
}

void func_155()
{
	if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_286, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_313 = unk_0xDF658EB6CA91DFBC();
		if ((iLocal_313 - iLocal_314) > 10000)
		{
			if (!func_82())
			{
				func_76(&uLocal_343, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_314 = unk_0xDF658EB6CA91DFBC();
		}
	}
}

void func_156(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(uParam0, sParam1, func_157(iParam2), 1);
}

int func_157(int iParam0)
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

int func_158(var uParam0)
{
	if (func_159(uParam0, &uLocal_337, &uLocal_334, iLocal_332, bLocal_338, 1077936128, 0) || unk_0xFFE4F37124DBE6D9(uParam0))
	{
		func_154(uParam0);
		return 1;
	}
	return 0;
}

int func_159(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x912AD5A10E7633F0(uParam0, 0) && !bParam4)
	{
		if (unk_0xB6024B1E922B8E1A(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x912AD5A10E7633F0(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			Var6 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x08BA6DD398CA197C(iParam3, 3))
			{
				if (func_165(iParam0, iParam6))
				{
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_163(iParam0);
					return 1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xB53CC268A7051C62(Var6, fParam5, 1))
				{
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_163(iParam0);
					return 1;
				}
				if (unk_0xF9043F0F074A61B5(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_163(iParam0);
					return 1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(iParam3, 2))
			{
				fVar0 = unk_0xB72215EDD02DA85A(unk_0xA0081090911D13E5());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
				{
					if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0) || unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x25138A378B1DA64B(iParam0, unk_0xA0081090911D13E5(), 17))
							{
								func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_164("	aggro Ped knows player is pointing gun\n");
								func_160("		lockOnTimer = ", *uParam2);
								func_164("\n");
								func_160("		time since not LockedOn = ", (unk_0xDF658EB6CA91DFBC() - iLocal_43));
								func_164("\n");
								bVar2 = true;
								if (unk_0xDF658EB6CA91DFBC() > (iLocal_43 + *uParam2))
								{
									func_164("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_163(iParam0);
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
			if (!unk_0x08BA6DD398CA197C(iParam3, 0))
			{
				if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
				{
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_163(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0xDF658EB6CA91DFBC();
	}
	return 0;
}

void func_160(char* sParam0, int iParam1)
{
	func_162(sParam0);
	func_161(iParam1);
}

void func_161(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_162(char* sParam0)
{
	if (unk_0x28C1B9853548BD8E(uParam0, uParam0))
	{
	}
}

void func_163(var uParam0)
{
	unk_0xFC942BCB9A58BF05(uParam0);
}

void func_164(char* sParam0)
{
	func_162(sParam0);
}

int func_165(int iParam0, int iParam1)
{
	if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
	{
		if (unk_0x4AEC0F4FC7FE62C7(uParam0, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x4AEC0F4FC7FE62C7(iParam0, unk_0xA0081090911D13E5(), 1))
	{
		if ((unk_0xF0BA9B123B880A7E(iParam0) - unk_0xC6FE0F623405BFA8(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_167()
{
	unk_0x154F764D37DA6CA1(0, 1);
	unk_0x154F764D37DA6CA1(1, 1);
	unk_0x154F764D37DA6CA1(2, 1);
	unk_0x154F764D37DA6CA1(3, 1);
	unk_0x154F764D37DA6CA1(4, 1);
	unk_0x154F764D37DA6CA1(5, 1);
	unk_0x154F764D37DA6CA1(6, 1);
	unk_0x154F764D37DA6CA1(7, 1);
	unk_0x154F764D37DA6CA1(8, 1);
}

void func_168()
{
	unk_0x54C82807506521AE(unk_0x0C1D3C552325765B());
	unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 5);
	unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 3);
	unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 15);
	unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 2);
	unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 4);
}

void func_169()
{
	if (iLocal_318)
	{
		unk_0x33E1C85069157293(Local_320.f_0, Local_320.f_1, Local_323.f_0, Local_323.f_1);
	}
}

void func_170()
{
	if (unk_0x456BA2E07738D37D("RAIN") || unk_0x456BA2E07738D37D("THUNDER"))
	{
		unk_0x11BBF139870B5E0F("OVERCAST", 10000f);
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	
	if (func_174())
	{
		func_216();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0x491067A8E906F22D(iVar0);
		unk_0x491067A8E906F22D(iVar1);
		unk_0xA9DC3948106CC3E4(sLocal_509);
		unk_0x491067A8E906F22D(joaat("tourbus"));
		unk_0x7BCE93123FE81E45("BUSTOUR", 2);
		if ((((unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x2C1B5A0D3E233FC3(iVar1)) && unk_0xAD21C77209FD2024(sLocal_509)) && unk_0x2C1B5A0D3E233FC3(joaat("tourbus"))) && unk_0x985A6C5313B2276C(2))
		{
			unk_0xA28F0E9F63F56A89(0);
			unk_0xDB90294334B411BD(Local_279, &uLocal_282, &uLocal_307, 1, 1077936128, 0);
			iLocal_306 = unk_0xE044C77D0FC9DB66(joaat("tourbus"), Local_263.f_1, Local_263.f_13, 1, 1);
			unk_0x74207974B5483203(iLocal_306);
			unk_0xB032923150355520(iLocal_306, 3);
			unk_0x2FF7D5617C5F4AC9(iLocal_306, 0);
			unk_0x4DA90A8B408EBB18(iLocal_306, "OFF");
			unk_0x483A8C64905D06CC(iLocal_306, 0, 0);
			unk_0x175E22227AEEF4D9(iLocal_306, 2, 1);
			unk_0x3607936F13065720(joaat("tourbus"), 1);
			unk_0xC266352E62F1DC53(iLocal_306, 100f);
			iLocal_285 = unk_0x667A2CFA1914073C(iLocal_306, 26, iVar1, -1, 1, 1);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_285, 1);
			unk_0x705E4255B39314A7(iLocal_285, 251, 1);
			unk_0xDF9016EF485A714E(iLocal_285, 1);
			if (unk_0xD3FACCDA4D66AEAD(iLocal_285))
			{
				if (!unk_0xEB361B4BD195A4D3(iLocal_285))
				{
					unk_0xA27FDFE5C0EBB875(iLocal_285, 3, 1, 2, 0);
					unk_0xA27FDFE5C0EBB875(iLocal_285, 4, 0, 2, 0);
				}
			}
			iLocal_286 = unk_0xF8418B3B87CFCCBF(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			unk_0xD97F9F0D7231AC43(iLocal_286, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0xFF5CE2ECB4FBD4A8(iLocal_286, 1);
			unk_0xB43604F27F1EAE5F(iLocal_286, 0);
			unk_0xA27FDFE5C0EBB875(iLocal_286, 0, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(iLocal_286, 2, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(iLocal_286, 3, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(iLocal_286, 4, 1, 0, 0);
			unk_0x95C55738CAE00A20(&uLocal_327);
			unk_0xC9567EA69F3CC4C2(0, sLocal_509, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xC9567EA69F3CC4C2(0, sLocal_509, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0xC9567EA69F3CC4C2(0, sLocal_509, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x916FF2E986EA2C6C(uLocal_327, 1);
			unk_0x70B222EEA46C37FA(uLocal_327);
			unk_0x3998B29E786DFD96(iLocal_286, uLocal_327);
			unk_0x7DFD14B8B873D6B5(&uLocal_327);
			func_173(&uLocal_343, 3, iLocal_286, "TOURGUIDE", 0, 1);
			if (!unk_0x16833EFAA58E63DB(uLocal_311))
			{
				uLocal_311 = unk_0x91B4D18C6AFDC14C(iLocal_306);
				unk_0x32479C670EB9962F(uLocal_311, 85);
			}
			func_172();
			iLocal_48 = 1;
		}
	}
}

void func_172()
{
	unk_0x87BBAE0EE5DD7680(iLocal_285, 17, 1);
	unk_0x87BBAE0EE5DD7680(iLocal_286, 17, 1);
	unk_0xD8C3303D0A49D05B("re_bus_tours1", &uLocal_309);
	unk_0x65889F26F311FC55(iLocal_285, uLocal_309);
	unk_0x65889F26F311FC55(iLocal_286, uLocal_309);
	unk_0xFDDE2C1A05E64390(1, uLocal_309, joaat("player"));
}

void func_173(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_174()
{
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_136())
		{
			return 0;
		}
	}
	if (func_137())
	{
		return 1;
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_175()
{
}

void func_176()
{
}

void func_177()
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
	func_178(Var0);
	func_178(Var15);
	func_178(Var30);
	func_178(Var45);
	func_178(Var60);
	func_178(Var75);
	func_178(Var90);
	func_178(Var105);
	func_178(Var120);
	func_178(Var135);
	func_178(Var150);
	func_178(Var165);
	func_178(Var180);
	func_178(Local_263);
	iLocal_278 = 0;
}

void func_178(char[60] cParam0)
{
	Local_52[iLocal_278 /*15*/] = { cParam0 };
	iLocal_278++;
}

void func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_181(iParam0);
	unk_0x0CE863A8DDA6EA24(0);
	unk_0x457423E7871A26C1(1);
	Global_101539 = 0;
	func_180();
}

void func_180()
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			unk_0x3607936F13065720(unk_0x705BC1BB91F530B5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)), 1);
		}
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 32, 0);
	}
}

void func_181(int iParam0)
{
	Global_101542 = iParam0;
}

int func_182(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138673)
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
		if (!func_214())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_136())
			{
				return 0;
			}
		}
		if (!Global_101553.f_7940)
		{
			return 0;
		}
		if (func_45(0))
		{
			return 0;
		}
		if (func_137())
		{
			return 0;
		}
		if (func_213())
		{
			return 0;
		}
		if (Global_101542 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_130(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_212(iParam3))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_211(func_10()) == 4 || func_211(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_210(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_209(Global_101553.f_29685.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xDF658EB6CA91DFBC() - Global_101544) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_208())
		{
			return 0;
		}
		if (unk_0x914490E7407A12A1())
		{
			return 0;
		}
		if (unk_0x0D9CC5C2000C6EA4())
		{
			return 0;
		}
		if (!func_144(4))
		{
			return 0;
		}
		if (!func_126(5))
		{
			return 0;
		}
		if (func_207(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x72C176FA688CE74D(unk_0x16A396814EC162D8(unk_0xA0081090911D13E5())))
		{
			if ((unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(377.153f, -717.567f, 10.0536f) || unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(320.9934f, 265.2515f, 82.1221f)) || unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_207(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_212(30) && !func_207(30, 0))
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
				Var5 = { Global_101553.f_1991.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101553.f_1991.f_539.f_1524[iVar4];
				if (func_206(iVar8))
				{
					if (func_184(iVar4))
					{
						if (!func_183(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var5) < (210f * 210f))
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

bool func_183(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101553.f_1991.f_539.f_1524[iParam0];
	return func_185(iVar0);
}

int func_185(int iParam0)
{
	return func_186(iParam0, 1);
}

int func_186(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_206(iParam0))
	{
		return 0;
	}
	func_187(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_188(func_199(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_188(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_198(iParam0, iParam1))
	{
		iVar0 = func_197(iParam1);
		iVar1 = func_195(iParam0);
		iVar2 = (func_195(iParam0) - func_195(iParam1));
		iVar3 = (func_197(iParam0) - func_197(iParam1));
		iVar4 = (func_194(iParam0) - func_194(iParam1));
		iVar5 = (func_193(iParam0) - func_193(iParam1));
		iVar6 = (func_192(iParam0) - func_192(iParam1));
		iVar7 = (func_191(iParam0) - func_191(iParam1));
	}
	else
	{
		iVar0 = func_197(iParam0);
		iVar1 = func_195(iParam1);
		iVar2 = (func_195(iParam1) - func_195(iParam0));
		iVar3 = (func_197(iParam1) - func_197(iParam0));
		iVar4 = (func_194(iParam1) - func_194(iParam0));
		iVar5 = (func_193(iParam1) - func_193(iParam0));
		iVar6 = (func_192(iParam1) - func_192(iParam0));
		iVar7 = (func_191(iParam1) - func_191(iParam0));
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
		iVar4 = (iVar4 + func_190(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_189(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_189(float fParam0, float fParam1, float fParam2)
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

int func_190(int iParam0, int iParam1)
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

int func_191(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_192(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_193(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_194(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_195(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_196(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

int func_196(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_197(int iParam0)
{
	return iParam0 & 15;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_206(iParam1) || !func_206(iParam0))
	{
		return 1;
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
	return 0;
}

int func_199()
{
	var uVar0;
	
	func_205(&uVar0, unk_0x8A1006B6887A61DE());
	func_204(&uVar0, unk_0x4A29A51562AC24A5());
	func_203(&uVar0, unk_0x7C42343912622BB6());
	func_202(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_201(&uVar0, unk_0x55ED786EB10EA740());
	func_200(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

void func_200(var uParam0, int iParam1)
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

void func_201(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_195(*uParam0);
	if (iParam1 < 1 || iParam1 > func_190(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_206(int iParam0)
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
	iVar0 = func_191(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_192(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_193(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_195(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_197(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_194(iParam0);
	if (iVar5 < 1 || iVar5 > func_190(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_207(int iParam0, int iParam1)
{
	if (unk_0x08BA6DD398CA197C(Global_101553.f_29685.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	func_9();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0)
{
	return func_198(func_199(), iParam0);
}

int func_210(int iParam0, int iParam1, int iParam2)
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

int func_211(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_101553.f_6543.f_919[iParam0];
}

bool func_212(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_214())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x08BA6DD398CA197C(Global_101553.f_29685, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x08BA6DD398CA197C(Global_101553.f_29685.f_1, iVar0);
	}
	return bVar1;
}

int func_213()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0x1F1B2B6E500380C5(uVar0, 0))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0x8FD32443A080784B(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_214()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					iVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&iVar0, 0);
					unk_0xDA842F3F06329D8C(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_215()
{
	if (unk_0x7C42343912622BB6() > 19 || unk_0x7C42343912622BB6() < 6)
	{
		return 0;
	}
	return 1;
}

void func_216()
{
	int iVar0;
	
	unk_0xE3D68BC1DAA3679B();
	unk_0x4E9F6A9CAA59E6BD();
	if (unk_0xFA597181B01136F0())
	{
		unk_0xB3FF3FBDAFD0ADCF(0);
		unk_0x8BDD755F07063522(0f);
	}
	if (unk_0x0D2E3F017CBCB8A8(uLocal_329))
	{
		unk_0x07553DAC96600443(uLocal_329, 0);
		unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
		unk_0x50C86ABC13A071F8(uLocal_329, 0);
		unk_0x3F6577E39389B251(0);
	}
	if (unk_0x0D2E3F017CBCB8A8(uLocal_330))
	{
		unk_0x50C86ABC13A071F8(uLocal_330, 0);
	}
	if (iLocal_49 >= 2)
	{
		unk_0xB95C16558F8BFC6A(iLocal_510);
	}
	unk_0x627D428B266FEDCA(1);
	if (iLocal_49 >= 1)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_285))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_285))
		{
			unk_0x705E4255B39314A7(iLocal_285, 251, 0);
			unk_0xD9AB5877E5CA2FF0(iLocal_285, 1);
			unk_0x77637031DE326F70(iLocal_285, 1);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_285, 0);
		}
		unk_0x0689C659BF2D3BF7(&iLocal_285);
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_286))
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_286))
		{
			unk_0xB43604F27F1EAE5F(iLocal_286, 1);
			unk_0x77637031DE326F70(iLocal_286, 1);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_286, 0);
		}
		unk_0x0689C659BF2D3BF7(&iLocal_286);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD3FACCDA4D66AEAD(uLocal_287[iVar0]))
		{
			if (func_166(uLocal_287[iVar0]))
			{
				unk_0xFF5CE2ECB4FBD4A8(uLocal_287[iVar0], 0);
			}
			unk_0x0689C659BF2D3BF7(&(uLocal_287[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_306))
	{
		unk_0xB032923150355520(iLocal_306, 1);
		unk_0x325A2C5B8927293C(iLocal_306, 1);
		unk_0x615DE34FC732CF11(&iLocal_306);
	}
	unk_0x841EA440AD1F0294(1);
	if (func_141())
	{
		func_228();
	}
	else
	{
		func_227(&Global_25244);
	}
	unk_0x157D8C80CC5E9591(1);
	func_217(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x78C587487CD40B92();
}

void func_217(int iParam0)
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
	if (func_141())
	{
		func_220(iParam0);
		unk_0xA57E42D9C41110A9(0, 0);
		Global_101544 = unk_0xDF658EB6CA91DFBC();
		func_219(30000);
		StringCopy(&cVar0, func_218(Global_101542, 1), 64);
		if (func_63(Global_101542) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101541, 64);
		}
		unk_0x6C6B822764300FD2(&cVar0, Global_101539, (unk_0xDF658EB6CA91DFBC() - Global_101540), 0);
	}
	else if (unk_0x08BA6DD398CA197C(Global_101549, 0) && Global_101553.f_29685.f_2 < 3)
	{
		unk_0x09C86C0C5CA26B1E(&Global_101549, 0);
	}
	func_227(&Global_25244);
	Global_101543 = 0;
	func_181(-1);
}

char* func_218(int iParam0, bool bParam1)
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

void func_219(int iParam0)
{
	Global_36326 = (unk_0xDF658EB6CA91DFBC() + iParam0);
}

void func_220(int iParam0)
{
	func_221(iParam0, 0, func_226(iParam0));
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_199();
	func_224(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_223(iParam0, &uVar0);
	Var1 = { func_222(&uVar0) };
}

struct<16> func_222(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_193(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_192(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_191(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_194(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_195(*uParam0), 64);
	return Var0;
}

void func_223(int iParam0, var uParam1)
{
	Global_101553.f_29685.f_43[iParam0] = *uParam1;
}

void func_224(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_195(*uParam0);
	iVar1 = func_197(*uParam0);
	iVar2 = func_194(*uParam0);
	iVar3 = func_193(*uParam0);
	iVar4 = func_192(*uParam0);
	iVar5 = func_191(*uParam0);
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
	iVar6 = func_190(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_190(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_225(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_205(uParam0, iParam1);
	func_204(uParam0, iParam2);
	func_203(uParam0, iParam3);
	func_201(uParam0, iParam5);
	func_202(uParam0, iParam4);
	func_200(uParam0, iParam6);
}

int func_226(int iParam0)
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

void func_227(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35737)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35736 = 0;
	Global_35738 = 0;
	Global_35775 = 15;
	Global_55813 = 0;
	Global_55814 = 0;
}

void func_228()
{
	func_219(30000);
	func_227(&Global_25244);
	Global_25232 = unk_0xDF658EB6CA91DFBC();
}

