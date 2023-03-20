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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30[1] = { 0 };
	var uLocal_32[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48[1] = { 0 };
	int iLocal_50[1] = { 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62[1] = { 0 };
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	struct<8> Local_69[13];
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[2] = { 0, 0 };
	int iLocal_204 = 0;
	int iLocal_205[2] = { 0, 0 };
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214[1] = { 0 };
	int iLocal_216[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_230[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_258[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	float fLocal_322 = 0f;
	char* sLocal_323 = NULL;
	var uLocal_324[4] = { 0, 0, 0, 0 };
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 4;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 4;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 4;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 4;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 4;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 4;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 8;
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
	var uLocal_402 = 16;
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
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 3;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
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
	Local_310 = { -2145.486f, 3018.294f, 31.81f };
	Local_313 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_322 = 330.4836f;
	unk_0x2DD582B35DC84774(1);
	if (unk_0x2C897F101BA20806(3))
	{
		func_242();
		func_240();
	}
	unk_0x6FFCDB4A75885B93("EXTRASUNNY", 30f);
	func_238();
	if (!func_237())
	{
		iLocal_27 = 0;
	}
	else
	{
		iLocal_27 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x0022A74B21F0C0B9("M_ThePortOfLSHeistPrep2B", 0);
		func_236();
		func_230();
		func_229();
		func_228();
		func_226();
		switch (iLocal_27)
		{
			case 0:
				func_225();
				break;
			
			case 1:
				func_220();
				break;
			
			case 2:
				func_202();
				break;
			
			case 3:
				func_194();
				break;
			
			case 4:
				func_110();
				break;
			
			case 5:
				func_28();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_27 != 6)
		{
			if (iLocal_196 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if ((iLocal_27 == 2 || iLocal_27 == 3) || iLocal_27 == 4)
	{
		if (iLocal_199 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_27 == 2)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (func_2(iLocal_47, unk_0xA16EC202D9D35357(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (func_2(iLocal_47, unk_0xA16EC202D9D35357(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((unk_0x5E8694417D361328(iLocal_47, 3, 30000) || unk_0x5E8694417D361328(iLocal_47, 1, 40000)) || unk_0x5E8694417D361328(iLocal_47, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}
}

float func_2(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_3(int iParam0)
{
	iLocal_28 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_174 = 0;
	}
}

void func_4()
{
	switch (iLocal_174)
	{
		case 0:
			unk_0xEDC11454B9658FE1();
			unk_0xFD1E0AEC770DAF2E(1);
			switch (iLocal_28)
			{
				case 0:
					break;
				
				case 1:
					sLocal_323 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_323 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_323 = "DP_FAIL3";
					break;
			}
			if (iLocal_28 == 0)
			{
				func_13(0);
			}
			else
			{
				func_11(sLocal_323);
			}
			iLocal_174 = 1;
			break;
		
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.164f, 2662.465f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.104f, 17.0938f, 40.2433f);
				}
				func_240();
			}
			break;
	}
}

void func_5(struct<3> Param0, float fParam3)
{
	func_6(&(Global_93673.f_2167), Param0, fParam3);
}

void func_6(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_7(struct<3> Param0, float fParam3)
{
	if (func_8(Global_68565, 0f, 0f, 0f, 0))
	{
		Global_68565 = { Param0 };
		Global_68568 = fParam3;
	}
}

bool func_8(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_9()
{
	if (Global_90042 == 7)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_90042 == 7 || Global_90042 == 8)
	{
		return 1;
	}
	return 0;
}

void func_11(char* sParam0)
{
	func_12(sParam0);
	func_13(0);
}

void func_12(char* sParam0)
{
	if (!unk_0x06771AF7795B3ECF(sParam0))
	{
		if (unk_0x77FAE22505910E89(sParam0) <= 16)
		{
			StringCopy(&Global_68557, sParam0, 16);
			StringCopy(&Global_68561, "", 16);
			if (unk_0xAC1A8CD5F370307D())
			{
				unk_0x273D4B19675FB905();
			}
		}
	}
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (Global_97439.f_7341 || func_27(0))
	{
		iVar0 = func_26();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0xD0E2BFCE93AE3ABD(&(Global_81199[iVar0 /*5*/].f_1), 5);
		Global_90078 = iParam0;
	}
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		unk_0x696FFAA2CE5E5DA8(5000);
	}
	iVar0 = Global_81199[iParam0 /*5*/];
	iVar1 = Global_68594.f_109[iVar0 /*4*/];
	func_18(iVar1, 1);
	unk_0x9E5A22D4B3358E89(unk_0x1788E93557766241());
	unk_0xCB995A2C169DF72E(unk_0x1788E93557766241());
	func_15(&(Global_97439.f_1729.f_539), iVar1);
	if (Global_84622 == Global_90079)
	{
		Global_97439.f_7341.f_328[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x889D01384B54BCE3(Global_81235[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0xD670C618E827153C(0);
		}
	}
	Global_97439.f_7341.f_328[iVar1 /*6*/].f_2++;
	Global_84622 = Global_90079;
	if (iParam0 == -1)
	{
		if (Global_97439.f_7341)
		{
		}
		return 0;
	}
	if (unk_0x889D01384B54BCE3(Global_81199[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(Global_81199[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_97439.f_16787[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_17(Global_97439.f_16787[iVar0], &Var2, &fVar5))
			{
				Global_97439.f_16787[iVar0] = 318;
				func_16(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87837[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_9 = 0f;
				Global_87837[iVar0 /*29*/].f_12 = 0f;
				Global_87837[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_10 = 0f;
				Global_87837[iVar0 /*29*/].f_13 = 0f;
				Global_87837[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_11 = 0f;
				Global_87837[iVar0 /*29*/].f_14 = 0f;
				Global_87837[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_26 = 0f;
				Global_87837[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_27 = 0f;
				Global_87837[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87837[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	*uParam0 = -15;
}

int func_17(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_17(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_17(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_18(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84432[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84432[iParam0 /*2*/] = 0;
	}
}

void func_19()
{
	Global_90077 = 1;
	if (unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1))
	{
		if (unk_0x06771AF7795B3ECF(&Global_68557))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_68557, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68557, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68557, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68561, "", 16);
		}
		Global_90077 = 0;
	}
	else if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x06771AF7795B3ECF(&Global_68557))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_68557, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68557, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68557, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68561, "", 16);
		}
		Global_90077 = 0;
		unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 25);
	}
}

int func_20()
{
	func_21();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_25(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_24(unk_0xA16EC202D9D35357());
			if (func_23(iVar0) && (!func_22(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_23(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_22(int iParam0)
{
	return Global_34915 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x889D01384B54BCE3(Global_81199[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_27(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_28()
{
	func_102();
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			unk_0x3CC3106305C40A28(iLocal_47, 0);
		}
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
		}
		if (unk_0xF4C685E933068D23())
		{
			unk_0x722B7ADE7AACF079(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1));
		}
		if (!unk_0x83B393DE31BAC8F0())
		{
			unk_0x5FE2A83120E8127F(800);
		}
		unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					unk_0x3CB6843C8C4A8A21(unk_0xA16EC202D9D35357(), iLocal_47, 0);
				}
			}
		}
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 1))
				{
					unk_0x048CB31CFEFF3599(iLocal_47, 0, 0);
					unk_0x048CB31CFEFF3599(iLocal_47, 1, 0);
					unk_0x542B8BF5C21F2470(iLocal_47, 2);
					unk_0xF819510E1E1025C4(iLocal_47, 0);
					unk_0x3CC3106305C40A28(iLocal_47, 1);
					func_29();
				}
			}
		}
	}
}

void func_29()
{
	func_31(0, 0);
	func_30(1, 1);
	func_240();
}

void func_30(int iParam0, int iParam1)
{
	Global_68593 = iParam1;
	if (Global_54752)
	{
		return;
	}
	if (Global_54779)
	{
		Global_54779 = 0;
		return;
	}
	if (unk_0x16CDA1894CFE0781(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_54752)
		{
		}
		Global_54778 = iParam0;
		Global_54752 = 1;
		Global_54763 = 1;
	}
}

void func_31(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54760)
	{
		Global_54760 = iParam1;
	}
	if (bParam0)
	{
		if ((func_27(0) && Global_68571.f_1 == 1) && func_32(Global_68571))
		{
		}
		else
		{
			Global_54758 = 1;
		}
	}
	if (Global_97439.f_7341 || func_27(0))
	{
		iVar0 = func_26();
		iVar1 = Global_81199[iVar0 /*5*/];
		uVar2 = Global_68594.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97439.f_7341)
			{
			}
			return;
		}
		if (unk_0x889D01384B54BCE3(Global_81199[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x889D01384B54BCE3(Global_81199[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xD0E2BFCE93AE3ABD(&(Global_81199[iVar0 /*5*/].f_1), 4);
		unk_0xD0E2BFCE93AE3ABD(&Global_68573, 1);
		Global_68589 = uVar2;
		Global_68590 = unk_0x09560C7DE2A384BD();
	}
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_33()
{
	func_100();
	func_99();
	func_36();
	if (!func_35() || func_27(0))
	{
		func_34();
	}
	unk_0x20D6E0EA145DF751(0f);
}

void func_34()
{
	switch (iLocal_27)
	{
		case 2:
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			if (unk_0x538DF9E5B1DF01EB(iLocal_54))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_54, 0))
				{
					unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iLocal_54, -1);
				}
			}
			else
			{
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -1565.084f, 2780.813f, 16.4022f, 1, 0, 0, 1);
				unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 53.6086f);
			}
			break;
		
		case 3:
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			if (func_20() == 2)
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_47))
				{
					if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
					{
						if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
						{
							unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iLocal_47, -1);
						}
						unk_0x3CC3106305C40A28(iLocal_47, 0);
					}
				}
			}
			break;
		
		case 4:
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			if (func_20() == 2)
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_47))
				{
					if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
					{
						if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
						{
							unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iLocal_47, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			if (func_20() == 2)
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_47))
				{
					if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
					{
						if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
						{
							unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iLocal_47, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_35()
{
	return unk_0x889D01384B54BCE3(Global_90042.f_20, 13);
}

void func_36()
{
	switch (iLocal_27)
	{
		case 2:
			unk_0x84710FE7666EBF7B(-1588.1f, 2794.9f, 17.2f, 20f, 1, 0, 0, 0);
			func_92(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			unk_0x035F3FE2F394644A(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			unk_0x939DA7EBCC6588FF(joaat("cargobob"));
			unk_0x939DA7EBCC6588FF(joaat("s_m_y_marine_01"));
			unk_0x939DA7EBCC6588FF(joaat("s_m_m_pilot_02"));
			unk_0x939DA7EBCC6588FF(joaat("buzzard"));
			while (((!unk_0x5494F37F35C1D7D7(joaat("cargobob")) || !unk_0x5494F37F35C1D7D7(joaat("s_m_y_marine_01"))) || !unk_0x5494F37F35C1D7D7(joaat("s_m_m_pilot_02"))) || !unk_0x5494F37F35C1D7D7(joaat("buzzard")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (func_237())
			{
				if (func_91())
				{
					if (!unk_0x38B61EB14C5FBA9E(func_90()) && !unk_0xEE41D6C2DA208994(func_90()))
					{
						func_88();
						while (!func_87())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
			iLocal_200 = 0;
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				iLocal_274[iLocal_175] = 0;
				iLocal_175++;
			}
			if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				unk_0x84710FE7666EBF7B(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = unk_0x9BB6F54E415071A1(joaat("cargobob"), Local_310, fLocal_322, 1, 1);
				unk_0xBEEA9BAE37C263AF(iLocal_47, 0);
				unk_0x3CC3106305C40A28(iLocal_47, 1);
				unk_0xDD56EF930C7A5863(iLocal_47, 1);
				unk_0xEA054561294AEC10(joaat("cargobob"));
				unk_0x32DC163A33A4AB6D(joaat("cargobob"), 1);
				unk_0xF6F04B5324C9DA32(iLocal_47, 1);
				unk_0xA3171FC009D32621(iLocal_47, 0);
				func_86(iLocal_47, 0);
			}
			func_83();
			if (!unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				if (unk_0x5494F37F35C1D7D7(joaat("buzzard")))
				{
					unk_0x84710FE7666EBF7B(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_48[0] = unk_0x9BB6F54E415071A1(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					unk_0xDD56EF930C7A5863(iLocal_48[0], 1);
					unk_0xBEEA9BAE37C263AF(iLocal_48[0], 1);
					unk_0xAC894C93914464C2(iLocal_48[0]);
					unk_0xA5F41F91908B2FCB(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0xEA054561294AEC10(joaat("buzzard"));
					unk_0xF819510E1E1025C4(iLocal_48[0], 0);
				}
			}
			if (func_237())
			{
				if (!unk_0x538DF9E5B1DF01EB(iLocal_54))
				{
					if (func_91())
					{
						if (!unk_0x38B61EB14C5FBA9E(func_90()) && !unk_0xEE41D6C2DA208994(func_90()))
						{
							iLocal_54 = func_37(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							unk_0xEA054561294AEC10(func_90());
							unk_0xE6E4CD7E9A3DA71E(iLocal_54, 1);
							unk_0xF6F04B5324C9DA32(iLocal_54, 1);
						}
					}
				}
			}
			unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			unk_0x1413BE75956BF858(1);
			break;
		
		case 3:
			unk_0x942B823036A9B2AE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			unk_0x4EDE34FBADD967A6(1500);
			unk_0x939DA7EBCC6588FF(joaat("cargobob"));
			unk_0x939DA7EBCC6588FF(joaat("buzzard"));
			unk_0x939DA7EBCC6588FF(joaat("s_m_y_marine_01"));
			unk_0x939DA7EBCC6588FF(joaat("s_m_m_pilot_02"));
			while (((!unk_0x5494F37F35C1D7D7(joaat("cargobob")) || !unk_0x5494F37F35C1D7D7(joaat("buzzard"))) || !unk_0x5494F37F35C1D7D7(joaat("s_m_y_marine_01"))) || !unk_0x5494F37F35C1D7D7(joaat("s_m_m_pilot_02")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_200 = 0;
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				iLocal_274[iLocal_175] = 0;
				iLocal_175++;
			}
			if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				unk_0x84710FE7666EBF7B(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = unk_0x9BB6F54E415071A1(joaat("cargobob"), Local_310, fLocal_322, 1, 1);
				unk_0x3CC3106305C40A28(iLocal_47, 1);
				unk_0xDD56EF930C7A5863(iLocal_47, 1);
				unk_0xEBE442695B64536B(iLocal_47);
				unk_0xEA054561294AEC10(joaat("cargobob"));
				unk_0x32DC163A33A4AB6D(joaat("cargobob"), 1);
				unk_0xF6F04B5324C9DA32(iLocal_47, 1);
				unk_0xA3171FC009D32621(iLocal_47, 0);
				func_86(iLocal_47, 0);
			}
			func_83();
			if (!unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				if (unk_0x5494F37F35C1D7D7(joaat("buzzard")))
				{
					unk_0x84710FE7666EBF7B(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_48[0] = unk_0x9BB6F54E415071A1(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					unk_0xDD56EF930C7A5863(iLocal_48[0], 1);
					unk_0xBEEA9BAE37C263AF(iLocal_48[0], 1);
					unk_0xAC894C93914464C2(iLocal_48[0]);
					unk_0xA5F41F91908B2FCB(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0xEA054561294AEC10(joaat("buzzard"));
					unk_0xF819510E1E1025C4(iLocal_48[0], 0);
				}
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
			{
				uLocal_30[0] = unk_0x793482A351850A4F(iLocal_48[0], 26, joaat("s_m_m_pilot_02"), -1, 1, 1);
				unk_0xEA054561294AEC10(joaat("s_m_m_pilot_02"));
			}
			else if (!unk_0xAD203DB71ADF6E57(uLocal_30[0], iLocal_48[0], 0))
			{
				unk_0x3195B1192FB0EA3D(uLocal_30[0], iLocal_48[0], -1);
			}
			unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), -1, 0, 1);
			unk_0xFCF458F91A7A3062("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
			unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			unk_0x939DA7EBCC6588FF(joaat("cargobob"));
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			while (!unk_0x5494F37F35C1D7D7(joaat("cargobob")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				unk_0x84710FE7666EBF7B(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = unk_0x9BB6F54E415071A1(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 1);
				unk_0xDD56EF930C7A5863(iLocal_47, 1);
				unk_0xEA054561294AEC10(joaat("cargobob"));
				unk_0x32DC163A33A4AB6D(joaat("cargobob"), 1);
				unk_0xA3171FC009D32621(iLocal_47, 0);
				unk_0xF6F04B5324C9DA32(iLocal_47, 1);
				unk_0x6EBB9B0E214CCF0F(iLocal_47, 1, 1);
				unk_0xEBE442695B64536B(iLocal_47);
				unk_0x213AEEC6A495123F(iLocal_47, 30f);
				func_86(iLocal_47, 0);
			}
			unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), -1, 0, 1);
			break;
		
		case 5:
			unk_0x939DA7EBCC6588FF(joaat("cargobob"));
			unk_0x939DA7EBCC6588FF(joaat("sandking"));
			while (!unk_0x5494F37F35C1D7D7(joaat("cargobob")) || !unk_0x5494F37F35C1D7D7(joaat("sandking")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				unk_0x84710FE7666EBF7B(1749.61f, 3272.95f, 40.1533f, 5f, 1, 0, 0, 0);
				iLocal_47 = unk_0x9BB6F54E415071A1(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 1, 1);
				unk_0xDD56EF930C7A5863(iLocal_47, 1);
				unk_0xEA054561294AEC10(joaat("cargobob"));
				unk_0xF6F04B5324C9DA32(iLocal_47, 1);
				unk_0xA3171FC009D32621(iLocal_47, 0);
				func_86(iLocal_47, 0);
			}
			if (!unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
			{
				iLocal_50[0] = unk_0x9BB6F54E415071A1(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
				unk_0x3CC3106305C40A28(iLocal_50[0], 1);
				unk_0xEA054561294AEC10(joaat("sandking"));
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
			{
				iLocal_213 = 1;
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_93673.f_2167), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_82(uParam0))
	{
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (unk_0x801B4FC214DEDCB7(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_81(uParam0))
		{
			unk_0x84710FE7666EBF7B(Param1, 5f, 1, 0, 0, 0);
			func_80(Param1, 5f, 0);
			iVar0 = unk_0x9BB6F54E415071A1(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (unk_0x538DF9E5B1DF01EB(iVar0))
			{
				Var1 = { unk_0xBF8499F46AD9093A(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xFE2DEA78E1B4FDB9(iVar0, Param1, 0, 0, 1);
				}
				func_75(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD18BE100522E5F15(uParam0->f_12.f_42) || unk_0x9651110A188939C8(uParam0->f_12.f_42))
				{
					if (!unk_0x23A588F7C601DE08(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xAC894C93914464C2(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(iVar0)))
						{
							func_74(uParam0->f_11, 1);
						}
						else if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iVar0)))
						{
							func_74(uParam0->f_11, 2);
						}
					}
					unk_0x3984DED2762CADC3(iVar0, 0);
					unk_0xBE2BFEEF84137DF0(iVar0, 0);
					unk_0xE6E4CD7E9A3DA71E(iVar0, 1);
					func_73(iVar0, uParam0->f_11);
				}
				else if ((!func_70(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x9BA82E09A986BA4B(unk_0x7E5A426328F6E635(), "startup_positioning"))
				{
					iVar8 = func_69(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_62(iVar8);
					}
				}
				if (((Global_90042 != 13 && Global_90042 != 10) && Global_90042 != 11) && Global_90042 != 12)
				{
					if (unk_0xB793F1A0B6CC4AE1(&(Global_90042.f_3)) == Global_68182)
					{
						if (uParam0->f_12.f_42 == Global_97439.f_18371.f_69[21 /*54*/].f_42)
						{
							func_59(24, 0);
							func_62(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0xEA054561294AEC10(uParam0->f_12.f_42);
				Var1 = { unk_0xBF8499F46AD9093A(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_44(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
		if (!unk_0x538DF9E5B1DF01EB(iVar0))
		{
			iVar0 = unk_0x728F548A96B6E588(iParam0, -1);
		}
		if (unk_0x538DF9E5B1DF01EB(iVar0) && !unk_0x2DE0B96E966FD817(iVar0))
		{
			if (unk_0xA609E58449080951(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97439.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97439.f_18371.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97439.f_18371.f_4798 = iParam1;
	Global_68123 = iParam0;
	Global_97439.f_18371.f_4796 = 1;
	func_40(iParam0, &(Global_97439.f_18371.f_4742));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_42 = unk_0xA609E58449080951(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2E0CBF2F000307B(iParam0), 16);
		*uParam1 = unk_0x6E1ADA6FBEC091EA(iParam0);
		unk_0xABDA00D6C410A603(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xACCED888DA80AA1F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x27BCAE1F10710BEC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x4EC2A3086F931215(iParam0);
		uParam1->f_43 = unk_0x960D1BE7E376200B(iParam0);
		uParam1->f_45 = unk_0xD9197C47F38990D8(iParam0);
		uParam1->f_46 = unk_0x5812ABBDAA06BE4A(iParam0);
		unk_0x59A2942E7145EFA4(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xB49AB41D753BA09F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x5792E99920C570FD(iParam0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 28);
		}
		if (unk_0x5792E99920C570FD(iParam0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 29);
		}
		if (unk_0x5792E99920C570FD(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 30);
		}
		if (unk_0x5792E99920C570FD(iParam0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			uParam1->f_44 = unk_0xBE52DF6606B79B2D(iParam0);
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (unk_0xC9F64E53159B529B(iParam0))
			{
				switch (unk_0xFA2BD89016FF31B2(iParam0))
				{
					case 2:
					case 0:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x9610401E9E4D05A2(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 9);
		}
		if (unk_0xA83FD3D7530A5908(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 10);
		}
		if (unk_0x7CFBF44D83E4C08F(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 13);
			unk_0x37565B4952524D39(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x61BB59E7B67E3575(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8A627BCE7B3FB070(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 11);
		}
		if (unk_0x53D28141CF743B83(iParam0, "IgnoredByQuickSave") && unk_0x258D2FF40E1E3219(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xA71DB4975987C018(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x9602B91EC545B1EA(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_44(int iParam0)
{
	if ((((((((((!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) != 145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_45(unk_0xA609E58449080951(iParam0)))
	{
		if (func_54(iParam0))
		{
		}
		if (func_54(iParam0))
		{
		}
		if (func_57(iParam0, 0, 0))
		{
		}
		if (func_57(iParam0, 1, 0))
		{
		}
		if (func_57(iParam0, 2, 0))
		{
		}
		if (func_56(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (((unk_0xD18BE100522E5F15(iParam0) || unk_0xEE41D6C2DA208994(iParam0)) || unk_0x38B61EB14C5FBA9E(iParam0)) || unk_0xEEE07492AE30B7BC(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD3B644BC9C4BCCE4(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("buffalo3") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("gauntlet2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_51())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1D6BD62DDF942BDF())
		{
			if (unk_0x12A9DA9E48BF64B0(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA90142E282A42D80(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_50() && !func_49()) && !func_48()) && !func_47()) && !func_51())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9F979F481F18EB48() || unk_0xF6BAF9F0C2863FFE()) || unk_0x660675ADB09E441F())
		{
		}
		else if (!func_48())
		{
			return 0;
		}
	}
	return 1;
}

int func_47()
{
	return 0;
}

int func_48()
{
	return 1;
}

int func_49()
{
	return 1;
}

int func_50()
{
	if (unk_0xD5883629B43B6F20(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	uVar1 = unk_0xC2E0CBF2F000307B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9BA82E09A986BA4B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87808[iVar0]))
		{
			if (Global_87808[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (Global_87778[iVar0] == iParam0 && unk_0xA609E58449080951(Global_87778[iVar0]) == unk_0xA609E58449080951(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[24]))
	{
		if (iParam0 == Global_67218.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67218.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 145;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				return Global_87788[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_57(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_58(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_59(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_61(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_67218[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_18371[iParam0]), iParam1);
	}
}

bool func_61(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x889D01384B54BCE3(Global_97439.f_18371[iParam0], iParam1);
}

void func_62(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xECFECDAD51A6184F(Global_67218.f_139[iParam0], 0))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_67218.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x7B9576B4E099FB1F(Global_67218.f_139[iParam0], 1, 1);
				unk_0x2F2948A2506AA404(&(Global_67218.f_139[iParam0]));
			}
		}
		Global_67218[iParam0] = 1;
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_61(iParam0, 0)) && Global_68127.f_42 == 0) && Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] != 0) && Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] > 3) && (!func_64(0, Global_67218.f_555[0 /*21*/].f_12) || !func_64(1, Global_67218.f_555[0 /*21*/].f_12)))
			{
				func_63(&(Global_97439.f_18371.f_69[Global_67218.f_555[0 /*21*/].f_14 /*54*/]), &Global_68127);
				Global_68181 = Global_97439.f_18371.f_4799;
			}
			func_59(iParam0, 0);
		}
	}
}

void func_63(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_35 = { uParam0->f_35 };
	uParam1->f_38 = uParam0->f_38;
	uParam1->f_39 = uParam0->f_39;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_53 = uParam0->f_53;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_50 = uParam0->f_50;
	uParam1->f_51 = uParam0->f_51;
	uParam1->f_52 = uParam0->f_52;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_65(&(Global_97439.f_18371.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_46(Global_97439.f_18371.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_65(var uParam0)
{
	return *uParam0;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 19);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 19);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 20);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 14);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 28);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 7);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 27);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 24);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 11);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 10);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 11);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 9);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 9);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 22);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 13);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 2);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 0);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 21);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 30);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 23);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x889D01384B54BCE3(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97439.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_8(Global_97439.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97439.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97439.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x889D01384B54BCE3(uParam0->f_9, 19))
	{
		if (!func_8(Global_97439.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97439.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x889D01384B54BCE3(uParam0->f_9, 20))
	{
		if (!func_8(Global_97439.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_97439.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97439.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_23(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_68(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_68(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_64 = 1;
	uParam1->f_60 = 255;
	uParam1->f_61 = 255;
	uParam1->f_62 = 255;
	uParam1->f_73 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97439.f_7341.f_99.f_58[128] && !Global_97439.f_7341.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_97439.f_7341.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_97439.f_7341.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]) && !unk_0xE44A580B551C3645(Global_67218.f_484[iVar0])) && unk_0xECFECDAD51A6184F(Global_67218.f_484[iVar0], 0))
		{
			unk_0xABDA00D6C410A603(iParam0, &iVar1, &iVar2);
			unk_0xABDA00D6C410A603(Global_67218.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xA609E58449080951(iParam0) == unk_0xA609E58449080951(Global_67218.f_484[iVar0]) && unk_0x960D1BE7E376200B(iParam0) == unk_0x960D1BE7E376200B(Global_67218.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_70(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_72(iParam0, Global_67218.f_139[38], 0))
			{
				func_62(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_72(iParam0, Global_67218.f_139[43], 1))
			{
				func_62(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x0CEAB87805B17F2E(unk_0xA16EC202D9D35357(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_72(iParam0, uVar1[iVar6], 1) && func_71(unk_0xBF8499F46AD9093A(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_8(Param1, 0f, 0f, 0f, 0)) || unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam0, 1), unk_0xBF8499F46AD9093A(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x2F2948A2506AA404(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[14]) && unk_0xECFECDAD51A6184F(iParam0, 0)) && unk_0xECFECDAD51A6184F(Global_67218.f_484[14], 0))
			{
				if (unk_0xA609E58449080951(Global_67218.f_484[14]) == joaat("luxor2") && unk_0x960D1BE7E376200B(iParam0) == unk_0x960D1BE7E376200B(Global_67218.f_484[14]))
				{
					func_62(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x538DF9E5B1DF01EB(Global_67218.f_484[20]) && unk_0xECFECDAD51A6184F(iParam0, 0)) && unk_0xECFECDAD51A6184F(Global_67218.f_484[20], 0))
			{
				if (unk_0xA609E58449080951(Global_67218.f_484[20]) == joaat("swift2") && unk_0x960D1BE7E376200B(iParam0) == unk_0x960D1BE7E376200B(Global_67218.f_484[20]))
				{
					func_62(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3545D662A0A53653((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x538DF9E5B1DF01EB(iParam1) && !unk_0xE44A580B551C3645(iParam1)) && unk_0xECFECDAD51A6184F(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xABDA00D6C410A603(iParam0, &iVar0, &iVar1);
			unk_0xABDA00D6C410A603(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			Global_87778[iVar0] = iParam0;
			Global_87788[iVar0] = iParam1;
			Global_87798[iVar0] = unk_0xA609E58449080951(iParam0);
			if (unk_0xD548A98EDA33C15A(Global_87798[iVar0]))
			{
				Global_87826[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87826[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (iParam0 == 145 || Global_87788[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xA609E58449080951(Global_87778[iVar0]) == func_67(iParam0, iParam1))
				{
					if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Global_87778[iVar0], 0))
					{
						unk_0x7B9576B4E099FB1F(Global_87778[iVar0], 0, 1);
						unk_0x2F2948A2506AA404(&(Global_87778[iVar0]));
						Global_87788[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (unk_0xB793F1A0B6CC4AE1(&(uParam1->f_1)) != 0)
		{
			unk_0x3F5ED6FBAE13F4E5(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x858A61D4AC50886E())
		{
			unk_0x7B4ABEFECFB41BF0(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 13))
		{
			unk_0xA9A63A0DDA4F893E(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x9134A07DDBC346FD(iParam0);
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 12))
		{
			unk_0xDE0AAE7D4266A94C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x04E74BD3A65CA82D(iParam0);
		}
		unk_0xEEE37CF92B9966DA(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x780A5DADA769490D(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x889D01384B54BCE3(uParam1->f_53, 15) || func_79(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_78())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0xF041FAE99959B5AB(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0xA9AE442E508E12E3(iParam0, 0);
		}
		else
		{
			unk_0xA9AE442E508E12E3(iParam0, 0);
			unk_0xA9AE442E508E12E3(iParam0, uParam1->f_41);
		}
		unk_0xB4226393A1696ACE(iParam0, !unk_0x889D01384B54BCE3(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0x542B8BF5C21F2470(iParam0, uParam1->f_46);
		}
		unk_0x5AE459C3CC1CC113(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0xC1E623D5EDF6EECE(iParam0, 2, unk_0x889D01384B54BCE3(uParam1->f_53, 28));
		unk_0xC1E623D5EDF6EECE(iParam0, 3, unk_0x889D01384B54BCE3(uParam1->f_53, 29));
		unk_0xC1E623D5EDF6EECE(iParam0, 0, unk_0x889D01384B54BCE3(uParam1->f_53, 30));
		unk_0xC1E623D5EDF6EECE(iParam0, 1, unk_0x889D01384B54BCE3(uParam1->f_53, 31));
		unk_0x4852ECC2C24A1A6C(iParam0, unk_0x889D01384B54BCE3(uParam1->f_53, 10));
		if (unk_0x02733F26A0867544(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x4DD872D780AF5EF7(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(iParam0)))
			{
				if (unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x3C2E3554D673CD03(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x3C2E3554D673CD03(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x8868EF5119692D77(iParam0, 1);
			}
			else
			{
				unk_0xE9E2E2606CB0F65A(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0x38B61EB14C5FBA9E(uParam1->f_42) && !unk_0xD18BE100522E5F15(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x889D01384B54BCE3(uParam1->f_53, func_41(iVar0 + 1)))
				{
					if (!unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
					{
						unk_0xA4FABA09D10C713D(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
				{
					unk_0xA4FABA09D10C713D(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (!unk_0x889D01384B54BCE3(uParam1->f_53, 23))
			{
				if (unk_0x889D01384B54BCE3(uParam1->f_53, 22))
				{
					unk_0x4083C1A376E65B51(iParam0, 2);
				}
				else
				{
					unk_0x4083C1A376E65B51(iParam0, 3);
				}
			}
			else
			{
				unk_0x4083C1A376E65B51(iParam0, 4);
			}
		}
		if (unk_0x889D01384B54BCE3(uParam1->f_53, 27))
		{
			unk_0x4F007328F719079F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x4F007328F719079F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_76(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x975833792D47DC73(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xE78BBCD9C6B5C963(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x9602B91EC545B1EA(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xE4E979C6DBF3CBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x85AB5576B5457AED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_77(*iParam0))
	{
		unk_0xF6F04B5324C9DA32(*iParam0, 1);
		unk_0xE6E4CD7E9A3DA71E(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0)) && unk_0x1496C675F4DE04ED(iParam0) > 0)
	{
		unk_0x975833792D47DC73(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x9602B91EC545B1EA(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x258875C41DB339AB(iParam0, iVar1, unk_0x9602B91EC545B1EA(iParam0, iVar1)), 16);
				iVar2 = unk_0xB793F1A0B6CC4AE1(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xB793F1A0B6CC4AE1("MNU_CAGE") || iVar2 == unk_0xB793F1A0B6CC4AE1("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_78()
{
	return unk_0xD5883629B43B6F20(joaat("mpindependence"));
}

int func_79(int iParam0)
{
	var uVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (unk_0x67BE6A47B59A2390("MPBitset", 3))
			{
				if (unk_0x53D28141CF743B83(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xD0997DAAAB203234(iParam0, "MPBitset");
				}
				return unk_0x889D01384B54BCE3(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_80(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_66(&(Global_67218.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x4970185D4CC64616(Param0, Global_67218.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_62(iVar0);
			}
		}
		iVar0++;
	}
}

int func_81(var uParam0)
{
	if (func_82(uParam0))
	{
		if (unk_0x5494F37F35C1D7D7(uParam0->f_12.f_42))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_82(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

void func_83()
{
	if (iLocal_200 == 0)
	{
		if (unk_0x5494F37F35C1D7D7(joaat("s_m_y_marine_01")) && unk_0x5494F37F35C1D7D7(joaat("s_m_m_pilot_02")))
		{
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[0]))
			{
				uLocal_32[0] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[1]))
			{
				uLocal_32[1] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[2]))
			{
				uLocal_32[2] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[3]))
			{
				uLocal_32[3] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[4]))
			{
				uLocal_32[4] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[5]))
			{
				uLocal_32[5] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[6]))
			{
				uLocal_32[6] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 1, 1);
			}
			if (iLocal_27 != 3)
			{
				if (!unk_0x538DF9E5B1DF01EB(uLocal_32[7]))
				{
					uLocal_32[7] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 1, 1);
				}
				if (!unk_0x538DF9E5B1DF01EB(uLocal_32[8]))
				{
					uLocal_32[8] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 1, 1);
				}
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[9]))
			{
				uLocal_32[9] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[10]))
			{
				uLocal_32[10] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[11]))
			{
				uLocal_32[11] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_32[12]))
			{
				uLocal_32[12] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 1, 1);
			}
			if (!unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
			{
				uLocal_30[0] = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 1, 1);
				unk_0xD8C28445617D0902(uLocal_30[0], 0, 2, 0, 0);
				unk_0x42544C0CC4949BD5(uLocal_30[0], 8, 0, 0, 0);
				unk_0xDD56EF930C7A5863(uLocal_30[0], 1);
				unk_0x39272B2594E03395(uLocal_30[0], joaat("weapon_assaultrifle"), 2000, 1, 1);
				unk_0xA9465591B42213AE(uLocal_30[0], iLocal_59);
				unk_0xE97E86766A24F0FA(uLocal_30[0], 0);
				unk_0x2C4E82CF88213975(uLocal_30[0], 1);
				func_85(uLocal_30[0], 595);
				func_84(uLocal_30[0], 0);
			}
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				if (iLocal_274[iLocal_175] == 0)
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_175]))
					{
						unk_0xDD56EF930C7A5863(uLocal_32[iLocal_175], 1);
						unk_0x39272B2594E03395(uLocal_32[iLocal_175], joaat("weapon_assaultrifle"), 2000, 1, 1);
						unk_0xA9465591B42213AE(uLocal_32[iLocal_175], iLocal_59);
						unk_0xE97E86766A24F0FA(uLocal_32[iLocal_175], 10);
						func_85(uLocal_32[iLocal_175], 595);
						func_84(uLocal_32[iLocal_175], 0);
						unk_0x2C4E82CF88213975(uLocal_32[iLocal_175], 1);
						iLocal_274[iLocal_175] = 1;
					}
				}
				iLocal_175++;
			}
			unk_0xEA054561294AEC10(joaat("s_m_y_marine_01"));
			unk_0xEA054561294AEC10(joaat("s_m_m_pilot_02"));
			iLocal_200 = 1;
		}
	}
}

void func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_54788[iVar0 /*2*/] != 0)
			{
				if (Global_54788[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_54787)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_54788[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_54788[iVar1 /*2*/] = iParam0;
	Global_54788[iVar1 /*2*/].f_1 = 7;
	Global_54787++;
}

void func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_67006[iVar0 /*2*/] == 0)
		{
			Global_67006[iVar0 /*2*/] = uParam0;
			Global_67006[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_67039)
			{
				Global_67039++;
			}
			return;
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)
{
	Global_90042.f_22[iParam1] = iParam0;
}

bool func_87()
{
	return func_81(&(Global_93673.f_2167));
}

void func_88()
{
	func_89(&(Global_93673.f_2167));
}

void func_89(var uParam0)
{
	if (func_82(uParam0))
	{
		unk_0x939DA7EBCC6588FF(uParam0->f_12.f_42);
	}
}

var func_90()
{
	return Global_93673.f_2167.f_12.f_42;
}

bool func_91()
{
	return func_82(&(Global_93673.f_2167));
}

void func_92(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_93(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_93(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xB49BA83A5C224F40();
	if (unk_0x538DF9E5B1DF01EB(iVar0))
	{
		if (!unk_0x22349EC06EA5B08B(iVar0))
		{
			unk_0x7B9576B4E099FB1F(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (bParam18)
			{
				func_98(iVar0);
			}
			if (unk_0x0852C405AF94F670(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xBF8499F46AD9093A(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_95(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				if (unk_0x2C53E9EE23994172(iVar0, joaat("taxi")))
				{
					if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357() && unk_0xD8A521688BDBE867(iVar0, -1) != 0)
					{
						if (unk_0x4970185D4CC64616(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xBF8499F46AD9093A(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_57(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_94(Param11))
				{
					if (unk_0xECFECDAD51A6184F(iVar0, 0))
					{
						iVar13 = unk_0xA609E58449080951(iVar0);
						unk_0x3977B515F853C479(iVar0, &Var4, &Var7);
						if (unk_0x38B61EB14C5FBA9E(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xECFECDAD51A6184F(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x597CB55BA0825820(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x34639238667C4381(iVar0, fParam10);
						unk_0x6C43BF7625967266(iVar0, Param7, 1, 0, 0, 1);
						unk_0xAC894C93914464C2(iVar0);
						if (bParam17)
						{
							unk_0x6EBB9B0E214CCF0F(iVar0, 0, 1);
							unk_0xA5CC79C83111E834(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x22349EC06EA5B08B(iVar0) || !unk_0xD8233CB95CB48A7C(iVar0, 1))
						{
							unk_0x7B9576B4E099FB1F(iVar0, 1, 1);
						}
						if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
						{
							unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x2F2948A2506AA404(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xB61461734AFCC349(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (unk_0x22349EC06EA5B08B(iVar0))
					{
						unk_0x3A3C5A6572B3C611(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x22349EC06EA5B08B(iVar0))
			{
				unk_0x7B9576B4E099FB1F(iVar0, 1, 0);
			}
			iVar14 = unk_0xD8A521688BDBE867(iVar0, -1);
			if (unk_0x538DF9E5B1DF01EB(iVar14) && !unk_0x2DE0B96E966FD817(iVar14))
			{
				unk_0x6C43BF7625967266(iVar14, unk_0xBF8499F46AD9093A(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x4350E1B7440A3560(unk_0xA609E58449080951(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xD8A521688BDBE867(iVar0, 0);
				if (unk_0x538DF9E5B1DF01EB(iVar14) && !unk_0x2DE0B96E966FD817(iVar14))
				{
					unk_0x6C43BF7625967266(iVar14, unk_0xBF8499F46AD9093A(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xD8A521688BDBE867(iVar0, 1);
				if (unk_0x538DF9E5B1DF01EB(iVar14) && !unk_0x2DE0B96E966FD817(iVar14))
				{
					unk_0x6C43BF7625967266(iVar14, unk_0xBF8499F46AD9093A(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xD8A521688BDBE867(iVar0, 2);
				if (unk_0x538DF9E5B1DF01EB(iVar14) && !unk_0x2DE0B96E966FD817(iVar14))
				{
					unk_0x6C43BF7625967266(iVar14, unk_0xBF8499F46AD9093A(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x2F2948A2506AA404(&iVar0);
		}
	}
}

int func_94(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_97(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xA783C6007920169C(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xA783C6007920169C(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xA783C6007920169C(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xA783C6007920169C(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_96(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_96(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_96(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_96(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_96(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_96(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_96(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_96(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_96(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_96(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_96(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_96(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_96(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_96(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_96(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_96(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_97(struct<3> Param0)
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

void func_98(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (unk_0x1356C15C4E3843BF(iParam0) <= 200f)
			{
				unk_0xBCA53A1278653F4C(iParam0, 500f);
			}
			if (unk_0xA3FAF54789FAEF68(iParam0) <= 700f)
			{
				unk_0xBCA53A1278653F4C(iParam0, 900f);
			}
			if (unk_0x6360D2FA3AD62AD1(iParam0) < 200)
			{
				unk_0xBCA53A1278653F4C(iParam0, 500f);
			}
		}
	}
}

void func_99()
{
	if (!func_35())
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), 1738.131f, 3283.38f, 40.1261f, 1, 0, 0, 1);
			unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 25.3545f);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
	{
		unk_0x51A89CCC8A5317D0(&(uLocal_30[0]));
	}
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_175]))
		{
			unk_0x51A89CCC8A5317D0(&(uLocal_32[iLocal_175]));
		}
		iLocal_175++;
	}
	if (func_20() == 2)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_324[0]))
		{
			unk_0x51A89CCC8A5317D0(&(uLocal_324[0]));
		}
	}
	if (func_20() == 0)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_324[2]))
		{
			unk_0x51A89CCC8A5317D0(&(uLocal_324[2]));
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
	{
		unk_0x9122271AF278554B(iLocal_48[0], 0);
	}
	unk_0x7C0AE4B10FB5A304("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (unk_0x4CBFDAD06D630F7C("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0x124843CE93F39C27("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x4CBFDAD06D630F7C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0x124843CE93F39C27("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_46))
	{
		unk_0x2F2948A2506AA404(&iLocal_46);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_54))
	{
		unk_0x2F2948A2506AA404(&iLocal_54);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_47))
	{
		unk_0x2F2948A2506AA404(&iLocal_47);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
	{
		unk_0x2F2948A2506AA404(&(iLocal_48[0]));
	}
	if (unk_0x538DF9E5B1DF01EB(Global_86944[0]))
	{
		if (!unk_0xD8233CB95CB48A7C(Global_86944[0], 1))
		{
			unk_0x7B9576B4E099FB1F(Global_86944[0], 1, 1);
		}
		unk_0x2F2948A2506AA404(&(Global_86944[0]));
	}
	if (unk_0x538DF9E5B1DF01EB(Global_86944[1]))
	{
		if (!unk_0xD8233CB95CB48A7C(Global_86944[1], 1))
		{
			unk_0x7B9576B4E099FB1F(Global_86944[1], 1, 1);
		}
		unk_0x2F2948A2506AA404(&(Global_86944[1]));
	}
	if (unk_0x538DF9E5B1DF01EB(Global_86944[2]))
	{
		if (!unk_0xD8233CB95CB48A7C(Global_86944[2], 1))
		{
			unk_0x7B9576B4E099FB1F(Global_86944[2], 1, 1);
		}
		unk_0x2F2948A2506AA404(&(Global_86944[2]));
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
	{
		unk_0x2F2948A2506AA404(&(iLocal_50[0]));
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_57))
	{
		unk_0xD4C90F16EBBFE620(&iLocal_57);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_58))
	{
		unk_0xD4C90F16EBBFE620(&iLocal_58);
	}
	if (unk_0xBAB691F99A2A7346(uLocal_55))
	{
		if (unk_0x3C20CCC55C33AC27(uLocal_55))
		{
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
		}
		unk_0x27A62B1C26941E13(uLocal_55, 0);
	}
}

void func_100()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_60))
	{
		unk_0xB6FB9702660D84F6(&uLocal_60);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_61))
	{
		unk_0xB6FB9702660D84F6(&uLocal_61);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_64))
	{
		unk_0xB6FB9702660D84F6(&uLocal_64);
	}
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		func_101(&(Local_69[iLocal_175 /*8*/]));
		iLocal_175++;
	}
	unk_0x4DB591D4FB49C738();
}

void func_101(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0xB6FB9702660D84F6(uParam0);
		bVar0 = true;
	}
	if (unk_0x5660C8AFDD9C1721(uParam0->f_1))
	{
		unk_0xB6FB9702660D84F6(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_7))
	{
		if (!unk_0x2DE0B96E966FD817(uParam0->f_7))
		{
			if (unk_0x06C73C7722DE6B93(uParam0->f_7))
			{
				unk_0xD2127E08F7ECC647(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_102()
{
	if (iLocal_27 == 5)
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_60))
		{
			unk_0xB6FB9702660D84F6(&uLocal_60);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_61))
		{
			unk_0xB6FB9702660D84F6(&uLocal_61);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_47))
	{
		if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
		{
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_60))
				{
					unk_0xB6FB9702660D84F6(&uLocal_60);
				}
				if (iLocal_299 == 1)
				{
					if (unk_0x09560C7DE2A384BD() < iLocal_188 + 7500)
					{
						unk_0xEDC11454B9658FE1();
					}
				}
				if (iLocal_27 == 4)
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_61))
					{
						uLocal_61 = func_109(Local_313, 0);
					}
					if (iLocal_198 == 0)
					{
						if (!unk_0xCE3402BDFD2ADED8())
						{
							if (!func_108() || !unk_0xFD672F92EEA2DC13())
							{
								func_107("DP_GOD4", 7500, 1);
								iLocal_189 = unk_0x09560C7DE2A384BD();
								iLocal_198 = 1;
							}
						}
					}
				}
				if (iLocal_27 == 3)
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_62[0]))
					{
						uLocal_62[0] = func_106(uLocal_30[0], 1, 0);
					}
				}
			}
			else if (iLocal_27 != 5)
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_60))
				{
					uLocal_60 = func_103(iLocal_47, 0, 0);
				}
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_299 == 0)
					{
						unk_0xEDC11454B9658FE1();
						func_107("DP_GOD6", 7500, 1);
						iLocal_188 = unk_0x09560C7DE2A384BD();
						iLocal_299 = 1;
					}
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_61))
				{
					unk_0xB6FB9702660D84F6(&uLocal_61);
				}
				if (iLocal_27 == 3)
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
					{
						unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
					}
				}
				if (iLocal_27 == 4)
				{
					if (iLocal_198 == 1)
					{
						if (unk_0x09560C7DE2A384BD() < iLocal_189 + 7500)
						{
							unk_0xEDC11454B9658FE1();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_60))
			{
				unk_0xB6FB9702660D84F6(&uLocal_60);
			}
			if (iLocal_196 == 1)
			{
				iLocal_199 = 1;
			}
		}
	}
	else
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_60))
		{
			unk_0xB6FB9702660D84F6(&uLocal_60);
		}
		if (iLocal_196 == 1)
		{
			iLocal_199 = 1;
		}
	}
}

int func_103(var uParam0, bool bParam1, bool bParam2)
{
	return func_104(uParam0, !bParam1, bParam2);
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_105(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_105(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_105(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_106(var uParam0, bool bParam1, bool bParam2)
{
	return func_104(uParam0, !bParam1, bParam2);
}

void func_107(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8E9A80E27DB553E5(sParam0);
	unk_0x6E070B8EEA199511(iParam1, 1);
}

int func_108()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

var func_109(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_105(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

void func_110()
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_193();
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_303 = 0;
		iLocal_304 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		if (unk_0x5660C8AFDD9C1721(uLocal_64))
		{
			unk_0xB6FB9702660D84F6(&uLocal_64);
		}
		unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
		unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			unk_0x3CC3106305C40A28(iLocal_47, 0);
		}
		unk_0x1413BE75956BF858(0);
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_175]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_175]))
				{
					unk_0x2686393074E14730(uLocal_32[iLocal_175], 1);
					unk_0x6B3DDEE91652BE59(&(uLocal_32[iLocal_175]));
				}
			}
			iLocal_175++;
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
		{
			unk_0x3A3C5A6572B3C611(&(iLocal_48[0]));
		}
		if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
		{
			unk_0x6B3DDEE91652BE59(&(uLocal_30[0]));
		}
		if (!unk_0x4CBFDAD06D630F7C("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x3EF2F05E6EA65602("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0xF4C685E933068D23())
		{
			if (!func_35())
			{
				unk_0x722B7ADE7AACF079(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1));
			}
			func_191(iLocal_47, -1, 1);
		}
		if (!unk_0x83B393DE31BAC8F0())
		{
			unk_0x5FE2A83120E8127F(800);
		}
		unk_0xA01DA3D318F1C532(10f, 5f, 4);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (iLocal_307 == 0)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
					{
						if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_310, 1) > 800f)
						{
							func_128(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_307 = 1;
						}
					}
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					if (unk_0x7F40BDE5E3EA9E62(iLocal_47))
					{
						if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_310, 1) > 800f)
						{
							if (iLocal_303 == 0 && iLocal_198 == 1)
							{
								if (!unk_0xCE3402BDFD2ADED8())
								{
									if (!func_108() || !unk_0xFD672F92EEA2DC13())
									{
										func_127(&uLocal_402, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
										if (func_126(&uLocal_402, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_303 = 1;
										}
									}
								}
							}
							if (iLocal_303 == 1 && iLocal_308 == 0)
							{
								if (func_125(72) == 0)
								{
									if (!func_108())
									{
										if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
										{
											func_127(&uLocal_402, 3, 0, "Wade", 0, 1);
											if (func_114(&uLocal_402, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_308 = 1;
											}
										}
									}
								}
								else if (!func_108())
								{
									if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
									{
										func_127(&uLocal_402, 3, 0, "Wade", 0, 1);
										if (func_114(&uLocal_402, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_308 = 1;
										}
									}
								}
							}
						}
						else if (func_113(71) == 0)
						{
							if (iLocal_304 == 0)
							{
								if (!func_108())
								{
									if (!unk_0x11A809BBE3889742())
									{
										func_112("DP_HELP4", -1);
										iLocal_304 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_313, 2f, 2f, 2f, 1, 1, 0))
					{
					}
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (!unk_0x7F40BDE5E3EA9E62(iLocal_47) && unk_0x7C4335B5DC91CCF9(iLocal_47))
						{
							func_111(1, 600);
							unk_0xA01DA3D318F1C532(8f, 5f, 4);
							iLocal_174 = 0;
							iLocal_27 = 5;
						}
					}
				}
			}
		}
	}
}

void func_111(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_54766)
	{
	}
	Global_54766 = 0;
	if (bParam0)
	{
		Global_54767 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66853)
		{
			if (Global_54983[Global_66854[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66854[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66853)
		{
			if (Global_66854[iVar0 /*9*/] > 0)
			{
				if (Global_66854[iVar0 /*9*/] == iParam1)
				{
					Global_66854[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_112(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_113(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_99.f_58[iParam0];
}

bool func_114(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_124(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	if (iParam5 == 1)
	{
		Global_15705 = 1;
	}
	else
	{
		Global_15705 = 0;
	}
	Global_2621441 = 0;
	return func_115(sParam3, iParam4, bParam8);
}

int func_115(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x0D68C13151B68364(0);
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
					func_123();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_122(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_121();
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
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_120();
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
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_119())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_118())
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_117();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_116();
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
		func_123();
	}
	return 0;
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_117()
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
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_118()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_120()
{
	if (func_22(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
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
		Global_14394 = func_20();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_121()
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

bool func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_123()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
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

int func_125(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

bool func_126(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_124(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_115(sParam2, iParam3, 0);
}

void func_127(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_128(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0x9BA82E09A986BA4B("FinaleC2", unk_0x7E5A426328F6E635()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_90079)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_90079)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_190(1);
		if (iParam0 <= Global_90079)
		{
		}
		iVar1 = func_188(unk_0x7E5A426328F6E635(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_97439.f_7341.f_328[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_186(iVar1);
			cVar3 = { Global_81235[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_97439.f_7341.f_99.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x4F5B8C4B55233CF2(&cVar3, uVar2, Global_90079, iParam0);
		}
		else
		{
			iVar5 = func_181(unk_0x7E5A426328F6E635(), 1);
			if (iVar5 != -1)
			{
				Global_97439.f_16828[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_180(iVar5)}, 4);
				unk_0x4F5B8C4B55233CF2(&uVar6, 0, Global_90079, iParam0);
			}
			else
			{
				iVar10 = func_179(&(Global_90042.f_3));
				if (iVar10 > -1)
				{
					Global_97439.f_28183.f_4[iVar10] = 0;
				}
			}
		}
		Global_84625 = iParam2;
		Global_90079 = iParam0;
		func_129(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x9BA82E09A986BA4B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_90079)
	{
	}
}

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_130(&Global_93673, unk_0x7E5A426328F6E635(), iParam0, uParam1, iParam3, iParam2);
}

void func_130(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_168();
	unk_0xED8E005DFD4E6E56(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		func_154(&(uParam0->f_2161), 0);
		func_153(unk_0xA16EC202D9D35357());
		func_147(unk_0xA16EC202D9D35357(), 0);
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_97439.f_1729.f_539.f_294[iVar1];
		if (iVar1 == func_146())
		{
			func_139(unk_0xA16EC202D9D35357(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89832[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89832[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89832[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89832[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89832[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89832[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89832[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89832[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89832[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89832[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_97439.f_1729.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_97439.f_1729.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x3ED04C9A60CBD249(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_97439.f_23789.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51933[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_97439.f_1729.f_539.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_97439.f_1729.f_539.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_97439.f_1729.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_97439.f_1729.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_97439.f_1729.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_97439.f_1729[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_97439.f_1729[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x3ED04C9A60CBD249(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	unk_0x3ED04C9A60CBD249(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	unk_0x3ED04C9A60CBD249(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_132(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_131(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_131(var uParam0)
{
	*uParam0 = Global_86296;
	uParam0->f_1 = Global_86297;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_132(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xA16EC202D9D35357();
	}
	if (unk_0x538DF9E5B1DF01EB(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_138(iParam2, &iVar0, iParam3, iParam5))
	{
		func_133(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x538DF9E5B1DF01EB(iVar0))
	{
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x2C53E9EE23994172(iVar0, joaat("skylift")) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
			{
				func_133(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_133(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xECFECDAD51A6184F(iParam2, 0))
	{
		func_135(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_134(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_90042.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_137(iParam1, 145, 0);
	uParam0->f_11 = func_56(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_136(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
		uParam0->f_6 = unk_0xD1613577C809E98B(iParam1);
		uParam0->f_3 = { unk_0xC91C6BF96160A40B(iParam1) };
		if (unk_0x0852C405AF94F670(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_68123 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if (iParam0 == Global_67218.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87788[iVar0])
				{
					if (iParam2 == 0 || unk_0xA609E58449080951(iParam0) == func_67(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0x2DE0B96E966FD817(iParam0))
		{
			if (iParam0 == unk_0xA16EC202D9D35357())
			{
				*uParam1 = unk_0xB49BA83A5C224F40();
			}
			else
			{
				*uParam1 = unk_0x6ADAC08D70C79DE5(iParam0, 1);
			}
			if (unk_0x538DF9E5B1DF01EB(*uParam1))
			{
				if (unk_0xECFECDAD51A6184F(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(*uParam1, 1), unk_0xBF8499F46AD9093A(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2C53E9EE23994172(*uParam1, joaat("taxi")))
						{
							if (unk_0xD8A521688BDBE867(*uParam1, -1) != iParam0 && unk_0xD8A521688BDBE867(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_57(*uParam1, func_20(), 1))
						{
							sVar0 = unk_0x7E5A426328F6E635();
							if (!unk_0x9BA82E09A986BA4B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x202EF5D8203705EF(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x53D28141CF743B83(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x258D2FF40E1E3219(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2C53E9EE23994172(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_139(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_145(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_144(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_59 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97439.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x1DAD7CE53BEE7710() && unk_0xA609E58449080951(iParam0) == unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			if (func_143(161, -1))
			{
				uParam1->f_59 = func_140(2044, Global_68184, 0);
			}
			else
			{
				uParam1->f_59 = func_140(747, Global_68184, 0);
			}
			uParam1->f_60 = func_140(748, Global_68184, 0);
			uParam1->f_61 = func_140(749, Global_68184, 0);
		}
		if (unk_0x1DAD7CE53BEE7710() && iParam0 == unk_0xA16EC202D9D35357())
		{
			if (func_143(161, -1))
			{
				uParam1->f_59 = func_140(2044, Global_68184, 0);
			}
			else
			{
				uParam1->f_59 = func_140(747, Global_68184, 0);
			}
		}
	}
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_141(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

var func_142()
{
	return Global_1312729;
}

int func_143(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_141(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_144(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA8E98142ED49A114(iParam0, iParam1);
		*uParam3 = unk_0x9438D5140CD3EABD(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xAAEAB57B2121A155(iParam0) && unk_0xE97B859750F073E7(iParam0) != -1)
				{
					*uParam2 = unk_0xE97B859750F073E7(iParam0);
					*uParam3 = unk_0x815936A843113D1A(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x95AD4DE218A9F9E5(iParam0, iParam1);
		*uParam3 = unk_0xBF8959A81F71BB84(iParam0, iParam1);
		*uParam4 = unk_0xD01CB47E126300A5(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_146()
{
	func_21();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x2DE0B96E966FD817(iParam0))
	{
		if (iParam0 == unk_0xA16EC202D9D35357())
		{
			func_148(iParam0, &(Global_97439.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97439.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x066F4EB5D24C219B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x89A1F24BE9EFC7B2();
					if (Global_97439.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97439.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x0D926228A1A9280F(unk_0x1788E93557766241(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x680350124CC21957(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x680350124CC21957(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x680350124CC21957(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_148(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_152(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x12945C8AD0139285(iParam0, func_152(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x79B5F1E7D14FF5B0(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xD0E2BFCE93AE3ABD(&(Var4.f_2), (20 + unk_0xEFED72BBF5223B22(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x5F299C0D4A092A76(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_150(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xD5E74D68EBC6D171(iParam0, Var4.f_0, iVar2))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_150(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0xC0170C84AE46A13F();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x47E87308B90D8AA7(iVar7, &Var9) && !func_149(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xA90142E282A42D80(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x79B5F1E7D14FF5B0(iParam0, Var4.f_0);
					if (unk_0xFA89F1C1D4B99EBD(iParam0, Var4.f_0, 0))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Var4.f_2), (20 + unk_0xEFED72BBF5223B22(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xD0E2BFCE93AE3ABD(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x5F299C0D4A092A76(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x25961BC705890881(iVar7))
					{
						if (unk_0x07145B1C190DCACB(iVar7, iVar1, &Var48))
						{
							if (unk_0xD5E74D68EBC6D171(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xD0E2BFCE93AE3ABD(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xFA89F1C1D4B99EBD(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_149(int iParam0)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_151(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x25961BC705890881(iVar1))
					{
						if (unk_0x07145B1C190DCACB(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_151(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xC0170C84AE46A13F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x47E87308B90D8AA7(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x2DE0B96E966FD817(iParam0))
	{
		Global_97439.f_1729.f_539.f_294[iVar0] = unk_0xF6CBD2E5DA76957E(iParam0);
	}
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	uParam0->f_3 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
	uParam0->f_5 = unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357());
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		uParam0->f_4 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x16CDA1894CFE0781(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x889D01384B54BCE3(Global_68573, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x889D01384B54BCE3(Global_68573, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x889D01384B54BCE3(Global_68573, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x889D01384B54BCE3(Global_68573, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0x7B6124E1230469E9(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_157(&iVar0))
		{
			if (func_156(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_20();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_155(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_155(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCF993CC55171C8A0(Param0))
	{
		iVar0 = unk_0x7B6124E1230469E9(Param4, sParam3);
		if (!unk_0xF7037F2CC07D58B0(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x50B83C199AF0E9E8(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_156(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_157(var uParam0)
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (func_167())
		{
			*uParam0 = func_163(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 5, -1, 0, 1);
			if (func_162(*uParam0) && !func_158(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_158(int iParam0)
{
	return func_159(iParam0, 0, 1);
}

int func_159(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_161() == 0)
		{
			return unk_0x889D01384B54BCE3(func_140(func_160(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

int func_161()
{
	return Global_24446;
}

int func_162(int iParam0)
{
	return func_159(iParam0, 5, 1);
}

int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_166(iVar0))
		{
			if (!bParam5 || func_165(iVar0))
			{
				fVar1 = unk_0x4970185D4CC64616(Param0, func_164(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_164(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_165(int iParam0)
{
	return func_159(iParam0, 0, 0);
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_167()
{
	return Global_90094.f_290 > 0;
}

var func_168()
{
	var uVar0;
	
	func_178(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_177(&uVar0, unk_0x26ADBF0B08315387());
	func_176(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_171(&uVar0, unk_0xA3730885141EEA96());
	func_170(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_169(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_169(var uParam0, int iParam1)
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

void func_170(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_171(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_173(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_172(int iParam0, int iParam1)
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

var func_173(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_174(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_174(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_175(var uParam0)
{
	return uParam0 & 15;
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_178(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_179(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x9BA82E09A986BA4B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_180(int iParam0)
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

int func_181(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0xB793F1A0B6CC4AE1(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_182(iVar0, &sVar1);
		if (unk_0xB793F1A0B6CC4AE1(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_182(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_183(uParam1, "Abigail1", func_185(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 1:
			func_183(uParam1, "Abigail2", func_185(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 2:
			func_183(uParam1, "Barry1", func_185(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 3:
			func_183(uParam1, "Barry2", func_185(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 4:
			func_183(uParam1, "Barry3", func_185(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 5:
			func_183(uParam1, "Barry3A", func_185(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 6:
			func_183(uParam1, "Barry3C", func_185(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 7:
			func_183(uParam1, "Barry4", func_185(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_184(iParam0), 0, 0);
			break;
		
		case 8:
			func_183(uParam1, "Dreyfuss1", func_185(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 9:
			func_183(uParam1, "Epsilon1", func_185(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 10:
			func_183(uParam1, "Epsilon2", func_185(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 11:
			func_183(uParam1, "Epsilon3", func_185(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 12:
			func_183(uParam1, "Epsilon4", func_185(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 13:
			func_183(uParam1, "Epsilon5", func_185(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 14:
			func_183(uParam1, "Epsilon6", func_185(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 15:
			func_183(uParam1, "Epsilon7", func_185(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 16:
			func_183(uParam1, "Epsilon8", func_185(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 17:
			func_183(uParam1, "Extreme1", func_185(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 18:
			func_183(uParam1, "Extreme2", func_185(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 19:
			func_183(uParam1, "Extreme3", func_185(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 20:
			func_183(uParam1, "Extreme4", func_185(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 21:
			func_183(uParam1, "Fanatic1", func_185(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_184(iParam0), 1, 0);
			break;
		
		case 22:
			func_183(uParam1, "Fanatic2", func_185(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_184(iParam0), 1, 0);
			break;
		
		case 23:
			func_183(uParam1, "Fanatic3", func_185(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_184(iParam0), 0, 1);
			break;
		
		case 24:
			func_183(uParam1, "Hao1", func_185(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_184(iParam0), 0, 1);
			break;
		
		case 25:
			func_183(uParam1, "Hunting1", func_185(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 26:
			func_183(uParam1, "Hunting2", func_185(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 27:
			func_183(uParam1, "Josh1", func_185(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 28:
			func_183(uParam1, "Josh2", func_185(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 29:
			func_183(uParam1, "Josh3", func_185(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 30:
			func_183(uParam1, "Josh4", func_185(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 31:
			func_183(uParam1, "Maude1", func_185(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 32:
			func_183(uParam1, "Minute1", func_185(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 33:
			func_183(uParam1, "Minute2", func_185(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 34:
			func_183(uParam1, "Minute3", func_185(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 35:
			func_183(uParam1, "MrsPhilips1", func_185(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 36:
			func_183(uParam1, "MrsPhilips2", func_185(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 37:
			func_183(uParam1, "Nigel1", func_185(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 38:
			func_183(uParam1, "Nigel1A", func_185(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 39:
			func_183(uParam1, "Nigel1B", func_185(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_184(iParam0), 1, 1);
			break;
		
		case 40:
			func_183(uParam1, "Nigel1C", func_185(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_184(iParam0), 1, 1);
			break;
		
		case 41:
			func_183(uParam1, "Nigel1D", func_185(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_184(iParam0), 1, 1);
			break;
		
		case 42:
			func_183(uParam1, "Nigel2", func_185(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 43:
			func_183(uParam1, "Nigel3", func_185(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_184(iParam0), 1, 1);
			break;
		
		case 44:
			func_183(uParam1, "Omega1", func_185(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 45:
			func_183(uParam1, "Omega2", func_185(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 46:
			func_183(uParam1, "Paparazzo1", func_185(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 47:
			func_183(uParam1, "Paparazzo2", func_185(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 48:
			func_183(uParam1, "Paparazzo3", func_185(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 49:
			func_183(uParam1, "Paparazzo3A", func_185(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 50:
			func_183(uParam1, "Paparazzo3B", func_185(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 51:
			func_183(uParam1, "Paparazzo4", func_185(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 52:
			func_183(uParam1, "Rampage1", func_185(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 54:
			func_183(uParam1, "Rampage3", func_185(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 55:
			func_183(uParam1, "Rampage4", func_185(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 56:
			func_183(uParam1, "Rampage5", func_185(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_184(iParam0), 0, 0);
			break;
		
		case 53:
			func_183(uParam1, "Rampage2", func_185(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_184(iParam0), 1, 0);
			break;
		
		case 57:
			func_183(uParam1, "TheLastOne", func_185(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 58:
			func_183(uParam1, "Tonya1", func_185(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 59:
			func_183(uParam1, "Tonya2", func_185(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 60:
			func_183(uParam1, "Tonya3", func_185(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 61:
			func_183(uParam1, "Tonya4", func_185(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		case 62:
			func_183(uParam1, "Tonya5", func_185(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_184(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_183(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_184(int iParam0)
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

struct<2> func_185(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_180(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_187(Global_97439.f_7341.f_99.f_203[10]);
			break;
		
		case 74:
		case 75:
			return func_187(Global_97439.f_7341.f_99.f_203[8]);
			break;
		
		case 84:
		case 85:
			return func_187(Global_97439.f_7341.f_99.f_203[11]);
			break;
		
		case 90:
			return func_187(Global_97439.f_7341.f_99.f_203[7]);
			break;
		
		case 93:
			return func_187(Global_97439.f_7341.f_99.f_203[9]);
			break;
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_188(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB793F1A0B6CC4AE1(sParam0);
	iVar1 = func_189(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81235[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_190(bool bParam0)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	if (func_237() && func_35())
	{
		while (Global_90037 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8D033DA6320BDCF9(0);
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0x272B2ACB08C1F84B(unk_0xA16EC202D9D35357());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x538DF9E5B1DF01EB(iParam0))
				{
					if (unk_0xECFECDAD51A6184F(iParam0, 0))
					{
						if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iParam0, 0))
						{
							unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), iParam0, iParam1);
							unk_0x60365B850FB7354F(0f, 1065353216);
							unk_0x20D6E0EA145DF751(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			}
		}
		unk_0xD95479F4383A427C();
		func_192(0);
	}
}

void func_192(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 13);
	}
}

void func_193()
{
	if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_313, 1) < 500f)
	{
		if (iLocal_213 == 0)
		{
			if (!unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
			{
				unk_0x939DA7EBCC6588FF(joaat("sandking"));
				if (unk_0x5494F37F35C1D7D7(joaat("sandking")))
				{
					iLocal_50[0] = unk_0x9BB6F54E415071A1(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
					unk_0x3CC3106305C40A28(iLocal_50[0], 1);
					unk_0xEA054561294AEC10(joaat("sandking"));
				}
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
			{
				iLocal_213 = 1;
			}
		}
	}
	else if (iLocal_213 == 1)
	{
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_313, 1) > 550f)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_50[0]))
			{
				unk_0x2F2948A2506AA404(&(iLocal_50[0]));
			}
			iLocal_213 = 0;
		}
	}
}

void func_194()
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_200();
		func_193();
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 4)
		{
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 4, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		}
		func_199();
		func_198();
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
			{
				func_197(uLocal_32[iLocal_175], &(Local_69[iLocal_175 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
			}
			else
			{
				func_101(&(Local_69[iLocal_175 /*8*/]));
			}
			iLocal_175++;
		}
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_198 = 0;
		iLocal_201[0] = 0;
		iLocal_201[1] = 0;
		iLocal_204 = 0;
		iLocal_205[0] = 0;
		iLocal_205[1] = 0;
		iLocal_208 = 0;
		iLocal_213 = 0;
		iLocal_214[0] = 0;
		iLocal_272 = 0;
		iLocal_273 = 0;
		iLocal_294 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_182 = unk_0x09560C7DE2A384BD();
		iLocal_187 = unk_0x09560C7DE2A384BD();
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			unk_0x3CC3106305C40A28(iLocal_47, 0);
		}
		func_128(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (unk_0xF4C685E933068D23())
		{
			if (!func_35())
			{
				unk_0x722B7ADE7AACF079(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1));
			}
			func_191(iLocal_47, -1, 1);
		}
		if (!unk_0x83B393DE31BAC8F0())
		{
			unk_0x5FE2A83120E8127F(800);
		}
		if (!unk_0x4CBFDAD06D630F7C("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x3EF2F05E6EA65602("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x4CBFDAD06D630F7C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0x3EF2F05E6EA65602("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_196(602, 0);
		unk_0x1413BE75956BF858(0);
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				func_195(iLocal_47, -1);
			}
		}
		unk_0xA01DA3D318F1C532(10f, 5f, 4);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (iLocal_205[0] == 1)
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				unk_0x9122271AF278554B(iLocal_48[0], 0);
			}
			if (unk_0x4CBFDAD06D630F7C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0x124843CE93F39C27("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_111(1, 602);
			func_196(600, 0);
			if (unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
				{
					if (unk_0x0852C405AF94F670(iLocal_47, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
						{
							unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
							unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
							iLocal_174 = 0;
							iLocal_27 = 5;
						}
						else
						{
							unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
							unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
							func_29();
						}
					}
					else
					{
						iLocal_174 = 0;
						iLocal_27 = 4;
					}
				}
			}
		}
		else if (iLocal_208 == 0)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_47))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
					{
						if (unk_0x09560C7DE2A384BD() > iLocal_182 + 10000)
						{
							if (!unk_0xCE3402BDFD2ADED8())
							{
								func_107("DP_GOD5", 7500, 1);
								iLocal_208 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_195(int iParam0, int iParam1)
{
	Global_54769 = iParam0;
	Global_54770 = iParam1;
}

void func_196(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_54768 = iParam0;
	if (!Global_54766)
	{
		Global_54766 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66853)
		{
			if (Global_66854[iVar0 /*9*/] == iParam0)
			{
				Global_66854[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_197(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA495B6AB6F2BF8C7();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		if (!unk_0x06C73C7722DE6B93(iParam0))
		{
			unk_0xD2127E08F7ECC647(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x684EAC33CF12840F(iParam0, iParam2);
			unk_0xA081E108449F36AF(iParam0, fParam6);
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0x85C00B9AEF9CC0BE(*uParam1, 7);
			}
		}
		unk_0xD8A5ADBA7F78DE98(iParam0, iParam4);
		unk_0x0E24447AB5E1E464(iParam0, iParam5);
		*uParam1 = unk_0xD02D41827B8C0615(iParam0);
		if (!unk_0x889D01384B54BCE3(uParam1->f_6, 2))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				if (!unk_0x06771AF7795B3ECF(iParam7))
				{
					unk_0xBF0178A0BBB67E93("MCUSTBLIP");
					unk_0x94E086BCAE8856C1(iParam7);
					unk_0x9658B68CC5D71D0C(*uParam1);
				}
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x202EF5D8203705EF(iParam0, 0))
		{
			uParam1->f_1 = unk_0xBA3EA247D2E688E5(iParam0);
			if (!unk_0x889D01384B54BCE3(uParam1->f_6, 3))
			{
				if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
				{
					unk_0x85C00B9AEF9CC0BE(uParam1->f_1, 7);
					unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x29DB79DD4D939B38(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_198()
{
	iLocal_52 = unk_0xEA638C4417ABC6D0(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 300f, joaat("lazer"), 4);
	iLocal_53 = unk_0xEA638C4417ABC6D0(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 300f, joaat("lazer"), 16386);
	if (unk_0x538DF9E5B1DF01EB(iLocal_52) && unk_0x7F40BDE5E3EA9E62(iLocal_52))
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_64))
		{
			uLocal_64 = unk_0xDF78B7F06503567E(iLocal_52);
			unk_0x060629C917E581A5(uLocal_64, false);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_53) && unk_0x7F40BDE5E3EA9E62(iLocal_53))
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_65))
		{
			uLocal_65 = unk_0xDF78B7F06503567E(iLocal_53);
			unk_0x060629C917E581A5(uLocal_65, false);
		}
	}
}

void func_199()
{
	if (iLocal_27 == 3)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					Local_319 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									if (func_2(unk_0xA16EC202D9D35357(), uLocal_30[0], 1) < 600f)
									{
										if (unk_0x4970185D4CC64616(Local_319, -75.8f, -819.9f, 326f, 1) > 1600f && unk_0x4970185D4CC64616(Local_319, -2159f, 3067f, 33f, 1) < 1000f)
										{
											if (Local_319.f_2 > 70f)
											{
												if (iLocal_29 != 2)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 2;
												}
											}
											else if (iLocal_29 != 1)
											{
												iLocal_214[0] = 1;
												iLocal_29 = 1;
											}
											if (iLocal_272 == 1)
											{
												if (iLocal_273 == 0)
												{
													if (!func_108())
													{
														if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
														{
															func_127(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
															func_127(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
															if (func_126(&uLocal_402, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_273 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (unk_0x4970185D4CC64616(Local_319, -75.8f, -819.9f, 326f, 1) < 1600f)
											{
												if (iLocal_29 != 3)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 3;
												}
												if (iLocal_272 == 0)
												{
													if (!func_108())
													{
														if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
														{
															func_127(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
															func_127(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
															if (func_126(&uLocal_402, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_272 = 1;
															}
														}
													}
												}
											}
											if (unk_0x4970185D4CC64616(Local_319, -2159f, 3067f, 33f, 1) > 1000f)
											{
												if (iLocal_29 != 3)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 3;
												}
											}
										}
									}
									else if (iLocal_29 != 4)
									{
										iLocal_214[0] = 1;
										iLocal_29 = 4;
									}
								}
							}
						}
					}
				}
				else if (unk_0x4970185D4CC64616(Local_319, -75.8f, -819.9f, 326f, 1) > 1600f)
				{
					if (iLocal_29 != 0)
					{
						iLocal_214[0] = 1;
						iLocal_29 = 0;
					}
					if (iLocal_272 == 1)
					{
						if (iLocal_273 == 0)
						{
							if (!func_108())
							{
								if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
								{
									func_127(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
									func_127(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
									if (func_126(&uLocal_402, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_273 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_29 != 3)
					{
						iLocal_214[0] = 1;
						iLocal_29 = 3;
					}
					if (iLocal_272 == 0)
					{
						if (!func_108())
						{
							if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
							{
								func_127(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
								func_127(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
								if (func_126(&uLocal_402, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_272 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_201[0] == 0)
	{
		if (iLocal_27 == 2)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
				{
					if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
						{
							if (func_2(unk_0xA16EC202D9D35357(), uLocal_30[0], 1) < 200f)
							{
								Local_316 = { unk_0xBF8499F46AD9093A(iLocal_48[0], 1) };
								unk_0x937785D9C1929236(uLocal_30[0]);
								unk_0xE5F54904AB00D1C1(uLocal_30[0], Local_316, 10f, 0, 0);
								unk_0x28F7FDF6BC8BA514(uLocal_30[0], 250f, 0);
								iLocal_201[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_27 == 3)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
				{
					if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
						{
							if (!unk_0x5660C8AFDD9C1721(uLocal_62[0]))
							{
								uLocal_62[0] = func_106(uLocal_30[0], 1, 0);
							}
							Local_316 = { unk_0xBF8499F46AD9093A(iLocal_48[0], 1) };
							unk_0x937785D9C1929236(uLocal_30[0]);
							unk_0x6D98AA46076A68BE(&uLocal_571);
							if (!unk_0xAD203DB71ADF6E57(uLocal_30[0], iLocal_48[0], 0))
							{
								unk_0xA34C986DDC3D92F1(0, iLocal_48[0], 20000, -1, 1073741824, 1, 0);
							}
							unk_0x066323C78EF48DEE(0, iLocal_48[0], 0, 0, Local_316.f_0, Local_316.f_1, (Local_316.f_2 + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							unk_0x066323C78EF48DEE(0, iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							unk_0x963BB7C99350D827(uLocal_571);
							unk_0x0891776D0327B77A(uLocal_30[0], uLocal_571);
							unk_0x2AF68ED52DC74B7D(&uLocal_571);
							iLocal_201[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_27 == 3)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
					{
						if (unk_0xAD203DB71ADF6E57(uLocal_30[0], iLocal_48[0], 0))
						{
							if (unk_0x09560C7DE2A384BD() > (iLocal_187 + 90000))
							{
								if (iLocal_296 == 0)
								{
									unk_0xE97E86766A24F0FA(uLocal_30[0], 100);
									iLocal_295 = 0;
									iLocal_296 = 1;
								}
							}
							else if (unk_0x09560C7DE2A384BD() > iLocal_187 + 10000 && !unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
							{
								if (iLocal_296 == 0)
								{
									unk_0xE97E86766A24F0FA(uLocal_30[0], 100);
									iLocal_295 = 0;
									iLocal_296 = 1;
								}
							}
							else if (iLocal_295 == 0)
							{
								unk_0xE97E86766A24F0FA(uLocal_30[0], 0);
								iLocal_296 = 0;
								iLocal_295 = 1;
							}
							if (func_2(iLocal_48[0], unk_0xA16EC202D9D35357(), 1) < 300f)
							{
								if (iLocal_298 == 0)
								{
									unk_0x73C81D40F6EC64F7(uLocal_30[0], joaat("vehicle_weapon_space_rocket"));
									unk_0xC08D5CB36D708A34(uLocal_30[0], -1857128337);
									iLocal_297 = 0;
									iLocal_298 = 1;
								}
							}
							else if (iLocal_297 == 0)
							{
								unk_0x73C81D40F6EC64F7(uLocal_30[0], joaat("vehicle_weapon_player_buzzard"));
								unk_0xC08D5CB36D708A34(uLocal_30[0], 1566631136);
								iLocal_298 = 0;
								iLocal_297 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_204 == 0)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
				{
					if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
						{
							if (unk_0xAD203DB71ADF6E57(uLocal_30[0], iLocal_48[0], 0))
							{
								unk_0xE97E86766A24F0FA(uLocal_30[0], 0);
								unk_0x73C81D40F6EC64F7(uLocal_30[0], joaat("vehicle_weapon_space_rocket"));
								iLocal_204 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (iLocal_214[0] == 1)
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_214[0] == 1)
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_214[0] == 1)
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_214[0] == 1)
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, 0, unk_0xA783C6007920169C(iLocal_48[0], 20f, 0f, 0f), 4, 10f, 10f, unk_0xD1613577C809E98B(iLocal_48[0]), unk_0xF2DB717A73826179(unk_0x002C5E9D65C03D7B(iLocal_48[0], unk_0xBF8499F46AD9093A(iLocal_48[0], 1), 1, 1)), 100, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_294 == 0)
				{
					if (unk_0x4970185D4CC64616(Local_319, -2159f, 3067f, 33f, 1) > 1000f)
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
						{
							if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
							{
								if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
								{
									if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
									{
										unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_294 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_214[0] == 1)
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
								{
									unk_0x066323C78EF48DEE(uLocal_30[0], iLocal_48[0], 0, unk_0xA16EC202D9D35357(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
	{
		if (unk_0x2DE0B96E966FD817(uLocal_30[0]))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
			}
			iLocal_205[0] = 1;
		}
	}
	else
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
		{
			unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
		}
		iLocal_205[0] = 1;
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
	{
		if (!unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
			}
			iLocal_205[0] = 1;
		}
	}
	else
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
		{
			unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
		}
		iLocal_205[0] = 1;
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
	{
		if (unk_0xECFECDAD51A6184F(iLocal_48[0], 0))
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
				{
					if (unk_0xAD203DB71ADF6E57(uLocal_30[0], iLocal_48[0], 0))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
						{
							unk_0xBE97A5A41C1F5C4C(uLocal_62[0], 1f);
						}
					}
					if (func_2(unk_0xA16EC202D9D35357(), uLocal_30[0], 1) > 600f)
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
						{
							unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
						}
						iLocal_205[0] = 1;
					}
				}
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_30[0]))
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_30[0]))
		{
			if (unk_0x21FF064386DC6A0A(uLocal_30[0]))
			{
				unk_0x937785D9C1929236(uLocal_30[0]);
				unk_0x4C31C3561F937348(uLocal_30[0], 0);
				if (unk_0x5660C8AFDD9C1721(uLocal_62[0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_62[0]));
				}
				iLocal_205[0] = 1;
			}
		}
	}
}

void func_200()
{
	if (iLocal_209 == 0)
	{
		if ((((func_201(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 3, 0, 0) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_209 = 1;
		}
	}
	if (iLocal_209 == 1)
	{
		if ((((!func_201(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 3, 0, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_209 = 0;
		}
	}
	if (iLocal_200 == 1)
	{
		if (((iLocal_209 == 1 || iLocal_288 == 1) || iLocal_301 == 1) || iLocal_210 == 1)
		{
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 4)
			{
				unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 4, 0);
				unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			}
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_175]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_175]))
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_47))
						{
							if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
							{
								if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0) || iLocal_211 == 1)
								{
									if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_175], 1) < 39f)
									{
										if (iLocal_216[iLocal_175] == 0)
										{
											unk_0x937785D9C1929236(uLocal_32[iLocal_175]);
											unk_0xE5F54904AB00D1C1(uLocal_32[iLocal_175], unk_0xBF8499F46AD9093A(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											unk_0x85A1016DBBC5E64B(uLocal_32[iLocal_175], unk_0xA16EC202D9D35357(), 0, 16);
											unk_0x15EBFEEB77BF84B7(uLocal_32[iLocal_175], 51, 1);
											unk_0x15EBFEEB77BF84B7(uLocal_32[iLocal_175], 43, 1);
											iLocal_230[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 1;
										}
									}
									else if (iLocal_230[iLocal_175] == 0)
									{
										unk_0x937785D9C1929236(uLocal_32[iLocal_175]);
										unk_0x6D98AA46076A68BE(&uLocal_571);
										unk_0x353F4B963593F141(0, unk_0xBF8499F46AD9093A(iLocal_47, 1), 2f, -1, 20f, 0, 1193033728);
										unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
										unk_0x963BB7C99350D827(uLocal_571);
										unk_0x0891776D0327B77A(uLocal_32[iLocal_175], uLocal_571);
										unk_0x2AF68ED52DC74B7D(&uLocal_571);
										iLocal_244[iLocal_175] = 0;
										iLocal_258[iLocal_175] = 0;
										iLocal_216[iLocal_175] = 0;
										iLocal_230[iLocal_175] = 1;
									}
								}
								else
								{
									if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_175], 1) < 39f)
									{
										if (iLocal_244[iLocal_175] == 0)
										{
											unk_0x937785D9C1929236(uLocal_32[iLocal_175]);
											unk_0xE5F54904AB00D1C1(uLocal_32[iLocal_175], unk_0xBF8499F46AD9093A(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											unk_0x85A1016DBBC5E64B(uLocal_32[iLocal_175], unk_0xA16EC202D9D35357(), 0, 16);
											unk_0x15EBFEEB77BF84B7(uLocal_32[iLocal_175], 51, 1);
											unk_0x15EBFEEB77BF84B7(uLocal_32[iLocal_175], 43, 1);
											iLocal_230[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 1;
										}
									}
									if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_175], 1) > 41f && func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_175], 1) < 400f)
									{
										if (iLocal_258[iLocal_175] == 0)
										{
											iLocal_194 = unk_0x444ECD635D5FD45F(0, 4);
											unk_0x937785D9C1929236(uLocal_32[iLocal_175]);
											unk_0xE5F54904AB00D1C1(uLocal_32[iLocal_175], unk_0xBF8499F46AD9093A(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											unk_0x6D98AA46076A68BE(&uLocal_571);
											if (iLocal_194 == 0)
											{
												unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_194 == 1)
											{
												unk_0xA06765CC8C24CED7(0, 500);
												unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_194 == 2)
											{
												unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_194 == 3)
											{
												unk_0xA06765CC8C24CED7(0, 500);
												unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 25f, 3f, 1073741824, 0);
											}
											unk_0x963BB7C99350D827(uLocal_571);
											unk_0x0891776D0327B77A(uLocal_32[iLocal_175], uLocal_571);
											unk_0x2AF68ED52DC74B7D(&uLocal_571);
											iLocal_230[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_175++;
			}
		}
		if (((iLocal_209 == 0 && iLocal_288 == 0) && iLocal_301 == 0) && iLocal_210 == 0)
		{
			iLocal_192 = 0;
			while (iLocal_192 <= 1)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_192]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_192]))
					{
						if (func_2(uLocal_32[iLocal_192], unk_0xA16EC202D9D35357(), 1) < 25f)
						{
							if (iLocal_291[iLocal_192] == 0)
							{
								if (!unk_0x98666858610065B8(uLocal_32[iLocal_192]))
								{
									unk_0x9AB8F163FA160890(uLocal_32[iLocal_192]);
								}
								else
								{
									unk_0x937785D9C1929236(uLocal_32[iLocal_192]);
								}
								unk_0x0CDB4D41769B8C93(uLocal_32[iLocal_192], unk_0xA16EC202D9D35357(), -1, 0);
								iLocal_291[iLocal_192] = 1;
							}
							if (iLocal_302 == 1)
							{
								if (unk_0x09560C7DE2A384BD() > iLocal_190 + 20000)
								{
									iLocal_301 = 1;
								}
							}
						}
						else if (func_2(uLocal_32[iLocal_192], unk_0xA16EC202D9D35357(), 1) > 30f)
						{
							if (iLocal_291[iLocal_192] == 1)
							{
								if (!unk_0x98666858610065B8(uLocal_32[iLocal_192]))
								{
									unk_0x9AB8F163FA160890(uLocal_32[iLocal_192]);
								}
								else
								{
									unk_0x937785D9C1929236(uLocal_32[iLocal_192]);
								}
								unk_0x0CDB4D41769B8C93(uLocal_32[iLocal_192], unk_0xA16EC202D9D35357(), 1, 0);
								iLocal_291[iLocal_192] = 0;
							}
						}
					}
				}
				iLocal_192++;
			}
		}
	}
}

int func_201(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x801B4FC214DEDCB7(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_202()
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_200();
		func_199();
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_197 = 0;
		iLocal_200 = 0;
		iLocal_201[0] = 0;
		iLocal_201[1] = 0;
		iLocal_209 = 0;
		iLocal_210 = 0;
		iLocal_211 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291[0] = 0;
		iLocal_291[1] = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_309 = 0;
		iLocal_190 = 0;
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			iLocal_216[iLocal_175] = 0;
			iLocal_230[iLocal_175] = 0;
			iLocal_244[iLocal_175] = 0;
			iLocal_258[iLocal_175] = 0;
			iLocal_175++;
		}
		unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
		unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		unk_0x942B823036A9B2AE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_181 = unk_0x09560C7DE2A384BD();
		unk_0x32DC163A33A4AB6D(joaat("lazer"), 1);
		unk_0x939DA7EBCC6588FF(joaat("s_m_y_marine_01"));
		unk_0x939DA7EBCC6588FF(joaat("s_m_m_pilot_02"));
		if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0x538DF9E5B1DF01EB(Global_86944[0]))
			{
				if (unk_0xECFECDAD51A6184F(Global_86944[0], 0))
				{
					unk_0x7B9576B4E099FB1F(Global_86944[0], 1, 1);
					iLocal_47 = Global_86944[0];
					unk_0xBEEA9BAE37C263AF(iLocal_47, 0);
					unk_0xDD56EF930C7A5863(iLocal_47, 1);
					unk_0xEA054561294AEC10(joaat("cargobob"));
					unk_0x32DC163A33A4AB6D(joaat("cargobob"), 1);
					unk_0xA3171FC009D32621(iLocal_47, 0);
					unk_0xF6F04B5324C9DA32(iLocal_47, 1);
					func_86(iLocal_47, 0);
				}
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(iLocal_48[0]))
		{
			if (unk_0x538DF9E5B1DF01EB(Global_86944[1]))
			{
				if (unk_0xECFECDAD51A6184F(Global_86944[1], 0))
				{
					unk_0x7B9576B4E099FB1F(Global_86944[1], 1, 1);
					iLocal_48[0] = Global_86944[1];
					unk_0xBEEA9BAE37C263AF(iLocal_48[0], 1);
					unk_0xDD56EF930C7A5863(iLocal_48[0], 1);
					unk_0x3CC3106305C40A28(iLocal_48[0], 0);
					unk_0xA5F41F91908B2FCB(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0xF819510E1E1025C4(iLocal_48[0], 0);
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(Global_86944[2]))
		{
			if (unk_0xECFECDAD51A6184F(Global_86944[2], 0))
			{
				if (unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(Global_86944[2])))
				{
					unk_0x7B9576B4E099FB1F(Global_86944[2], 1, 1);
					func_210(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(Global_86944[2])) || unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(Global_86944[2]))) || unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(Global_86944[2]))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(Global_86944[2])))
				{
					unk_0x7B9576B4E099FB1F(Global_86944[2], 1, 1);
					func_210(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(Global_86944.f_9[0]))
		{
			unk_0x7B9576B4E099FB1F(Global_86944.f_9[0], 1, 1);
			uLocal_32[0] = Global_86944.f_9[0];
		}
		if (unk_0x538DF9E5B1DF01EB(Global_86944.f_9[1]))
		{
			unk_0x7B9576B4E099FB1F(Global_86944.f_9[1], 1, 1);
			uLocal_32[1] = Global_86944.f_9[1];
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			unk_0x3CC3106305C40A28(iLocal_47, 0);
		}
		unk_0x08E9BC7825B63619("PoliceScannerDisabled", 1);
		if (unk_0xF4C685E933068D23())
		{
			if (!func_35())
			{
				unk_0x722B7ADE7AACF079(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1));
			}
			func_191(iLocal_54, -1, 1);
		}
		if (!unk_0x83B393DE31BAC8F0())
		{
			unk_0x5FE2A83120E8127F(800);
		}
		func_209(unk_0xA16EC202D9D35357(), -1);
		func_208(73);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0xA1C41285CCB9FF5C("ARMY_GUARD"))
		{
			if (unk_0x77EC74238A42DB32("ARMY_GUARD"))
			{
				unk_0x1C4C3C0B35B68375("ARMY_GUARD", 0);
			}
		}
		func_83();
		if (iLocal_210 == 0)
		{
			if (unk_0x09560C7DE2A384BD() > iLocal_181 + 3000)
			{
				iLocal_183 = 0;
				while (iLocal_183 <= 12)
				{
					if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_183]))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_183]))
						{
							if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_183], 1) < 40f)
							{
								if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_183], unk_0xA16EC202D9D35357()))
								{
									if (unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
									{
										unk_0xFCF458F91A7A3062("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_210 = 1;
									}
									if (iLocal_209 == 1)
									{
										unk_0xFCF458F91A7A3062("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_210 = 1;
									}
									if (iLocal_306 == 0)
									{
										if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !func_207(0))
										{
											if (func_206(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed"))
											{
												iLocal_193 = unk_0x09560C7DE2A384BD();
												iLocal_306 = 1;
											}
										}
									}
									else if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !func_207(0))
									{
										if (func_206(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed"))
										{
											if (unk_0x09560C7DE2A384BD() > iLocal_193 + 3000)
											{
												unk_0xFCF458F91A7A3062("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
												unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 1, 1);
												iLocal_210 = 1;
											}
										}
										else if (iLocal_305 == 0)
										{
											iLocal_306 = 0;
											iLocal_305 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_183++;
				}
			}
		}
		if (iLocal_197 == 0)
		{
			unk_0xEDC11454B9658FE1();
			unk_0xA01DA3D318F1C532(5f, 10f, 4);
			func_107("DP_GOD2", 7500, 1);
			iLocal_197 = 1;
		}
		if (iLocal_209 == 1)
		{
			if (!func_205(5))
			{
				func_204(5);
			}
		}
		else if (func_205(5))
		{
			func_203(5);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_47))
		{
			if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
			{
				if (func_2(unk_0xA16EC202D9D35357(), iLocal_47, 1) < 30f)
				{
					iLocal_211 = 1;
				}
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), -1, 0, 1);
					iLocal_174 = 0;
					unk_0xA01DA3D318F1C532(10f, 10f, 4);
					iLocal_27 = 3;
				}
			}
		}
	}
}

void func_203(int iParam0)
{
	unk_0x29DB79DD4D939B38(&Global_86302, iParam0);
}

void func_204(int iParam0)
{
	unk_0xD0E2BFCE93AE3ABD(&Global_86302, iParam0);
}

bool func_205(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_86302, iParam0);
}

int func_206(int iParam0)
{
	var uVar0;
	
	unk_0xC00D643B16552C4D(iParam0, &uVar0, 1);
	return uVar0;
}

int func_207(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	if (Global_87369 != -1)
	{
		if (iParam0 == Global_87369)
		{
			Global_87373 = 1;
			return;
		}
	}
}

void func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_54771 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66853)
	{
		if (iParam1 == -1 || Global_66854[iVar0 /*9*/] == iParam1)
		{
			if (Global_66854[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66854[iVar0 /*9*/].f_6 = iParam0;
				Global_66854[iVar0 /*9*/].f_7 = 1;
				Global_66854[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_210(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x538DF9E5B1DF01EB(Global_91436.f_4))
	{
		if (unk_0xECFECDAD51A6184F(Global_91436.f_4, 0))
		{
			if (func_219(24) != Global_91436.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_216(unk_0xBF8499F46AD9093A(Global_91436.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_211(Global_91436.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_211(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<36> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[25]) && unk_0xECFECDAD51A6184F(Global_67218.f_484[25], 0))
			{
				if (Global_67218.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x541898DB7669BD41(iParam0) || unk_0xA609E58449080951(iParam0) == joaat("bus")) || unk_0xA609E58449080951(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_215(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_40(iParam0, &Var0);
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
			uParam4 = unk_0xD1613577C809E98B(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) != joaat("vehicle_gen_controller"))
			{
				Global_68182 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
			}
		}
		func_213(iParam5, &Var0, Param1, uParam4, func_56(iParam0));
		func_212(iParam5, iParam0, 0);
	}
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_66(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 12) && !unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67218.f_555[0 /*21*/].f_4 != unk_0xA609E58449080951(iParam1))
		{
			return;
		}
	}
	if (Global_68125 != -1 && Global_68125 != iParam0)
	{
		return;
	}
	if (unk_0x538DF9E5B1DF01EB(iParam1))
	{
		if (unk_0xECFECDAD51A6184F(iParam1, 0))
		{
			if (!unk_0x22349EC06EA5B08B(iParam1))
			{
				unk_0x7B9576B4E099FB1F(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97439.f_18371.f_4249 = func_168();
			}
			if (iParam1 != Global_67218.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_219(iParam0);
					if ((unk_0x538DF9E5B1DF01EB(iVar0) && unk_0xECFECDAD51A6184F(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_68124 = iParam1;
				Global_68125 = iParam0;
				Global_68126 = iParam2;
			}
		}
	}
}

void func_213(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_66(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 10))
		{
			func_214(iParam0);
			func_63(uParam1, &(Global_97439.f_18371.f_69[Global_67218.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 11))
			{
				Global_97439.f_18371.f_1312[Global_67218.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_97439.f_18371.f_1382[Global_67218.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_97439.f_18371.f_1312[Global_67218.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97439.f_18371.f_1382[Global_67218.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97439.f_18371.f_1406[Global_67218.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_214(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_67218.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_139[iParam0]))
		{
			unk_0x7B9576B4E099FB1F(Global_67218.f_139[iParam0], 1, 1);
			unk_0x3A3C5A6572B3C611(&(Global_67218.f_139[iParam0]));
			Global_67218.f_139[iParam0] = 0;
		}
		if (unk_0x889D01384B54BCE3(Global_67218.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

void func_215(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_214(iParam0);
	func_59(iParam0, 0);
}

int func_216(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_217(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_217(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_85485[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85485[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_218(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4970185D4CC64616(Param0, Global_85485[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_218(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_97439.f_5486[iParam0], 0);
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67218.f_139[iParam0];
}

void func_220()
{
	if (iLocal_174 == 0)
	{
		func_224(1, 0);
		func_224(2, 0);
		func_224(7, 0);
		func_224(8, 0);
		func_224(9, 0);
		func_224(10, 0);
		func_224(4, 0);
		func_224(12, 0);
		unk_0x0B29CE7F19BFE6C0("MarineGroupHash", &iLocal_59);
		unk_0x2966D41514EAE84B(5, iLocal_59, joaat("player"));
		unk_0x2966D41514EAE84B(5, joaat("army"), joaat("player"));
		unk_0x2966D41514EAE84B(1, iLocal_59, joaat("army"));
		unk_0x2966D41514EAE84B(1, joaat("army"), iLocal_59);
		unk_0x2966D41514EAE84B(1, joaat("COP"), iLocal_59);
		unk_0x2966D41514EAE84B(1, iLocal_59, joaat("COP"));
		unk_0x2966D41514EAE84B(1, joaat("COP"), joaat("army"));
		unk_0x2966D41514EAE84B(1, joaat("army"), joaat("COP"));
		if (func_237())
		{
			if (Global_84624 == 1)
			{
				if (func_223() == 0)
				{
					func_222(Local_310, fLocal_322, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 3;
				}
				if (func_223() == 1)
				{
					func_222(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 4;
				}
				if (func_223() == 2)
				{
					func_221();
				}
			}
			else
			{
				if (func_223() == 0)
				{
					func_222(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 2;
				}
				if (func_223() == 1)
				{
					func_222(Local_310, fLocal_322, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 3;
				}
				if (func_223() == 2)
				{
					func_222(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 4;
				}
			}
		}
		else if (func_27(0))
		{
			func_222(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_195 = 1;
			iLocal_174 = 0;
			iLocal_27 = 2;
		}
		else
		{
			iLocal_174 = 0;
			iLocal_27 = 2;
		}
	}
}

void func_221()
{
	iLocal_196 = 0;
	if (!unk_0xF4C685E933068D23())
	{
		unk_0x271524E4281048DC(0);
	}
	unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), 1747.04f, 3267.456f, 40.246f, 1, 0, 0, 1);
	unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 229.0887f);
	if (unk_0x538DF9E5B1DF01EB(iLocal_47))
	{
		unk_0x2F2948A2506AA404(&iLocal_47);
	}
	if (!unk_0x538DF9E5B1DF01EB(iLocal_47))
	{
		unk_0x939DA7EBCC6588FF(joaat("cargobob"));
		while (!unk_0x5494F37F35C1D7D7(joaat("cargobob")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_47 = unk_0x9BB6F54E415071A1(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 1, 1);
		unk_0x048CB31CFEFF3599(iLocal_47, 0, 1);
		unk_0x048CB31CFEFF3599(iLocal_47, 1, 1);
		unk_0x542B8BF5C21F2470(iLocal_47, 2);
		unk_0xF6F04B5324C9DA32(iLocal_47, 1);
		unk_0x3CC3106305C40A28(iLocal_47, 1);
		unk_0xA3171FC009D32621(iLocal_47, 0);
		func_86(iLocal_47, 0);
	}
	if (unk_0xF4C685E933068D23())
	{
		unk_0x722B7ADE7AACF079(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1));
	}
	unk_0x20D6E0EA145DF751(0f);
	if (!unk_0x83B393DE31BAC8F0())
	{
		unk_0x5FE2A83120E8127F(800);
	}
	while (!unk_0x83B393DE31BAC8F0())
	{
		unk_0x5FE2A83120E8127F(800);
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
}

void func_222(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_237())
	{
		unk_0xFF9F94FD851C212A(0);
		unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 2);
		unk_0x8D033DA6320BDCF9(1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
		}
		Global_90038 = { Param0 };
		Global_90041 = fParam3;
		Global_90037 = 1;
		if (iParam4 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 14);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 24);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 24);
		}
		func_192(1);
	}
}

int func_223()
{
	if (!Global_90042 == 10 && !Global_90042 == 9)
	{
		return 0;
	}
	return Global_90042.f_2;
}

void func_224(int iParam0, bool bParam1)
{
	unk_0xC45F8617F5021E2C(iParam0, !bParam1);
	unk_0x24469800558B4973(iParam0, bParam1);
}

void func_225()
{
	if (!func_237())
	{
		if (iLocal_174 == 0)
		{
			iLocal_27 = 1;
		}
	}
	else
	{
		iLocal_174 = 0;
		iLocal_27 = 1;
	}
}

void func_226()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_47))
	{
		if (unk_0xECFECDAD51A6184F(iLocal_47, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_47, 0))
				{
					if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), iLocal_47))
					{
						if (func_227(unk_0xA16EC202D9D35357(), iLocal_47) == -1)
						{
							unk_0x4B404C739A9AFC7A(0, 114, 1);
						}
					}
				}
			}
		}
	}
}

int func_227(int iParam0, int iParam1)
{
	if (!unk_0xE44A580B551C3645(iParam0) && !unk_0xE44A580B551C3645(uParam1))
	{
		if (unk_0xD9275EB8FA656B5C(iParam0, iParam1))
		{
			if (unk_0xD8A521688BDBE867(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_228()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (iLocal_27 == 2 || iLocal_27 == 3)
		{
			if (func_201(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 3, 200, 0) || iLocal_210 == 1)
			{
				unk_0xF9E0EA5A2AF3597D(unk_0x1788E93557766241());
				unk_0xBC2821836EC525D4(unk_0x1788E93557766241());
			}
		}
		if (iLocal_27 == 4)
		{
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 0 && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_310, 1) > 1000f)
			{
				unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
				unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
			}
		}
	}
}

void func_229()
{
}

void func_230()
{
	if (iLocal_288 == 0)
	{
		iLocal_184 = 0;
		while (iLocal_184 <= 12)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_184]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_184]))
				{
					if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_184], unk_0xA16EC202D9D35357()))
					{
						if (func_2(uLocal_32[iLocal_184], unk_0xA16EC202D9D35357(), 1) < 40f)
						{
							if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
							{
								iLocal_288 = 1;
							}
						}
						if (func_2(uLocal_32[iLocal_184], unk_0xA16EC202D9D35357(), 1) < 25f)
						{
							if (func_206(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed"))
							{
								if (func_235(uLocal_32[iLocal_184], 6))
								{
									iLocal_288 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_184++;
		}
	}
	if (iLocal_212 == 0)
	{
		if (func_20() == 2)
		{
			func_127(&uLocal_402, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
			iLocal_212 = 1;
		}
	}
	if (iLocal_209 == 0)
	{
		iLocal_191 = 0;
		while (iLocal_191 <= 1)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_191]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_191]))
				{
					if (iLocal_289 == 0 && iLocal_290 == 0)
					{
						if (!func_108())
						{
							if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
							{
								if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_191], 1) < 25f)
								{
									if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_191], unk_0xA16EC202D9D35357()))
									{
										if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !func_207(0))
										{
											if (func_206(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed"))
											{
												if (unk_0x538DF9E5B1DF01EB(uLocal_32[0]))
												{
													if (!unk_0x2DE0B96E966FD817(uLocal_32[0]))
													{
														if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[0], 1) < 30f)
														{
															func_127(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x538DF9E5B1DF01EB(uLocal_32[1]))
												{
													if (!unk_0x2DE0B96E966FD817(uLocal_32[1]))
													{
														if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[1], 1) < 30f)
														{
															func_127(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_126(&uLocal_402, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_186 = unk_0x09560C7DE2A384BD();
													iLocal_185 = unk_0x09560C7DE2A384BD();
													iLocal_289 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_290 == 0 && iLocal_289 == 0)
					{
						if (!func_108())
						{
							if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
							{
								if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_191], 1) < 25f)
								{
									if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_191], unk_0xA16EC202D9D35357()))
									{
										if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
										{
											if (func_206(unk_0xA16EC202D9D35357()) == joaat("weapon_unarmed") || func_207(0))
											{
												if (unk_0x538DF9E5B1DF01EB(uLocal_32[0]))
												{
													if (!unk_0x2DE0B96E966FD817(uLocal_32[0]))
													{
														if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[0], 1) < 30f)
														{
															func_127(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x538DF9E5B1DF01EB(uLocal_32[1]))
												{
													if (!unk_0x2DE0B96E966FD817(uLocal_32[1]))
													{
														if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[1], 1) < 30f)
														{
															func_127(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_126(&uLocal_402, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_186 = unk_0x09560C7DE2A384BD();
													iLocal_185 = unk_0x09560C7DE2A384BD();
													iLocal_290 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_289 == 1 || iLocal_290 == 1)
					{
						if (iLocal_288 == 0 && iLocal_209 == 0)
						{
							if (iLocal_309 == 0)
							{
								if (unk_0x09560C7DE2A384BD() > iLocal_185 + 8000)
								{
									if (!func_108())
									{
										if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
										{
											if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_191], 1) < 25f)
											{
												if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_191], unk_0xA16EC202D9D35357()))
												{
													if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !func_207(0))
													{
														if (func_206(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed"))
														{
															if (unk_0x538DF9E5B1DF01EB(uLocal_32[0]))
															{
																if (!unk_0x2DE0B96E966FD817(uLocal_32[0]))
																{
																	if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[0], 1) < 30f)
																	{
																		func_127(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (unk_0x538DF9E5B1DF01EB(uLocal_32[1]))
															{
																if (!unk_0x2DE0B96E966FD817(uLocal_32[1]))
																{
																	if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[1], 1) < 30f)
																	{
																		func_127(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_126(&uLocal_402, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_185 = unk_0x09560C7DE2A384BD();
																iLocal_309 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (unk_0x09560C7DE2A384BD() > iLocal_186 + 8000)
							{
								if (!func_108())
								{
									if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
									{
										if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_191], 1) < 25f)
										{
											if (unk_0x864FA69DF1FAD1ED(uLocal_32[iLocal_191], unk_0xA16EC202D9D35357()))
											{
												if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
												{
													if (func_206(unk_0xA16EC202D9D35357()) == joaat("weapon_unarmed") || func_207(0))
													{
														if (unk_0x538DF9E5B1DF01EB(uLocal_32[0]))
														{
															if (!unk_0x2DE0B96E966FD817(uLocal_32[0]))
															{
																if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[0], 1) < 30f)
																{
																	func_127(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (unk_0x538DF9E5B1DF01EB(uLocal_32[1]))
														{
															if (!unk_0x2DE0B96E966FD817(uLocal_32[1]))
															{
																if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[1], 1) < 30f)
																{
																	func_127(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_309 == 0)
														{
															if (func_126(&uLocal_402, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = unk_0x09560C7DE2A384BD();
																iLocal_309 = 1;
															}
														}
														if (iLocal_302 == 0)
														{
															iLocal_190 = unk_0x09560C7DE2A384BD();
															iLocal_302 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iLocal_191++;
		}
	}
	if (unk_0x09560C7DE2A384BD() > iLocal_176 + 12000)
	{
		if (iLocal_209 == 1 || iLocal_288 == 1)
		{
			if (!unk_0xCE3402BDFD2ADED8() || !unk_0xFD672F92EEA2DC13())
			{
				if (!func_108())
				{
					if (func_234())
					{
						iLocal_180 = unk_0x444ECD635D5FD45F(0, 6);
						if (iLocal_180 == 0)
						{
							func_231(func_233(), "OVER_THERE", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
						else if (iLocal_180 == 1)
						{
							func_231(func_233(), "PROVOKE_TRESSPASS", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
						else if (iLocal_180 == 2)
						{
							func_231(func_233(), "UP_THERE", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
						else if (iLocal_180 == 3)
						{
							func_231(func_233(), "suspect_spotted", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
						else if (iLocal_180 == 4)
						{
							func_231(func_233(), "GENERIC_INSULT_HIGH", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
						else if (iLocal_180 == 5)
						{
							func_231(func_233(), "GENERIC_INSULT_MED", 9);
							iLocal_176 = unk_0x09560C7DE2A384BD();
						}
					}
				}
			}
		}
	}
}

void func_231(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD550A19A432377FF(uParam0, sParam1, func_232(iParam2), 1);
}

int func_232(int iParam0)
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

int func_233()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x31EC0FDDC2D3EB41(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_178 = 0;
	while (iLocal_178 <= 9)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_178]))
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_178]))
			{
				if (iVar0 == uLocal_32[iLocal_178])
				{
					return uLocal_32[iLocal_178];
				}
			}
		}
		iLocal_178++;
	}
	return 0;
}

int func_234()
{
	iLocal_179 = 0;
	while (iLocal_179 <= 9)
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_32[iLocal_179]))
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_32[iLocal_179]))
			{
				if (func_2(unk_0xA16EC202D9D35357(), uLocal_32[iLocal_179], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_179++;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0) && !unk_0x2DE0B96E966FD817(iParam0))
	{
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), iParam1))
		{
			if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iParam0) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_236()
{
	if (unk_0xA1C41285CCB9FF5C("ARMY_HELI"))
	{
		if (unk_0x77EC74238A42DB32("ARMY_HELI"))
		{
			unk_0x1C4C3C0B35B68375("ARMY_HELI", 0);
		}
	}
}

int func_237()
{
	if (Global_90042 == 10 || Global_90042 == 9)
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	func_239(73);
	unk_0x95AB598E6554985B("DOCKP2B", 0);
	while (!unk_0x5CD78FA34B48CB6E(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
	}
	unk_0x24469800558B4973(5, false);
	unk_0x24469800558B4973(3, false);
	unk_0x24469800558B4973(4, false);
	unk_0xC7210908156431E0(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0, 1);
	unk_0xC7210908156431E0(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0, 1);
	unk_0xC7210908156431E0(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1);
	uLocal_66 = unk_0x4210B2DCFC2838AC(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	uLocal_68 = unk_0x4210B2DCFC2838AC(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0, 1, 1, 1);
	unk_0x84710FE7666EBF7B(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, 0);
	unk_0x84710FE7666EBF7B(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, 0);
	unk_0x08E9BC7825B63619("WantedMusicOnMission", 1);
	unk_0x32DC163A33A4AB6D(joaat("buzzard"), 1);
	unk_0xC7210908156431E0(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0, 1);
	unk_0xD1D6EEB3AEFA757C(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f);
	unk_0xC7210908156431E0(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0, 1);
	unk_0xD1D6EEB3AEFA757C(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f);
}

void func_239(int iParam0)
{
	Global_86302 = 0;
	switch (iParam0)
	{
		case 72:
			func_204(2);
			func_204(4);
			break;
		
		case 73:
			func_204(0);
			func_204(1);
			func_204(7);
			break;
		
		case 92:
			func_204(10);
			func_204(9);
			func_204(13);
			func_204(6);
			break;
		
		case 68:
			func_204(11);
			break;
		
		case 78:
			func_204(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_204(3);
			break;
		
		default:
			break;
	}
}

void func_240()
{
	func_241();
	unk_0x32DC163A33A4AB6D(joaat("cargobob"), 0);
	unk_0x32DC163A33A4AB6D(joaat("buzzard"), 0);
	unk_0x1413BE75956BF858(1);
	unk_0xC7210908156431E0(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 1, 1);
	unk_0xC7210908156431E0(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 1, 1);
	unk_0xF56FBED2A1E66308();
	unk_0xA2D4DD3AE5BD39B4(uLocal_66, 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_67, 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_68, 0);
	func_224(1, 1);
	func_224(2, 1);
	func_224(7, 1);
	func_224(8, 1);
	func_224(9, 1);
	func_224(10, 1);
	func_224(4, 1);
	func_224(12, 1);
	func_100();
	if (unk_0xA1C41285CCB9FF5C("ARMY_GUARD"))
	{
		if (!unk_0x77EC74238A42DB32("ARMY_GUARD"))
		{
			unk_0x1C4C3C0B35B68375("ARMY_GUARD", 1);
		}
	}
	unk_0x7C0AE4B10FB5A304("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x7FB8C8F8994F6273("AZ_AFB_ALARM_SPEECH", 0, 0);
	unk_0x08E9BC7825B63619("PoliceScannerDisabled", 0);
	unk_0x08E9BC7825B63619("WantedMusicOnMission", 0);
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		func_101(&(Local_69[iLocal_175 /*8*/]));
		iLocal_175++;
	}
	if (unk_0xA1C41285CCB9FF5C("ARMY_HELI"))
	{
		if (!unk_0x77EC74238A42DB32("ARMY_HELI"))
		{
			unk_0x1C4C3C0B35B68375("ARMY_HELI", 1);
		}
	}
	unk_0x101360578835A5F9(iLocal_59);
	unk_0x82706E6C897B0FA1();
}

void func_241()
{
	Global_86302 = 0;
}

void func_242()
{
	int iVar0;
	
	if (unk_0x3EBB3CB89FC2CE55("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97439.f_7341 || func_27(0))
	{
		if (!func_243())
		{
			iVar0 = func_26();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_81199[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_243()
{
	if (((Global_90042 == 13 || Global_90042 == 10) || Global_90042 == 11) || Global_90042 == 12)
	{
		return 0;
	}
	return 1;
}

